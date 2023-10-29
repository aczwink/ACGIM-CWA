/*
Sources:
	http://en.wikipedia.org/wiki/RPG-16
*/
class RPG16 : Default
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
	model="\sjc_models\fia\weapons\rpg16_empty.p3d";
	modelSpecial="\sjc_models\fia\weapons\rpg16.p3d";
	modelOptics="\sjc_optics\russia\pgo7v.p3d";
	distanceZoomMin=450;
	distanceZoomMax=650;
	sound[]={"\sjc_sounds\weapons\handheld\fire.wss",db18,1.0};
	reloadMagazineSound[]={"\sjc_sounds\weapons\handheld\rpg_reload.wss",0.010316,1};
	initSpeed = 130;
	canDrop = true;
	ammo = "PG16";
	magazineType="2 * 256";
	displayName="RPG-16";
	displayNameMagazine="PG-16 HEAT";
	shortNameMagazine="PG-16";
};