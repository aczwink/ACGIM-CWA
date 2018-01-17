/*
Sources:
	http://en.wikipedia.org/wiki/9M112-1_Kobra
	http://www.inetres.com/gp/military/cv/tank/T-80.html
*/
class 9K112Kobra : AT3Launcher
{
	ammo = "Rocket9M112";
	displayName="9M112 Kobra";
	displayNameMagazine="9M112 Kobra";
	shortNameMagazine="9M112";
	count = 6;
	initspeed = 125;
	reloadTime=9;
	model="\sjc_models\russia\objects\9m112.p3d";
	sound[]={"\sjc_sounds\weapons\missiles\RocketLaunch.wss",10,1};
	reloadSound[]={"\sjc_sounds\weapons\missiles\RocketLoad.wss",0.019,1};
};