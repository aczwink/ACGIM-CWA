/*
Sources:
	http://en.wikipedia.org/wiki/Mi-24
*/
class Russia_Mi24 : Helicopter
{
	displayName = "Mi-24V Hind";
	picture="\sjc_textures\mi24\picture.paa";
	fuelCapacity=1000;
	model="\sjc_models\russia\mi24.p3d";
	weapons[]={"YakB", "9K114", "UB32"};
	magazines[]={"YakB", "9K114", "S5K"};
	scope=2;
	icon="\sjc_textures\mi24\icon.paa";
	mapSize=20;
	crew = "Russia_HelicopterPilot";
	maxSpeed = 335;
	side = SIDE_EAST;
	nameSound="hind";
	accuracy = ACCURACY_MI24V;
	cost = COST_MI24V;
	armor = ARMOR_MI24V;
	transportSoldier=8;
	transportAmmo=0;
	type = VEHICLE_AIR;
	threat[]={THREAT_MI24V};
	typicalCargo[]={"Soldier","SoldierLAW"};
	driverAction="ManActMi24Pilot";
	gunnerAction="ManActMi24Gunner";
	soundEngine[]={"\sjc_sounds\vehicles\engine.wss",3,1};
	soundGetIn[]={"\sjc_sounds\vehicles\get_in.wss",0.03,1};
	soundGetOut[]={"\sjc_sounds\vehicles\get_out.wss",0.03,1};
	hiddenSelections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
	
	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={""};
		body="OtocVez";
		gun="OtocHlaven";
		minElev=-40;
		maxElev=10;
		minTurn=-30;
		maxTurn=30;
	};
	
	class ReloadAnimations
	{
		class YakB
		{
			weapon = "YakB";
			angle0 = 0;
			angle1 = -2 * 3.141592654;
			multiplier = 500;
			type = rotation;
			animPeriod = 1;
			selection = gatling;
			begin = "usti hlavne";
			end = "konec hlavne";
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
		angle=-300;
		min=0;
		max=700;
	};
	
	class IndicatorSpeed
	{
		selection="mph";
		axis="osa_mph";
		angle=-300;
		min=0;
		max=105;
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
		angle=-330;
		min=0;
		max=8;
	};
	
	class IndicatorCompass
	{
		selection="kompas";
		axis="osa_kompas";
		angle=-360;
		min=-3.141593;
		max=3.141593;
	};
	
	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=1;
	};
	
	class IndicatorRPM2
	{
		selection="rpm2";
		axis="osa_rpm2";
		angle=-330;
		min=0;
		max=8;
	};
	
	class IndicatorCompass2
	{
		selection="kompas2";
		axis="osa_kompas2";
		angle=-360;
		min=-3.141593;
		max=3.141593;
	};
	
	class Reflectors
	{
		class Left
		{
			color[]={0.800000,0.800000,1.000000,1.000000};
			ambient[]={0.070000,0.070000,0.070000,1.000000};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.500000;
			brightness=1.000000;
		};
	};
	
	class Animations
	{
		class gearL
		{
			type="rotation";
			animperiod = 1;
			selection ="gearL";
			axis = "osa_gearL";
			angle0=0;
			angle1=0.8;
		};
		
		class gearR
		{
			type="rotation";
			animperiod = 1;
			selection ="gearR";
			axis = "osa_gearR";
			angle0=0;
			angle1=-0.8;
		};
		
		class gearF
		{
			type="rotation";
			animperiod = 1;
			selection ="gearF";
			axis = "osa_gearF";
			angle0=0;
			angle1=-1.3;
		};

		class gcL
		{
			type = "rotation";
			animperiod = 1;
			selection ="gcL";
			axis = "osa_gcL";
			angle0 = 0;
			angle1= 1.8;
		};
		
		class gcR
		{
			type = "rotation";
			animperiod = 1;
			selection ="gcR";
			axis = "osa_gcR";
			angle0 = 0;
			angle1= -1.8;
		};
		
		class gcF
		{
			type = "rotation";
			animperiod = 1;
			selection ="gcF";
			axis = "osa_gcF";
			angle0 = 0;
			angle1= -2.5;
		};
		
		class rightgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="gearR2";
			axis = "osa_gearR2";
			angle0 = 0;
			angle1= -0.296705;
		};
		
		class leftgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="gearL2";
			axis = "osa_gearL2";
			angle0 = 0;
			angle1= -0.296705;
		};
		
		class frontgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="gearF2";
			axis = "osa_gearF2";
			angle0 = 0;
			angle1= -0.296705;
		};
		
		class Pdoor
		{
			type="rotation";
			animPeriod=0.5;
			selection="pdoor";
			axis="osa_pdoor";
			angle0=0;
			angle1=1.0;
		};
		
		class Gdoor
		{
			type="rotation";
			animPeriod=0.5;
			selection="gdoor";
			axis="osa_gdoor";
			angle0=0;
			angle1=-1.3;
		};
		
		class Rtdoor
		{
			type="rotation";
			animPeriod=1;
			selection="rtdoor";
			axis="osa_rtdoor";
			angle0=0;
			angle1=-1.5;
		};
		
		class Rudoor
		{
			type="rotation";
			animPeriod=1;
			selection="rudoor";
			axis="osa_rudoor";
			angle0=0;
			angle1=2.3;
		};
		
		class Ltdoor
		{
			type="rotation";
			animPeriod=1;
			selection="ltdoor";
			axis="osa_ltdoor";
			angle0=0;
			angle1=1.5;
		};
		
		class Ludoor
		{
			type="rotation";
			animPeriod=1;
			selection="ludoor";
			axis="osa_ludoor";
			angle0=0;
			angle1=-2.3;
		};
		
		class flareTrigger
		{
			type ="rotation";
			animPeriod =.1;
			selection ="flaretrigger";
			axis ="os flare";
			angle0 =0;
			angle1 =-.45;
		};

		class cabinlight
		{
			type ="rotation";
			animPeriod =.001;
			selection ="flaretrigger";
			axis ="os flare";
			angle0 =0;
			angle1 =0;
		};
	};
	
	class EventHandlers
	{
		init = "_this exec {\SJC_Scripts\Russia\Mi24V\numrandg.sqs};";
		hit = "_this exec {\SJC_Scripts\Events\HelicopterHit.sqs};";
	};
};