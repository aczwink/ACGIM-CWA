/*
Sources:
	http://en.wikipedia.org/wiki/Yak-B_12.7mm_machine_gun
	http://en.wikipedia.org/wiki/Mi-24
Rate of fire: 4000-5000 rpm -> 4500 rpm
*/
class YakB : MachineGun30
{
	displayName="YakB Gatling Gun";
	displayNameMagazine="YakB 12.7mm Cartridge";
	shortNameMagazine="YakB 12.7mm";
	count = 1470;
	ammo = "YakB";
	multiplier=1;
	burst=10;
	sound[]={"\sjc_sounds\weapons\hardmounted\12mm_fire.wss",3,1};
	soundContinuous=0;
	reloadTime = 0.013333;
	dispersion=0.01;
	initSpeed = 810;
};