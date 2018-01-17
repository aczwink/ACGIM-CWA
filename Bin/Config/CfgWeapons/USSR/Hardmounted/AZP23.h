/*
Sources:
	http://en.wikipedia.org/wiki/ZSU-23-4
Rate of fire: 850-1000 rpm per gun -> 925 rpm per gun -> 3700 rpm
*/
class AZP23 : ZsuCannon
{
	reloadTime = 0.016216;
	ammo = "BulletUSSR23x152";
	displayName="AZP-23 Amur";
	displayNameMagazine="23mm API rounds";
	shortNameMagazine="23mm";
	sound[]={"\sjc_sounds\weapons\hardmounted\Shilka1.wav",db+20,1};
	count=2000;
	soundContinuous=0;
	magazineReloadTime=6;
	multiplier = 1;
	burst = 4;
	initSpeed = 970;
	flash=gunfire;
	flashSize=10;
	visibleFireTime=6;
	dispersion=0.0025000;
	maxLeadSpeed=1000;
	maxspeed=1000;
	aiRateOfFire=0.02;
	aiRateOfFireDistance=3000;
	autoFire=1;
	optics=1;
};