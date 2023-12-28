/*
Sources:
	http://en.wikipedia.org/wiki/AK74
	http://www.globalsecurity.org/military/world/russia/ak-74.htm
*/
class AK74 : Riffle //Also the BIS Class
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	displayName="AK-74";
	displayNameMagazine="30 round 5.45 x 39mm Magazine";
	shortNameMagazine="5.45x49mm Mag";
	model="\d4t_files\models\russia\weapons\ak74.p3d";
	modelOptics="\d4t_files\optics\optic_ak74m.p3d";
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	drySound[]={"weapons\AK74Dry",0.01,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_load.wss",1.000000,1};
	initSpeed = 900;
	count=30;
	modes[]={"Single","FullAuto"};

	class Single
	{
		ammo = "AK74_Single";
		multiplier=1;
		burst=1;
		displayName="AK-74 - Semi";
		dispersion=0.0002;
		sound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_545_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime = 0.092307;
		ffCount=1;
		recoil = "AK74";
		autoFire=0;
		aiRateOfFire=1.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	class FullAuto
	{
		ammo = "AK74_Auto";
		multiplier=1;
		burst=1;
		displayName="AK-74 - Auto";
		dispersion=0.001;
		sound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_545_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime = 0.092307;
		ffCount=30;
		recoil = "AK74";
		autoFire=1;
		aiRateOfFire=1.000000;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
};

class AK74GP25 : AK74
{
	displayName="AK-74 GP-25";
	model="\d4t_files\models\russia\weapons\ak74_gp25.p3d";
	muzzles[]={"AK74_Muzzle", "AK74GP25_Muzzle"};
	
	class AK74_Muzzle : AK74
	{
		magazines[]={"AK74"};
	};
	class AK74GP25_Muzzle : GP25{};
};

class AKS74 : AK74
{
	displayName="AKS-74";
	model="\d4t_files\models\russia\weapons\aks74.p3d";
	magazines[]={"AK74"};
};

class AKS74B : AKS74
{
	displayName="AKS-74B";
	model="\d4t_files\models\russia\weapons\aks74b.p3d";
	modelOptics="\d4t_files\optics\optic_ak74sd.p3d";
	opticsFlare=false;
	initSpeed=330; //No Proof
	distanceZoomMin=100;
	distanceZoomMax=100;
	count=30;
	displayNameMagazine="30 round 5.45 x 39mm SD Magazine";
	shortNameMagazine="5.45x49mm SD Mag";
	magazines[] = {"AKS74B"};
	
	class Single
	{
		ammo = "AKS74B_Single";
		multiplier=1;
		burst=1;
		displayName="AKS-74B - Semi";
		dispersion=0.000200;
		sound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_545_silenced_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime = 0.092307;
		ffCount=1;
		recoil = "AK74";
		autoFire=0;
		aiRateOfFire=2;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
	
	class FullAuto
	{
		ammo = "AKS74B_Auto";
		multiplier=1;
		burst=1;
		displayName="AKS-74B - Auto";
		dispersion=0.001000;
		sound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_545_silenced_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime = 0.092307;
		ffCount=30;
		recoil = "AK74";
		autoFire=1;
		aiRateOfFire=1;
		aiRateOfFireDistance=80;
		useAction=0;
		useActionTitle="";
	};
};

class AKS74PSO1PBS3 : AK74
{
	picture="\RHS_Weap\AK_Pics\m_30RD_5,45_MAG.paa";
	picture="\RHS_Weap\AK_Pics\w_AK74SB_PSO1.paa";
	
	scopeWeapon=2;
	scopeMagazine=2;
	displayName="AKS-74B PSO-1";
	model="\RHS_Weap\AKS74\AKS74_PSO1_PBS3";
	modelOptics="\RHS_Weap\AK_Optics\AK_OpticSD2";
	optics=1;
	opticsZoomMin=0.080000;
	opticsZoomMax=0.080000;
	opticsFlare=0;
	count=30;
	initSpeed=330;
	distanceZoomMin=100;
	distanceZoomMax=100;
	displayNameMagazine="30rd 5.45x39 SD Magazine";
	shortNameMagazine="30rd 5.45x39 SD Mag.";
	drySound[]={"weapons\AK74Dry",0.010000,1};
	reloadMagazineSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_load.wss",1.000000,1};
	canDrop = 1;
	magazines[]={"this"};
	modes[]={"Single","FullAuto"};
	
	class Single
	{
		ammo="RHS_E545x39_30_BulletSilencedSingle";
		multiplier=1;
		burst=1;
		displayName="5.45x39 SD Semi";
		dispersion=0.000200;
		sound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_545_silenced_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=1;
		recoil="RHS_E545x39_RifleRecoil";
		autoFire=0;
		aiRateOfFire=2;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
	class FullAuto
	{
		ammo="RHS_E545x39_30_BulletSilencedSingle";
		multiplier=1;
		burst=1;
		displayName="5.45x39 SD Auto";
		dispersion=0.001000;
		sound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_545_silenced_single.wss",1.000000,1.00};
		soundContinuous=0;
		reloadTime=0.0667;
		ffCount=30;
		recoil="RHS_E545x39_RifleAutoRecoil";
		autoFire=1;
		aiRateOfFire=1;
		aiRateOfFireDistance=80;
		useAction=0;
		useActionTitle="";
	};
};

class AK74M : AK74	
{
	scopeMagazine=2;
	displayName="AK-74M";
	displayNameMagazine="30 round 5.45 x 39mm Magazine";
	shortNameMagazine="5.45x49mm Mag";
	count=30;
	model="\d4t_files\models\russia\weapons\ak74m.p3d";
};

class AK74MGP25 : AK74M
{
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=1;
	displayName="AK-74M GP-25";
	model="\RHS_Weap\AK74M\AK74M_GP25";
	muzzles[]={"AK74_Muzzle","AK74GP25_Muzzle"};
	canDrop = 1;

	class AK74_Muzzle : AK74M {};
	class AK74GP25_Muzzle : GP25{};
};