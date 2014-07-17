private ["_callerID","_friendlies","_targetID","_plist","_rfriendlies","_uc","_units"];

_units = [];
_uc = 0;
_plist = units group player; 
{if ((alive(_x)) && (getPlayerUID _x != "") && (name _x != name player)) then {_units set [_uc,_x];_uc = _uc + 1;};} count _plist;

_callerID = getPlayerUID player;
{
	private ["_name"];
	_name = name _x;
	deleteMarkerLocal _name;
	_targetID = getPlayerUID _x;
	
	_friendlies = player getVariable ["friendlies", []];
	_friendlies =  _friendlies - [_targetID];
	player setVariable ["friendlies", _friendlies, true];
	
	_rfriendlies = _x getVariable ["friendlies", []];
	_rfriendlies =  _rfriendlies - [_callerID];
	_x setVariable ["friendlies", _rfriendlies, true];
} count (_units);

[player] join grpNull;
systemChat "You have left the group";