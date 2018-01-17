class Kh23 : HellfireLauncher
{
	ammo = "RocketKh23";
	displayName = "Kh-23";
	displayNameMagazine = "Kh-23 Rocket";
	shortNameMagazine = "Kh-23";
	count=2;
	initspeed=30;
	reloadTime =2;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=0.01;
};

class Kh29 : MaverickLauncher
{
	ammo = "RocketKh29";
	displayName = "Kh-29T";
	displayNameMagazine = "Kh-29T rocket";
	shortNameMagazine = "Kh-29T";
	count=4;
	sound[]={"\sjc_sounds\weapons\missiles\Missile.wav",1,1};
};

class Kh29_2 : Kh29
{
	count = 2;
};