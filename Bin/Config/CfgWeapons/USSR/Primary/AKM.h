/*
Sources:
	http://en.wikipedia.org/wiki/Akm
*/
class AKM : AK47
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	weaponType = WEAPON_PRIMARY;
	displayName = "AKM";
	displayNameMagazine="30rd 7.62x39 Magazine";
	shortNameMagazine="30rd 7.62x39 Mag.";
	model="\sjc_models\russia\weapons\akm.p3d";
	modelOptics="\d4t_files\optics\optic_ak74m.p3d";
	opticsZoomMin=0.350000;
	opticsZoomMax=0.350000;
	drySound[]={"weapons\AK74Dry",0.010000,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_load.wss",1.000000,1};
	count=30;
	initSpeed = 715;
	modes[]={"Single","FullAuto"};
	
	class Single
	{
		ammo = "AKM_Single";
		multiplier=1;
		burst=1;
		displayName="AKM - Semi";
		dispersion=0.000200;
		sound[]={"\sjc_sounds\weapons\handheld\RHS_AK_762_single.wss",0.8,1.00};
		soundContinuous=0;
		reloadTime = 0.1;
		ffCount=1;
		recoil = "AKM";
		autoFire=0;
		aiRateOfFire=1.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	
	class FullAuto
	{
		ammo = "AKM_Auto";
		multiplier=1;
		burst=1;
		displayName="AKM - Auto";
		dispersion=0.002000;
		sound[]={"\sjc_sounds\weapons\handheld\RHS_AK_762_single.wss",0.8,1.00};
		soundContinuous=0;
		reloadTime = 0.1;
		ffCount=30;
		recoil = "AKM";
		autoFire=1;
		aiRateOfFire=1.000000;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
	canDrop = true;
};

class AKMGP25 : AKM
{
	displayName="AKM GP-25";
	model="\sjc_models\russia\weapons\akm_gp25.p3d";
	muzzles[]={"AKM_Muzzle","GP25_Muzzle"};
	
	class AKM_Muzzle : AKM
	{
		magazines[] = {"AKM"};
	};
	class GP25_Muzzle : GP25{};
};