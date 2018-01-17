/*
Sources:
http://en.wikipedia.org/wiki/M47_Dragon
http://www.designation-systems.net/dusrm/m-77.html
http://www.hesterman.net/Html/dragon_m47.htm
*/
class M47Dragon : AALauncher
{
	displayName="M47 Dragon Launcher";
	displayNameMagazine="M47 Dragon Missle";
	shortNameMagazine="Dragon Missle";
	model="\d4t_files\models\us\weapons\m47dragon.p3d";
	modelSpecial="\d4t_files\models\us\weapons\m47dragon.p3d";
	modelMagazine="at1";
	modelOptics="optika_AT4_Spigot_B";
	uiPicture="isat";
	sound[]={"\d4t_files\sounds\weapons\handheld\fgm148_fire.wss","db17",1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\fgm148_reload.wss",0.010316,1};
	initSpeed = 90;
	canDrop=true;
	opticsZoomMin=0.04;
	opticsZoomMax=0.12;
	distanceZoomMin=400;
	distanceZoomMax=80;
	count=1;
	ammo = "RocketM47Dragon";
	magazineType="6 * 		256";
};