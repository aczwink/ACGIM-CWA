/*
Sources:
	http://en.wikipedia.org/wiki/Mk.82
*/
class Mk82 : HellfireLauncher
{
	ammo = "BombMk82";
	displayName="Mark 82 Bomb";
	displayNameMagazine = "Mark 82 Bomb";
	shortNameMagazine = "Mk82";
	sound[]={"\sjc_sounds\weapons\hardmounted\bomb.wav",1,1};
	reloadSound[]={"",db-70,1};
	count=3;
	initspeed=10;
	reloadTime =.5;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=0.01;
};

class Mk82_4 : Mk82
{
	count = 4;
};

/*
Sources:
	http://en.wikipedia.org/wiki/Mark_83_bomb
*/
class Mk83 : HellfireLauncher
{
	ammo = "BombMk83";
	displayName="Mark 83 Bomb";
	displayNameMagazine="Mark 83 Bomb";
	shortNameMagazine="Mk83";
	count=10;
	reloadTime=0.5;
	sound[]={"\sound\weapons\AK74dry",db-50,1.0};
	initSpeed=0;
	canLock = CANLOCK_NO;
	autoFire = true;
	aiRateOfFire=5;
	aiRateOfFireDistance=1500;
};

/*
Sources:
	http://en.wikipedia.org/wiki/Mk84
*/
class Mk84 : HellfireLauncher
{
	ammo = "BombMk84";
	displayName = "Mark 84 Bomb";
	displayNameMagazine = "Mark 84 Bomb";
	shortNameMagazine = "Mk84";
	count = 4;
	reloadTime=0.5;
	sound[]={"\d4t_files\sounds\weapons\vehicles\bombrelease.wav",1,1};
	initSpeed = 0;
	canLock = CANLOCK_NO;
	aiRateOfFire=8.0;
	aiRateOfFireDistance=3500;
	model = "\sjc_models\USA\objects\mk84.p3d";
	proxyShape = "\sjc_models\USA\objects\mk84.p3d";
};
