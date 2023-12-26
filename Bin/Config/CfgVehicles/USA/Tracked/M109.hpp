class USA_M109A6_Paladin : USA_M1A2
{
	displayName="M109A6-G Paladin";
	vehicleClass="Vehicles (Support)";
	model="\dkmm_ARTY\dkmm_m109A6.p3d"; 
    picture="\dkmm_arty\m109a6_g.paa";
	hiddenselections[] ={"vlam","mk4","mk5","mk6","mk7"};
	side=1;
	type=Varmor;
	camouflage=2.2;
    threat[]={0.8,0.8,0.1}; 
    nameSound="weapon";
	maxSpeed=60;
	soundGear[] = {"\dkmm_arty\s\shift.wss",db-25,1};
	soundEnviron[]={"m1treads.ogg",1,1}; 
	soundEngine[]={"\dkmm_arty\s\diesel.wss",0.5,1.2}; 
    armor=150; 
	cost=750000;
	extCameraPosition[] = {0,2.5,-12};
	gunnerOpticsModel="optika_tankw_auxiliary";
	CommanderOpticsModel="optika_tankw_auxiliary";
	DriverOpticsModel="optika_empty";
	hasGunner=1;
	gunnercansee=31;
	formationX=30;
	formationZ=40;
	irScanRangeMin = 35;
	irScanRangeMax = 10000;
	irTarget = 1;
	irScanGround=1;
	irScanToEyeFactor=5;
	laserScanner = 1;
	getInRadius = 3.5;
	getInAction = ManActGetInTank;
	getOutAction = ManActGetOutTank;
	nightVision=1;
	weapons[]={"M126Gun155"};
	magazines[]={"Gun155HE"};
	turnCoef=5.000000;
	armorHull=1;
	armorTurret=0.9;
	armorGun=0.8; 
	armorEngine=0.8;
	armorLights=0.2;
	armorTracks=0.6;
	driverAction="ManActBMPDriverOut";
	gunnerAction="ManActBMPGunnerOut";
	commanderAction="ManActBMPCommander";
	driverInAction="ManActBMPDriver";
	gunnerInAction="ManActBMPGunner";
	commanderInAction="ManActBMPCommanderOut";
	commanderCanSee = 31;
	drivercansee = CANSEE_DEFAULT_DRIVER + CANSEE_RADAR;
	castdrivershadow=1;
	castGunnerShadow = 1;
	castCommanderShadow = 1;
	forcehideDriver=False;
	forceHideGunner=False;
	forcehideCommander=False;

	class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
	class HitHull {armor=1;material=50;name=hull;passThrough=1;};
	class HitTurret {armor=0.8;material=51;name=turet;passThrough=1;};
	class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
	class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
	class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

	class HatchDriver
	{
		selection="poklop_driver";
	    axis="osa_poklop_driver";
	    angle=155;
	};
	class HatchCommander
	{
	    selection="poklop_commander";
	    axis="osa_poklop_commander";
	    angle=110;
	};
	class HatchGunner
	{
	      selection="poklop_gunner";
	      axis="osa_poklop_gunner";
	      angle=100;
	};
	class Turret
	{ 
		gunAxis="OsaHlavne"; 
		turretAxis="OsaVeze"; 
		soundServo[]={"\dkmm_m109a6\servo.wss",0.18,1}; 
		gunBeg="usti hlavne"; 
		gunEnd="konec hlavne"; 
		minElev=-4; 
		maxElev=68; 
		minTurn=-360; 
		maxTurn=360; 	
		body="OtocVez"; 
		gun="OtocHlaven"; 
	}; 
	class ComTurret
	{
		turretAxis = "comturAx";
		gunAxis = "comgunAx";
		soundServo[]={"Vehicles\gun_elevate",db-70,1.2};
		gunBeg = "comgunB";
		gunEnd = "comgunE";
		minElev=-4; maxElev=+20;
		minTurn=-360; maxTurn=+360;
		body = "cmdrturret";
		gun = "cmdrgun";
	};	
	class Animations
	{
		class gun_recoil
		{
			type=rotation;
			animperiod=.1;
			selection=rec;
			axis=osa_rec;
			angle0= 0;	
			angle1= .004; 	
			};

		class suspension : gun_Recoil
		{
			animperiod=.5;
			selection=sus_F;
			axis=osa_sus;
			angle0= -.08;
			angle1= .08; 	
		};

		class backdoor
		{
			type=rotation;
			animperiod=.5;
			selection=backdoor;
			axis=osa_bd;
			angle0= 0;
			angle1= 1.61; 	
		};

		class sidedoor: backdoor
		{
			selection=sidedoor;
			axis=osa_sd;
			angle0= 0;
			angle1= 3.1415; 	
		};

		class shovL : suspension
		{
			selection=shovL;
			axis=osa_shov;
			angle0= 0;
			angle1= 2.8; 
			animperiod=.7;	
		};

		class clamp : suspension
		{
			selection=clamp;
			axis=osa_clamp;
			angle0= 0;
			angle1= 1.62; 
			animperiod=1.2;	
		};
		
		class shovR : shovL
		{
			selection=shovR;
			axis=osa_shov;
		};
		
		class BoxL : shovL
		{
			selection=boxL;
			axis=osa_boxL;
			angle0= 0;
			angle1= -3.1415; 
			animperiod=1;	
		};
		
		class BoxR : BoxL
		{
			selection=boxR;
			axis=osa_boxR;
		};
	};
	
	class UserActions
	{
	    class prepfire
		{
			displayName="Take firing position";
			position="osahlavne";
			radius=5;
			condition="player == leader this && this animationphase {backdoor} == 0";
			statement="[this,1] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
		};
	
		class prepdrive
		{
			displayName="Driving mode";
			position="osahlavne";
			radius=5;
			condition="player == leader this && this animationphase {backdoor} == 1";
			statement="[this,0] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
		};
	};
	
	class EventHandlers 
	{
		init="[_this select 0, 71] exec {\SJC_Scripts\vehicleTODO.sqs}; (_this select 0) exec {\dkmm_arty\scripts\DKMM_m109_Init.sqs}";
		engine="if (_this select 1) Then {[_this select 0, {Suspension},{Ant}] exec {\DKMM_ARTY\scripts\DKMM_Tank_AccelAdv.sqs}}"; 
		fired="if ((_this select 1) != {d4t_m1a1_m2}) Then {_this exec {\dkmm_arty\scripts\DKMM_M109_Gun155.sqs}}";
		killed="(_this select 0) exec {\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};