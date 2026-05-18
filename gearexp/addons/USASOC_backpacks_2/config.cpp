class CfgPatches
{
	class USASOC_backpacks_cut_2
	{
		units[]=
		{
			"USASOC_PANEL_7"
		};
		weapons[]=
		{};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"usasoc_backpacks_cut",
			"A3_Weapons_F_Ammoboxes"
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_mcamo;
	class USASOC_PANEL_7: B_AssaultPack_mcamo
	{
		author="USASOC Mod Team";
		scope=2;
		displayName="JPC Backpanel, Assaulter";
		model="USASOC_backpacks_2\JPCPanel1.p3d";
		picture="USASOC_backpacks_2\ui\assbag_ca.paa";
		maximumLoad=300;
		mass=30;
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};