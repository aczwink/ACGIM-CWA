/*
Sources:
http://en.wikipedia.org/wiki/Fairchild_Republic_A-10_Thunderbolt_II
In service: 1976-present
Comments:
	Used "Never exceeded Speed" as maxspeed because OFP always shows less
*/
class A10 : Plane
{
	scope = SCOPE_PUBLIC;
	access = ACCESS_FORBIDDEN;
	side = SIDE_WEST;
	maxSpeed = 833;
	brakeDistance = 450;
	landingSpeed = 190;
	flapsFrictionCoef = 0.14;
	gearRetracting = true;
	insideSoundCoef = 0.01;
    cost = COST_A10;
	type = VEHICLE_AIR;
    threat[]={THREAT_A10};
	noseDownCoef=1;
	elevatorSensitivity=1.4;
	aileronSensitivity=1.1;
	wheelSteeringSensitivity=1.3;
	animated=1;
	armor = ARMOR_A10;
	accuracy = ACCURACY_A10;
	fuelCapacity=100;
	crew = "USA_AircraftPilot";
	driverAction = "ManActA10Pilot";
	vehicleClass = "Vehicles (Air)";
	displayName = "A-10 Thunderbolt II (USAF)";
	picture="\d4t_files\pics\vehicles\a10_grey.paa";
	model = "\d4t_files\models\us\vehicles\a10tb2.p3d";
	soundEngine[]={"\d4t_files\sounds\vehicles\air\a10engine.wav",4,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\air\A10air.wss",db-10,1};
	soundLandCrash[]={"\d4t_files\sounds\vehicles\air\LandingEnd.wav",db+60,1};
	soundGear[]={"",db-75,1};
	weapons[] = {"GAU8Avenger", "AGM65BMaverick", "Hydra70", "AIM9M", "Mk82_4"};
	magazines[]={"GAU8Avenger", "AGM65BMaverick", "Hydra70", "AIM9M", "Mk82_4"};
	hiddenSelections[]={"n1", "n2", "n3", "bas_tailflash_l", "bas_tailflash_r", "bas_taillogo_l", "bas_taillogo_r", "bas_tailnum_l", "bas_tailnum_r", "bas_usaf_l", "bas_usaf_r",	"_aimA", "_aimB", 	"_mavA", "_mavB", "_mavC", "_mavD", "_mavE", "_mavF", "_mk82A", "_mk82B", "_mk82C", "_mk82D"};

	class GunFire : GAU8AvengerGunSmoke{};
	class GunClouds : GAU8AvengerGunSmoke{};
	class MGunFire : GAU8AvengerGunSmoke{};
	class MGunClouds : GAU8AvengerGunSmoke{};

	class ViewPilot
	{
		initFov=0.8;
		minFov=0.6;
		maxFov=1.0;
		initAngleX=15;
		minAngleX=-15;
		maxAngleX=+25;
        initAngleY=0;
		minAngleY=-100;
		maxAngleY=+100;
	};

	class ReloadAnimations
	{
		class GAU8Avenger
		{
			weapon = "GAU8Avenger";
			angle0=0;
			angle1="-2 * 3.141592654";
			multiplier=5000;
			type=rotation;
			animPeriod=1;
			selection=gau8a;
			begin="usti hlavne";
			end="konec hlavne";
		};
	};
		
	class Reflectors
	{
		class Reflector
		{
			color[]={0.0,0.0,0.0,0.0};
			ambient[]={0.0,0.0,0.0,0.0};
			position=;
			direction=;
			hitpoint=;
			selection="L svetlo";
			size=0.0;
			brightness=0.0;
		};
	};

	class Animations
	{
		class LeftGear
		{
			type="rotation";
			animPeriod=2;
			selection="left wheel";
			axis="axis left wheel";
			angle0=0;
			angle1=1.43;
		};

		class LeftGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="left flap1";
			axis ="axis left flap1";
			angle0 =0;
			angle1 =1.560;
		};
			
		class RightGear
		{
			type ="rotation";
			animPeriod =1.9;
			selection ="right wheel";
			axis ="axis right wheel";
			angle0 =0;
			angle1 =-1.43;
		};

		class RightGearDoor
		{
			type ="rotation";
			animPeriod =1.9;
			selection ="right flap1";
			axis ="axis right flap1";
			angle0 =0;
			angle1 =-1.560;
		};

		class NoseGear
		{
			type ="rotation";
			animPeriod =2.3;
			selection ="nose wheel";
			axis ="axis nose wheel";
			angle0 =0;
			angle1 =1.5;
		};
			
		class NoseGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="nose door2";
			axis ="axis nose door2";
			angle0 =0;
			angle1 =1.477;
		};

		class NoseGearDoor2
		{
			type ="rotation";
			animPeriod =2.3;
			selection ="nose door";
			axis ="axis nose door";
			angle0 =0;
			angle1 =1.40;
		};

		class CanGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="can_gear";
			axis ="axis can_gear";
			angle0 =0;
			angle1 =0.61086;
		};

		class GearW
		{
			type = "rotation";
			animperiod=0.01;
			selection="gearw";
			axis="axis gearw";
			angle0=0;
			angle1=-3.141581;
		};
	};

	class EventHandlers
	{
		fired = "_this exec {\SJC_Scripts\USA\A10\firemissiles.sqs};";
		gear = "if(_this Select 1) then {(_this select 0) exec {\SJC_Scripts\USA\A10\geardown.sqs}} else {(_this select 0) exec {\SJC_Scripts\USA\A10\gearup.sqs}}";
		hit = "(_this select 0) exec {\SJC_Scripts\USA\A10\enginefire.sqs};";
		init = "(_this select 0) exec {\SJC_Scripts\USA\A10\num.sqs}; (_this select 0) exec {\SJC_Scripts\USA\A10\checkgear.sqs}; [_this select 0, {wa}] exec {\SJC_Scripts\USA\A10\set_markings.sqs}; (_this select 0) exec {\SJC_Scripts\USA\A10\drawmissiles.sqs}; (_this select 0) animate [{NoseGearDoor2}, 1];";
	};
};

class A10LGB : A10
{
	laserScanner = 1;
	weapons[]={"GAU8Avenger", "AGM65BMaverick_2", "GBU12", "AIM9M"};
	magazines[]={"GAU8Avenger", "AGM65BMaverick_2", "GBU12", "AIM9M"};
	hiddenSelections[]={"n1", "n2", "n3", "bas_tailflash_l", "bas_tailflash_r", "bas_taillogo_l", "bas_taillogo_r", "bas_tailnum_l", "bas_tailnum_r", "bas_usaf_l", "bas_usaf_r",	"_aimA", "_aimB", "_mavA", "_mavB", "_gbuA", "_gbuB", "_gbuC", "_gbuD"};
	displayName = "A-10 Thunderbolt II Bomber (USAF)";
	model = "\models\DSL_a10_mesh_gbu_g.p3d";
	
	/*class EventHandlers
	{
		init = "[(_this Select 0)] exec ""\DSL_a10\scripts\num.sqs""; [_this select 0] exec ""\DSL_a10\scripts\checkgear.sqs""; [_this select 0, {wa}] exec ""\DSL_a10\scripts\set_markings.sqs""; [_this select 0] exec ""\dsl_a10\scripts\drawmissiles_gbu.sqs""; _this select 0 animate [""NoseGearDoor2"", 1]; [_this select 0] exec ""\dsl_a10\scripts\enginefire.sqs""; [_this select 0] exec ""\dsl_a10\scripts\enginefiresound.sqs"";";
		gear="if (_this Select 1) then {[_this select 0] exec""\DSL_a10\scripts\geardown.sqs""} else {[_this select 0] exec ""\DSL_a10\scripts\gearup.sqs""}";
		fired="[_this] exec ""\DSL_a10\scripts\firemissiles_gbu.sqs""; [_this] exec ""\DSL_A10\scripts\gun_brake.sqs""; "; 
	};*/
};