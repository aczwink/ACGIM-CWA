/*
Sources:
	http://en.wikipedia.org/wiki/Rpg-2
*/
class RPG2 : Default
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
	uiPicture="islaw";
	model="\sjc_models\fia\weapons\rpg2_empty.p3d";
	modelOptics="\sjc_optics\russia\rpg.p3d";
	modelSpecial="\sjc_models\fia\weapons\rpg2.p3d";
	modelMagazine="\sjc_models\fia\objects\rpg2_rocket.p3d";
	distanceZoomMin=100;
	distanceZoomMax=100;
	displayName="RPG-2";
	displayNameMagazine="PG-2 HEAT";
	shortNameMagazine="PG-2";
	magazineType="2 * 256";
	ammo = "PG2";
	initSpeed = 84;
	sound[]={"\sounds\rpg7_launch.ogg",0.250000,1};
	reloadMagazineSound[]={"\sounds\rpg_reload.wss",0.010316,1};
};