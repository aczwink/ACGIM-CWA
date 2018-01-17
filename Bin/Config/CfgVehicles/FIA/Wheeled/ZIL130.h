
/*
Sources:
http://de.wikipedia.org/wiki/ZIL-130
*/
class FIA_ZIL130Refuel : FIA_ZIL131
{
	displayName = "ZIL-130 Fuel";
	icon = "Fuel_move";
	picture = "\sjc_images\vehicles\zil130fuel.paa";
	maxSpeed = 85;
	fuelCapacity = 150;
	transportFuel = 3000;
	hiddenselections[] = {"Mig_l","Mig_p","n_p_1","n_p_2","n_p_3","n_p_4","n_p_a","n_p_b","n_p_c"};
	armor = 20;
	armorWheels = 0.040000;
	transportSoldier = 2;
	weapons[] = {"ZIL130Horn"};
	damperForce = 8;
	model = "\sjc_models\FIA\zil130fuel.p3d";

	class IndicatorSpeed
	{
		selection = "ukaz_rychlo";
		axis = "osa_rychlo";
		angle = -205;
		min = 0;
		max = 130 / 3.4;
	};

	class Animations
	{
		class Mig_p
		{
			type = "rotation";
			animPeriod = 600;
			selection = "Mig_p";
			axis = "mig_osa_p";
			angle0 = 0;
			angle1 = 11304;
		};

		class Mig_l
		{
			type = "rotation";
			animPeriod = 600;
			selection = "Mig_l";
			axis = "mig_osa_l";
			angle0 = 0;
			angle1 = 11304;
		};

		class Fuel
		{
			type = "rotation";
			animPeriod = 1;
			selection = "fuel";
			axis = "osa fuel";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp
		{
			type = "rotation";
			animPeriod = 1;
			selection = "temp";
			axis = "osa_temp";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp2
		{
			type = "rotation";
			animPeriod = 1;
			selection = "temp2";
			axis = "osa_temp2";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp3
		{
			type = "rotation";
			animPeriod = 0.00001;
			selection = "temp2";
			axis = "osa_temp3";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};
	};

	class TransportMagazines {};

	class EventHandlers
	{
		//TODO
		/*init = [_this select 0,0,2] exec "\OWP_ZIL_Scripts\Global_Check.sqs";
		engine= "_this exec ""\OWP_ZIL_Scripts\IsEngine.sqs""; [_this select 0,0,2] exec ""\OWP_ZIL_Scripts\Global_Check.sqs"";";
		getin=[_this select 0,0,2] exec "\OWP_ZIL_Scripts\Global_Check.sqs";
		getout=[_this select 0,0,2] exec "\OWP_ZIL_Scripts\Global_Check.sqs";*/
	};
};

class FIA_ZIL130Repair : FIA_ZIL131
{
	displayName = "ZIL-130 Repair";
	picture = "\sjc_images\vehicles\zil130repairammo.paa";
	fuelCapacity = 150;
	terrainCoef = 4.500000;
	armor = 25;
	armorWheels = 0.040000;
	transportSoldier = 2;
	weapons[] = {"ZIL130Horn"};
	damperForce = 8;
	transportRepair = 200000000;
	model = "\sjc_models\FIA\zil130repairammo.p3d";

	class IndicatorSpeed
	{
		selection = "ukaz_rychlo";
		axis = "osa_rychlo";
		angle = -205;
		min = 0;
		max = 130 / 3.4;
	};

	class Animations
	{
		class Fuel
		{
			type = "rotation";
			animPeriod = 1;
			selection = "fuel";
			axis = "osa fuel";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp
		{
			type = "rotation";
			animPeriod = 1;
			selection = "temp";
			axis = "osa_temp";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp2
		{
			type = "rotation";
			animPeriod = 1;
			selection = "temp2";
			axis = "osa_temp2";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};

		class temp3
		{
			type = "rotation";
			animPeriod = 0.00001;
			selection = "temp2";
			axis = "osa_temp3";
			angle0 = 0;
			angle1 = -3.1416 / 5;
		};
	};

	class TransportMagazines {};

	class EventHandlers
	{
		//TODO
		/*init = [_this select 0,1,0] exec "\OWP_ZIL_Scripts\Global_Check.sqs";
		engine= "_this exec ""\OWP_ZIL_Scripts\IsEngine.sqs""; [_this select 0,1,0] exec ""\OWP_ZIL_Scripts\Global_Check.sqs"";";
		getin=[_this select 0,1,0] exec "\OWP_ZIL_Scripts\Global_Check.sqs";
		getout=[_this select 0,1,0] exec "\OWP_ZIL_Scripts\Global_Check.sqs";*/
	};
};

class FIA_ZIL130Reammo : FIA_ZIL130Repair
{
	displayName = "ZIL-130 Reammo";
	transportAmmo = 300000;
	transportRepair = 0;

	class TransportMagazines
	{
		class m_AKM
		{
			magazine = "AKM";
			count = 40;
		};

		class m_RPD
		{
			magazine = "RPD";
			count = 25;
		};

		class m_RGO
		{
			magazine = "RGO";
			count = 30;
		};

		class m_VOG25
		{
			magazine = "VOG25";
			count = 15;
		};

		class m_RPG2
		{
			magazine = "RPG2";
			count = 10;
		};
	};
};