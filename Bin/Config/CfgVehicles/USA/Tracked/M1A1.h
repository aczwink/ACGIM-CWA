/*
Sources:
http://en.wikipedia.org/wiki/M1_Abrams
In service:1985-present
*/
class USA_M1A1 : Tank
{
	scope=2;
	crew = "SoldierWCrew";
	picture="iabrams";
	side=1;
	displayName="M1A1 Abrams";
	nameSound="Abrams";
	accuracy = ACCURACY_M1A1;
	armor = ARMOR_M1A1;
	armorStructural=2.0;
	armorHull=0.59;
	armorTurret=0.96;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	cost = COST_M1A1;
	maxSpeed = 67;
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\m1treads.ogg",1,1};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\m1engine.ogg",0.5,2};
	model="\d4t_files\models\us\vehicles\m1a1.p3d";
	weapons[]={"M256Gun", "M2HBBrowning", "M240Coaxial"};
	magazines[]={"M829_120APFSDS", "M830_120HEAT", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M240Coaxial"};
	gunnerAction="ManActM1A1Gunner";
	gunnerInAction="ManActM1A1Gunner";
	driverAction="ManActM1A1DriverOut";
	driverInAction="ManActM1A1Driver";
	commanderAction="ManActM1A1CommanderOut";
	commanderInAction="ManActM1A1Commander";
	type=1;
	threat[]={THREAT_M1A1};
	wheelCircumference=8.513000;
	laserscanner=1;
	laserscanrange=3333;
	irscanner=1;
	irscanrange=3333;
	gunnercansee="31";
	driverCanSee=31;

	class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
	class HitHull {armor=0.59;material=50;name=hull;passThrough=1;};
	class HitTurret {armor=0.96;material=51;name=turet;passThrough=1;};
	class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
	class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
	class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

    class HatchCommander
	{
		selection = "poklop_commander";
		axis = "osa_poklop_commander";
		angle = 165;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="80 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-270;
		min=0;
		max=1;
	};
	
	class TurretBase 
    {
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\m1turret.ogg",0.08,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-5;
		maxElev=42;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
    };
	
	class Turret: TurretBase 
    {
		model="\d4t_files\models\us\vehicles\m1a1.p3d";
		fuelCapacity=675;
    };

	class EventHandlers
    {
		fired = "[_this select 0, _this select 1, _this select 4, [{M256Gun}]] exec {\SJC_Scripts\Events\Fire_Gun.sqs};";
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};