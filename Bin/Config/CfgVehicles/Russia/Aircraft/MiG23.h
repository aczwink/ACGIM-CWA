/*
Sources:
	http://en.wikipedia.org/wiki/Mig23
*/
class MiG23 : Plane
{
	scope = SCOPE_PUBLIC;
	crew = "SoldierEPilot";
	side = SIDE_EAST;
	displayName="MiG-23 Flogger";
	accuracy = ACCURACY_MIG23;
	precision=200;
	picture = "\sjc_images\vehicles\mig23pic.paa";
	icon = "\sjc_images\vehicles\mig23icon.paa";
	irTarget=1;
	irScanRangeMin=100;
	irScanRangeMax=3000;
	irScanGround=0;
	driverAction = ManActA10Pilot;
	maxSpeed = 2445;
	brakeDistance=60;
	aileronSensitivity = .7;
	elevatorSensitivity = .7;
	wheelSteeringSensitivity =2.5;
	noseDownCoef = 0.3;
	landingSpeed =300;
	fov=0.5;
	soundEngine[]={"\sjc_sounds\vehicles\mig23engine.ogg",1.2,.7};
	insideSoundCoef = 0.05;
	armor = ARMOR_MIG23;
	cost = COST_MIG23;
	type = VEHICLE_AIR;
	threat[]={THREAT_MIG23};
	model = "\sjc_models\ussr\mig23.p3d";
	hiddenselections[] ={"roundel", "num1", "num2", "num3", "vrtule"};
	weapons[] = {"GSh23", "R60"};
	magazines[] = {"GSh23", "R60"};
	animated =1;
	
	class Animations
	{
		class LeftGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="leftwheel";
			axis ="axis leftwheel";
			angle0 =0;
			angle1 =.698;
		};
		
		class MDL
		{
			type ="rotation";animPeriod =2;
			selection ="mdl";
			axis ="axis mdl";
			angle0 =0;angle1 =-1.585;
		};
		
		class RightGear
		{
			type ="rotation";animPeriod =2;
			selection ="rightwheel";
			axis ="axis rightwheel";
			angle0 =0;angle1 =-.698;
		};
		
		class MDR
		{
			type ="rotation";animPeriod =2;
			selection ="mdr";
			axis ="axis mdr";
			angle0 =0;angle1 =1.585;
		};
		
		class NoseGear
		{
			type ="rotation";animPeriod =2;
			selection ="nosewheel";
			axis ="axis nosewheel";
			angle0 =0;angle1 =1.75;
		};
		
		class NDL
		{
			type ="rotation";animPeriod =2;
			selection ="ndl";
			axis ="axis ndl";
			angle0 =0;angle1 =-1.57;
		};
		
		class NDR
		{
			type ="rotation";animPeriod =2;
			selection ="ndr";
			axis ="axis ndr";
			angle0 =0;angle1 =1.57;
		};
		
		class LeftWing
		{
			type ="rotation";animPeriod =4;
			selection ="leftwing";
			axis ="axis leftwing";
			angle0 =0;angle1 =-1;
		};
		
		class RightWing
		{
			type ="rotation";animPeriod =4;
			selection ="rightwing";
			axis ="axis rightwing";
			angle0 =0;angle1 =1;
		};
		
		class VentralFin
		{
			type ="rotation";
			animPeriod =4;
			selection ="venttail";
			axis ="axis venttail";
			angle0 =0;
			angle1 =-1.57;
		};
		
		class AftTrigger
		{
			type ="rotation";
			animPeriod =.1;
			selection ="aft trigger";
			axis ="axis aft trigger";
			angle0 =0;
			angle1 =-1;
		};
	};
	
	/*class UserActions//TODO
	{
		class RKTABOn
		{
			displayName ="Afterburner On";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" < 0.5 and isengineon this";
			statement = "[this] exec ""\rktmig23\scr\burner.sqs""; ";
		};
		
		class RKTABOff
		{
			displayName ="Afterburner Off";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" > 0.5";
			statement = "this animate[""afttrigger"", 0]";
		};
	};

	class EventHandlers//TODO
	{
		init = "[_this select 0] exec ""\rktmig23\scr\checkgear.sqs""; [_this select 0] exec ""\rktmig23\scr\swingwing.sqs""; [_this select 0] exec ""\rktmig23\scr\number.sqs""; [_this select 0] exec ""\rktmig23\scr\autoburnsnd.sqs""; (_this select 0) setobjecttexture[0, ""\rktmig23\r_ussr""]; [_this select 0] exec {\rktmig23\scr\autosmoke.sqs}";
		gear="if (_this Select 1) then {[_this select 0] exec""\rktmig23\scr\geardown.sqs""} else {[_this select 0] exec ""\rktmig23\scr\gearup.sqs""}";
		incomingMissile = " if ((_this select 0)==(_this select 0)) then { [_this] exec ""\rktmig23\scr\SpoofMissile.sqs""; [_this] exec ""\rktmig23\scr\autoflares.sqs""; } ";
	};*/
};