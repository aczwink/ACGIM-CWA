/*
Sources:
	http://en.wikipedia.org/wiki/McDonnell_Douglas_F-15_Eagle
In service: 1979-present
*/
class USA_F15C : Plane
{
	scope = SCOPE_PUBLIC;
	crew="USA_AircraftPilot";
	side=1;
	displayName="F-15C (USAF)";
	picture = "\sjc_images\vehicles\f15pic.paa";
	icon = "\sjc_images\vehicles\f15icon.paa";
	accuracy = ACCURACY_F15C;
	landingAoa=0.122;
	precision=200;
	brakeDistance=100;
	noseDownCoef=0.6;
	maxSpeed = 2660;
	aileronSensitivity=1.5;
	elevatorSensitivity=2.3;
	wheelSteeringSensitivity =2.6;
	formationX=15;
	formationZ=25;
	formationTime=5;
	irScanRangeMax=10000;
	irScanRangeMin=100;
	irTarget=1;
	irScanGround=0;
	laserScanner=0;
	nightVision=1;
	driverAction="ManActA10Pilot";
	weapons[]={"M61Vulcan_940", "AIM7_4", "AIM9_4"};
	magazines[]={"M61Vulcan_940", "AIM7_4", "AIM9_4"};
	soundEngine[]={"\sjc_sounds\vehicles\engine.ogg",db10,1};
	insideSoundCoef = 0.01;
	armor = ARMOR_F15C;
	cost = COST_F15C;
	model="\sjc_models\usa\f15c.p3d";
	fov=10;
	type = VEHICLE_AIR;
	threat[]= {THREAT_F15C};
	hiddenselections[]={"roundel", "vrtule", "num1", "num2", "num3", "vrtule 1", "_swA", "_swB", "_swC", "_swD", "_amrmA", "_amrmB", "_amrmC", "_amrmD", "_amrmE", "_amrmF", "foldwheelfront", "foldwheelrear", "spinwheelfront", "spinwheelrear"};
	animated =1;
	
	class GunFire
	{
		cloudletDuration = 0.5;
		cloudletAnimPeriod = 1.0;
		cloudletSize = 2.0;
		cloudletAlpha = 0.5;
		cloudletGrowUp = .1;
		cloudletFadeIn = .1;
		cloudletFadeOut = 2;
		cloudletAccY = 0;
		cloudletMinYSpeed = -1000;
		cloudletMaxYSpeed = 1000;
		cloudletShape = "cl_basic";
		cloudletColor[] = {1, 1, 1, 0};
		interval = 0.02;
		size = 2;
		sourceSize = 0.05;
		timeToLive = 1;
		initT = 0;
		deltaT = 0;
		
		class Table
		{
			class T0
			{
				maxT = 0;
				color[] = {1, 1, 1, 0};
			};
		};
	};
	class GunClouds : GunFire{};
	class MGunFire : GunFire{};
	class MGunClouds : GunFire{};
	
	class Animations
	{
		class FrontWheel
		{
			type ="rotation";
			animPeriod =2;
			selection ="front wheel";
			axis ="axis front wheel";
			angle0 =0;
			angle1 =1.92;
		};
		
		class FrontFlapDoor
		{
			type ="rotation";
			animPeriod =1;
			selection ="front wheel door";
			axis ="axis front wheel door";
			angle0 =0;
			angle1 =1.57;
		};
		
		class LeftWheel
		{
			type ="rotation";
			animPeriod =2;
			selection ="left wheel";
			axis ="axis left wheel";
			angle0 =0;
			angle1 =1.7;
		};
		
		class LeftWheelDoor
		{
			type ="rotation";
			animPeriod =1;
			selection ="left wheel door";
			axis ="axis left wheel door";
			angle0 =0;
			angle1 =1.57;
		};
		
		class LeftFlapDoor
		{
			type ="rotation";
			animPeriod =1;
			selection ="left flap door";
			axis ="axis left flap door";
			angle0 =0;
			angle1 =1.57;
		};
		
		class RightWheel
		{
			type ="rotation";
			animPeriod =2;
			selection ="right wheel";
			axis ="axis right wheel";
			angle0 =0;
			angle1 =-1.7;
		};
		
		class RightWheelDoor
		{
			type ="rotation";
			animPeriod =1;
			selection ="right wheel door";
			axis ="axis right wheel door";
			angle0 =0;
			angle1 =-1.57;
		};

		class RightFlapDoor
		{
			type ="rotation";
			animPeriod =1;
			selection ="right flap door";
			axis ="axis right flap door";
			angle0 =0;
			angle1 =-1.57;
		};

		class AftTrigger
		{
			type ="rotation";
			animPeriod =.1;
			selection ="afttrigger";
			axis ="axis afttrigger";
			angle0 =0;
			angle1 =-1.57;
		};
		
		class SWF
		{
			type ="rotation"; animPeriod =.0001;
			selection ="spinwheelfront";axis="axis_spinwheelfront";
			angle0=0;angle1=6.28;
		};
		
		class SWR
		{
			type ="rotation"; animPeriod =.0001;
			selection ="spinwheelrear";axis ="axis_spinwheelrear";
			angle0=0;angle1=6.28;
		};
		
		class Canopy
		{
			type ="rotation";
			animPeriod =3;
			selection ="canopy";
			axis ="axis canopy";
			angle0 =0;
			angle1 =-.37;
		};
	};
	
	class UserActions
	{
		//TODO
		/*class RKTABOn
			{
				displayName ="Afterburner On";
				position = "doors";
				radius =10;
				condition = "(this animationphase ""afttrigger"" < 0.5) and (isengineon this)";
				statement = "[this] exec ""\rktf15c\scr\burner.sqs""; ";
			};
			class RKTABOff
			{
				displayName ="Afterburner Off";
				position = "doors";
				radius =10;
				condition = "this animationphase ""afttrigger"" > 0.5";
				statement = "this animate[""afttrigger"", 0]";
			};*/
	};
	
	class EventHandlers
	{
		fired = "(_this) exec{\SJC_Scripts\USA\F15\firemissiles.sqs};";
		gear = "if (_this select 1) then {(_this select 0) exec{\SJC_Scripts\USA\F15\geardown.sqs}} else {(_this select 0) exec{\SJC_Scripts\USA\F15\gearup.sqs}}";
		init = "(_this select 0) setobjecttexture[0, {\sjc_textures\f15\r_usblack.paa}]; (_this select 0) exec{\SJC_Scripts\USA\F15\common_init.sqs}; (_this select 0) exec{\SJC_Scripts\USA\F15\drawmissiles.sqs}";
	};
};