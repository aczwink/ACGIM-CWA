//---West Weapons
class d4t_m9 : Riffle
{
	access=2;
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=2;
	magazineType=32;
	model="\d4t_files\models\us\weapons\m9_empty.p3d";//2.0 one, if there are bugs -> odl2.44
	modelSpecial="\d4t_files\models\us\weapons\m9.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelMagazine="\d4t_files\models\us\weapons\pistol_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_beretta.p3d";//2.0 one, if there are bugs -> odl2.44
	picture="\d4t_files\pics\weapons\m9.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="M9 Beretta";
	reloadTime=0.100000;
	magazineReloadTime=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	magazines[]={"d4t_15rd9x19mag","15rd9x19mag"};
	modes[]={"Single"};
	canDrop=1;
	count=15;

	class Single
	{
		ammo=d4t_Bullet9x19Parabellum;
		multiplier=1;
		burst=1;
		displayName="M9 Beretta";
		dispersion=0.002000;
		sound[]={"\d4t_files\sounds\weapons\handheld\m9.wss",1,1.000000};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=1;
		recoil=d4t_handgun_Recoil;
		autoFire=0;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class m9_sd : Riffle
{
	access=2;
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=2;
	magazineType=32;
	model="\d4t_files\models\us\weapons\m9sd_empty.p3d";
	modelSpecial="\d4t_files\models\us\weapons\m9sd.p3d";
	modelMagazine="\d4t_files\models\us\weapons\pistol_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_m9sd.p3d";
	picture="\d4t_files\pics\weapons\m9_sd.paa";

	optics=1;
	opticsZoomMin=0.350000;
	opticsZoomMax=0.350000;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="M9 (SD)";
	count=15;
	magazineReloadTime=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	ammo=d4t_Bullet9x19Parabellum_SD;
	multiplier=1;
	burst=1;
	dispersion=0.002000;
	sound[]={"\d4t_files\sounds\weapons\handheld\silenced_pistol.wav",1,1.000000};
	soundContinuous=0;
	reloadTime=0.1;
	ffCount=1;
	recoil=d4t_handgun_Recoil;
	autoFire=0;
	aiRateOfFire=0.500000;
	aiRateOfFireDistance=50;
	useAction=0;
	useActionTitle="";
	canDrop=1;

	magazines[]={m9_sd_mag};
};

class d4t_mk23_sd : Riffle
{
	access=2;
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=2;
	magazineType=32;
	model="\d4t_files\models\us\weapons\mk23sd_empty.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelSpecial="\d4t_files\models\us\weapons\mk23sd.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelMagazine="\d4t_files\models\us\weapons\pistol_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_mk23.p3d";//used odol for this, if there are any bugs better to use textureswap
	picture="\d4t_files\pics\weapons\mk23.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="MK23 (SD)";
	reloadTime=0.1;
	magazineReloadTime=1;
	canDrop=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	magazines[]={"d4t_12rd45acpmag","12rd45acpmag"};
	modes[]={"Single"};

	class Single
	{
		ammo=d4t_Bullet45ACP;
		multiplier=1;
		burst=1;
		displayName="MK23 (SD)";
		dispersion=0.002000;
		sound[]={"\d4t_files\sounds\weapons\handheld\silenced_pistol.wav",1,1.000000};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil=d4t_handgun_recoil;
		autoFire=0;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

//---East Weapons
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
