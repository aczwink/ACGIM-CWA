/*
Sources:
	http://en.wikipedia.org/wiki/ZSU-23-4
*/
class USSR_ZSU234 : Tank
{
	scope = SCOPE_PUBLIC;
	side = SIDE_EAST;
	displayName="ZSU-23-4 Shilka";
	model="\sjc_models\russia\shilka.p3d";
	crew = "USSR_Crew";
	hiddenSelections[]={"n1","n2","n3","pod_1","pod_2","pod_3","rot_1","rot_2","rot_3","ukaz_radar"};
	weapons[]={"AZP23"};
	magazines[]={"AZP23"};
	gunnerOpticsColor[]={0.6,0.6,0.6,1};
	commanderOpticsColor[]={0.6,0.6,0.6,1};
	commanderOpticsModel="\sjc_optics\russia\shilka_commander.p3d";
	GunnerOpticsModel="\sjc_optics\russia\shilka_gunner.p3d";
	transportSoldier=0;
	irScanGround=2000;
	irScanRange=4000;
	irTarget=1;
	commanderCanSee=31;
	gunnerCanSee="1+16+4+8";
	armor = ARMOR_ZSU234;
	cost = COST_ZSU234;
	maxSpeed = 50;
	soundEnviron[]={"\sjc_sounds\vehicles\OldRolling_Treads1.ogg",1.493333,1};
	soundEngine[]={"\sjc_sounds\vehicles\shilkaeng.wav",4.986666,1.300000};
	forceHideGunner=1;
	forceHideDriver=1;
	ejectDeadCargo = 1;
	driverAction="ManActZSUDriver";
	gunnerAction="ManActZSUGunnerOut";
	commanderAction="ManActRUS_ZSUCommanderOut";
	driverInAction="ManActZSUDriver";
	gunnerInAction="ManActZSUGunner";
	commanderInAction="ManActZSUCommander";

	class Animations
	{
		class SetNumber
		{
			type="rotation";
			animperiod=0.5;
			selection="useract";
			axis="osa_useract";
			angle0=0;
			angle1=0;
		};
		
		class Podveska
		{
			type="rotation";
			animperiod=0.5;
			selection="podv";
			axis="osa_sus";
			angle0=-0.04;
			angle1=0.04;
		};
		
		class Trigg_Radar
		{
			type=rotation;
			animperiod=1;
			selection="trigg";
			axis="osa_trigg";
			angle0= 0;
			angle1= 1.82;
		};
		
		class Pod_Radar
		{
			type=rotation;
			animperiod=2;
			selection="R1";
			axis="osa_R1";
			angle0= 0;
			angle1= 1.82;
		};
		
		class Rotat_Radar
		{
			type=rotation;
			animperiod=3;
			selection="R2";
			axis="osa_R2";
			angle0= 0;
			angle1= 3.7;
		};	
	};

	class EventHandlers
	{
		Init = "[_this select 0, 55] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO
		//Init="[_this select 0] exec {\MNF_ZSU\scripts\podw.sqs}; [_this select 0] exec {\MNF_ZSU\scripts\number.sqs}; [_this select 0] exec {\MNF_ZSU\scripts\radar.sqs}";
		//Fired="_this call loadFile {\MNF_ZSU\scripts\stvol.sqf}";
		//Killed="[_this select 0] exec {\MNF_ZSU\scripts\destroyed.sqs}";
		//GetIn="if (((_this select 1) == ""gunner"") and !(player in (_this select 0))) then {[_this select 0] exec ""\MNF_ZSU\scripts\radar.sqs""}";
		//Engine="if (_this select 1) then {(_this select 0) say ""ICP_ZSUEngineOnSound""} else {(_this select 0) say ""ICP_ZSUEngineOffSound""}";
	};
};