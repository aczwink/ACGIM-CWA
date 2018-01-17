/*
Sources:
	http://de.wikipedia.org/wiki/T-62
*/
class 2A20 : Gun105
{
	displayName="2A20 115mm Gun";
	magazines[]={"BM6", "BK4", "OF27"};
	sound[]={"\sjc_sounds\weapons\hardmounted\115mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\100mmrl.wss",0.019,1};
	reloadTime=12;
};

/*
Sources:
	http://de.wikipedia.org/wiki/T-62
Muzzle velocity: 1600–1680 m/s -> 1640 m/s
*/
class BM6 : Heat105
{
	count = 12;
	model="\sjc_models\russia\objects\3bm26.p3d";//looks the same
	reloadTime=12;
	sound[]={"\sjc_sounds\weapons\hardmounted\115mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\100mmrl.wss",0.019,1};
	ammo = "ShellBM6";
	displayName="BM-6 APFSDS";
	displayNameMagazine="BM-6 115mm APFSDS";
	shortNameMagazine="BM-6 APFSDS";
	initSpeed = 1640;
};

class BK4 : Shell105
{
	ammo = "ShellBK4";
	displayName="BK-4 HEAT";
	displayNameMagazine="BK-4 115mm HEAT";
	shortNameMagazine="BK-4 HEAT";
	model="\sjc_models\russia\objects\bk12.p3d";//looks the same
	count = 6;
	initSpeed = 935;//No Proof
	reloadTime=12;
	sound[]={"\sjc_sounds\weapons\hardmounted\115mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\100mmrl.wss",0.019,1};
};

class OF27 : Shell105
{
	model="\sjc_models\russia\objects\bk12.p3d";//looks the same
	reloadTime=12;
	sound[]={"\sjc_sounds\weapons\hardmounted\115mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\100mmrl.wss",0.019,1};
	ammo = "ShellOF27";
	displayName="OF-27 HE-FRAG";
	displayNameMagazine="OF-27 115mm HE-FRAG";
	shortNameMagazine="OF-27 HE-FRAG";
	initSpeed=850;//No Proof
	count = 22;
};