private ["_pos","_radius","_building1","_building2","_building3"];
 
while {alive player} do {
 
_pos = position player;
_radius = 1500; // meters
 
_building1 = (_pos nearObjects ["Land_budova1", _radius]);
_building2 = (_pos nearObjects ["Land_budova2", _radius]);
_building3 = (_pos nearObjects ["Land_budova4", _radius]);
{
    _x hideObject true;
} forEach _building1,_building2,_building3; 
};