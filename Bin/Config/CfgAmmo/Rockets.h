/*
	M72 LAW
	Sources:
	(1) http://en.wikipedia.org/wiki/M72_LAW
	http://www.inetres.com/gp/military/infantry/antiarmor/M72.html
Thrust: (1) "The rocket motor burns complete before leaving the mouth of the launcher"
*/
class RocketM72LAW : LAW
{
	model="\d4t_files\models\neutral\fired\m72law.p3d";
	cost = COST_ROCKET_M72LAW;
	hit = 450;
	indirectHit = 15;
	indirectHitRange = 4
	irLock = false;
	soundHit[]={"\d4t_files\sounds\weapons\impacts\smaw_ground.wss",db+25,1.0};
	soundFly[]={"\d4t_files\sounds\weapons\impacts\smaw_fly.ogg",db+0,1.0};
	minRange = 10;
	minRangeProbab = 0.5;
	midRange = 100;
	midRangeProbab = 0.7;
	maxRange = 200;
	maxRangeProbab = 0.1;
	thrustTime = 0;
	thrust = 0;
};

/*
Sources:
http://en.wikipedia.org/wiki/M47_Dragon
http://www.designation-systems.net/dusrm/m-77.html
http://www.hesterman.net/Html/dragon_m47.htm
*/

class RocketM47Dragon : AA
{
	hit = 1000;
	indirectHit = 50;
	indirectHitRange = 6; //6m... NO PROOF!
	model="at1";
	maxSpeed = 200;
	initTime=0.01;
	maneuvrability=4.4;
	canLock = true;
	manualControl=1;
	airLock=false;
	irLock=true;
	laserLock=true;
	SoundHitArmor1[]={"\d4t_files\sounds\weapons\handheld\fgm148_hit_arm1.wss","db70",1};
	SoundHitArmor2[]={"\d4t_files\sounds\weapons\handheld\fgm148_hit_arm2.wss","db70",1};
	SoundHitArmor3[]={"\d4t_files\sounds\weapons\handheld\fgm148_hit_arm3.wss","db70",1};
	soundHit1[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",100.999999,0.900000};
	soundHit2[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",100.999999,0.800000};
	soundHit3[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",100.999999,0.850000};
	soundHitGround[]={"\d4t_files\sounds\weapons\impacts\Hellfire2.wss",80.000008,0.800000};
	hitGround[]={"soundHitGround",1};
	hitArmor[]={"soundHit2",0.333333,"soundHit3",0.333333,"soundHit1",0.333333};
	hitBuilding[]={"soundHitGround",1};
	hitMan[]={"soundHitGround",1};
	soundFly[]={"\d4t_files\sounds\weapons\handheld\fgm148_fly.ogg","db18",1};
};

/*
Sources:
http://en.wikipedia.org/wiki/FIM-92_Stinger
*/

class RocketFIM92Stinger : CarlGustav
{
	hit = 400;
	indirectHit = 150;
	indirectHitRange=2;
	minRange = 50;
	minRangeProbab=0.5;
	midRange = 400;
	midRangeProbab = 0.95;
	maxRange = 1200;
	maxRangeProbab = 0.3;
	airLock=1;
	cost = COST_ROCKET_FIM92;
	manualControl=0;
	maxControlRange=1000;
	maxSpeed = 700;
	thrustTime=3.0;
	thrust=1000;
	maneuvrability=4.0;
	model="\d4t_files\models\neutral\fired\fim92a.p3d";//used odol explorer for this
};

/*
Sources:
http://usfighter.tripod.com/weapons.htm
maxSpeed = 1150 km/h = 1150 * 1000 m/h = 1150 * 1000 / 60 * 60 m/s = 1150 / 3.6
*/
class AGM65MaverickB : Maverick
{
	hit = HIT_AGM65MAVERICK;
	indirectHit = INDIRECTHIT_AGM65MAVERICK;
	indirectHitRange = INDIRECTHITRANGE_AGM65MAVERICK;
	maneuvrability = 10;
	thrust = 325; //No Proof
	thrustTime = 15; //No Proof
	maxSpeed = 319.444444;
	model="\d4t_files\models\us\weapons\air\agm65b.p3d";
};

/*
Sources:
	http://www.fas.org/man/dod-101/sys/smart/agm-88.htm
*/
class AGM88HARM : Hellfire
{
	model="\sjc_models\usa\objects\agm88.p3d";
	hit = HIT_AGM88HARM;
	indirectHit = INDIRECTHIT_AGM88HARM;
	indirectHitRange = INDIRECTHITRANGE_AGM88HARM;
	irLock =true;
	airLock =false;
	laserLock =false;
	maneuvrability=35.0;
	initTime=.8;
	thrust = 300;
	thrustTime = 10; //No Proof
	maxSpeed = 2280;
};

/*
Sources:
	http://en.wikipedia.org/wiki/AGM-114_Hellfire
	http://www.alternatewars.com/BBOW/Weapons/US_ATGMs.htm
*/
class RocketAGM114A : AT3
{
	hit = HIT_AGM114A;
	indirectHit = INDIRECTHIT_AGM114A;
	indirectHitRange = INDIRECTHITRANGE_AGM114A;
	maxSpeed = 1528;
	cost = COST_ROCKET_AGM114A;
	irLock=1;
	laserLock=1;
	manualControl=0;
	maxControlRange=100000;
	maneuvrability=20.0;
	model="\d4t_files\models\us\weapons\air\agm114a.p3d";
	proxyShape="\d4t_files\models\us\weapons\air\agm114a.p3d";
	initTime=0.15;
	thrustTime = 3;
	thrust = 510;
	//No Proof for range values
	minRange=50;
	minRangeProbab=0.50;
	midRange=300;
	midRangeProbab=0.95;
	maxRange=1500;
	maxRangeProbab=0.50;
};

/*
Sources:
	http://en.wikipedia.org/wiki/Hydra_70
Info:
	g = 9.81 m/s²
	Acceleration: 60-70 g (initial) 95-100 g (final)
	Burn time: 1.05 - 1.10 sec
	Motor burnout velocity: 2,425 ft/s (739 m/s)
*/
class RocketHydra70 : Zuni
{
	hit = HIT_HYDRA70;
	indirectHit = INDIRECTHIT_HYDRA70;
	indirectHitRange = INDIRECTHITRANGE_HYDRA70;
	thrust = 687; //70g
	thrustTime = 1.075;
	maxSpeed = 739;
};

/*
Sources:
*/
class RocketAIM7 : AA
{
	model="\sjc_models\west\objects\aim7.p3d";
	hit = HIT_AIM7;
	indirectHit = INDIRECTHIT_AIM7;
	indirectHitRange = INDIRECTHITRANGE_AIM7;
	maneuvrability=45;
	airLock=true;
	irLock=false;
	laserLock=false;
	initTime=0.1;
	thrustTime=500; //No Proof!
	maxControlRange=4000;
	thrust=1000; //No Proof
	maxSpeed=1300; //No Proof
	//No Prooves for Ranges
	minRange=500;
	minRangeProbab=0.7;
	midRange=2000;
	midRangeProbab=0.95;
	maxRange=4000;
	maxRangeProbab=0.6;
};

/*
Sources:
	http://www.deagel.com/Air-to-Air-Missiles/AIM-9X-Sidewinder_a001166003.aspx
Info:
	Top Speed: 850 m/s
*/
class RocketAIM9 : AA
{
	model="\sjc_models\west\objects\aim9.p3d";
	hit = HIT_AIM9M;
	indirectHit = INDIRECTHIT_AIM9M;
	indirectHitRange = INDIRECTHITRANGE_AIM9M;
	maneuvrability=40;
	airLock=true;
	irLock=false;
	laserLock=false;
	initTime=0.1;
	maxControlRange=2000;
	thrust=550; //No Proof!!!
	ThrustTime=15; //No Proof!!!
	maxSpeed = 850;
	//No Proof
	minRange=200;
	minRangeProbab=0.7;
	midRange=750;
	midRangeProbab=0.95;
	maxRange=2000;
	maxRangeProbab=0.6;
};
class RocketAIM9M : RocketAIM9
{
	maneuvrability=75;
	maxleadspeed=4000;
	model="\d4t_files\models\us\weapons\air\aim9m.p3d";
};

/*
Sources:
	http://en.wikipedia.org/wiki/Aim54
	http://www.tpub.com/content/aviation2/P-825/P-8250110.htm
Info:
	Kill Radius: 50 feet = ~15m
	Burn time: 27s
	Max Speed: 4680km/h
*/
class RocketAIM54 : AA
{
	model="\sjc_models\west\objects\aim54.p3d";
	hit = HIT_AIM54;
	indirectHit = INDIRECTHIT_AIM54;
	indirectHitRange = INDIRECTHITRANGE_AIM54;
	maneuvrability=35;
	airLock=true;
	irLock=false;
	laserLock=false;
	initTime=0.1;
	thrustTime = 27;
	maxControlRange=8000;
	thrust = 1000; //No Proof!
	maxSpeed = 4680;
	//No Prooves for Range values
	minRange=500;
	minRangeProbab=0.7;
	midRange=4000;
	midRangeProbab=0.95;
	maxRange=8000;
	maxRangeProbab=0.8;
};

/*
Sources:
	http://en.wikipedia.org/wiki/BGM-71_TOW
	http://www.periscope.ucg.com/mdb-smpl/weapons/missrock/antitank/w0003228.shtml
	http://www.alternatewars.com/BBOW/Weapons/US_ATGMs.htm
*/
class RocketBGM71TOW : Hellfire
{
	hit = HIT_BGM71TOW;
	indirectHit = INDIRECTHIT_BGM71TOW;
	indirectHitRange = INDIRECTHITRANGE_BGM71TOW;
	thrustTime = 11;
	thrust = 278;
	maxSpeed = 278;
	maneuvrability = 10;
	maxControlRange = 3000;
	minRange = 65;
	minRangeProbab = 0.3;
	midRange = 1000;
	midRangeProbab = 0.95;
	maxRange = 3000;
	maxRangeProbab = 0.5;
};

class RocketBGM71DTOW : RocketBGM71TOW
{
	hit = HIT_BGM71DTOW;
	indirectHit = INDIRECTHIT_BGM71DTOW;
	indirectHitRange = INDIRECTHITRANGE_BGM71DTOW;
	model="\d4t_files\models\neutral\fired\tow.p3d";
	maneuvrability=20.0;
	manualControl=1;
	maxControlRange=1450;
	canLock = CANLOCK_YES;
	airLock=0;
	irLock=1;
	laserLock=1;
};

class RocketBGM71ETOW : RocketBGM71DTOW
{
	hit = HIT_BGM71ETOW;
	indirectHit = INDIRECTHIT_BGM71ETOW;
	indirectHitRange = INDIRECTHITRANGE_BGM71ETOW;
	model="\d4t_files\models\neutral\fired\towa.p3d";
	SoundHitArmor1[]={"\d4t_files\sounds\weapons\impacts\jav_arm1.wss","db30",1};
	SoundHitArmor2[]={"\d4t_files\sounds\weapons\impacts\jav_arm2.wss","db30",1};
	SoundHitArmor3[]={"\d4t_files\sounds\weapons\impacts\jav_arm3.wss","db30",1};
	soundHit1[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",101.0,0.9};
	soundHit2[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",101.0,0.8};
	soundHit3[]={"\d4t_files\sounds\weapons\impacts\jav_ground.wss",101.0,0.85};
	soundHitGround[]={"\d4t_files\sounds\weapons\impacts\Hellfire2.wss",80.0000076,0.8};
	hitGround[]={"soundHitGround",1};
	hitArmor[]={"soundHit2",0.333333,"soundHit3",0.333333,"soundHit1",0.333333};
	hitBuilding[]={"soundHitGround",1};
	hitMan[]={"soundHitGround",1};
	soundFly[]={"\d4t_files\sounds\weapons\impacts\javelin_fly.ogg","db18",1};
	soundEngine[]={"objects\noise","db-90",1};
};

class RocketBGM71ETOW_HMMWV : Bullet12_7
{
	airLock=1;
	hit = HIT_BGM71ETOW;
	indirectHit = INDIRECTHIT_BGM71ETOW;
	indirectHitRange = INDIRECTHITRANGE_BGM71ETOW;
	minRange=100;
	minRangeProbab=0.7;
	midRange=1500;
	midRangeProbab=0.9;
	maxRange=3500;
	maxRangeProbab=0.8;
	soundHit[]={"",0,1};
	soundHitMan[]={"",0,1};
	soundHitArmor[]={"",0,1};
	soundHitBuilding[]={"",0,1};
	soundFly[]={"",0.010000,2};
	soundEngine[]={"",0.001000,1};
	explosive=0;
	initTime=-1.000000;
	cost=100;
	tracerColor[]={0,0,0,0};
	visibleFire=32;
	audibleFire=32;
	visibleFireTime=20;
};