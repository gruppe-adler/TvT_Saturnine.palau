/*  Wird zum Missionsstart auf Server und Clients ausgeführt.
*   Funktioniert wie die init.sqf.
*/

[{
    _firstActiveSectorID = selectRandom [4,5];
    _roundLength = 2100;
    _opforDirection = -1;

    _dateAndTimeArray = [
        [1985,3,28,8,30],
        [1985,3,28,12,00],
        [1985,3,28,17,30],
        [1985,3,28,21,00],
        [1985,3,28,5,00],
        [1985,3,28,8,00],
        [1985,3,28,12,30],
        [1985,3,28,17,30],
        [1985,3,28,21,30]
    ];

    _weatherArray = [
        [0,[0,0.014,0]],
        [0,[0.2,0.05,0]],
        [0,[0.1,0.05,0]],
        [0,[0.05,0.01,0]],
        [0.5,[0.07,0.05,0]],
        [1,[0.2,0.05,0]],
        [0.2,[0.1,8,0]],
        [0,[0,0,0]],
        [0,[0.2,0.05,0]]
    ];

    [_firstActiveSectorID, _roundLength, _opforDirection, _dateAndTimeArray, _weatherArray] call grad_linearSD_fnc_startLinearSD;

},[],[10,0] select didJIP] call CBA_fnc_waitAndExecute;


[] exeCVM "USER\scripts\intro.sqf";