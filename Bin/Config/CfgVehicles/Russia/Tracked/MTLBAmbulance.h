/*
Sources:
	http://en.wikipedia.org/wiki/MT-LB
*/
class Russia_MTLBAmbulance : Russia_BMP1
{
	displayName="MT-LB Ambulance";
	icon="Ambulance_move";
	hiddenSelections[] = {"cislo1", "cislo2", "cislo3", "MARINE", "RES", "CSLA", "halterung", "barrel", "box", "amulbox", "FIA", "logo_guerilla", "logo_east", "logo_west"};
	attendant=1;
	hasgunner=0;
	hascommander=1;
	commanderInAction="ManActTruck5tCoDriver";
	commanderOpticsModel="optika_tank_driver";
	forceHideCommander=1;
	weapons[]={};
	magazines[]={};
	transportsoldier=2;
	side=0;
	picture="\d4t_files\pics\vehicles\mtlb.paa";
	model="\d4t_files\models\russia\vehicles\mtlb_ambulance.p3d";
	nameSound="apc";
	insideSoundCoef=1.1;
	fuelCapacity=200;
	maxSpeed = 61;
	armor = ARMOR_MTLBAMBULANCE;
	cost = COST_MTLBAMBULANCE;
	type=1;
	unitInfoType = UNITINFO_SHIP;
	hideUnitInfo=0;
	driverIsCommander=1;
	outGunnerMayFire=1;
	forceHideGunner=1;
	viewDriverInExternal=1;
	viewGunnerInExternal=1;
	driverAction="ManActBMPDriverOut";
	gunnerAction="ManActBMPCommander";
	driverInAction="ManActBMPDriver";
	gunnerInAction="ManActBMPCommander";
	cargoAction[]={"ManActCargo"};
	getOutAction = MANACT_GETOUTTANK;
	driverCanSee="4+	 2+	 8";
	gunnerCanSee="1+16 +	 4+	 2+	 8";
	irTarget=1;
	irScanRange=2500;
	irScanGround=1;
	soundEnviron[]={"Vehicles\OldRolling_Treads1",0.1778279,0.85};
	soundEngine[]={"Vehicles\T55Sound",0.1778279,1};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

	class Turret
	{
		gunAxis="OsaHlaven";
		turretAxis="OsaVeze";
		soundServo[]={"Vehicles\gun_elevate",0.0316228,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-5;
		maxElev=35;
		minTurn=-360;
		maxTurn=360;
		body="otocVez";
		gun="otocHlaven";
	};

	class ComTurret
	{
		turretAxis="OsaVelitele";
		gunAxis="OsaHlavneVelitele";
		soundServo[]={};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev=20;
		minTurn=-11.5;
		maxTurn=11.5;
		body="OtocVelitele";
		gun="OtocHlavenVelitele";
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="62 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-180;
		min=0;
		max=1;
	};

	class IndicatorRPM2:IndicatorRPM
	{
		selection="ukaz_t1";
		axis="osa_t1";
		angle=-180;
		min=0;
		max=3;
	};

	class EventHandlers
	{
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};