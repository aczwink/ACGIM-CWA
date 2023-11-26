class AmmoBoxAddW : ReammoBox
{
	scope = SCOPE_HIDDEN;
};

class BISCamel : Cessna
{
	scope = SCOPE_HIDDEN;
	Crew = "BISCamelPilot";
	side = SIDE_WEST;
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

class BISCamelPilot : SoldierWB
{
	scope = SCOPE_HIDDEN;
	model = "\BISCamel\BIScamelpilot";
	nameSound = "pilot";
	displayName = "$STR_BISCAMEL_PILOT";
	weapons[] = {"Revolver", "Throw", "Put"};
	magazines[] = {"RevolverMag", "RevolverMag", "RevolverMag", "RevolverMag", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell"};
	wounds[] = {"\BISCamel\pilot_jacket.pac", "\BISCamel\pilot_jacket_i.pac", "\BISCamel\pilot_kukla.pac", "\BISCamel\pilot_kukla_i.pac", "\BISCamel\pilot_r.pac", "\BISCamel\pilot_r_i.pac", "\o\char\Civ_top_pul_r.pac", "\o\char\Civ_top_pul_r_i.pac", "\o\char\Civ_top_pulo.pac", "\o\char\Civ_top_pulo_i.pac", "\o\char\Civ_leg_dgre.pac", "\o\char\Civ_leg_dgre_i.pac", "xicht_a.paa", "xicht_a_zranen", "xicht_b.paa", "xicht_a_zranen", "xicht_c.paa", "xicht_a_zranen", "xicht_d.paa", "xicht_a_zranen", "xicht_e.paa", "xicht_e_zranen", "xicht_f.paa", "xicht_a_zranen", "xicht_g.paa", "xicht_a_zranen", "xicht_h.paa", "xicht_a_zranen", "xicht_i.paa", "xicht_a_zranen", "xicht_j.paa", "xicht_a_zranen", "xicht_k.paa", "xicht_a_zranen", "xicht_l.paa", "xicht_a_zranen", "xicht_m.paa", "xicht_a_zranen", "xicht_n.paa", "xicht_a_zranen", "xicht_o.paa", "xicht_o_zranen", "xicht_p.paa", "xicht_a_zranen", "xicht_q.paa", "xicht_a_zranen", "xicht_r.paa", "xicht_a_zranen", "xicht_s.paa", "xicht_a_zranen", "xicht_t.paa", "xicht_a_zranen", "xicht_u.paa", "xicht_a_zranen", "xicht_v.paa", "xicht_v_zranen", "xicht_w.paa", "xicht_w_zranen", "xicht_x.paa", "xicht_a_zranen", "xicht_y.paa", "xicht_a_zranen", "xicht_z.paa", "xicht_a_zranen", "xicht_2a.paa", "xicht_a_zranen", "xicht_2b.paa", "xicht_w_zranen", "xicht_2c.paa", "xicht_a_zranen", "xicht_2d.paa", "xicht_v_zranen", "xicht_2e.paa", "xicht_a_zranen", "xicht_2f.paa", "xicht_a_zranen", "xicht_2g.paa", "xicht_w_zranen", "xicht_2h.paa", "xicht_a_zranen", "xicht_2i.paa", "xicht_a_zranen", "xicht_2j.paa", "xicht_a_zranen", "xicht_2k.paa", "xicht_a_zranen", "xicht_2l.paa", "xicht_a_zranen", "xicht_2m.paa", "xicht_a_zranen", "xicht_2n.paa", "xicht_a_zranen", "xicht_2o.paa", "xicht_a_zranen", "xicht_2p.paa", "xicht_2p_zranen", "xicht_2q.paa", "xicht_a_zranen", "xicht_2r.paa", "xicht_e_zranen", "xicht_2s.paa", "xicht_a_zranen", "xicht_2t.paa", "xicht_a_zranen", "xicht_2u.paa", "xicht_a_zranen", "xicht_2v.paa", "xicht_a_zranen", "xicht_2w.paa", "xicht_w_zranen", "xicht_2x.paa", "xicht_a_zranen", "xicht_2y.paa", "xicht_a_zranen", "xicht_2z.paa", "xicht_a_zranen"};
};

class HeavyGW : SoldierWG
{
	scope = 1;
};