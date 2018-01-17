/*
Sources:
http://en.wikipedia.org/wiki/M21_Sniper_Weapon_System
*/
class M21 : SniperRiffle
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	weaponType = WEAPON_PRIMARY;
	model="\d4t_files\models\us\weapons\m21.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m21_mag.p3d";
	displayName="M21";
	displayNameMagazine = "20 round 7.62x51mm Magazine";
	shortNameMagazine = "7.62x51mm Mag";
	sound[]={"\d4t_files\sounds\weapons\handheld\M14Fire.wss", 2.0, 1};
	optics=true;
	modelOptics="\d4t_files\optics\optic_m21.p3d";
	opticsZoomMin = 0.04;
	opticsZoomMax = 0.12;
	distanceZoomMin=300;
	distanceZoomMax=700;
	ammo = "M21";
	count=20;
	multiplier=1;
	division=1;
	burst=1;
	dispersion=0.0003;
	maxLeadSpeed=854;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};
	soundContinuous=0;
	reloadTime=0.25; //No Proof! This was used by SJB
	magazineReloadTime=2;
	autoFire=0;
	autoReload=0;
	aiRateOfFire=1.75;
	aiRateOfFireDistance=550;
	initSpeed = 853;
	useAction=0;
	useActionTitle="";
	magazines[] = {"M21"};
};

class M21_JungleCamo : M21
{
	model="\d4t_files\models\us\weapons\m21_junglecamo.p3d";
};

class M21_SD : M21
{
	model="\d4t_files\models\us\weapons\m21sd.p3d";
	displayName="M21 SD";
	displayNameMagazine = "20 round 7.62x51mm FMJ SD Magazine";
	shortNameMagazine = "M21 SD Mag";
	sound[]={"\sjc_sounds\weapons\handheld\M14_SD_SS.ogg", 1.0, 1};
	ammo = "M21_SD";
	modelOptics="\d4t_files\optics\optic_m21sd.p3d";
	magazines[] = {"this"};
};