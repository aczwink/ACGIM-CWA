/*
This is the T-62 Obr.1972
Sources:
	http://en.wikipedia.org/wiki/T-62
*/
class USSR_T62 : RussianTank
{
	scope=2;
	side=0;
	displayName="T-62";
	model="\sjc_models\ussr\t62.p3d";
	weapons[]={"2A20", "PKT_2500", "DShKM"};
	magazines[]={"BM6", "BK4", "OF27", "PKT_2500", "DShKM", "DShKM", "DShKM", "DShKM"};
	crew = "USSR_Crew";
	gunnerOpticsModel="\sjc_optics\ussr\t62_gunner.p3d";
	commanderOpticsModel="\sjc_optics\ussr\t62_commander.p3d";
	hiddenSelections[] ={"n1","n2","n3"};
	cost = COST_T62;
	maxspeed = 50;
	soundEnviron[]={"\sjc_sounds\vehicles\T62_Treads.wss",1,1};
	soundEngine[]={"\sjc_sounds\vehicles\T62_Engine.wss",1,1};
	soundGear[]={"\sjc_sounds\vehicles\tank_gear.wss",0.07,1};
	soundGetIn[]={"\sjc_sounds\vehicles\in.wss",0.05,1};
	soundGetOut[]={"\sjc_sounds\vehicles\out.wss",0.05,1};
	armor = ARMOR_T62;
	armorStructural=1.4;
	armorHull=0.9;
	armorTurret=1;
	armorGun=0.9;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	driverAction="ManActT55DriverOut";
	gunnerAction="ManActT55GunnerOut";
	commanderAction="ManActT55CommanderOut";
	driverInAction="ManActT55Driver";
	gunnerInAction="ManActT55Gunner";
	commanderInAction="ManActT55Commander";

	class HitEngine
	{
		armor=0.8;
		material=3;
		name=engine;
		passThrough=1;
	};
	class HitHull
	{
		armor=0.9;
		material=3;
		name=hull;
		passThrough=1;
	};
	class HitTurret
	{
		armor=1;
		material=1;
		name=turet;
		passThrough=1;
	};
	class HitGun
	{
		armor=0.9;
		material=2;
		name=gun;
		passThrough=1;
	};
	class HitLTrack
	{
		armor=0.6;
		material=4;
		name=pasL;
		passThrough=1;
	};
	class HitRTrack
	{
		armor=0.6;
		material=5;
		name=pasP;
		passThrough=1;
	};

	class Animations
	{
		class suspension
		{
			type="rotation";
			animperiod=0.5;
			selection="sus_F";
			axis="osa_sus";
			angle0=0.05;
			angle1=-0.05;
		};
		
		class barrel
		{
			type="rotation";
			animperiod=0.5;
			selection="barrel";
			axis="axis_barrel";
			angle0=0;
			angle1=-0.03;
		};
	};
	
	class EventHandlers
	{
		Init = "[_this select 0, 51] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO
		//init = "[_this select 0,_this select 1] exec ""\rhs_t62a\Scripts\nummern.sqs""";
		//engine = "if (_this select 1) Then {(_this select 0) exec {\rhs_t62a\Scripts\sus.sqs}}";
		//killed = "_this exec ""\rhs_t62a\Scripts\fire.sqs""";
		//fired = "_this exec ""\rhs_t62a\Scripts\shock.sqs""; if(_this select 2 == {RHS_2A22})then{_this call loadfile ""\RHS_T62A\scripts\T62_Muzzle.sqf""; _this call loadfile ""\RHS_T62A\scripts\115_tracer.sqf""} else{_this call loadfile ""\RHS_T62A\scripts\MG_tracer.sqf""};";
	};
};