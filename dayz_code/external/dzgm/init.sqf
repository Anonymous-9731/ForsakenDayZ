waitUntil {uiSleep 0.25;(!isNil "PVDZE_plr_LoginRecord")};
if (count units group player > 1) then {[player] join grpNull;};

acceptGroupInvite = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\acceptGroupInvite.sqf";
declineGroupInvite = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\declineGroupInvite.sqf";
disbandGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\disbandGroup.sqf";
inviteToGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\inviteToGroup.sqf";
kickFromGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\kickFromGroup.sqf";
leaveGroup = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\leaveGroup.sqf";
playerSelectChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\playerSelectChange.sqf";
Updateplayerlist = compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\Updateplayerlist.sqf";
tagname = true;
	
if (isNil "dzgm_init") then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\external\dzgm\icons.sqf";};
uiSleep 1;
[] spawn dzgm_init;
systemChat "Press right ctrl to open group management";