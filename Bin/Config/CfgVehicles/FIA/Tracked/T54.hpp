/*
Sources:
	http://en.wikipedia.org/wiki/T-54
*/
class T55G : Tank
{
	driverAction = "ManActT55DriverOut";
	gunnerAction = "ManActT55GunnerOut";
	commanderAction = "ManActT55CommanderOut";
	driverInAction = "ManActT55Driver";
	gunnerInAction = "ManActT55Gunner";
	commanderInAction = "ManActT55Commander";
	accuracy = ACCURACY_T54;
	maxspeed = 56;
	weapons[]={"D10b", "DShKM", "PKT_250"};
	magazines[]={"BR412", "BK17", "DShKM", "DShKM", "DShKM", "DShKM", "PKT_250", "PKT_250", "PKT_250", "PKT_250", "PKT_250", "PKT_250", "PKT_250", "PKT_250"};
	side = SIDE_FIA;
	crew = "SoldierGCrew";
	displayName="T-54";
	model = "\sjc_models\fia\t54.p3d";
	hiddenSelections[]={"w1","w2","w3"};
	scope=2;
	picture = "\sjc_images\vehicles\t54.paa";
	nameSound="t55";
	irscanner=1;
	laserscanner=0;
	laserscanrange=5000;
	armorStructural=2.0;
	transportSoldier=9;
	ejectdeadcargo=1;
	armor = 203;
	armorTurret=1;
	armorHull=0.75;
	cost = COST_T54;
	irScanRangeMax=800;
	gunnercansee=31;
	driverCanSee=31;
	cargoAction[]={"ManActrhs_t55Cargo1","ManActrhs_t55Cargo2","ManActrhs_t55Cargo3","ManActrhs_t55Cargo4","ManActrhs_t55Cargo5","ManActrhs_t55Cargo6","ManActrhs_t55Cargo7","ManActrhs_t55Cargo8","ManActrhs_t55Cargo9"};
	gunnerOpticsModel="\sjc_optics\fia\t55.p3d";
	commanderOpticsModel="\sjc_optics\fia\t55.p3d";
	soundEnviron[]={"\sjc_sounds\vehicles\T55_treads.wss",1,1};
	soundEngine[]={"\sjc_sounds\vehicles\T55_engine.wss",1,1};
	soundGear[]={"\sjc_sounds\vehicles\tank_gear.wss",0.07,1};
	soundGetIn[]={"\sjc_sounds\vehicles\in.wss",0.05,1};
	soundGetOut[]={"\sjc_sounds\vehicles\out.wss",0.05,1};
	type=1;
	threat[]={THREAT_T54};

	class IndicatorSpeed
	{
		selection = "ukaz_rychlo";
		axis = "osa_rychlo";
		angle = -270;
		min = 0;
		max = "100 / 3.6";
	};

	class IndicatorSpeed2
	{
		selection = "ukaz_rychlo2";
		axis = "osa_rychlo2";
		angle = -270;
		min = 0;
		max = "100 / 3.6";
	};

	class IndicatorRPM
	{
		selection = "ukaz_rpm";
		axis = "osa_rpm";
		angle = -290;
		min = 0;
		max = 1;
	};
	
	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\sjc_sounds\vehicles\turret_old.wss",0.1,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev="+20";
		minTurn=-360;
		maxTurn="+360";
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Turret : TurretBase
	{
	};

	class Reflectors
	{
		class Reflector
		{
			color[] = {0.9, 0.8, 0.8, 1};
			ambient[] = {0.1, 0.1, 0.1, 1};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 0.25;
		};
	};
	
	class Animations
	{
		class recoil
		{
			animperiod=0.1;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1=0.01;
			type="rotation";
		};
		
		class suspension
		{
			animperiod=0.5;
			selection="RHS_Sus";
			axis="RHS_Sus_osa";
			angle0="-0.1";
			angle1=0.1;
			type="rotation";
		};
		
		class suspension2
		{
			animperiod=0.5;
			selection="RHS_Sus2";
			axis="RHS_Sus2_osa";
			angle0="-0.07";
			angle1=0.07;
			type="rotation";
		};
	};
	
	class EventHandlers
	{
		engine = "if (_this select 1) then {(_this select 0) exec {\acgim_scripts\Vehicles\T80\DKMM_RSC_Tank_Accel.sqs};}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\acgim_scripts\Vehicles\T55\RAE_T55_throwOff.sqs""};_this exec ""\acgim_scripts\Vehicles\T55\RAE_T55_Shockdust.sqs""; If(RHS_FctLoad && RHS_T55_FctLoad)Then{_this call RHS_TankFired; (_this + [_this call RHS_Noid]) call RHS_T55_Fired}";
		hit="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\acgim_scripts\Vehicles\T55\RAE_T55_throwOff.sqs""}; If(RHS_FctLoad)Then{_this exec ""\acgim_scripts\Vehicles\T80\ArmorHit.sqs""}";
		incomingMissile="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\acgim_scripts\Vehicles\T55\RAE_T55_throwOff.sqs""}";
		init="_this exec ""\acgim_scripts\Vehicles\T55\RAE_T55_Init.sqs""";
		killed="If(RHS_FctLoad)Then{(_this+[250]) exec {\acgim_scripts\Vehicles\T80\RAE_fire.sqs}}";
	};
};