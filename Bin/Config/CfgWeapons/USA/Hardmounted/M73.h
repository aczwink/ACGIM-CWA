/*
Sources:
	http://en.wikipedia.org/wiki/M73_machine_gun
	http://afvdb.50megs.com/usa/m60.html
Rate of fire: 500-625 -> 562.5 -> 0.106666
*/
class M73MachineGun : MachineGun7_6
{
	ammo = "M73MG";
	sound[]={"\sjc_sounds\weapons\hardmounted\M73_MG.ogg",2,1};
	displayName="M73 Coaxial MG";
	displayNameMagazine="M73 Coaxial MG";
	shortNameMagazine="Coax MG";
	count = 5950;
	reloadTime = 0.106666;
	soundContinuous=0;
	initSpeed = 853;
};