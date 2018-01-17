/*
Sources:
	http://en.wikipedia.org/wiki/KPV_heavy_machine_gun
*/
class KPVT : Browning
{
	ammo = "BulletUSSR145x114";
	displayName = "KPVT 14.5mm";
	displayNameMagazine  = "KPVT 14.5mm";
	shortNameMagazine  = "KPVT";
	nameSound = "mgun";
	count = 50;
	sound[]={"\sjc_sounds\weapons\hardmounted\Kpwt.ogg",db-5,1.1};
	soundContinuous = false;
	reloadTime = 0.1;
	initSpeed = 1005;
	flash = gunfire;
	flashSize = 0.9;
	maxLeadSpeed = 900; // max estimated speed km/h
	magazineReloadTime = 4;
	ffMagnitude = 0.5;
	ffFrequency = 11;
	ffCount = 6;
	recoil = mgunBurst3;
	aiRateOfFire = 0.1; // delay between shots at given distance
	aiRateOfFireDistance = 1000; // at shorter distance delay goes lineary to zero
	autoFire = true;
	autoReload=true;
	optics = true;
};