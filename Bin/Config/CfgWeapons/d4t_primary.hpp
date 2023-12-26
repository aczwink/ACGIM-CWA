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
