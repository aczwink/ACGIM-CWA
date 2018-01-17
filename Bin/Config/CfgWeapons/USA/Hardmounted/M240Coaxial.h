/*
Sources:
http://en.wikipedia.org/wiki/M240_machine_gun
Rate of fire: 750–950 -> 850 -> 0.070588
*/
class M240Coaxial : MachineGun7_6
{
	ammo = "M240Coaxial";
	sound[]={"\d4t_files\sounds\weapons\vehicles\M240_MG.wss",2,1};
	displayName="M240 Coaxial";
	displayNameMagazine="7.62x51mm Chain";
	shortNameMagazine="MG";
	count = 10400;
	initSpeed = 853;
	reloadTime = 0.070588;
	soundContinuous=0;
	magazines[] = {"M240Coaxial", "M240Coaxial_2200"};
};

class M240Coaxial_2200 : M240Coaxial
{
	scopeWeapon = SCOPE_HIDDEN;
	count = 2200;
};