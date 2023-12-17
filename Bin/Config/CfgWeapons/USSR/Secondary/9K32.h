class 9K32Launcher : Default
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
	optics=1;
	opticsZoomMin=0.18;
	opticsZoomMax=0.18;
	distanceZoomMin=100;
	distanceZoomMax=100;
	scopeWeapon=2;
	scopeMagazine=2;
	magazineType="6 * 		256";
	canLock=2;
	valueWeapon=20;
	valueMagazine=10;
	initSpeed=30;
	maxLeadSpeed=600;
	primary=0;
	uiPicture="isaa";
	//Engage at range.
	aiRateOfFire=10.0;
	aiRateOfFireDistance=5000;
	ammo="9K32";
	model="9K32_Strela_proxy";
	modelOptics="optika_strela";
	displayName = "9K32 Strela-2";
	displayNameMagazine="$STR_MN_9K32";
	shortNameMagazine="$STR_SN_9K32";
};