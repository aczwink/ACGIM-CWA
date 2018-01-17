class d4t_aim9_2 : MaverickLauncher
{
	ammo=d4t_aim9;
	displayName="AIM-9 Sidewinder";
	displayNameMagazine="AIM-9 Sidewinder Rockets";
	shortNameMagazine="AIM-9 Rockets";
	count=2;
	initspeed=15;
	model="\d4t_files\models\us\weapons\air\ah1_aim9.p3d";
	canLock=2;
	aiRateOfFire=12.000000;
	aiRateOfFireDistance=2500;
	sound[]={"\d4t_files\sounds\weapons\vehicles\aim9_fire.ogg",1,1};
};

class d4t_aim9_4 : MaverickLauncher
{
	ammo=d4t_aim9_ah64;
	count=4;
	reloadTime=0.2;
	displayName="AIM-9 Sidewinder";
	displayNameMagazine="AIM-9 Sidewinder Rockets";
	shortNameMagazine="AIM-9 Rockets";
	sound[]={"\d4t_files\sounds\weapons\vehicles\aim9_fire.ogg",1,1};
	initspeed=50;
};

/*class d4t_agm114l_8 : d4t_agm114a_8
{
	ammo=d4t_agm114l_hellfire;
	displayName="AGM-114L Hellfire";
	displayNameMagazine="AGM-114L";
	shortNameMagazine="AGM-114L";
};*/

/*class aim120 : HellfireLauncher
{
	ammo="aim120";
	displayName="AIM-120 AMRAAM";
	displayNameMagazine="AIM-120 rocket";
	shortNameMagazine="AIM-120";
	count=6;
	initspeed=30;
	reloadTime =2;
	aiRateOfFire=10.0;
	aiRateOfFireDistance=0.01;
	maxLeadSpeed=2500;
};*/