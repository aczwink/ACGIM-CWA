class USA_M1A2 : Tank
{
	scope=2;
	crew=SoldierWCrew;
	vehicleClass="Vehicles (Armored)";
	picture="\d4t_files\pics\vehicles\iabrams.paa";
	icon="\d4t_files\pics\vehicles\m1.paa";
	model="\d4t_files\models\us\vehicles\m1a2.p3d";
	gunnerOpticsModel="\d4t_files\optics\optic_m1a2_gunner.p3d";
	commanderOpticsModel="\d4t_files\optics\optic_m1a2_commander.p3d";
	side=1;
	displayName="M1A2 SEP";
	nameSound="Abrams";
	accuracy=0.4;
	armor=1150;
	armorStructural=2.0;
	armorHull=0.99;
	armorTurret=0.99;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	cost=4000000;
	maxSpeed=67;
	gunnerOpticsColor[]={0,0,0,1};
	commanderOpticsColor[]={0,0,0,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\M1_Treads.wss",1,0.8};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\M1_Turbine.wss",1,1};
	soundCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash_heavy.wss",1,1};
	soundLandCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash.wss",1,1};
	soundGear[]={"\d4t_files\sounds\vehicles\surface\Gear.wss",0.07,1};
	soundDammage[]={"\d4t_files\sounds\vehicles\surface\Alarm.wss",0.1,1};
	forceHideGunner=0;
	forceHideCommander=0;
	transportSoldier=0;
	hideWeaponsCargo=1;
	weapons[]={"M256Gun", "M2HBBrowning", "M240Coaxial"};
	magazines[]={"M829_120APFSDS", "M830_120HEAT", d4t_120mm_mpat_20, d4t_120mm_staff, "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M240Coaxial"};
	laserscanner=1;
	laserscanrange=6000;
	irscanner=1;
	irScanRangeMin=500;
	irScanRangeMax=5000;
	irScanToEyeFactor=1;
	irScanGround=1;
	gunnerAction="ManActm1a1commanderout";
	gunnerInAction="ManActM1A1Gunner";
	driverAction="ManActM1A1DriverOut";
	driverInAction="ManActM1A1Driver";
	commanderAction="ManActm113gunner";
	commanderInAction="ManActM1A1Commander";
	hiddenSelections[]={"BS1","BS2","BS3","_mark","_chevron","_for"};
	type=1;
	threat[]={1,1,0.3};

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
		angle=95;
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
	
	class HitEngine
	{
		armor=0.8;
		material=60;
		name="engine";
		passThrough=1;
	};

	class HitHull
	{
		armor=0.99;
		material=50;
		name="hull";
		passThrough=1;
	};

	class HitTurret
	{
		armor=0.99;
		material=51;
		name="turet";
		passThrough=1;
	};

	class HitGun
	{
		armor=0.6;
		material=52;
		name="gun";
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

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M1_Turret.wss",0.3,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-6;
		maxElev=18;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret:TurretBase
	{
		model="\d4t_files\models\us\vehicles\m1a2.p3d";
		fuelCapacity=675;
	};

	class ComTurret
	{
		turretAxis="OsaVelitele";
		gunAxis="OsaHlavneVelitele";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M1_Turret.wss",0.05,1.4};
		minElev=-6;
		maxElev=18;
		minTurn=-360;
		maxTurn=360;
		body="OtocVelitele";
		gun="OtocHlavenVelitele";
	};

	class ViewCommanderBase
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

	class ViewCommander:ViewCommanderBase{};

	class Animations
	{
		class recoil
		{
			animperiod=0.1;
			selection="recoil";
			axis="osa_rec";
			angle0=0;
			angle1=0.006;
			type="rotation";
		};

		class suspension
		{
			animperiod=0.5;
			selection="sus";
			axis="sus_osa";
			angle0="-0.09";
			angle1=0.09;
			type="rotation";
		};

		class suspension2
		{
			animperiod=0.5;
			selection="sus2";
			axis="sus2_osa";
			angle0="-0.09";
			angle1=0.09;
			type="rotation";
		};
	};

	/*class UserActions
	{
		class LaunchSmoke
		{
			displayName="Launch Smoke";
			position="kulas";
			radius=10;
			condition="player == commander this && {_x=={INQ_smokeDischarger}}count magazines this>0";
			statement="[this,0] exec {\INQ_M1\scripts\Smoke\INQ_Smoke.sqs}";
		};
	};*/

	class EventHandlers
	{
		init="_this exec ""\d4t_files\FX\scripts\vehicles\m1a2\INQ_M1_Init.sqs""";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
		fired="_this call INQ_Fired";
		engine="if (_this select 1) then {(_this select 0) exec {\d4t_files\FX\scripts\vehicles\m1a2\INQ_M1_Tank_Accel.sqs}}";
	};
};