/*
Sources:
http://en.wikipedia.org/wiki/M16_rifle
Gained Info:
Rate of Fire (mean): 825 rpm
*/
class M16A1 : Riffle
{
	scopeWeapon = SCOPE_PUBLIC;
	scopeMagazine = SCOPE_PUBLIC;
	displayName = "M16A1";
	displayNameMagazine="20 round 5.56x45mm Magazine";
	shortNameMagazine="5.56x45mm Mag";
	model = "\models70\us\weapons\m16a1.p3d";
	modelOptics="\d4t_files\optics\optic_m16a2.p3d";
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\reload.wss",1.000000,1};
	drySound[]={"\d4t_files\sounds\weapons\handheld\dry.wss",0.010316,1};
	uipicture="\d4t_files\pics\ui\soldier.paa";
	count = 20;
	initSpeed = 948;
	magazines[]={"this"};
	modes[]={"Single", "Burst"};
	dexterity = 0.945;
	
	class Single
	{
		ammo = "M16A2_Single";
		multiplier=1;
		burst=1;
		displayName="M16A1 - Semi";
		dispersion=0.0012;
		sound[]={"\sjc_sounds\weapons\handheld\M16Fire.wss", db0.5, 1};
		soundContinuous=0;
		reloadTime = 0.072727;
		ffCount=1;
		recoil = "M16A1";
		autoFire=0;
		//Make AI engage at higher rates.
		//aiRateOfFire=5.0;
		//aiRateOfFireDistance=500;
		aiRateOfFire = 0.9;
		aiRateOfFireDistance=1000;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo = "M16A2_Burst";
		multiplier=1;
		burst = 1;
		displayName="M16A1 - Auto";
		dispersion = 0.012;
		sound[] = {"\sjc_sounds\weapons\handheld\M16Fire.wss", db0.5, 1};
		soundContinuous=0;
		reloadTime = 0.086;
		ffCount = 1;
		recoil = "M16A1";
		autoFire = 1;
		//Make AI engage at higher rates.
		//aiRateOfFire=5.0;
		//aiRateOfFireDistance=500;
		aiRateOfFire = 0.9;
		aiRateOfFireDistance=1000;
		useAction=0;
		useActionTitle="";
	};
};