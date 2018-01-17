class All
{
	access=3;
	scope=0;
	reversed=1;
	autocenter=1;
	animated=1;
	mapSize=10;
	vehicleClass="";
	icon="unknown_object";
	side=4;
	displayName="$STR_DN_UNKNOWN";
	nameSound="target";
	weaponSlots=0;
	camouflage=2;
	audible=1;
	accuracy=0;
	spotableNightLightsOff=0.05;
	spotableNightLightsOn=4;
	insideSoundCoef=0.5;
	outGunnerMayFire=0;
	viewGunnerInExternal=0;
	unloadInCombat=0;
	visibleNightLightsOff=0.1;
	visibleNightLightsOn=0.2;
	sensitivity=1;
	sensitivityEar=0.0075;
	model="bmp";
	picture="";
	simulation="";
	destrType = DESTRUCT_DEFAULT;
	armor=100;
	armorLights=0.4;
	armorStructural=1.0;
	cost=500000;
	fuelCapacity=0;
	extCameraPosition[]={0,2,-20};
	steerAheadSimul=0.3;
	steerAheadPlan=0.4;
	minFireTime=20;
	predictTurnSimul=1.2;
	predictTurnPlan=1.0;
	precision=5;
	brakeDistance=5;
	formationX=10;
	formationZ=20;
	formationTime=10;
	irTarget=1;
	irScanRangeMin=0;
	irScanRangeMax=0;
	irScanToEyeFactor=1;
	irScanGround=1;
	laserTarget=0;
	laserScanner=0;
	preferRoads=0;
	unitInfoType = UNITINFO_TANK;
	hideUnitInfo=0;
	nightVision=0;
	//commanderCanSee=31;
	//gunnerCanSee="4+8+16";
	//driverCanSee="2+8+16";
	//SJC: No radar by default, all can use eyes, ears, and optics. Gunner and commander can see compass to keep track of turret direction relative to vehicle direction.
	commanderCanSee = CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR + CANSEE_COMPASS;
	gunnerCanSee = CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR + CANSEE_COMPASS;
	driverCanSee = CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR;
	maxSpeed=80;
	secondaryExplosion=-1;
	hasDriver=1;
	hasGunner=0;
	hasCommander=0;
	driverIsCommander=0;
	hideWeaponsDriver=1;
	hideWeaponsGunner=1;
	hideWeaponsCommander=1;
	hideWeaponsCargo=0;
	getInRadius=2.5;
	transportSoldier=0;
	transportAmmo=0;
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	transportFuel=0;
	transportRepair=0;
	transportVehiclesCount=0;
	transportVehiclesMass=0;
	attendant=0;
	soundEngine[]={"",1,1};
	soundEnviron[]={"",1,1};
	soundCrash[]={"Vehicles\crash",0.3162278,1};
	soundLandCrash[]={"Explosions\intoground",0.3162278,1};
	soundWaterCrash[]={"Explosions\intowater",0.3162278,1};
	soundGetIn[]={"Vehicles\get_in",0.0003162,1};
	soundGetOut[]={"Vehicles\get_out",0.0003162,1};
	soundServo[]={"Vehicles\gun_elevate",0.01,0.5};
	soundDammage[]={"",1,1};
	weapons[]={};
	magazines[]={};
	type=1;
	threat[]={0.7,0.5,0.3};
	typicalCargo[]={};
	getInAction = MANACT_GETINTANK;
	getOutAction = MANACT_GETOUTTANK;
	driverAction="ManActCargo";
	gunnerAction="ManActCargo";
	commanderAction="ManActCargo";
	driverInAction="ManActCargo";
	gunnerInAction="ManActCargo";
	commanderInAction="ManActCargo";
	cargoAction[]={"ManActCargo"};
	cargoIsCoDriver[]={0};
	driverOpticsModel="";
	gunnerOpticsModel="";
	commanderOpticsModel="";
	driverOpticsColor[]={0,0,0,1};
	gunnerOpticsColor[]={0,0,0,1};
	commanderOpticsColor[]={0,0,0,1};
	hideProxyInCombat=0;
	forceHideGunner=0;
	forceHideDriver=0;
	forceHideCommander=0;
	gunnerUsesPilotView=0;
	commanderUsesPilotView=0;
	castDriverShadow=0;
	castGunnerShadow=0;
	castCommanderShadow=0;
	castCargoShadow=0;
	ejectDeadDriver=0;
	ejectDeadGunner=0;
	ejectDeadCommander=0;
	ejectDeadCargo=0;
	crew="Civilian";
	hiddenSelections[]={};

	class ViewPilotBase
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewCommanderBase
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewGunnerBase
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewCargoBase
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-360;
		maxAngleY=360;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewPilot : ViewPilotBase{};
	class ViewGunner : ViewGunnerBase{};
	class ViewCommander : ViewCommanderBase{};
	class ViewCargo : ViewCargoBase{};
	class ViewOptics : ViewOpticsBase{};

	class TransportWeapons{};
	class TransportMagazines{};

	class SoundEnvironExt{};

	class Reflectors{};
};

class Logic : All
{
	displayName="$STR_DN_LOGIC";
	nameSound="target";
	scope=2;
	vehicleClass="Objects";
	simulation="invisible";
	side=7;
	icon="vlajka";
	model="empty";
	picture="iaston";
};

class AllVehicles : All
{
	icon="unknown_move";
};

class Land : AllVehicles
{
	displayName="$STR_DN_VEHICLE";
	nameSound="target";
	accuracy=0.0005;
	armor=30;
	cost=100000;
	fuelCapacity=0;
	weapons[]={"MachineGun12_7"};
	magazines[]={"MachineGun12_7"};
	type=1;
	threat[]={0.8,0.8,0.3};
};

class LandVehicle : Land
{
	displayName="$STR_DN_VEHICLE";
	accuracy=0.02;
	cost=500000;

	class Reflectors
	{
		class Left
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=0.25;
		};

		class Right
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.5;
			brightness=0.25;
		};
	};
};

class Car : LandVehicle
{
	mapSize=5;
	icon="car";
	displayName="$STR_DN_CAR";
	nameSound="car";
	accuracy=0.2;
	cost=40000;
	fuelCapacity=100;
	unloadInCombat=1;
	canFloat=0;
	armor=20;
	armorStructural=4.0;
	driverCanSee="8+2";
	gunnerCanSee="2+8";
	dammageHalf[]={"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
	dammageFull[]={"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};
	armorBody=0.4;
	armorFuel=1.4;
	armorLights=0.4;
	armorWheels=0.05;
	armorGlass=0.5;
	vehicleClass="Vehicles (Wheeled)";
	wheelCircumference=2.513;
	turnCoef=2.0;
	terrainCoef=3.0;
	maxSpeed=100;
	preferRoads=1;
	unitInfoType = UNITINFO_CAR;
	hideUnitInfo=1;
	formationX=20;
	formationZ=20;
	precision=10;
	brakeDistance=10;
	steerAheadSimul=0.5;
	steerAheadPlan=0.35;
	predictTurnSimul=1.2;
	predictTurnPlan=1.2;
	sensitivity=0.6;
	soundEngine[]={"Vehicles\mediumcar",0.0316228,2.0};
	soundEnviron[]={"Objects\noise",0.0005623,0.25};
	soundCrash[]={"Vehicles\crash",0.1,1};
	soundGear[]={"Vehicles\truck_gear",0.0001778,1};
	extCameraPosition[]={0,1,-10};
	simulation="car";
	weapons[]={"CarHorn"};
	magazines[]={};
	type=0;
	threat[]={0.5,0.5,0.5};
	typicalCargo[]={"Soldier"};
	audible=3;
	getInAction = MANACT_GETINCAR;
	getOutAction = MANACT_GETOUTCAR;
	damperSize=0.1;
	damperForce=30;
	scudLaunch="";
	scudStart="";
	transportMaxMagazines=50;
	transportMaxWeapons=10;

	class HitEngine
	{
		armor=1.2;
		material=60;
		name="engine";
		passThrough=1;
	};
	
	class HitHull//SJC: Add ability of Car class to have darkening damaged parts.
	{
		armor=1;
		material=50;
		name="karoserie";
		passThrough=1;
	};

	class ViewPilot:ViewPilotBase
	{
		initFov=0.7;
		minFov=0.4;
		maxFov=1.0;
		initAngleX=15;
		minAngleX=-15;
		maxAngleX=25;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-340;
		min=0;
		max=1;
	};
};

class Motorcycle : LandVehicle
{
	simulation="motorcycle";
	displayName="$STR_DN_MOTORCYCLE";
	accuracy=0.2;
	mapSize=5;
	icon="car";
	nameSound="car";
	isBicycle=0;
	unloadInCombat=1;
	castDriverShadow=1;
	castCargoShadow=1;
	ejectDeadDriver=1;
	ejectDeadCargo=1;
	armor=10;
	armorStructural=4.0;
	cost=500;
	fuelCapacity=50;
	transportSoldier=0;
	typicalCargo[]={};
	driverCanSee="8+2";
	gunnerCanSee="2+8";
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa"};
	armorBody=0.4;
	armorFuel=1.4;
	armorLights=0.4;
	armorWheels=0.05;
	armorGlass=0.5;
	vehicleClass="Vehicles (Wheeled)";
	wheelCircumference=2.513;
	turnCoef=1.0;
	terrainCoef=3.0;
	maxSpeed=120;
	preferRoads=1;
	unitInfoType=unitinfocar;
	hideUnitInfo=1;
	formationX=20;
	formationZ=20;
	precision=10;
	brakeDistance=25;
	steerAheadSimul=0.5;
	steerAheadPlan=0.35;
	predictTurnSimul=1.2;
	predictTurnPlan=1.2;
	sensitivity=0.6;
	soundEngine[]={"Vehicles\mediumcar",0.0316228,2.0};
	soundEnviron[]={"Objects\noise",0.0005623,0.25};
	soundCrash[]={"Vehicles\crash",0.1,1};
	soundGear[]={"Vehicles\truck_gear",0.0001778,1};
	extCameraPosition[]={0,1,-10};
	weapons[]={"CarHorn"};
	magazines[]={};
	type=0;
	threat[]={0.5,0.5,0.5};
	audible=3;
	getInAction=manactgetincar;
	getOutAction=manactgetoutcar;
	transportMaxMagazines=5;
	transportMaxWeapons=0;

	class HitEngine
	{
		armor=1.2;
		material=60;
		name="engine";
		passThrough=1;
	};

	class ViewPilot : ViewPilotBase
	{
		initFov=0.7;
		minFov=0.4;
		maxFov=1.0;
		initAngleX=15;
		minAngleX=-15;
		maxAngleX=25;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
	};

	class Reflectors
	{

		class Right
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.5;
			brightness=0.25;
		};
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-340;
		min=0;
		max=1;
	};
};

class Tank : LandVehicle
{
	vehicleClass="Vehicles (Tracked)";
	icon="tank";
	outGunnerMayFire=0;
	displayName="$STR_DN_TANK";
	nameSound="tank";
	accuracy=0.12;
	getInRadius=3.5;
	fuelCapacity=700;
	//SJC: No radar
	//irScanRangeMin=500;
	//irScanRangeMax=4000;
	//irScanToEyeFactor=1;
	armor=400;
	armorStructural=2.0;
	armorHull=1;
	armorTurret=0.8;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	extCameraPosition[]={0,1.5,-9};
	cost=1000000;
	steerAheadSimul=0.4;
	steerAheadPlan=0.6;
	predictTurnSimul=1.2;
	predictTurnPlan=1.8;
	soundEnviron[]={"Vehicles\OldRolling_Treads1",0.3162278,0.7};
	//soundEngine[]={"Vehicles\OldIdle1",0.3162278,1};
	//SJC: Longer ranged sounds
	soundEngine[]={"Vehicles\OldIdle1", 0.5, 1};
	soundCrash[]={"Vehicles\crash_small2",0.3162278,1};
	soundGear[]={"Vehicles\Gear_Trans1",0.0031623,1};
	soundDammage[]={"Objects\alarm_loop1",0.01,1};
	hasGunner=1;
	hasCommander=1;
	nightVision=1;
	forceHideGunner=1;
	driverAction="ManActCargo";
	gunnerAction="ManActCargo";
	commanderAction="ManActCargo";
	driverInAction="ManActCargo";
	gunnerInAction="ManActCargo";
	commanderInAction="ManActCargo";
	simulation="tank";
	formationX=20;
	formationZ=30;
	precision=5;
	brakeDistance=15;
	maxSpeed=80;
	canFloat=0;
	weapons[]={"Gun120","MachineGun12_7"};
	magazines[]={"Heat120","Shell120","MachineGun12_7"};
	type=1;
	threat[]={0.7,1,0.3};
	//SJC:Easier to spot
	//camouflage=8;
	camouflage = 10;
	audible=6;
	hideProxyInCombat=1;
	driverOpticsModel="optika_tank_driver";
	gunnerOpticsModel="optika_tank_gunner";
	commanderOpticsModel="optika_tank_driver";
	driverOpticsColor[]={0,0,0,1};
	gunnerOpticsColor[]={0.91,0.23,0.23,1};
	commanderOpticsColor[]={0.91,0.23,0.23,1};
	transportMaxMagazines=50;
	transportMaxWeapons=10;
	//SJC: Gunner can lock on targets.
	gunnerCanSee = CANSEE_ALL;
	commanderCanSee = CANNSEE_ALL;
	//SJC: Make tanks have a larger viewing sensitivity to simulate optics and sensors and to make up for lack of radar.
	sensitivity = 3;
	//SJC: Make tanks have less ability to hear things to simulate ear protection worn by tank crews and the sound dampening of the tank hull and armor.
	insideSoundCoef = 0.002;

	class HitEngine
	{
		//SJC: Make engine weaker so tanks shot in the engine are more likely to be a mobility kill.
		//armor=0.8;
		armor = 0.15;
		material=60;
		name="engine";
		//SJC: No passthrough
		//passThrough=1;
		passThrough = false;
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
		//SJC: No passthrough
		//passThrough=1;
		passThrough = false;
	};

	class HitGun
	{
		//SJC: Make gun stronger to simulate stronger front armor and reduce likelyhood of "droopy gun" effect.
		//armor=0.6;
		armor = 1.5;
		material=52;
		name="gun";
		passThrough=1;
	};

	class HitLTrack
	{
		//SJC: Weaker for mobility kills.
		//armor=0.6;
		armor = 0.4;
		//SJC: Switch track sides so disabled tanks drive in the direction of the damaged track instead of the undamaged one to simulate the damaged track not functioning as well.
		//material=53;
		//name="pasL";
		material = 54;
		name = "pasP";
		//SJC: No passthrough
		//passThrough=1;
		passThrough = false;
	};

	class HitRTrack
	{
		//SJC: Weaker for mobility kills.
		//armor=0.6;
		armor = 0.4;
		//SJC: Switch track sides so disabled tanks drive in the direction of the damaged track instead of the undamaged one to simulate the damaged track not functioning as well.
		//material=54;
		//name="pasP";
		material=53;
		name="pasL";
		//SJC: No passthrough
		//passThrough=1;
		passThrough = false;
	};

	class ViewPilot:ViewPilotBase
	{
		initAngleX=7;
		minAngleX=-15;
		maxAngleX=25;
		initAngleY=0;
		minAngleY=-90;
		maxAngleY=90;
	};

	class ViewOptics:ViewOpticsBase
	{
		initFov=0.3;
		minFov=0.07;
		maxFov=0.35;
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"Vehicles\gun_elevate",0.0316228,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret:TurretBase
	{
	};

	class ComTurret
	{
		turretAxis="OsaVelitele";
		gunAxis="OsaHlavneVelitele";
		soundServo[]={"Vehicles\gun_elevate",0.0003162,1.2};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
		body="OtocVelitele";
		gun="OtocHlavenVelitele";
	};

	class Wheels
	{
		rotR[]={"kolL1","kolL2","kolL3","kolL4","kolL5","kolL6","kolL7","kolL8"};
		rotL[]={"kolP1","kolP2","kolP3","kolP4","kolP5","kolP6","kolP7","kolP8"};
		upDownL[]={"koloP1","podkoloP1","koloP2","podkoloP2","koloP3","podkoloP3","koloP4","podkoloP4","koloP5","podkoloP5","koloP6","podkoloP6","koloP7","podkoloP7","koloP8","podkoloP8"};
		upDownR[]={"koloL1","podkoloL1","koloL2","podkoloL2","koloL3","podkoloL3","koloL4","podkoloL4","koloL5","podkoloL5","koloL6","podkoloL6","koloL7","podkoloL7","koloL8","podkoloL8"};
	};

	class GunFire:WeaponFireGun
	{
	};

	class GunClouds:WeaponCloudsGun
	{
	};

	class MGunFire:WeaponFireMGun
	{
	};

	class MGunClouds : WeaponCloudsMGun
	{
		//SJC: Tank machine guns don't shoot smoke horizontally so it needs to go up so it doesn't lag so much.
		density=15;
		cloudletAccY="30";
		cloudletMaxYSpeed=300;
		cloudletGrowUp="0.2 + (random 0.2)";
		cloudletFadeIn="0";
		cloudletDuration="0";
		cloudletFadeOut="0.4 + (random 0.2)";
		cloudletAlpha="0.1 + (random 0.1)";
	};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

	class HatchCommander
	{
		selection="poklop_commander";
		axis="osa_poklop_commander";
		angle=-100;
	};

	class HatchGunner
	{
		selection="poklop_gunner";
		axis="osa_poklop_gunner";
		angle=-100;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-240;
		min=0;
		max=16.6700001;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=340;
		min=0;
		max=1;
	};

	class IndicatorRadar
	{
		selection="ukaz_radar";
		axis="osa_radar";
		angle=-360;
		min=0;
		max=1;
	};

	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=0;
	};

	class IndicatorTurret
	{
		selection="ukazsmer";
		axis="osa_ukazsmer";
		angle=360;
		min=0;
		max=6.2831855;
	};

	class CargoLight
	{
		color[]={0,0,0,0};
		ambient[]={0.6,0,0.15,1};
		brightness=0.007;
	};
};

class APC : Tank
{
	icon="bmp";
	displayName="$STR_DN_APC";
	nameSound="apc";
	accuracy=0.12;
	fuelCapacity=700;
	armor=200;
	cost=1000000;
	hasGunner=1;
	hasCommander=1;
	soundEnviron[]={"Vehicles\OldRolling_Treads1",0.3162278,0.7};
	soundEngine[]={"Vehicles\OldIdle1",0.3162278,1};
	soundCrash[]={"Vehicles\crash_small2",0.3162278,1};
	soundGear[]={"Vehicles\Gear_Trans1",0.01,1};
	simulation="tank";
	maxSpeed=60;
	canFloat=0;
	weapons[]={"AT3Launcher","MachineGun12_7"};
	magazines[]={"AT3Launcher","MachineGun12_7"};
	type=1;
	threat[]={0.8,1,0.3};

	class Turret : TurretBase
	{
		minElev=-4.5;
		maxElev=20;
	};
};

class Man : Land
{
	mapSize=0.5;
	vehicleClass="Men";
	icon="soldier";
	autocenter=0;
	isMan=1;
	displayName="$STR_DN_MAN";
	nameSound="man";
	extCameraPosition[]={0,0.3,-3.5};
	accuracy=0.25;
	audible=0.05;
	camouflage=1;
	//SJC: More sensitive eyes.
	//sensitivity=1;
	sensitivity = 1.5;
	sensitivityEar=0.13;
	//SJC: Formations were too close.
	//formationX=5;
	//formationZ=5;
	formationX = "7+random 8";
	formationZ = "7+random 8";
	precision=1;
	brakeDistance=1;
	steerAheadSimul=0.2;
	steerAheadPlan=0.2;
	maxSpeed=24;
	irTarget=0;
	canHideBodies=0;
	canDeactivateMines=0;
	unitInfoType = UNITINFO_SOLDIER;
	hideUnitInfo=1;
	armor=3;
	armorStructural=2.0;
	armorHead=0.7;
	armorBody=0.8;
	armorHands=0.5;
	armorLegs=0.5;
	cost=100000;
	simulation="soldier";
	wounds[]=
	{
		FACE_WOUNDS,
		"\merged\00007mc_vojakw2.paa", "\merged\00009mc_vojakw2.paa",
		"\merged\00008mc_vojake2.paa", "\merged\00010mc_vojake2.paa",
		"00004mc_vojakw2.paa", "00009mc_vojakw2.paa",
		"00005mc_vojakw2.paa", "00008mc_vojakw2.paa",
		"00003mc_vojakw2.paa", "00007mc_vojakw2.paa",
		"00004mc_vojake2.paa", "00007mc_vojake2.paa",
		"00005mc_vojake2.paa", "00008mc_vojake2.paa",
		"00004mc_tankistaw2.paa", "00007mc_tankistaw2.paa",
		"00002mc_tankistaw2.paa", "00006mc_tankistaw2.paa",
		"00000mc_tankistae2.paa", "00008mc_tankistae2.paa",
		"00003mc_tankistae2.paa", "00007mc_tankistae2.paa",
		"00002mc_saboteur.paa", "00007mc_saboteur.paa",
		"00000mc_saboteur.paa", "00006mc_saboteur.paa",
		"00003mc_SPECNAS2.paa", "00011mc_SPECNAS2.paa",
		"00005mc_SPECNAS2.paa", "00010mc_SPECNAS2.paa",
		"00000mc_vojakg2.paa", "00009mc_vojakg2.paa",
		"00003mc_vojakg2.paa", "00008mc_vojakg2.paa",
		"00003mc_vojakg3.paa", "00009mc_vojakg3.paa",
		"00004mc_vojakg3.paa", "00008mc_vojakg3.paa",
		"00005mc_vojakg3.paa", "00007mc_vojakg3.paa",
		"00002mc_pilote2.paa", "00007mc_pilote2.paa",
		"00004mc_pilote2.paa", "00006mc_pilote2.paa",
		"00003mc_Pilotw2.paa", "00007mc_Pilotw2.paa",
		"00002mc_Pilotw2.paa", "00006mc_Pilotw2.paa",
		"00002mc_SNIPERe2.paa", "00009mc_SNIPERe2.paa",
		"00004mc_SNIPERe2.paa", "00008mc_SNIPERe2.paa",
		"w_helma_front", "w_helma_front_D",
		"w_helma_side2", "w_helma_side2_D",
		"w_helma_vnitrek", "w_helma_vnitrek_D",
		"w_ramena", "w_ramena_D",
		"w_hrud_p", "w_hrud_p_D",
		"w_zadaruce_z", "w_zadaruce_z_D",
		"w_vojak_ruka_bok_l", "w_vojak_ruka_bok_l_D",
		"w_vojak_ruka_bok_p", "w_vojak_ruka_bok_p_D",
		"w_vojak_nohy_bok_l", "w_vojak_nohy_bok_l_D",
		"w_vojak_nohy_bok_p", "w_vojak_nohy_bok_p_D",
		"w_nohy_p", "w_nohy_p_D",
		"w_nohy_z", "w_nohy_z_D",
		"e_helma_front", "e_helma_front_D",
		"e_hrud_p", "e_hrud_p_D",
		"e_zada_z", "e_zada_z_d",
		"e_ruka_bok_l", "e_ruka_bok_l_D",
		"e_ruka_bok_p", "e_ruka_bok_p_D",
		"e_nohy_bok_l", "e_nohy_bok_l_D",
		"e_nohy_bok_p", "e_nohy_bok_p_D",
		"e_nohy_p", "e_nohy_p_D",
		"e_nohy_z", "e_nohy_z_D",
		"e_pilot_helma_z", "e_pilot_helma_z_d",
		"e_pilot_nohy_p", "e_pilot_nohy_p_d",
		"e_pilot_nohy_z", "e_pilot_nohy_z_d",
		"e_pilot_ramena", "e_pilot_ramena_d",
		"e_pilot_nohybok_l", "e_pilot_nohybok_l_d",
		"e_pilot_nohybok_p", "e_pilot_nohybok_p_d",
		"e_pilot_rucebok_l", "e_pilot_rucebok_l_d",
		"e_pilot_rucebok_p", "e_pilot_rucebok_p_d",
		"e_pilot_zada_z", "e_pilot_zada_z_d",
		"e_tankhelma_side512", "e_tankhelma_side512_d",
		"zaloha_hrud", "zaloha_hrud_d",
		"e_tank_zada_z", "e_tank_zada_z_d",
		"e_tank_nohy_p", "e_tank_nohy_p_D",
		"e_tank_nohy_z", "e_tank_nohy_z_D",
		"e_tank_ruka_p", "e_tank_ruka_p_d",
		"e_tank_ruka_l", "e_tank_ruka_l_d",
		"e_tank_nohybok_l", "e_tank_nohybok_l_d",
		"e_tank_nohybok_r", "e_tank_nohybok_r_d",
		"e_tankhelma_back512", "e_tankhelma_back512_d",
		"g_zada_z", "g_zada_z_D",
		"g_hrud_p", "g_hrud_p_d",
		"g_nohy_p", "g_nohy_p_D",
		"g_nohy_z", "g_nohy_z_D",
		"g_noha_bok_l", "g_noha_bok_l_d",
		"g_noha_bok_p", "g_noha_bok_p_d",
		"g_ruka_bok_p", "g_ruka_bok_p_d",
		"g_ruka_bok_l", "g_ruka_bok_l_d",
		"g_ramena", "g_ramena_D",
		"g_cepice_side", "g_cepice_side_d",
		"g_cepice_up", "g_cepice_up_d",
		"g2_hrud_p", "g2_hrud_p_d",
		"g2_zada_z", "g2_zada_z_d",
		"g2_nohy_z", "g2_nohy_z_d",
		"g2_nohy_p", "g2_nohy_p_d",
		"g2_nohy_bok_p", "g2_nohy_bok_p_d",
		"g2_nohy_bok_l", "g2_nohy_bok_l_d",
		"g2_ramena", "g2_ramena_D",
		"g2_ruka_bok_p", "g2_ruka_bok_p_d",
		"g2_ruka_bok_l", "g2_ruka_bok_l_d",
		"w_saboteur_hrud_p", "w_saboteur_hrud_p_D",
		"w_saboteur_zada_z", "w_saboteur_zada_z_D",
		"w_saboteur_nohy_z", "w_saboteur_nohy_z_D",
		"w_saboteur_nohy_p", "w_saboteur_nohy_p_D",
		"w_saboteur_ruka_p", "w_saboteur_ruka_p_d",
		"w_saboteur_ruka_l", "w_saboteur_ruka_l_d",
		"w_saboteur_ramena_z", "w_saboteur_ramena_z_D",
		"w_saboteur_kukla_s", "w_saboteur_kukla_s_d",
		"w_saboteur_kukla_f", "w_saboteur_kukla_f_d",
		"w_sniper_rukabok_l", "w_sniper_rukabok_l_d",
		"w_sniper_rukabok_p", "w_sniper_rukabok_p_d",
		"w_sniper_zada_z", "w_sniper_zada_z_d",
		"w_sniper_hrud_p", "w_sniper_hrud_p_d",
		"w_sniper_nohy_z", "w_sniper_nohy_z_d",
		"w_sniper_nohy_p", "w_sniper_nohy_p_d",
		"w_sniper_ramena", "w_sniper_ramena_d",
		"w_sniper_sitka.paa", "w_sniper_sitka_d.paa",
		"w_tank_hrud_p", "w_tank_hrud_p_D",
		"w_tank_zada_z", "w_tank_zada_z_D",
		"w_tank_nohy_p", "w_tank_nohy_p_D",
		"w_tank_nohy_z", "w_tank_nohy_z_D",
		"w_tank_nohybok_l", "w_tank_nohybok_l_d",
		"w_tank_nohybok_p", "w_tank_nohybok_p_d",
		"w_tank_rucebok_p", "w_tank_rucebok_p_d",
		"w_tank_rucebok_l", "w_tank_rucebok_l_d",
		"w_tank_helma_side", "w_tank_helma_side_d",
		"w_tank_helma_front_p", "w_tank_helma_front_p_d",
		"w_tank_ramena", "w_tank_ramena_d",
		"w_pilot_hrud_p", "w_pilot_hrud_p_D",
		"w_pilot_zada_z", "w_pilot_zada_z_D",
		"w_pilot_nohy_p", "w_pilot_nohy_p_D",
		"w_pilot_nohy_z", "w_pilot_nohy_z_D",
		"w_pilot_rucebok_l", "w_pilot_rucebok_l_d",
		"w_pilot_rucebok_p", "w_pilot_rucebok_p_D",
		"w_pilot_nohybok_l", "w_pilot_nohybok_l_d",
		"w_pilot_nohybok_p", "w_pilot_nohybok_p_d",
		"w_pilot_ramena", "w_pilot_ramena_d",
		"w_pilot_helma", "w_pilot_helma_d",
		"e_spec_hrud_p", "e_spec_hrud_p_d",
		"e_spec_ruka_bok_p", "e_spec_ruka_bok_p_d",
		"e_spec_ruka_bok_l", "e_spec_ruka_bok_l_d",
		"e_spec_ramena", "e_spec_ramena_d",
		"e_spec_zada_z", "e_spec_zada_p_z",
		"e_spec_hrud_p", "e_spec_hrud_p_z",
		"e_spec_satek_back", "e_spec_satek_back_d",
		"e_spec_satek_side", "e_spec_satek_side_d",
		"jirka_hrud_p", "jirka_hrud_p_D",
		"jirka_zada_z", "jirka_zada_p_D",
		"jirka_nohy_p", "jirka_nohy_p_D",
		"jirka_nohy_z", "jirka_nohy_z_D",
		"jirka_rukabok_p", "jirka_rukabok_p_d",
		"jirka_nohybok_l", "jirka_nohybok_l_d",
		"ang_bluza3", "ang_bluza3_d",
		"ang_face_f10", "ang_face_f10_d",
		"ang_sako_b", "ang_sako_b_d",
		"ang_sako_f", "ang_sako_f_d",
		"karel_hrud_p", "karel_hrud_p_d",
		"karel_rukabok", "karel_rukabok_d",
		"karel_zada", "karel_zada_d",
		"petr_hrud_p", "petr_hrud_p_d",
		"petr_zada_z", "petr_zada_z_d",
		"petr_nohy_zad", "petr_nohy_zad_d",
		"petr_nohy_pr", "petr_nohy_pr_d"
	};
	minGunElev=-60;
	maxGunElev=60;
	minGunTurn=-5;
	maxGunTurn=5;
	//SJC: AI's can now turn their torso enough to shoot to the side while moving. Should also be able to engage targets faster because they don't have to play the slow turning animation as much. Can turn as much as possible without looking strange while AI's are lying prone turned to side.
	//minGunTurnAI=-30;
	//maxGunTurnAI=30;
	minGunTurnAI = -60;
	maxGunTurnAI = 60;
	fov=0.85;
	minFov=0.42;
	maxFov=0.85;
	microMimics="Micro";
	minHeadTurnAI=-70;
	maxHeadTurnAI=70;
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	weapons[]={"RiffleGrenadeLauncher"};
	magazines[]={"Riffle","Riffle","Riffle","Riffle","GrenadeLauncher"};
	model="vojakw";
	picture="";
	hitSound1[]={"voices\Hit11",0.0562341,1};
	hitSound2[]={"voices\Hit12",0.0562341,1};
	hitSound3[]={"voices\Hit13",0.0562341,1};
	hitSound4[]={"voices\Hit14",0.0562341,1};
	hitSound5[]={"voices\Hit15",0.0562341,1};
	hitSound6[]={"voices\Hit16",0.0562341,1};
	hitSound7[]={"voices\Hit17",0.0562341,1};
	hitSound8[]={"voices\Hit18",0.0562341,1};
	hitSound9[]={"voices\Hit19",0.0562341,1};
	hitSound10[]={"voices\Hit20",0.0562341,1};
	hitSound11[]={"voices\Hit21",0.0562341,1};
	hitSound12[]={"voices\Hit22",0.0562341,1};
	hitSound13[]={"voices\Hit23",0.0562341,1};
	hitSound14[]={"voices\Hit24",0.0562341,1};
	hitSound15[]={"voices\Hit25",0.0562341,1};
	hitSound16[]={"voices\Hit26",0.0562341,1};
	hitSound17[]={"voices\Hit27",0.0562341,1};
	hitSound18[]={"voices\Hit28",0.0562341,1};
	hitSound19[]={"voices\Hit29",0.0562341,1};
	hitSound20[]={"voices\Hit30",0.0562341,1};
	hitSounds[]={"hitSound1",0.05,"hitSound2",0.05,"hitSound3",0.05,"hitSound4",0.05,"hitSound5",0.05,"hitSound6",0.05,"hitSound7",0.05,"hitSound8",0.05,"hitSound9",0.05,"hitSound10",0.05,"hitSound11",0.05,"hitSound12",0.05,"hitSound13",0.05,"hitSound14",0.05,"hitSound15",0.05,"hitSound16",0.05,"hitSound17",0.05,"hitSound18",0.05,"hitSound19",0.05,"hitSound20",0.05};
	moves="NoDefaultMoves";
	soundEnviron[]={"People\dirt_L",0.0003162,1};
	soundEngine[]={"People\breath",0.0000178,1};
	//SJC: Air rushing past ears while running ?
	//additionalSound[]={"Objects\noise",0.0,1};
	additionalSound[]={"Objects\noise", 0.0000005, 1};
	type=0;
	threat[]={1,0.8,0.2};
	//SJC: Formation time kept people moving before they had time to shoot.
	formationTime = 20;

	class ViewPilot:ViewPilotBase
	{
		initAngleX=8;
		minAngleX=-40;
		maxAngleX=45;
		initAngleY=0;
		minAngleY=-125;
		maxAngleY=125;
	};

	class SoundEnvironExt
	{
		normalExt[]={{"People\dirt_L",0.0000032,1},{"People\dirt_R",0.0000032,1},{"People\grass_L",0.0000018,1},{"People\grass_R",0.0000018,1},{"People\grass_L",0.0000018,1},{"People\grass_R",0.0000018,1}};
		normal[]={{"People\dirt_L",0.0000032,1},{"People\dirt_R",0.0000032,1}};
		road[]={{"People\concrete_L",0.0000178,1},{"People\concrete_R",0.0000178,1},{"People\concrete_L",0.0000178,1},{"People\concrete_R",0.0000178,1},{"People\gravel_L",0.0000178,1},{"People\gravel_R",0.0000178,1},{"People\concrete_L",0.0000178,1},{"People\concrete_R",0.0000178,1}};
		rock[]={{"People\concrete_L",0.0000178,1},{"People\concrete_R",0.0000178,1},{"People\gravel_L",0.0000178,1},{"People\gravel_R",0.0000178,1},{"People\sand_L",0.0000032,1},{"People\sand_R",0.0000032,1},{"People\gravel_L",0.0000178,1},{"People\gravel_R",0.0000178,1},{"People\concrete_L",0.0000178,1},{"People\concrete_R",0.0000178,1}};
		water[]={{"People\water_L",0.0000316,1},{"People\water_R",0.0000316,1}};
		gravel[]={{"People\gravel_L",0.0000178,1},{"People\gravel_R",0.0000178,1}};
		sand[]={{"People\sand_L",0.0000032,1},{"People\sand_R",0.0000032,1},{"People\sand_L",0.0000032,1},{"People\sand_R",0.0000032,1},{"People\gravel_L",0.0000178,1},{"People\gravel_R",0.0000178,1}};
		drygrass[]={{"People\drygrass_L",0.0000032,1},{"People\drygrass_R",0.0000032,1},{"People\grass_L",0.0000018,1},{"People\grass_R",0.0000018,1},{"People\forest_L",0.0000032,1},{"People\forest_R",0.0000032,1}};
		grass[]={{"People\grass_L",0.0000018,1},{"People\grass_R",0.0000018,1},{"People\drygrass_L",0.0000032,1},{"People\drygrass_R",0.0000032,1}};
		forest[]={{"People\forest_L",0.0000032,1},{"People\forest_R",0.0000032,1},{"People\grass_L",0.0000018,1},{"People\grass_R",0.0000018,1},{"People\dirt_L",0.0000032,1},{"People\dirt_R",0.0000032,1},{"People\mud_L",0.0000032,1},{"People\mud_R",0.0000032,1}};
		mud[]={{"People\mud_L",0.0000032,1},{"People\mud_R",0.0000032,1},{"People\mud_L",0.0000032,1},{"People\mud_R",0.0000032,1},{"People\water_L",0.0000316,1},{"People\water_R",0.0000316,1}};
		wood[]={{"People\wood_L",0.0000032,1},{"People\wood_R",0.0000032,1}};
		metal[]={{"People\metal_L",0.0000032,1},{"People\metal_R",0.0000032,1}};
		snow[]={{"People\snow_L",0.0000316,1},{"People\snow_R",0.0000316,1}};
		hallway[]={{"People\hall_L",0.0000316,1},{"People\hall_R",0.0000316,1}};
		fallbody[]={{"People\fall_to_ground",0.001,1}};
		laydown[]={{"People\down",0.00001,1}};
		standup[]={{"People\up",0.0000032,1}};
		crawl[]={{"People\crawl",0.0000018,1}};
	};

	class Reflectors
	{
	};

	class MGunClouds:WeaponCloudsMGun
	{
	};

	class GunClouds:WeaponCloudsGun
	{
		cloudletGrowUp=0.2;
		cloudletFadeIn=0;
		cloudletFadeOut=0.4;
		cloudletDuration=0.2;
		cloudletAlpha=1;
		cloudletAccY=2;
		cloudletMinYSpeed=-10;
		cloudletMaxYSpeed=10;
		interval=0.02;
		size=0.3;
		sourceSize=0.015;
	};
	
	class EventHandlers
	{
		fired = "_this exec {\SJC_Scripts\Events\Fire_Man.sqs}";
	};
};

class Soldier : Man
{
	displayName="$STR_DN_SOLDIER";
	nameSound="soldier";
	weaponSlots = WEAPON_PRIMARY + WEAPON_SECONDARY + 10 * WEAPON_ITEM + 2 * WEAPON_BINOCULAR + WEAPON_HANDGUN + 4 * WEAPON_HANDGUNMAGAZINE;
	accuracy=0.6;
	type=0;
	threat[]={1,0.05,0.05};
	moves="CfgMovesMC";
	vehicleClass="Infantry";
	armorBody = 1.8; //Soldiers are more difficult to kill. Should be wounded more often.
	armorHead = 1.2; //Soldiers usually wear a Helmet
};

class SoldierLAW : Soldier
{
	displayName="$STR_DN_LAW_SOLDIER";
	accuracy=1.4;
	weapons[]={"Riffle","LAWLauncher"};
	magazines[]={"Riffle","Riffle","Riffle","Riffle","LAWLauncher","LAWLauncher"};
	threat[]={1,0.9,0.1};
};

class Air : AllVehicles
{
	icon="helicopter";
	//SJC: Make name identify as aircraft.
	//displayName="$STR_DN_HELICOPTER";
	displayName = "$STR_MPTABLE_AIR";
	vehicleClass="Vehicles (Air)";
	nameSound="target";
	accuracy=0.005;
	formationX=50;
	formationZ=100;
	precision=100;
	brakeDistance=200;
	formationTime=10;
	armor=20;
	cost=10000000;
	fuelCapacity=1000;
	maxSpeed=400;
	//SJC: Make Aircraft have less ability to hear things to simulate ear protection worn by pilots.
	//insideSoundCoef=0.05;
	insideSoundCoef = 0.002;
	weapons[]={"MachineGun12_7"};
	magazines[]={"MachineGun12_7"};
	type=2;
	irScanRangeMin=2000;
	irScanRangeMax=10000;
	irScanToEyeFactor=2;
	nightVision=1;
	//SJC: Easier to hear.
	//audible=10;
	audible = 15;
	unitInfoType = UNITINFO_AIRPLANE;
	threat[]={0.3,1,0.7};
	driverAction="ManActCargo";
	gunnerAction="ManActCargo";
	commanderAction="ManActCargo";
	//SJC: Pilot should have an instrument compass, or can use pocket compass. Gunner needs compass to show aircraft direction.
	//gunnerCanSee=31;
	//driverCanSee=31;
	gunnerCanSee = CANSEE_ALL;
	driverCanSee = CANSEE_RADAR + CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR;
	typicalCargo[]={"Soldier"};
	transportMaxMagazines=20;
	transportMaxWeapons=3;
	//SJC: Make aircraft have a larger viewing sensitivity to simulate optics and sensors and to make up for lack of radar.
	sensitivity=3;
	camouflage=15;

	class GunFire : WeaponFireGun
	{
	};

	class GunClouds : WeaponCloudsGun
	{
	};

	class MGunFire : WeaponFireMGun
	{
	};

	class MGunClouds : WeaponCloudsMGun
	{
	};
};

class Helicopter : Air
{
	displayName="$STR_DN_HELICOPTER";
	nameSound="chopper";
	accuracy=0.08;
	//SJC: Longer range.
	//soundEngine[]={"Vehicles\helicopter",3.1622777,1};
	soundEngine[]={"Vehicles\helicopter", 6.0, 1};
	soundEnviron[]={"Objects\noise",0.1,1.0};
	soundDammage[]={"Objects\alarm_loop1",0.01,1};
	simulation="helicopter";
	mainRotorSpeed=1.0;
	backRotorSpeed=1.5;
	//SJC: Heli rotor tilt.
	//minMainRotorDive=0;
	//maxMainRotorDive=0;
	minMainRotorDive = -1;
	maxMainRotorDive = 8;
	minBackRotorDive=0;
	maxBackRotorDive=0;
	neutralBackRotorDive=0;
	neutralMainRotorDive=0;
	armorStructural=2.0;
	armorHull=0.5;
	armorEngine=0.6;
	armorAvionics=1.4;
	armorVRotor=0.5;
	armorHRotor=0.7;
	armorMissiles=1.6;
	armorGlass=0.5;
	maxSpeed=300;
	enableSweep = true;
	unitInfoType = UNITINFO_HELICOPTER;
	minFireTime=20;
	steerAheadSimul=0.5;
	steerAheadPlan=0.7;
	hasGunner=1;
	driverIsCommander=1;
	gunnerOpticsModel="optika_heli_gunner";
	weapons[]={"MachineGun12_7","HellfireLauncher"};
	magazines[]={"MachineGun12_7","HellfireLauncher"};
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2B.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsB.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoB.paa","uh60_gunner_okna.paa","uh60_gunner_oknaB.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoB.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoB.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoB.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","uh60_kab_sklo2.paa","uh60_kab_sklo2C.paa","uh30_cargo_pilotdoors.paa","uh30_cargo_pilotdoorsC.paa","uh60_cargo_dvereokno.paa","uh60_cargo_dvereoknoC.paa","uh60_gunner_okna.paa","uh60_gunner_oknaC.paa","ah-1_kabina_predokno.paa","ah-1_kabina_predoknoC.paa","ah-1_kabina_zadokno.paa","ah-1_kabina_zadoknoC.paa","ah-1_kabina_topokno.paa","ah-1_kabina_topoknoC.paa"};

	class ViewPilot:ViewPilotBase
	{
		initFov=0.7;
		minFov=0.4;
		maxFov=1.0;
		initAngleX=0;
		minAngleX=-15;
		maxAngleX=25;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-20;
		maxElev=20;
		minTurn=-45;
		maxTurn=45;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret:TurretBase
	{
	};

	class ViewOptics:ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-40;
		maxAngleX=17;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.5;
		minFov=0.3;
		maxFov=1.2;
	};

	class Reflectors
	{

		class Reflector
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=1.0;
		};
	};

	class IndicatorAltRadar
	{
		selection="alt";
		axis="osa_alt";
		angle=-360;
		min=0;
		max=304;
	};

	class IndicatorAltBaro
	{
		selection="nm_alt";
		axis="osa_nm_alt";
		angle=-180;
		min=0;
		max=61;
	};

	class IndicatorSpeed
	{
		selection="mph";
		axis="osa_mph";
		angle=-320;
		min=0;
		max=125;
	};

	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=-300;
		min=-30;
		max=30;
	};

	class IndicatorRPM
	{
		selection="rpm";
		axis="osa_rpm";
		angle=-320;
		min=0;
		max=12;
	};

	class IndicatorCompass
	{
		selection="kompas";
		axis="osa_kompas";
		angle=-360;
		min=-3.1415927;
		max=3.1415927;
	};

	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=1;
	};

	class IndicatorAltRadar2
	{
		selection="alt2";
		axis="osa_alt2";
		angle=-360;
		min=0;
		max=304;
	};

	class IndicatorAltBaro2
	{
		selection="nm_alt2";
		axis="osa_nm_alt2";
		angle=-180;
		min=0;
		max=61;
	};

	class IndicatorSpeed2
	{
		selection="mph2";
		axis="osa_mph2";
		angle=-320;
		min=0;
		max=125;
	};

	class IndicatorVertSpeed2
	{
		selection="vert_speed2";
		axis="osa_vert_speed2";
		angle=-300;
		min=-30;
		max=30;
	};

	class IndicatorRPM2
	{
		selection="rpm2";
		axis="osa_rpm2";
		angle=-320;
		min=0;
		max=12;
	};

	class IndicatorCompass2
	{
		selection="kompas2";
		axis="osa_kompas2";
		//SJC: Switch direction.
		//angle=-360;
		angle = 360;
		min=-3.1415927;
		max=3.1415927;
	};

	class IndicatorWatch2
	{
		hour="hodinova2";
		minute="minutova2";
		axis="osa_time2";
		reversed=1;
	};
};

class Plane : Air
{
	icon="a10";
	displayName="$STR_DN_PLANE";
	nameSound="plane";
	accuracy=0.1;
	maxSpeed=450;
	landingSpeed=0;
	flapsFrictionCoef=0.5;
	formationX=200;
	formationZ=300;
	precision=200;
	brakeDistance=500;
	steerAheadSimul=1.0;
	steerAheadPlan=2.0;
	wheelSteeringSensitivity=1.0;
	unitInfoType = UNITINFO_AIRPLANE;
	gearRetracting=1;
	ejectSpeed[]={0,40,0};
	minFireTime=60;
	cost=2000000;
	soundEngine[]={"Vehicles\01F5",1.0,0.5};
	soundEnviron[]={"Objects\noise",0.3162278,1.0};
	soundServo[]={"Vehicles\gun_elevate",0.1,0.4};
	soundDammage[]={"Objects\alarm_loop1",0.01,1};
	simulation="airplane";
	minGunElev=0;
	maxGunElev=0;
	minGunTurn=0;
	maxGunTurn=0;
	weapons[]={"MachineGun12_7","MaverickLauncher"};
	magazines[]={"MachineGun12_7","MaverickLauncher"};
	type=2;
	threat[]={0.1,1,0.5};
	aileronSensitivity=1;
	elevatorSensitivity=1;
	noseDownCoef=1;
	landingAoa="10*3.1415/180";
	extCameraPosition[]={0,5,-30};

	class ViewPilot:ViewPilotBase
	{
		initFov=0.7;
		minFov=0.4;
		maxFov=0.85;
		initAngleX=8;
		minAngleX=-15;
		maxAngleX=25;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
	};

	class ViewOptics:ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=0;
		maxAngleX=0;
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=0.5;
		minFov=0.5;
		maxFov=0.5;
	};

	class Reflectors
	{

		class Reflector
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=1.0;
		};
	};

	class IndicatorAltRadar
	{
		selection="alt";
		axis="osa_alt";
		angle=-360;
		min=0;
		max=304;
	};

	class IndicatorAltRadar2
	{
		selection="alt2";
		axis="osa_alt2";
		angle=-360;
		min=0;
		max=304;
	};

	class IndicatorAltBaro
	{
		selection="nm_alt";
		axis="osa_nm_alt";
		angle=0;
		min=0;
		max=0;
	};

	class IndicatorSpeed
	{
		selection="mph";
		axis="osa_mph";
		angle=-350;
		min=0;
		max=300;
	};

	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=-360;
		min=-45;
		max=45;
	};

	class IndicatorVertSpeed2
	{
		selection="vert_speed2";
		axis="osa_vert_speed2";
		angle=-360;
		min=-45;
		max=45;
	};

	class IndicatorRPM
	{
		selection="rpm";
		axis="osa_rpm";
		angle=-320;
		min=0;
		max=1;
	};

	class IndicatorCompass
	{
		selection="kompas";
		axis="osa_kompas";
		angle=360;
		min=-3.1415927;
		max=3.1415927;
	};

	class IndicatorCompass2
	{
		selection="kompas2";
		axis="osa_kompas2";
		//SJC: Change direction
		//angle=360;
		angle = -360;
		min=-3.1415927;
		max=3.1415927;
	};

	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=1;
	};

	class IndicatorWatch2
	{
		hour="hodinova2";
		minute="minutova2";
		axis="osa_time2";
		reversed=1;
	};

	//SJC: Thicker plane gun smoke.
	class MGunClouds : WeaponCloudsMGun
	{
		sourceSize="0.01 + (random 0.03)";
		size="3 + (random 1)";
		interval="0.1";
		cloudletAnimPeriod="2 + (random 1)";
		cloudletSize="20";
		cloudletFadeIn="0";
		cloudletGrowUp="0";
		cloudletDuration="0.5 + (random 1)";
		cloudletFadeOut="1 + (random 2)";
		cloudletAccY="0";
		cloudletMinYSpeed="-1000";
		cloudletMaxYSpeed="1000";
		cloudletShape="cl_water";
		cloudletColor[]={1,1,1,0};
		cloudletAlpha=".8 + (random 0.05)";
		density="0";
		initT="0";
		deltaT="500 +(random 1000)";
		
		class Table
		{
			class T0
			{
				maxT = 0;
				color[] = {0.74,0.76,0.75,1};
			};
			
			class T1
			{
				maxT = 1000;
				color[] = {0.77,0.82,0.81,0};
			};
		};
	};
};

class Ship : AllVehicles
{
	vehicleClass="Vehicles (Ships)";
	unitInfoType = UNITINFO_SHIP;
	icon="ship";
	cost=10000000;
	armor=1000;
	displayName="$STR_DN_SHIP";
	nameSound="ship";
	accuracy=0.005;
	maxSpeed=30;
	simulation="ship";
	audible=6;
	formationX=50;
	formationZ=100;
	precision=25;
	brakeDistance=50;
	formationTime=20;
	steerAheadSimul=2.0;
	steerAheadPlan=2.4000001;
	predictTurnSimul=2.0;
	predictTurnPlan=2.4000001;
	type=1;
	threat[]={0.2,0.2,0.1};
	getInRadius=10;
	driverAction="ManActShipDriver";
	gunnerAction="ManActShipDriver";
	commanderAction="ManActShipDriver";
	cargoAction[]={"ManActShipCargo"};
	getInAction = MANACT_GETOUTCAR;
	getOutAction = MANACT_GETOUTCAR;

	class TurretBase
	{
		gunAxis="osa hlavne";
		turretAxis="osa veze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={"Vehicles\gun_elevate",0.001,1.0};
		minElev=-5;
		maxElev=40;
		minTurn=-135;
		maxTurn=135;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret:TurretBase
	{
	};

	class ViewPilot:ViewPilotBase
	{
		initFov=1.0;
		minFov=0.42;
		maxFov=1.2;
		initAngleX=6;
		minAngleX=-8;
		maxAngleX=10;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
	};

	class ViewOptics:ViewOpticsBase
	{
		initFov=0.7;
		minFov=0.07;
		maxFov=0.35;
	};

	class GunFire:WeaponFireGun
	{
	};

	class GunClouds:WeaponCloudsGun
	{
	};

	class MGunFire:WeaponFireMGun
	{
	};

	class MGunClouds:WeaponCloudsMGun
	{
	};
};

class SmallShip : Ship
{
	cost=50000;
	armor=300;
	displayName="$STR_DN_SMALL_SHIP";
	accuracy=0.2;
	soundEngine[]={"Vehicles\GuardShip",0.0017783,1};
	fuelCapacity=700;
	weapons[]={"Browning"};
	magazines[]={"Browning"};
	maxSpeed=60;
	steerAheadSimul=2;
	steerAheadPlan=2;
	predictTurnSimul=3;
	predictTurnPlan=3;
	precision=50;
	brakeDistance=50;
	hasGunner=1;
	hasCommander=0;
	driverIsCommander=1;
	transportMaxMagazines=100;
	transportMaxWeapons=20;

	class Reflectors
	{
		class Reflector
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=0.25;
		};
	};
};

class BigShip : Ship
{
	cost=10000000;
	displayName="$STR_DN_BIG_SHIP";
	accuracy=0.2;
	armor=1000;
	soundEngine[]={"Vehicles\BigShip",0.0017783,1};
	weapons[]={"Gun120","MachineGun12_7"};
	magazines[]={"Gun120","Gun120","Gun120","Gun120","MachineGun12_7","MachineGun12_7"};
	transportMaxMagazines=500;
	transportMaxWeapons=200;
};

class SkodaHelper : Car
{
	scope=0;
	picture="iskoda";
	maxSpeed=125;
	side=3;
	nameSound="car";
	displayName="$STR_DN_SKODA";
	accuracy=0.5;
	armor=20;
	cost=2000;
	fuelCapacity=50;
	transportSoldier=3;
	transportAmmo=0;
	terrainCoef=10.0;
	soundEngine[]={"Vehicles\car",0.0177828,1.8};
	weapons[]={"SportCarHorn"};
	magazines[]={};
	driverAction="ManActSkodaDriver";
	cargoAction[]={"ManActSkodaCoDriver","ManActSkodaCoDriverBack"};
	cargoIsCoDriver[]={1,0};
	typicalCargo[]={};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=254;
		min=0;
		max="180 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-255;
		min=0;
		max=1;
	};
};

class SkodaBase : SkodaHelper
{
	accuracy=1000;
};

class Truck : Car
{
	nameSound="truck";
	formationX=20;
	formationZ=30;
	getInAction = MANACT_GETINTANK;
	getOutAction = MANACT_GETOUTTANK;
	armorWheels=0.3;
	damperSize=0.2;
	fov=1.0;
	minFov=0.6;
	maxFov=1.4;
	transportMaxMagazines=200;
	transportMaxWeapons=50;
};

class ParachuteBase : Helicopter
{
	scope=0;
	destrType=DESTRUCT_NONE;
	simulation="parachute";
	weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
	autocenter=0;
	displayName="$STR_DN_PARACHUTE";
	nameSound="man";
	model="para";
	picture="ivojak";
	icon="padak.paa";
	//SJC: All Parachute classes you 0.5
	//accuracy=0.1;
	accuracy = 0.5;
	fuelCapacity=0;
	unitInfoType=unitinfosoldier;
	hideUnitInfo=1;
	irTarget=0;
	hasGunner=0;
	soundEnviron[]={"Objects\noise",0.01,0.25};
	soundGetOut[]={"",0.0003162,1};
	soundCrash[]={"",0.0003162,1};
	soundLandCrash[]={"",0.0003162,1};
	soundWaterCrash[]={"Explosions\intowater",0.0316228,1};
	driverCanSee="2+8";
	driverAction="ManActPara";
	armor=10;
	type=0;
	threat[]={0.0,0.0,0.0};
	cost=100000;
	weapons[]={};
	magazines[]={};
	//SJC: Show stuff
	hideWeaponsDriver = false;
	castDriverShadow = true;

	class ViewOptics:ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-40;
		maxAngleX=17;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.5;
		minFov=0.3;
		maxFov=1.2;
	};
};

class LaserTarget : All
{
	reversed=0;
	hasDriver=0;
	icon="Unknown_object";
	displayName="$STR_DN_LASER_TARGET";
	nameSound="target";
	accuracy=0.005;
	model="laserTgt.p3d";
	picture="ivojak";
	weapons[]={"MachineGun12_7"};
	magazines[]={};
	type="VArmor";
	threat[]={0.2,0.5,1.0};
	maxSpeed=0;
	simulation="laserTarget";
	laserTarget=1;
	irTarget=0;
	destrType="DESTRUCT_NONE";
	side=3;
	cost=1000000;
	armor=500;
};

class RussianTank : Tank
{
	accuracy=0.35;
	side=0;
	crew="SoldierECrew";
	commanderOpticsModel="optika_tanke_auxiliary";
	forceHideGunner=0;
};

class Static : All
{
	reversed=0;
	hasDriver=0;
	icon="Unknown_object";
	displayName="$STR_DN_UNKNOWN";
	nameSound="target";
	accuracy=0.005;
	simulation="house";
	cost=0;
	picture="ivojak";
	weapons[]={};
	magazines[]={};
	type=1;
	threat[]={0.0,0.0,0.0};
	maxSpeed=0;
	coefInside=2;
	coefInsideHeur=4.3000002;
};

class Fortress : Static
{
	displayName="$STR_DN_BUNKER";
	nameSound="Bunker";
	armor=1000;
	cost=1000000;
	accuracy=0.2;
};

class Building : Static
{
	displayName="$STR_DN_BUILDING";
	nameSound="building";
	armor=150;
	accuracy=0.1;
};

class NonStrategic : Building
{
	side=3;
	ladders[]={};
};

class Strategic : Building
{
	side=3;
	armor=250;
	ladders[]={};
};

class Thing : All
{
	reversed=0;
	animated=0;
	icon="Unknown_object";
	vehicleClass="Objects";
	displayName="$STR_DN_UNKNOWN";
	nameSound="target";
	accuracy=0.005;
	simulation="thing";
	side=3;
	submerged=0;
	submergeSpeed=0;
	timeToLive=10000000000.0;
	disappearAtContact=0;
	hasDriver=0;
	picture="ivojak";
	weapons[]={};
	magazines[]={};
	type=1;
	threat[]={0.0,0.0,0.0};
	maxSpeed=0;
};

class ThingEffect : Thing
{
	scope=1;
	simulation="thingeffect";
	irTarget=0;
	//Stay around for a while.
	//submerged=-0.5;
	//submergeSpeed=0.25;
	submerged = 0;
	submergeSpeed = 0;
	timeToLive=20;
};

class FxExploGround1 : ThingEffect
{
	model="sutr2";
	displayName="$STR_DN_FX_EXPLO_GROUND_1";
};

class FxExploGround2 : ThingEffect
{
	model="sutr3";
	displayName="$STR_DN_FX_EXPLO_GROUND_2";
};

class FxExploArmor1 : ThingEffect
{
	model="kusplechu";
	displayName="Internal: FxExploArmor1";
};

class FxExploArmor2 : ThingEffect
{
	model="kusplechu2";
	displayName="Internal: FxExploArmor2";
};

class FxExploArmor3 : ThingEffect
{
	model="ohorelavec";
	displayName="Internal: FxExploArmor3";
};

class FxExploArmor4 : ThingEffect
{
	model="strepina";
	displayName="Internal: FxExploArmor4";
};

class FxCartridge : ThingEffect
{
	model="nabojnice";
	displayName="$STR_DN_FX_CARTRIDGE";
	submerged=0;
	submergeSpeed=0;
	//Spent casings stay longer.
	//timeToLive = 5;
	//disappearAtContact = 1;
	timeToLive = 50;
	disappearAtContact = false;
};

class FxCartridgeSmall : FxCartridge
{
	model="\O\Guns\nabojnice_small";
	displayName="$STR_DN_FX_CARTRIDGE";
	submerged=0;
	submergeSpeed=0;
	//Same as FxCartridge
	//timeToLive=5;
	//disappearAtContact=1;
};

class ReammoBox : Strategic
{
	vehicleClass="Objects (Ammocrates)";
	animated=0;
	scope=1;
	icon="Ammo_move";
	model="hromada_beden";
	displayName="$STR_DN_AMMO_CRATES";
	accuracy=0.2;
	typicalCargo[]={};
	destrType=DESTRUCT_ENGINE;
	transportMaxWeapons=500;
	transportMaxMagazines=2000;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	cost=0;
	armor=200;
	mapSize=2.5999999;
};

class HeavyReammoBox : Strategic
{
	vehicleClass="Objects (Ammocrates)";
	animated=0;
	scope=1;
	icon="Ammo_move";
	model="bedna_ammo";
	displayName="$STR_DN_AMMO_CRATES_WEST2";
	accuracy=1000;
	typicalCargo[]={};
	destrType=DESTRUCT_ENGINE;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	cost=0;
	armor=200;
	mapSize=2.5999999;
	transportMaxWeapons=500;
	transportMaxMagazines=2000;
};

class MachineGunBox : Strategic
{
	animated=0;
	scope=1;
	vehicleClass="Ammo";
	icon="Ammo_move";
	model="hromada_beden";
	displayName="$STR_DN_MACHINE_GUN";
	accuracy=0.2;
	typicalCargo[]={};
	destrType=DESTRUCT_ENGINE;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	transportMaxWeapons=1;
	transportMaxMagazines=3;
	cost=0;
	armor=20;
	mapSize=2.5999999;

	class TransportWeapons
	{
		class MachineGun
		{
			weapon="M60";
			count=1;
		};
	};

	class TransportMagazines
	{
		class MachineGun
		{
			magazine="M60";
			count=3;
		};
	};
};

class WeaponHolder : ReammoBox
{
	scope=1;
	model="\misc\dummyweapon.p3d";
	accuracy=0.2;
	forceSupply=1;
	showWeaponCargo=1;
	transportMaxMagazines=1000000000.0;
	transportMaxWeapons=1000000000.0;
	displayName="";

	class TransportMagazines
	{
	};
};

class SecondaryWeaponHolder : WeaponHolder
{
	model="\misc\dummyweapon2.p3d";
};

class BarrelHelper : Thing
{
	scope=0;
	simulation="thing";
	mapSize=0.7;
	displayName="$STR_DN_BARREL";
	accuracy=0.2;
	transportFuel=100;
	destrType=DESTRUCT_ENGINE;
};

class BarrelBase : BarrelHelper
{
	accuracy=1000;
	armor=100;
	cost=0;
};

class PhoneBase : Thing
{
	scope=1;
	model="hangar_telefon_bez.p3d";
	displayName="$STR_DN_PHONEBASE";
	mapSize=0.7;
	accuracy=0.2;
	destrType=DESTRUCT_BUILDING;
	simulation="thing";
	transportFuel=0;
	cost=0;
};

class PaletaHelper : BarrelHelper
{
	displayName="$STR_DN_PALLET";
	transportFuel=0;
	irTarget=0;
};

class PaletaBase : PaletaHelper
{
	accuracy=1000;
	cost=0;
};

class House : NonStrategic
{
	animated=0;
	scope=1;
	model="";
	displayName="$STR_DN_HOUSE";
	vehicleClass="Objects (Buildings)";
	nameSound="house";
	accuracy=0.2;
	cost=0;
	ladders[]={};
};

class Sound
{
	scope=0;
	side=-1;
	vehicleClass="Sounds";
	icon="vlajka";
	mapSize=10;
};

class LaserTargetBase : LaserTarget
{
};

class LaserTargetCBase : LaserTargetBase
{
	scope=1;
	side=3;
};

class LaserTargetWBase : LaserTargetBase
{
	scope=1;
	side=0;
};

class LaserTargetEBase : LaserTargetBase
{
	scope=1;
	side=1;
};

class MineGeneric
{
	scope=0;
	side=-1;
	vehicleClass="Mines";
	icon="unknown_object";
	mapSize=10;
};