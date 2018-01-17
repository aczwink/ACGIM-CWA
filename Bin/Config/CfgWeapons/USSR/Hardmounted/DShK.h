/*
Sources:
	http://en.wikipedia.org/wiki/DShK
*/
class DShKM : MachineGun12_7
{
	ammo = "DShKM";
	displayName="DShKM 12.7mm MG";
	displayNameMagazine="DShKM 12.7mm belt";
	shortNameMagazine="DShKM 12.7mm";
	count = 50;
	reloadTime = 0.1;
	sound[]={"\sjc_sounds\weapons\hardmounted\dshk.wss",2,1};
	reloadMagazineSound[]={"\sjc_sounds\weapons\hardmounted\mg_rl.wss",0.05,1};
	soundContinuous=0;
	initSpeed = 850;
	flash="gunfire";
	flashSize=1.5;
	aiRateOfFire=0.05;
	aiRateOfFireDistance=1000;
	dispersion=0.00125;
	maxLeadSpeed=100;
	autoFire=1;
	optics=1;
	autoReload=1;
	magazineReloadTime=10;
};