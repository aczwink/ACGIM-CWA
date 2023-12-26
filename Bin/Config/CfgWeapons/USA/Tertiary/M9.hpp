class M9 : Riffle
{
	access=2;
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	weaponType=2;
	magazineType=32;
	model="\d4t_files\models\us\weapons\m9_empty.p3d";//2.0 one, if there are bugs -> odl2.44
	modelSpecial="\d4t_files\models\us\weapons\m9.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelMagazine="\d4t_files\models\us\weapons\pistol_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_beretta.p3d";//2.0 one, if there are bugs -> odl2.44
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="M9 Beretta";
    displayNameMagazine = "15 round 9x19mm FMJ Parabellum Magazine";
    shortNameMagazine = "9x19mm Mag";
	reloadTime=0.100000;
	magazineReloadTime=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	magazines[]={"this"};
	modes[]={"Single"};
	canDrop=1;
	count=15;

	class Single
	{
		ammo = "Bullet9x19";
		multiplier=1;
		burst=1;
		displayName="M9 Beretta";
		dispersion=0.002000;
		sound[]={"\d4t_files\sounds\weapons\handheld\m9.wss",1,1.000000};
		soundContinuous=0;
		reloadTime=0.100000;
		ffCount=1;
		recoil = "Handgun";
		autoFire=0;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};