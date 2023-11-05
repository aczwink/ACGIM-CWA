/*
Sources:
	http://en.wikipedia.org/wiki/Mi-8MTV
*/
class Mi8MTV : Helicopter
{
	scope = SCOPE_PUBLIC;
	weapons[]={"PKMS", "UB32"};
	magazines[]={"PKMS", "PKMS", "PKMS", "PKMS", "PKMS", "PKMS", "S5K", "S5K", "S5M"};
	model="\sjc_files\models\russia\air\mi8mtv.p3d";
	displayName="Mi-8MTV Hip";
	picture="\sjc_files\pics\vehicles\Mi8_m.paa";
	crew = "Russia_HelicopterPilot";
	maxspeed = 250;
	armor = ARMOR_MI8MTV;
	side = SIDE_EAST;
	driverAction = "ManActOWPMi8pilot";
	driverOpticsModel = "\sjc_optics\russia\pkv.p3d";
	gunnerAction = "ManActOWPMi8GunnerFront";
	gunnerOpticsModel = "\sjc_optics\russia\optics_pkt_mounted.p3d";
	cargoAction[] = {"ManActOWPMi8copilot", "ManActCargo"};
	
	class TurretBase{};
	class Turret : TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-35;
		maxElev=7;
		minTurn=-15;
		maxTurn=15;
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class ViewGunner
	{
		initFov=0.5;
		minFov=0.4;
		maxFov=1.0;
		initAngleX=0;
		minAngleX=-35
		maxAngleX=35;
		initAngleY=0;
		minAngleY=-130;
		maxAngleY=130;
	};

	accuracy = ACCURACY_MI8MTV;
	insideSoundCoef = 0.004;
	gunnerUsesPilotView = false;
	DriverOpticsColor[] = {1,1,1,0,3};
	hideWeaponsDriver = false;
	hideWeaponsGunner = false;
	threat[]={THREAT_MI8MTV};
	hiddenSelections[] = {cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	soundEngine[]={"\sjc_sounds\vehicles\mi8rotor.ogg", db+8,1};
	mainRotorSpeed = 0.7; // rotor animation parameters
	backRotorSpeed = 3.0;
	transportSoldier=13;
	steerAheadSimul=0.1;
	steerAheadPlan=0.2;
	rotorBig = "\sjc_textures\mi8\shared.pac";
	rotorBigBlend = "\sjc_textures\mi8\bigrotor.paa";
	rotorSmall = "\sjc_textures\mi8\shared.pac";
	rotorSmallBlend = "\sjc_textures\mi8\smallrotor.paa";
	
	class ViewPilot
	{
		initFov=0.5;
		minFov=0.4;
		maxFov=1.0;
		initAngleX=0;
		minAngleX=-25;
		maxAngleX=+35;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=+100;
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
		initFov=0.2;
		minFov=0.2;
		maxFov=0.2;
	};
	
	class IndicatorAltBaro
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 1000;
	};
	
	class IndicatorAltBaro2
	{
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 1000;
	};
	
	class IndicatorAltRadar
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -320;
		min = 0;
		max = 320;
	};
	
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -340;
		min = 0;
		max = 130;
	};
	
	class IndicatorSpeed2
	{
		selection = "mph2";
		axis = "osa_mph2";
		angle = -340;
		min = 0;
		max = 130;
	};
	
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -330;
		min = 0;
		max = 11;
	};
	
	class IndicatorRPM2
	{
		selection = "rpm2";
		axis = "osa_rpm2";
		angle = -330;
		min = 0;
		max = 11;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -360;
		min = -30;
		max = 30;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -360;
		min = -30;
		max = 30;
	};
	
	class Reflectors
	{
		class Left
		{
			color[]={0.800000,0.800000,1.000000,1.000000};
			ambient[]={0.070000,0.070000,0.070000,1.000000};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.600000;
			brightness=1.000000;
		};
		
		class Right
		{
			color[]={0.800000,0.800000,1.000000,1.000000};
			ambient[]={0.070000,0.070000,0.070000,1.000000};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.600000;
			brightness=1.000000;
		};
	};
	
	class Animations
	{
		class Susp_R
		{
			type="rotation";
			animPeriod=0.1;
			selection="R_susp";
			axis="R_susp_osa";
			angle0=0;
			angle1=0.20;
		};
		
		class Susp_L
		{
			type="rotation";
			animPeriod=0.1;
			selection="L_susp";
			axis="L_susp_osa";
			angle0=0;
			angle1=-0.20;
		};
		
		class Susp_RD
		{
			type="rotation";
			animPeriod=0.1;
			selection="RD_susp";
			axis="RD_susp_osa";
			angle0=0;
			angle1=-0.08;
		};
		
		class Susp_LD
		{
			type="rotation";
			animPeriod=0.1;
			selection="LD_susp";
			axis="LD_susp_osa";
			angle0=0;
			angle1=0.08;
		};
		
		class OWP_Mi8_CDL
		{
			type="rotation";
			animPeriod=3;
			selection="cdl";
			axis="cdlosa";
			angle0=0;
			angle1= 1.0;
		};
		
		class OWP_Mi8_CDR
		{
			type="rotation";
			animPeriod=3;
			selection="cdr";
			axis="cdrosa";
			angle0=0;
			angle1= -1.0;
		};
		
		class OWP_Mi8_DOOR
		{
			type="rotation";
			animPeriod=1.5;
			selection="door";
			axis="door_osa";
			angle0=0;
			angle1= -0.05;
		};
		
		class OWP_Mi8_FLG
		{
			type="rotation";
			animPeriod=1.5;
			selection="flg";
			axis="flgosa";
			angle0=0;
			angle1= 0.075;
		};

		class OWP_Mi8_FRG
		{
			type="rotation";
			animPeriod=1.5;
			selection="frg";
			axis="frgosa";
			angle0=0;
			angle1=-0.075;
		};
		
		class OWP_Mi8_lenta
		{
			type="rotation";
			animPeriod=0.1;
			selection="kup";
			axis="velka osa";
			angle0=0;
			angle1=0.1;
		};
	};
	
	class CargoLight
	{
		color[] = {0, 1, 0, 0};
		ambient[] = {0.8, 0, 0.01, 1};
		brightness = 0.007;
	};

	class EventHandlers
	{
		engine = "if (_this select 1) then {_this select 0 exec ""\acgim_scripts\Vehicles\Mi8\owp_onengine.sqs""} else {_this select 0 exec ""\acgim_scripts\Vehicles\Mi8\owp_onengineoff.sqs""}";
		hit = "_this exec {\SJC_Scripts\Events\HelicopterHit.sqs};";
		init = "_this exec ""\acgim_scripts\Vehicles\Mi8\owp_initialization.sqs""";
		IncomingMissile = "_this exec ""\acgim_scripts\Vehicles\Mi8\owp_incoming.sqs""";
		fired = "_this exec ""\acgim_scripts\Vehicles\Mi8\owp_effects.sqs""";
	};
};