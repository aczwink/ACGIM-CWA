/*
Sources:
	http://en.wikipedia.org/wiki/T-80
	http://www.inetres.com/gp/military/cv/tank/T-80.html
*/
class USSR_T80B : RussianTank
{
	scope = SCOPE_PUBLIC;
	side = SIDE_EAST;
	displayName="T-80B";
	laserscanner=0;
	hiddenSelections[]={"n1","n2","n3","SNK1","SNK2","SNK3","emb","shield"};
	crew = "USSR_Crew";
	ejectdeadcargo=1;
	canfloat=0;
	gunnerOpticsModel="\sjc_optics\russia\t80_gunner.p3d";
	commanderOpticsModel="\sjc_optics\russia\t80_commander.p3d";
	armor = ARMOR_T80B;
	armorStructural=2.0;
	armorHull=0.9;
	armorTurret=0.98;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	cost = COST_T80B;
	maxspeed = 70;
	gunnercansee="31";
	driverCanSee=31;
	driverAction="ManActT80DriverOut";
	gunnerAction="ManActT80GunnerOut";
	commanderAction="ManActT80CommanderOut";
	driverInAction="ManActT80Driver";
	gunnerInAction="ManActT80Gunner";
	commanderInAction="ManActT80Commander";
	model="\sjc_models\russia\t80b.p3d";
	soundEnviron[]={"\sjc_sounds\vehicles\T80_treads.wss",1,1};
	soundEngine[]={"\sjc_sounds\vehicles\T80_turbine.wss",1,1};
	soundGear[]={"\sjc_sounds\vehicles\tank_gear.wss",0.07,1};
	soundGetIn[]={"\sjc_sounds\vehicles\in.wss",0.05,1};
	soundGetOut[]={"\sjc_sounds\vehicles\out.wss",0.05,1};
	type=1;
	threat[]={THREAT_T80B};
	weapons[]={"2A46M", "PKT", "NSV"};
	magazines[]={"3VBM17", "3VBK16", "3VOF36", "9K112Kobra", "PKT", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV"};
	
	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\sjc_sounds\vehicles\turret_new.wss",0.1,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev="+20";
		minTurn=-360;
		maxTurn="+360";
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Turret:TurretBase
	{
	};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max="100 / 3.6";
	};
	
	class IndicatorSpeed2:IndicatorSpeed
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
	};
	class HitEngine
	{
		armor=0.8;
		material=60;
		name="engine";
		passThrough=1;
	};

	class HitHull
	{
		armor=0.9;
		material=50;
		name="hull";
		passThrough=1;
	};
	
	class HitTurret
	{
		armor=0.98;
		material=51;
		name="turet";
		passThrough=1;
	};

	class HitGun
	{
		armor=0.6;
		material=52;
		name="gun";
		passThrough=1;
	};
	
	class HitLTrack
	{
		armor=0.6;
		material=53;
		name="pasL";
		passThrough=1;
	};

	class HitRTrack
	{
		armor=0.6;
		material=54;
		name="pasP";
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
			angle0=-0.05;
			angle1=0.05;
		};
	
		class barrel
		{
			type="rotation";
			animperiod=0.1;
			selection="barrel";
			axis="axis_barrel";
			angle0=0;
			angle1=-0.015;
		};
	};
	
	class EventHandlers
	{
		//TODO
		//init= "_this exec {\RHS_T80Pack_Scripts\RAE_T80_Init.sqs}";
		//hit="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T80Pack_Scripts\RAE_T80_throwOff.sqs""}; If(RHS_FctLoad)Then{_this exec ""\RHS_Misc\ArmorHit.sqs""}";
		//incomingMissile="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T80Pack_Scripts\RAE_T80_throwOff.sqs""}";
		//fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T80Pack_Scripts\RAE_T80_throwOff.sqs""}; If(RHS_FctLoad && RHS_T80_FctLoad)Then{_this call RHS_TankFired; (_this + [_this call RHS_Noid]) call RHS_T80_Fired}";
		//killed="If(RHS_FctLoad)Then{(_this+[250]) exec {\RHS_Misc\RAE_fire.sqs}}";
		//engine="if (_this select 1) then {(_this select 0) exec {\RHS_Misc\DKMM_RSC_Tank_Accel.sqs};}";
	};
};