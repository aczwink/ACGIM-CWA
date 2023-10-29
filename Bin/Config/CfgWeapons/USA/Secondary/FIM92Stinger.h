/*
Sources:
http://en.wikipedia.org/wiki/FIM-92_Stinger
*/
class FIM92Stinger : Default
{
	weaponType=16;
	count=1;
	magazineReloadTime=12;
	reloadTime=0.5;
	//Longer range sound.
	//sound[]={"Weapons\at_launch",0.01,1};
	sound[]={"Weapons\at_launch", 2, 1};
	reloadMagazineSound[]={"Weapons\at_load",0.0003162,1};
	reloadAction = MANACT_RELOADAT;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="LAWSingle";
	aiRateOfFire=10.0;
	aiRateOfFireDistance=500;
	optics=1;
	opticsZoomMin=0.18;
	opticsZoomMax=0.18;
	distanceZoomMin=100;
	distanceZoomMax=100;
	magazineType="6 * 		256";
	scopeWeapon=2;
	scopeMagazine=2;
	model="\d4t_files\models\us\weapons\fim92a.p3d"; //used odol explorer for this
	modelSpecial="\d4t_files\models\us\weapons\fim92a.p3d"; //used odol explorer for this
	modelOptics="optika_stinger";
	canLock=2;
	dexterity=0.25;
	valueWeapon=20;
	valueMagazine=10;
	displayName="FIM-92 Stinger";
	displayNameMagazine="Stinger Missile";
	shortNameMagazine="Stinger";
	initSpeed = 30;
	maxLeadSpeed=600;
	primary=0;
	uiPicture="isaa";
	ammo = "RocketFIM92Stinger";
};