class CfgPatches
{
	class tfb_sleeves_cut
	{
		magazines[] = {};
		ammo[] = {};
		units[] = 
		{
			"tfb_g3_base_v",
			"tfb_g3_mc_r1_g_s_v",
			"tfb_g3_mc_r2_g_s_v",
			"tfb_g3_mc_r1_s_v",
			"tfb_g3_mc_r2_s_v",
			"tfb_g3_mc_r1_np_g_s_v",
			"tfb_g3_mc_r2_np_g_s_v",
			"tfb_g3_mc_r1_np_s_v",
			"tfb_g3_mc_r2_np_s_v"
		};
		weapons[] = 
		{
			"tfb_g3_base_w",
			"tfb_g3_mc_r1_g_s_w",
			"tfb_g3_mc_r2_g_s_w",
			"tfb_g3_mc_r1_s_w",
			"tfb_g3_mc_r2_s_w",
			"tfb_g3_mc_r1_np_g_s_w",
			"tfb_g3_mc_r2_np_g_s_w",
			"tfb_g3_mc_r1_np_s_w",
			"tfb_g3_mc_r2_np_s_w"
		};
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