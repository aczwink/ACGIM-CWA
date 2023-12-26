class PRC117 : Default //this weapon should never be selectable
{    
	weaponType=16;
	valueMagazine=5;
	ammo="LAW";
	magazineReloadTime=12;
	//Longer range sound.
	//sound[]={"Weapons\at_launch",0.01,1};
	sound[]={"Weapons\at_launch", 2, 1};
	reloadMagazineSound[]={"Weapons\at_load",0.0003162,1};
	initSpeed=30;
	reloadAction = MANACT_RELOADAT;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="LAWSingle";
	aiRateOfFire=10.0;
	aiRateOfFireDistance=500;
	opticsZoomMin=0.18;
	opticsZoomMax=0.18;
	distanceZoomMin=100;
	distanceZoomMax=100;
	scopeWeapon=2;
	scopeMagazine=0;
	nameSound="weapon";
	model="\d4t_files\models\us\misc\prc117.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelOptics="";
	magazineType="2 * 256";
	displayName = "PRC-117 Radio";
	displayNameMagazine="PRC-117 Battery";
	shortNameMagazine="Battery";
	reloadTime=10.0;
	canLock=1;
	valueWeapon=20;
	optics=0;
	forceOptics = 0;
	count=100;
	primary=0;
	uiPicture="\d4t_files\pics\ui\irto.paa";
	canDrop=1;
	showEmpty=0; //as long as we haven't got a magazine, this weapon is not selectable
	magazines[]={}; //this ensures that no magazine can be added :)
};