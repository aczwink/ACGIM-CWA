/*
Sources:
	http://en.wikipedia.org/wiki/Molniya_R-60
*/
class R60 : HellfireLauncher
{
	ammo = "RocketR60";
	displayName = "R-60";
	displayNameMagazine="R-60 Missile";
	shortNameMagazine="R-60";
	count=6;
	initspeed = 30;
	reloadTime = 4;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=0.01;
	maxLeadSpeed=2500;
};

class R60_2 : R60
{
	count = 2;
};