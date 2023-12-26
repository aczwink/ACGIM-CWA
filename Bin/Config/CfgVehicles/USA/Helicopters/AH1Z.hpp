class Cobra : Helicopter 
{
	picture="\d4t_files\pics\vehicles\ah1w.paa";
	uipicture="\d4t_files\pics\vehicles\ah1w.paa";
    icon="\d4t_files\pics\vehicles\ah1w_icon.paa";
	crew = "SoldierWPilotHG";
	scope=2;
	side=1;
	hiddenSelections[]={"n1","n2","miss1","miss2"};
	vehicleClass="Vehicles (Air)";
	displayName="AH-1Z SuperCobra";
	nameSound="cobra";
	accuracy=5;
	gunnerUsesPilotView=0;
	driverAction=ManActAH1Pilot;
	gunnerAction=ManActAH1Gunner;
	maxSpeed=170;
	armor=90;
	cost=10000000;
	model="\d4t_files\models\us\vehicles\ah1z1.p3d";
	weapons[]={"M197Gatling", "AGM114A", "Hydra70_38", "AIM9"};
	magazines[]={"M197Gatling", "AGM114A", "Hydra70_38", "AIM9"};
    rotorBig=vrtule_velka;
	rotorBigBlend=vrtule_velka_blur;
	rotorSmall=vrtule_mala;
	rotorSmallBlend=vrtule_mala_blur;
	type=VAir;
	threat[]={1.0, 0.8, 0.5};
    soundEngine[]={"\d4t_files\sounds\vehicles\air\engine.wav",5,1};

	dammageHalf[]={"\d4t_tex\ah1\window1.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Canopy.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Lside.pac","\d4t_tex\ah1\LsideB.pac","\d4t_tex\ah1\Sside.pac","\d4t_tex\ah1\SsideB.pac"};
	dammageFull[]={"\d4t_tex\ah1\window1.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Canopy.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Lside.pac","\d4t_tex\ah1\LsideC.pac","\d4t_tex\ah1\Sside.pac","\d4t_tex\ah1\SsideC.pac"};

	class ReloadAnimations
	{
		class M197
		{
			weapon = "M197Gatling";
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

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-50;
		maxElev=20;
		minTurn=-90;
		maxTurn=90;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret : TurretBase{};

	class EventHandlers
	{//d4t_aim9
		Init="_this exec ""\d4t_files\FX\scripts\vehicles\ah1\AH1num1.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1hit.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1wepcheck.sqs""";
		engine="if (_this select 1) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1engineon.sqs""} else {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1engineoff.sqs""}";
        killed="_this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1fire.sqs""";
        IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1EastCM.sqs},[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1flares.sqs}}";
        fired="_this exec ""\d4t_files\FX\scripts\MissileFlame.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\AH1wep.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1wepcheck.sqs""";
        Hit="if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1incomming.sqs}}";
	};
};