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
//Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
	EEmissionPatternTypeEnum__Chaos_Max = 2
};


// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
	EInitialVelocityTypeEnum__Chaos_Max = 2
};


// Enum GeometryCollectionSimulationCore.EObjectTypeEnum
enum class EObjectTypeEnum : uint8_t
{
	EObjectTypeEnum__Chaos_Object_Dynamic = 0,
	EObjectTypeEnum__Chaos_Object_Kinematic = 1,
	EObjectTypeEnum__Chaos_Object_Sleeping = 2,
	EObjectTypeEnum__Chaos_Max     = 3
};


// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Cube = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet = 2,
	EImplicitTypeEnum__Chaos_Max   = 3
};


// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
	ECollisionTypeEnum__Chaos_Max  = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
