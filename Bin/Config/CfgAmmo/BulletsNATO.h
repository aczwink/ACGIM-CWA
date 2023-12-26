//5.56 x 45mm
class BulletNATO556x45 : BulletSingle
{
	hit = 8;
	indirectHit = 1;
	indirectHitRange = 0.02; //Bullet Fragmentation... 2cm
	visibleFire=16;
	audibleFire=20;
	visibleFireTime=3;
	tracerColor[]={0.8,0.5,0.1,0.25};
	tracerColorR[]={0,0,0,0.005};
};

class BulletNATO556x45_Burst : BulletNATO556x45
{
	visibleFireTime=5;
	cost = COST_BULLETBURST;
};

class BulletNATO556x45_Auto : BulletNATO556x45
{
	visibleFireTime = 6;
	cost = COST_BULLETAUTO;
};

//5.56 x 45mm SD
class BulletNATO556x45_SD : BulletNATO556x45
{
	visibleFire = 3.75;
	audibleFire = 1.5;
	visibleFireTime = 1.75;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletNATO556x45_SD_Auto : BulletNATO556x45_SD
{
	visibleFireTime = 2.0;
	cost = COST_BULLETAUTO;
};

//7.62 x 51mm
class BulletNATO762x51 : BulletSingle
{
	hit = 11;
	indirectHit = 2;
	indirectHitRange = 0.03; //Bullet Fragmentation... 3cm
	visibleFire = 18;
	audibleFire = 24;
	visibleFireTime=3;
	cost = COST_BULLET762X51;
	tracerColor[]={0.8,0.5,0.1,0.25};
	tracerColorR[]={0,0,0,0.005};
};

class BulletNATO762x51_SD : BulletNATO762x51
{
	visibleFire = 4;
	audibleFire = 1.75;
	visibleFireTime = 1.75;
	tracerColor[]={0,0,0,0.005};
};

//.50 BMG - 12.7 x 99mm
class BulletNATO127x99 : BulletSingle
{
	hit = 15;
	indirectHit = 3;
	indirectHitRange = 0.05; //Bullet Fragmentation... 5cm
	cost = COST_BULLET127X99;
	visibleFire = 22;
	audibleFire = 28;
	tracerColor[]={0.8,0.5,0.1,0.25};
	tracerColorR[]={0,0,0,0.005};
};

//.45 ACP
class Bullet45ACP : BulletSingle
{
	hit = 6;
	indirectHit = 1;
	indirectHitRange = 0.03; //Bullet Fragmentation... 3cm here... should be smaller because velocity is much slower
	visibleFire = 10;
	audibleFire = 15;
	visibleFireTime = 1;
	cartridge="FxCartridgeSmall";
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class Bullet45ACP_SD : Bullet45ACP
{
	visibleFire = 0.035;
	audibleFire = 0.035;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

//9x19
class Bullet9x19 : BulletSingle
{
	hit=6.5;
	indirectHit=1;
	indirectHitRange=0.050000;
	visibleFire=14;
	audibleFire=14;
	visibleFireTime=2;
	cartridge="FxCartridgeSmall";
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
	//No Proof for Range Values
	minRange=1;
	minRangeProbab=0.100000;
	midRange=10;
	midRangeProbab=0.700000;
	maxRange=20;
	maxRangeProbab=0.040000;
};

//20�102mm
class Bullet20x102 : ExplosiveBullet
{
	cost = COST_BULLET20X102;
	hit = HIT_M61VULCAN;
	indirectHit = INDIRECTHIT_M61VULCAN;
	indirectHitRange = INDIRECTHITRANGE_M61VULCAN;
	tracerColor[]={0.8,0.5,0.1,0.25};
	tracerColorR[]={0,0,0,0.005};
	//No Proof for Range Values
	minRange=20;
	minRangeProbab=0.20;
	midRange=200;
	midRangeProbab=0.50;
	maxRange=1000;
	maxRangeProbab=0.05;
};

//30 x 113mm
class Bullet30x113 : Bullet30W
{
	hit = HIT_M230CHAINGUN;
	indirectHit = INDIRECTHIT_M230CHAINGUN;
	indirectHitRange = INDIRECTHITRANGE_M230CHAINGUN;
	cost = COST_BULLET30X113;
	explosive=0;
	soundHit[]={"\d4t_files\sounds\weapons\impacts\hitbull6.wav",3.162278,1};
	tracerColor[]={2.000000,0.500000,0.000000,1.000000};
	tracerColorR[]={2.000000,0.500000,0.000000,1.000000};
	minRange = 100;
	minRangeProbab = 0.20;
	midRange = 1000;
	midRangeProbab = 0.6;
	maxRange = 3000;
	maxRangeProbab = 0.05;
		
};

//30 x 173mm
class Bullet30x173 : Bullet30
{
	explosive=1;
	hit = HIT_GAU8AVENGER;
	indirectHit = INDIRECTHIT_GAU8AVENGER;
	indirectHitRange = INDIRECTHITRANGE_GAU8AVENGER;
	cost = COST_BULLET30X173;
	visibleFire = 25;
	visibleFireTime = 2;
	audibleFire = 25;
	tracerColor[]={0.8,0.5,0.1,0.75};
	tracerColorR[]={0.8,0.5,0.1,0.75};
	//No Proof for Range Values
	minRange = 100;
	minRangeProbab = 0.5;
	midRange = 600;
	midRangeProbab = 0.90;
	maxRange = 1200;
	maxRangeProbab=0.05;
};