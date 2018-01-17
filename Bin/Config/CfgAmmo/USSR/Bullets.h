//5.45 × 39mm
class BulletUSSR545x39 : BulletSingle
{
	hit = 7;
	indirectHit = 1;
	indirectHitRange = 0.018; //Bullet Fragmentation... 1.8cm
	visibleFire=16;
	audibleFire=20;
	visibleFireTime=3;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

class BulletUSSR545x39_Auto : BulletUSSR545x39
{
	visibleFireTime = 6;
	cost = COST_BULLETAUTO;
};

class BulletUSSR545x39SD : BulletUSSR545x39
{
	visibleFire = 3.75;
	audibleFire = 1.5;
	visibleFireTime = 1.75;
	tracerColor[]={0,0,0,0.005};
	tracerColorR[]={0,0,0,0.005};
};

class BulletUSSR545x39SD_Auto : BulletUSSR545x39SD
{
	visibleFireTime = 2;
	cost = COST_BULLETAUTO;
};

//7.62 × 39mm
class BulletUSSR762x39 : BulletSingle
{
	hit = 10;
	indirectHit = 2;
	indirectHitRange = 0.03; //Bullet Fragmentation... 3cm
	visibleFire = 18;
	audibleFire = 24;
	visibleFireTime=3;
	cost = COST_BULLET762X39;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

class BulletUSSR762x39_Auto : BulletUSSR762x39
{
	visibleFireTime = 6;
	cost = COST_BULLETAUTO;
};

//7.62 × 54mmR
class BulletUSSR762x54R : BulletSingle
{
	hit = 11;
	indirectHit = 2;
	indirectHitRange = 0.03; //Bullet Fragmentation... 3cm
	visibleFire = 18;
	audibleFire = 24;
	visibleFireTime=3;
	cost = COST_BULLET762X54R;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

//12.7 x 108mm
class BulletUSSR127x108 : Bullet30E
{
	soundHit1[]={"weapons\bulletricochet1",0.4,1};
	soundHit2[]={"weapons\bulletricochet2",0.4,1};
	soundHit3[]={"weapons\bulletricochet3",0.4,1};
	soundHitMan1[]={"weapons\bullethitman1",0.3,1};
	soundHitMan2[]={"weapons\bullethitman2",0.3,1};
	soundHitArmor1[]={"weapons\small_impact1",0.5,1};
	soundHitArmor2[]={"weapons\Big_Impact2",0.5,1};
	soundHitBuilding1[]={"weapons\bulletricochet4",0.4,1};
	soundHitBuilding2[]={"weapons\bulletricochet5",0.4,1};
	hitGround[]={"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.33};
	hitMan[]={"soundHitMan1",0.5,"soundHitMan2",0.5};
	hitArmor[]={"soundHitArmor1",0.7,"soundHitArmor2",0.3};
	hitBuilding[]={"soundHitBuilding1",0.5,"soundHitBuilding2",0.5};
	hit = 16;
	indirectHit = 4;
	indirectHitRange = 0.05; //Bullet Fragmentation... 5cm
	explosive=0;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

//14.5 x 114mm
class BulletUSSR145x114 : Bullet30
{
	hit = 25;
	indirectHit = 8;
	indirectHitRange = 0.1; //Bullet Fragmentation... 10cm
	explosive = false;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

//23 x 115mm
class BulletUSSR23x115 : Bullet30
{
	hit=50;
	indirectHit=25;
	indirectHitRange = 2.0;
	explosive=1;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

/*
23 x 152mm
Sources:
	http://en.wikipedia.org/wiki/23x152_mm
*/
class BulletUSSR23x152 : Bullet30
{
	hit = 60;
	indirectHit = 30;
	indirectHitRange = 3.0; //Cause incendiary... but no proof
	explosive = false;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

//30 x 155mm
class BulletUSSR30x155 : Bullet30
{
	hit = 85;
	indirectHit = 30;
	indirectHitRange = 2.7;
	explosive=1;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};

//30 x 165mm
class BulletUSSR30x165 : Bullet30
{
	hit=100;
	indirectHit=40;
	indirectHitRange = 3.0;
	explosive=1;
	tracerColor[]={0.2, 0.8, 0.1, 0.02};
	tracerColorR[]={0, 0, 0, 0.005};
};