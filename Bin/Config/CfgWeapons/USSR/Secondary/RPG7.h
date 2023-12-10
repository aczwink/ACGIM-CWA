/*
Sources:
	http://en.wikipedia.org/wiki/RPG7
*/
class RPG7 : RPG2
{
	aiRateOfFireDistance = 300;
	ammo = "RocketPG7V";
	canDrop = 1;
	displayName="RPG-7 Launcher";
	displayNameMagazine="PG-7V Grenade";
	shortNameMagazine="PG-7V";
	initSpeed = 115;
	magazines[]={"this"};
	model = "\models\csla2_rpg7_empty.p3d";
	modelMagazine = "\models\csla2_rpg7_Rocket.p3d";
	modelOptics = "\models\csla2_rpg7_optika.p3d";
	modelSpecial = "\models\csla2_rpg7_s_raketou.p3d";
	reloadTime = 2;
};

class RPG7V : RPG7
{
	aiRateOfFireDistance = 400;
	ammo = "RocketPG7VL";
	displayName="RPG-7V Launcher";
	displayNameMagazine = "PG-7VL Grenade";
	shortNameMagazine = "PG-7VL";
	distanceZoomMin=450;
	distanceZoomMax=600;
	magazines[]={"this"};
	model = "\models\csla2_rpg7v_empty.p3d";
	modelMagazine = "\models\csla2_rpg7v_Rocket.p3d";
	modelOptics="\sjc_optics\russia\pgo7v.p3d";
	modelSpecial = "\models\csla2_rpg7v_s_raketou.p3d";
};