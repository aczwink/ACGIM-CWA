/*
Sources:
http://en.wikipedia.org/wiki/CAR-15
Inconclusive Information:
	Rate of fire: 700-900 rpm
	Rate of fire (mean): 800 rpm
	=> reloadTime = 0.075
*/

class CAR15 : Riffle
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	displayName = "CAR-15 Commando";
	//cool idea but same mags are not interchangeable (for example with M16A2) and can't be distinguished like this
	//displayNameMagazine = "30 round 5.56x45mm Magazine";
	//shortNameMagazine = "5.56x45mm Mag";
	displayNameMagazine = "CAR-15 Magazine";
	shortNameMagazine = "CAR-15 Mag";
	model = "\sjc_models\USA\Weapons\Primary\car15.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//ODOL Explorer 2.0 was used
	modelOptics="\models\CSLA2_M16A2_optika.p3d";
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss", 0.010316, 1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss", 1.0, 1};
	modes[]={"Single","FullAuto"};
	initSpeed = 838;
	magazines[] = {"this"};

	class Single
	{
		ammo = "CAR15_Semi";
		multiplier=1;
		burst=1;
		displayName = "CAR-15 - Semi";
		dispersion=0.002;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss", 1.0, 1};
		soundContinuous=0;
		reloadTime = 0.075;
		ffCount=1;
		recoil = "M4";
		autoFire=0;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo = "CAR15_Auto";
		multiplier=1;
		burst=1;
		displayName = "CAR-15 - Auto";
		dispersion=0.004;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss", 1.0, 1};
		soundContinuous=0;
		reloadTime = 0.075;
		ffCount=100;
		recoil = "M4";
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class CAR15_ACOG : CAR15
{
	displayName="CAR-15 ACOG";
	model="\d4t_files\models\us\weapons\car15acog.p3d";
	modelOptics="\d4t_files\optics\optic_acog.p3d";
	opticsZoomMin=0.175;
	opticsZoomMax=0.175;
};

class CAR15_SD : CAR15
{
	displayName="CAR-15 Commando SD";
	model = "\sjc_models\USA\Weapons\Primary\car15_sd.p3d";
	modelOptics="\models\CSLA2_M16A2_optika_sd.p3d";
	magazines[] = {"this"};
	
	class Single
	{
		ammo = "CAR15_SD_Semi";
		multiplier=1;
		burst=1;
		displayName = "CAR-15 SD - Semi";
		dispersion=0.002;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss", 1.0, 1};
		soundContinuous=0;
		reloadTime = 0.075;
		ffCount=1;
		recoil = "M4";
		autoFire=0;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	
	class FullAuto
	{
		ammo = "CAR15_SD_Auto";
		multiplier=1;
		burst=1;
		displayName = "CAR-15 SD - Auto";
		dispersion=0.004;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss", 1.0, 1};
		soundContinuous=0;
		reloadTime = 0.075;
		ffCount=100;
		recoil = "M4";
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class CAR15_ACOG_SD : CAR15_SD
{
	displayName="CAR-15 ACOG SD";
	model="\d4t_files\models\us\weapons\car15acog_sd.p3d";
	modelOptics="\d4t_files\optics\optic_acog_sd.p3d"; //used odol explorer
	opticsZoomMin=0.175;
	opticsZoomMax=0.175;
};