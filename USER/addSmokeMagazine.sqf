params ["_vehicle", ["_isGerman", false]];

if (!isServer) exitWith {}; // safecheck



if (typeOf _vehicle == "rhs_prp3_vv") then {
    _vehicle addWeaponTurret ["mortar_82mm", [2]];
    _vehicle addMagazineTurret ["8Rnd_82mm_Mo_Smoke_white", [2]];

    // prp 3 tweaks
    if (_isGerman) then {
        [
            _vehicle,
            ["CDF",1], 
            ["crate_l1_unhide",0,"crate_l2_unhide",1,"crate_l3_unhide",1,"crate_r1_unhide",0,"crate_r2_unhide",0,"crate_r3_unhide",1,"wood_1_unhide",1,"maljutka_hide_source",0]
        ] call BIS_fnc_initVehicle;
    };
} else {
    // ural
    if (_isGerman) then {
        [
        _vehicle,
            ["Camo2",1], 
            ["people_tag_hide",1,"spare_hide",0,"bench_hide",0,"rear_numplate_hide",1,"light_hide",1]
        ] call BIS_fnc_initVehicle;
    };
};


if (typeOf _vehicle == "rhsgref_nat_uaz_dshkm") then {
    // nothing
} else {
    // ural
    if (_isGerman) then {
        [
        _vehicle,
            ["Camo2",1], 
            ["people_tag_hide",1,"spare_hide",0,"bench_hide",0,"rear_numplate_hide",1,"light_hide",1]
        ] call BIS_fnc_initVehicle;
    };
};