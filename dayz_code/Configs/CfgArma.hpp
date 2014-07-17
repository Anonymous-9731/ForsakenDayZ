class CfgActions {
	class None; // External class reference

	class Rearm : None {
		show = 0;
	};	
	class Heal : None {
		show = 0;
	};
	class HealSoldier : None {
		show = 0;
	};
	class FirstAid : None {
		show = 0;
	};
	class TakeBag : None {
		show = 0;
	};
};

class CfgLoadingTexts {
	titlesDefault[] = {""};
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
        cueFriendlyColor[] = {0,0,0,0};
        cueEnemyColor[] = {0,0,0,0};
    };

	class IslandMap
    {
        colorFriendly[] = {0,0.5,0,0}; //{0,0.5,0,1}; 
        colorEnemy[] = {0.5,0,0,0};    //{0.5,0,0,1};	  
        colorNeutral[] = {1.0,0.5,0,0};//{1.0,0.5,0,1};
        colorCivilian[] = {0,0,1,0};   //{0,0,1,0};
        colorUnknown[] = {1.0,0.5,0,0};//{1.0,0.5,0,0.8};
        shadow = 2;
        iconPlayer = "\ca\ui\data\map_player_ca.paa";
        iconPlayerDirection = "\ca\ui\data\map_dir_ca.paa";
        iconCheckpoint = "\ca\ui\data\map_target_ca.paa";
        iconCamera = "\ca\ui\data\map_camera_ca.paa";
        iconSelect = "\ca\ui\data\map_select_ca.paa";
        iconSensor = "\ca\ui\data\map_trigger_ca.paa";
        sizeLeader = 24;
        size = 26;
        sizePlayer = 26;
        colorTracks[] = {0.2,0.13,0,1};
        colorRoads[] = {0.2,0.13,0,1};
        colorMainRoads[] = {0,0,0,1};
        colorTracksFill[] = {0,0,0,0};
        colorRoadsFill[] = {1,0.88,0.65,1};
        colorMainRoadsFill[] = {0.94,0.69,0.2,1};
        cursorLineWidth = 1;
        colorGrid[] = {0.05,0.1,0,0.6};
        colorGridMap[] = {0.05,0.1,0,0.4};
    };
	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
};


class CfgSurvival {
	class Inventory {
		class Default {
			//weapons[] = {"Makarov"};
			magazines[] = {"ItemBandage","ItemPainkiller"};
			weapons[] = {"ItemFlashlight"};
			backpackWeapon = "";
			backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow{};
		class Cow02: Cow{};
		class Cow03: Cow{};
		class Cow04: Cow{};
		class Cow01_EP1: Cow{};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Goat01_EP1: Goat{};
		class Goat02_EP1: Goat{};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep01_EP1: Sheep{};
		class Sheep02_EP1: Sheep{};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Cock: Hen{};
		class DZ_Fin: Default {
			yield = 0;
			rawfoodtype = "FoodSteakRaw";
		};
		class DZ_Pastor: DZ_Fin{};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};

	};
	class Skins {
		class Default {
			sex = "male";
			playerModel = "Survivor2_DZ";
		};
		class Skin_Survivor2_DZ: Default {
			sex = "male";
			playerModel = "Survivor2_DZ";
		};
		class Skin_Sniper1_DZ: Default {
			sex = "male";
			playerModel = "Sniper1_DZ";
		};
		class Skin_Camo1_DZ: Default {
			sex = "male";
			playerModel = "Camo1_DZ";
		};
		class Skin_Rocket_DZ: Default {
			sex = "male";
			playerModel = "Rocket_DZ";
		};
		class Skin_Soldier1_DZ: Default {
			sex = "male";
			playerModel = "Soldier1_DZ";
		};
		class Skin_RU_Policeman_DZ: Default {
			sex = "male";
			playerModel = "RU_Policeman_DZ";
		};
		class Skin_Pilot_EP1_DZ: Default {
			sex = "male";
			playerModel = "Pilot_EP1_DZ";
		};
		class Skin_Haris_Press_EP1_DZ: Default {
			sex = "male";
			playerModel = "Haris_Press_EP1_DZ";
		};
		class Skin_Ins_Soldier_GL_DZ: Default {
			sex = "male";
			playerModel = "Ins_Soldier_GL_DZ";
		};
		class Skin_GUE_Commander_DZ: Default {
			sex = "male";
			playerModel = "GUE_Commander_DZ";
		};
		class Skin_Functionary1_EP1_DZ: Default {
			sex = "male";
			playerModel = "Functionary1_EP1_DZ";
		};
		class Skin_Priest_DZ: Default {
			sex = "male";
			playerModel = "Priest_DZ";
		};
		class Skin_Rocker1_DZ: Default {
			sex = "male";
			playerModel = "Rocker1_DZ";
		};
		class Skin_Rocker2_DZ: Default {
			sex = "male";
			playerModel = "Rocker2_DZ";
		};
		class Skin_Rocker3_DZ: Default {
			sex = "male";
			playerModel = "Rocker3_DZ";
		};
		class Skin_Rocker4_DZ: Default {
			sex = "male";
			playerModel = "Rocker4_DZ";
		};
		class Skin_Bandit1_DZ: Default {
			sex = "male";
			playerModel = "Bandit1_DZ";
		};
		class Skin_Bandit2_DZ: Default {
			sex = "male";
			playerModel = "Bandit2_DZ";
		};
		class Skin_GUE_Soldier_MG_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_MG_DZ";
		};
		class Skin_GUE_Soldier_Sniper_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_Sniper_DZ";
		};
		class Skin_GUE_Soldier_Crew_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_Crew_DZ";
		};
		class Skin_GUE_Soldier_CO_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_CO_DZ";
		};
		class Skin_GUE_Soldier_2_DZ: Default {
			sex = "male";
			playerModel = "GUE_Soldier_2_DZ";
		};
		class Skin_BanditW1_DZ: Default {
			sex = "female";
			playerModel = "BanditW1_DZ";
		};
		class Skin_BanditW2_DZ: Default {
			sex = "female";
			playerModel = "BanditW2_DZ";
		};
		class Skin_SurvivorW2_DZ: Default {
			sex = "female";
			playerModel = "SurvivorW2_DZ";
		};
		class Skin_SurvivorWpink_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWpink_DZ";
		};
		/*
		class Skin_SurvivorWsequisha_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWsequisha_DZ";
		};
		class Skin_SurvivorWsequishaD_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWsequishaD_DZ";
		};
		*/
		class Skin_SurvivorWcombat_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWcombat_DZ";
		};
		class Skin_SurvivorWdesert_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWdesert_DZ";
		};
		class Skin_SurvivorWurban_DZ: Default {
			sex = "female";
			playerModel = "SurvivorWurban_DZ";
		};
		class Skin_SurvivorW3_DZ: Default {
			sex = "female";
			playerModel = "SurvivorW3_DZ";
		};
		class Skin_Soldier_TL_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_TL_PMC_DZ";
		};
		class Skin_Soldier_Sniper_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_Sniper_PMC_DZ";
		};
		class Skin_Soldier_Bodyguard_AA12_PMC_DZ: Default {
			sex = "male";
			playerModel = "Soldier_Bodyguard_AA12_PMC_DZ";
		};
		class Skin_FR_OHara_DZ: Default
		{
			sex = "male";
			playerModel = "FR_OHara_DZ";
		};
		class Skin_FR_Rodriguez_DZ: Default
		{
			sex = "male";
			playerModel = "FR_Rodriguez_DZ";
		};
		class Skin_CZ_Soldier_Sniper_EP1_DZ: Default
		{
			sex = "male";
			playerModel = "CZ_Soldier_Sniper_EP1_DZ";
		};
		class Skin_Graves_Light_DZ: Default
		{
			sex = "male";
			playerModel = "Graves_Light_DZ";
		};
		class Skin_Drake_Light_DZ: Default {
			sex = "male";
			playerModel = "Drake_Light_DZ";
		};
		class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: Default {
			sex = "male";
			playerModel = "CZ_Special_Forces_GL_DES_EP1_DZ";
		};
		class Skin_TK_INS_Soldier_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_INS_Soldier_EP1_DZ";
		};
		class Skin_TK_INS_Warlord_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_INS_Warlord_EP1_DZ";
		};
		class Skin_TK_Special_Forces_MG_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_Special_Forces_MG_EP1_DZ";
		};
		class Skin_TK_Soldier_Sniper_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_Soldier_Sniper_EP1_DZ";
		};
		class Skin_TK_Commander_EP1_DZ: Default {
			sex = "male";
			playerModel = "TK_Commander_EP1_DZ";
		};
		class Skin_RU_Soldier_Crew_DZ: Default {
			sex = "male";
			playerModel = "RU_Soldier_Crew_DZ";
		};
		class Skin_INS_Lopotev_DZ: Default {
			sex = "male";
			playerModel = "INS_Lopotev_DZ";
		};
		class Skin_INS_Soldier_AR_DZ: Default {
			sex = "male";
			playerModel = "INS_Soldier_AR_DZ";
		};		
		class Skin_INS_Soldier_CO_DZ: Default {
			sex = "male";
			playerModel = "INS_Soldier_CO_DZ";
		};
		class Skin_INS_Bardak_DZ: Default {
			sex = "male";
			playerModel = "INS_Bardak_DZ";
		};
		class Skin_INS_Worker2_DZ: Default {
			sex = "male";
			playerModel = "INS_Worker2_DZ";
		};
				class Skin_German_PoliceB_FDZ: Default {
			sex = "male";
			playerModel = "German_PoliceB_FDZ";
		};
		class Skin_German_PoliceC_FDZ: Default {
			sex = "male";
			playerModel = "German_PoliceC_FDZ";
		};
		class Skin_MSF_ATL_FDZ: Default {
			sex = "male";
			playerModel = "MSF_ATL_FDZ";
		};
		class Skin_MSF_TL_FDZ: Default {
			sex = "male";
			playerModel = "MSF_TL_FDZ";
		};
		class Skin_Scavenger_FDZ: Default {
			sex = "male";
			playerModel = "Scavenger_FDZ";
		};
		class Skin_SF_Multicam_Mask_FDZ: Default {
			sex = "male";
			playerModel = "SF_Multicam_Mask_FDZ";
		};
		class Skin_SF_Multicam_Light_FDZ: Default {
			sex = "male";
			playerModel = "SF_Multicam_Light_FDZ";
		};
		class Skin_SF_Multicam_Basic_FDZ: Default {
			sex = "male";
			playerModel = "SF_Multicam_Basic_FDZ";
		};
		class Skin_Russian_SF_Marksman_FDZ: Default {
			sex = "male";
			playerModel = "Russian_SF_Marksman_FDZ";
		};
		class Skin_Russian_SF_TL_FDZ: Default {
			sex = "male";
			playerModel = "Russian_SF_TL_FDZ";
		};
		class Skin_Stalker_Grey_FDZ: Default {
			sex = "male";
			playerModel = "Stalker_Grey_FDZ";
		};
		class Skin_Stalker_Wood_FDZ: Default {
			sex = "male";
			playerModel = "Stalker_Wood_FDZ";
		};
		class Skin_PMC3_FDZ: Default {
			sex = "male";
			playerModel = "PMC3_FDZ";
		};
		class Skin_PMC2_FDZ: Default {
			sex = "male";
			playerModel = "PMC2_FDZ";
		};
		class Skin_PMC1_FDZ: Default {
			sex = "male";
			playerModel = "PMC1_FDZ";
		};
		class Skin_Civilian4_FDZ: Default {
			sex = "male";
			playerModel = "Civilian4_FDZ";
		};
		class Skin_Civilian3_FDZ: Default {
			sex = "male";
			playerModel = "Civilian3_FDZ";
		};
		class Skin_Civilian2_FDZ: Default {
			sex = "male";
			playerModel = "Civilian2_FDZ";
		};
		class Skin_Civilian1_FDZ: Default {
			sex = "male";
			playerModel = "Civilian1_FDZ";
		};
		class Skin_SPECIAL_FORCESA_FDZ: Default {
			sex = "male";
			playerModel = "SPECIAL_FORCESA_FDZ";
		};		
		class Skin_SPECIAL_FORCESE_FDZ: Default {
			sex = "male";
			playerModel = "SPECIAL_FORCESE_FDZ";
		};
		class Skin_SPECIAL_FORCESD_FDZ: Default {
			sex = "male";
			playerModel = "SPECIAL_FORCESD_FDZ";
		};
		class Skin_FR_TL_FDZ: Default {
			sex = "male";
			playerModel = "FR_TL_FDZ";
		};
		class Skin_Navy_SEAL_TL_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_TL_FDZ";
		};
		class Skin_Navy_SEAL_GL_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_GL_FDZ";
		};
		class Skin_Navy_SEAL_MG_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_MG_FDZ";
		};
		class Skin_Navy_SEAL_AT_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_AT_FDZ";
		};
		class Skin_Navy_SEAL_diver_land_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_diver_land_FDZ";
		};
		class Skin_Navy_SEAL_ACa_FDZ: Default {
			sex = "male";
			playerModel = "Navy_SEAL_ACa_FDZ";
		};
		class Skin_Mercenary_Default9a_FDZ: Default {
			sex = "male";
			playerModel = "Mercenary_Default9a_FDZ";
		};
		class Skin_Mercenary_Default2_FDZ: Default {
			sex = "male";
			playerModel = "Mercenary_Default2_FDZ";
		};
		class Skin_Mercenary_Default18_FDZ: Default {
			sex = "male";
			playerModel = "Mercenary_Default18_FDZ";
		};
		class Skin_Mercenary_Default14_FDZ: Default {
			sex = "male";
			playerModel = "Mercenary_Default14_FDZ";
		};
		class Skin_Gangsta_merc1_FDZ: Default {
			sex = "male";
			playerModel = "Gangsta_merc1_FDZ";
		};
		class Skin_Desert_SOF_TL_FDZ: Default {
			sex = "male";
			playerModel = "Desert_SOF_TL_FDZ";
		};
		class Skin_gsc_eco_stalker_mask_duty_FDZ: Default {
			sex = "male";
			playerModel = "gsc_eco_stalker_mask_duty_FDZ";
		};
		class Skin_EGangsta_merc9_FDZ: Default {
			sex = "male";
			playerModel = "EGangsta_merc9_FDZ";
		};
		class Skin_DSniper1_FDZ: Default {
			sex = "male";
			playerModel = "DSniper1_FDZ";
		};
		class Skin_DSniper2_FDZ: Default {
			sex = "male";
			playerModel = "DSniper2_FDZ";
		};
		class Skin_DSniper3_FDZ: Default {
			sex = "male";
			playerModel = "DSniper3_FDZ";
		};
		class Skin_DSniper4_FDZ: Default {
			sex = "male";
			playerModel = "DSniper4_FDZ";
		};
		class Skin_DSniper5_FDZ: Default {
			sex = "male";
			playerModel = "DSniper5_FDZ";
		};
		class Skin_WSniper1_FDZ: Default {
			sex = "male";
			playerModel = "WSniper1_FDZ";
		};
		class Skin_WSniper2_FDZ: Default {
			sex = "male";
			playerModel = "WSniper2_FDZ";
		};
		class Skin_WSniper3_FDZ: Default {
			sex = "male";
			playerModel = "WSniper3_FDZ";
		};
		class Skin_WSniper4_FDZ: Default {
			sex = "male";
			playerModel = "WSniper4_FDZ";
		};
		class Skin_WSniper5_FDZ: Default {
			sex = "male";
			playerModel = "WSniper5_FDZ";
		};
		class Skin_WSniper6_FDZ: Default {
			sex = "male";
			playerModel = "WSniper6_FDZ";
		};
		class Skin_WSniper7_FDZ: Default {
			sex = "male";
			playerModel = "WSniper7_FDZ";
		};
		class Skin_WSniper8_FDZ: Default {
			sex = "male";
			playerModel = "WSniper8_FDZ";
		};
		class Skin_WSniper9_FDZ: Default {
			sex = "male";
			playerModel = "WSniper9_FDZ";
		};
		class Skin_WSniper10_FDZ: Default {
			sex = "male";
			playerModel = "WSniper10_FDZ";
		};
		class Skin_WSniper11_FDZ: Default {
			sex = "male";
			playerModel = "WSniper11_FDZ";
		};
		class Skin_WSniper12_FDZ: Default {
			sex = "male";
			playerModel = "WSniper12_FDZ";
		};
		class Skin_WSniper13_FDZ: Default {
			sex = "male";
			playerModel = "WSniper13_FDZ";
		};
		class Skin_WSniper14_FDZ: Default {
			sex = "male";
			playerModel = "WSniper14_FDZ";
		};
		class Skin_WSniper15_FDZ: Default {
			sex = "male";
			playerModel = "WSniper15_FDZ";
		};
		class Skin_WSniper16_FDZ: Default {
			sex = "male";
			playerModel = "WSniper16_FDZ";
		};
		class Skin_WSniper17_FDZ: Default {
			sex = "male";
			playerModel = "WSniper17_FDZ";
		};
		class Skin_WSniper18_FDZ: Default {
			sex = "male";
			playerModel = "WSniper18_FDZ";
		};
		class Skin_WSniper19_FDZ: Default {
			sex = "male";
			playerModel = "WSniper19_FDZ";
		};
		class Skin_WSniper20_FDZ: Default {
			sex = "male";
			playerModel = "WSniper20_FDZ";
		};
		class Skin_SSniper1_FDZ: Default {
			sex = "male";
			playerModel = "SSniper1_FDZ";
		};
		class Skin_SSniper2_FDZ: Default {
			sex = "male";
			playerModel = "SSniper2_FDZ";
		};
		class Skin_SSniper3_FDZ: Default {
			sex = "male";
			playerModel = "SSniper3_FDZ";
		};
		class Skin_SSniper4_FDZ: Default {
			sex = "male";
			playerModel = "SSniper4_FDZ";
		};
		class Skin_SSniper5_FDZ: Default {
			sex = "male";
			playerModel = "SSniper5_FDZ";
		};
				//Females-------------------------------------------
		class Skin_Female_Pilot_FDZ: Default {
			sex = "female";
			playerModel = "Female_Pilot_FDZ";
		};
		class Skin_Female_ACU_FDZ: Default {
			sex = "female";
			playerModel = "Female_ACU_FDZ";
		};
		class Skin_Female_ACUH_FDZ: Default {
			sex = "female";
			playerModel = "Female_ACUH_FDZ";
		};
		class Skin_Female_DMARPAT_FDZ: Default {
			sex = "female";
			playerModel = "Female_DMARPAT_FDZ";
		};
		class Skin_Female_DMARPATH_FDZ: Default {
			sex = "female";
			playerModel = "Female_DMARPATH_FDZ";
		};
	};
};
