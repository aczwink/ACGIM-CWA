/*
Sources:
http://en.wikipedia.org/wiki/M72_LAW
http://www.inetres.com/gp/military/infantry/antiarmor/M72.html
*/

class M72LAW : LAWLauncher //check baseclasses
{
	displayName="M72 LAW";
	displayNameMagazine="M72 LAW HEAT";
	shortNameMagazine="LAW";
	model="\d4t_files\models\us\weapons\m72law_e.p3d";
	modelMagazine="\d4t_files\models\us\weapons\m72law_e.p3d";
	modelSpecial="\d4t_files\models\us\weapons\m72law.p3d";
	modelOptics="\sjc_optics\USA\optics_m72law.p3d";
	sound[]={"\d4t_files\sounds\weapons\handheld\LAWfire.wss",db17,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\LAWreload.wss",0.010316,1};
	uipicture="\d4t_files\pics\ui\isat.paa";
	ammo = "RocketM72LAW";
	magazineType = 2 * WEAPON_ITEM;
	initSpeed = 145;
};