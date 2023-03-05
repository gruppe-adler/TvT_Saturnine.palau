#include "component.hpp"

GVAR(isLastRound) = true;


private _westWon = ({side _x == west && alive _x} count playableUnits > {side _x == east && alive _x} count playableUnits);
private _eastWon = ({side _x == west && alive _x} count playableUnits < {side _x == east && alive _x} count playableUnits);

private _winner = sideUnknown;
private _sideDisplayName = "Nobody";

if (_westWon) then {
    _winner = west;
    _sideDisplayName = "East";
};

if (_eastWon) then {
    _winner = east;
    _sideDisplayName = "West";
};

[format ["%1 has more alive units!",_sideDisplayName],_winner,true] call FUNC(endRound);

INFO("End round has been activated by admin.");
["End of Game!","Sides agreed on ceasefire.","cfg\notifications\tridentFriendly_ca"] remoteExec [QFUNC(dynamicText),0,false];
