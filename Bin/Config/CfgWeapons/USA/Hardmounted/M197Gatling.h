/*
Sources:
	http://en.wikipedia.org/wiki/M197_Gatling_gun
*/
class M197Gatling : MachineGun30W
{
	ammo = "Bullet20x102";
	displayName="M197 Gatling";
	displayNameMagazine="M197 Gatling";
	shortNameMagazine="M197";
	count=750;
	reloadTime=0.08;
	initSpeed = 1030;
	sound[]={"\d4t_files\sounds\weapons\vehicles\ah1m197.wav",50,1};
	soundContinuous=0;
	flashSize=2.000000;
	maxLeadSpeed=950;
	optics=1;
};