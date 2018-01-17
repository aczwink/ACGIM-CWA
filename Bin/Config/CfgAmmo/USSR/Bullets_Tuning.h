/*
Sources:
	http://en.wikipedia.org/wiki/Akm
*/
class AKM_Single : BulletUSSR762x39
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 200;
	midRangeProbab = 0.5;
	maxRange = 400;
	maxRangeProbab = 0.08;
};

class AKM_Auto : BulletUSSR762x39_Auto
{
	minRange = 1;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.2;
	maxRange = 50;
	maxRangeProbab = 0.1;
};

/*
Sources:
http://en.wikipedia.org/wiki/AK74
*/
class AK74_Single : BulletUSSR545x39
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 300;
	midRangeProbab = 0.5;
	maxRange = 625;
	maxRangeProbab = 0.08;
};

class AK74_Auto : BulletUSSR545x39_Auto
{
	minRange = 1;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.2;
	maxRange = 50;
	maxRangeProbab = 0.1;
};

class AKS74B_Single : BulletUSSR545x39SD
{
	minRange = 50;
	minRangeProbab = 0.3;
	midRange = 150;
	midRangeProbab = 0.5;
	maxRange = 300;
	maxRangeProbab = 0.08;
};

class AKS74B_Auto : BulletUSSR545x39SD_Auto
{
	minRange = 1;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.2;
	maxRange = 50;
	maxRangeProbab = 0.1;
};

/*
PK
Sources:
	http://en.wikipedia.org/wiki/PK_machine_gun
*/
class PKM : BulletUSSR762x54R
{
	minRange=10;
	minRangeProbab=0.1;
	midRange=300;
	midRangeProbab=0.8;
	maxRange=1200;
	maxRangeProbab=0.1;
};

class PKT : BulletUSSR762x54R
{
	minRange=10;
	minRangeProbab=0.1;
	midRange=300;
	midRangeProbab=0.8;
	maxRange=1200;
	maxRangeProbab=0.1;
};

/*
SVD Dragunov
Sources:
	http://en.wikipedia.org/wiki/SVD_Dragunov
*/
class SVDDragunov : BulletUSSR762x54R
{
	minRange = 50;
	minRangeProbab=0.1;
	midRange = 400;
	midRangeProbab=0.8;
	maxRange = 1300;
	maxRangeProbab=0.1;
};

/*
DShK
Sources:
*/
class DShKM : BulletUSSR127x108
{
	minRange=10;
	minRangeProbab=0.750000;
	midRange=250;
	midRangeProbab=0.550000;
	maxRange=1000;
	maxRangeProbab=0.025000;
};

/*
YakB
Sources:
*/
class YakB : BulletUSSR127x108
{
	minRange=10;
	minRangeProbab=0.75;
	midRange=250;
	midRangeProbab=0.55;
	maxRange=1000;
	maxRangeProbab=0.025;
};

/*
2A42
*/
class 3UOF8 : BulletUSSR30x165
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
};

class 3UBR8 : BulletUSSR30x165
{
	minRange=20;
	minRangeProbab=0.8;
	midRange=500;
	midRangeProbab=0.95;
	maxRange=3000;
	maxRangeProbab=0.05;
	explosive = false;
};

/*
NSV
*/
class NSV : BulletUSSR127x108
{
	minRange=10;
	minRangeProbab=0.750000;
	midRange=250;
	midRangeProbab=0.550000;
	maxRange=1000;
	maxRangeProbab=0.025000;
};

/*
RPD
*/
class RPD : BulletUSSR762x39
{
	minRange = 10;
	minRangeProbab=0.1;
	midRange = 300;
	midRangeProbab=0.8;
	maxRange = 1000;
	maxRangeProbab=0.1;
};