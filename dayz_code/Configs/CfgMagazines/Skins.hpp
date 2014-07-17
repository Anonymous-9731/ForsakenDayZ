class SkinBase: CA_Magazine {
	scope = 0;
	count = 1;
	type = 256;
	displayName = "Clothes";
	model = "\dayz_equip\models\cloth_parcel.p3d";
	picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
	descriptionShort = "Clothes Parcel";
	weight = 1;
	class ItemActions {
		class Use {
			text = $STR_EPOCH_PLAYER_268;
			script = "spawn player_wearClothes;";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_269b;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"SkinBase",2}};
		};
		class Crafting1 {
			text = $STR_EPOCH_PLAYER_269;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemBandage",2}};
			input[] = {{"SkinBase",1},{"ItemTrashToiletpaper",1}};
		};
	};
};
class Skin_Sniper1_DZ: SkinBase {
	scope = 2;
	displayName = $STR_EQUIP_NAME_43;
	descriptionShort = $STR_EQUIP_DESC_43;
};
class Skin_Rocket_DZ: SkinBase {
	scope = 2;
	displayName = "Officer Suit";
	descriptionShort = "Officer Suit";
};
class Skin_RU_Policeman_DZ: SkinBase {
	scope = 2;
	displayName = "Sergei";
	descriptionShort = "Police Officer Uniform";
};
class Skin_Pilot_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Ethan";
	descriptionShort = "Pilot Uniform";
};
class Skin_Haris_Press_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Harry";
	descriptionShort = "Press Uniform";
};
class Skin_Ins_Soldier_GL_DZ: SkinBase {
	scope = 2;
	displayName = "Terrorist Uniform";
	descriptionShort = "Terrorist Uniform";
};
class Skin_GUE_Commander_DZ: SkinBase {
	scope = 2;
	displayName = "Rebel Uniform";
	descriptionShort = "Rebel Uniform";
};
class Skin_Functionary1_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Donald";
	descriptionShort = "Business Suit";
};
class Skin_Priest_DZ: SkinBase {
	scope = 2;
	displayName = "James";
	descriptionShort = "Priest Outfit";
};
class Skin_Rocker1_DZ: SkinBase {
	scope = 2;
	displayName = "Duane";
	descriptionShort = "Rocker (black)";
};
class Skin_Rocker2_DZ: SkinBase {
	scope = 2;
	displayName = "Rod";
	descriptionShort = "Rocker (brown)";
};
class Skin_Rocker3_DZ: SkinBase {
	scope = 2;
	displayName = "Van";
	descriptionShort = "Rocker (blue)";
};
class Skin_Rocker4_DZ: SkinBase {
	scope = 2;
	displayName = "Bruce";
	descriptionShort = "Rocker (green)";
};
class Skin_Bandit1_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Outfit";
	descriptionShort = "Bandit Outfit";
};
class Skin_Bandit2_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Camo";
	descriptionShort = "Bandit Camo Outfit";
};
class Skin_GUE_Soldier_MG_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Gunner";
	descriptionShort = "Bandit Gunner Outfit";
};
class Skin_GUE_Soldier_Sniper_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Sniper";
	descriptionShort = "Bandit Sniper Outfit";
};
class Skin_GUE_Soldier_Crew_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Baklava";
	descriptionShort = "Bandit Baklava Outfit";
};
class Skin_GUE_Soldier_CO_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Mask";
	descriptionShort = "Bandit Mask Outfit";
};
class Skin_GUE_Soldier_2_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Hat";
	descriptionShort = "Bandit Hat with Baklava";
};
class Skin_BanditW1_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Annie";
	descriptionShort = "Bandit wrap blue top with brown pants.";
};
class Skin_BanditW2_DZ: SkinBase {
	scope = 2;
	displayName = "Bandit Jane";
	descriptionShort = "Bandit wrap grey top with brown camo pants.";
};
class Skin_SurvivorW3_DZ: SkinBase {
	scope = 2;
	displayName = "Jane";
	descriptionShort = "Grey top with brown camo pants.";
};
class Skin_SurvivorW2_DZ: SkinBase {
	scope = 2;
	displayName = "Annie";
	descriptionShort = "Civilian (female)";
};
class Skin_SurvivorWpink_DZ: SkinBase {
	scope = 2;
	displayName = "Melly (female)";
	descriptionShort = "Purple top with blue pants.";
};
/*
class Skin_SurvivorWsequisha_DZ: SkinBase {
	scope = 2;
	displayName = "Maria (female)";
	descriptionShort = "Maria Clothes (female)";
};
class Skin_SurvivorWsequishaD_DZ: SkinBase {
	scope = 2;
	displayName = "Sequisha (female)";
	descriptionShort = "Sequisha Clothes (female)";
};
*/
class Skin_SurvivorWcombat_DZ: SkinBase {
	scope = 2;
	displayName = "Alejandria";
	descriptionShort = "Blue camo top with brown camo pants.";
};
class Skin_SurvivorWdesert_DZ: SkinBase {
	scope = 2;
	displayName = "Savannah";
	descriptionShort = "White top with brown pants.";
};
class Skin_SurvivorWurban_DZ: SkinBase {
	scope = 2;
	displayName = "Sophia";
	descriptionShort = "Maroon top with grey pants.";
};
class Skin_TK_INS_Warlord_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Takistani Warlord";
	descriptionShort = "Takistani Warlord";
};
class Skin_TK_INS_Soldier_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Takistani Soldier";
	descriptionShort = "Takistani Soldier";
};
class Skin_CZ_Special_Forces_GL_DES_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Special Forces";
	descriptionShort = "Special Forces";
};
class Skin_Drake_Light_DZ: SkinBase {
	scope = 2;
	displayName = "Desert Camo";
	descriptionShort = "Desert Camo";
};
class Skin_Soldier_Bodyguard_AA12_PMC_DZ: SkinBase {
	scope = 2;
	displayName = "Bodyguard";
	descriptionShort = "Bodyguard";
};
class Skin_FR_OHara_DZ: SkinBase {
	scope = 2;
	displayName = "Jungle Camo";
	descriptionShort = "Jungle Camo";
};
class Skin_FR_Rodriguez_DZ: SkinBase {
	scope = 2;
	displayName = "Gunner Outfit";
	descriptionShort = "Gunner Outfit";
};
class Skin_CZ_Soldier_Sniper_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie";
	descriptionShort = "Desert Ghillie";
};
class Skin_Graves_Light_DZ: SkinBase {
	scope = 2;
	displayName = "Urban Camo";
	descriptionShort = "Urban Camo";
};
class Skin_Soldier_Sniper_PMC_DZ: SkinBase {
	scope = 2;
	displayName = "Marksman";
	descriptionShort = "Marksman";
};
class Skin_Soldier_TL_PMC_DZ: SkinBase {
	scope = 2;
	displayName = "Team Leader";
	descriptionShort = "Team Leader";
};
// new
class Skin_TK_Special_Forces_MG_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Smuggler";
	descriptionShort = "Smuggler";
};
class Skin_TK_Soldier_Sniper_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "Desert Sniper";
	descriptionShort = "Desert Sniper";
};
class Skin_TK_Commander_EP1_DZ: SkinBase {
	scope = 2;
	displayName = "General";
	descriptionShort = "General";
};
class Skin_RU_Soldier_Crew_DZ: SkinBase {
	scope = 2;
	displayName = "Crewman";
	descriptionShort = "Crewman";
};
class Skin_INS_Lopotev_DZ: SkinBase {
	scope = 2;
	displayName = "Boss";
	descriptionShort = "Team Leader";
};
class Skin_INS_Soldier_AR_DZ: SkinBase {
	scope = 2;
	displayName = "Cooper";
	descriptionShort = "Cooper";
};
class Skin_INS_Soldier_CO_DZ: SkinBase {
	scope = 2;
	displayName = "Travis";
	descriptionShort = "Travis";
};
class Skin_INS_Bardak_DZ: SkinBase {
	scope = 2;
	displayName = "Paulo";
	descriptionShort = "Paulo";
};
class Skin_INS_Worker2_DZ: SkinBase {
	scope = 2;
	displayName = "Steve";
	descriptionShort = "Steve";
};
class Skin_German_PoliceB_FDZ: SkinBase {
	scope = 2;
	displayName = "German Police Beret";
	descriptionShort = "German Police Beret";
};
class Skin_German_PoliceC_FDZ: SkinBase {
	scope = 2;
	displayName = "German Police";
	descriptionShort = "German Police";
};
class Skin_MSF_ATL_FDZ: SkinBase {
	scope = 2;
	displayName = "MSF ATL";
	descriptionShort = "MSF Assistant Team Leader";
};
class Skin_MSF_TL_FDZ: SkinBase {
	scope = 2;
	displayName = "MSF TL";
	descriptionShort = "MSF Team Leader";
};
class Skin_Scavenger_FDZ: SkinBase {
	scope = 2;
	displayName = "Scavenger Clothes";
	descriptionShort = "Scavenger Gear";
};
class Skin_SF_Multicam_Mask_FDZ: SkinBase {
	scope = 2;
	displayName = "Multicam Mask";
	descriptionShort = "Multicam Masked Gear";
};
class Skin_SF_Multicam_Light_FDZ: SkinBase {
	scope = 2;
	displayName = "Multicam Light";
	descriptionShort = "Multicam Light Gear";
};
class Skin_SF_Multicam_Basic_FDZ: SkinBase {
	scope = 2;
	displayName = "Multicam";
	descriptionShort = "Multicam Gear";
};
class Skin_Russian_SF_Marksman_FDZ: SkinBase {
	scope = 2;
	displayName = "Spetsnaz Marksman";
	descriptionShort = "Spetsnaz Marksman";
};
class Skin_Russian_SF_TL_FDZ: SkinBase {
	scope = 2;
	displayName = "Spetsnaz TL";
	descriptionShort = "Spetsnaz Team Leader";
};
class Skin_Stalker_Wood_FDZ: SkinBase {
	scope = 2;
	displayName = "Stalker Wood";
	descriptionShort = "Woodland Stalker Armor";
};
class Skin_Stalker_Grey_FDZ: SkinBase {
	scope = 2;
	displayName = "Stalker Grey";
	descriptionShort = "Grey Stalker Armor";
};
class Skin_PMC3_FDZ: SkinBase {
	scope = 2;
	displayName = "Tactical Clothes 3";
	descriptionShort = "High Speed Low Drag War Fighter Uniform";
};
class Skin_PMC2_FDZ: SkinBase {
	scope = 2;
	displayName = "Tactical Clothes 2";
	descriptionShort = "High Speed Low Drag War Fighter Uniform";
};
class Skin_PMC1_FDZ: SkinBase {
	scope = 2;
	displayName = "Tactical Clothes 1";
	descriptionShort = "High Speed Low Drag War Fighter Uniform";
};
class Skin_Civilian4_FDZ: SkinBase {
	scope = 2;
	displayName = "Casual Civilian";
	descriptionShort = "Civilian Clothes";
};
class Skin_Civilian3_FDZ: SkinBase {
	scope = 2;
	displayName = "Casual Civilian";
	descriptionShort = "Civilian Clothes";
};
class Skin_Civilian2_FDZ: SkinBase {
	scope = 2;
	displayName = "Casual Civilian";
	descriptionShort = "Civilian Clothes";
};
class Skin_Civilian1_FDZ: SkinBase {
	scope = 2;
	displayName = "Casual Civilian";
	descriptionShort = "Civilian Clothes";
};
class Skin_SPECIAL_FORCESA_FDZ: SkinBase {
	scope = 2;
	displayName = "SF Camo A";
	descriptionShort = "Special Forces Camo";
};
class Skin_SPECIAL_FORCESE_FDZ: SkinBase {
	scope = 2;
	displayName = "SF Camo E";
	descriptionShort = "Special Forces Camo";
};
class Skin_SPECIAL_FORCESD_FDZ: SkinBase {
	scope = 2;
	displayName = "SF Camo D";
	descriptionShort = "Special Forces Camo";
};
class Skin_FR_TL_FDZ: SkinBase {
	scope = 2;
	displayName = "USMC Team Leader";
	descriptionShort = "USMC Team Leader";
};
class Skin_Navy_SEAL_TL_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal Team Leader";
	descriptionShort = "Navy Seal Team Leader";
};
class Skin_Navy_SEAL_GL_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal Camo";
	descriptionShort = "Navy Seal Grenadier";
};
class Skin_Navy_SEAL_MG_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal Green";
	descriptionShort = "Navy Seal Machinegunner";
};
class Skin_Navy_SEAL_AT_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal Black";
	descriptionShort = "Navy Seal Black";
};
class Skin_Navy_SEAL_diver_land_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal Diver";
	descriptionShort = "Navy Seal Diver";
};
class Skin_Navy_SEAL_ACa_FDZ: SkinBase {
	scope = 2;
	displayName = "Navy Seal ACU";
	descriptionShort = "Navy Seal ACU";
};
class Skin_Mercenary_Default9a_FDZ: SkinBase {
	scope = 2;
	displayName = "Mercenary";
	descriptionShort = "Mercenary";
};
class Skin_Mercenary_Default2_FDZ: SkinBase {
	scope = 2;
	displayName = "Mercenary Black";
	descriptionShort = "Mercenary Black";
};
class Skin_Mercenary_Default18_FDZ: SkinBase {
	scope = 2;
	displayName = "Mercenary Olive";
	descriptionShort = "Mercenary Olive";
};
class Skin_Mercenary_Default14_FDZ: SkinBase {
	scope = 2;
	displayName = "Mercenary Bandana";
	descriptionShort = "Mercenary Bandana";
};
class Skin_Gangsta_merc1_FDZ: SkinBase {
	scope = 2;
	displayName = "Gangster Black Hoodie";
	descriptionShort = "Gangster Black Hoodie";
};
class Skin_Desert_SOF_TL_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert TL";
	descriptionShort = "Desert TL";
};
class Skin_gsc_eco_stalker_mask_duty_FDZ: SkinBase {
	scope = 2;
	displayName = "Stalker Mask";
	descriptionShort = "Stalker Mask";
};
class Skin_EGangsta_merc9_FDZ: SkinBase {
	scope = 2;
	displayName = "Gangster Mask";
	descriptionShort = "Gangster Mask";
};

class Skin_DSniper1_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie 1";
	descriptionShort = "Ghillie suit suitable for desert terrain.";
};
class Skin_DSniper2_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie 2";
	descriptionShort = "Ghillie suit suitable for desert terrain.";
};
class Skin_DSniper3_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie 3";
	descriptionShort = "Ghillie suit suitable for desert terrain.";
};
class Skin_DSniper4_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie 4";
	descriptionShort = "Ghillie suit suitable for desert terrain.";
};
class Skin_DSniper5_FDZ: SkinBase {
	scope = 2;
	displayName = "Desert Ghillie 5";
	descriptionShort = "Ghillie suit suitable for desert terrain.";
};
class Skin_WSniper1_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 1";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper2_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 2";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper3_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 3";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper4_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 4";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper5_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 5";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper6_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 6";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper7_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 7";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper8_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 8";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper9_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 9";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper10_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 10";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper11_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 11";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper12_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 12";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper13_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 13";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper14_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 14";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper15_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 15";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper16_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 16";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper17_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 17";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper18_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 18";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper19_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 19";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_WSniper20_FDZ: SkinBase {
	scope = 2;
	displayName = "Woodland Ghillie 20";
	descriptionShort = "Ghillie suit suitable for wooded terrain.";
};
class Skin_SSniper1_FDZ: SkinBase {
	scope = 2;
	displayName = "Snow Ghillie 1";
	descriptionShort = "Ghillie suit suitable for a snowy day.";
};
class Skin_SSniper2_FDZ: SkinBase {
	scope = 2;
	displayName = "Snow Ghillie 2";
	descriptionShort = "Ghillie suit suitable for a snowy day.";
};
class Skin_SSniper3_FDZ: SkinBase {
	scope = 2;
	displayName = "Snow Ghillie 3";
	descriptionShort = "Ghillie suit suitable for a snowy day.";
};
class Skin_SSniper4_FDZ: SkinBase {
	scope = 2;
	displayName = "Snow Ghillie 4";
	descriptionShort = "Ghillie suit suitable for a snowy day.";
};
class Skin_SSniper5_FDZ: SkinBase {
	scope = 2;
	displayName = "Snow Ghillie 5";
	descriptionShort = "Ghillie suit suitable for a snowy day.";
};


//Females----------------------------------------------------------------
class Skin_Female_Pilot_FDZ: SkinBase {
	scope = 2;
	displayName = "Female Pilot";
	descriptionShort = "Pilot overalls and helmet.";
};
class Skin_Female_ACU_FDZ: SkinBase {
	scope = 2;
	displayName = "Female ACU's";
	descriptionShort = "ACU's with combat gear. (Missing Helmet)";
};
class Skin_Female_ACUH_FDZ: SkinBase {
	scope = 2;
	displayName = "Female ACU's";
	descriptionShort = "ACU's with combat gear.";
};
class Skin_Female_DMARPAT_FDZ: SkinBase {
	scope = 2;
	displayName = "Female Desert Utilities";
	descriptionShort = "USMC desert utilities with combat gear.";
};
class Skin_Female_DMARPATH_FDZ: SkinBase {
	scope = 2;
	displayName = "Female Desert Utilities w/ Helmet";
	descriptionShort = "USMC desert utilities with combat gear.";
};