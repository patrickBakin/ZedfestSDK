<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
<<<<<<< HEAD
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
=======
TNameEntryArray* GlobalNames = nullptr;
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
DWORD64 UObject::StaticConstructObject_InternalAddress = 0x0;

>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
<<<<<<< HEAD
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
=======
	auto ObjectItem = UObject::GetGlobalObjects().GetByIndex(ObjectIndex);
	if (!(&ObjectItem))
	{
		return false;
	}
	if (!SerialNumbersMatch(&ObjectItem))
	{
		return false;
	}
	return !(&ObjectItem)->IsUnreachable() || (&ObjectItem)->IsPendingKill();
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
<<<<<<< HEAD
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
=======
		auto ObjectItem = &UObject::GetGlobalObjects().GetByIndex(ObjectIndex);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
