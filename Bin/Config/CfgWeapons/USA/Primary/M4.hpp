class M4 : Riffle
{
	//TODO THE pic is:
    //picture="\d4t_files\pics\weapons\m4.paa";
	//SJB_TOSM4/inventory/w_m4a1.paa

    scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	count=30;
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
	displayName="M4 SOPMOD";
	model="\d4t_files\models\us\weapons\m4\m4.p3d";//2.0 one, if there are bugs -> odl2.44
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_m16.p3d";//2.0 one, if there are bugs -> odl2.44
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	magazines[]={"this"};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};
	modes[]={Single, FullAuto};

	class Single
	{
		ammo = "BulletNATO556x45";
		multiplier=1;
		burst=1;
		displayName="M4 - Semi";
		dispersion=0.0008;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="M4";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo = "BulletNATO556x45";
		multiplier=1;
		burst=1;
		displayName="M4 - Auto";
		dispersion=0.00085;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=100;
		recoil="M4";
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class M4ACOG : M4
{
	displayName="M4 SOPMOD ACOG";
	model="\d4t_files\models\us\weapons\m4\m4_acog.p3d";
	modelOptics="\d4t_files\optics\optic_acog.p3d";
	opticsZoomMin=0.175;
	opticsZoomMax=0.175;
	magazines[]={WEAPON_REFERENCE(M4)};
};

class M4Aimpoint : M4
{
    displayName="M4 SOPMOD Aimpoint";
    model="\d4t_files\models\us\weapons\m4\m4_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
    modelOptics="\d4t_files\optics\optic_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
	magazines[]={WEAPON_REFERENCE(M4)};
};

class M4Aimpoint_M203 : M4Aimpoint
{
	weaponType=1;
	displayName="M4 SOPMOD Aimpoint + M203";
	model="\d4t_files\models\us\weapons\m4\m4_m203_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
	muzzles[]={"M4Muzzle","M203Muzzle"};
	
	class M4Muzzle : M4Aimpoint{};
	class M203Muzzle : M203 {};
};

class M4Eotech : M4
{
	displayName="M4 SOPMOD Eotech";
	model="\d4t_files\models\us\weapons\m4\m4_eotech.p3d";
	modelOptics="\d4t_files\optics\optic_eotech.p3d";
	opticsZoomMin=0.30;
	opticsZoomMax=0.30;
	magazines[]={WEAPON_REFERENCE(M4)};
};

class M4SPR : M4
{
	displayName="M4 SPR";
	model="\d4t_files\models\us\weapons\m4\m4spr.p3d";
	modelOptics="\d4t_files\optics\optic_m4spr.p3d";
	uiPicture="\misc\isniper_new.paa";
	opticsZoomMin=0.04;
	opticsZoomMax=0.12;
	magazines[]={WEAPON_REFERENCE(M4)};
};

//Silenced variants
class M4_SD : M4
{
	optics=1;
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
	modes[]={Single,FullAuto};

	class Single
	{
		ammo = "BulletNATO556x45_SD";
		multiplier=1;
		burst=1;
		displayName="M4 - Semi";
		dispersion=0.0008;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil = "M4";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	class FullAuto
	{
		ammo = "BulletNATO556x45_SD";
		multiplier=1;
		burst=1;
		displayName="M4 - Auto";
		dispersion=0.00085;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=100;
		recoil = "M4";
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	magazines[]={"this"};
};

class M4ACOG_SD : M4_SD
{
	displayName="M4 SOPMOD ACOG (SD)";
	model="\d4t_files\models\us\weapons\m4\m4acog_sd.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelOptics="\d4t_files\optics\optic_acog_sd.p3d";//used odol for this, if there are any bugs better to use textureswap
	opticsZoomMin=0.175;
	opticsZoomMax=0.175;
	magazines[]={WEAPON_REFERENCE(M4_SD)};
};

class M4Cobra_SD : M4_SD
{
	displayName="M4 SOPMOD Cobra (SD)";
	model="\d4t_files\models\us\weapons\m4\m4_cobra_sd.p3d";
	modelOptics="\d4t_files\optics\optic_cobra_sd.p3d";
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	magazines[]={WEAPON_REFERENCE(M4_SD)};
};

class M4Eotech_SD : M4_SD
{
	displayName="M4 SOPMOD Eotech (SD)";
	model="\d4t_files\models\us\weapons\m4\m4_eotech_sd.p3d";
	modelOptics="\d4t_files\optics\optic_eotech_sd.p3d";
	opticsZoomMin=0.30;
	opticsZoomMax=0.30;
	magazines[]={WEAPON_REFERENCE(M4_SD)};
};

class M4SPR_SD : M4ACOG_SD
{
	displayName="M4 SPR (SD)";
	model="\d4t_files\models\us\weapons\m4_spr_sd.p3d";
	modelOptics="\d4t_files\optics\optic_m4spr_sd.p3d";
	uiPicture="\misc\isniper_new.paa";
	opticsZoomMin=0.04;
	opticsZoomMax=0.12;
};