/*
Sources:
http://en.wikipedia.org/wiki/M72_LAW
http://www.inetres.com/gp/military/infantry/antiarmor/M72.html
*/

class M72LAW : Default //check baseclasses
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=16;
	valueWeapon=10;
	valueMagazine=5;
	count=1;
	magazineReloadTime=12;
	reloadTime=0.5;
	canLock=0;
	reloadAction = MANACT_RELOADAT;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="LAWSingle";
	aiRateOfFire=10.0;
	aiRateOfFireDistance=500;
	optics=1;
	primary=0;
	opticsZoomMin=0.18;
	opticsZoomMax=0.18;
	distanceZoomMin=100;
	distanceZoomMax=100;
	uiPicture="islaw";
	displayName="M72 LAW";
	displayNameMagazine="M72 LAW HEAT";
	shortNameMagazine="LAW";
	model="\d4t_files\models\us\weapons\m72law_e.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m72law_e.p3d";
	modelSpecial="\d4t_files\models\us\weapons\m72law.p3d";
	modelOptics="\sjc_optics\USA\optics_m72law.p3d";
	sound[]={"\d4t_files\sounds\weapons\handheld\LAWfire.wss",db17,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\LAWreload.wss",0.010316,1};
	uipicture="\d4t_files\pics\ui\isat.paa";
	ammo = "RocketM72LAW";
	magazineType = 2 * WEAPON_ITEM;
	initSpeed = 145;
};