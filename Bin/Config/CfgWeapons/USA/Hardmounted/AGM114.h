class AGM114A : AT3Launcher
{
	scopeWeapon=2;
	scopeMagazine=2;
	ammo = "RocketAGM114A";
	displayName="AGM-114A Hellfire";
	displayNameMagazine="AGM-114A Hellfire Rockets";
	shortNameMagazine="AGM-114A";
	count=8;
	reloadTime=0.5;
	sound[]={"\d4t_files\sounds\weapons\vehicles\hellfire.wav",db30,1};
	reloadSound[]={"Weapons\missload",db-70,1};
	initSpeed=0;
	model="\d4t_files\models\us\weapons\air\agm114a.p3d";
	aiRateOfFire=13.0;
	aiRateOfFireDistance=2500;
};

class AGM114L_8 : AGM114A
{
	ammo = d4t_agm114l_hellfire;
	displayName="AGM-114L Hellfire";
	displayNameMagazine="AGM-114L";
	shortNameMagazine="AGM-114L";
};