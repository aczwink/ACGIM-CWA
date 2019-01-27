/*
Sources:
	http://en.wikipedia.org/wiki/MiG-27
*/
class MiG27 : Plane
{
	scope = SCOPE_PUBLIC;
	crew = "SoldierEPilot";
	side = SIDE_EAST;
	displayName="MiG-27 Flogger-D";
	picture = "\sjc_images\vehicles\mig27pic.paa";
	icon = "\sjc_images\vehicles\mig27icon.paa";
	accuracy = ACCURACY_MIG27;
	irTarget=1;
	irScanRangeMin=100;
	irScanRangeMax=3000;
	irScanGround=1;
	laserScanner=1;
	driverAction = ManActA10Pilot;
	maxSpeed = 1885;
	brakeDistance=60;
	aileronSensitivity = .7;
	elevatorSensitivity = .7;
	wheelSteeringSensitivity =2.5;
	noseDownCoef = 0.3;
	landingSpeed =300;
	fov=0.5;
	soundEngine[]={"\sjc_sounds\vehicles\mig27engine.ogg",1,.7};
	insideSoundCoef = 0.05;
	armor = ARMOR_MIG27;
	cost = COST_MIG27;
	type = VEHICLE_AIR;
	threat[]={THREAT_MIG27};
	model= "\sjc_models\ussr\mig27.p3d";
	hiddenselections[]= {"roundel", "num1", "num2", "num3", "vrtule", "_kabA", "_kabB", "_kerA", "_kerB"};
	weapons[] = {"GSh6_30", "UV16", "Kh23", "KAB500L"};
	magazines[] = {"GSh6_30", "UV16", "Kh23", "KAB500L"};
	animated =1;
	class Animations
	{
		class LeftGear
		{
			type ="rotation";	animPeriod =2;
			selection ="leftwheel";
			axis ="axis leftwheel";
			angle0 =0;angle1 =.698;
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

	/*class UserActions //TODO
	{
		class RKTABOn
		{
			displayName ="Afterburner On";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" < 0.5 and isengineon this";
			statement = "[this] exec ""\rktmig27\scr\burner.sqs""; ";
		};
		
		class RKTABOff
		{
			displayName ="Afterburner Off";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" > 0.5";
			statement = "this animate[""afttrigger"", 0]";
		};
		
		class RKTCameraOn
		{
			displayName ="Bomb Camera On";
			position = "doors";
			radius =15;
			condition = "player in this and !RKTWeaponCam";
			statement = "RKTWeaponCam = true";
		};
		
		class RKTCameraOff
		{
			displayName ="Bomb Camera Off";
			position = "doors";
			radius =15;
			condition = "player in this and RKTWeaponCam";
			statement = "RKTWeaponCam = false";
		};
	};*/
	
	class EventHandlers
	{
		Init = "[_this select 0, 65] exec {\SJC_Scripts\vehicleTODO.sqs}";
	};
	
	/*class EventHandlers //TODO
	{
		init = "RKTWeaponCam = false; [_this select 0] exec ""\rktmig27\scr\checkgear.sqs""; [_this select 0] exec ""\rktmig27\scr\swingwing.sqs""; [_this select 0] exec ""\rktmig27\scr\number.sqs""; [_this select 0] exec ""\rktmig27\scr\autoburnsnd.sqs""; (_this select 0) setobjecttexture[0, ""\rktmig27\r_ussr""]; [_this select 0] exec ""\rktmig27\scr\drawmiss.sqs"";  [_this select 0] exec {\rktmig27\scr\autosmoke.sqs};";
		gear="if (_this Select 1) then {[_this select 0] exec""\rktmig27\scr\geardown.sqs""} else {[_this select 0] exec ""\rktmig27\scr\gearup.sqs""}";
		fired="[_this] exec ""\rktmig27\scr\firemiss.sqs""; ";
		incomingMissile = " if ((_this select 0)==(_this select 0)) then { [_this] exec ""\rktmig27\scr\SpoofMissile.sqs""; [_this] exec ""\rktmig27\scr\autoflares.sqs""; } ";
	};*/
};