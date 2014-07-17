dzgm_Icons_Clear = {
    private ["_plist","_uc","_units"];
    _units = [];
    _uc = 0;
	_plist = units group player;
	{if ((alive(_x)) && (!isNull _x) && (getPlayerUID _x != "") && (name _x != name player)) then {_units set [_uc,_x];_uc = _uc + 1;};} count _plist;

	private ["_mrkr","_index"];
	_index = 0;
    {
		private ["_pos","_unit","_name"];
		_unit = _x;
		_name = name _unit;
		_pos = getposATL _x;
		if (surfaceIsWater _pos) then {_pos = getposASL _x;};
		
		((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlShow false;
        _index = _index + 1;
    } count (_units);
};

dzgm_Icons_Name = {
    private ["_make_icons","_mrkr","_pIcons","_plist","_remove_icon","_uc","_units"];
    _pIcons = player getVariable "dzgm_Hud_pIcons";
    _make_icons = false;
	_remove_icon = false;
    _units = [];
    _uc = 0;
	_plist = units group player;
	{if ((alive(_x)) && (!isNull _x) && (getPlayerUID _x != "") && (name _x != name player)) then {_units set [_uc,_x];_uc = _uc + 1;};} count _plist;

    if (isNil "_pIcons") then {
        _make_icons = true;
    } else {
        if (count(_pIcons) < _uc) then {
            _make_icons = true;
        };
        if (count(_pIcons) > _uc) then {
			_make_icons = true;
			_remove_icon = true;
        };
    };
    if (_make_icons)then {
        _pIcons = [];
		private "_Plicon";
		_Plicon = "\ca\ui\data\igui_side_blufor_ca.paa";
        for "_marker_index" from 0 to (_uc - 1) do {
			_picon = _Plicon;
            _pIcons set [_marker_index, _picon];
        };
        player setVariable ["dzgm_Hud_pIcons", _pIcons];
    };

	private "_index";
	_index = 0;
	
    {
        private ["_pos","_unit","_distance","_name","_scale","_screen","_sx","_sy","_tag"];
        _unit = _x;
		_name = name _unit;
		_pos = getposATL _x;
		if(surfaceIsWater _pos) then {_pos = getposASL _x;};
		
        _distance = _pos distance player;
		if (_distance > 1 && _distance < 2500) then {
		_pos set [2, (_pos select 2) + 1.5];
		_screen = worldToScreen _pos;
		_picon = _pIcons select _index;
		_tag = composeText [image _picon," ",_name];
			if (((count _screen) > 1) && (!visibleMap)) then {
				_scale = 0;
				_sx = _screen select 0;
				_sy = _screen select 1;
				if (_distance < 200) then {
					_scale = 0.3;
				} else {
					_scale = 1 min ((1 - ((_distance) - 3) / 15) max 0.3); 
				};	
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlSetStructuredText _tag;
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlSetPosition [_sx, _sy, 0.99, 0.65];
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlSetScale _scale;
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlSetFade ((1- _scale ) / 2);
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlCommit 0;
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlShow true;
			} else {
				((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlShow false;
			};		
		} else {
			((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlShow false;		
		};
        _index = _index + 1;
    } count (_units);
	if (_remove_icon) then {
		((uiNamespace getVariable "dzgm_Hud_Disp") displayCtrl (46300 + _index)) ctrlShow false;
		if (!isNil "_name") then {deleteMarkerLocal _name;};
	};
};

dzgm_init = {	
    if (!isNil "dzgm_Handle") then {terminate dzgm_Handle;};

    dzgm_Handle = [] spawn {
        uiSleep 1;
        while {true} do {
#define SHOW_HUD (cameraView in ["INTERNAL","EXTERNAL","GUNNER"]) && (alive(player) && isNil("BIS_DEBUG_CAM"))
            waitUntil {uiSleep 1;SHOW_HUD};
			609 cutRsc ["dzgmHud_Rsc","PLAIN"];
            while {SHOW_HUD} do {
				if (tagname) then {call dzgm_Icons_Name;} else {call dzgm_Icons_Clear;};
				if (commandingMenu in ["RscTeam","#User:BIS_Menu_GroupCommunication"]) then {showCommandingMenu "";};
                uiSleep 0.01;
            };
            609 cutText ["","PLAIN"];
        };
    };	
};