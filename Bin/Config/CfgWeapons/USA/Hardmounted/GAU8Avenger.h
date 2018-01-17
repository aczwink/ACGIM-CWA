/*
Sources:
http://en.wikipedia.org/wiki/GAU-8_Avenger
http://en.wikipedia.org/wiki/Fairchild_Republic_A-10_Thunderbolt_II
*/
class GAU8Avenger : MachineGun30
{
	ammo = "Bullet30x173";
	displayName="GAU 8/A Avenger";
	displayNameMagazine="GAU 8/A";
	shortNameMagazine="GAU 8/A";
	autoFire=1;
	sound[]={"\d4t_files\sounds\weapons\vehicles\GAU8loop.wav",20,1};
	soundcontinuous=1;
	count = 1174;
	maxLeadSpeed=400;
	multiplier = 1;
	burst = 5;
	reloadTime = 0.014285;
	dispersion = 0.014;
	initSpeed = 1070;
};