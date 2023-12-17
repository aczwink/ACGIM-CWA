class SteyrBase:Riffle
{
	scopeWeapon=1;
	scopeMagazine=1;
	model="\steyr\steyr";
	modelOptics="\steyr\optika_steyr";
	picture="\Steyr\w_steyr.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_STEYR";
	displayNameMagazine="$STR_DN_ADD_STEYR_AMMO";
	shortNameMagazine="$STR_DN_ADD_STEYR_AMMO_SHORT";
	drySound[]={"weapons\M16dry",0.0031623,1};
	modes[]={"Single","Fullauto"};

	class Single
	{
		ammo="Steyr";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_STEYR";
		dispersion=0.0002;
		sound[]={"\Steyr\Steyr",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=2.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="Steyr";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_STEYR_AUTO";
		dispersion=0.0003;
		sound[]={"\Steyr\Steyr",1.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		recoilFixed="riffleSingleFixed";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class SteyrMag:SteyrBase
{
	scopeMagazine=2;
	picture="\Steyr\m_steyr.paa";
};

class Steyr:SteyrBase
{
	scopeWeapon=2;
	magazines[]={"SteyrMag"};
};