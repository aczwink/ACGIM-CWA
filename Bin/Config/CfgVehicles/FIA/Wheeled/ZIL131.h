/*
Sources:
	http://en.wikipedia.org/wiki/ZIL_131
*/
class FIA_ZIL131 : SkodaBase
{
	side = SIDE_FIA;
	crew = "FIA_Soldier";
	hasDriver=1;
	hasgunner=0;
	unitInfoType="UnitInfoCar";
	scope = SCOPE_PUBLIC;
	cost = COST_ZIL131;
	displayName = "ZIL-131";
	picture = "\sjc_images\vehicles\zil131.paa";
	icon = "\sjc_images\vehicles\zil130icon.pac";
	maxSpeed = 80;
	wheelCircumference=3.400;
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	turnCoef=3.5;
	terrainCoef=4.300000;
	type = VEHICLE_ARMOR;
	armor=40;
	armorLights=0.0100000;
	armorWheels=0.050000;
	armorGlass=0.0200000;
	transportSoldier=12;
	transportMaxMagazines=50;
	transportMaxWeapons=10;
	hiddenselections[]={"n_p_1","n_p_2","n_p_3","n_p_4","n_p_a","n_p_b","n_p_c"};
	dammageHalf[] =
	{
		"\sjc_textures\zil130\steklo.paa", "\sjc_textures\zil130\steklob.paa",
		"\sjc_textures\zil130\Steklo.paa", "\sjc_textures\zil130\Steklob.paa"
	};
	dammageFull[] =
	{
		"\sjc_textures\zil130\steklo.paa", "\sjc_textures\zil130\stekloc.paa",
		"\sjc_textures\zil130\Steklo.paa", "\sjc_textures\zil130\Stekloc.paa"
	};
	model = "\sjc_models\FIA\zil131.p3d";
	sensitivity=0.100000;
	weapons[]={"ZIL131Horn"};
	soundGear[]={"\sjc_sounds\vehicles\gear.wav",db-10,1};
	soundEnviron[]={"Objects\noise",0.000562,0.250000};
	soundCrash[]={"Vehicles\crash",0.100000,1};
	soundEngine[]={"\sjc_sounds\vehicles\motor.wav",db-0.5,1.0};
	soundGetIn[]={"\sjc_sounds\vehicles\get.wav",0.55,1};
	soundGetOut[]={"\sjc_sounds\vehicles\get.wav",0.35,1};
	damperSize=0.300000;
	damperForce=5;
	CargoCastShadow = true;
	unloadInCombat=1;
	fuelCapacity=200;
	driverCastShadow = true;
	preferRoads=0;
	brakeDistance=10;
	cargoIsCoDriver[] = {true,true,false};
	cargoAction[] = {"ManActSkodaCoDriver", "ManActSkodaCoDriverBack", "ManActCargo"};
	hideWeaponsCargo = false;
	
	class IndicatorSpeed
	{
		selection = "ukaz_rychlo";
		axis = "osa_rychlo";
		angle =-205;
		min = 0;
		max = 130 / 3.4;
	};
	
	class Animations
	{
		class Fuel
		{
			type="rotation";
			animPeriod=1;
			selection="fuel";
			axis="osa fuel";
			angle0=0;
			angle1=-3.1416/5;
		};
		class temp
		{
			type="rotation";
			animPeriod=1;
			selection="temp";
			axis="osa_temp";
			angle0=0;
			angle1=-3.1416/5;
		};	
		class temp2
		{
			type="rotation";
			animPeriod=1;
			selection="temp2";
			axis="osa_temp2";
			angle0=0;
			angle1=-3.1416/5;
		};	
		class temp3
		{
			type="rotation";
			animPeriod=0.00001;
			selection="temp2";
			axis="osa_temp3";
			angle0=0;
			angle1=-3.1416/5;
		};
	};
	
	class TransportMagazines
	{
		class m_AKM
		{
			magazine = "AKM";
			count = 20;
		};

		class m_RPD
		{
			magazine = "RPD";
			count = 6;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 6;
		};
		
		class m_VOG25
		{
			magazine = "VOG25";
			count = 4;
		};

		class m_RPG2
		{
			magazine = "RPG2";
			count = 3;
		};
	};
	
	class EventHandlers
	{
		init = "[_this select 0, 1] exec {\SJC_Scripts\FIA\ZIL131\randomN.sqs}";
	};
};