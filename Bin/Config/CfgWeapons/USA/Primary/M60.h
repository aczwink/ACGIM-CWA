/*
Sources:
http://en.wikipedia.org/wiki/M60_machine_gun
Gained Information:
	Rate of fire: 500-600 rpm
	Rate of fire (mean): 550 rpm
	=> reloadTime = 0.10909
*/
class M60 : MachineGun7_6Manual //Also the BIS Class
{
	scopeWeapon=2;
	scopeMagazine=2;
	displayName="M60";
	displayNameMagazine="100 round 7.62x51mm Box";
	shortNameMagazine="Bullet box";
	weaponType = WEAPON_PRIMARY + WEAPON_SECONDARY;
	magazineType = 2 * WEAPON_ITEM;
	model="\d4t_files\models\us\weapons\m60mg.p3d";
	modelOptics="\d4t_files\optics\optic_m60.p3d";
	opticsFlare = 1;
	distanceZoomMin=300;
	distanceZoomMax=300;
	reloadSound[]={"\d4t_files\sounds\weapons\handheld\m240belt.wss",0.010316,1};
	backgroundReload=1;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
	reloadTime = 0.10909;
	initSpeed = 853;
	uipicture="\d4t_files\pics\ui\ismg.paa";
	ammo = "M60FullAuto";
	multiplier=1;
	burst=1;
	count=100;
	sound[]={"\d4t_files\sounds\weapons\handheld\M60fire.wss",db7,1};
	soundContinuous=0;
	maxLeadSpeed=300;
	recoil = "M60";
	useAction=0;
	useActionTitle="";
};