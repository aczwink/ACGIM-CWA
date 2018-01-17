/*
Sources:
	http://en.wikipedia.org/wiki/RPG-18
*/
class RPG18 : LAWLauncher
{
	model="\sjc_models\ussr\weapons\rpg18_empty.p3d";
	modelSpecial="\sjc_models\ussr\weapons\rpg18.p3d";
	modelOptics="\sjc_optics\russia\rpg18.p3d";
	sound[]={"\sjc_sounds\weapons\handheld\fire.wss",db18,1.0};
	displayName="RPG-18";
	displayNameMagazine="PG-18 HEAT Grenade";
	shortNameMagazine="PG-18 HEAT";
	initSpeed = 115;
	ammo = "RocketPG18";
	magazineType="3 * 256";
};