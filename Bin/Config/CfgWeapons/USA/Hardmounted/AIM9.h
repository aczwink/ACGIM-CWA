/*
Sources:
	http://en.wikipedia.org/wiki/AIM-9_Sidewinder
*/
class AIM9 : MaverickLauncher
{
	ammo = "RocketAIM9";
	displayName="AIM-9 Sidewinder";
	displayNameMagazine="Sidewinder";
	shortNameMagazine="AIM-9";
	count=2;
	initspeed=30;
	reloadTime =1;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=3000;
	maxLeadSpeed=2500;
	sound[]={"\d4t_files\sounds\weapons\vehicles\aim9_fire.ogg",1,1};
};

class AIM9_4 : AIM9
{
	count = 4;
};

class AIM9M : AIM9
{
	ammo = "RocketAIM9M";
	displayName="AIM-9M Sidewinder";
	shortNameMagazine="AIM-9M";
	initspeed = 400; //No Proof!
	canLock = 2;
};