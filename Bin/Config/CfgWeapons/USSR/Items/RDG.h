class RDG1 : HandGrenade
{
	scopeWeapon=0;
	scopeMagazine=2;
	modelMagazine = "\sjc_models\USSR\Objects\RDG1.p3d";
	ammo = "GrenadeANM8";
	displayName="RDG-1 White Smoke";
	displayNameMagazine="RDG-1 White Smoke Grenade";
	shortNameMagazine="White Smoke";
	valueMagazine = 2;
	sound[]={,0.1,1};
};

class RDG1Red : RDG1
{
	ammo = "GrenadeM18Red";
	displayName="RDG-1 Red Smoke";
	displayNameMagazine="RDG-1 Red Smoke Grenade";
	shortNameMagazine="Red Smoke";
};