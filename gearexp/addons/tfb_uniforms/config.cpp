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
				"sleeves",
				"gloves",
				"pads",
				"arms"
			};
			textureOptions[] =
			{
				"camo",
				"glove_co",
				"boot_co",
				"patch"
			};
			class camo
			{
				label = "Camo";
				values[] = 
				{
					"AMC",
					"MC"
				};
				hiddenSelections[] = 
				{
					"_top",
					"_bottom",
					"_cuffs"
				};
				class AMC
				{
					textures[] = 
					{
						"tfb_uniforms\tex\g3_top_amc_co.paa", 
						"tfb_uniforms\tex\g3_bottom_amc_co.paa",
						"tfb_uniforms\tex\cuffs_amc_co.paa"
					};
					image = "tfb_uniforms\ui\amc.paa";
				};
				class MC
				{
					textures[] =
					{
						"tfb_uniforms\tex\g3_top_mc_co.paa", 
						"tfb_uniforms\tex\g3_bottom_mc_co.paa",
						"tfb_uniforms\tex\cuffs_mc_co.paa"
					};
					image = "tfb_uniforms\ui\mc.paa";
				};
			};
			class glove_co
			{
				label = "Glove Colour";
				values[] = 
				{
					"Black",
					"Brown"
				};
				hiddenSelection = "_gloves";
				class Black
				{
					texture = "tfb_uniforms\tex\gunglove_grey_CO.paa";
					image = "tfb_uniforms\ui\blk.paa";
				};
				class Brown
				{
					texture = "tfb_uniforms\tex\gunglove_brown_CO.paa";
					image = "tfb_uniforms\ui\brwn.paa";
				};
			};
			class boot_co
			{
				label = "Boot Colour";
				values[] = 
				{
					"Brown",
					"Tan"
				};
				hiddenSelection = "_boots";
				class Brown
				{
					texture = "tfb_uniforms\tex\salomon_brown_co.paa";
					image = "tfb_uniforms\ui\brwn.paa";
				};
				class Tan
				{
					texture = "tfb_uniforms\tex\salomon_tan_co.paa";
					image = "tfb_uniforms\ui\cb.paa";
				};
			};
			class patch
			{
				label = "Patch Type";
				values[] =
				{
					"Lo",
					"Hi"
				};
				hiddenSelections[] =
				{
					"_patchR",
					"_patchL"
				};
				class Lo
				{
					label = "Low Vis";
					textures[] =
					{
						"tfb_uniforms\tex\patch\207lo_CO.paa",
						"tfb_uniforms\tex\patch\207lo_CO.paa"
					};
				};
				class Hi
				{
					label = "Colour";
					textures[] =
					{
						"tfb_uniforms\tex\patch\207_CO.paa",
						"tfb_uniforms\tex\patch\207_CO.paa"
					};
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