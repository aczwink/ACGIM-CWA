/*
Sources:
http://en.wikipedia.org/wiki/M1911_pistol
*/
class M1911 : HandGunBase
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	weaponType = WEAPON_HANDGUN;
	magazineType = WEAPON_HANDGUNMAGAZINE;
	displayName="M1911";
	displayNameMagazine="7 round .45 ACP Magazine";
	shortNameMagazine=".45 ACP Mag";
	model="\d4t_files\models\us\weapons\colt_m1911.p3d";
	modelSpecial="\d4t_files\models\us\weapons\colt_m1911_empty.p3d";
	modelMagazine="\d4t_files\models\us\weapons\colt_m1911_mag.p3d";
	modelOptics="\d4t_files\optics\optic_colt_m1911.p3d";
	reloadTime = 0.1; //No Proof, SJB used this!
	initSpeed = 255;
	magazineReloadTime=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	magazines[]={"this"};
	ammo = "M1911";
	multiplier=1;
	burst=1;
	count=7;
	dispersion = 0.0015;
	sound[]={"\d4t_files\sounds\weapons\handheld\M1911fire.wss",1,1.000000};
	soundContinuous=0;
   	recoil = "Handgun";
	ffCount=1;
	autoFire=0;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 50;
	useAction=0;
	useActionTitle="";
};

class M1911_SD : M1911
{
	model = "\sjc_models\USA\Weapons\Tertiary\m1911_sd_empty.p3d";
	modelSpecial = "\sjc_models\USA\Weapons\Tertiary\m1911_sd.p3d";
	modelOptics = "\sjc_optics\USA\optic_m1911_sd.p3d";
	displayName = "M1911 SD";
	ammo = "M1911_SD";
	sound[] = {"\sjc_sounds\weapons\handheld\M1911fire_sd.ogg",1,1.000000};
};