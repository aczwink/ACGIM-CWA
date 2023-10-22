/*
Sources:
	http://en.wikipedia.org/wiki/M163
In service:1968-unknown but not anymore
*/
class Vulcan : USA_M113
{
	displayName="M163A1 VADS";
	picture="\vulcan\ivulcan.paa";
	icon="antiAC.paa";
	armor = ARMOR_M163A1;
	cost = COST_M163A1;
	model="\d4t_files\models\us\vehicles\m163a1.p3d";
	irScanRange=4000;
	irScanGround=0;
	gunnerCanSee="4+8+16 +1";
	weapons[]={"M168Gun"};
	magazines[]={"M168Gun"};
	threat[]={THREAT_M163A1};
	gunnerOpticsModel="optika_zsu_gunner";
	commanderOpticsModel="optika_tanke_auxiliary";
	gunnerAction="ManActVulcanGunner";
	gunnerInAction="ManActVulcanGunner";
	forceHideGunner=1;
	viewGunnerInExternal=1;
	transportSoldier=0;

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"Vehicles\gun_elevate",0.0316228,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		body="OtocVez";
		gun="OtocHlaven";
		minElev=-3;
		maxElev=70;
		minTurn=-360;
		maxTurn=360;
	};

	class ReloadAnimations
	{
		class VulcanCannon
		{
			weapon = "M168Gun";
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
	
	class EventHandlers
	{
		hit = "_this exec {\SJC_Scripts\Events\ArmorHit.sqs}";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};