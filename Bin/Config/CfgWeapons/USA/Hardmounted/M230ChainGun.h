/*
Sources:
	http://en.wikipedia.org/wiki/M230_Chain_Gun
	http://en.wikipedia.org/wiki/Ah64
From Source 1:
	-625 rpm
	-Muzzle velocity: 805m/s
From Source 2:
	-1200 rounds
*/
class M230ChainGun : MachineGun30W
{
	displayName="M230 Chain Gun";
	displayNameMagazine="M230 30mm";
	shortNameMagazine="M230";
	count = 1200;
	reloadTime = 0.096;
	multiplier=1;
	dexterity=0.001;
	dispersion=0.001;
	initspeed = 805;
	soundContinuous=0;
	aiRateOfFire=0.1;
	aiRateOfFireDistance=1200;
	ammo = "Bullet30x113";
	sound[]={"\d4t_files\sounds\weapons\vehicles\m230.wav",86.162278,1};
	ffCount=1;
	recoil="riffleSingle";
	autofire=1;
};