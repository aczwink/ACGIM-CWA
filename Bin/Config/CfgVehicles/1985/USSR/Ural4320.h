/*
Sources:
	http://en.wikipedia.org/wiki/Ural-4320
*/
class USSR_Ural4320 : Truck
{
	scope=2;
	crew = "USSR_Soldier";
	picture="iural";
	icon="truck";
	side=0;
	displayName="Ural-4320 closed";
	accuracy = ACCURACY_URAL4320;
	maxSpeed = 82;
	wheelCircumference=4.513000;
	turnCoef=6.000000;
	driverAction = "ManActDLEMural375Driver";
	cargoAction[] = {"ManActDLEMural375CARGO1","ManActDLEMural375CARGO2","ManActDLEMural375CARGO","ManActDLEMural375CARGO4","ManActDLEMural375CARGO","ManActDLEMural375CARGO3","ManActDLEMural375CARGO","ManActDLEMural375CARGO3","ManActDLEMural375CARGO4","ManActDLEMural375CARGO"};
	cargoIsCoDriver[]={1,1,0};
	transportSoldier=10;
	transportAmmo=0;
	transportRepair=0;
	weapons[]={"TruckHorn"};
	magazines[]={};
	cost = COST_URAL4320;
	armor = ARMOR_URAL4320;
	model="\sjc_models\ussr\ural4320.p3d";
	hiddenSelections[]={"ammo"};
	initCargoAngleY=185;
	soundEngine[]={"\sjc_sounds\vehicles\Ural_yamz236.wav",2.100000,0.950000};
	soundEnviron[]={"\sjc_sounds\vehicles\Ural_move2.wav",1.930000,1};
	soundGear[]={"\sjc_sounds\vehicles\Ural_gear.wav",0.191000,1};
	soundGetIn[]={"\sjc_sounds\vehicles\Ural_door.wav",0.351000,1};
	soundGetOut[]={"\sjc_sounds\vehicles\Ural_door.wav",0.251000,1};
	dammageHalf[]={"\sjc_textures\ural\in5okno.paa", "\sjc_textures\ural\in5okno1.paa"};
	dammageFull[]={"\sjc_textures\ural\in5okno.paa", "\sjc_textures\ural\in5okno1.paa"};
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-230;
		min=0;
		max=100 / 3.4;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-280;
		min=0;
		max=2;
	};

	class TransportMagazines
	{
		class m_AK74
		{
			magazine = "AK74";
			count = 20;
		};

		class m_PKM
		{
			magazine = "PKM";
			count = 6;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 6;
		};

		class m_PG7VL
		{
			magazine = "PG7VL";
			count = 3;
		};

		class m_VOG25
		{
			magazine = "VOG25";
			count = 4;
		};

		class m_TokarevMag
		{
			magazine = "TokarevMag";
			count = 8;
		};
	};

	class EventHandlers
	{
		//TODO
		//killed = "_this exec ""\SFM_URALS\Scripts\uralkilled.sqs""";
	};
};

class USSR_Ural4320Open : USSR_Ural4320
{
	displayName="Ural-4320 open";
	model="\sjc_models\ussr\ural4320_open.p3d";
};

class USSR_Ural4320Repair : USSR_Ural4320
{
	picture="iuralrepair";
	icon="Repair_move";
	displayName="Ural-4320 repair";
	accuracy = ACCURACY_URAL4320REPAIR;
	model="\sjc_models\ussr\ural4320_repair.p3d";
	hiddenSelections[]={};
	transportSoldier=2;
	transportRepair=200000000;
	weapons[]={};
	magazines[]={};
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320REPAIR};
	typicalCargo[]={};
	soundEnviron[]={"\sjc_sounds\vehicles\Ural_move.wav",1.930000,1};

	class TransportMagazines{};
};

class USSR_Ural4320Reammo : USSR_Ural4320
{
	icon="Ammo_move";
	displayName="Ural-4320 ammo";
	accuracy = ACCURACY_URAL4320REAMMO;
	transportSoldier=2;
	transportAmmo=300000;
	model="\sjc_models\ussr\ural4320_ammo.p3d";
	hiddenSelections[]={};
	weapons[]={};
	magazines[]={};
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320REAMMO};

	class TransportMagazines//TODO
	{
		class m_AK74
		{
			magazine = "AK74";
			count = 40;
		};

		class m_PKM
		{
			magazine = "PKM";
			count = 25;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 30;
		};

		class m_PG7VL
		{
			magazine = "PG7VL";
			count = 10;
		};

		class m_VOG25
		{
			magazine = "VOG25";
			count = 15;
		};

		class m_TokarevMag
		{
			magazine = "TokarevMag";
			count = 16;
		};

		class m_MineE
		{
			magazine = "MineE";
			count = 3;
		};

		class m_RPG18
		{
			magazine = "RPG18";
			count = 4;
		};

		class m_9K32
		{
			magazine = "9K32";
			count = 1;
		};
	};
};

class USSR_Ural4320Refuel : USSR_Ural4320
{
	picture="iuralfuel";
	icon="Fuel_move";
	displayName="Ural-4320 refuel";
	accuracy = ACCURACY_URAL4320REFUEL;
	model="\sjc_models\ussr\ural4320_refuel.p3d";
	hiddenSelections[]={};
	weapons[]={};
	magazines[]={};
	transportFuel=3000;
	transportSoldier=2;
	transportAmmo=0;
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320REFUEL};
	soundEnviron[]={"\sjc_sounds\vehicles\Ural_move.wav",1.930000,1};
};