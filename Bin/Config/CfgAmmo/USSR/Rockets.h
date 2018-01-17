/*
RPG-7
Sources:
	http://en.wikipedia.org/wiki/RPG7
	http://www.deagel.com/Rocket-and-Missile-Launchers/RPG-7_a002261001.aspx
*/
class RocketPG7VL : LAW
{
	thrustTime = 2;
	thrust = 90;
	maxSpeed = 294;
	airlock=1;
	model="\sjc_models\ussr\objects\pg7vl_fired.p3d";
	hit = HIT_PG7VL;
	indirectHit = INDIRECTHIT_PG7VL;
	indirectHitRange = INDIRECTHITRANGE_PG7VL;
	SoundHitArmor1[]={"\sjc_sounds\weapons\handheld\arm1.wss",db+25,1};
	SoundHitArmor2[]={"\sjc_sounds\weapons\handheld\arm2.wss",db+25,1};
	SoundHitArmor3[]={"\sjc_sounds\weapons\handheld\arm3.wss",db+25,1};
	hitArmor[]={soundHitArmor1,0.33, soundHitArmor2,0.33, soundHitArmor3,0.33};
	soundHit[]={"\sjc_sounds\weapons\handheld\boom.wav",38.622778,0.85};
	soundFly[]={"\sjc_sounds\weapons\handheld\fly.ogg",db+0,1.0};
};

/*
RPG-18
Sources:
	(1) http://en.wikipedia.org/wiki/RPG-18
	(2) http://world.guns.ru/grenade/rus/rpg-18-e.html
Thrust: (2) "The rocket [...] motor burns out completely while rocket is stillin the barrel" -> 0
maxSpeed: see thrust -> muzzle velocity -> 115
*/
class RocketPG18 : LAW
{
	hit = HIT_PG18;
	indirectHit = INDIRECTHIT_PG18;
	indirectHitRange = INDIRECTHITRANGE_PG18;
	thrustTime = 0;
	thrust = 0;
	maxSpeed = 115;
	model="\sjc_models\fia\objects\rpg18rocket_fired.p3d";
	soundHit[]={"\sjc_sounds\weapons\handheld\ground.wss",db+25,1.0};
	SoundHitArmor1[]={"\sjc_sounds\weapons\handheld\arm1.wss",db+25,1};
	SoundHitArmor2[]={"\sjc_sounds\weapons\handheld\arm2.wss",db+25,1};
	SoundHitArmor3[]={"\sjc_sounds\weapons\handheld\arm3.wss",db+25,1};
	hitArmor[]={soundHitArmor1,0.33, soundHitArmor2,0.33, soundHitArmor3,0.33};
	soundFly[]={"\sjc_sounds\weapons\handheld\fly.ogg",db+0,1.0};
};

/*
R-60
Sources:
	http://en.wikipedia.org/wiki/Molniya_R-60
Speed: Mach 2.7 -> 2867.851008 km/h
*/
class RocketR60 : AA
{
	hit = HIT_R60;
	indirectHit = INDIRECTHIT_R60;
	indirectHitRange = INDIRECTHITRANGE_R60;
	minRange=200;
	minRangeProbab=0.9;
	midRange=700;
	midRangeProbab=0.95;
	maxRange=2000;
	maxRangeProbab=0.6;
	model = "\sjc_models\USSR\Objects\R60.p3d";
	proxyshape = "\sjc_models\USSR\Objects\R60.p3d";
	maneuvrability=50;
	sideairfriction =0.3;
	airLock=true;
	irLock=false;
	laserLock=false;
	initTime=0.4; //No Proof
	maxLeadSpeed=4000;
	thrustTime=50;//No Proof
	thrust=400;//No Proof
	maxSpeed = 2868;
	maxControlRange=3000;
};

/*
Kh-23
Speed: 2160–2700 km/h -> 2430 km/h
*/
class RocketKh23 : HellFire
{
	hit = HIT_KH23;
	indirectHit = INDIRECTHIT_KH23;
	indirectHitRange = INDIRECTHITRANGE_KH23;
	minRange=500;
	minRangeProbab=0.4;
	midRange=1000;
	midRangeProbab=0.95;
	maxRange=2000;
	maxRangeProbab=0.7;
	model = "\sjc_models\USSR\Objects\Kh23.p3d";
	irLock =true;
	airLock =false;
	laserLock =false;
	maneuvrability=35.0;
	initTime=0.8;//No Proof
	maxSpeed = 2430;
	thrust =300;//No Proof
	thrustTime=10;//No Proof
};

/*
Kh-29
Sources:
	http://en.wikipedia.org/wiki/Kh-29
*/
class RocketKh29 : Maverick
{
	maxSpeed = 1470;
	proxyShape = "\sjc_models\USSR\Objects\Kh29.p3d";
	model = "\sjc_models\USSR\Objects\Kh29.p3d";
};

/*
S-5
Sources:
	http://en.wikipedia.org/wiki/S-5_rocket
Thrust: "The solid rocket motor burns for just 1.1 seconds, during which time it covers about 300 meters."
*/
class RocketS5M : Rocket57
{
	model="\sjc_files\models\russia\misc\c5rocket.p3d";
	hit = HIT_S5M;
	indirectHit = INDIRECTHIT_S5M;
	indirectHitRange = INDIRECTHITRANGE_S5M;
	initTime=0.001;
	thrustTime = 1.1;
	thrust = 300;
	minRange=50;
	minRangeProbab=0.20;
	midRange=250;
	midRangeProbab=0.90;
	maxRange=1000;
	maxRangeProbab=0.05;
	maxSpeed = 500; //Guess according to thrust...
	cost = COST_ROCKET_S5M;
	simulation="shotRocket";
	simulationStep=0.010000;
	sideAirFriction=0.1;
	maneuvrability=0;
};

class RocketS5K : RocketS5M
{
	hit = HIT_S5K;
	indirectHit = INDIRECTHIT_S5K;
	indirectHitRange = INDIRECTHITRANGE_S5K;
	cost = COST_ROCKET_S5K;
};

/*
9M114 Kokon
*/
class Rocket9M114Kokon : AT6
{
	model = "\sjc_models\russia\objects\at6.p3d";
	proxyShape="\sjc_models\russia\objects\at6a_proxy.p3d";
	hit = HIT_9M114KOKON;
	indirectHit = INDIRECTHIT_9M114KOKON;
	indirectHitRange = INDIRECTHITRANGE_9M114KOKON;
	soundHit[]={"\sjc_sounds\weapons\missiles\AT6_explo.wss",100,1};
	initTime=0.015;
	thrustTime = 10;//No Proof
	thrust = 300;//No Proof
	maxSpeed = 345;
	maneuvrability=10;
	minRange=550;
	minRangeProbab=0.030000;
	midRange=1000;
	midRangeProbab=0.950000;
	maxRange=1800;
	maxRangeProbab=0.500000;
};

/*
9M14 Malyutka
Sources:
	http://en.wikipedia.org/wiki/9M14_Malyutka
*/
class Rocket9M14 : Default
{
	hit = HIT_9M14;
	indirectHit = INDIRECTHIT_9M14;
	indirectHitRange = INDIRECTHITRANGE_9M14;
	minRange=300;
	minRangeProbab=0.95;
	midRange=2500;
	midRangeProbab=0.8;
	maxRange=8000;
	maxRangeProbab=0.0;
	model="AT1";
	proxyShape="AT1";
	simulation="shotMissile";
	simulationStep=0.01;
	cost = COST_ROCKET_9M14;
	soundHit[]={"Explosions\explosion_at3",100.0000076,1};
	soundFly[]={"weapons\rocketflying",0.01,2};
	soundEngine[]={"objects\noise",0.001,1};
	maxSpeed = 115;
	irLock=1;
	manualControl=1;
	maxControlRange=3000;
	initTime=0.1;
	thrustTime = 30;
	thrust = 115;
	maneuvrability=5.0;
	visibleFire=32;
	audibleFire=32;
	visibleFireTime=30;
};

/*
9M113 Konkurs
Sources:
	http://en.wikipedia.org/wiki/9M113_Konkurs
*/
class Rocket9M113 : Rocket9M14
{
	maxControlRange=4000;
	maxSpeed = 200;
	thrust = 200;
	thrustTime = 30;
	maneuvrability=8;
};

/*
9M112 Kobra
Sources:
	http://en.wikipedia.org/wiki/9M112-1_Kobra
Thrust: "averages at 350 to 400 meters a second" -> 375
*/
class Rocket9M112 : Rocket9M14
{
	model="\sjc_models\russia\objects\9m112.p3d";
	soundHit[]={"\sjc_sounds\weapons\missiles\RocketBoom.wss",30,1};
	soundFly[]={"\sjc_sounds\weapons\missiles\rocketflying.wss",0.3,1};
	soundEngine[]={"\sjc_sounds\weapons\missiles\Noise.wss",0.001,1};
	maxControlRange=4500;
	maxSpeed = 800;
	thrust = 375;
	maneuvrability = 6;
};