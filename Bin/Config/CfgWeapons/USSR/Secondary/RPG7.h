/*
Sources:
	http://en.wikipedia.org/wiki/RPG7
*/
class RPG7 : RPG2
{
	model = "\models\ICPrpg7e.p3d";
	modelSpecial="\models\ICPrpg7.p3d";
	modelOptics="\sjc_optics\russia\rpg.p3d";
	modelMagazine="\sjc_models\ussr\objects\pg7vl.p3d";
	displayName="RPG-7 Launcher";
	initSpeed = 115;
	magazineType="1 * 256";
	magazines[]={"this"};

	ammo = "RocketPG7VL";
	displayNameMagazine="PG-7VL Grenade";
	shortNameMagazine="PG-7VL";
};

class RPG7V : RPG7
{
	model="\sjc_models\ussr\weapons\rpg7v_empty.p3d";
	modelSpecial="\sjc_models\ussr\weapons\rpg7v.p3d";
	modelOptics="\sjc_optics\russia\pgo7v.p3d";
	distanceZoomMin=450;
	distanceZoomMax=600;
	displayName="RPG-7V Launcher";
	magazines[]={"this"};
};