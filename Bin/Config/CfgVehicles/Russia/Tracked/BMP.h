/*
Sources:
	http://en.wikipedia.org/wiki/BMP-1
*/
class BMP : APC
{
	displayName = "BMP-1";
	crew = "SoldierECrew";
	scope=2;
	side=0;
	nameSound="BMP";
	picture="ibmp";
	accuracy = ACCURACY_BMP1;
	maxSpeed = 65;
	transportSoldier=8;
	transportAmmo=0;
	cost = COST_BMP1;
	forceHideGunner=0;
	canFloat=1;
	ejectdeadcargo=1;
	minGunElev=-5;
	maxGunElev=15;
	typicalCargo[]={"Soldier","Soldier","SoldierLAW"};
	formationX=75;
	type=1;
	threat[]={THREAT_BMP1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\BVP_Treads.wav",3.1622777,1};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\BVP_Engine.wav",1,1};
	driverAction="ManActCSLA2_BMP_driverout";
	gunnerAction="ManActCSLA2_BMP_gunnerout";
	commanderAction="ManActCSLA2_BMP_commanderout";
	driverInAction="ManActBMPDriver";
	gunnerInAction="ManActBMPGunner";
	commanderInAction="ManActBMPCommander";
	armor = ARMOR_BMP1;
	model="\d4t_files\models\russia\vehicles\bmp1.p3d";
	icon="bmp";
	weapons[]={"2A28Grom", "PKT_2000", "9K11Malyutka"};
	magazines[]={"PG15V", "OG15V", "PKT_2000", "9K11Malyutka"};
	hiddenSelections[]={"cislo1","cislo2","cislo3","blatnik","plachta","brvno","znak1","sign","csla"};
	cargoAction[]={"ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo"};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=180;
	};

	class HatchCommander
	{
		selection="poklop_commander";
		axis="osa_poklop_commander";
		angle=-90;
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
		angle=-150;
		min=0;
		max="40 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-230;
		min=0;
		max=1;
	};

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
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
	};

	class EventHandlers
	{
		Init = "_this exec ""\d4t_files\FX\scripts\vehicles\bmp\randomnumber_rus.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\bmp\bmp1_parts.sqs"";";
		fired = "[_this select 0, _this select 1, _this select 4, [{2A28Grom}]] exec {\SJC_Scripts\Events\Fire_Gun.sqs};";
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};

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