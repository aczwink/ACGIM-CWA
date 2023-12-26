class USA_M6Linebacker : USA_M2A3Bradley
{
	displayName="M6 Linebacker";
	scope=public;
	hiddenSelections[] = {"mrk1","mrk2","chev1"};
	maxSpeed=61;
	armor=400;
	threat[]={0.8,0.9,0.5};
	cost=900000;
	audible=15; 
	accuracy=0.12; 
	sensitivity=3.5;
	irScanRangeMin = 20;
	irScanRangeMax = 15000;
	visibleNightLightsOn=50;
	irScanToEyeFactor=10;
	transportSoldier = 2;
	nameSound="apc";
	model="\d4t_files\models\us\vehicles\m6.p3d";
    weapons[]={"M242ChainGun", "M240Coaxial", "FIM92"};
	magazines[]={"M242ChainGun_APDS", "M242ChainGun_APDS", "M242ChainGun_HEI", "M242ChainGun_HEI", "M240Coaxial", "FIM92"};

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
		maxElev=+54;
		minTurn=-360;
		maxTurn=+360;
	};
		
	class Eventhandlers
	{
		init = "_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_init.sqs}};_this exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_ai.sqs""";
		hit="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		incomingMissile="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}; if ( (_this select 1 in [{d4t_m220_tow},{d4t_m220_towa},{FIM92}]) ) then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_firedEH.sqs}};if ((_this select 1) != ""d4t_m240_coax_4400"" || (_this select 1) != ""d4t_m220_tow"" || (_this select 1) != ""d4t_m220_towa"") Then {(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\m3a2\%1.sqs"", _this select 1]}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
	};
};