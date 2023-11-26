class Default
{
	access = ACCESS_FORBIDDENVERIFIED;
	hit=0;
	indirectHit=0;
	indirectHitRange=1;
	minRange=0.5;
	minRangeProbab=0.5;
	midRange=100;
	midRangeProbab=0.8;
	maxRange=450;
	maxRangeProbab=0.05;
	model="";
	proxyShape="";
	simulation="";
	cost=0;
	maxSpeed=0;
	cartridge="";
	simulationStep=0.05;
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0.7,0.7,0.5,0.04};
	soundFly[]={"",1,1};
	soundEngine[]={"",1,1};
	soundHit[]={"",1,1};
	hitGround[]={"soundHit",1};
	hitMan[]={"soundHit",1};
	hitArmor[]={"soundHit",1};
	hitBuilding[]={"soundHit",1};
	explosive=1;
	irLock=0;
	airLock=0;
	laserLock=0;
	manualControl=0;
	maxControlRange=350;
	maneuvrability=1.0;
	sideAirFriction=1;
	visibleFire=0;
	audibleFire=0;
	visibleFireTime=0;
	initTime=0;
	thrustTime=1.5;
	thrust=210;
};

class BulletSingle : Default
{
	hit=9;
	indirectHit=2;
	indirectHitRange=0.1;
	model="shell";
	simulation="shotBullet";
	simulationStep=0.05;
	explosive=0;
	visibleFire=16;
	audibleFire=16;
	visibleFireTime=3;
	minRange=10;
	minRangeProbab=0.1;
	midRange=50;
	midRangeProbab=0.38;
	maxRange=200;
	maxRangeProbab=0.04;
	cartridge="FxCartridge";
	cost = COST_BULLETSINGLE;

	//New Sounds
	//soundHit1[]={"weapons\bulletricochet1",0.0316228,1};
	//soundHit2[]={"weapons\bulletricochet2",0.0316228,1};
	//soundHit3[]={"weapons\bulletricochet3",0.0316228,1};
	soundHit1[]={"\d4t_files\sounds\weapons\impacts\hit_ground1.wss",0.031623,1};
	soundHit2[]={"\d4t_files\sounds\weapons\impacts\hit_ground2.wss",0.031623,1};
	soundHit3[]={"\d4t_files\sounds\weapons\impacts\hit_ground3.wss",0.031623,1};
	soundHit4[]={"\d4t_files\sounds\weapons\impacts\hit_ground4.wss",0.031623,1};
	soundHit5[]={"\d4t_files\sounds\weapons\impacts\hit_ground5.wss",0.031623,1};
	soundHit6[]={"\d4t_files\sounds\weapons\impacts\hit_ground6.wss",0.031623,1};
	soundHit7[]={"\d4t_files\sounds\weapons\impacts\hit_ground7.wss",0.031623,1};
	soundHit8[]={"\d4t_files\sounds\weapons\impacts\hit_ground8.wss",0.031623,1};

	//soundHitMan1[]={"weapons\bullethitman1",0.0125893,1};
	//soundHitMan2[]={"weapons\bullethitman2",0.0125893,1};	
	soundHitMan1[]={"\d4t_files\sounds\weapons\impacts\hit_man1.wss",0.012589,1};
	soundHitMan2[]={"\d4t_files\sounds\weapons\impacts\hit_man2.wss",0.012589,1};
	soundHitMan3[]={"\d4t_files\sounds\weapons\impacts\hit_man4.wss",0.012589,1};
	soundHitMan4[]={"\d4t_files\sounds\weapons\impacts\hit_man5.wss",0.012589,1};
	soundHitMan5[]={"\d4t_files\sounds\weapons\impacts\hit_man6.wss",0.012589,1};
	soundHitMan6[]={"\d4t_files\sounds\weapons\impacts\hit_man7.wss",0.012589,1};

	//soundHitArmor1[]={"weapons\small_impact1",0.0316228,1};
	//soundHitArmor2[]={"weapons\Big_Impact2",0.0316228,1};
	soundHitArmor1[]={"\d4t_files\sounds\weapons\impacts\hit_metal1.wss",0.031623,1};
	soundHitArmor2[]={"\d4t_files\sounds\weapons\impacts\hit_metal2.wss",0.031623,1};
	soundHitArmor3[]={"\d4t_files\sounds\weapons\impacts\hit_metal3.wss",0.031623,1};
	soundHitArmor4[]={"\d4t_files\sounds\weapons\impacts\hit_metal4.wss",0.031623,1};
	soundHitArmor5[]={"\d4t_files\sounds\weapons\impacts\hit_metal5.wss",0.031623,1};
	soundHitArmor6[]={"\d4t_files\sounds\weapons\impacts\hit_metal6.wss",0.031623,1};
	soundHitArmor7[]={"\d4t_files\sounds\weapons\impacts\hit_metal7.wss",0.031623,1};
	soundHitArmor8[]={"\d4t_files\sounds\weapons\impacts\hit_metal8.wss",0.031623,1};

	//soundHitBuilding1[]={"weapons\bulletricochet4",0.0316228,1};
	//soundHitBuilding2[]={"weapons\bulletricochet5",0.0316228,1};
	soundHitBuilding1[]={"\d4t_files\sounds\weapons\impacts\ric1.wss",0.031623,1};
	soundHitBuilding2[]={"\d4t_files\sounds\weapons\impacts\ric2.wss",0.031623,1};
	soundHitBuilding3[]={"\d4t_files\sounds\weapons\impacts\ric3.wss",0.031623,1};
	soundHitBuilding4[]={"\d4t_files\sounds\weapons\impacts\ric4.wss",0.031623,1};
	soundHitBuilding5[]={"\d4t_files\sounds\weapons\impacts\ric5.wss",0.031623,1};
	soundHitBuilding6[]={"\d4t_files\sounds\weapons\impacts\ric6.wss",0.031623,1};
	soundHitBuilding7[]={"\d4t_files\sounds\weapons\impacts\ric7.wss",0.031623,1};
	soundHitBuilding8[]={"\d4t_files\sounds\weapons\impacts\ric8.wss",0.031623,1};
	soundHitBuilding9[]={"\d4t_files\sounds\weapons\impacts\ric9.wss",0.031623,1};
	soundHitBuilding10[]={"\d4t_files\sounds\weapons\impacts\ric10.wss",0.031623,1};
	soundHitBuilding11[]={"\d4t_files\sounds\weapons\impacts\ric11.wss",0.031623,1};
	soundHitBuilding12[]={"\d4t_files\sounds\weapons\impacts\ric12.wss",0.031623,1};
	soundHitBuilding13[]={"\d4t_files\sounds\weapons\impacts\ric13.wss",0.031623,1};

	soundfly1[]={"\d4t_files\sounds\weapons\impacts\fly1.wss",0.031623,1};
	soundfly2[]={"\d4t_files\sounds\weapons\impacts\fly2.wss",0.031623,1};
	soundfly3[]={"\d4t_files\sounds\weapons\impacts\fly3.wss",0.031623,1};
	soundfly4[]={"\d4t_files\sounds\weapons\impacts\fly4.wss",0.031623,1};
	soundfly5[]={"\d4t_files\sounds\weapons\impacts\fly5.wss",0.031623,1};

	//soundFly[]={"objects\bulletnoise",0.2511886,0.7};
	soundfly[]={"soundfly1", 0.2, "soundfly2", 0.2, "soundfly3", 0.2, "soundfly4", 0.2, "soundfly5", 0.2};

	//hitGround[]={"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.33};
	hitGround[]={soundHit1,0.125,soundHit2,0.125,soundHit3,0.125,soundHit4,0.125,soundHit5,0.125,soundHit6,0.125,soundHit7,0.125,soundHit8,0.125};

	//hitMan[]={"soundHitMan1",0.5,"soundHitMan2",0.5};
	hitMan[]={soundHitMan1,0.166667,soundHitMan2,0.166667,soundHitMan3,0.166667,soundHitMan4,0.166667,soundHitMan5,0.166667,soundHitMan6,0.166667};

	//hitArmor[]={"soundHitArmor1",0.7,"soundHitArmor2",0.3};
	hitArmor[]={soundHitArmor1,0.125,soundHitArmor2,0.125,soundHitArmor3,0.125,soundHitArmor4,0.125,soundHitArmor5,0.125,soundHitArmor6,0.125,soundHitArmor7,0.125,soundHitArmor8,0.125};

	//hitBuilding[]={"soundHitBuilding1",0.5,"soundHitBuilding2",0.5};
	hitBuilding[]={soundHitBuilding1,0.076,soundHitBuilding2,0.076,soundHitBuilding3,0.076,soundHitBuilding4,0.076,soundHitBuilding5,0.076,soundHitBuilding6,0.076,soundHitBuilding7,0.076,soundHitBuilding8,0.076,soundHitBuilding10,0.076,soundHitBuilding11,0.076,soundHitBuilding12,0.076,soundHitBuilding13,0.076};
};

class BulletBurst : BulletSingle
{
	minRange=0.5;
	minRangeProbab=0.25;
	midRange=70;
	midRangeProbab=0.5;
	maxRange=250;
	maxRangeProbab=0.08;
	visibleFire=25;
	audibleFire=25;
	visibleFireTime=5;
	cost=2.0999999;
};

class BulletFullAuto : BulletBurst
{
	cost=2.5;
};

class BulletSilencedSingle : BulletSingle
{
	hit=8;
	indirectHit=1;
	indirectHitRange=0.1;
	visibleFire=0.035;
	audibleFire=0.035;
	visibleFireTime=2;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedBurst : BulletBurst
{
	hit=8;
	indirectHit=1;
	indirectHitRange=0.1;
	visibleFire=0.05;
	audibleFire=0.05;
	visibleFireTime=2;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSniper : BulletSingle
{
	hit=10;
	indirectHit=2;
	indirectHitRange=0.1;
	minRange=1;
	minRangeProbab=0.1;
	midRange=200;
	midRangeProbab=0.8;
	maxRange=900;
	maxRangeProbab=0.05;
	cost=2;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Bullet7_6 : BulletSingle
{
	airLock=1;
	hit=8;
	indirectHit=2;
	indirectHitRange=0.1;
	minRange=1;
	minRangeProbab=0.9;
	midRange=100;
	midRangeProbab=0.5;
	maxRange=450;
	maxRangeProbab=0.05;
	cost=4;
};

class Bullet12_7 : Bullet7_6
{
	hit=13;
	indirectHit=4;
	indirectHitRange=0.2;
	minRange=4;
	minRangeProbab=0.9;
	midRange=200;
	midRangeProbab=0.5;
	maxRange=500;
	maxRangeProbab=0.05;
	cost=6;
};

class ExplosiveBullet : BulletSingle
{
	airLock=1;
	explosive=1;
	soundHit[]={"Explosions\explosivebullet",1.0,1};
	soundFly[]={"objects\bulletnoise",0.0177828,4};
	hitGround[]={"soundHit",1};
	hitMan[]={"soundHit",1};
	hitArmor[]={"soundHit",1};
	hitBuilding[]={"soundHit",1};
};

class Bullet30 : ExplosiveBullet
{
	hit=100;
	indirectHit=20;
	indirectHitRange=2;
	minRange=20;
	minRangeProbab=0.2;
	midRange=100;
	midRangeProbab=0.5;
	maxRange=1000;
	maxRangeProbab=0.05;
	cost=10;
};

class Bullet30W : Bullet30
{
	tracerColor[]={0.8,0.5,0.1,0.25};
	tracerColorR[]={0.8,0.5,0.1,0.25};
};

class Bullet30E : Bullet30
{
	tracerColor[]={0.2,0.8,0.1,0.25};
	tracerColorR[]={0.2,0.8,0.1,0.25};
};

class Bullet4x23 : ExplosiveBullet
{
	hit=40;
	indirectHit=20;
	indirectHitRange=2;
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	cost=30;
	tracerColor[]={0.2,0.8,0.1,0.25};
	tracerColorR[]={0.2,0.8,0.1,0.25};
};

class BulletSingleW : BulletSingle
{
	tracerColor[]={0.8,0.5,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletBurstW : BulletBurst
{
	tracerColor[]={0.8,0.5,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletFullAutoW : BulletFullAuto
{
	tracerColor[]={0.8,0.5,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedSingleW : BulletSilencedSingle
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedBurstW : BulletSilencedBurst
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSniperW : BulletSniper
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Bullet7_6W : Bullet7_6
{
	tracerColor[]={0.8,0.5,0.1,0.04};
	tracerColorR[]={0.8,0.5,0.1,0.04};
};

class Bullet12_7W : Bullet12_7
{
	tracerColor[]={0.8,0.5,0.1,0.04};
	tracerColorR[]={0.8,0.5,0.1,0.04};
};

class BulletSingleE : BulletSingle
{
	tracerColor[]={0.2,0.8,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletBurstE : BulletBurst
{
	tracerColor[]={0.2,0.8,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletFullAutoE : BulletFullAuto
{
	tracerColor[]={0.2,0.8,0.1,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedSingleE : BulletSilencedSingle
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedBurstE : BulletSilencedBurst
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSniperE : BulletSniper
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Bullet7_6E : Bullet7_6
{
	tracerColor[]={0.2,0.8,0.1,0.04};
	tracerColorR[]={0.2,0.8,0.1,0.04};
};

class Bullet12_7E : Bullet12_7
{
	tracerColor[]={0.2,0.8,0.1,0.04};
	tracerColorR[]={0.2,0.8,0.1,0.04};
};

class BulletSingleG : BulletSingle
{
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletBurstG : BulletBurst
{
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletFullAutoG : BulletFullAuto
{
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedSingleG : BulletSilencedSingle
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSilencedBurstG : BulletSilencedBurst
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletSniperG : BulletSniper
{
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Bullet7_6G : Bullet7_6
{
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0.7,0.7,0.5,0.04};
};

class Bullet12_7G : Bullet12_7
{
	tracerColor[]={0.7,0.7,0.5,0.04};
	tracerColorR[]={0.7,0.7,0.5,0.04};
};

class Shell : Default
{
	model="shell";
	simulation="shotShell";
	simulationStep=0.05;
	cost=1000;
	soundHit[]={"Explosions\explosion_large1",100.0000076,1};
	soundFly[]={"objects\bulletnoise",0.0316228,4};
	indirectHitRange=8;
	minRange=20;
	minRangeProbab=0.75;
	midRange=400;
	midRangeProbab=0.95;
	maxRange=4000;
	maxRangeProbab=0.05;
	visibleFire=16;
	audibleFire=16;
	visibleFireTime=10;
};

class Shell73 : Shell
{
	hit=100;
	indirectHit=90;
	cost=500;
	soundHit[]={"Explosions\expl1",100.0000076,1};
};

class Shell105 : Shell73
{
	hit=150;
	indirectHit=110;
	cost=200;
	soundHit[]={"Explosions\expl2",100.0000076,1};
};

class Shell120 : Shell105
{
	hit=200;
	indirectHit=150;
	cost=300;
	soundHit[]={"Explosions\expl4",100.0000076,1};
};

class Shell125 : Shell120
{
	hit=180;
	indirectHit=100;
	cost=300;
};

class Heat : Shell
{
	indirectHitRange=1;
};

class Heat73 : Heat
{
	hit=400;
	indirectHit=100;
	cost=500;
};

class Heat105 : Heat73
{
	hit=450;
	indirectHit=150;
	cost=600;
};

class Heat120 : Heat105
{
	hit=700;
	indirectHit=300;
	cost=1000;
};

class Heat125 : Heat120
{
	hit=600;
	indirectHit=300;
	cost=1000;
};

class AT3 : Default
{
	hit=500;
	indirectHit=150;
	indirectHitRange=2.5;
	minRange=30;
	minRangeProbab=0.5;
	midRange=200;
	midRangeProbab=0.95;
	maxRange=500;
	maxRangeProbab=0.3;
	model="AT1";
	simulation="shotMissile";
	simulationStep=0.01;
	cost=10000;
	soundHit[]={"Explosions\explosion_at3",100.0000076,1};
	soundFly[]={"weapons\rocketflying",0.01,2};
	soundEngine[]={"objects\noise",0.001,1};
	maxSpeed=200;
	irLock=1;
	manualControl=1;
	maxControlRange=250;
	initTime=0.15;
	thrustTime=2.5;
	thrust=350;
	maneuvrability=3.0;
	visibleFire=32;
	audibleFire=32;
	visibleFireTime=20;
};

class LAW : AT3
{
	hit=500;
	indirectHit=150;
	indirectHitRange=2.5;
	minRange=20;
	minRangeProbab=0.5;
	midRange=75;
	midRangeProbab=0.95;
	maxRange=250;
	maxRangeProbab=0.1;
	model="LAW";
	simulation="shotRocket";
	simulationStep=0.05;
	cost=5000;
	soundHit[]={"Explosions\explosion_at3",31.6227779,1};
	soundFly[]={"objects\noise",0.0001,4};
	maxSpeed=350;
	irLock=1;
	manualControl=1;
	maxControlRange=0;
	initTime=0;
	thrustTime=0.2;
	thrust=2000;
	maneuvrability=0;
};

class RPG : LAW
{
	model="RPG";
};

class CarlGustav : AT3
{
	hit=800;
	indirectHit=200;
	indirectHitRange=2.5;
	minRange=20;
	minRangeProbab=0.5;
	midRange=150;
	midRangeProbab=0.95;
	maxRange=600;
	maxRangeProbab=0.1;
	model="LAW";
	simulation="shotMissile";
	cost=5000;
	soundHit[]={"Explosions\explosion_at3",31.6227779,1};
	soundFly[]={"weapons\rocketflying",0.01,2};
	maxSpeed=200;
	irLock=1;
	manualControl=1;
	maxControlRange=200;
	initTime=0;
	thrustTime=1.5;
	thrust=300;
	maneuvrability=1.0;
};

class AT4 : CarlGustav
{
	model="RPG";
};

class AA : CarlGustav
{
	hit=400;
	indirectHit=150;
	indirectHitRange=2;
	minRange=50;
	minRangeProbab=0.5;
	midRange=400;
	midRangeProbab=0.95;
	maxRange=1200;
	maxRangeProbab=0.3;
	airLock=1;
	cost=20000;
	manualControl=0;
	maxControlRange=1000;
	maxSpeed=350;
	thrustTime=3.0;
	thrust=1000;
	maneuvrability=4.0;
};

/*
Sources:
(1) http://en.wikipedia.org/wiki/Strela_2
initTime: (1) "approximately 0.3 seconds after leaving the launch tube it activates the rocket sustainer motor."
thrustTime: (1) "destroy the missile after between 14 and 17 seconds"
a = v�/2s
t = sqrt(s/0.5a)

time to reach max velocity: (1) "Once it reaches peak speed at a distance of around 120 meters from the gunner" -> t = sqrt(2s�/0.5v�) -> 0,558139
*/
class 9K32 : AA
{
	maxSpeed = 430;
	initTime = 0.3;
	thrust = 400; //approx.
	thrustTime = 17;
};

class Hellfire : AT3
{
	hit=900;
	indirectHit=600;
	indirectHitRange=2.5;
	minRange=50;
	minRangeProbab=0.5;
	midRange=300;
	midRangeProbab=0.95;
	maxRange=1500;
	maxRangeProbab=0.5;
	maxSpeed=350;
	soundHit[]={"Explosions\explosion_at3",100.0000076,1};
	cost=20000;
	model="TOW";
	irLock=1;
	laserLock=1;
	manualControl=0;
	maxControlRange=100000;
	maneuvrability=20.0;
	initTime=0.15;
	thrustTime=5.5;
	thrust=1200;
};

class HellfireApach : Hellfire
{
	model="\Apac\hellfire";
	proxyShape="\Apac\Hellfire_proxy";
};

class Zuni : Hellfire
{
	hit=700;
	indirectHit=300;
	indirectHitRange=3;
	minRange=50;
	minRangeProbab=0.2;
	midRange=250;
	midRangeProbab=0.2;
	maxRange=1000;
	maxRangeProbab=0.05;
	maxSpeed=1000;
	simulation="shotRocket";
	simulationStep=0.05;
	cost=2000;
	soundHit[]={"Explosions\expl1",100.0000076,1};
	model="ZUNI";
	irLock=0;
	laserLock=0;
	maneuvrability=0.0;
	maxControlRange=0;
	initTime=0.05;
	thrustTime=3.5;
	thrust=500;
};

class Rocket57 : Zuni
{
	soundHit[]={"Explosions\expl2",100.0000076,1};
	hit=400;
	indirectHit=250;
	indirectHitRange=3;
};

class Maverick : Hellfire
{
	hit=1900;
	indirectHit=800;
	indirectHitRange=2.5;
	model="Maverik";
	minRange=200;
	minRangeProbab=0.3;
	midRange=600;
	midRangeProbab=0.8;
	maxRange=2000;
	maxRangeProbab=0.5;
	thrust=700;
	laserLock=0;
	proxyShape="Maverik_proxy";
};

class LaserGuidedBomb : Default
{
	hit=5000;
	indirectHit=3500;
	indirectHitRange=15;
	minRange=50;
	minRangeProbab=0.5;
	midRange=300;
	midRangeProbab=0.95;
	maxRange=2500;
	maxRangeProbab=0.5;
	soundHit[]={"\LaserGuided\expl2",100.0000076,1};
	cost=20000;
	model="Snake";
	proxyShape="Snake";
	irLock=0;
	laserLock=1;
	maxControlRange=100000;
	maneuvrability=16.0;
	sideAirFriction=0.1;
	simulation="shotMissile";
	maxSpeed=100;
	initTime=0;
	thrustTime=0;
	thrust=0;
};

class Grenade : Default
{
	hit=20;
	//Grenades were too deadly, especially on people in buildings and with tank crews throwing them all the time. Maybe these grenades could be like blast effects only instead of trying to (badly) simulate fragmentation damage. The blast effects will be more wounding than lethal and will require more than one indirect grenade hit to kill a person unless it's right next to them.
	//indirectHit=18;
	//indirectHitRange=7;
	indirectHit=6.5; //Dust and such things caused by the explosion
	indirectHitRange=8;	//approximate range between lethality radius and casualty radius
	minRange=15;
	minRangeProbab=0.3;
	midRange=80;
	midRangeProbab=0.55;
	//Longer engagement range.
	//maxRange=150;
	//maxRangeProbab=0.0;
	maxRange=250;
	maxRangeProbab=0.01;
	model="granat";
	cost=40;
	simulation="shotShell";
	simulationStep=0.05;
	soundHit[]={"Explosions\expl3",10.0,1};
	//Louder
	//soundFly[]={"objects\noise",0.0000316,1};
	soundFly[]={"objects\noise",0.000316,1};
	soundEngine[]={"",0.0001,4};
	visibleFire=2;
	audibleFire=0.25;
	visibleFireTime=0;
};

class GrenadeHand : Grenade
{
	model="handgrenade.p3d";
	minRange=40;
	minRangeProbab=0.1;
	midRange=45;
	midRangeProbab=0.3;
	maxRange=60;
	maxRangeProbab=0.5;
	visibleFire=2;
	audibleFire=0.25;
	visibleFireTime=1;
};

class StrokeFistHit : Default
{
	hit=2;
	indirectHit=0.5;
	indirectHitRange=0.2;
	minRange=0;
	minRangeProbab=0.3;
	midRange=0.5;
	midRangeProbab=0.8;
	maxRange=1;
	maxRangeProbab=0.0;
	model="granat";
	simulation="shotStroke";
	cost=1;
	simulationStep=0.05;
	soundHit[]={"",0.0000316,1};
	soundFly[]={"objects\noise",0.0000316,4};
	soundEngine[]={"",0.0001,4};
	visibleFire=2;
	audibleFire=0.25;
	visibleFireTime=1;
};

class StrokeGunHit : StrokeFistHit
{
	hit=8;
	indirectHit=1;
	indirectHitRange=0.4;
};

class MortarShell : Grenade
{
	hit=50;
	indirectHit=40;
	indirectHitRange=10;
	minRange=45;
	minRangeProbab=0.5;
	midRange=240;
	midRangeProbab=0.55;
	maxRange=450;
	maxRangeProbab=0.0;
	model="mortarShell";
	soundHit[]={"Explosions\expl4",10.0,1};
	cost=120;
};

class Flare : Grenade
{
	hit=5;
	indirectHit=2;
	indirectHitRange=0.2;
	cost=100;
	simulation="shotIlluminating";
	simulationStep=0.05;
	explosive=0;
	soundHit[]={"",0,1};
	lightColor[]={1,1,1,0};
};

class FlareGreen : Flare
{
	lightColor[]={0,1,0,0};
};

class FlareRed : Flare
{
	lightColor[]={1,0,0,0};
};

class FlareYellow : Flare
{
	lightColor[]={1,1,0,0};
};

class SmokeShell : GrenadeHand
{
	hit=5;
	indirectHit=2;
	indirectHitRange=0.2;
	cost=100;
	simulation="shotSmoke";
	explosive=0;
	soundHit[]={"",0,1};
	smokeColor[]={1,1,1,0};

	class Smoke
	{
		interval=0.01;
		cloudletDuration=4.0;
		cloudletAnimPeriod=1.0;
		cloudletSize=0.25;
		cloudletAlpha=1.0;
		cloudletGrowUp=1.5;
		cloudletFadeIn=0.0;
		cloudletFadeOut=5.0;
		cloudletAccY=-0.3;
		cloudletMinYSpeed=0;
		cloudletMaxYSpeed=10;
		cloudletShape="cl_basic";
		cloudletColor[]={1,1,1,0};
		initT=1000;
		deltaT=-500;
		density=1.0;
		size=1.5;
		initYSpeed=1.0;
		timeToLive=1.00000002004088E+20;
		in=3.0;
		out=0.0;

		class Table
		{

			class T1
			{
				maxT=0;
				color[]={0.7,0.7,0.7,1};
			};

			class T2
			{
				maxT=1000;
				color[]={0.4,0.4,0.4,1};
			};
		};
	};
};

class SmokeShellRed : SmokeShell
{
	smokeColor[]={1,0.25,0,0};
};

class SmokeShellGreen : SmokeShell
{
	smokeColor[]={0.2,0.8,0.2,0};
};

class TimeBomb : Default
{
	hit=700;
	indirectHit=700;
	indirectHitRange=7;
	minRange=0;
	minRangeProbab=0.95;
	midRange=5;
	midRangeProbab=0.9;
	maxRange=10;
	maxRangeProbab=0.0;
	model="satchel.p3d";
	cost=2000;
	simulation="shotTimeBomb";
	simulationStep=0.1;
	soundHit[]={"Explosions\timebomb",100.0000076,1};
	soundFly[]={"",0,1};
	soundEngine[]={"",0,1};
	visibleFire=0;
	audibleFire=0;
	visibleFireTime=0;
};

class PipeBomb : TimeBomb
{
	simulation="shotPipeBomb";
};

class Mine : TimeBomb
{
	hit=750;
	indirectHit=750;
	indirectHitRange=5;
	simulation="shotMine";
	model="m19_at_proxy.p3d";
	defaultMagazine="Mine";
};

class MineE : Mine
{
	model="tm_62m.p3d";
	defaultMagazine="MineE";
};

class FuelExplosion : Default
{
	hit=100;
	indirectHit=80;
	indirectHitRange=8;
	minRange=10;
	minRangeProbab=0.9;
	midRange=20;
	midRangeProbab=0.99;
	maxRange=30;
	maxRangeProbab=0.8;
	model="";
	simulation="";
	cost=1;
	soundHit[]={"Explosions\fuel_explosion",100.0000076,1};
	soundFly[]={"",1,1};
	soundEngine[]={"",1,4};
};

//Resistance
class Bizon : BulletSilencedSingle
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.1;
};

class G36a : BulletSingle
{
	hit=11;
	indirectHit=1;
	indirectHitRange=0.1;
};

class KozliceBall : BulletSingle
{
};

class KozliceShell : BulletBurst
{
	hit=9;indirectHit=6;indirectHitRange=0.1;
};

class LaserDesignator : default
{
	hit=500;
	indirectHit=150;
	indirectHitRange=2.5;
	minRange=50;
	minRangeProbab=0.3;
	midRange=150;
	midRangeProbab=0.95;
	maxRange=500;
	maxRangeProbab=0.1;
	model="LAW";
	simulation="laserDesignate";
	simulationStep=0.1;
	cost=5000;
	soundHit[]={"Explosions\explosion_at3",31.6227779,1};
	soundFly[]={"objects\noise",0.0001,4};
	maxSpeed=350;
	irLock=1;
	manualControl=1;
	maxControlRange=0;
	aiRateOfFire=0;
	aiRateOfFireDistance=500;
	initTime=0;
	maneuvrability=0;
};

class Cannon25HE : ExplosiveBullet
{
	hit=30;
	indirectHit=15;
	indirectHitRange=3;
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	cost=200;
	soundHit[]={"\m2a2\double_expl.wss",31.6227779,1};
};

class Cannon30HE : ExplosiveBullet
{
	hit=20;
	indirectHit=10;
	indirectHitRange=3;
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	soundHit[]={"\o\vehl\v80_expl.wss",31.6227779,1};
	cost=40;
};

class Cannon30AP : BulletSingle
{
	hit=90;
	indirectHit=5;
	indirectHitRange=1;
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	soundHit[]={"weapons\Big_Impact2",0.0316228,1};
	cost=80;
};

class CZ75 : BulletSingle
{
	access=2;
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
	visibleFire=14;
	audibleFire=14;
	visibleFireTime=2;
	minRange=1;
	minRangeProbab=0.1;
	midRange=10;
	midRangeProbab=0.7;
	maxRange=100;
	maxRangeProbab=0.04;
	cartridge="FxCartridgeSmall";
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Skorpion : CZ75
{
	hit=6;
	indirectHit=1;
	indirectHitRange=0.05;
	cartridge="FxCartridgeSmall";
};

class Tokarev : CZ75
{
	hit=9;
	indirectHit=1;
	indirectHitRange=0.05;
};

class Beretta : CZ75
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
};

class HKG3 : CZ75
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
};

class FAL : CZ75
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
};

class Glock : CZ75
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
};

class UZI : BulletSilencedSingleW
{
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
};

class HuntingRifle : BulletSingle
{
	hit=11;
	indirectHit=1;
	indirectHitRange=0.05;
	visibleFire=12;
	audibleFire=25;
	visibleFireTime=1;
};

class RevolverBullet : CZ75
{
	access="ReadOnly";
	hit=11;
	indirectHit=1;
	indirectHitRange=0.05;
	visibleFire=14;
	audibleFire=17;
	visibleFireTime=2;
	minRange=1;
	minRangeProbab=0.1;
	midRange=10;
	midRangeProbab=0.7;
	maxRange=100;
	maxRangeProbab=0.04;
	cartridge="";
};

class IngramBullet : CZ75
{
	access="ReadOnly";
	hit=7;
	indirectHit=1;
	indirectHitRange=0.05;
	visibleFire=14;
	audibleFire=14;
	visibleFireTime=2;
	minRange=1;
	minRangeProbab=0.1;
	midRange=10;
	midRangeProbab=0.7;
	maxRange=100;
	maxRangeProbab=0.04;
};

class GlockS : Glock
{
	hit=6;
	indirectHit=1;
	indirectHitRange=0.05;
	visibleFire=0.035;
	audibleFire=0.035;
	visibleFireTime=2;
};

class Steyr : BulletSingle
{
	hit=10;
	indirectHit=1;
	indirectHitRange=0.1;
};

class Bullet4x20 : ExplosiveBullet
{
	hit=90;
	indirectHit=45;
	indirectHitRange=2;
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	cost=30;
};

//CWA
class BISBulletCamel : Bullet12_7
{
	hit = 20;
	indirectHit = 4;
	indirectHitRange = 0.2;
	minRange = 4;
	minRangeProbab = 0.9;
	midRange = 400;
	midRangeProbab = 0.5;
	maxRange = 800;
	maxRangeProbab = 0.05;
	cost = 6;
};

class BISGrenadeCamel : Default
{
	hit = 50;
	indirectHit = 40;
	indirectHitRange = 10;
	minRange = 50;
	minRangeProbab = 0.5;
	midRange = 300;
	midRangeProbab = 0.95;
	maxRange = 1500;
	maxRangeProbab = 0.5;
	soundHit[] = {"Explosions\expl4", 10, 1};
	cost = 200;
	model = "mortarShell";
	proxyShape = "Snake";
	irLock = 0;
	laserLock = 0;
	maxControlRange = 0;
	maneuvrability = 16;
	sideAirFriction = 0.1;
	simulation = "shotMissile";
	maxSpeed = 100;
	initTime = 0;
	thrustTime = 0;
	thrust = 0;
};