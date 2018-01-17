/*
Sources:
http://en.wikipedia.org/wiki/M16_rifle
Gained Info:
Rate of Fire (mean): 825 rpm
*/
class M16A2 : Riffle
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	displayName="M16A2";
	displayNameMagazine="30 round 5.56x45mm Magazine";
	shortNameMagazine="5.56x45mm Mag";
	model="\d4t_files\models\us\weapons\m16\m16a2.p3d";
	modelOptics="\d4t_files\optics\optic_m16a2.p3d";
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	uipicture="\d4t_files\pics\ui\soldier.paa";
	count=30;
	initSpeed = 948;
	magazines[]={"this"};
	modes[]={"Single", "Burst"};

	class Single
	{
		ammo = "M16A2_Single";
		multiplier=1;
		burst=1;
		displayName="M16A2 - Semi";
		dispersion=0.0012;
		sound[]={"\d4t_files\sounds\weapons\handheld\m16single.wss",db0,1};
		soundContinuous=0;
		reloadTime = 0.072727;
		ffCount=1;
		recoil = "M16A2";
		autoFire=0;
		//Make AI engage at higher rates.
		//aiRateOfFire=5.0;
		//aiRateOfFireDistance=500;
		aiRateOfFire=3;
		aiRateOfFireDistance=1000;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo = "M16A2_Burst";
		multiplier=1;
		burst=3;
		displayName="M16A2 - Burst";
		dispersion=0.00145;
		sound[]={"\d4t_files\sounds\weapons\handheld\m16burst.wav",db0,1};//.wss
		soundContinuous=0;
		reloadTime = 0.072727;
		ffCount=3;
		recoil = "M16A2_Burst";
		autoFire=0;
		//Make AI engage at higher rates.
		//aiRateOfFire=5.0;
		//aiRateOfFireDistance=500;
		aiRateOfFire=3;
		aiRateOfFireDistance=1000;
		useAction=0;
		useActionTitle="";
	};
};

class M16A2_M203 : M16A2
{
	displayName="M16A2 M203";
	model="\d4t_files\models\us\weapons\m16\m16a2_m203.p3d";
	uiPicture="igrenadier";
	muzzles[]={"M16Muzzle","M203Muzzle"};
	
	class M16Muzzle : M16A2
	{
		magazines[]={"M16A2"};
	};
	class M203Muzzle : M203 {};
};