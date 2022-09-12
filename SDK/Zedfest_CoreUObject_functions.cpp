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
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function CoreUObject.Object.ExecuteUbergraph
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObject::ExecuteUbergraph(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}

<<<<<<< HEAD

=======
UObject* UObject::StaticConstructObject_Internal(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags,FUObjectItem::EInternalObjectFlags InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, void* InstanceGraph, bool bAssumeTemplateIsArchetype)
{	
	
	
			return reinterpret_cast<UObject * (__fastcall*)(UClass*, UObject*, FName, unsigned int, unsigned int, UObject*, bool, void*, bool)>(StaticConstructObject_InternalAddress)(Class, InOuter, Name, SetFlags, InternalSetFlags, Template, bCopyTransientsFromClassDefaults, InstanceGraph, bAssumeTemplateIsArchetype);
	
	
	//return nullptr;
}
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
