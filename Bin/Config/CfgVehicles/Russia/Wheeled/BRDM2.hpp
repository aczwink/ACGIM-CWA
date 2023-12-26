/*
Sources:
	http://en.wikipedia.org/wiki/BRDM-2
*/
class BRDM : LandVehicle
{
	scope = SCOPE_PUBLIC;
	side = SIDE_EAST;
	displayName = "BRDM-2";
	vehicleClass="Vehicles (Wheeled)";
	icon="\sjc_textures\brdm\ico.paa";
	picture="\sjc_textures\brdm\pic.paa";
	accuracy = ACCURACY_BRDM2;
	model = "\sjc_models\russia\brdm2.p3d";
	hiddenSelections[]={"L0", "L1", "L2", "P0", "P1", "P2"};
	extCameraPosition[]={0,1,-10};
	armor = ARMOR_BRDM2;
	armorstructural=3;
	armorBody=1.0;
	armorFuel=4.4;
	armorLights=0.01;
	armorWheels=2;
	armorGlass=0.7;
	destrType = DESTRUCT_ENGINE;
	maxSpeed = 100;
	terrainCoef=2.5;
	unitInfoType = UNITINFO_SOLDIER;
	hideUnitInfo = false;
	weapons[]={"KPVT", "PKT_2000"};
	magazines[]={"KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "KPVT", "PKT_2000"};
	hasGunner = true;
	gunnerAction = ManActBMPGunner;
	gunnerCanSee = CANSEE_DEFAULT_GUNNER;
	irScanRangeMin = 50;
	irScanRangeMax = 1000;
	irScanToEyeFactor = 5;
	irScanGround = true;
	driverIsCommander = true;
	driverCanSee = CANSEE_DEFAULT_DRIVER;
	gunnerhasoptics=1;
	gunnerOpticsModel="\sjc_optics\russia\brdm_gunner.p3d";
	castGunnerShadow = false;
	crew = "SoldierECrew";
	type = VEHICLE_ARMOR;
	threat[] = {THREAT_BRDM2};
	transportSoldier = 3;
	transportAmmo = 0;
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	driverAction = ManActV3SDriver;
	cargoAction[] = {ManActCargo};
	unloadInCombat=1;
	fuelCapacity=100;
	nameSound="APC";
	preferRoads=1;
	cargoIsCoDriver[]={1,0};
	soundEngine[]={"Vehicles\OldIdle1",0.3162278,1.25};
	soundGear[]={"Vehicles\Gear_Trans1",0.001,1};
	soundCrash[]={"Vehicles\crash_small2",0.3162278,1};
	soundEnviron[]={"Objects\noise",0.0031623,0.25};
	cost = COST_BRDM2;
	canFloat=1;
	simulation="car";
	hasDriver=1;
	hasCommander=0;
	hideProxyInCombat=0;
	wheelCircumference=4.513;
	turnCoef=6.0;
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
	damperSize=0.1;
	damperForce=30;
	scudLaunch="";
	scudStart="";
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","Officer"};
	formationX=20;
	formationZ=20;
	precision=10;
	brakeDistance=10;
	steerAheadSimul=0.5;
	steerAheadPlan=0.35;
	predictTurnSimul=1.2;
	predictTurnPlan=1.2;
	sensitivity=0.6;
	
	class WeaponCloudsGun{};
	class WeaponCloudsMGun : WeaponCloudsGun{};
	class MGunClouds : WeaponCloudsMGun
	{
		access = ACCESS_FORBIDDENVERIFIED;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 0.4;
		cloudletSize = 4.0;
		cloudletAlpha = 0.3;
		cloudletGrowUp = 0.05;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.1;
		cloudletAccY = 0.4;
		cloudletMinYSpeed = 0.2;
		cloudletMaxYSpeed = 0.6;
		cloudletShape = "missileSmoke";
		cloudletColor[] = {0.6, 0.6, 0.6, 0.25};
		interval = 0.02;
		size = 1;
		sourceSize = 0.5;
		timeToLive = 0.1;
		initT = 0;
		deltaT = 0;
		
		class Table
		{
			class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
		}
	};
	
	class TurretBase{};
	class Turret : TurretBase
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[] = {};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		minElev=-5;
		maxElev="+12";
		minTurn=-360;
		maxTurn="+360";
		body = "OtocVez";
		gun = "OtocHlaven";
	};

	class ViewPilot
	{
		initAngleX=10;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};
	
	class ViewGunner
	{
		
		initAngleX=0;
		minAngleX=-1;
		maxAngleX=1;
		initAngleY=0;
		minAngleY=-1;
		maxAngleY=1;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};
	
	class ViewOpticsBase{};
	class ViewOptics : ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-5;
		maxAngleX=12;
		initAngleY=0;
		minAngleY=-5;
		maxAngleY=12;
		initFov=0.07;
		minFov=0.03;
		maxFov=0.07;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=40;
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-170;
		min=0;
		max=1;
	};
	
	class HitEngine
	{
		armor=1.2;
		material=60;
		name="engine";
		passThrough=1;
	};
	
	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-240;
		min=0;
		max=16.6700001;
	};
	
	class EventHandlers 
	{
		init = "[(_this Select 0)] exec ""\acgim_scripts\Vehicles\BRDM2\numery.sqs""";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};