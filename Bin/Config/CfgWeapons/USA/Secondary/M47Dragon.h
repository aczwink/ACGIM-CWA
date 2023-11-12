/*
Sources:
http://en.wikipedia.org/wiki/M47_Dragon
http://www.designation-systems.net/dusrm/m-77.html
http://www.hesterman.net/Html/dragon_m47.htm
*/

class M47Dragon : Default
{
	weaponType=16;
	magazineReloadTime=12;
	reloadTime=0.5;
	reloadAction = MANACT_RELOADAT;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="LAWSingle";
	optics=1;
	scopeWeapon=2;
	scopeMagazine=2;
	canLock=2;
	valueWeapon=20;
	valueMagazine=10;
	maxLeadSpeed=600;
	primary=0;
	//Engage at range.
	aiRateOfFire=10.0;
	aiRateOfFireDistance=5000;
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