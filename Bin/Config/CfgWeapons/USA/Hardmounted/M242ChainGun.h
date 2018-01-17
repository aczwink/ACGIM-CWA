/*
Sources:
	http://en.wikipedia.org/wiki/M242_Bushmaster
*/
class M242ChainGun : Default
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_HIDDEN;
	aiRateOfFire=0.500000;
	aiRateOfFireDistance=1200;
	shotFromTurret=1;
	displayName="M242 25mm Bushmaster";
	sound[]={"\d4t_files\sounds\weapons\vehicles\bush25mm.ogg",db+10,1};
	reloadSound[]={"",0,0};
	backgroundReload=1;
	magazines[]={"M242ChainGun_APDS", "M242ChainGun_APDS_750", "M242ChainGun_HEI", "M242ChainGun_HEI_750"};
};

class M242ChainGun_APDS : M242ChainGun
{
	scopeWeapon = SCOPE_HIDDEN;
	scopeMagazine = SCOPE_PUBLIC;
	reloadTime = 0.3;
	ammo = "M242_APDS";
	shotFromTurret=true;
	autoFire=true;
	dispersion=0.00125;
	nameSound="heat";
	flash=gunfire;
   	magazineReloadTime=10;
   	count = 450;
   	aiRateOfFire=0.500000;
	aiRateOfFireDistance=1200;
	displayName="M242 25mm APDS";
	displayNameMagazine="M791 APDS-T Ammo";
	shortNameMagazine="APDS";
	initSpeed = 1100;
	flashSize=10;
	maxLeadSpeed=450;
	optics=true;
	ffCount=1;
	multiplier=1;
};

class M242ChainGun_APDS_750 : M242ChainGun_APDS
{
	count = 750;
};

class M242ChainGun_HEI : M242ChainGun_APDS
{
	ammo = "M242_HEI";
	nameSound="shell";
	displayName="M242 25mm HEI-T";
	displayNameMagazine="M792 HEI-T Ammo";
	shortNameMagazine="HEI-T";
	flashSize=1.1;
	multiplier=2;
};

class M242ChainGun_HEI_750 : M242ChainGun_HEI
{
	count = 750;
};