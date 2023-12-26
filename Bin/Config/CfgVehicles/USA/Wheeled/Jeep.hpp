class Jeep : Car
{
    scope = 2;
    crew = "SoldierWB";
    picture = "ijeepMUTT";
    maxSpeed = 100;
    side = 1;
    displayName = "$STR_DN_JEEP";
    nameSound = "jeep";
    accuracy = 0.5;
    armor = 20;
    cost = 30000;
    fuelCapacity = 50;
    transportSoldier = 3;
    transportAmmo = 0;
    model = "jeep";
    armorWheels = 0.12;
    driverAction = "ManActJeepDriver";
    cargoAction[] = {"ManActJeepCoDriver", "ManActJeepCoDriverBack"};
    cargoIsCoDriver[] = {1, 0};
    soundEngine[] = {"Vehicles\jeepmove", 0.177828, 1};
    typicalCargo[] = {"Soldier", "SoldierLAW"};
    dammageHalf[] = {"jepp4x4_glass.paa", "jepp4x4_glassB.paa", "jepp_kab_sklo1.paa", "jepp_kab_sklo1B.paa", "jepp_kab_sklo2.paa", "jepp_kab_sklo2B.paa", "scud_sklo.paa", "scud_skloB.paa", "scud_sklo2.paa", "scud_sklo2B.paa", "scud_sklo3.paa", "scud_sklo3B.paa", "scud_sklo4.paa", "scud_sklo4B.paa"};
    dammageFull[] = {"jepp4x4_glass.paa", "jepp4x4_glassC.paa", "jepp_kab_sklo1.paa", "jepp_kab_sklo1C.paa", "jepp_kab_sklo2.paa", "jepp_kab_sklo2C.paa", "scud_sklo.paa", "scud_skloC.paa", "scud_sklo2.paa", "scud_sklo2C.paa", "scud_sklo3.paa", "scud_sklo3C.paa", "scud_sklo4.paa", "scud_sklo4C.paa"};

    class IndicatorSpeed
    {
        selection = "ukaz_rychlo";
        axis = "osa_rychlo";
        angle = -240;
        min = 0;
        max = 40;
    };

    class IndicatorRPM
    {
        selection = "ukaz_rpm";
        axis = "osa_rpm";
        angle = -240;
        min = 0;
        max = 1;
    };
};

class JeepMG : Jeep
{
    displayName = "$STR_DN_JEEP_MG";
    model = "Jeep_mg.p3d";
    picture = "ijeepmg.paa";
    gunnerAction = "ManActJeepGunner";
    hasGunner = 1;
    castGunnerShadow = 1;
    ejectDeadGunner = 1;
    castDriverShadow = 1;
    driverIsCommander = 1;
    scope = 2;
    weapons[] = {"Browning"};
    magazines[] = {"Browning"};
    gunnerOpticsModel = "optika_empty";
    unitInfoType = "unitinfosoldier";
    transportSoldier = 1;

    class Turret
    {
        gunAxis = "OsaHlavne";
        turretAxis = "OsaVeze";
        soundServo[] = {};
        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        minElev = -5;
        maxElev = 40;
        minTurn = -360;
        maxTurn = 360;
        body = "OtocVez";
        gun = "OtocHlaven";
    };

    class ViewGunner
    {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = 0;
        maxAngleY = 0;
        initFov = 0.7;
        minFov = 0.42;
        maxFov = 0.85;
    };

    class MGunClouds : WeaponCloudsMGun
    {
    };
};