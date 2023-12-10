
/*
Sources:
http://de.wikipedia.org/wiki/ZIL-130
*/
class TruckV3SGRepair : TruckV3SG
{
	displayName = "ZIL-130 Repair";
	picture = "\tex\zil130_iconammo.paa";
	fuelCapacity = 150;
	terrainCoef = 4.500000;
	armor = 25;
	armorWheels = 0.040000;
	transportSoldier = 2;
	weapons[] = {"ZIL130Horn"};
	damperForce = 8;
	transportRepair = 200000000;
	model = "\models\zil130ARepair.p3d";

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
};

class FIA_ZIL130Reammo : TruckV3SGRepair
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

	class EventHandlers
	{
		init = "[_this select 0,1,0] exec {\acgim_scripts\Vehicles\zil130\Global_Check.sqs}";
		killed = "_this exec {\acgim_scripts\Events\ExplosivesCarrierDestroyed.sqs}";
		engine= "_this exec ""\acgim_scripts\Vehicles\zil130\IsEngine.sqs""; [_this select 0,1,0] exec ""\acgim_scripts\Vehicles\zil130\Global_Check.sqs"";";
		getin = "[_this select 0,1,0] exec {\acgim_scripts\Vehicles\zil130\Global_Check.sqs}";
		getout = "[_this select 0,1,0] exec {\acgim_scripts\Vehicles\zil130\Global_Check.sqs}";
	};
};