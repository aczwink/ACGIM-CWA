/*
Sources:
	http://en.wikipedia.org/wiki/Rpg-2
*/
class RPG2 : LAWLauncher
{
	model="\sjc_models\fia\weapons\rpg2_empty.p3d";
	modelOptics="\sjc_optics\russia\rpg.p3d";
	modelSpecial="\sjc_models\fia\weapons\rpg2.p3d";
	modelMagazine="\sjc_models\fia\objects\rpg2_rocket.p3d";
	distanceZoomMin=100;
	distanceZoomMax=100;
	displayName="RPG-2";
	displayNameMagazine="PG-2 HEAT";
	shortNameMagazine="PG-2";
	magazineType="2 * 256";
	ammo = "PG2";
	initSpeed = 84;
	sound[]={"\sjc_sounds\weapons\handheld\launch.ogg",0.250000,1};
	reloadMagazineSound[]={"\sjc_sounds\weapons\handheld\rpg_reload.wss",0.010316,1};
};