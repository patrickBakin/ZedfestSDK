#pragma once
#include <locale>
// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{

	

template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;



class FUObjectItem
{
public:
	UObject* Object;
	int32_t Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;

	enum EInternalObjectFlags//enum class EInternalObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<EInternalObjectFlags>>(EInternalObjectFlags::PendingKill));
	}
};

class FChunkedFixedUObjectArray
{
public:
	inline int Num() const
	{
		return NumElements;
	}

	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};

	inline FUObjectItem const* GetObjectPtr(int Index) const
	{
		auto ChunkIndex = Index / NumElementsPerChunk;
		auto WithinChunkIndex = Index % NumElementsPerChunk;
		auto Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	inline FUObjectItem const& GetByIndex(int Index) const
	{
		return *GetObjectPtr(Index);
	}

private:
	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int MaxElements;
	int NumElements;
	int MaxChunks;
	int NumChunks;
};

class FUObjectArray
{
public:
	int ObjFirstGCIndex;
	int ObjLastNonGCIndex;
	int MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
	FChunkedFixedUObjectArray ObjObjects;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FNameEntry
{
public:
	FNameEntry* HashNext;
	int Index;
	char AnsiName[1024];
};

class TNameEntryArray
{
public:
	enum
	{
		ElementsPerChunk = 16 * 1024,
		ChunkTableSize = (4 * 1024 * 1024 + ElementsPerChunk - 1) / ElementsPerChunk
	};

	bool IsValidIndex(int Index)
	{
		return Index >= 0 && Index < NumElements&& GetById(Index);
	}

	FNameEntry*& GetById(int Index)
	{
		return *GetItemPtr(Index);
	}

	FNameEntry** GetItemPtr(int Index)
	{
		auto ChunkIndex = Index / ElementsPerChunk;
		auto WithinChunkIndex = Index % ElementsPerChunk;
		auto Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}
	inline FNameEntry const* const& operator[](int Index) 
	{
		return *GetItemPtr(Index);
	}
	FNameEntry** Chunks[ChunkTableSize];
	int NumElements;
	int NumChunks;
};
/*
class TNameEntryArray
{
public:
	inline int Num() const
	{
		return GetNumElements();
	}

	inline bool IsValidIndex(int Index) const
	{
		return Index < Num() && Index >= 0;
	}

	inline FNameEntry const* const& operator[](int Index) const
	{
		return *GetItemPtr(Index);
	}

private:
	inline FNameEntry const* const* GetItemPtr(int Index) const
	{
		auto ChunkIndex = Index / 16384;
		auto WithinChunkIndex = Index % 16384;
		auto Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}
	int GetNumElements() const { return Read<int>((byte*)this + 0x8 + 0x4); };
	FNameEntry** Chunks[];
};
*/



struct FName
{	


	union
	{
		struct
		{
			int32_t ComparisonIndex;
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	inline FName()
		: ComparisonIndex(0),
		  Number(0)
	{
	};

	inline FName(int32_t i)
		: ComparisonIndex(i),
		  Number(0)
	{
	};

	FName(const char* nameToFind)
		: ComparisonIndex(0),
		  Number(0)
	{
		static std::set<int> cache;

		for (auto i : cache)
		{
			if (!std::strcmp(GetGlobalNames()[i]->AnsiName, nameToFind))
			{
				ComparisonIndex = i;
				
				return;
			}
		}

		for (auto i = 0; i < GetGlobalNames().NumElements; ++i)
		{
			if (GetGlobalNames()[i] != nullptr)
			{
				if (!std::strcmp(GetGlobalNames()[i]->AnsiName, nameToFind))
				{
					cache.insert(i);

					ComparisonIndex = i;

					return;
				}
			}
		}
	};

	static TNameEntryArray *GNames;
	static inline TNameEntryArray& GetGlobalNames()
	{
		return *GNames;//*GNames;
	};

	inline const char* GetName() const
	{
		return GetGlobalNames()[ComparisonIndex]->AnsiName;
	};

	inline bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);
	
		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[20];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
