/*
Sources:
http://en.wikipedia.org/wiki/Ah64
In service: 1986-2012
*/
class AH64 : Helicopter
{
	side = SIDE_WEST;
	scope = SCOPE_PUBLIC;
	displayName="AH-64A Apache";
	picture = "\apac\iAH64";
	crew = "USA_HelicopterPilot";
	accuracy = ACCURACY_AH64A;
	driverAction = "ManActAH64Pilot";
	gunnerAction = "ManActAH64Gunner";
	maxSpeed = 293;
	soundEngine[] = {"\sjc_sounds\vehicles\ah64_engine.ogg",db+30,1};
	armor = ARMOR_AH64A;
	cost = COST_AH64A;
	model = "\sjc_models\USA\ah64a.p3d";
	laserScanner = 1;
	rotorBig = "apach_vrtule";
	rotorBigBlend = "apach_vrtule";
	rotorSmall = "apach_vrtulka";
	rotorSmallBlend = "apach_vrtule2";
	weapons[] = {"M230ChainGun", "AGM114A", "Hydra70Pairs_38", "LaserDesignatorOH"};
	magazines[] = {"M230ChainGun", "AGM114A", "Hydra70Pairs_38", "LaserDesignatorOH"};
	type = VEHICLE_AIR;
	threat[]={THREAT_AH64A};
	dammageHalf[] = {"\apac\apach_in_skla.paa", "\apac\apach_in_sklaC.paa"};
	dammageFull[] = {"\apac\apach_in_skla.paa", "\apac\apach_in_sklaC.paa"};
	insideSoundCoef=0.002; //crew wears ear protection
	camouflage = CAMOUFLAGE_USA_AH64A;
	irScanToEyeFactor=4;
	irScanRangeMax=4000;
	irScanRangeMin=100;
	fuelCapacity=110;
	armorStructural = 2.0;
	armorHull = 0.8;
	armorEngine = 1.2;
	armorAvionics = 1.4;
	armorVRotor = 0.8;
	armorHRotor = 0.7;
	armorMissiles = 1.6;
	armorGlass = 0.5;
	gunnerOpticsModel="\d4t_files\optics\optic_ah64_gunner.p3d";
	hiddenSelections[] = {"pic_usarmy","pic_nation","pic_nation2","pic_nl","mfd_pil_1","mfd_pil_2","mfd_pil_kl","mfd_gun_1","mfd_gun_2","mfd_gun_kl","mfd_gun_mid"};
	
	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		soundServo[] = {};
		minElev = -45;
		maxElev = 5;
		minTurn = -120;
		maxTurn = 120;
		body = "OtocVez";
		gun = "OtocHlaven";
	};
	
	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 304;
	};

	class IndicatorAltBaro
	{
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
		angle = -320;
		min = 0;
		max = 125;
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

	class IndicatorCompass2
	{
		selection = "kompas2";
		axis = "osa_kompas2";
		angle = -360;
		min = -3.14159;
		max = 3.14159;
	};

	class ViewPilot
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};

	class ViewGunner
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};

	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.7;
		maxFov=0.7;
	};

	class ViewOptics : ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.03;
		maxFov=0.7;
	};

	class Animations
	{
		class tail1
		{
			type = "rotation";
			animPeriod = 1.5;
			selection = "mpiv_tail";
			axis = "axistail";
			angle0 = 0.785;
			angle1 =  0;
		};
	};

	class EventHandlers
	{
		hit = "(_this select 0) exec {\SJC_Scripts\Events\TailRotorFailure.sqs};";
		init = "(_this select 0) setObjectTexture [0, {\sjc_textures\ah64\us_army.paa}];";
	};
};

class AH64A_Wreck : Strategic
{
	scope = SCOPE_PUBLIC;
	model = "\sjc_models\USA\objects\ah64a_wreck.p3d";
	displayName = "AH-64A Wreck";
	vehicleClass="Objects (Wrecks)";
	armor = 1000000;
	transportFuel = 0;
	destrType = "DestructEngine";
	icon="Unknown_object";
	accuracy=0.3;
	typicalCargo[]={};
	irTarget=0;
	transportAmmo=0;
	transportRepair=0;
	cost=0;
	mapSize=6.4000001;
};