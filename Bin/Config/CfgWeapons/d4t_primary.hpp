//---US Weapons
class d4t_m4 : Riffle
{
	scopeWeapon=2;
	scopeMagazine=0;
	displayName="M4 SOPMOD";
	model="\d4t_files\models\us\weapons\m4\m4.p3d";//2.0 one, if there are bugs -> odl2.44
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_m16.p3d";//2.0 one, if there are bugs -> odl2.44
	picture="\d4t_files\pics\weapons\m4.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	magazines[]={30rd556x45mag};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};
	modes[]={Single, FullAuto};

	class Single
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="M4 - Semi";
		dispersion=0.0008;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="d4t_m4Recoil";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="M4 - Auto";
		dispersion=0.00085;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=100;
		recoil="d4t_m4Recoil";
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class d4t_m4apt : d4t_m4
	{
		displayName="M4 SOPMOD Aimpoint";
		model="\d4t_files\models\us\weapons\m4\m4_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
		modelOptics="\d4t_files\optics\optic_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
		picture="\d4t_files\pics\weapons\m4_aimpoint.paa";
	};

class d4t_m4apt_m203 : d4t_m4apt
	{
		weaponType=1;
		displayName="M4 SOPMOD Aimpoint + M203";
		model="\d4t_files\models\us\weapons\m4\m4_m203_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
		picture="\d4t_files\pics\weapons\m4_m203_aimpoint.paa";
		muzzles[]={"M4Muzzle","M203Muzzle"};

		class M4Muzzle : d4t_m4apt{};

		class M203Muzzle{};// : d4t_m203_grenadelauncher{};
	};

class d4t_m4acog : d4t_m4
	{
		displayName="M4 SOPMOD ACOG";
		model="\d4t_files\models\us\weapons\m4\m4_acog.p3d";
		modelOptics="\d4t_files\optics\optic_acog.p3d";
		opticsZoomMin=0.175;
		opticsZoomMax=0.175;
		picture="\d4t_files\pics\weapons\m4_acog.paa";
	};

class d4t_m4acog_sd : d4t_m4
		{
		model="\d4t_files\models\us\weapons\m4\m4acog_sd.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelOptics="\d4t_files\optics\optic_acog_sd.p3d";//used odol for this, if there are any bugs better to use textureswap
		picture="\d4t_files\pics\weapons\m4_acog_sd.paa";
		optics=1;
		opticsZoomMin=0.175;
		opticsZoomMax=0.175;
		displayName="M4 SOPMOD ACOG (SD)";
		modes[]={Single,FullAuto};

		class Single
		{
			ammo=d4t_BulletNATO556x45NoTracer;
			multiplier=1;
			burst=1;
			displayName="M4 - Semi";
			dispersion=0.0008;
			sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
			soundContinuous=0;
			reloadTime=0.07;
			ffCount=1;
			recoil=d4t_m4Recoil;
			autoFire=0;
			aiRateOfFire=5.0;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo=d4t_BulletNATO556x45NoTracer;
			multiplier=1;
			burst=1;
			displayName="M4 - Auto";
			dispersion=0.00085;
			sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=100;
			recoil=d4t_m4Recoil;
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		magazines[]={"d4t_30rd556x45sdmag","30rd556x45sdmag"};
		};

class d4t_m4eotech : d4t_m4acog
	{
		displayName="M4 SOPMOD Eotech";
		model="\d4t_files\models\us\weapons\m4\m4_eotech.p3d";
		modelOptics="\d4t_files\optics\optic_eotech.p3d";
		opticsZoomMin=0.30;
		opticsZoomMax=0.30;
		picture="\d4t_files\pics\weapons\m4_eotech.paa";
	};

class d4t_m4eotech_sd : d4t_m4acog_sd
	{
		displayName="M4 SOPMOD Eotech (SD)";
		model="\d4t_files\models\us\weapons\m4\m4_eotech_sd.p3d";
		modelOptics="\d4t_files\optics\optic_eotech_sd.p3d";
		opticsZoomMin=0.30;
		opticsZoomMax=0.30;
		picture="\d4t_files\pics\weapons\m4_eotech_sd.paa";
	};

class d4t_m4cobra_sd : d4t_m4eotech_sd
	{
		displayName="M4 SOPMOD Cobra (SD)";
		model="\d4t_files\models\us\weapons\m4\m4_cobra_sd.p3d";
		modelOptics="\d4t_files\optics\optic_cobra_sd.p3d";
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		picture="\d4t_files\pics\weapons\m4_cobra_sd.paa";
	};

class d4t_m4cobra_m203 : d4t_m4apt_m203
	{
		displayName="M4+M203 SOPMOD Cobra";
		model="\d4t_files\models\us\weapons\m4\m4_m203_cobra.p3d";
		picture="\d4t_files\pics\weapons\m4_m203_cobra.paa";
		muzzles[]={"M4Muzzle","M203Muzzle"};

		class M4Muzzle: d4t_m4
		{
			modelOptics="\d4t_files\optics\optic_cobra.p3d";
			opticsZoomMin=0.35;
			opticsZoomMax=0.35;
		};
		class M203Muzzle{};// : d4t_m203_grenadelauncher{};
	};

class d4t_m4spr : d4t_m4acog
	{
		displayName="M4 SPR";
		model="\d4t_files\models\us\weapons\m4\m4spr.p3d";
		modelOptics="\d4t_files\optics\optic_m4spr.p3d";
		picture="\d4t_files\pics\weapons\m4_spr.paa";
		uiPicture="\misc\isniper_new.paa";
		opticsZoomMin=0.04;
		opticsZoomMax=0.12;
	};

class d4t_m4spr_sd : d4t_m4acog_sd
	{
		displayName="M4 SPR (SD)";
		model="\d4t_files\models\us\weapons\m4_spr_sd.p3d";
		modelOptics="\d4t_files\optics\optic_m4spr_sd.p3d";
		picture="\d4t_files\pics\weapons\m4_spr_sd.paa";
		uiPicture="\misc\isniper_new.paa";
		opticsZoomMin=0.04;
		opticsZoomMax=0.12;
	};

class car15apt : Riffle
{
	scopeWeapon=2;
	scopeMagazine=0;
	displayName="CAR-15 Aimpoint";
	model="\d4t_files\models\us\weapons\car15apt.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
	picture="\d4t_files\pics\weapons\car15_aimpoint.paa";
	optics=true;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	magazines[]={car15_mag};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};

	modes[]={"Single","FullAuto"};
	class Single
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="CAR-15 - Semi";
		dispersion=0.002;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil=d4t_m4Recoil;
		autoFire=0;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
	
	class FullAuto
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="CAR-15 - Auto";
		dispersion=0.004;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=100;
		recoil=d4t_m4Recoil;
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class car15apt_sd : Riffle
{
	scopeWeapon=2;
	scopeMagazine=0;

	displayName="CAR-15 Aimpoint (SD)";
	model="\d4t_files\models\us\weapons\car15apt_sd.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_aimpoint_sd.p3d";
	picture="\d4t_files\pics\weapons\car15_aimpoint_sd.paa";
	optics=true;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	magazines[]={car15_sdmag};

	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1,1};

	modes[]={"Single","FullAuto"};
	class Single
	{
		ammo=d4t_BulletNATO556x45NoTracer;
		multiplier=1;
		burst=1;
		displayName="CAR-15 - Semi";
		dispersion=0.002;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil=d4t_m4Recoil;
		autoFire=0;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
		
	class FullAuto
	{
		ammo=d4t_BulletNATO556x45NoTracer;
		multiplier=1;
		burst=1;
		displayName="CAR-15 - Auto";
		dispersion=0.004;
		sound[]={"\d4t_files\sounds\weapons\handheld\m4sd.wss",1.000000,1};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=100;
		recoil=d4t_m4Recoil;
		autoFire=1;
		aiRateOfFire=5.000000;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class car15acog_sd : car15apt_sd
{
	displayName="CAR-15 ACOG (SD)";
	model="\d4t_files\models\us\weapons\car15acog_sd.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_acog_sd.p3d";//used odol for this, if there are any bugs better to use textureswap
	opticsZoomMin=0.175;
	opticsZoomMax=0.175;
	picture="\d4t_files\pics\weapons\car15_acog_sd.paa";
	magazines[]={car15_sdmag};
};

class d4t_m16a4apt : M16
{
	scopeWeapon=2;
	scopeMagazine=0;
	displayName="M16A4 Aimpoint";
	model="\d4t_files\models\us\weapons\m16\m16a4apt.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m4\m4_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	optics=1;
	modelOptics="\d4t_files\optics\optic_aimpoint.p3d";//2.0 one, if there are bugs -> odl2.44
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	picture="\d4t_files\pics\weapons\m16a4_aimpoint.paa";
	initSpeed=2200;
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};

	magazines[]={"d4t_m16a4mag","m16a4mag"};
	modes[]={"Single","Burst"};
	class Single
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="M16A4 - Semi";
		dispersion=0.00055;
		sound[]={"\d4t_files\sounds\weapons\handheld\m16single.wss",db0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=3;
		displayName="M16A4 - Burst";
		dispersion=0.00075;
		sound[]={"\d4t_files\sounds\weapons\handheld\m16burst.wss",db0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=3;
		recoil="riffleBurst3";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class d4t_m16a4apt_m203 : d4t_m16a4apt
		{
		weaponType=1;
		valueWeapon=2;
		valueMagazine=2;
		displayName="M16A4 Aimpoint - M203";
		model="\d4t_files\models\us\weapons\m16\m16a4apt_m203.p3d";
		picture="\d4t_files\pics\weapons\m16a4_aimpoint_m203.paa";
		uiPicture="igrenadier";
		muzzles[]={"M16Muzzle","M203Muzzle"};
		canDrop=1;

		class M16Muzzle: d4t_m16a4apt{};
		class M203Muzzle{};// : d4t_m203_grenadelauncher{};
};

class d4t_m16a4acog : d4t_m16a4apt
	{
		model="\d4t_files\models\us\weapons\m16\m16a4acog.p3d";
		picture="\d4t_files\pics\weapons\m16a4_acog.paa";
		displayName="M16A4 ACOG";
		modelOptics="\d4t_files\optics\optic_acog.p3d";
		opticsZoomMin=0.160;
		opticsZoomMax=0.160;
		opticsFlare=1; 
	};

class d4t_m249saw : MachineGun7_6Manual
	{
		scopeWeapon=2;
		scopeMagazine=0;
		displayName="M249 SAW";
		model="\d4t_files\models\us\weapons\m249.p3d";//2.0 one, if there are bugs -> odl2.44
		modelOptics="\d4t_files\optics\optic_m249.p3d";//2.0 one, if there are bugs -> odl2.44
		sound[]={"\d4t_files\sounds\weapons\handheld\m249.wav",10,1};
		reloadTime=0.08;//according to wiki 750rounds/min
		reloadSound[]={"\d4t_files\sounds\weapons\handheld\m240belt.wss",0.010316,1};
		reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
		soundContinuous=0;
        dexterity=0.35;
		ammo=d4t_BulletNATO556x45;
		recoil=d4t_M249Recoil;
		autoReload=0;
		autoFire=1;
		initSpeed=1000;
		dispersion=0.000700;		
		optics=1;
		canLock=0;
		flashSize=0.9;
		ffMagnitude=0.5;
		ffFrequency=11;
		ffCount=6;
		maxLeadSpeed=300;
		aiDispersionCoefX=5;		
		aiRateOfFire=0.5;
		aiRateOfFireDistance=800;
		picture="\d4t_files\pics\weapons\m249.paa";
		uipicture="\d4t_files\pics\ui\ismg.paa";
		magazines[]={"d4t_200rd556x45mag","200rd556x45mag"};
	};

class d4t_m249saw_m145 : d4t_m249saw
{
	displayName="M249 SAW Elcan M145";
	model="\d4t_files\models\us\weapons\m249saw_m145.p3d";
	picture="\d4t_files\pics\weapons\m249_m145.paa";
	modelOptics="\d4t_files\optics\optic_m145.p3d";
	opticsFlare=1;
	opticsZoomMin=0.20;
	opticsZoomMax=0.20;
};

class d4t_m249spw_acog : d4t_m249saw
{
	displayName="M249 SPW";
	model="\d4t_files\models\us\weapons\m249spw_acog.p3d";
	picture="\d4t_files\pics\weapons\m249_spw.paa";
	modelOptics="\d4t_files\optics\optic_acog.p3d";
	opticsFlare=0;
	opticsZoomMin=0.16;
	opticsZoomMax=0.16;
};

class d4t_m249spw_acog_sd : d4t_m249saw
	{
		displayName="M249 SPW ACOG (SD)";
		model="\d4t_files\models\us\weapons\m249spw_acog_sd.p3d";
		picture="\d4t_files\pics\weapons\m249_spw_sd.paa";
		modelOptics="\d4t_files\optics\optic_acog_sd.p3d";
		opticsFlare=0;
		opticsZoomMin=0.16;
		opticsZoomMax=0.16;
		
		modes[] = {"Fullauto"};
		class Fullauto
		{
			ammo=d4t_BulletNATO556x45NoTracer;
			multiplier=1;
			burst=1;
			displayName="M249 SPW";
			sound[]={"\d4t_files\sounds\weapons\handheld\m249spw_sd.wav",db7,1};
			soundContinuous=0;
			reloadTime=0.085000;
			ffCount=6;
			ffMagnitude=0.500000;
			ffFrequency=11;
			dispersion=0.002500;
			aiDispersionCoefX=5.000000;
			maxLeadSpeed=300;
			recoil=d4t_M249Recoil;
			autoFire=1;
			useAction=0;
			useActionTitle="";
			aiRateOfFire=0.50000;
			aiRateOfFireDistance=1000;
		};

		magazines[] = {"d4t_200rd556x45sdmag","200rd556x45sdmag"};
	};

class d4t_m240b : MachineGun7_6Manual
	{
		displayName="M240B";
		weaponType=1;
		model="\d4t_files\models\us\weapons\m240b.p3d";//2.0 one, if there are bugs -> odl2.44
		modelOptics="\d4t_files\optics\optic_m240.p3d";//2.0 one, if there are bugs -> odl2.44
		picture="\d4t_files\pics\weapons\m240b.paa";
		scopeWeapon=2;
		scopeMagazine=0;
		optics = 1;
		opticsFlare=1;
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		distanceZoomMin=300;
		distanceZoomMax=300;
		reloadSound[]={"\d4t_files\sounds\weapons\handheld\m240belt.wss",0.010316,1};
		backgroundReload=1;
		reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
		uipicture="\d4t_files\pics\ui\ismg.paa";
		ammo=d4t_BulletNATO762x51;
		multiplier=1;
		burst=1;
		sound[]={"\d4t_files\sounds\weapons\handheld\m240b.wss",db7,1};
		soundContinuous=0;
		reloadTime=0.075;//according to wiki 650–950 rounds/min... i used 800
		ffCount=6;
		ffMagnitude=0.500000;
		ffFrequency=11;
		dispersion=0.002500;
		aiDispersionCoefX=50;
		maxLeadSpeed=300;
		recoil="d4t_m240Recoil";
		autoFire = 1;
		useAction= 0;
		useActionTitle="";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance=1000;

		magazines[] = {"d4t_100rd762x51mag","100rd762x51mag"};
	};

class d4t_m240b_acog : d4t_m240b
{
	displayName="M240B ACOG";
	model="\d4t_files\models\us\weapons\m240b_acog.p3d";
	picture="\d4t_files\pics\weapons\m240_acog.paa";
	modelOptics="\d4t_files\optics\optic_acog_762.p3d";
	opticsFlare=1;
	opticsZoomMin=0.16;
	opticsZoomMax=0.16;
	distanceZoomMin=300;
	distanceZoomMax=300;
};

class d4t_m82a1 : SniperRiffle
	{
		scopeWeapon=2;
		scopeMagazine=0;
		displayName="M82A1 Barett";
		model="\d4t_files\models\us\weapons\m82a1.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelOptics="\d4t_files\optics\optic_m82.p3d";//used odol for this, if there are any bugs better to use textureswap
		optics=1;
		opticsZoomMin=0.0205;
		opticsZoomMax=0.0205;
		opticsFlare=0;
		backgroundReload=0;
		initSpeed=1555;
		picture="\d4t_files\pics\weapons\m82.paa";
		reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m16reload.wss",0.010316,1};
		drySound[]={"weapons\M16dry",db-40,1};
		modes[]={"Single"};
		class Single
		{
			ammo=d4t_BulletNATO127x99;
			displayName="M82A1 Barett";
			multiplier=1;
			burst=1;
			dispersion=0.0000005;
			sound[]={"\d4t_files\sounds\weapons\handheld\m82fire.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.175;
			ffCount=1;
			recoil="d4t_M82Recoil";
			autoFire=0;
			aiRateOfFire = 10.0000;
			aiRateOfFireDistance = 1000;
			useAction=0;
			useActionTitle="";
		};
		magazines[]={"d4t_10rd127x99mag","10rd127x99mag"};
	};

//---Russian Weapons
class ak74m : ak74	
{
	displayName="AK-74M";
	model="\d4t_files\models\russia\weapons\ak74m.p3d";
	picture="\d4t_files\pics\weapons\ak74m.paa";
};

class rpk74 : MachineGun7_6Manual
{
	scopeWeapon=2;
	scopeMagazine=0;
	count=45;
	initSpeed=960;
	weaponType = WEAPON_PRIMARY;
	magazineType=256;
	displayName="RPK-74";
	model="\sjc_models\fia\weapons\rpk74.p3d";
	modelOptics="\d4t_files\optics\optic_ak74m.p3d";
	picture="\sjc_images\weapons\rpk74.paa";
	optics=1;
	opticsZoomMin=0.350000;
	opticsZoomMax=0.350000;
	drySound[]={"weapons\AK74Dry",0.010000,1};
	magazines[]={"rpk74mag"};
	dexterity=0.5;
	ammo="Bullet545x39";
	multiplier=1;
	burst=1;
	dispersion=0.00360;
	sound[]={"\d4t_files\sounds\weapons\handheld\RHS_AK_545_single.wss",1.000000,1.00};
	soundContinuous=0;
	reloadTime=0.082;
	ffCount=45;
	aiDispersionCoefX=3;
	ffMagnitude=0.500000;
	ffFrequency=11;
	recoil="rpk74";
	autoFire=1;
	aiRateOfFire=0.075000;
	aiRateOfFireDistance=400;
	useAction=0;
	useActionTitle="";
	canDrop = true;
};

//---Heckler & Koch
class g36 : Riffle
{
	scopeWeapon=2;
	scopeMagazine=0;
	model="\d4t_files\models\bw\weapons\g36.p3d";
	modelOptics="\d4t_files\optics\optic_g36.p3d";
	picture="\d4t_files\pics\weapons\g36.paa";
	optics=true;
	opticsZoomMin=0.2;
	opticsZoomMax=0.2;
	distanceZoomMin=350;
	distanceZoomMax=350;
	maxLeadSpeed=55.2;
	displayName="HK G36";
	drySound[]={"weapons\M16dry",0.003162,1};
	magazines[]={g36mag};
	modes[]={"Single","FullAuto"};
	
	class Single
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="G36 - Semi";
		dispersion=0.000100;
		sound[]={"\d4t_files\sounds\weapons\handheld\g36.ogg",1.200000,1};
		soundContinuous=0;
		reloadTime=0.073;
		ffCount=1;
		recoil="riffleSingle";//TODO
		autoFire=0;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=800;
		useAction=0;
		useActionTitle="";
	};
	
	class FullAuto
	{
		ammo=d4t_BulletNATO556x45;
		multiplier=1;
		burst=1;
		displayName="G36 - Auto";
		dispersion=0.000300;
		sound[]={"\d4t_files\sounds\weapons\handheld\g36.ogg",1.200000,1};
		soundContinuous=0;
		reloadTime=0.073;
		ffCount=1;
		recoil="riffleBurst3";//TODO
		autoFire=1;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=800;
		useAction=0;
		useActionTitle="";
	};
};
