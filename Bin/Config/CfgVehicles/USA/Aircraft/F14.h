/*
Sources:
	http://en.wikipedia.org/wiki/Grumman_F-14_Tomcat
In service: 1974-2006
Info:
	Max. Speed: 2,485 km/h
	2× AIM-9 + 2× AIM-54 + 3× AIM-7 (Most common load during Cold War era)
*/
class USA_F14 : USA_A10
{
	laserScanner = 1;
	irScanGround=1;
	model="\sjc_models\west\f14.p3d";
	displayName="F-14 Tomcat (USN)";
	accuracy = ACCURACY_F14;
	picture = "\sjc_images\vehicles\f14pic.paa";
	icon = "\sjc_images\vehicles\f14icn.paa";
	formationX=45;
	formationZ=20;
	irTarget=1;
	irScanRangeMin=100;
	irScanRangeMax=18000;
	soundLandCrash[]={"\sjc_sounds\vehicles\TireTouch.wav",db+1,1};
	driverAction = ManActA10Pilot;
	gunnerAction = ManActA10Pilot;
	driveriscommander=1;
	hasgunner =1;
	maxSpeed = 2485;
	brakeDistance=60;
	aileronSensitivity = 1.3;
	elevatorSensitivity = 1.4; 
	noseDownCoef = 0.3;
	precision =150;
	landingSpeed =270;
	fov=0.5;
	wheelSteeringSensitivity = 3.0;
	nightVision=1;
	armor = ARMOR_F14;
	cost = COST_F14;
	gunnerOpticsModel="optika_heli_gunner";
	soundEngine[]={"\sjc_sounds\vehicles\f14eng.ogg",db10,1};
	insideSoundCoef = 0.0015;
	type = VEHICLE_AIR;
	threat[]={THREAT_F14};
	hiddenselections[] = {"vrtule", "vrtule 1", "num1", "num2", "_swA", "_swB", "_spA", "_spB", "_pha","_phb","_phc","_phd", "_gbuA", "_gbuB", "_gbuC", "_gbuD","lant" };
	weapons[]={"M61Vulcan", "AIM54", "AIM7", "AIM9"};
	magazines[]={"M61Vulcan", "AIM54", "AIM7", "AIM9"};
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
		class LeftGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="left wheel";
			axis ="axis left wheel";
			angle0 =0;
			angle1 =1.135;
		};
		
		class LeftGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="lwd";
			axis ="axis lwd";
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
			angle1 =-1.135;
		};
		
		class RightGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="rwd";
			axis ="axis rwd";
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
			angle1 =1.57;
		};
		
		class NoseGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="nose door";
			axis ="axis nose door";
			angle0 =0;
			angle1 =1.57;
		};
		
		class Hook
		{
			type ="rotation";
			animPeriod =2;
			selection ="hook";
			axis ="axis hook";
			angle0 =-.524;
			angle1 =0;
		};
		
		class LeftWing
		{
			type ="rotation";
			animPeriod =4;
			selection ="left wing";
			axis ="axis left wing";
			angle0 =0;
			angle1 =.785;
		};
		
		class RightWing
		{
			type ="rotation";
			animPeriod =4;
			selection ="right wing";
			axis ="axis right wing";
			angle0 =0;
			angle1 =-.785;
		};
		
		class LeftVane
		{
			type ="rotation";
			animPeriod =4;
			selection ="left vane";
			axis ="axis left vane";
			angle0 =0;
			angle1 =.436;
		};
		
		class RightVane
		{
			type ="rotation";
			animPeriod =4;
			selection ="right vane";
			axis ="axis right vane";
			angle0 =0;
			angle1 =-.436;
		};
		
		class AftTrigger
		{
			type ="rotation";
			animPeriod =.01;
			selection ="aft_trigger";
			axis ="axis aft_trigger";
			angle0 =0;
			angle1 =1;
		};
	};
	
	gearRetracting=0;
	class ReloadAnimations
	{
		class M61Vulcan
		{
			weapon = "M61Vulcan";
			angle0 = 0;
			angle1 = -1;
			multiplier = 515;
			type = rotation;
			animPeriod = 1;
			selection = barrels;
			begin = "os_barrels1";
			end = "os_barrels2";
		};
	};
	
	/*class UserActions
	{		
		class RKTABOn//TODO
		{
			displayName ="Afterburner On";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" < 0.5 and isengineon this";
			statement = "[this] exec ""\rkttomcat\scr\burner.sqs""; ";
		};
		
		class RKTABOff//TODO
		{
			displayName ="Afterburner Off";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" > 0.5";
			statement = "this animate[""afttrigger"", 0]";
		};
		
		class hak1//TODO
		{
			displayName="Hook Down";
			position="doors";
			radius=10;
			condition="(this animationPhase ""hook"" == 0) and (isengineon this)"; 
			statement="this animate [""hook"",1]";
		};
		
		class hak2//TODO
		{
			displayName="Hook UP";
			position="doors";
			radius=10;
			condition="(this animationPhase ""hook"" == 1) and (isengineon this)";
			statement="this animate [""hook"",0]";
		};
		
		class swing1//TODO
		{
			displayName="Parking Geometry";
			position="doors";
			radius=10;
			condition="(speed this <=50) and (this animationPhase ""left wing"" == 0) and (isengineon this)";
			statement = "[this] exec ""\rkttomcat\scr\parking.sqs"""; 
		};
		
		class swing2//TODO
		{
			displayName="Ready to Launch";
			position="doors";
			radius=10;
			condition="(speed this <=50) and (this animationPhase ""left wing"" == 0) and (isengineon this)"; 
			statement = "[this] exec ""\rkttomcat\scr\fly.sqs"""; 
		};
	};*/
	
	class UserActions
	{
		class RKTGearUp
		{
			displayName ="Gear up";
			position = "doors";
			radius =10;
			condition = "(player == driver this) and (this animationphase ""NoseGear"" < .5)";
			statement = "(this) exec ""\SJC_Scripts\USA\F14\gearup.sqs""; ";
		};
		
		class RKTGearDown
		{
			displayName ="Gear down";
			position = "doors";
			radius =10;
			condition = "(player == driver this) and (this animationphase ""NoseGear"" >= .5)";
			statement = "(this) exec ""\SJC_Scripts\USA\F14\geardown.sqs""; ";
		};
	};
	
	class EventHandlers
	{
		fired = "(_this) exec {\SJC_Scripts\USA\F14\firemiss.sqs};";
		init = "(_this select 0) exec {\SJC_Scripts\USA\F14\autogear.sqs}; (_this select 0) exec {\SJC_Scripts\USA\F14\drawmiss.sqs}; (_this select 0) exec {\SJC_Scripts\USA\F14\number.sqs}; (_this select 0) exec {\SJC_Scripts\USA\F14\swingwing.sqs}";
	};
};