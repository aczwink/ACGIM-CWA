/*
Sources:
	http://en.wikipedia.org/wiki/Su-25
*/
class Su25 : Plane
{
	scope = SCOPE_PUBLIC;
	crew = "SoldierEPilot";
	picture="\sjc_images\vehicles\su25.paa";
	side = SIDE_EAST;
	displayName="Su-25 Frogfoot";
	accuracy = ACCURACY_SU25;
	driverAction = ManActA10Pilot;
	maxSpeed = 950;
	armor = ARMOR_SU25;
	cost = COST_SU25;
	model="\sjc_models\russia\su25.p3d";
	weapons[]={Ch29TLauncher, Rocket57x64, MachineGun30A10};//TODO
	magazines[]={Ch29TLauncher, Rocket57x64, MachineGun30A10};//TODO
	fov=0.5;
	type = VEHICLE_AIR;
	threat[]={THREAT_SU25};
	
	class Reflectors
	{
		class Reflector
		{
			color[] = {0.9, 0.8, 0.8, 1.0};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 0.25;
		};
	};
	
	class IndicatorAltRadar
	{
		// max for this indicator is 1000 feet (i.e. 304m)
		// note: this is actualy Baro altitude (name is wrong)
		selection = "alt";
		axis = "osa_alt";
		angle = -340;
		min = 0;
		max = 1000;
	};
	
	class IndicatorAltRadar2
	{
		// max for this indicator is 1000 feet (i.e. 304m)
		// note: this is actualy Baro altitude (name is wrong)
		selection = "alt2";
		axis = "osa_alt2";
		angle = -340;
		min = 0;
		max = 1000;
	};
	
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 1000 / 3.6;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -240;
		min = -150;
		max = 150;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -240;
		min = -150;
		max = 150;
	};
	
	class EventHandlers
	{
		Init = "[_this select 0, 67] exec {\SJC_Scripts\vehicleTODO.sqs}";
	};
};