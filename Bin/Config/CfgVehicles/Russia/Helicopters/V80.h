/*
Sources:
	http://en.wikipedia.org/wiki/Kamov_V-80
	http://en.wikipedia.org/wiki/Kamov_Ka-50
*/

class Kamov : Helicopter
{
	access=2;
	scope=2;
	crew = "Russia_HelicopterPilot";
	picture="imi24";
	maxSpeed = 315;
	side = SIDE_EAST;
	displayName="V-80";
	nameSound="chopper";
	accuracy = ACCURACY_V80;
	cost = COST_V80;
	armor = ARMOR_V80;
	model="\O\Vehl\V80";
	rotorBig="hip_vrt_v";
	rotorBigBlend="hip_vrtblur_v";
	rotorSmall="vrthind_m";
	rotorSmallBlend="vrthind_m_bl";
	soundEngine[]={"vehicles\mi_helicopter",3.1622777,1};
	weapons[]={"2A42", "9K121", "B8V20A"};
	magazines[]={"3UBR8", "3UOF8", "9K121", "B8V20A"};
	driverOpticsModel="\o\vehl\V80_optika.p3d";
	transportSoldier=0;
	transportAmmo=0;
	type = VEHICLE_AIR;
	threat[] = {THREAT_V80};
	typicalCargo[]={"Soldier"};
	hasGunner=0;
	driverAction="ManActA10Pilot";
	
	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-45;
		maxElev=10;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Viewoptics
	{
		initAngleX=0;
		minAngleX=0;
		maxAngleX=0;
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=0.1;
		minFov=0.1;
		maxFov=1.2;
	};
	
	class Reflectors
	{
		class Left
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=1.0;
		};
	};
	
	class IndicatorAltRadar
	{
		selection="alt";
		axis="osa_alt";
		angle=-360;
		min=0;
		max=304;
	};
	
	class IndicatorAltBaro
	{
		selection="nm_alt";
		axis="osa_nm_alt";
		angle=-180;
		min=0;
		max=61;
	};
	
	class IndicatorSpeed
	{
		selection="mph";
		axis="osa_mph";
		angle=-350;
		min=0;
		max=175;
	};
	
	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=-300;
		min=-35;
		max=35;
	};
	
	class IndicatorRPM
	{
		selection="rpm";
		axis="osa_rpm";
		angle=-320;
		min=0;
		max=12;
	};
	
	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=0;
	};
	
	class EventHandlers
	{
		hit = "_this exec {\SJC_Scripts\Events\HelicopterHit.sqs};";
	};
};