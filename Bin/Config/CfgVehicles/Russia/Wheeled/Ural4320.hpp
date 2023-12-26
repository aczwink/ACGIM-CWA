/*
Sources:
	http://en.wikipedia.org/wiki/Ural-4320
*/
class Ural : Truck
{
	scope=2;
	crew = "SoldierEB";
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
	model="\models\ural4320_closed.p3d";
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
			magazine = WEAPON_REFERENCE(PKM);
			count = 6;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 6;
		};

		class m_RPG18
		{
			magazine = WEAPON_REFERENCE(RPG18);
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
		killed = "_this exec ""\acgim_scripts\Vehicles\Ural4320\uralkilled.sqs""";
	};
};

class Ural_Open : Ural
{
	displayName="Ural-4320 open";
	model="\models\ural4320_open.p3d";
};

class UralRepair : Ural
{
	picture="iuralrepair";
	icon="Repair_move";
	displayName="Ural-4320 repair";
	accuracy = ACCURACY_URAL4320REPAIR;
	model = "\models\ural4320_repair.p3d";
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

class UralReammo : Ural
{
	icon="Ammo_move";
	displayName="Ural-4320 ammo";
	accuracy = ACCURACY_URAL4320REAMMO;
	transportSoldier=2;
	transportAmmo=300000;
	model="\models\ural4320_ammo.p3d";
	hiddenSelections[]={};
	weapons[]={};
	magazines[]={};
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320REAMMO};

	class TransportMagazines
	{
		class m_AK74
		{
			magazine = "AK74";
			count = 40;
		};

		class m_PKM
		{
			magazine = WEAPON_REFERENCE(PKM);
			count = 25;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 30;
		};

		class m_RPG18
		{
			magazine = WEAPON_REFERENCE(RPG18);
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

		class m_9K32Launcher
		{
			magazine = "9K32Launcher";
			count = 1;
		};
	};
};

class UralRefuel : Ural
{
	picture="iuralfuel";
	icon="Fuel_move";
	displayName="Ural-4320 refuel";
	accuracy = ACCURACY_URAL4320REFUEL;
	model="\models\ural4320_GAS.p3d";
	hiddenSelections[]={};
	weapons[]={};
	magazines[]={};
	transportFuel=3000;
	transportSoldier=2;
	transportAmmo=0;
	type = VEHICLE_SOFT;
	threat[]={THREAT_URAL4320REFUEL};
	soundEnviron[]={"\sjc_sounds\vehicles\Ural_move.wav",1.930000,1};

	class EventHandlers
	{
		killed = "_this exec ""\acgim_scripts\Vehicles\Ural4320\uralkilled.sqs""";
	};
};



class UralWreck : Car
{
	model="\models\ural4320_dead.p3d";
	vehicleClass="Objects (Wrecks)";
	displayName="Ural-4320 wreck";
	scope=2
	mapSize=0.700000;
	transportSoldier=1;
	hasdriver=0;
	hasgunner=0;
	hascommander=0;
	accuracy=0.300000;
	transportFuel=0
	destrType="DestructEngine";
	armor=900000;
	cargoAction[] = {"ManActDLEMuralDEADCARGO1"};
};
class World_Ural4320Open_Wreck: UralWreck
{
	model="\models\ural4320_op_dead.p3d";
	displayName="Ural-4320 (open) wreck";
};
class World_Ural4320Refuel_Wreck : UralWreck
{
	model="\models\ural4320_GAS_dead.p3d";
	displayName="Ural-4320 refuel wreck";	
};
class World_Ural4320Repair_Wreck : UralWreck
{
	model="\models\ural4320_repair_dead.p3d";
	displayName="Ural-4320 Repair wreck";
};

//Wreck parts - All these are vehicle additions
class Ural_Bag : Thing
{
	model="\models\ural375_dead_bag.p3d";
	armor=100000;
	scope=2;
	simulation="thing";
	mapSize=0.700000;
	displayName="Ural_Bag";
	accuracy=0.200000;
	destrType="DestructEngine";
};
class Ural_cist : Ural_Bag
{
	model="\models\Ural_dead_cist.p3d";
	displayName="Ural_cist";
};
class Ural_dver : Ural_Bag
{
	model="\models\ural375_dead_dver.p3d";
	displayName="Ural_dver";
};
class Ural_dverl: Ural_Bag
{
	model="\models\ural375_dead_dverL.p3d";
	displayName="Ural_dverl";
};
class Ural_jasik: Ural_Bag
{
	model="\models\ural375_dead_jasik.p3d";
	displayName="Ural_jasik";
};
class Ural_koles : Ural_Bag
{
	model="\models\ural375_dead_koles.p3d";
	displayName="Ural_koles";
};
class Ural_palki1: Ural_Bag
{
	model="\models\ural375_dead_palki1.p3d";
	displayName="Ural_palki1";
};
class Ural_palki2: Ural_Bag
{
	model="\models\ural375_dead_palki2.p3d";
	displayName="Ural_palki2";
};
class Ural_zerk: Ural_Bag
{
	model="\models\ural375_dead_zerk.p3d";
	displayName="Ural_zerk";
};