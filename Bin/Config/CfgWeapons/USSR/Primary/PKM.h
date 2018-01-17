/*
Sources:
	http://en.wikipedia.org/wiki/PK_machine_gun
Rate of fire: 650–850 -> 750
*/
class PKM : MachineGun7_6Manual
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType = WEAPON_PRIMARY + WEAPON_SECONDARY;
	magazineType = 2 * WEAPON_ITEM;
	model="\d4t_files\models\russia\weapons\pk.p3d";
	modelOptics="\d4t_files\optics\optic_pk.p3d";
	displayName="PKM";
	displayNameMagazine="100rd 7.62x54R Magazine";
	shortNameMagazine="100rd 7.62x54R Mag.";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	drySound[]={"weapons\AK74Dry",0.01,1};
	initSpeed = 825;
	ammo = "PKM";
	dispersion=0.002;
	sound[]={"\d4t_files\sounds\weapons\handheld\pkm.wss",3,1};
	soundContinuous=0;
	reloadTime = 0.08;
	recoil = "PKM";
	aiRateOfFire=1.3;
	canDrop=1;
	count=100;
};