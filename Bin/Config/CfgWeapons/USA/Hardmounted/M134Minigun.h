/*
Sources:
(1) http://en.wikipedia.org/wiki/Minigun
Rate of fire:
	Seems to be 4000rpm according to source 1 -> 0.015
*/
class M134Minigun : MachineGun12_7
{
	scopeWeapon=2;
	scopeMagazine=2;
	displayName="M134 Minigun";
	displayNameMagazine="M134 Minigun";
	shortNameMagazine="M134";
	muzzlePos="usti hlavne";
	muzzleEnd="konec hlavne";
	count=4500; //No Proof
	ammo = "M134Minigun";
	burst = 5;
	multiplier = 1;
	initSpeed = 853;
	reloadTime = 0.015;
	sound[]={"\d4t_files\sounds\weapons\vehicles\M134.wss",1,1};
	soundContinuous=1;
	flash=gunfire;
	flashSize=0.1;
	dispersion=0.025;
	maxLeadSpeed=50;
	aiDispersionCoefX=5;
	ffMagnitude=0.5;
	ffFrequency=11;
	ffCount=6;
	recoil=Empty;
	aiRateOfFire=0.5;
	aiRateOfFireDistance=1000;
	autoFire=1;
	optics=1;
};