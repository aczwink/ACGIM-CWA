class USA_M2A3Bradley : USA_M3A2Bradley
{
	displayname="M2A3 Bradley IFV";
	model="\d4t_files\models\us\vehicles\m2a3.p3d";
	preferRoads=0;
	canFloat=1;
	scope=2;
	side=1;
	cost=150000;
	maxSpeed=61;
	armor=400;
	armorStructural=2.0;
	armorHull=1;
	armorTurret=0.75;
	armorGun=0.4;
	armorEngine=0.9;
	armorLights=0.4;
	armorTracks=0.6;
	nameSound="apc";
    weapons[]={"M242ChainGun", "M240Coaxial", "M220_BGM71DTOW"};
	magazines[]={"M242ChainGun_APDS", "M242ChainGun_APDS", "M242ChainGun_HEI", "M242ChainGun_HEI", "M240Coaxial", "M220_BGM71DTOW", "M220_BGM71DTOW", "M220_BGM71DTOW"};
	soundGear[]={"Vehicles\Gear_Trans1",0.010000,1};
	threat[]={0.9,0.8,0.5};
	laserscanner=1;
    laserscanrange=5000;
    irscanner=1;
    accuracy=0.850000;
    irScanRangeMin=500;
	irScanRangeMax=4000;
	irScanToEyeFactor=1;
	irScanGround=1;
	type=VArmor;
	commanderCanSee=31;
	gunnerCanSee=31;
	gunnerAction="ManActCBT_M2GunnerOut";
	gunnerInAction="ManActCBT_M2Gunner";
	driverAction="ManActCBT_M2Driver";
	driverInAction="ManActCBT_M2Driver";
	commanderAction="ManActCBT_M2CommanderOut";
	commanderInAction="ManActCBT_M2Commander";
	hasCommander=1;
	hasGunner=1;
	outGunnerMayFire=0;
	forceHideGunner=0;
	viewGunnerInExternal=0;
	ejectdeadcargo = 1;
	commanderUsesPilotView=1;
	transportSoldier=6;
	insideSoundCoef = 0.05;
	nightVision=1;
	typicalCargo[]={Soldier, Soldier, Soldier, Soldier, SoldierLAW, SoldierLAW};
	transportMaxMagazines=100;

	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\elevate.wss",db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		body = "OtocVez";
		gun = "OtocHlaven";
		minElev=-9;
		maxElev=+40;
		minTurn=-360;
		maxTurn=+360;
	};
	
	class HatchDriver
	{
		selection = "poklop_driver";
		axis = "osa_poklop_driver";
		angle = 40;
	};
	
	class HatchCommander
	{
		selection = "poklop_commander";
		axis = "osa_poklop_commander";
		angle = -165;
	};

	class HatchGunner
	{
		selection = "poklop_gunner";
		axis = "osa_poklop_gunner";
		angle = -150;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max=37;
	};

	class Animations
	{
		class CBT_TOW
		{
			type="rotation";
			animPeriod=3.000000;
			selection="tow";
			axis="osa_tow";
			angle0=0;
			angle1=1.575;
		};

		class gun_recoil
		{
			type="rotation";
			animperiod=0.050000;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1=-0.00103;
		};

		class suspension
   		{
			type="rotation";
			animperiod=.5;
            selection=sus_f;
            axis=osa_sus;
            angle0=-.02;
            angle1=.02;   
        };
	};
	
	class TransportMagazines
	{
        class m_M4
		{
			magazine = WEAPON_REFERENCE(M4);
			count=15;
		};

		class m_M249SAW
		{
			magazine = WEAPON_REFERENCE(M249SAW);
			count = 3;
		};

		class m_M240B
		{
			magazine = WEAPON_REFERENCE(M240B);
			count = 2;
		};

		class m_M67
		{
			magazine = "M67";
			count = 4;
		};

		class m_M406HEFR
		{
			magazine = "M406HEFR";
			count = 3;
		};
	};
	
	class Eventhandlers
	{
		init = "_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_init.sqs}};_this exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_ai.sqs""";
		hit="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		incomingMissile="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}; if ( (_this select 1 in [{d4t_m220_tow},{d4t_m220_towa},{d4t_fim92}]) ) then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_firedEH.sqs}};if ((_this select 1) != ""d4t_m240_coax_4400"" || (_this select 1) != ""d4t_m220_tow"" || (_this select 1) != ""d4t_m220_towa"") Then {(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\m3a2\%1.sqs"", _this select 1]}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
	};
};