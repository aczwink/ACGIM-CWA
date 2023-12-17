/*
Sources:
	http://en.wikipedia.org/wiki/Bell_OH-58_Kiowa
In service: 1985-present
*/
class OH58 : Helicopter
{
	side = SIDE_WEST;
	scope = SCOPE_PUBLIC;
	displayName="OH-58D Kiowa Warrior";
	picture="\d4t_files\pics\ui\oh58_pic.paa";
	icon="\d4t_files\pics\vehicles\oh58kw_icon.paa";
	crew = "USA_HelicopterPilot";
	nameSound="chopper";
	accuracy = ACCURACY_OH58D;
	gunnerUsesPilotView=1;
	maxSpeed = 241;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\oh58rtr1.wav",3.162278,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\air\oh58rtr1.wav",3.162278,1};
	armor = ARMOR_OH58D;
	cost = COST_OH58D;
	model="\d4t_files\models\us\vehicles\oh58d.p3d";
	weapons[]={"Hydra70", "LaserDesignatorOH"};
	magazines[]={"Hydra70", "LaserDesignatorOH"};
	hasGunner=1;
	transportSoldier=1;
	cargoAction[]={"ManActfz_oh58gunner"};
	camouflage = CAMOUFLAGE_USA_OH58D;
	threat[] = {THREAT_OH58D};
	hiddenselections[]={"hf1","hf2","hf3","hf4","hfrack1","hfrack2","lstingers","rstingers","rrocketpod","lrocketpod","rocket1","rocket2","rocket3","rocket4","rocket5","rocket6","rocket7","rocket8","rocket9","rocket10","rocket11","rocket12","rocket13","rocket14","m296","door","pylon","door_win","sys_cp","sys_en","sys_rt","sys_tl","sys_lw","sys_rw","sys_ol","sys_hy","bas_markerx","bas_markery","mapev","mapma","mapko","mapdi","mapno","rwr12","rwr1","rwr2","rwr3","rwr4","rwr5","rwr6","rwr7","rwr8","rwr9","rwr10","rwr11","skid","skid_n","arty_amount","so_1","so_2","so_3","so_4","so_5","unit","message","kompas2","vert_speed2","hudhf1","hudhf2","hudhf3","hudhf4","sting1","sting2","sting3","sting4","loal","lhudrkt","rhudrkt","hudgun","vsd_spd1","vsd_spd2","vsd_spd3","nm_alth","horizont"};
	driverAction = "ManActfz_oh58plt";
	gunnerAction = "ManActfz_oh58gunner";
	enableSweep=1;
	gunnerIsCommander=0;
	gunnerOpticsModel="\d4t_files\optics\optic_ka52.p3d";
	irScanToEyeFactor=4;
	irscanrangemin=100;
	irscanrangemax=5000;
	laserScanner=1;
	fuelCapacity=70;
	type=2;
	
	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={,db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		minElev=-30; maxElev=+30;
		minTurn=-175; maxTurn=+175;
		body = "OtocVez";
		gun = "OtocHlaven";
	};
		
	class ViewPilot
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	
	class ViewGunner
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	
	class ViewOptics
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.3;
		minFov=0.01;
		maxFov=1.0;
	};
	
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -8;
		min = 0;
		max = 12;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = 8;
		min = -20;
		max = 25;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = 46;
		min = -30;
		max = 30;
	};
	
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = 11;
		min = 0;
		max = 61;
	};

	class Animations
	{
		class firebottles
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="firebottles";
			axis = "osa_firebottles";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class p_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="p_mfd";
			axis = "osa_pmfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class indi_fuel
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="indi_fuel";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class oil_temp
		{
			type = "rotation";
			animperiod = 0.7;
			selection ="oil_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class oil_psi
		{
			type = "rotation";
			animperiod = 0.4;
			selection ="oil_psi";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class hyd_temp
		{
			type = "rotation";
			animperiod = 0.7;
			selection ="hyd_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class hyd_psi
		{
			type = "rotation";
			animperiod = 0.4;
			selection ="hyd_psi";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class trans_temp
		{
			type = "rotation";
			animperiod = 0.8;
			selection ="trans_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};
		
		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=0.109;
		};

		class map_Y
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markery";
			axis="bas_mapyaxis";
			angle0=0;
			angle1=-0.109;
		};
	};

	class Eventhandlers
	{
		init="[_this select 0] exec {\acgim_scripts\Vehicles\OH58\initialize58D.sqs}, [_this select 0] exec {\acgim_scripts\Vehicles\OH58\so.sqs};";
		engine="[_this select 0] exec {\acgim_scripts\Vehicles\OH58\oh58_map.sqs}, [_this select 0] exec {\acgim_scripts\Vehicles\OH58\oh58_engani.sqs}, [_this select 0] exec {\acgim_scripts\Vehicles\OH58\oh58_rtrwash.sqs}";
		fired="[_this select 0,_this select 1] exec {\acgim_scripts\Vehicles\OH58\wpnfire_oh.sqs}, [_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\BarrageArea.sqs}, [_this] exec {\d4t_files\FX\scripts\vehicles\ah64\prox.sqs};";
		IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec ""\acgim_scripts\Vehicles\OH58\CMS.sqs""};";
		Killed="[_this select 0] exec {\acgim_scripts\Vehicles\OH58\oh58_crash.sqs};";
		GetIn="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\apr39.sqs}";
	};
};

class OH58DWreck : OH58
{
	model = "\d4t_files\models\us\misc\oh58d_wreck.p3d";
	vehicleClass = "Objects (Wrecks)";
	displayName = "OH-58D Wreck";
	picture = "\d4t_files\pics\ui\oh58_pic.paa";
	icon = "\d4t_files\pics\vehicles\oh58kw_icon.paa";
	armor = 9000000;
	scope = SCOPE_PUBLIC;
	transportSoldier = 2;
	hasDriver = 0;
	maxspeed = 0;
	side = SIDE_NEUTRAL;
	soundEngine[] = {"",0,0};
	hiddenselections[] = {"skid"};
	weapons[] = {};
	magazines[] = {};
	fuelCapacity = 50;
	nameSound = "chopper";
	driverAction = ManActUH60Pilot;
	cargoAction[] = {"ManActfz_oh58plt","ManActfz_oh58gunner"};
};