class GrenadeM67 : GrenadeHand
{
	soundHit[]={"\d4t_files\sounds\weapons\handheld\m67.wss",10,1};
	model="\d4t_files\models\us\weapons\m67.p3d"; //ODOL Explorer 2.0 (not 2.44) was used
	hiddenSelections[] = {"pin","spoon"};
};

/*
Sources:
http://en.wikipedia.org/wiki/M203_grenade_launcher
*/
class GrenadeM406HEFR : Grenade
{
	minRange = 30;
	minRangeProbab = 0.2;
	midRange = 125;
	midRangeProbab = 0.45;
	maxRange = 250;
	maxRangeProbab = 0.3;
};

class GrenadeANM8 : SmokeShell
{
	indirecHit = 1;
	indirectHitRange = 0.04;//Small Explosion Radius
	model = "\sjc_models\USA\objects\anm8.p3d";

	class Smoke
	{
		timeToLive=1.00000002004088E+20;
		interval=0.1;
		in=3.0;
		out=0.1;
		size=1;
		cloudletSize="1+(random 1)";
		cloudletAnimPeriod="3+(random 2)";
		cloudletGrowUp="1+(random 1)";
		cloudletFadeIn=0;
		cloudletDuration="3+(random 2)";
		cloudletFadeOut="20+(random 2)";
		density=1; // alpha ?
		initYSpeed=0;
		cloudletAccY=0.3;
		cloudletMinYSpeed=0;
		cloudletMaxYSpeed=10;
		cloudletShape="cl_basic";
		cloudletColor[]={1,1,1,0};
		cloudletAlpha=1.0;
		initT=0;
		deltaT=1000;
		
		class Table
		{
			class T1
			{
				maxT=0;
				color[]={1,1,1,1};
			};
			
			class T2
			{
				maxT=3000;
				color[]={1,1,1,1};
			};
		};
	};
};

class GrenadeM18Red : GrenadeANM8
{
	modelMagazine = "\sjc_models\USA\objects\m18red.p3d";
	hiddenSelections[] = {"pin","spoon"};
	smokeColor[] = {1, 0.25, 0, 0};
};

class GrenadeM18Green : GrenadeANM8
{
	modelMagazine = "\sjc_models\USA\objects\m18green.p3d";
	hiddenSelections[] = {"pin","spoon"};
	smokeColor[] = {0.2, 0.8, 0.2, 0};
};

/*
Mk 19
*/
class GrenadeMk19 : Grenade
{
	hit = HIT_MK19;
	indirectHit = INDIRECTHIT_MK19;
	indirectHitRange = INDIRECTHITRANGE_MK19;
	model="granat";
	minRange=15;
	minRangeProbab=0.90;
	midRange=500;
	midRangeProbab=0.50;
	maxRange=1000;
	maxRangeProbab=0.30;
	cost = COST_GRENADE_MK19;
	simulation=shotBullet;
	simulationStep=0.05;
	visibleFire=2;
	tracerColor[]={0,0,0,0};
	visibleFireTime=0;
	soundHit[]={"Explosions\expl3",10.000000,1};
	soundFly[]={"objects\noise",0.000032,1};
	soundEngine[]={"",0.000100,4};
	audibleFire=0.600000;
};

/*
RGO
*/
class GrenadeRGO : GrenadeHand
{
	soundHit[]={"\d4t_files\sounds\weapons\handheld\m67.wss",10,1};
	model = "\d4t_files\models\russia\weapons\rgo.p3d";
	hiddenSelections[] = {"pin","spoon"};
};

/*
VOG Grenades
Sources:
	http://en.wikipedia.org/wiki/GP-25
*/
class GrenadeVOG25 : Grenade
{
	hit = HIT_VOG25;
	indirectHit = INDIRECTHIT_VOG25;
	indirectHitRange = INDIRECTHITRANGE_VOG25;
	model="\d4t_files\models\russia\misc\vog25.p3d";
	GrenadeHitGround1[]={"\d4t_files\sounds\weapons\impacts\grenadehit_ground1.wss",1.0,1};
	GrenadeHitGround2[]={"\d4t_files\sounds\weapons\impacts\grenadehit_ground2.wss",1.0,1};
	hitGround[]={GrenadeHitGround1,0.6,GrenadeHitGround2,0.6};
	minRange=35;
	minRangeProbab=0.10;
	midRange=100;
	midRangeProbab=0.80;
	maxRange=350;
	maxRangeProbab=0.25;
};