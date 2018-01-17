class M18Red : HandGrenade
{
	scopeWeapon=0;
	scopeMagazine=2;
	modelMagazine = "\sjc_models\USA\objects\m18red.p3d";
	ammo = "GrenadeM18Red";
	displayName="M18 Red Smoke";
	displayNameMagazine="M18 Red Smoke Grenade";
	shortNameMagazine="Red Smoke";
};

class M18Green : M18Red
{
	modelMagazine = "\sjc_models\USA\objects\m18green.p3d";
	ammo = "GrenadeM18Green";
	displayName="M18 Green Smoke";
	displayNameMagazine="M18 Green Smoke Grenade";
	shortNameMagazine="Green Smoke";
};