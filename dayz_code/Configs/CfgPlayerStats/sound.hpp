/********************************************************************************************************************/
// Config file for [DayZ]
// Created by: [Horde/Das Attorney]
//********************************************************************************************************************/


class CfgSounds
{	
	class Vas_yessir;	
	class horde_sound_turning_page: Vas_yessir
	{
		name = "horde_sound_turning_page";
		sound[] = {"\z\addons\dayz_communityassets\sounds\page.wss", 0.5, 1};
		titles[] = {};
	};
	class horde_sound_close_book: Vas_yessir
	{
		name = "horde_sound_close_book";
		sound[] = {"\z\addons\dayz_communityassets\sounds\close.wss", 1, 1};
		titles[] = {};
	};
		sounds[] ={z_wzombie1,z_wzombie2};
	class z_wzombie1 {
		name = "";
		sound[] = {"\z\addons\dayz_code\external\watd\dayz_sfx\femalezombie_attack_04.ogg",0.3,1,40};
		titles[] = {0, ""};
	};
	
	class z_wzombie2 : z_wzombie1 {
		sound[] = {"\z\addons\dayz_code\external\watd\dayz_sfx\femalezombie_spotted_01.ogg",0.3,1,40};
	};
};