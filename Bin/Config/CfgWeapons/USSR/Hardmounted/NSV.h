/*
Sources:
	http://en.wikipedia.org/wiki/NSV_%28machine_gun%29
Rate of fire: 700-800 rpm -> 750 rpm
*/
class NSV : MachineGun12_7
{
	ammo = "NSV";
	displayName="NSV 12.7mm";
	displayNameMagazine="12.7mm";
	shortNameMagazine="12.7mm";
	count = 50;
	reloadTime = 0.08;
	sound[]={"\sjc_sounds\weapons\hardmounted\nsv.wss",2,1};
	reloadMagazineSound[]={"\sjc_sounds\weapons\hardmounted\mg_rl.wss",0.05,1};
	soundContinuous=0;
	initSpeed = 845;
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