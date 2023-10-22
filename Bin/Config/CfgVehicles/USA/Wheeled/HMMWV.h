/*
Sources:
	http://en.wikipedia.org/wiki/HMMWV
In service: 1984-present
*/
class USA_HMMWV : Car
{
	scope=2;
	crew = "USA_Soldier";
	picture="\d4t_files\pics\vehicles\hmmwv.paa";
	maxspeed = 89;
	side=1;
	displayName="HMMWV";
	nameSound="jeep";
	accuracy = ACCURACY_HMMWV;
	armor = ARMOR_HMMWV;
	fuelcapacity=250;
	transportSoldier=3;
	transportAmmo=0;
	model="\d4t_files\models\us\vehicles\hmmwv.p3d";
	hideUnitInfo=0;
	terrainCoef=1.4;
	turnCoef=4.0;
	unloadInCombat=1;
	hiddenSelections[]={"mrk1","mrk2","for"};
	unitInfoType = UNITINFO_CAR;
	driverAction="ManActJeepDriver";
	cargoAction[]={"ManActJeepCoDriver","ManActJeepCoDriverBack"};
	cargoIsCoDriver[]={1,0};
	insideSoundCoef=0.3;
	type = VEHICLE_ARMOR;
	threat[]={THREAT_HMMWV};
	cost = COST_HMMWV;
	armorGlass=0.5;
	armorWheels=0.4;
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\Hummer_Idle.wav","db-25",1.25};
	soundGetIn[]={"\d4t_files\sounds\vehicles\surface\getin.ogg",0.000716,1};
	soundGetOut[]={"\d4t_files\sounds\vehicles\surface\getout.ogg",0.000716,1};
	soundCrash[]={"\d4t_files\sounds\vehicles\surface\crash.wss","db-20",1};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","Officer"};
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1b.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2b.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1c.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2c.paa"};

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
		angle=-240;
		min=0;
		max=1;
	};

	class EventHandlers
	{
		Init = "_this exec {\acgim_scripts\Vehicles\HMMWV\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\acgim_scripts\Vehicles\HMMWV\CBT_init.sqs}}";
		killed = "_this exec {\acgim_scripts\Vehicles\HMMWV\CBT_HMMWV_Fire.sqs}";
	};
};

class JeepMG : USA_HMMWV
{
	displayName="HMMWV M2";
	picture="\d4t_files\pics\vehicles\hmmwv_m2.paa";
	model="\d4t_files\models\us\vehicles\hmmwv_m2.p3d";
	gunnerAction="ManActM113gunner";
	hiddenSelections[]={"mrk1","mrk2","for","bullet1","bullet2","bullet3"};
	gunnerOpticsModel="optika_empty";
	viewGunnerInExternal=1;
	unitInfoType = UNITINFO_SOLDIER;
	ejectDeadGunner=0;
	castGunnerShadow=1;
	driverIsCommander=1;
	outGunnerMayFire=1;
	hasGunner=1;
	irScanRangeMin=50;
	irScanRangeMax=2000;
	irScanToEyeFactor=5;
	irScanGround=1;
	threat[]={THREAT_HMMWVM2};
	weapons[]={"M2HBBrowning"};
	magazines[]={"M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning"};
	animated=1;

	class ViewGunner
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX="+30";
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewOpticsBase{};

	class ViewOptics : ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-30;
		maxAngleX=80;
		initAngleY=0;
		minAngleY=-180;
		maxAngleY=180;
		initFov=0.3;
		minFov=0.3;
		maxFov=0.3;
	};

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-5;
		maxElev=40;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Animations
	{
		class gun_recoil
		{
			type="rotation";
			animperiod=0.01;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1="-0.00073";
		};

		class ani_bullet1
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet1";
			axis="osa bullet1";
			angle0=0;
			angle1=2.2;
		};

		class ani_bullet2
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet2";
			axis="osa bullet2";
			angle0=0;
			angle1=2.2;
		};
		
		class ani_bullet3
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet3";
			axis="osa bullet3";
			angle0=0;
			angle1=2.2;
		};
	};

	class EventHandlers
	{
		Init = "[_this select 0, 189] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO: (also burner when killed)
		//init="_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_init.sqs}}";
		//fired="(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\hmmwv\mg.sqs"", _this select 1];[_this select 0] exec  ""\d4t_files\FX\scripts\vehicles\hmmwv\CBT_shot.sqs""; _this call loadFile {\d4t_files\FX\scripts\MGbullet.sqf}";
	};

	class MGunClouds : WeaponCloudsMGun{};
};

class USA_HMMWV_Mk19 : JeepMG
{
	displayName="HMMWV Mk 19";
	picture="\sjc_images\vehicles\hmmwv_mk19.paa";
	model="\sjc_models\west\hmmwv_mk19.p3d";
	hiddenSelections[]={"mrk1","mrk2","for","bullet1","bullet2","bullet3"};
	weapons[]={"Mk19"};
	magazines[]={"Mk19","Mk19","Mk19","Mk19"};
};

class USA_HMMWV_TOW : JeepMG
{
	gunnerOpticsModel="\sjc_optics\usa\hmmwv_tow_gunner.p3d";
	displayName="HMMWV TOW";
	picture="\sjc_images\vehicles\hmmwv_tow.paa";
	model="\sjc_models\west\hmmwv_tow.p3d";
	weapons[]={"M220_BGM71ETOW_7"};
	magazines[]={"M220_BGM71ETOW_7"};
	hiddenSelections[]={"mrk1","mrk2","for","tow1","tow2","tow3"};
	gunnerAction="ManActCBT_HMMWVTOWGunner";
	irScanGround=1;
	irScanRangeMin=50;
	irScanRangeMax=4000;
	irScanToEyeFactor=1;
	gunnerHasOptics=1;
	nightVision=1;
	transportSoldier=3;
	
	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		body="OtocVez";
		gun="OtocHlaven";
		minElev=-9;
		maxElev="+20";
		minTurn=-125;
		maxTurn="+125";
		soundServo[]={"",0.031623,1.0};
	};
	
	class ViewOpticsBase{};
	class ViewOptics : ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-40;
		maxAngleX=17;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=100;
		initFov=0.3;
		minFov=0.07;
		maxFov=0.35;
	};
	
	class ViewGunner
	{
		initAngleX=0;
		minAngleX=0;
		maxAngleX=0;
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};
	
	class MGunClouds
	{
		access = 3;
		cloudletDuration = 0.7;
		size = 1.2;
		sourceSize = 0.1;
		cloudletAnimPeriod = 0.6;
		cloudletSize = 2.0;
		cloudletAlpha = 1.0;
		cloudletGrowUp = 0.2;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.7;
		cloudletAccY = 0;
		cloudletMinYSpeed = -100;
		cloudletMaxYSpeed = 2;
		cloudletShape = "cl_basic";
		cloudletColor[] = {1, 1, 1, 0};
		interval = 0.02;
		timeToLive = 0;
		initT = 4500;
		deltaT = -3000;

		class Table
		{
			class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
			class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
			class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
			class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
			class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
			class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
			class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
			class T7 {maxT = 2000; color[] = {0.05, 0.03, 0.11, 0};}
			class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
			class T9 {maxT = 2500; color[] = {0.05, 0.03, 0.11, 0};}
			class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
			class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
			class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
			class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
			class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
			class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
			class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
			class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
			class T18 {maxT = 3000; color[] = {1, 0.91, 0.94, 0};}
			class T19 {maxT = 3100; color[] = {0, 0, 0, 0};}
			class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.82, 0};}
			class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
			class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
		};
	};
	
	class EventHandlers
	{
		Init = "[_this select 0, 190] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO: (also burner when killed)
		//init="_this exec {\CBT_HMMWV\fx\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\CBT_Misc\fx\CBT_init.sqs}}; [_this select 0] call (localize ""MCAR_createProxyAT""); _this select 0 exec ""\CBT_HMMWV\fx\MCAR_HMMWV_init.sqs""; _this exec ""\CBT_HMMWV\fx\CBT_TOW_Init.sqs"";";
		//fired="deleteVehicle (nearestObject [_this select 0, _this select 4]); [_this select 0] exec (format[""%1"",localize (format[""%1_PATH"",typeOf vehicle (_this select 0)])]); _this exec ""\CBT_HMMWV\fx\CBT_TOWammo.sqs"";";
	};
};

class USA_HMMWV_Ambulance : USA_HMMWV
{
	unloadInCombat = false;
	picture="\d4t_files\pics\vehicles\hmmwv_ambulance.paa";
	crew = "USA_Medic";
	icon="Ambulance_move";
	nameSound="ambulance";
	attendant=1;
	hiddenSelections[]={"mrk1","mrk2","for","recog"};
	displayName="HMMWV Ambulance";
	model="\d4t_files\models\us\vehicles\hmmwv_ambulance.p3d";
	hasGunner = false;
	transportSoldier=5;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	cargoAction[]={"ManActJeepCoDriver","ManActCargo"};
	cargoIsCoDriver[]={1,0,0,0,0};
	transportMaxMagazines=0;
	transportMaxWeapons=0;

	class EventHandlers
	{
		Init = "_this exec {\acgim_scripts\Vehicles\HMMWV\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\acgim_scripts\Vehicles\HMMWV\CBT_init.sqs}}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Car_Burner.sqs}";
	};
};