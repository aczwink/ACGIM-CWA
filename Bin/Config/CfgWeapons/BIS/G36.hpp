class G36aBase:Riffle
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="\G36A\G36";
	modelOptics="\G36A\G36_optics";
	picture="\G36A\w_g36.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_G36";
	displayNameMagazine="$STR_DN_ADD_G36_AMMO";
	shortNameMagazine="$STR_DN_ADD_G36_AMMO";
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"G36a"};
	modes[]={"Single","Burst","Fullauto"};

	class Single
	{
		ammo="G36a";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_G36";
		dispersion=0.0002;
		sound[]={"\G36A\g36a.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo="G36a";
		multiplier=1;
		burst=3;
		displayName="$STR_DN_ADD_G36_BURST";
		dispersion=0.001;
		sound[]={"\G36A\g36a_burst",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=3;
		recoil="riffleBurst3";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="G36a";
		multiplier=1;
		burst=1;
		displayName="G36 Auto";
		dispersion=0.0003;
		sound[]={"\G36A\g36a_full",1.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class G36aMag:G36aBase
{
	scopeMagazine=2;
	picture="\G36a\m_G36.paa";
};

class G36a:G36aBase
{
	scopeWeapon=2;
	magazines[]={"G36aMag"};
};