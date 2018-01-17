/*
Sources:
	http://en.wikipedia.org/wiki/Mk_19_grenade_launcher
	http://www.fas.org/man/dod-101/sys/land/m430.htm
	http://olive-drab.com/od_other_firearms_mg_mk19.php
Rate of fire: 325–375 rpm -> 350 -> 0.171428
*/
class Mk19 : GrenadeLauncher
{
	ammo = "GrenadeMk19";
	displayName="Mk 19 M430 HEDP";
	displayNameMagazine="M430 HEDP Grenade";
	shortNameMagazine="M430 HEDP";
	cursor="t_select.paa";
	ffMagnitude=0.100000;
	ffFrequency=1;
	ffCount=1;
	optics=1;
	count = 48;
	recoil="mgunBurst3";
	dispersion=0.015000;
	aiDispersionCoefY=2.000000;
	maxLeadSpeed = 100;
	sound[]={"\sjc_sounds\weapons\hardmounted\Mk19Fire.wav",db-22,1};
	reloadMagazineSound[]={"\sjc_sounds\weapons\hardmounted\m2RL.ogg",0.3,1};
	reloadSound[]={"",0,0};
	reloadTime = 0.171428;
	initSpeed = 241;
	canLock = CANLOCK_NO;
	autoFire=1;
	flash=gunfire;
	flashSize=0.5;
	aiRateOfFire=5.0;
	aiRateOfFireDistance=500;
	soundContinuous=0;
	autoReload=1;
	magazineReloadTime=15;
	muzzlePos="usti hlavne";
	muzzleEnd="konec hlavne";
};