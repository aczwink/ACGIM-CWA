class AH64 : Helicopter
{
	side=1;				
	scope=2;
	displayName="AH-64D Apache Longbow";
	model="\d4t_files\models\us\vehicles\ah64d.p3d";
	picture="\d4t_files\pics\ui\ah64pic.paa";
	icon ="\d4t_files\pics\vehicles\ah64icon.paa";
	maxSpeed=400;
	weapons[]={"M230ChainGun", "AGM114L_8", "Hydra70Pairs_38", "AIM9_4", "LaserDesignatorOH"};
	magazines[]={"M230ChainGun", "AGM114L_8", "Hydra70Pairs_38", "AIM9_4", "LaserDesignatorOH"};
	nameSound="chopper";
	soundEngine[]={"\d4t_files\sounds\vehicles\air\ah64_rotor.wav",9,1};
	insideSoundCoef=0.002;
	vehicleClass="Vehicles (Air)";
	hasGunner=1;
	armor=150;
	audible=2;
	camouflage=1.2;
	hiddenselections[]={"hf1","hf2","hf3","hf4","hf5","hf6","hf7","hf8","hf9","hf10","hf11","hf12","hf13","hf14","hf15","hf16","hudhf1","hudhf2","hudhf3","hudhf4","hudhf5","hudhf6","hudhf7","hudhf8","sting1","sting2","sting3","sting4","hudrckt1","hudrckt2","hfrack1","hfrack2","rocketpod1","rocketpod2","hudhf9","hudhf10","hudhf11","hudhf12","hudhf13","hudhf14","hudhf15","hudhf16","hudrckt3","hudrckt4","hfrack3","hfrack4","stingers","cradar","mapmfd","mfdrdr","mfdtds","mapev","mapma","mapko","mapdi","mapno","mfdarmL","mfdmapL","mfdrdrL","mfdtdsL","horizont","ckfail","ckmarg","lefail","lemarg","refail","remarg","rtfail","rtmarg","tlfail","tlmarg","lwfail","lwmarg","rwfail","rwmarg","cafail","camarg","olfail","olmarg","hyfail","hymarg","rpm","mfdsysLG","units","firedgun","nofrdgun","num","grnnvlgt","maploc","fuel","auxtank"};
	transportSoldier=0;
	accuracy=5;
	driverAction=ManActfz_ah64pilot;
	gunnerAction=ManActfz_ah64gunner;
	enableSweep=1;
	gunnerIsCommander=1;
	gunnerUsesPilotView=0;
	crew = "SoldierWPilotHG";
	animated=1;
	irScanToEyeFactor = 4;
	irScanRangeMax=8000;
	irScanRangeMin=100;
	laserScanner=1;
	fuelCapacity=110;
	nightVision=1;
	mainRotorSpeed = 1;
	threat[]={0.8,1,0.9};
	armorStructural=2.5;
	armorHull=0.75;
	armorEngine=0.9;
	armorAvionics=1.6;
	armorVRotor=0.75;
	armorHRotor=1.0;
	armorMissiles=1.8;
	armorGlass=1.0;
	gunnerOpticsModel="\d4t_files\optics\optic_ah64_gunner.p3d";
	driverCanSee = CANSEE_RADAR + CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR;
	gunnerCanSee = CANSEE_ALL;

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={,db-40,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-60;
		maxElev=+11;
		minTurn=-86;
		maxTurn=+86;
		body="OtocVez";
		gun="OtocHlaven";
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
	
	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.7;
		maxFov=0.7;
	};

		
	class ViewOptics: ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.03;
		maxFov=0.7;
	};

	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=360;
		min=-190;
		max=190;
	};
	
	class Animations
	{
		class DamageWarn
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="damage";
			axis = "osa_damage";
			angle0 = 0;
			angle1= 3.141581;
		};

		class IRJam
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="irjam";
			axis = "osa_irjam";
			angle0 = 0;
			angle1= 3.141581;
		};

		class radarstatus
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="radardash";
			axis = "osa_radardash";
			angle0 = 0;
			angle1= 3.141581;
		};

		class systems
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="systems";
			axis = "osa_systems";
			angle0 = 0;
			angle1= 3.141581;
		};

		class mfdradar1
		{
			type = "rotation";
			animperiod = 5;
			selection ="cradar";
			axis = "osa_cradar";
			angle0 = 0;
			angle1= -3.5;
		};
		
		class pilotdoor1
		{
			type = "rotation";
			animperiod = 2;
			selection ="pilot_door";
			axis = "osa pilot_door";
			angle0 = 0;
			angle1= 1.7;
		};
		
		class gundoor1
		{
			type = "rotation";
			animperiod = 2;
			selection ="gun_door";
			axis = "osa gun_door";
			angle0 = 0;
			angle1= -1.7;
		};

		class rg_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="rg_mfd";
			axis = "osa_rg_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};
			
		class lg_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="lg_mfd";
			axis = "osa_lg_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};
		
		class rp_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="rp_mfd";
			axis = "osa_rp_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class lp_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="lp_mfd";
			axis = "osa_lp_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class hstab
		{
			type = "rotation";
			animperiod = 5;
			selection ="hstab";
			axis = "osa_hstab";
			angle0 = 0;
			angle1= 0.5;          
		};

		class firebottles
		{
			type = "rotation";
			animperiod = 1;
			selection ="bottles";
			axis = "osa_bottles";
			angle0 = 0;
			angle1= 0.723597;          
		};

		class firebottles2
		{
			type = "rotation";
			animperiod = 1;
			selection ="bottles2";
			axis = "osa_bottles2";
			angle0 = 0;
			angle1= 0.723597;          
		};

		class leftnavlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="lnlight";
			axis = "osa_lnlight";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightnavlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="rnlight";
			axis = "osa_rnlight";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class leftlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="llght";
			axis = "osa_llght";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="rlght";
			axis = "osa_rlght";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="rgear";
			axis = "osa_rgear";
			angle0 = 0;
			angle1= -0.296705;          
		};

		class leftgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="lgear";
			axis = "osa_lgear";
			angle0 = 0;
			angle1= -0.296705;          
		};

		class tailwheel
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="tailwheel";
			axis = "osa_tailwheel";
			angle0 = 0;
			angle1= -0.261798;          
		};

		class navlightstatus
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="nvlgtsts";
			axis = "osa_nvlgtsts";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class arming1
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="arming";
			axis = "osa_arming";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=-0.109;
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

		class fcssensors
		{
			type = "rotation";
			animperiod = 5;
			selection ="fcs_snsr";
			axis = "osa_fcs_snsr";
			angle0 = 0;
			angle1= 1.570790;          
		};

		class pilotwiper
		{
			type = "rotation";
			animperiod = 1;
			selection ="pltwiper";
			axis = "osa_pltwpr";
			angle0 = 0;
			angle1= -0.8;          
		};

		class gunnerwiper
		{
			type = "rotation";
			animperiod = 1;
			selection ="gunwiper";
			axis = "osa_gunwpr";
			angle0 = 0;
			angle1= 0.8;          
		};
		
		class indifuel
		{
			type = "rotation";
			animperiod = 5;
			selection ="fuel";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class tailrtrfail
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="tailrtrfail";
			axis = "osa_tailrtrfail";
			angle0 = 0;
			angle1= 3.141581;
		};

		class crashswitch
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="crashswitch";
			axis = "osa_crashswitch";
			angle0 = 0;
			angle1= 3.141581;
		};

		class altconfig
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="altconfig";
			axis = "osa_altconfig";
			angle0 = 0;
			angle1= 3.141581;
		};
	};

	class UserActions
	{
		class switchpltmfdR
		{
			displayName="Switch Right MFD";
			position="pltaction";
			radius=2;
			condition="driver vehicle this == player";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\switchmfdpr.sqs""";
		};
		/*class artyrequest
		{
			displayName="Request Artillery";
			position="pltaction";
			radius=2;
			condition="driver vehicle this == player && d4t_map_artillery == 1";
			statement="[this] exec ""\d4t_misc\apache\scripting\artillery_click.sqs""";
		};*/
		class frbtls
		{
			displayName="Fire Bottles";
			position="dooraction";
			radius=3;
			condition="this animationPhase ""firebottles2"" == 0 and driver vehicle this == player || this animationPhase ""firebottles2"" == 0 and gunner vehicle this == player";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\bottles.sqs""";
		};
		
		class navlighton
		{
			displayName="Nav Lights On";
			position="pltaction";
			radius=3;
			condition="(daytime <=6 ||daytime >=18) && driver vehicle this == player && this animationPhase ""navlightstatus"" == 0";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\navlgton.sqs""";
		};

		class navlightoff
		{
			displayName="Nav Lights Off";
			position="pltaction";
			radius=3;
			condition="driver vehicle this == player and this animationPhase ""navlightstatus"" == 1";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\navlgtoff.sqs""";
		};

		//d4t note: i don't know if this will be included... i think not
		/*class guntopilot
		{
			displayName="Take Controls";
			position="gunaction";
			radius=2;
			condition="(!(alive driver this) or (isnull driver this)) && (gunner vehicle this == player) && (local this)";
			statement="player action [{getout},this]; player moveindriver this";
		};*/
	};

	class Eventhandlers
	{
		init="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\initialize.sqs}";
		engine="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\engineon.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\ah64_map.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\ah64_rtrwash.sqs}";
		hit="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\sysfail.sqs};";
		fired="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\wpnfire.sqs}, [_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\BarrageArea.sqs}, [_this] exec {\d4t_files\FX\scripts\vehicles\ah64\prox.sqs}";
		killed="[_this select 0] exec ""\d4t_files\FX\scripts\vehicles\ah64\crash.sqs"";";
		IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec ""\d4t_files\FX\scripts\vehicles\ah64\CMS.sqs""}";
		GetIn="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\apr39.sqs}";
	};
};

class d4t_AH64_Wreck : AH64
{
	model="\d4t_files\models\us\misc\ah64_wreck.p3d";
	vehicleclass="Objects (D4T)";
	armor=9000000;
	scope=2;
	displayName="AH-64D Wreck";
	picture="\d4t_files\pics\ui\ah64pic.paa";
	icon="\d4t_files\pics\vehicles\ah64icon.paa";
	transportSoldier=4;
	hasDriver=0;
	hasGunner=0;
	maxspeed=0;
	fuelCapacity=0;
	side=4;
	soundEngine[]={"",0,0};
	hiddenselections[]={};
	weapons[]={};
	magazines[]={};
	nameSound="chopper";
	driverAction = ManActUH60Pilot;
	cargoAction[]={ManActfz_ah64pilot,ManActfz_ah64gunner};

	class Eventhandlers{};
};