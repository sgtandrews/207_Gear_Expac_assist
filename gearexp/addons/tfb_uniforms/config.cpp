class CfgPatches
{
	class tfb_uniforms_cut
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