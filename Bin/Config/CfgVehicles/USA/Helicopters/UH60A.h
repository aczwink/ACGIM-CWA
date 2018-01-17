/*
Sources:
	http://en.wikipedia.org/wiki/Uh60
In service: 1979-present
*/
class USA_UH60 : Helicopter
{
	scope=2;
	enableSweep=0;
	crew = "USA_HelicopterPilot";
	picture="iuh60";
	maxSpeed = 295;
	side=1;
	displayName="UH-60A Black Hawk";
	nameSound="blackhawk";
	accuracy = ACCURACY_UH60;
	armor = ARMOR_UH60;
	cost = COST_UH60;
	mainRotorSpeed=-1;
	model="\d4t_files\models\us\vehicles\uh60a.p3d";
	rotorBig="vrtule_uh_v";
	rotorBigBlend="vrtule_uh_v_bl";
	rotorSmall="vrtule_uh_m";
	rotorSmallBlend="vrtule_uh_m_bl";
	weapons[]={"Hydra70_38"};
	magazines[]={"Hydra70_38"};
	driverAction="ManActUH60Pilot";
	gunnerAction="ManActUH60Pilot";
	dammageHalf[]={"\d4t_tex\uh60\ps_sklo.paa","\d4t_tex\uh60\ps_sklo2.paa","\d4t_tex\uh60\zp_sklo.paa","\d4t_tex\uh60\zp_sklo2.paa","\d4t_tex\uh60\po_sklo.paa","\d4t_tex\uh60\po_sklo2.paa","\d4t_tex\uh60\pp_sklo.paa","\d4t_tex\uh60\pp_sklo2.paa"};
	dammageFull[]={"\d4t_tex\uh60\ps_sklo.paa","\d4t_tex\uh60\ps_sklo3.paa","\d4t_tex\uh60\zp_sklo.paa","\d4t_tex\uh60\zp_sklo3.paa","\d4t_tex\uh60\po_sklo.paa","\d4t_tex\uh60\po_sklo3.paa","\d4t_tex\uh60\pp_sklo.paa","\d4t_tex\uh60\pp_sklo3.paa"};
	gunnerUsesPilotView=1;
	transportSoldier=12;
	transportAmmo=0;
	transportMaxMagazines=150;
	transportMaxWeapons=30;
	initCargoAngleY=10;
	minCargoAngleY=-60;
	maxCargoAngleY=120;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\uh60_rotors.wss",3.162278,1.500000};
	type=2;
	hasGunner=1;
	hiddenSelections[]={"cis1","cis2","cis3","cis4","cis5","zasleh2","offline"};
	steerAheadSimul=2.0;
	steerAheadPlan=2.0;
	threat[]={THREAT_UH60};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

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
		max = 120;
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
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro2
	{
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
		max = 120;
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

	class Reflectors
	{
		class FLeft
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
		class FRight
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.5;
			brightness=1.0;
		};
		class BLeft
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="LZ svetlo";
			direction="konec LZ svetla";
			hitpoint="LZ svetlo";
			selection="LZ svetlo";
			size=0.5;
			brightness=1.0;
		};
		class BRight
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="PZ svetlo";
			direction="konec PZ svetla";
			hitpoint="PZ svetlo";
			selection="PZ svetlo";
			size=0.5;
			brightness=1.0;
		};
	};

	class Animations
	{
		class PP_kolo
		{
			type="rotation";
			animPeriod=0.3;
			selection="L_pruzeni";
			axis="osa_PK";
			angle0=0;
			angle1=-0.03;
		};
		class LP_kolo
		{
			type="rotation";
			animPeriod=0.3;
			selection="P_pruzeni";
			axis="osa_PK";
			angle0=0;
			angle1=-0.03;
		};

		class Z_kolo
		{
				type="rotation";
				animPeriod=0.3;
				selection="Z_pruzeni";
				axis="osa_ZK";
				angle0=0;
				angle1=-0.2;
		};
	};

	//TODO: event handlers? at least the killed burner
};

//TODO: MG version too