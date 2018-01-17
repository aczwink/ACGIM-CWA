/*
Sources:
	http://warfare.ru/?catid=337&linkid=2448&title=projectiles-for-125-mm-d-81-gun
*/
class 2A46M : Gun125
{
	reloadTime=7;
	displayName="2A46M 125mm Gun";
	magazines[]={"3VBM17", "3VBM17_15", "3VBK16", "3VBK16_16", "3VOF36", "3VOF36_11", "9K112Kobra"};
	sound[]={"\sjc_sounds\weapons\hardmounted\125mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\125mmrl.wss",0.019,1};
};

class 3VBM17 : Heat125
{
	model="\sjc_models\russia\objects\3bm26.p3d";
	sound[]={"\sjc_sounds\weapons\hardmounted\125mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\125mmrl.wss",0.019,1};
	ammo = "3VBM17";
	displayName="3VBM17 APFSDS";
	displayNameMagazine="3VBM17 125mm APFSDS";
	shortNameMagazine="3VBM17 APFSDS";
	count = 13;
	initSpeed = 1700;
	reloadTime = 7;
};

class 3VBM17_15 : 3VBM17
{
	count = 15;
};

class 3VBK16 : Shell125
{
	model="\sjc_models\russia\objects\bk12.p3d";
	reloadTime=7;
	sound[]={"\sjc_sounds\weapons\hardmounted\125mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\125mmrl.wss",0.019,1};
	ammo = "3VBK16";
	displayName="3VBK16 HEAT";
	displayNameMagazine="3VBK16 125mm HEAT";
	shortNameMagazine="3VBK16 HEAT";
	count = 16;
	initSpeed = 905;
};

class 3VBK16_16 : 3VBK16
{
	count = 18;
};

class 3VOF36 : Shell125
{
	ammo = "3VOF36";
	displayName = "3VOF36 HE-FRAG";
	displayNameMagazine = "3VOF36 125mm HE-FRAG";
	shortNameMagazine = "3VOF36 HE-FRAG";
	model="\sjc_models\russia\objects\bk12.p3d"; //looks the same
	reloadTime=7;
	sound[]={"\sjc_sounds\weapons\hardmounted\125mm.wss",50,1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\125mmrl.wss",0.019,1};
	count = 10;
	initSpeed = 850;
};

class 3VOF36_11 : 3VOF36
{
	count = 11;
};