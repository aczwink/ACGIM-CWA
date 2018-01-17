/*
Sources:
	http://en.wikipedia.org/wiki/F-4_Phantom_II
	https://en.wikipedia.org/wiki/List_of_McDonnell_Douglas_F-4_Phantom_II_variants
In service: 1965-1996
*/
class USA_F4E : Plane
{
	scope = SCOPE_PUBLIC;
	crew="USA_AircraftPilot";
	side=1;
	displayName="F-4E Phantom II (USAF)";
	accuracy = ACCURACY_F4E;
	picture = "\sjc_images\vehicles\f4pic.paa";
	icon = "\sjc_images\vehicles\f4icon.paa";
	irTarget=1;
	irScanRange=4000;
	irScanGround=1;
	driverAction = ManActA10Pilot;
	hasgunner =0;
	transportSoldier=1;
	maxSpeed = 2370;
	brakeDistance=100;
	landingspeed =300;
	landingaoa = .17;
	formationX=45;
	formationZ=20;
	aileronSensitivity = 0.4;
	elevatorSensitivity = 0.85;
	noseDownCoef = 0.3;
	fov=0.5;
	precision=10;
	soundEngine[]={"\sjc_sounds\vehicles\engine.wav",db+25,1.1};
	armor = ARMOR_F4E;
	cost = COST_F4E;
	type = VEHICLE_AIR;
	threat[] = {THREAT_F4E};
	model="\sjc_models\USA\f4e.p3d";
	weapons[]={"M61Vulcan_640", "AIM7_4", "Mk82", "BLU1", "AGM88", "Hydra70_32"}; //TODO BLU Napalm
	magazines[]={"M61Vulcan_640", "AIM7_4", "Mk82", "BLU1", "AGM88", "Hydra70_32"};
	hiddenselections[] = { "roundel","bombA", "bombB", "bombC", "harmA", "harmB", "sp1", "sp2", "sp3", "sp4", "num1", "num2", "num3", "blu1", "blu2", "burn" };
	
	class IndicatorRPM
	{
		selection = "erpm1"; axis = "erpm1 axis";
		angle = 280; min = 0; max = 1;
	};
	
	class IndicatorVertSpeed
	{
		selection = "dc"; axis = "dc axis";
		angle = 300; min = -50; max = 50;
	};
	
	class IndicatorSpeed
	{
		selection = "speed"; axis = "speed axis";
		angle = 310; min = 10; max = 150;
	};
	
	class IndicatorAltRadar
	{
		selection = "ralt"; axis = "ralt axis";
		angle = 360; min = 0; max = 304;
	};
	
	animated =1;
	class Animations
	{
		class LeftGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="left wheel";
			axis ="axis left wheel";
			angle0 =0;
			angle1 =1.54;
		};
		
		class LeftGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="mdl";
			axis ="axis mdl";
			angle0 =0;
			angle1 =-1.57;
		};
		
		class RightGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="right wheel";
			axis ="axis right wheel";
			angle0 =0;
			angle1 =-1.54;
		};
		
		class RightGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="mdr";
			axis ="axis mdr";
			angle0 =0;
			angle1 =1.57;
		};
		
		class NoseGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="nose wheel";
			axis ="axis nose wheel";
			angle0 =0;
			angle1 =-1.7;
		};
		
		class NoseGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="nose door";
			axis ="axis nose door";
			angle0 =0;
			angle1 =-1.57;
		};
		
		class LeftWingTip
		{
			type ="rotation";
			animPeriod =4;
			selection ="left wing tip";
			axis ="axis left wing tip";
			angle0 =0;
			angle1 =2.1;
		};
		
		class RightWingTip
		{
			type ="rotation";
			animPeriod =4;
			selection ="right wing tip";
			axis ="axis right wing tip";
			angle0 =0;
			angle1 =-2.1;
		};
	};
	
	class UserActions
	{
		class RKTWingsUp
		{
			displayName ="Fold Wings Up";
			position = "doors";
			radius =10;
			condition = "player in this and this animationphase ""leftwingtip"" < 0.01 and not isengineon this";
			statement = "this animate [""leftwingtip"",1]; this animate [""rightwingtip"",1]";
		};
		
		class RKTWingsDown
		{
			displayName ="Fold Wings Down";
			position = "doors";
			radius =10;
			condition = "player in this and this animationphase ""leftwingtip"" > 0.99 and not isengineon this";
			statement = "this animate [""leftwingtip"",0]; this animate [""rightwingtip"",0]";
		};
		
		//TODO		
		/*class RKTABurn
			{
				displayName ="Afterburner On";
				position = "doors";
				radius =15;
				condition = "player in this and speed this >50";
				statement = "this exec ""\rktf4\ab.sqs""; ";
			};*/
	};
	
	class EventHandlers
	{
		fired = "(_this) exec {\SJC_Scripts\USA\F4E\firemissiles.sqs};";
		gear = "if (_this Select 1) then {(_this select 0) exec {\SJC_Scripts\USA\F4E\geardown.sqs}} else {(_this select 0) exec {\SJC_Scripts\USA\F4E\gearup.sqs}}";
		init = "(_this select 0) exec {\SJC_Scripts\USA\F4E\checkgear.sqs}; (_this select 0) exec {\SJC_Scripts\USA\F4E\drawmissiles.sqs}; (_this select 0) exec {\SJC_Scripts\USA\F4E\number.sqs};";
	};
};