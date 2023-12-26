/*
Sources:
	http://en.wikipedia.org/wiki/Bell_AH-1_Cobra
	http://www.globalsecurity.org/military/systems/aircraft/ah-1s.htm
In service: late 1979-2001
*/
class Cobra : Helicopter
{
	picture="\d4t_files\pics\vehicles\ah1f.paa";
	uipicture="\d4t_files\pics\vehicles\ah1f.paa";
	crew = "SoldierWPilotHG";
	scope=2;
	side=1;
	displayName="AH-1F Cobra (USAF)";
	nameSound="cobra";
	accuracy=0.2;
	gunnerUsesPilotView=0;
	driverAction = ManActAH1Pilot;
	gunnerAction = ManActAH1Gunner;
	maxSpeed = 277;
	armor = ARMOR_AH1F;
	cost = COST_AH1F;
	model="\d4t_files\models\us\vehicles\ah1f.p3d";
	weapons[]={"M197Gatling", "BGM71TOW", "Hydra70_38"};
	magazines[]={"M197Gatling", "BGM71TOW", "Hydra70_38"};
    rotorBig="vrtule_velka"; 
	rotorBigBlend="vrtule_velka_bl_"; 
	rotorSmall="vrtule_mala"; 
	rotorSmallBlend="vrtule_mala_bl";
	soundEngine[]={"\sjc_sounds\vehicles\ah1cobra.wss",7.333333,1};
	type = VEHICLE_AIR;
	threat[]={THREAT_AH1F};

	class ReloadAnimations
	{
		class M197Gatling
		{
			weapon = "M197Gatling";
			angle0=0;
			angle1="-2 * 3.141592654";
			multiplier=500;
			type="rotation";
			animPeriod=1;
			selection="gatling";
			begin="usti hlavne";
			end="konec hlavne";
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
		angle=-320;
		min=0;
		max=125;
	};

	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=-300;
		min=-30;
		max=30;
	};

	class IndicatorRPM
	{
		selection="rpm";
		axis="osa_rpm";
		angle=-320;
		min=0;
		max=12;
	};

	class EventHandlers
	{
		hit = "_this exec {\SJC_Scripts\Events\HelicopterHit.sqs};";
	};
};