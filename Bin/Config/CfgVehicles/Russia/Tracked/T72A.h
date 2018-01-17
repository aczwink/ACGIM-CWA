/*
T-72A (Ob'yekt 176)
Sources:
	http://en.wikipedia.org/wiki/T-72

	Service:
		Began in 1979.
		End is unknown because still in service.
		Were all upgraded to T72B ?
*/
class Russia_T72A : RussianTank
{
	scope=2;
	side = SIDE_EAST;
	forceHideGunner=0;
	picture="\sjc_images\vehicles\t72.paa";
	accuracy = ACCURACY_T72A;
	armor = ARMOR_T72A;
	cost = COST_T72A;
	maxSpeed = 60;
	namesound="t72";
	driverAction="ManActT72DriverOut";
	gunnerAction="ManActT72GunnerOut";
	commanderAction="ManActT72CommanderOut";
	driverInAction="ManActT72Driver";
	gunnerInAction="ManActT72Gunner";
	commanderInAction="ManActT72Commander";
	type=1;
	threat[] = {THREAT_T72A};
	displayName="T-72A";
	hiddenSelections[]={"n1","n2","n3","emb"};
	crew = "Russia_Crew";
	ejectdeadcargo=1;
	gunnerOpticsModel="\sjc_optics\russia\t72_gunner.p3d";
	commanderOpticsModel="\sjc_optics\russia\t72_commander.p3d";
	model="\sjc_models\russia\t72a.p3d";
	soundEnviron[]={"\sjc_sounds\vehicles\T72_treads.wss",1,1};
	soundEngine[]={"\sjc_sounds\vehicles\T72_engine.wss",1,1};
	soundGear[]={"\sjc_sounds\vehicles\tank_gear.wss",0.07,1};
	soundGetIn[]={"\sjc_sounds\vehicles\in.wss",0.05,1};
	soundGetOut[]={"\sjc_sounds\vehicles\out.wss",0.05,1};
	weapons[]={"2A46M", "PKT_2000", "NSV"};
	magazines[]={"3VBM17_15", "3VBK16_16", "3VOF36_11", "PKT_2000", "NSV", "NSV", "NSV", "NSV", "NSV", "NSV"};
	
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
	
	class Reflectors
	{
		class Left
		{
			color[]={0.800000,0.800000,1.000000,1.000000};
			ambient[]={0.070000,0.070000,0.070000,1.000000};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.500000;
			brightness=1.000000;
		};
	};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="100 / 3.6";
	};
	
	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-270;
		min=0;
		max="100 / 3.6";
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-290;
		min=0;
		max=1;
	};
	
	class Animations
	{
		class recoil
		{
			animperiod=0.1;
			selection="recoil";
			axis="osa_rec";
			angle0=0;
			angle1=0.006;
			type="rotation";
		};
		
		class suspension
		{
			animperiod=0.5;
			selection="sus";
			axis="sus_osa";
			angle0="-0.1";
			angle1=0.1;
			type="rotation";
		};
		
		class suspension2
		{
			animperiod=0.5;
			selection="sus2";
			axis="sus2_osa";
			angle0="-0.07";
			angle1=0.07;
			type="rotation";
		};
	};
	
	class EventHandlers
	{
		init = "_this exec {\SJC_Scripts\Russia\T72A\Signs.sqs}";
		fired = "[_this select 0, _this select 1, _this select 4, [{2A46M}]] exec {\SJC_Scripts\Events\Fire_Gun.sqs};";
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec ""\SJC_Scripts\Events\VehicleBurner.sqs""";
	};
};