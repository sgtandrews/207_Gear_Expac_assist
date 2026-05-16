class CfgPatches
{
	class tfb_uniforms_cut
	{
		magazines[] = {};
		ammo[] = {};
		units[] = 
		{
			"tfb_g3_base_v",
			"tfb_g3_mc_g_v",
			"tfb_g3_mc_r1_g_v",
			"tfb_g3_mc_r2_g_v",
			"tfb_g3_mc_v",
			"tfb_g3_mc_r1_v",
			"tfb_g3_mc_r2_v",
			"tfb_g3_mc_np_g_v",
			"tfb_g3_mc_r1_np_g_v",
			"tfb_g3_mc_r2_np_g_v",
			"tfb_g3_mc_np_v",
			"tfb_g3_mc_r1_np_v",
			"tfb_g3_mc_r2_np_v"
		};
		weapons[] = 
		{
			"tfb_g3_base_w",
			"tfb_g3_mc_g_w",
			"tfb_g3_mc_r1_g_w",
			"tfb_g3_mc_r2_g_w",
			"tfb_g3_mc_w",
			"tfb_g3_mc_r1_w",
			"tfb_g3_mc_r2_w",
			"tfb_g3_mc_np_g_w",
			"tfb_g3_mc_r1_np_g_w",
			"tfb_g3_mc_r2_np_g_w",
			"tfb_g3_mc_np_w",
			"tfb_g3_mc_r1_np_w",
			"tfb_g3_mc_r2_np_w"
		};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"Extended_EventHandlers"
		};
	};
};

class CfgVehicles
{
	#include "CfgVehicles.hpp"
	#include "cfg\g3_np_v.hpp"
};

class CfgWeapons
{
	#include "CfgWeapons.hpp"
	#include "cfg\g3_np_w.hpp"
};

class XtdGearModels
{
	class CfgWeapons
	{
		class tfb_g3_u
		{
			label = "Crye G3 Combat Dress";
			author = "TFB";
			options[] = 
			{
				"top",
				"bottom",
				"sleeves",
				"gloves",
				"pads",
				"arms"
			};
			class top
			{
				label = "Top";
				alwaysSelectable = 1;
				values[] =
				{
					"mc"
				};
				class mc
				{
					label = "MC";
					description = "Multicam";
					image = "tfb_uniforms\ui\mc.paa";
				};
			};
			class bottom
			{
				label = "Pants";
				values[] =
				{
					"mc"
				};
				class mc
				{
					label = "MC";
					description = "Multicam";
					image = "tfb_uniforms\ui\mc.paa";
				};
			};
			class sleeves
			{
				label = "Sleeves";
				values[] =
				{
					"full",
					"half",
					"quarter"
				};
				class full
				{
					label = "Full";
					description = "No Roll";
				};
				class half
				{
					label = "1/2";
					description = "Half Roll";
				};
				class quarter
				{
					label = "1/4";
					description = "Quarter Roll";
				};
			};
			class gloves
			{
				label = "Gloves";
				values[] = 
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Gloves";
				};
				class off
				{
					label = "Off";
					description = "Gloves";
				};
			};
			class pads
			{
				label = "Knee Pads";
				values[] =
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Kneepads";
				};
				class off
				{
					label = "Off";
					description = "Kneepads";
				};
			};
			class arms
			{
				label = "Undershirt";
				values[] =
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "No Undershirt";
				};
				class off
				{
					label = "Off";
					description = "Undershirt";
				};
			};
		};
	};
};