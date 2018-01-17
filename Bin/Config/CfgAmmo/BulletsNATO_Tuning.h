/*
	M16A2
	Sources:
	http://en.wikipedia.org/wiki/M16_rifle
	http://www.fas.org/man/dod-101/sys/land/m16.htm
*/
class M16A2_Single : BulletNATO556x45
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 200;
	midRangeProbab = 0.5;
	maxRange = 550;
	maxRangeProbab = 0.08;
};

class M16A2_Burst : BulletNATO556x45_Burst
{
	minRange = 1;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.2;
	maxRange = 50;
	maxRangeProbab = 0.1;
};

/*
	M60
	Sources:
	http://en.wikipedia.org/wiki/M60_machine_gun
	http://www.inetres.com/gp/military/infantry/mg/M60.html
*/
class M60FullAuto : BulletNATO762x51
{
	minRange = 25;
	minRangeProbab = 0.2;
	midRange = 300;
	midRangeProbab = 0.6;
	maxRange = 600;
	maxRangeProbab = 0.1;
};

/*
	M1911
	Sources:
	http://forum.m1911.org/showthread.php?t=37233&page=2&pp=10
	Gained Information:
	It seems that at a range of 100 yards you still can hit some targets but the pistol should be for close combat. Primary Weapon should be prefered.
*/
class M1911 : Bullet45ACP
{
	minRange = 1;
	minRangeProbab = 0.2;
	midRange = 30;
	midRangeProbab = 0.1;
	maxRange = 75;
	maxRangeProbab = 0.05;
};

class M1911_SD : Bullet45ACP_SD
{
	minRange = 1;
	minRangeProbab = 0.2;
	midRange = 30;
	midRangeProbab = 0.1;
	maxRange = 75;
	maxRangeProbab = 0.05;
};

/*
	M21
	Sources:
	http://en.wikipedia.org/wiki/M21_Sniper_Weapon_System
	http://www.snipercentral.com/m21.htm
*/
class M21 : BulletNATO762x51
{
	minRange = 25;
	minRangeProbab = 0.1;
	midRange = 400;
	midRangeProbab = 0.8;
	maxRange = 800;
	maxRangeProbab = 0.15;
};

class M21_SD : BulletNATO762x51_SD
{
	minRange = 25;
	minRangeProbab = 0.1;
	midRange = 400;
	midRangeProbab = 0.8;
	maxRange = 800;
	maxRangeProbab = 0.15;
};

/*
CAR-15
Sources:
http://en.wikipedia.org/wiki/CAR-15
http://www.specialoperations.com/Weapons/Features/M4/
*/

class CAR15_Semi : BulletNATO556x45
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 200;
	midRangeProbab = 0.5;
	maxRange = 600;
	maxRangeProbab = 0.1;
};

class CAR15_Auto : BulletNATO556x45_Auto
{
	minRange = 1;
	minRangeProbab = 0.4;
	midRange = 50;
	midRangeProbab = 0.5;
	maxRange = 100;
	maxRangeProbab = 0.05;
};

class CAR15_SD_Semi : BulletNATO556x45_SD
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 200;
	midRangeProbab = 0.5;
	maxRange = 500;
	maxRangeProbab = 0.1;
};

class CAR15_SD_Auto : BulletNATO556x45_SD_Auto
{
	minRange = 1;
	minRangeProbab = 0.4;
	midRange = 50;
	midRangeProbab = 0.5;
	maxRange = 75;
	maxRangeProbab = 0.05;
};

/*
M134 Minigun
Sources:
	http://en.wikipedia.org/wiki/Minigun
*/
class M134Minigun : BulletNATO762x51
{
	minRange = 10;
	minRangeProbab=0.9;
	midRange=300;
	midRangeProbab = 0.5;
	maxRange = 1000;
	maxRangeProbab = 0.05;
};

/*
M2HB Browning
*/
class M2HBBrowning : BulletNATO127x99
{
	//No Prooves
	minRange=5;
	minRangeProbab = 0.1;
	midRange = 450;
	midRangeProbab = 0.3;
	maxRange = 900;
	maxRangeProbab = 0.9;
};

/*
M73 MachineGun
Sources:
	http://en.wikipedia.org/wiki/M73_machine_gun
*/
class M73MG : BulletNATO762x51
{
	minRange = 5;
	minRangeProbab = 0.2;
	midRange = 500;
	midRangeProbab = 0.8;
	maxRange = 1370;
	maxRangeProbab = 0.1;
};

/*
M240 Coaxial MG
*/
class M240Coaxial : BulletNATO762x51
{
	minRange = 5;
	minRangeProbab = 0.2;
	midRange = 900;
	midRangeProbab = 0.8;
	maxRange = 1800;
	maxRangeProbab = 0.1;
};

/*
M242 Bushmaster
*/
class M242_APDS : BulletSingle
{
	hit = HIT_M242APDS;
	indirectHit = INDIRECTHIT_M242APDS;
	indirectHitRange = INDIRECTHITRANGE_M242APDS;
	airLock=1;
	cost = COST_BULLET_25X137APDS;
	soundHit[]={"\d4t_files\sounds\weapons\impacts\30mmheex.ogg",31.622778,1};
	soundFly[]={"objects\bulletnoise",db-12,0.7};
	soundHitMan1[]={"\d4t_files\sounds\weapons\impacts\zu23hitman1.ogg",0.012589,1};
	soundHitMan2[]={"\d4t_files\sounds\weapons\impacts\zu23HitMan2.ogg",0.012589,1};
	soundHitArmor1[]={"\d4t_files\sounds\weapons\impacts\zu23hitarmor1.ogg",0.031623,1};
	soundHitArmor2[]={"\d4t_files\sounds\weapons\impacts\zu23hitarmor2.ogg",0.031623,1};
	soundHitBuilding1[]={"\d4t_files\sounds\weapons\impacts\hitbuilding1.ogg",0.031623,1};
	soundHitBuilding2[]={"\d4t_files\sounds\weapons\impacts\hitbuilding22.ogg",0.031623,1};
	hitMan[]={"soundHitMan1",0.500000,"soundHitMan2",0.500000};
	hitArmor[]={"soundHitArmor1",0.700000,"soundHitArmor2",0.300000};
	hitBuilding[]={"soundHitBuilding1",0.500000,"soundHitBuilding2",0.500000};
	tracerColor[]={1,0.500000,0.00000,1};
	//No Prooves for range values
	minRange=1;
	minRangeProbab=0.700000;
	midRange=1500;
	midRangeProbab=0.950000;
	maxRange=4000;
	maxRangeProbab=0.5;
};

class M242_HEI : ExplosiveBullet
{
	airLock=1;
	hit = HIT_M242HEI;
	indirectHit = INDIRECTHIT_M242HEI;
	indirectHitRange = INDIRECTHITRANGE_M242HEI;
	soundHit1[]={"\d4t_files\sounds\weapons\impacts\explosivebullet1.wss",1.500000,1};
	soundHit2[]={"\d4t_files\sounds\weapons\impacts\explosivebullet2.wss",1.500000,1};
	soundHit3[]={"\d4t_files\sounds\weapons\impacts\explosivebullet3.wss",1.500000,1};
	soundHitArmor1[]={"\d4t_files\sounds\weapons\impacts\explosivebullethitarmor1.wss",1.500000,1};
	soundHitArmor2[]={"\d4t_files\sounds\weapons\impacts\explosivebullethitarmor2.wss",1.500000,1};
	soundHitBuilding1[]={"\d4t_files\sounds\weapons\impacts\hitbuilding1.ogg",0.071623,1};
	soundHitBuilding2[]={"\d4t_files\sounds\weapons\impacts\hitbuilding22.ogg",0.031623,1};
	soundHitMan[]={"\d4t_files\sounds\weapons\impacts\explosivebullethitman.wss",0.003000,1};
	soundFly[]={"objects\bulletnoise",0.251189,0.700000};
	hitGround[]={"soundHit1",0.333333,"soundHit2",0.333333,"soundHit3",0.333333};
	hitArmor[]={"soundHitArmor1",0.500000,"soundHitArmor2",0.500000};
	hitBuilding[]={"soundHit1",0.333333,"soundHit2",0.333333,"soundHit3",0.333333};
	hitMan[]={"soundHitMan",1};
	cost = COST_BULLET_25X137HEI;
	tracerColor[]={1,0.500000,0.00000,1};
	//No Prooves for range values
	minRange=1;
	minRangeProbab=0.800000;
	midRange=1500;
	midRangeProbab=0.950000;
	maxRange=3500;
	maxRangeProbab=0.5;
};

/*
M168 Vulcan
*/
class M168Vulcan : Bullet20x102
{
	hit = HIT_M168VULCAN;
	indirectHit = INDIRECTHIT_M168VULCAN;
	indirectHitRange = INDIRECTHITRANGE_M168VULCAN;
	explosive = false;
};