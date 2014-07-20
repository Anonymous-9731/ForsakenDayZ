/*
	DayZ Epoch configuration
	
	Description: Adds DayZ Epoch-specific items to DZAI loot tables if Epoch mode is on.
	
	Last updated: 5:10 PM 9/8/2013
	
*/

DZAI_metalBars = [["ItemSilverBar",0.20],["ItemSilverBar10oz",0.10],["ItemGoldBar",0.03],["ItemGoldBar10oz",0.015]]; //Format: [["Bar1Classname",Bar1Chance],["Bar2Classname",Bar2Chance],["Bar2Classname",Bar2Chance]]
DZAI_metalBarNum = 2;		//Maximum number of metal bars to generate

DZAI_banditTypesNew = ["Taliban1","Taliban2","Taliban3","Taliban4","Taliban5","Taliban6","Taliban7","Taliban8","Taliban9","Taliban10","Taliban11","Taliban12","ETaliban1","ETaliban2","ETaliban3","ETaliban4","ETaliban5","ETaliban6","ETaliban7","ETaliban8","ETaliban9","ETaliban10","ETaliban11","ETaliban12","Terrorist1","Terrorist2","Terrorist3","Terrorist4","Terrorist5","Terrorist6","Terrorist7","Terrorist8","Terrorist9","Terrorist10","Terrorist11","Terrorist12","ETerrorist1","ETerrorist2","ETerrorist3","ETerrorist4","ETerrorist5","ETerrorist6","ETerrorist7","ETerrorist8","ETerrorist9","ETerrorist10","ETerrorist11","ETerrorist12"];
DZAI_ediblesNew = ["ItemSodaRabbit","ItemSodaMtngreen","ItemSodaClays","ItemSodaSmasht","ItemSodaDrwaste","ItemSodaLemonade","ItemSodaLvg","ItemSodaMzly","FoodBioMeat","FoodCanGriff","FoodCanBadguy","FoodCanBoneboy","FoodCanCorn","FoodCanCurgon","FoodCanDemon","FoodCanFraggleos","FoodCanHerpy","FoodCanOrlok","FoodCanPowell","FoodCanTylers","FoodPumpkin","FoodSunFlowerSeed"];
DZAI_MiscItemSNew = ["ItemZombieParts"];

DZAI_Backpacks0New = ["DZ_TerminalPack_EP1"]; //Added: DZ_TerminalPack_EP1
DZAI_Backpacks1New = ["DZ_TerminalPack_EP1", "DZ_CompactPack_EP1"]; //Added: DZ_TerminalPack_EP1, DZ_CompactPack_EP1
DZAI_Backpacks2New = ["DZ_CompactPack_EP1","DZ_GunBag_EP1"]; //Added: DZ_CompactPack_EP1, DZ_GunBag_EP1
DZAI_Backpacks3New = ["DZ_GunBag_EP1","DZ_LargeGunBag_EP1"]; //Added: DZ_GunBag_EP1, DZ_LargeGunBag_EP1

//Do not edit below lines. Replaces standard hatchet and matchbox classnames with Epoch versions.
(DZAI_tools0 select 3) set [0,"ItemHatchet_DZE"];
(DZAI_tools0 select 7) set [0,"ItemMatchbox_DZE"];
(DZAI_tools1 select 3) set [0,"ItemHatchet_DZE"];
(DZAI_tools1 select 7) set [0,"ItemMatchbox_DZE"];

diag_log "[DZAI] Epoch classnames loaded.";
