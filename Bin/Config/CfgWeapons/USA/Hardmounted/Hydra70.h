/*
Sources:
	http://en.wikipedia.org/wiki/Hydra_70
Info:
	Velocity at launcher exit: 148 ft/s (45 m/s)
*/
class Hydra70 : ZuniLauncher38
{
	ammo = "RocketHydra70";
	displayName="Hydra 70 HE FFAR";
	displayNameMagazine="Hydra 70";
	shortNameMagazine="Hydra 70";
	sound[]={"\d4t_files\sounds\weapons\vehicles\HydraLaunch.wss",3,1};
	count = 14;
	initSpeed = 45;
};

class Hydra70_32 : Hydra70
{
	count = 32;
};

class Hydra70_38 : Hydra70
{
	count=38;
};

class Hydra70Pairs_38 : Hydra70_38
{
	burst=2;
};