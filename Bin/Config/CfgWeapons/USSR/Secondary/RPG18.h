/*
Sources:
	http://en.wikipedia.org/wiki/RPG-18
*/
class RPG18 : Default
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=16;
	valueWeapon=10;
	valueMagazine=5;
	count=1;
	magazineReloadTime=12;
	reloadTime=0.5;
	reloadMagazineSound[]={"Weapons\at_load",0.0003162,1};
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
	model="\sjc_models\ussr\weapons\rpg18_empty.p3d";
	modelSpecial="\sjc_models\ussr\weapons\rpg18.p3d";
	modelOptics="\sjc_optics\russia\rpg18.p3d";
	sound[]={"\sjc_sounds\weapons\handheld\fire.wss",db18,1.0};
	displayName="RPG-18";
	displayNameMagazine="PG-18 HEAT Grenade";
	shortNameMagazine="PG-18 HEAT";
	initSpeed = 115;
	ammo = "RocketPG18";
	magazineType="3 * 256";
};