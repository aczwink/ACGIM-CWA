class MK23SD : Riffle
{
	access=2;
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=2;
	magazineType=32;
	model="\d4t_files\models\us\weapons\mk23sd_empty.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelSpecial="\d4t_files\models\us\weapons\mk23sd.p3d";//used odol for this, if there are any bugs better to use textureswap
	modelMagazine="\d4t_files\models\us\weapons\pistol_mag.p3d";//2.0 one, if there are bugs -> odl2.44
	modelOptics="\d4t_files\optics\optic_mk23.p3d";//used odol for this, if there are any bugs better to use textureswap
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="MK23 (SD)";
    displayNameMagazine="12 round 11,43 � 23 mm Magazine";
    shortNameMagazine=".45ACP Mag";
	reloadTime=0.1;
	magazineReloadTime=1;
	canDrop=1;
    count=12;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\hgreload.ogg",0.004623,1.000000};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dryfire_pistol.ogg",1,1};
	magazines[]={"this"};
	modes[]={"Single"};

	class Single
	{
		ammo = "Bullet45ACP_SD";
		multiplier=1;
		burst=1;
		displayName="MK23 (SD)";
		dispersion=0.002000;
		sound[]={"\d4t_files\sounds\weapons\handheld\silenced_pistol.wav",1,1.000000};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil = "Handgun";
		autoFire=0;
		aiRateOfFire=0.500000;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};