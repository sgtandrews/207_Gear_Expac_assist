class CfgPatches
{
	class TFB_Vests_Cut
	{
		units[]={};
		weapons[]=
		{
			"TFB_JPC_Assaulter_13_152A",
			"TFB_JPC_Assaulter_13_152A_NB",
			"TFB_JPC_Assaulter_10_148",
			"TFB_JPC_Assaulter_10_148_NB",
			"TFB_JPC_Comms_2_Dual_2",
			"TFB_JPC_Comms_2_Dual_2_NB",
			"TFB_JPC_Weapons_2_148",
			"TFB_JPC_Weapons_2_148_NB",
			"TFB_JPC_Weapons_6_MPU5",
			"TFB_JPC_Weapons_6_MPU5_NB"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F"
		};
	};
};

class XtdGearModels {
    class CfgWeapons {
        class tfb_jpc_assaulter
        {
            options[] = 
			{
				"SETUP", 
				"BELT"
			}; 
            label = "JPC Assaulter";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A", 
					"B"
				}; 
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };
        class tfb_jpc_comms
        {
            options[] = 
			{
				"SETUP", 
				"BELT"
			}; 
            label = "JPC Comms";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A"
				}; 
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };
        class tfb_jpc_weapons
        {
            options[] = 
			{
				"SETUP", 
				"BELT"
			}; 
            label = "JPC Weapons";
            class SETUP
            {
                label = "Loadout";
                alwaysSelectable = 1;
                values[] = 
				{
					"A",
					"B"
				}; 
            };
            class BELT
            {
                label = "Battle Belt";
                alwaysSelectable = 1;
                values[] = 
				{ 
					"ON", 
					"OFF"
				}; 
            };
        };
 	 };
};

class XtdGearInfos {
    class CfgWeapons {
        class TFB_JPC_Assaulter_13_152A {
			model = "tfb_jpc_assaulter"
          CONFIGURATION = "ASSAULTER";
          SETUP = "B";
		  BELT = "ON";
        };
        class TFB_JPC_Assaulter_13_152A_NB {
			model = "tfb_jpc_assaulter"
          CONFIGURATION = "ASSAULTER";
          SETUP = "B";
		  BELT = "OFF";
        };
		class TFB_JPC_Assaulter_10_148 {
			model = "tfb_jpc_assaulter"
          CONFIGURATION = "ASSAULTER";
          SETUP = "A";
		  BELT = "ON";
        };
		class TFB_JPC_Assaulter_10_148_NB {
			model = "tfb_jpc_assaulter"
          CONFIGURATION = "ASSAULTER";
          SETUP = "A";
		  BELT = "OFF";
        };
		class TFB_JPC_Comms_2_Dual_2 {
			model = "tfb_jpc_comms"
          CONFIGURATION = "COMMS";
          SETUP = "A";
		  BELT = "ON";
        };
		class TFB_JPC_Comms_2_Dual_2_NB {
			model = "tfb_jpc_comms"
          CONFIGURATION = "COMMS";
          SETUP = "A";
		  BELT = "OFF";
        };
		class TFB_JPC_Weapons_2_148 {
			model = "tfb_jpc_weapons"
          CONFIGURATION = "WEAPONS";
          SETUP = "A";
		  BELT = "ON";
        };
		class TFB_JPC_Weapons_2_148_NB {
			model = "tfb_jpc_weapons"
          CONFIGURATION = "WEAPONS";
          SETUP = "A";
		  BELT = "OFF";
        };
		class TFB_JPC_Weapons_6_MPU5 {
		  model = "tfb_jpc_weapons"
          CONFIGURATION = "WEAPONS";
          SETUP = "B";
		  BELT = "ON";
        };
		class TFB_JPC_Weapons_6_MPU5_NB {
		  model = "tfb_jpc_weapons"
          CONFIGURATION = "WEAPONS";
          SETUP = "B";
		  BELT = "OFF";
		};
    };
};

class cfgWeapons
{
	class Vest_Camo_Base;
	class VestItem;
	class ItemCore;
	class TFB_JPC_Assaulter_1_148: ItemCore
	{
		author="TFL&Co";
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="JPC Vest (Base)";
		picture="\TFB_Vests\ui\assves_ca.paa";
		model="TFB_Vests\JPC\JPC_Assaulter_1_148.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_1_148.p3d";
			containerClass="Supply180";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TFB_JPC_Assaulter_10_148: TFB_JPC_Assaulter_1_148
	{
		scope=2;
		picture="\TFB_Vests\ui\assves_ca.paa";
		displayname="JPC Vest Assaulter 1";
		model="TFB_Vests\JPC\JPC_Assaulter_10_148.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_10_148.p3d";
		};
	};
	class TFB_JPC_Assaulter_13_152A: TFB_JPC_Assaulter_1_148
	{
		scope=2;
		picture="\TFB_Vests\ui\assves2_ca.paa";
		displayname="JPC Vest Assaulter 2";
		model="TFB_Vests\JPC\JPC_Assaulter_13_152A.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_13_152A.p3d";
		};
	};
	class TFB_JPC_Comms_2_Dual_2: TFB_JPC_Assaulter_1_148
	{
		scope=2;
		picture="\TFB_Vests\ui\comves_ca.paa";
		displayname="JPC Vest Comms 1";
		model="TFB_Vests\JPC\JPC_Comms_2_Dual_2.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Comms_2_Dual_2.p3d";
		};
	};
	class TFB_JPC_Weapons_2_148: TFB_JPC_Assaulter_1_148
	{
		scope=2;
		picture="\TFB_Vests\ui\wepves_ca.paa";
		displayname="JPC Vest Weapons 1";
		model="TFB_Vests\JPC\JPC_Weapons_2_148.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Weapons_2_148.p3d";
		};
	};
	class TFB_JPC_Weapons_6_MPU5: TFB_JPC_Assaulter_1_148
	{
		scope=2;
		picture="\TFB_Vests\ui\wepves2_ca.paa";
		displayname="JPC Vest Weapons 2";
		model="TFB_Vests\JPC\JPC_Weapons_6_MPU5.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Weapons_6_MPU5.p3d";
		};
	};
	class TFB_JPC_Assaulter_1_148_NB: ItemCore
	{
		author="TFL&Co";
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="JPC Vest, No Belt (Base)";
		picture="\TFB_Vests\ui\assves_ca.paa";
		model="TFB_Vests\JPC\JPC_Assaulter_1_148_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_1_148_NB.p3d";
			containerClass="Supply180";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=24;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=24;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class TFB_JPC_Assaulter_10_148_NB: TFB_JPC_Assaulter_1_148_NB
	{
		scope=2;
		picture="\TFB_Vests\ui\assves_ca.paa";
		displayname="JPC Vest Assaulter 1, No Belt";
		model="TFB_Vests\JPC\JPC_Assaulter_10_148_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_10_148_NB.p3d";
		};
	};
	class TFB_JPC_Assaulter_13_152A_NB: TFB_JPC_Assaulter_1_148_NB
	{
		scope=2;
		picture="\TFB_Vests\ui\assves2_ca.paa";
		displayname="JPC Vest Assaulter 2, No Belt";
		model="TFB_Vests\JPC\JPC_Assaulter_13_152A_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Assaulter_13_152A_NB.p3d";
		};
	};
	class TFB_JPC_Comms_2_Dual_2_NB: TFB_JPC_Assaulter_1_148_NB
	{
		scope=2;
		picture="\TFB_Vests\ui\comves_ca.paa";
		displayname="JPC Vest Comms 1, No Belt";
		model="TFB_Vests\JPC\JPC_Comms_2_Dual_2_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Comms_2_Dual_2_NB.p3d";
		};
	};
	class TFB_JPC_Weapons_2_148_NB: TFB_JPC_Assaulter_1_148_NB
	{
		scope=2;
		picture="\TFB_Vests\ui\wepves_ca.paa";
		displayname="JPC Vest Weapons 1, No Belt";
		model="TFB_Vests\JPC\JPC_Weapons_2_148_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Weapons_2_148_NB.p3d";
		};
	};
	class TFB_JPC_Weapons_6_MPU5_NB: TFB_JPC_Assaulter_1_148_NB
	{
		scope=2;
		picture="\TFB_Vests\ui\wepves2_ca.paa";
		displayname="JPC Vest Weapons 2, No Belt";
		model="TFB_Vests\JPC\JPC_Weapons_6_MPU5_NB.p3d";
		class ItemInfo: VestItem
		{
			uniformModel="TFB_Vests\JPC\JPC_Weapons_6_MPU5_NB.p3d";
		};
	};
};
