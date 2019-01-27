/*
Sources:
	http://en.wikipedia.org/wiki/Nimitz_class_aircraft_carrier
In service: 1975-present
*/
class USA_NimitzClass : Strategic //TODO
{
	unitInfoType = UNITINFO_SHIP;
	nameSound="ship";
	cost = COST_NIMITZCLASS;
	accuracy = ACCURACY_NIMITZCLASS;
	vehicleClass = "Vehicles (Ships)";
	side=1;
	simulation="house";
	icon = "\sjc_images\vehicles\nimitzicon.paa";
	model="\sjc_models\usa\nimitzclass.p3d";
	armor = ARMOR_NIMITZCLASS;
	scope=2;
	displayName="Nimitz class Aircraft Carrier";
	destrType="DESTRUCT_ENGINE";
	mapSize=360;
	
	class Animations
	{
		class radar2
		{
			type="rotation";
			animPeriod=20;
			selection="radar2";
			axis="os_radar2";
			angle0=0;
			angle1=-15.7;
		};
		
		class katapulta1
		{
			type="rotation";
			animPeriod=5;
			selection="katapulta1";
			axis="os_katapulta1";
			angle0=0;
			angle1=1.5;
		};
		
		class katapulta2
		{
			type="rotation";
			animPeriod=5;
			selection="katapulta2";
			axis="os_katapulta2";
			angle0=0;
			angle1=-1.5;
		};
	};
	
	class UserActions
	{
		//TODO
		/*class katapult1
		{
			displayName="$STR_nimitz_kat1";
			position="katpos1";
			radius=4;
			condition="(this animationphase ""katapulta1"" == 0) && (this animationphase ""katapulta2"" == 0) && (player != vehicle player) && (speed vehicle player < 15)";
			statement="[(vehicle player),this] exec {\hwk_uss_Nimitz\script\katapult1.sqs}";
		};
		
		class katapult2
		{
			displayName="$STR_nimitz_kat2";
			position="katpos2";
			radius=4;
			condition="(this animationphase ""katapulta1"" == 0) && (this animationphase ""katapulta2"" == 0) && (player != vehicle player) && (speed vehicle player < 15)";
			statement="[(vehicle player),this] exec {\hwk_uss_Nimitz\script\katapult2.sqs}";
		};
		
		class landing
		{
			displayName="$STR_nimitz_land03";
			position="landpos1";
			radius=500;
			condition="(this animationphase ""landlock1"" == 0) && (player != vehicle player) && (speed vehicle player < 300) && (getpos player select 2 > 5)";
			statement="[(vehicle player),this,18,20] exec {\hwk_uss_Nimitz\script\land.sqs}";
		};*/
	};
	
	class EventHandlers
	{
		Init = "[_this select 0, 178] exec {\SJC_Scripts\vehicleTODO.sqs}";
		//TODO
		//init ="[(_this Select 0)] exec {\hwk_uss_Nimitz\script\build.sqs};[(_this Select 0),""radar2""] exec {\hwk_uss_Nimitz\script\radar.sqs}";
		//killed = "(_this select 0) exec {\hwk_uss_Nimitz\script\fire.sqs}";
	};
};