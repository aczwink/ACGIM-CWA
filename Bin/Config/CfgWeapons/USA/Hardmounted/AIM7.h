class AIM7 : HellfireLauncher
{
	ammo = "RocketAIM7";
	displayName="AIM-7 Sparrow";
	displayNameMagazine="AIM-7 rocket";
	shortNameMagazine="AIM-7";
	count = 3;
	initspeed=30; //No Proof!
	reloadTime =1;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=0.01;
	maxLeadSpeed=2500;
};

class AIM7_4 : AIM7
{
	count = 4;
};