class UZIBase : Riffle
{
    optics = 1;
    opticsZoomMin = 0.3;
    opticsZoomMax = 0.3;
    distanceZoomMin = 150;
    distanceZoomMax = 150;
    valueWeapon = 1000;
    valueMagazine = 1000;
    initSpeed = 400;
    modes[] = {"Single", "FullAuto"};
    access=2;
	scopeWeapon=0;
	scopeMagazine=0;
	model="\O\Guns\UZI";
	modelOptics="\O\Guns\optika_uzi";
	picture="\O\Guns\w_uzi.paa";
	displayName="$STR_DN_OUT_UZI";
	displayNameMagazine="$STR_DN_OUT_UZI_AMMO";
	shortNameMagazine="$STR_DN_OUT_UZI_AMMO_SHORT";
	count=32;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"UZI"};

	class Single
	{
		ammo="UZI";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_UZI";
		dispersion=0.002;
		sound[]={"\O\Guns\uzi_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="UZI";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_UZI_FULL";
		dispersion=0.004;
		sound[]={"\o\Guns\uzi_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=30;
		recoil="riffleSilenced";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
};

class UZIMag : UZIBase
{
	scopeMagazine=2;
	picture="\O\Guns\m_uzi.paa";
};

class UZI : UZIBase
{
	scopeWeapon=2;
	magazines[]={"UZIMag"};
};