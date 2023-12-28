class T72 : RussianTank
{
    side=0;
    scope=2;
    crew="SoldierECrew";
    //weapons[]={"ICP_2A46M","ICP_PKT","ICP_NSV"};
    //magazines[]={"ICP_3VBM17","ICP_3VBK25","ICP_3VOF36","ICP_9K119","ICP_PKT","ICP_NSV"};
    picture="it80";
    icon="tank";
    armorStructural=2.0;
    forceHideGunner=0;
    class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
    class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
    class HitTurret {armor=1;material=51;name=turet;passThrough=1;};
    class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
    class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
    class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

    //soundEnviron[]={"\ICP_t72s\sound\treads.wav",0.916666,0.800000};
    //soundEngine[]={"\ICP_t72s\sound\engine.wav",22,1};
    //soundGear[]={"\ICP_t72s\sound\gear.wav",0.1,0.8};
    gunnerOpticsModel="\icp_t90\d30tim\pr.p3d";
    //commanderOpticsModel="\ICP_t72s\sight.p3d";
    driverAction="ManActT80DriverOut";
    gunnerAction="ManActT80GunnerOut";
    commanderAction="ManActT80CommanderOut";
    driverInAction="ManActT80Driver";
    gunnerInAction="ManActT80Gunner";
    commanderInAction="ManActT80Commander";
    type=VArmor;
    simulation="tank";
    hiddenselections[]= {"TR","zak","dz","pl","no1","no2","no3","fire1","fire2","fire3","fire4","fire5","fire6","rak1","rak2","rak3","rak4","Flag"};
    model="\icp_t90\t80utim";
    vehicleClass="Russia Armored";
    displayName="T-80UM";
    maxSpeed=75;
    soundEngine[]={"\icp_t90\DVI.wss","db-2",1};
    nameSound="tank";
    transportSoldier = 5;
    ejectDeadDriver = 0;
    ejectDeadGunner = 0;
    ejectDeadCargo = 1;
    cargoAction[]={"ManActicpt80proxy1","ManActicpt80proxy2","ManActicpt80proxy3","ManActicpt80proxy4","ManActicpt80proxy5",};
    armor=1100;
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
        angle=-100;
    };
    class HatchCommander
    {
        selection="poklop_commander";
        axis="osa_poklop_commander";
        angle=-100;
    };

    class ViewGunnerBase
    {
        initAngleX=5;
        minAngleX=-30;
        maxAngleX=30;
        initAngleY=0;
        minAngleY=-100;
        maxAngleY=100;
        initFov=0.550000;
        minFov=0.320000;
        maxFov=0.850000;
    };

    class TurretBase
    {
        //soundServo[]={"\ICP_t72s\sound\turret.ogg",0.0316228,1.0};
        gunAxis = "OsaHlavne";
        turretAxis = "OsaVeze";

        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        
        minElev=-4; maxElev=+20;
        minTurn=-360; maxTurn=+360;

        body = "OtocVez";
        gun = "OtocHlaven";
    };

    class UserActions
    {
        //class UseASP
        //{
            //displayName="Use fire-extinguishers";
            //position="pos driver";
            //radius=5;
            //sound={};
            //condition="((this animationPhase ""InFlamed"") == 1) && (player in this)";
            //statement="[this] exec {\ICP_t90\scripts\asp.sqs}";
        //};
        //class Use902B
        //{
            //displayName="Launch smoke";
            //position="pos driver";
            //radius=5;
            //sound={};
            //condition="((this animationPhase ""SmokeLaunch"") < 2) && (player in this)";
            //statement="[this] exec {\ICP_t90\scripts\smoke.sqs}";
        //};
    };

    class Animations
    {
        class SetNumber
        {
            type="rotation";
            animperiod=0.5;
            selection="useract";
            axis="osa_useract";
            angle0=0;
            angle1=0;
        };
        class InFlamed
        {
            type="rotation";
            animperiod=0.5;
            selection="useract";
            axis="osa_useract";
            angle0=0;
            angle1=0;
        };
        class SmokeLaunch
        {
            type="rotation";
            animperiod=0.1;
            selection="useract";
            axis="osa_useract";
            angle0=0;
            angle1=0;
        };
        class OtstrelGilz
        {
            type ="rotation";
            animPeriod =0.5;
            selection ="Krish";
            axis ="osa_krish";
            angle0 =0;
            angle1 =-2.5;
        };
        class Recoil
        {
            type ="rotation";
            animPeriod =0.1;
            selection ="stv";
            axis ="osa_stv";
            angle0 =0;
            angle1 =-0.0042;
        };              
        class Podveska
        {
            type ="rotation";
            animperiod=0.5;
            selection="podv";
            axis="osa_sus";
            angle0=-0.041;
            angle1=0.041;
        };
    };

    class EventHandlers
    {
        //Init="[_this select 0] exec {\ICP_t90\scripts\podw.sqs}; [_this select 0] exec {\ICP_t90\scripts\number.sqs}; [_this select 0] exec {\ICP_t90\scripts\cargo.sqs}; [_this select 0] exec {\ICP_t90\scripts\opvtt80.sqs}";
        //Fired="if ((_this select 4) in [""ICP_3OF26"",""ICP_3BK29M"",""ICP_3BM42""]) then {_this call loadFile ""\ICP_t90\scripts\stvol.sqf""; [_this select 0] exec ""\ICP_t90\scripts\gunrec.sqs""}";
        //Hit="[_this select 0] exec {\ICP_t90\scripts\fire.sqs}; [_this select 0] exec {\ICP_t90\scripts\iskra.sqs}";
        //IncomingMissile="[_this select 0, _this select 1, _this select 2] exec {\ICP_t90\scripts\dz.sqs}; [_this select 0] exec {\ICP_t90\scripts\unload.sqs}";
        //Killed="[_this select 0] exec {\ICP_t90\scripts\destroyed.sqs}";
    };
};