class BombGBU12 : LaserGuidedBomb
{
	hit = HIT_GBU12;
	indirectHit = INDIRECTHIT_GBU12;
	indirectHitRange = INDIRECTHITRANGE_GBU12;
	minRange=50;
	minRangeProbab=0.50;
	midRange=300;
	midRangeProbab=0.95;
	maxRange=2500;
	maxRangeProbab=0.50;
	soundHit[]={"\LaserGuided\expl2",db40,1};
	cost = COST_GBU12;
	model="\d4t_files\models\us\weapons\air\gbu12.p3d";
	irLock = true;
	laserLock=1;
	maxControlRange=100000;
	maneuvrability=20.0;
};

/*
Sources:
*/
class BombMk82 : Default
{
	hit = HIT_MK82;
	indirectHit = INDIRECTHIT_MK82;
	indirectHitRange = INDIRECTHITRANGE_MK82;
	soundHit[]={"\LaserGuided\expl2",db40,1};
	soundFly[]={"\sjc_sounds\weapons\hardmounted\fall.wav",db-30,1.5};
	model="\sjc_models\usa\objects\mk82.p3d";
	cost= COST_BOMB_MK82;
	irLock = false;
	laserLock = false;
	maxControlRange = 0;
	maneuvrability = 0;
	sideAirFriction = 0.1;
	simulation = shotMissile;
	maxSpeed=100;
	initTime=0;
	thrust = 0;
	thrustTime = 0;
	//No Prooves for Range Values
	minRange=300;
	minRangeProbab= 0.50;
	midRange= 800;
	midRangeProbab= 0.95;
	maxRange= 2000;
	maxRangeProbab= 0.50;
};

/*
Sources:
	http://en.wikipedia.org/wiki/Mark_83_bomb
*/
class BombMk83 : BombMk82
{
	hit = HIT_MK83;
	indirectHit = INDIRECTHIT_MK83;
	indirectHitRange = INDIRECTHITRANGE_MK83;
	cost = COST_BOMB_MK83;
	soundFly[]={"\sjc_sounds\weapons\hardmounted\bmbfall.ogg",db-30,1.5};
	model="\sjc_models\usa\objects\mk83.p3d";
	proxyShape ="\sjc_models\usa\objects\mk83.p3d";
};

/*
Sources:
	http://en.wikipedia.org/wiki/Mk84
	http://www.motoart.com/aviation-history/history-mk-84
*/
class BombMk84 : BombMk82
{
	hit = HIT_MK84;
	indirectHit = INDIRECTHIT_MK84;
	indirectHitRange = INDIRECTHITRANGE_MK84;
	cost = COST_MK84;
	model = "\sjc_models\USA\objects\mk84.p3d";
	proxyShape = "\sjc_models\USA\objects\mk84.p3d";
};

class BombBLU1 : LaserGuidedBomb //TODO
{
	hit=10000;
	indirectHit=10000;
	indirectHitRange=10;
	model="\sjc_models\usa\objects\blu1.p3d";
	sideAirFriction = 0.1;
	irLock = true;
	cost =500;
};

class BombCBU87 : Default //TODO
{
	hit=3500;
	indirectHit=2000;
	indirectHitRange=20;
	minRange=500;
	minRangeProbab=0.9;
	midRange=1500;
	midRangeProbab=0.95;
	maxRange=3500;
	maxRangeProbab=0.9;
	soundHit[]={"\LaserGuided\expl2",db40,1};
	soundFly[]={"\sjc_sounds\weapons\hardmounted\bmbfall.ogg",db-30,1.5};
	cost=2000;
	model="\sjc_models\usa\objects\cbu.p3d";
	proxyShape ="\sjc_models\usa\objects\cbu.p3d";
	irLock=true;
	airLock=0;
	laserLock=true;
	maxControlRange=100000;
	maneuvrability=125.0;
	sideAirFriction=0.05;
	simulation=shotMissile;
	maxSpeed=300;
	maxLeadSpeed=500;
	initTime=0.5000;
	thrustTime=0;
	thrust=0;
	visibleFire=30;
	audibleFire=30;
	visibleFireTime=30;
};