class PRC119_SINCGARS : Default
{
	scopeWeapon = 2;
	scopeMagazine = 0;
	weaponType = WEAPON_SECONDARY;
	magazineType = WEAPON_ITEM;
	valueWeapon=20;
	valueMagazine=5;
	model="\sjc_models\USA\Weapons\Secondary\prc119_sincgars.p3d";
	modelOptics="optika_empty";
	displayName = "AN/PRC-119";
	displayNameMagazine="SINCGARS Battery";
	shortNameMagazine="SINCGARS Battery";
	autoReload=0;
	canLock=0;
	optics=0;
	opticsZoomMin=0.8;
	opticsZoomMax=0.8;
	distanceZoomMin=0.1;
	distanceZoomMax=0.1;
	recoil="empty";
	aiRateOfFire=1;
	aiRateOfFireDistance=0.1;
	forceOptics=0;
	count=100;
	primary=0;
	uiPicture="\sjc_images\ui\radiooperator.paa";
	canDrop=1;
	showEmpty=0; //as long as we haven't got a magazine, this weapon is not selectable
	magazines[]={}; //this ensures that no magazine can be added
};