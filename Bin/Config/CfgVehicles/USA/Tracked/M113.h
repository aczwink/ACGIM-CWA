/*
Sources:
http://en.wikipedia.org/wiki/M113
In service: 1960-present
*/
//maybe i can model the gunner protection to combats m113
class USA_M113 : APC
{
	scope=2;
	crew = "USA_Crew";
	picture="im113";
	side=1;
	displayName="M113 ACAV";
	nameSound="m113";
	accuracy = ACCURACY_M113;
	armor = ARMOR_M113;
	cost = COST_M113;
	maxSpeed = 68;
	hasCommander=0;
	outGunnerMayFire=1;
	forceHideGunner=1;
	viewGunnerInExternal=1;
	transportSoldier=8;
	irScanRangeMin=0;
	irScanRangeMax=0;
	transportAmmo=0;
	gunnerAction="ManActM113Gunner";
	gunnerInAction="ManActM113Gunner";
	driverAction="ManActM113DriverOut";
	driverInAction="ManActM113Driver";
	soundEnviron[]={"Vehicles\OldRolling_Treads1",0.1,0.7};
	soundEngine[]={"Vehicles\m113b",0.1,1};
	soundCrash[]={"Vehicles\crash_small2",0.1,1};
	soundGear[]={"Vehicles\Gear_Trans1",0.01,1};
	model="m113";
	canFloat=1;
	gunnerOpticsModel="optika_empty";
	initCargoAngleY=90;
	weapons[]={"M2HBBrowning"};
	magazines[]={"M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning"};
	type=1;
	threat[]={THREAT_M113};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
	transportMaxMagazines=100;
	transportMaxWeapons=20;
	driverIsCommander = true;

	class Turret:TurretBase
	{
		minElev=-12;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
		soundServo[]={"\sjc_sounds\vehicles\m113turret.ogg", 2.5, 0.3};
	};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=175;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-290;
		min=0;
		max="64/3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-235;
		min=0;
		max=1;
	};

	class EventHandlers
	{
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\SJC_Scripts\Events\VehicleBurner.sqs}";
	};

	//TODO_Desert:
};