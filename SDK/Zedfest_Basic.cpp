// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
TNameEntryArray* GlobalNames = nullptr;
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
DWORD64 UObject::StaticConstructObject_InternalAddress = 0x0;

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
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = &UObject::GetGlobalObjects().GetByIndex(ObjectIndex);
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
