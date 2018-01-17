/*
	http://afvdb.50megs.com/usa/m163.html
	http://en.wikipedia.org/wiki/M61_Vulcan
*/
class M168Gun : MachineGun30
{
	ammo = "M168Vulcan";
	count = 2100;
	multiplier=1;
	burst=4;
	initSpeed = 1050;
	flashSize=1.2;
	reloadTime = 0.01;
	displayName="M168 20mm Vulcan";
	displayNameMagazine="M168 200 Vulcan Chain";
	shortNameMagazine="M168 Vulcan";
	soundContinuous=1;
	dispersion=0.01;
	maxLeadSpeed=900;
	aiRateOfFire=0.3;
	aiRateOfFireDistance=3000;
	sound[]={"\d4t_files\sounds\weapons\vehicles\GAU8loop.wav",10,1};
};