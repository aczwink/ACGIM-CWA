class p2a1 : HandGunBase
{
	access=2;
	scopeWeapon=public;
	scopeMagazine=private;
	aiRateOfFire=0.500000;
	aiRateOfFireDistance=50;
	model="\d4t_files\models\us\misc\p2a1.p3d";
	modelOptics="\d4t_files\optics\optic_p2a1.p3d";
	picture="\d4t_files\pics\weapons\p2a1.jpg";
	displayName="P2A1";
	count=1;
	weaponType = WEAPON_HANDGUN;
	magazineType = WEAPON_HANDGUNMAGAZINE;
	magazineReloadTime=3;
	autoReload=0;
	soundContinuous=0;
	sound[]={"\d4t_files\sounds\weapons\handheld\P2A1_fire.Wav",1.000000,1};
	drySound[]={"\d4t_files\sounds\weapons\handheld\P2A1_dry.wav",1.000000,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\P2A1_load.wav",db-70,1};
	magazines[]={p2a1_white_flare};
	recoil=revolverSingle;
	backgroundReload=0;
	burst=1;
	multiplier=1;
	autoFire=0;
	dispersion=0.002000; 
};

class p2a1_white_flare : p2a1
{
	scopeWeapon=private;
	scopeMagazine=public;
	displayNameMagazine= "P2A1 Flare (White)";
	picture="\dtaext\equip\m\m_flare.paa";
	initSpeed=75;
	ammo=Flare;
};
