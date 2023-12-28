class BMP2 : BMP
{
	access=2;
	displayName = "BMP-2";
	model="\d4t_files\models\russia\vehicles\bmp2.p3d";
	weapons[]={"2A42", "PKT", "9M113Konkurs"};
	magazines[]={"3UBR8", "3UOF8_340", "PKT", "9M113Konkurs"};
	threat[]={THREAT_BMP2};
	hiddenSelections[]={"cislo1","cislo2","cislo3","blatnik","plachta","brvno","znak1","sign","csla"};

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"Vehicles\gun_elevate",0.0316228,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		body="OtocVez";
		gun="OtocHlaven";
		minElev=-4.5;
		maxElev=60;
		minTurn=-360;
		maxTurn=360;
	};

	class EventHandlers
	{
		Init="_this exec {\d4t_files\FX\scripts\vehicles\bmp\randomnumber_rus.sqs}; _this exec {\d4t_files\FX\scripts\vehicles\bmp\bmp2_parts.sqs};";
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};

/*
class BMP2 : BMP
{
	scope=2;
	crew="SoldierECrew";
	picture="ibmp";
	side=0;
	displayName="BMP-2";
	nameSound="BMP";
	accuracy=0.3;
	maxSpeed=70;
	transportSoldier=24;
	transportAmmo=0;
	transportFuel=3000;
	cost=150000;
	forceHideGunner=0;
	model="\ffur_ru_arm\csla\csla2_BMP2g";
	hiddenSelections[]={"cislo1","cislo2","cislo3","blatnik","plachta","brvno","znak1","sign","csla"};
	canFloat=1;
	minGunElev=-5;
	maxGunElev=15;
	weapons[]={"Cannon30","MachineGun7_6","HellfireLauncherBMP2"};
	magazines[]={"Cannon30HE","Cannon30AP","MachineGun7_6","HellfireLauncherBMP2"};
	//weapons[]={"Cannon30","PKT55","HellfireLauncherBMP2"};
	//magazines[]={"Cannon30HE","Cannon30AP","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","HellfireLauncherBMP2"};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW"};
	cargoAction[]={"ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActBMP_Cargo20","ManActBMP_Cargo15","ManActBMP_Cargo16","ManActBMP_Cargo15","ManActBMP_Cargo00","ManActBMP_Cargo03","ManActBMP_Cargo14","ManActBMP_Cargo15","ManActBMP_Cargo18","ManActBMP_Cargo15","ManActBMP_Cargo152","ManActBMP_Cargo14","ManActBMP_Cargo15","ManActBMP_Cargo21","ManActBMP_Cargo22","ManActBMP_Cargo00","ManActBMP_Cargo14"};
	armor=250;
	type=1;
	threat[]={0.9,0.7,0.3};

	soundEngine[]={"\slx_gl3\sounds\bmp_engine.wss",0.200000,1}; 
	soundEnviron[]={"\slx_gl3\sounds\light_treads.wss",0.200000,1};
	soundGetIn[]={"\slx_gl3\sounds\tank_getin.wss",0.001000,1};
	soundGetOut[]={"\slx_gl3\sounds\tank_getout.wss",0.001000,1};
	soundLandCrash[]={"\slx_gl3\sounds\tank_crash_light.wss",0.006000,1};
	soundCrash[]={"\slx_gl3\sounds\tank_crash_light.wss",0.006000,1};
	soundDammage[]={"\slx_gl3\sounds\alarm_e_tank.wss",0.001000,1};
	soundGear[]={"\slx_gl3\sounds\tank_gear.wss",0.000500,1};
	soundWaterCrash[]={"\slx_gl3\sounds\heavy_water_splash.wss",0.006000,1};

	driverAction="ManActcsla2_BMP_driverout";
	gunnerAction="ManActcsla2_BMP2_gunnerout";
	commanderAction="ManActcsla2_BMP2_commanderout";
	driverInAction="ManActBMPDriver";
	gunnerInAction="ManActBMPGunner";
	commanderInAction="ManActBMPCommander";

	class HatchDriver
		{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-120;
		};

	class HatchCommander
		{
		selection="poklop_commander";
		axis="osa_poklop_commander";
		angle=-120;
		};

	class HatchGunner
		{
		selection="poklop_gunner";
		axis="osa_poklop_gunner";
		angle=90;
		};

	class IndicatorSpeed
		{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-230;
		min=0;
		max="100 / 3.6";
		};

	class IndicatorRPM
		{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-320;
		min=0;
		max=1.2;
		};
};
*/