/*
Sources:
	http://en.wikipedia.org/wiki/RPG7
*/
class RPG7 : RPG2
{
	model="\ICPrpg7\ICPrpg7e";//TODO
	modelSpecial="\ICPrpg7\ICPrpg7";//TODO
	modelOptics="\sjc_optics\russia\rpg.p3d";
	modelMagazine="\sjc_models\ussr\objects\pg7vl.p3d";
	displayName="RPG-7 Launcher";
	initSpeed = 115;
	//picture="\ICPrpg7\gear1.paa";//TODO
	magazineType="1 * 256";
	magazines[]={"PG7VL"};
};

class RPG7V : RPG7
{
	model="\sjc_models\ussr\weapons\rpg7v_empty.p3d";
	modelSpecial="\sjc_models\ussr\weapons\rpg7v.p3d";
	modelOptics="\sjc_optics\russia\pgo7v.p3d";
	distanceZoomMin=450;
	distanceZoomMax=600;
	displayName="RPG-7V Launcher";
};

class PG7VL : RPG7V
{
	ammo = "RocketPG7VL";
	displayNameMagazine="PG-7VL Grenade";
	shortNameMagazine="PG-7VL";
};