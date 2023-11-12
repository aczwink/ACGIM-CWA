/*
Sources:
	http://en.wikipedia.org/wiki/Gryazev-Shipunov_GSh-23L
	http://en.wikipedia.org/wiki/Mig23
Rate of fire: 	3400-3600 rpm -> 3500 rpm -> 0.017142
*/
class GSh23 : MachineGun30E
{
	displayName="GSh-23";
	ammo = "BulletUSSR23x115";
	count = 200;
	initSpeed = 715;
	reloadTime = 0.017142;
	soundContinuous=1;
	flashSize=0.01;
	maxLeadSpeed=1800;
	dispersion=0.02;
};

/*
Sources:
	http://en.wikipedia.org/wiki/GSh-6-23
*/
class GSh6_23 : GSh23
{
	count = 500;
	reloadTime = 0.006;
};

/*
Sources:
	http://en.wikipedia.org/wiki/Gryazev-Shipunov_GSh-6-30
Rate of fire: 4000�6000 rpm -> 5000 rpm -> 0.012
*/
class GSh6_30 : GSh23
{
	displayName="GSh-6-30";
	ammo = "BulletUSSR30x165";
	initSpeed = 845;
	reloadTime = 0.012;
	aiRateOfFire=0.1;
	aiRateOfFireDistance=200;
	dispersion=0.01;
};


/*
Sources:
	https://en.wikipedia.org/wiki/Gryazev-Shipunov_GSh-30-2
Rate of fire: 1,000-3,000 rpm -> 2000 rpm avg -> 
*/
class GSh30_2 : GSh23
{
	displayName="GSh-30-2";
	ammo = "BulletUSSR30x165";
	count = 250;
	initSpeed = 870;
	reloadTime = 0.03;
};