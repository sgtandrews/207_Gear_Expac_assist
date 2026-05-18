class CfgPatches
{
	class usasoc_backpacks_cut
	{
		units[]=
		{
			"K_Backpack_Base",
			"ACE_Box_Misc",
			"Medic_Pack",
			"JTAC_Pack",
			"MG_Pack"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"ace_gunbag",
			"A3_Weapons_F_Ammoboxes"
		};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_gunbag
	{
		init="call compileScript ['\z\ace\addons\gunbag\XEH_preStart.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_gunbag
	{
		init="call compileScript ['\z\ace\addons\gunbag\XEH_preInit.sqf']";
	};
};
class RscPicture;
class RscDisplayArsenal
{
	class Controls
	{
		class IconBackgroundPrimaryWeapon: RscPicture
		{
			onLoad="[ACE_player] call ace_gunbag_fnc_BIArsenalOpen";
		};
	};
};
class Extended_DisplayUnload_EventHandlers
{
	class RscDisplayArsenal
	{
		ace_gunbag="[ACE_player] call ace_gunbag_fnc_BIArsenalClose";
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class ace_gunbag_weaponTo
				{
					displayName="$STR_ace_gunbag_ToGunbag";
					condition="([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 0}";
					statement="[_player, _target] call ace_gunbag_fnc_toGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponSwap
				{
					displayName="$STR_ace_gunbag_SwapGunbag";
					condition="(ace_gunbag_swapGunbagEnabled) && ([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 2}";
					statement="[_player, _target] call ace_gunbag_fnc_swapGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponOff
				{
					displayName="$STR_ace_gunbag_OffGunbag";
					condition="([_target] call ace_gunbag_fnc_hasGunbag) && {[_player, _target] call ace_gunbag_fnc_canInteract == 1}";
					statement="[_player, _target] call ace_gunbag_fnc_offGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_status
				{
					displayName="$STR_ace_gunbag_Status";
					condition="[_target] call ace_gunbag_fnc_hasGunbag";
					statement="[_target] call ace_gunbag_fnc_status";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_gunbag_actions
				{
					displayName="$STR_ace_gunbag_Displayname";
					condition="[_player] call ace_gunbag_fnc_hasGunbag";
					showDisabled=0;
					icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					class ace_gunbag_weaponTo
					{
						displayName="$STR_ace_gunbag_ToGunbag";
						condition="[_player, _player] call ace_gunbag_fnc_canInteract == 0";
						statement="[_player, _player] call ace_gunbag_fnc_toGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponSwap
					{
						displayName="$STR_ace_gunbag_SwapGunbag";
						condition="(ace_gunbag_swapGunbagEnabled) && ([_player, _player] call ace_gunbag_fnc_canInteract == 2)";
						statement="[_player, _player] call ace_gunbag_fnc_swapGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponOff
					{
						displayName="$STR_ace_gunbag_OffGunbag";
						condition="[_player, _player] call ace_gunbag_fnc_canInteract == 1";
						statement="[_player, _player] call ace_gunbag_fnc_offGunbag";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_status
					{
						displayName="$STR_ace_gunbag_Status";
						condition="[_player] call ace_gunbag_fnc_hasGunbag";
						statement="[_player] call ace_gunbag_fnc_status";
						showDisabled=0;
						icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
				};
			};
		};
	};
	class Bag_Base;
	class K_Backpack_Base: Bag_Base // dont modif name & setting here under except the name
	{
		scope=1; // Visibility |1 = No visible on Arsenal | 2 = Visible on Arsenal
		scopeCurator=0;
		author="Kofee"; // use Your name or team name
		displayName="";
		picture="";
		isbackpack=1;
		model="";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		maximumLoad=500;
		mass=30;
	};
	class ace_gunbag: Bag_Base
	{
		_generalMacro="ace_gunbag";
		author="Ir0n1E";
		scope=0;
		displayName="$STR_ace_gunbag_Displayname";
		model="\z\ace\addons\gunbag\data\ace_gunbag.p3d";
		picture="\z\ace\addons\gunbag\ui\gunbag_ca.paa";
		icon="\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsdatatures[]=
		{
			"\z\ace\addons\gunbag\data\gunbag_co.paa"
		};
		maximumLoad=350;
		mass=11;
		ace_gunbag=1;
	};
	class ace_gunbag_Tan: ace_gunbag
	{
		_generalMacro="ace_gunbag_Tan";
		author="Ir0n1E";
		scope=0;
		displayName="$STR_ace_gunbag_Displayname_Tan";
		picture="\z\ace\addons\gunbag\ui\gunbag_tan_ca.paa";
		hiddenSelectionsdatatures[]=
		{
			"\z\ace\addons\gunbag\data\gunbag_tan_co.paa"
		};
	};
	class Box_NATO_Support_F;
	class ACE_Box_Misc: Box_NATO_Support_F
	{
		class TransportBackpacks
		{
			class _xx_ace_gunbag
			{
				backpack="ace_gunbag";
				count=3;
			};
			class _xx_ace_gunbag_Tan
			{
				backpack="ace_gunbag_Tan";
				count=3;
			};
		};
	};
	
	class Medic_Pack: Bag_Base
	{
		author="USASOC MOD Team";
		scope=2;
		displayName="TCCC RATS Pack";
		model="\USASOC_backpacks\Medic_Pack.p3d";
		picture="\USASOC_backpacks\ui\mbag_ca.paa";
		maximumLoad=360;
		mass=60;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=10000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class JTAC_Pack: Bag_Base
	{
		author="USASOC MOD Team";
		scope=2;
		displayName="JTAC Kitbag";
		model="\USASOC_backpacks\TACP_Pack.p3d";
		picture="\USASOC_backpacks\ui\jbag_ca.paa";
		maximumLoad=360;
		mass=60;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class MG_Pack: ace_gunbag
	{
		author="USASOC MOD Team";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		isbackpack=1;
		picture="\USASOC_backpacks\ui\mgbag_ca.paa";
		displayName="Heavy Weapons Rucksack";
		model="\USASOC_backpacks\MG_Pack.p3d";
		allowedSlots[]={901};
		maximumLoad=480;
		mass=90;
		hiddenSelections[]={};
		hiddenSelectionsdatatures[]={};
		transportMaxWeapons=1;
		transportMaxMagazines=10;
		class DestructionEffects
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class jpc_panel_2: Bag_Base
	{
		author="USASOC MOD Team";
		scope=2;
		displayName="JPC Backpanel, Sapper";
		model="\USASOC_backpacks\jpc_panel_2.p3d";
		picture="\USASOC_backpacks\ui\sapbag_ca.paa";
		maximumLoad=300;
		mass=30;
	};
};