class russia {
    class AllUnits {
        uniform[] = {"U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Camo_F"};
        backpack = "";
        vest[] = {"rhs_6b23"};
        primaryWeapon[] = {"arifle_AK12_F"};
        primaryWeaponMagazine = "UK3CB_AK47_30Rnd_Magazine_GT";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics[] = {
        };
        primaryWeaponPointer = "acc_flashlight";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "rhssaf_booniehat_woodland";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_fadak";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
			LIST_2("ACE_morphine"),
            LIST_2("ACE_Chemlight_HiWhite"),
            LIST_2("rhs_mag_rdg2_white"),
            LIST_4("ACE_splint"),
			"ACE_epinephrine",
			"ACE_Flashlight_KSF1",
			"ACE_MapTools"
        };
    };

    class Type {
        // Rifleman
        class Soldier_F {
            backpack = "rhs_assault_umbts";
            addItemsToVest[] = {
				LIST_9("UK3CB_AK47_30Rnd_Magazine_GT"),
				LIST_1("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
                "ACE_EntrenchingTool"
			};
            addItemsToBackpack[] = {
                LIST_7("UK3CB_AK47_30Rnd_Magazine_GT")
            };
        };

        // Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "arifle_AK12_GL_F";
            primaryWeaponMagazine = "UK3CB_AK47_30Rnd_Magazine_GT";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                 LIST_10("rhs_mag_M583A1_white"),
                 LIST_6("rhs_mag_m714_White")
            };
        };

        // Light AT
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        // TL
        class Soldier_TL_F: Soldier_F {
            primaryWeapon = "arifle_AK12_GL_F";
            primaryWeaponMagazine = "UK3CB_AK47_30Rnd_Magazine_GT";
            handgunWeapon = "rhs_weap_tr8";
            headgear = "rhssaf_booniehat_woodland";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_6("rhs_mag_M583A1_white"),
                LIST_2("rhs_mag_M664_red_cluster"),
                LIST_2("rhs_mag_M663_green_cluster"),
                LIST_6("rhs_mag_m714_White"),
                LIST_1("grad_axe")
            };
        };

        // SQL
        class Soldier_SL_F: Soldier_TL_F {

        };

        // SQL
        class officer_F: Soldier_TL_F {

        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "UK3CB_MG3_KWS_B";
            primaryWeaponMagazine = "UK3CB_MG3_250rnd_762x51_GT";
            primaryWeaponOptics = "rhsusf_acc_eotech_xps3";
            backpack = "rhs_assault_umbts";
            addItemsToVest[] = {
                LIST_2("UK3CB_MG3_250rnd_762x51_GT"),
                LIST_1("rhs_mag_rdg2_white"),
			};
            addItemsToBackpack[] = {
                LIST_3("UK3CB_MG3_250rnd_762x51_GT")
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_4("UK3CB_MG3_250rnd_762x51_GT")
            };
        };
    };

	class Rank {
		class LIEUTENANT {
            addItemsToBackpack[] = {"rhs_fieldcap_ml"};
		};
	};
};
