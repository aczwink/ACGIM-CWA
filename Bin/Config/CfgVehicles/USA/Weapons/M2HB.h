/*
Sources:
	https://en.wikipedia.org/wiki/M2_Browning
In service: 1933-present
*/

class USA_M2HB : APC
{
	scope=2;
	vehicleClass="Weapons";
	side=1;
	hideProxyInCombat=0;
	picture="m2";
	crew = "USA_Soldier";
	hasDriver=0;
	hasGunner=1;
	hasCommander=0;
	castGunnerShadow=1;
	ejectDeadGunner=1;
	unitInfoType = UNITINFO_SOLDIER;
	hideUnitInfo=1;
	irScanRangeMin=0;
	irScanRangeMax=0;
	irTarget=0;
	maxSpeed=1;
	fuelCapacity=0;
	transportSolider=0;
	gunnerAction="ManActM2Gunner";
	gunnerInAction="ManActM2Gunner";
	gunnerCanSee="2+8";
	commanderCanSee="2+8";
	extCameraPosition[]={0,0.8,-5};
	cost = COST_M2HB;
	getInAction = MANACT_GETINCAR;
	getOutAction = MANACT_GETOUTCAR;
	armor = ARMOR_M2HB;
	armorStructural=10.0;
	type=0;
	model="\d4t_files\models\us\misc\m2hb_50cal.p3d";
	icon="kulomet.paa";
	displayName="M2HMG Browning";
	nameSound="mgun";
	transportSoldier=0;
	transportAmmo=0;
	accuracy = ACCURACY_M2HB;
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	gunnerOpticsModel="optika_empty";
	weapons[]={"M2HBBrowning"};
	magazines[]={"M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning"};

	class Turret:TurretBase
	{
		soundServo[]={};
		minElev=-20;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
	};

	class EventHandlers
	{
		Init = "[_this select 0, 185] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO
		//fired="_this call loadFile {\d4t_files\FX\scripts\MGbullet.sqf}";
	};
};