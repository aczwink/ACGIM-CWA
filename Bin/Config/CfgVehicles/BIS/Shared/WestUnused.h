//Air
class BISCamel : Cessna
{
	scope = SCOPE_HIDDEN;
	Crew = "BISCamelPilot";
	side = 1;
	DisplayName = "$STR_BISCAMEL_NAME";
	nameSound = "plane";
	accuracy = 0.3;
	maxSpeed = 188;
	ejectSpeed[] = {0, 0, 0};
	armor = 15;
	cost = 200000;
	Model = "\BISCamel\BIScamel";
	picture = "\BISCamel\icamel";
	icon = "\BISCamel\map_camel";
	weapons[] = {"BISCamelMGun", "BISGrenadeCamel"};
	magazines[] = {"BISCamelMGun", "BISGrenadeCamel"};
	fov = 0.5;
	landingSpeed = 75;
	landingAoa = "3.5*3.1415/180";
	flapsFrictionCoef = 2;
	driverAction = "ManActBISCamelDriver";
	cargoAction[] = {"ManActBISCamelcargoRight", "ManActBISCamelCargoLeft"};
	cargoIsCoDriver[] = {0, 0};
	driverCanSee = "2+8";
	SoundEngine[] = {"\BISCamel\engine.wav", 1, 1};
	soundEnviron[] = {"Objects\noise", 0.1, 1};
	soundServo[] = {"Vehicles\gun_elevate", 0.01, 0.4};
	transportSoldier = 2;
	ejectDeadCargo = 1;
	extCameraPosition[] = {0, 2, -30};
	type = "VAir";
	threat[] = {0.1, 1, 0.7};
	audible = 8;
	aileronSensitivity = 0.66;
	elevatorSensitivity = 0.2;
	noseDownCoef = 0.025;

	class ViewPilot
	{
		initFov = 0.7;
		minFov = 0.4;
		maxFov = 0.85;
		initAngleX = 8;
		minAngleX = -35;
		maxAngleX = 25;
		initAngleY = 0;
		minAngleY = -150;
		maxAngleY = 150;
	};

	class ViewOptics
	{
		initAngleX = 0;
		minAngleX = 0;
		maxAngleX = 0;
		initAngleY = 0;
		minAngleY = 0;
		maxAngleY = 0;
		initFov = 0.5;
		minFov = 0.5;
		maxFov = 0.5;
	};

	class ViewCargo
	{
		initAngleX = 5;
		minAngleX = -30;
		maxAngleX = 30;
		initAngleY = 0;
		minAngleY = -60;
		maxAngleY = 60;
		initFov = 0.7;
		minFov = 0.42;
		maxFov = 0.85;
	};

	class Reflectors
	{
		class Left
		{
			color[] = {0, 0, 0, 1};
			ambient[] = {0, 0, 0, 1};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 0.25;
		};

		class Right
		{
			color[] = {0, 0, 0, 1};
			ambient[] = {0, 0, 0, 1};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 0.5;
			brightness = 0.25;
		};
	};

	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -337;
		min = 0;
		max = 1800;
	};

	class IndicatorCompass
	{
		selection = "kompas";
		axis = "osa_kompas";
		angle = 360;
		min = 3.14159;
		max = -3.14159;
	};

	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -360;
		min = "50 / 2";
		max = "170 / 2";
	};

	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -310;
		min = 0;
		max = 1;
	};

	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = 155;
		min = 0;
		max = 150;
	};
};

//Armored
class M1AbramsAuto : M1Abrams
{
	scope = SCOPE_HIDDEN;
};

//Cars
class Truck5tRich : Truck5t
{
	scope = SCOPE_HIDDEN;
};

//Ships
class BoatWAuto :BoatW
{
	scope = 1;
};