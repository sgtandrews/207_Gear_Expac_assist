class CfgPatches
{
	class tfb_sleeves_cut
	{
		magazines[] = {};
		ammo[] = {};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers",
			"tfb_uniforms_cut"
		};
	};
};

class CfgVehicles
{
	#include "CfgVehicles.hpp"
};

class CfgWeapons
{
	#include "CfgWeapons.hpp"
};