/*
Sources:
	http://en.wikipedia.org/wiki/M60_Patton
In service: 1961-2005
*/
class USA_M60A1 : Tank
{
	scope=2;
	side=1;
	crew = "USA_Crew";
	displayName="M60A1";
	picture="\d4t_files\pics\vehicles\m60.paa";
	hiddenSelections[]={"SearchLight"};
	gunnerOpticsModel="\d4t_files\optics\optic_m60_gunner.p3d";
	commanderOpticsModel="\d4t_files\optics\optic_m60_commander.p3d";
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\M60_Treads.ogg",1,1};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\M60_Engine.ogg",1,1};
	soundCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash_heavy.ogg",1,1};
	soundLandCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash.ogg",1,1};
	soundGear[]={"\d4t_files\sounds\vehicles\surface\Gear.ogg",0.07,1};
	soundDammage[]={"\d4t_files\sounds\vehicles\surface\Alarm.ogg",0.1,1};
	model="\d4t_files\models\us\vehicles\m60a3.p3d";
	gunnerAction="ManActM60Gunner";
	gunnerInAction="ManActM60Gunner";
	driverAction="ManActM60DriverOut";
	driverInAction="ManActM60Driver";
	commanderAction="ManActM60CommanderOut";
	commanderInAction="ManActM60Commander";
	maxSpeed = 48;
	type=1;
	threat[]={THREAT_M60A1};
	weapons[]={"M68_105Gun", "M73MachineGun"};
	magazines[]={"M735_105APFSDS", "M456A1_105HEAT", "M73MachineGun"};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

	class HatchCommander
	{
		selection="poklop_commander";
		axis="osa_poklop_commander";
		angle=-95;
	};
	
	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M60_Turret.ogg",0.4,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};
		
	class Turret: TurretBase{};
	
	class ComTurret
	{
		turretAxis="OsaVelitele";
		gunAxis="OsaHlavneVelitele";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M60_Turret.ogg",0.08,1.200000};
		minElev=-4;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
		body="OtocVelitele";
		gun="OtocHlavenVelitele";
	};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="20";
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=290;
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

		class optics
		{
			animperiod=0.1;
			selection="optics";
			axis="osa_optics";
			angle0=0;
			angle1=0.02;
			type="rotation";
		};

		class suspension
		{
			animperiod=0.5;
			selection="sus";
			axis="sus_osa";
			angle0="-0.07";
			angle1=0.07;
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
		Init = "[_this select 0, 183] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO:
		/*init="_this exec {\d4t_files\FX\scripts\vehicles\m60a3\init.sqs}";
		getIn = "_this exec {\d4t_files\FX\scripts\vehicles\m60a3\RAE_driverOptics.sqs}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
		fired = "_this exec ""\d4t_files\FX\scripts\vehicles\m60a3\shock.sqs""; if (_this select 4 in [""105mm_m833_apfsds"",""Shell105""]) then {(_this + [_this call RHS_Noid]) exec {\d4t_files\FX\scripts\vehicles\m60a3\suspension.sqs}}";
		engine="if (_this select 1) then {(_this select 0) exec {\d4t_files\FX\scripts\vehicles\m60a3\DKMM_RSC_Tank_Accel.sqs}}";*/
	};
};