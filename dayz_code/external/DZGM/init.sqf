waitUntil {uiSleep 0.25;(!isNil "PVDZE_plr_LoginRecord")};
if (count units group player > 1) then {[player] join grpNull;};

acceptGroupInvite = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\acceptGroupInvite.sqf";
declineGroupInvite = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\declineGroupInvite.sqf";
disbandGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\disbandGroup.sqf";
inviteToGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\inviteToGroup.sqf";
kickFromGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\kickFromGroup.sqf";
leaveGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\leaveGroup.sqf";
playerSelectChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\playerSelectChange.sqf";
Updateplayerlist = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\Updateplayerlist.sqf";
tagname = true;
	
if (isNil "dzgm_init") then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\external\DZGM\icons.sqf";};
uiSleep 1;
[] spawn dzgm_init;
systemChat "Press right ctrl to open group management";