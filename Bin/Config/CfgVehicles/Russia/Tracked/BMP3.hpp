/*
class VIT_2A70GUN:Gun73
{
    shotFromTurret=1;
    sound[]={"\ffur_ru_arm\p3\Sound\Gun100.ogg","db+10",1};
    reloadSound[]={"\ffur_ru_arm\p3\Sound\2A70REL.ogg","db-15",1.0};
    reloadTime=12;
    autoFire=1;
    ammo="VIT_2A70GUN";
    displayName="2A70 100mm Gun";
    displayNameMagazine="2A70 100mm";
    shortNameMagazine="2A70 100mm";
    magazines[]={"VIT_2A70GUN"};
    namesound="shell";
    count=40;
    initSpeed=800;
    aiRateOfFire=0;
    aiRateOfFireDistance=2000;
    irLock=1;
};

class VIT_2A42_Base:Cannon30
{
    scopeWeapon=2;
    scopeMagazine=0;
    shotFromTurret=1;
    displayName="2A42 30mm";
    reloadSound[]={"",0,0};
    backgroundReload=1;
    soundContinuous=0;
    aiRateOfFire=0;
    aiRateOfFireDistance=0;
};

class VIT_2A42HE:VIT_2A42_Base
{
    ammo="VIT_2A42HE";
    count=580;
    autoFire=1;
    reloadTime=0.15909;
    dispersion=0.0025;
    nameSound="shell";
    magazines[]={"VIT_2A42HE"};
    magazineReloadTime=10;
    displayName="2A42 30mm HE";
    displayNameMagazine="30mm HE";
    shortNameMagazine="30mm HE";
    initSpeed=960;
    multiplier=1;
};

class VIT_2A42AP:VIT_2A42HE
{
    ammo="VIT_2A42AP";
    count=280;
    nameSound="heat";
    magazines[]={"VIT_2A42AP"};
    displayName="2A42 30mm AP";
    displayNameMagazine="30mm AP";
    shortNameMagazine="30mm AP";
    initSpeed=980;
};

class VIT_2A42:VIT_2A42_Base
{
	muzzles[]={"HE","AP"};

	class HE:VIT_2A42HE
    {
    };

	class AP:VIT_2A42AP
    {
    };
};

class d4t_bmp3_pkt : MachineGun7_6
{
    dispersion=0.01;
    displayName="PKT 7.62mm";
    displayNameMagazine="PKT";
    shortNameMagazine="PKT";
    count=250;
    reloadTime=0.1;
    autoFire=1;
    magazineReloadTime=10;
};

class VIT_9M117:AT3Launcher
{
    count=6;
    cost=10000;
    displayName="9M117 Bastion";
    displayNameMagazine="9M117";
    shortNameMagazine="9M117";
    weaponType=65536;
    reloadTime=20;
    irLock=1;
    ammo="VIT_9M117";
    sound[]={"\ffur_ru_arm\p3\Sound\9m117.ogg","db0",1};
    reloadSound[]={"\ffur_ru_arm\p3\Sound\9m113rel.wss",1,1};
};
*/

class BMP : APC //becomes bmp3
{
    scope=2;
    vehicleClass="Russia Armored";
    crew="SoldierECrew";
    picture="ibmp";
    side=0;
    displayName="BMP-3";
    nameSound="BMP";
    accuracy=0.3;
    maxSpeed=70;
    hiddenSelections[]={"pruh"};
    transportSoldier=8;
    transportAmmo=0;
    armor=260;
    cost=150000;
    forceHideGunner=0;
    forcehidecommander=0;
    driverCanSee=30;
    model="\ffur_ru_arm\p3\vitbmp3.P3D";
    canFloat=1;
    minGunElev=-5;
    maxGunElev=15;
    //weapons[]={"VIT_2A70GUN","VIT_2A42","d4t_bmp3_pkt","VIT_9M117"};
    //magazines[]={"VIT_2A70GUN","VIT_2A42AP","VIT_2A42HE","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","VIT_9M117"};
    typicalCargo[]={"Soldier","Soldier","SoldierLAW"};
    type=1;
    threat[]={0.9,0.7,0.3};
    soundEnviron[]={"Vehicles\OldRolling_Treads1",0.1778279,1};
    soundEngine[]={"\ffur_ru_arm\p3\sound\bmp3eng.ogg","db+5",1.0};
    driverAction="ManActzsuDriver";
    driverInAction="ManActBMPDriver";
    gunnerInAction="ManActBMPGunner";
    gunnerAction="ManActBMPGunnerOut";
    CommanderAction="ManActBmpCommanderout";
    CommanderInAction="ManActBmpCommander";

    class TransportMagazines
        {

        class _xx_d4t_AK74
            {
            magazine="d4t_AK74_mag";
            count="30*1";
            };

        class _xx_d4t_pk_mag
            {
            magazine="d4t_pk_mag";
            count="5*1";
            };

        class _xx_d4t_rgo
            {
            magazine="d4t_rgo";
            count="10*1";
            };

        class _xx_d4t_5RD_127_Mag
            {
            magazine="d4t_5RD_127_Mag";
            count="10*1";
            };

        class _xx_d4t_rpgrocket
            {
            magazine="d4t_rpgrocket";
            count="3*1";
            };

        class _xx_GrenadeLauncher
            {
            magazine="GrenadeLauncher";
            count="3*1";
            };
        };
    class Turret
        {
        gunAxis="OsaHlavne";
        turretAxis="OsaVeze";
        soundServo[]={"\ffur_ru_arm\p3\sound\turretbmd.ogg","db-45",1};
        gunBeg="usti hlavne";
        gunEnd="konec hlavne";
        body="OtocVez";
        gun="OtocHlaven";
        minElev=-3;
        maxElev="+70";
        minTurn=-360;
        maxTurn="+360";
        };

    class HatchCommander
        {
        selection="poklop_commander";
        axis="osa_poklop_commander";
        angle=90;
        };

    class HitHull
        {
        armor=1;
        material=50;
        name="hull";
        passThrough=1;
        };

    class HitTurret
        {
        armor=0.8;
        material=51;
        name="turet";
        passThrough=1;
        };

    class HitLTrack
        {
        armor=0.6;
        material=53;
        name="pasL";
        passThrough=1;
        };

    class HitRTrack
        {
        armor=0.6;
        material=54;
        name="pasP";
        passThrough=1;
        };

    class HatchDriver
        {
        selection="poklop_driver";
        axis="osa_poklop_driver";
        angle=-100;
        };

    class HatchGunner
        {
        selection="poklop_gunner";
        axis="osa_poklop_gunner";
        angle=90;
        };

    class IndicatorSpeed
        {
        selection="ukaz_rychlo";
        axis="osa_rychlo";
        angle=-320;
        min=0;
        max="40 / 3.6";
        };

    class IndicatorRPM
        {
        selection="ukaz_rpm";
        axis="osa_rpm";
        angle=-230;
        min=0;
        max=1;
        };
};