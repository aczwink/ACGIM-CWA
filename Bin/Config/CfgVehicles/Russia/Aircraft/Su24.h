/*
Sources:
	http://en.wikipedia.org/wiki/Su-24
Speed: Mach 1.35 -> 1433 km/h
*/
class Su24 : Plane
{
	scope = SCOPE_PUBLIC;
	crew = "SoldierEPilot";
	side = SIDE_EAST;
	picture = "\sjc_images\vehicles\su24pic.paa";
	icon = "\sjc_images\vehicles\su24icon.paa";
	displayName="Su-24 Fencer";
	accuracy = ACCURACY_SU24;
	irTarget=1;
	irScanRangeMin=3000;
	irScanRangeMax=9000;
	irScanGround=1;
	hasGunner =1;
	driverIsCommander =1;
	driverAction = ManActA10Pilot;
	gunnerAction = ManActCessnaCargo;
	gunnerOpticsModel = "\sjc_optics\ussr\su24_gunner.p3d";
	gunnerOpticsColor[] = {1, 1, 1, 1};
	steerAheadSimul=3.0;
	steerAheadPlan=6.0;
	maxSpeed = 1433;
	brakeDistance=60;
	aileronSensitivity = 1;
	elevatorSensitivity = 1.2;
	noseDownCoef = 0.2;
	landingSpeed =210;
	fov=0.5;
	wheelSteeringSensitivity = 2.0;
	precision=200;
	soundEngine[]={"\sjc_sounds\vehicles\su24engine.ogg",1,1};
	insideSoundCoef = 0.01;
	armor = ARMOR_SU24;
	cost = COST_SU24;
	type = VEHICLE_AIR;
	threat[]={THREAT_SU24};
	weapons[] = {"GSh6_23", "UV8", "R60_2", "Kh29_2", "KAB500L"};
	magazines[] = {"GSh6_23", "UV8", "R60_2", "Kh29_2", "KAB500L"};
	model="\sjc_models\ussr\su24.p3d";
	hiddenselections[] = {"roundel", "num1", "num2", "_spinW", "_foldW", "dummy1", "dummy2", "_kabA", "_kabB", "_kh31A", "_kh31B", "_r60A", "_r60B"};
	animated =1;
	
	class Animations
	{
		class LeftGear
		{
			type ="rotation";animPeriod =2;
			selection ="leftwheel";axis ="axis_leftwheel";
			angle0 =0;angle1 =-2.1;
		};
		
		class RightGear
		{
			type ="rotation";animPeriod =2;
			selection ="rightwheel";axis ="axis_rightwheel";
			angle0 =0;angle1 =2.1;
		};
		
		class NoseGear
		{
			type ="rotation";animPeriod =2;
			selection ="frontwheel";axis ="axis_frontwheel";
			angle0 =0;angle1 =1.745;
		};
		
		class NDL
		{
			type ="rotation";animPeriod =1;
			selection ="ndl";axis ="axis_ndl";
			angle0 =0;angle1 =-1.57;
		};
		
		class NDR
		{
			type ="rotation";animPeriod =1;
			selection ="ndr";axis ="axis_ndr";
			angle0 =0;angle1 =1.57;
		};
		
		class MD1
		{
			type ="rotation";animPeriod =2;
			selection ="md1";axis ="axis_md1";
			angle0 =0;angle1 =-.8;
		};
		
		class MDL
		{
			type ="rotation";animPeriod =1;
			selection ="mdl";axis ="axis_mdl";
			angle0 =0;angle1 =1.57;
		};
		
		class MDR
		{
			type ="rotation";animPeriod =1;
			selection ="mdr";axis ="axis_mdr";
			angle0 =0;angle1 =1.57;
		};
		
		class FDL
		{
			type ="rotation";animPeriod =1;
			selection ="fdl";axis ="axis_fdl";
			angle0 =0;angle1 =1.047;
		};
		
		class FDR
		{
			type ="rotation";animPeriod =1;
			selection ="fdr";axis ="axis_fdr";
			angle0 =0;angle1 =-1.047;
		};
		
		class Canopy
		{
			type ="rotation";animPeriod =2;
			selection ="canopy";axis ="axis_canopy";
			angle0 =0;angle1 =-.6;
		};
		
		class SWF
		{
			type ="rotation";animPeriod =.02;
			selection ="_swf";axis ="axis_swf";
			angle0 =0;angle1 =6.283;
		};

		class SWR
		{
			type ="rotation";animPeriod =.02;
			selection ="_swr";axis ="axis_swr";
			angle0 =0;angle1 =6.283;
		};
		class LeftWing
		{
			type ="rotation";animPeriod =.1;
			selection ="leftwing";axis ="axis_leftwing";
			angle0 =0;angle1 =.873;
		};
		
		class RightWing
		{
			type ="rotation";animPeriod =.1;
			selection ="rightwing";axis ="axis_rightwing";
			angle0 =0;angle1 =-.873;
		};
		
		class LeftPylon
		{
			type ="rotation";animPeriod =.1;
			selection ="LeftPylon";axis ="axis_LeftPylon";
			angle0 =0;angle1 =.0576;
		};
		
		class RightPylon
		{
			type ="rotation";animPeriod =.1;
			selection ="RightPylon";axis ="axis_RightPylon";
			angle0 =0;angle1 =-.0576;
		};
	};
	gearRetracting=1;
	
	class EventHandlers
	{
		Init = "[_this select 0, 68] exec {\SJC_Scripts\vehicleTODO.sqs}";
	};
	/*class EventHandlers//TODO
	{
		init = "[_this select 0] exec{\rktsu24\scr\common_init.sqs}; (_this select 0) setobjecttexture[0, ""\rktsu24\r_ussr""]";
		gear="if (_this select 1) then {[_this select 0] exec{\rktsu24\scr\geardown.sqs}} else {[_this select 0] exec{\rktsu24\scr\gearup.sqs}}";
		fired="[_this] exec{\rktsu24\scr\firemissiles.sqs}";
		incomingMissile = " if ((_this select 0)==(_this select 0)) then {[_this] exec{\rktsu24\scr\autoflares.sqs}; [_this] exec{\rktsu24\scr\spoofmissile.sqs}}";
	};*/
};