/*
Sources:
	http://en.wikipedia.org/wiki/2A28_Grom
*/
class 2A28Grom : Gun73
{
	displayName="2A28 Grom 73mm Gun";
	magazines[]={"PG15V", "OG15V"};
};

class PG15V : Shell73
{
	ammo = "ShellPG15V";
	count = 24;
	initSpeed = 700;
	displayName="PG-15V HEAT";
	displayNameMagazine="73mm PG-15V HEAT";
	shortNameMagazine="73mm HEAT";
	aiRateOfFire=5.25;
	aiRateOfFireDistance=500;
	backgroundReload=1;
	reloadTime=5.25;
	sound[]={"\d4t_files\sounds\weapons\vehicles\Gun100.ogg",10,1};
	reloadSound[]={"Weapons\reload",0.001,1};
};

class OG15V : PG15V
{
	ammo = "ShellOG15V";
	count = 16;
	displayName = "OG-15V HE-Frag";
	displayNameMagazine = "73mm OG-15V HE-Frag";
	shortNameMagazine = "73mm HE-Frag";
};