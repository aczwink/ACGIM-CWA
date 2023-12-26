class makarov_pm : Riffle
{	
	access=2;
	scopeWeapon=2;
	scopeMagazine=0;	
	aiRateOfFire=0.5;
	aiRateOfFireDistance=50;
	model="\d4t_files\models\russia\weapons\makarov_pm.p3d";
	modelOptics="\d4t_files\optics\opt_makarov.p3d";
	picture="\d4t_files\pics\weapons\makarov_pm.paa";
	displayName="Makarov PM";
	weaponType=2;
	magazineType=32;
	reloadTime=0.07;
	magazineReloadTime=2;
	autoReload=0;
	soundContinuous=0;
	sound[]={"\d4t_files\sounds\weapons\handheld\makarov.ogg",1.000000,1};
	drySound[]={"\d4t_files\sounds\weapons\handheld\makarov_dry.ogg",0.003162,1};
	magazines[]={makarovmag};
	recoil=d4t_handgun_recoil;
	backgroundReload=0;
	burst=1;
	multiplier=1;
	autoFire=0;
	initSpeed=400;
	dispersion=0.006;
};
