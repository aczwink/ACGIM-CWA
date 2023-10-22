/*
Sources:
http://en.wikipedia.org/wiki/CH-47
In service: 1979-(unsure, at least til 2008: present)
*/
class Ch47D : Helicopter
{
	scope = SCOPE_PUBLIC;
	crew= "USA_HelicopterPilot";
	picture = "\ch47\ich47.paa";
	maxSpeed = 315;
	side=1;
	displayName="CH-47D Chinook";
	accuracy = ACCURACY_CH47D;
	armor = ARMOR_CH47D;
	cost = COST_CH47D;
	model = "\ch47\ch-47d";
	rotorBig = vrtule_uh_v;
	rotorBigBlend = vrtule_uh_v_bl;
	rotorSmall = vrtule_uh_m;
	rotorSmallBlend = vrtule_uh_m_bl;
	gunnerOpticsModel = "optika_empty";
	soundEngine[]={\Ch47\ch47engine,db+10,1.0};
	weapons[]={"M2HBBrowning"};
	magazines[]={"M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning", "M2HBBrowning"}; //No Proof how many mags are carried.
	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		//soundServo[]={Vehicles\gun_elevate,db-40,1.0};
		soundServo[]={,db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		minElev=-42; maxElev=+5;
		minTurn=30; maxTurn=150;
		body = "OtocVez";
		gun = "OtocHlaven";
	}
	driverAction = ManActUH60Pilot;
	gunnerAction = ManActCh47Gunner;
	gunnerUsesPilotView = true;
	transportSoldier = 24;
	transportAmmo = 0;
	initCargoAngleY=+10; // cargo viewing limitations
	minCargoAngleY=-60;
	maxCargoAngleY=+120;
	type = VEHICLE_AIR;
	threat[]={THREAT_CH47D};
	typicalCargo[]={Soldier, Soldier, SoldierLAW, SoldierLAW};
	
	class Reflectors
	{
		class Left
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 1.0;
		};
		
		class Right
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 0.5;
			brightness = 1.0;
		};
	};
	
	class IndicatorAltRadar
	{
		// max for this indicator is 1000 feet (i.e. 304m)
		// note: this is actualy Baro altitude (name is wrong)
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 304;
	};
	
	class IndicatorAltBaro
	{
		// max for this indicator is 200 feet (i.e. 61m)
		// note: this is actualy Radar altitude (name is wrong)
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -180;
		min = 0;
		max = 61;
	};
	
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 175;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -300;
		min = -30;
		max = 30;
	};
	
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -320;
		min = 0;
		max = 12;
	};
	
	class IndicatorAltRadar2
	{
		// max for this indicator is 1000 feet (i.e. 304m)
		// note: this is actualy Baro altitude (name is wrong)
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 304;
	};
	
	class IndicatorAltBaro2
	{
		// max for this indicator is 200 feet (i.e. 61m)
		// note: this is actualy Radar altitude (name is wrong)
		selection = "nm_alt2";
		axis = "osa_nm_alt2";
		angle = -180;
		min = 0;
		max = 61;
	};
	
	class IndicatorSpeed2
	{
		selection = "mph2";
		axis = "osa_mph2";
		angle = -350;
		min = 0;
		max = 175;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -300;
		min = -30;
		max = 30;
	};
	
	class IndicatorRPM2
	{
		selection = "rpm2";
		axis = "osa_rpm2";
		angle = -320;
		min = 0;
		max = 12;
	};

	class EventHandlers
	{
		fired = "_this call loadFile {\acgim_scripts\Events\MGbullet.sqf}";
		//does not have a sidemounted tail rotor
	};
};