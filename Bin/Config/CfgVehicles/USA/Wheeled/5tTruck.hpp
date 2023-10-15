//TOOD: desert versions

/*
Sources:
	https://en.wikipedia.org/wiki/M939_Truck
In service: 1982-present
*/

class USA_Truck5t : Truck
{
	scope=2;
	crew = "USA_Soldier";
	picture="itruck5t";
	icon="truck";
	model="\d4t_files\models\us\vehicles\5t_woodland.p3d";
	hiddenSelections[]={"ammo"};
	side=1;
	displayName="M939 5t Truck";
	accuracy = ACCURACY_TRUCK5T;
	fuelCapacity=200;
	transportSoldier=12;
	driverAction="ManActTruck5tDriver";
	cargoAction[]={"ManActTruck5tCoDriver","ManActTruck5tCoDriver","ManActCargo"};
	cargoIsCoDriver[]={1,1,0};
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	camouflage=5;
	weapons[]={"TruckHorn"};
	magazines[]={};
	wheelCircumference=4.513;
	turnCoef=6.0;
	maxSpeed=90;
	cost = COST_TRUCK5T;
	armorGlass=5.500000;
	armor = ARMOR_TRUCK5T;
	armorWheels=0.400000;
	initCargoAngleY=185;
	soundEngine[]={"Vehicles\dieseltruckloop2",0.5,1};
	soundGear[]={"\d4t_files\sounds\vehicles\surface\Gear_2.wav",db-45,0.7};
	soundGetIn[]={"\d4t_files\sounds\vehicles\surface\getin.ogg",0.000716,1};
    soundGetOut[]={"\d4t_files\sounds\vehicles\surface\getout.ogg",0.000716,1};
    soundCrash[]={"\d4t_files\sounds\vehicles\surface\crash.wss",db-20,1};
	insideSoundCoef=1;
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

	class TransportMagazines
	{
		class m_M16A2
		{
			magazine = WEAPON_REFERENCE(M16A2);
			count=20;
		};

		class m_M60
		{
			magazine = "M60";
			count=6;
		};

		class m_M67
		{
			magazine = "M67";
			count=6;
		};

		class m_M72LAW
		{
			magazine = "M72LAW";
			count=3;
		};

		class m_M406HEFR
		{
			magazine = "M406HEFR";
			count=4;
		};
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-210;
		min=0;
		max="100 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-220;
		min=0;
		max=1;
	};

	class EventHandlers
	{
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Car_Burner.sqs}";
	};
};

class USA_Truck5tOpen : USA_Truck5t
{
	model="\d4t_files\models\us\vehicles\5t_open_woodland.p3d";
	hiddenSelections[]={};
	camouflage=3;
	displayName="5t Truck open";
};

class USA_Truck5tRepair : USA_Truck5t
{
	picture="itruck5trepair";
	icon="Repair_move";
	displayName="5t Truck Repair";
	accuracy = ACCURACY_TRUCK5TREPAIR;
	transportSoldier=2;
	transportRepair=200000000;
	model="\d4t_files\models\us\vehicles\5t_repair_woodland.p3d";
	camouflage=4;
	hiddenSelections[]={};
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	cost = COST_TRUCK5TREPAIR;

	class TransportMagazines{};
};

class USA_Truck5tReammo : USA_Truck5t
{
	icon="Ammo_move";
	displayName="5t Truck Ammo";
	accuracy = ACCURACY_TRUCK5TREAMMO;
	transportSoldier=2;
	transportAmmo=300000;
	model="\d4t_files\models\us\vehicles\5t_woodland.p3d";
	hiddenSelections[]={};
	cost = COST_TRUCK5TREAMMO;
	camouflage=4;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};

	class TransportMagazines
	{
		class m_M16A2
		{
			magazine = WEAPON_REFERENCE(M16A2);
			count=40;
		};

		class m_M60
		{
			magazine = "M60";
			count = 25;
		};

		class m_M67
		{
			magazine = "M67";
			count=30;
		};

		class m_M72LAW
		{
			magazine = "M72LAW";
			count=10;
		};

		class m_M406HEFR
		{
			magazine = "M406HEFR";
			count=15;
		};
	};
};

class USA_Truck5tRefuel : USA_Truck5t
{
	picture="iTruck5tfuel";
	icon="Fuel_move";
	displayName="5t Truck Fuel";
	nameSound="truck";
	accuracy = ACCURACY_TRUCK5TREFUEL;
	transportFuel=3000;
	transportSoldier=2;
	transportAmmo=0;
	model="\d4t_files\models\us\vehicles\5t_fuel_woodland.p3d";
	hiddenSelections[]={};
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	cost = COST_TRUCK5TREFUEL;
	camouflage=3;

	class TransportMagazines{};

	class EventHandlers
	{
		Init = "[_this select 0, 187] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO: (also burner or is this included?)
		//killed = "([_this select 0]) exec {\d4t_files\FX\scripts\FuellEffect\Init.sqs}";
	};
};