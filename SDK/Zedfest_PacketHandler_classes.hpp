#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


// Class PacketHandler.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>             NetAnalyticsData;                                         // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.NetAnalyticsAggregatorConfig");
		return ptr;
	}

};


// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                               // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
