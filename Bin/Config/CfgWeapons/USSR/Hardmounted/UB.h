/*
C-5 = S-5
Sources:
	http://en.wikipedia.org/wiki/S-5_rocket
*/
class UV8 : ZuniLauncher38
{
	displayName ="UB-8 Rocket pods";
	displayNameMagazine="57mm rocket";
	shortNameMagazine="57mm rocket";
	count=24;
	reloadTime=0.2;
	autofire = 1;
	initSpeed=0;
	aiRateOfFire=.3;
	aiRateOfFireDistance=0.01;
};

class UV16 : ZuniLauncher38
{
	displayName ="UV-16 Rocket pods";
	displayNameMagazine="57mm rocket";
	shortNameMagazine="57mm rocket";
	count=32;
	reloadTime=0.2;
	autofire = 1;
	initSpeed=0;
	aiRateOfFire=.3;
	aiRateOfFireDistance=0.01;
};

class UV32 : ZuniLauncher38
{
	ammo="Rocket57";
	displayName ="UV-32 Rocket pods";
	displayNameMagazine="57mm rocket";
	shortNameMagazine="57mm rocket";
	count=64;
};

/*
Source: https://en.wikipedia.org/wiki/S-5_rocket#UB-32[16][17]
*/
class UB32 : ZuniLauncher38
{
	ammo="Rocket57";
	displayName = "UB-32 Rocket pods";
	displayNameMagazine="$STR_MN_ROCKET_57";
	shortNameMagazine="$STR_SN_ROCKET_57";
	magazines[]={"S5K", "S5M"};
	reloadSound[]={"\sjc_files\sounds\weapons\vehicles\click.wav",-10,1};
	backgroundReload=0;
	count=64;
};

class S5M : ZuniLauncher38
{
	count=64;
	sound[]={"\sjc_files\sounds\weapons\vehicles\C5.ogg",2,1};
	ammo = "RocketS5M";
	burst=2;
	reloadTime = 0.05;
	initSpeed=0;
	aiRateOfFire=2;
	aiRateOfFireDistance=1500;
	displayName = "S-5M Rockets";
	displayNameMagazine = "S-5M HE-FRAG Rocket";
	shortNameMagazine = "S-5M";
};

class S5K : S5M
{
	ammo = "RocketS5K";
	displayName = "S-5K Rockets";
	displayNameMagazine = "S-5K HEAT Rocket";
	shortNameMagazine = "S-5K";
};