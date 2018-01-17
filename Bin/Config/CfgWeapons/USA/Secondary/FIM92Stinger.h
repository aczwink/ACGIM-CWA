/*
Sources:
http://en.wikipedia.org/wiki/FIM-92_Stinger
*/
class FIM92Stinger : CarlGustavLauncher
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="\d4t_files\models\us\weapons\fim92a.p3d"; //used odol explorer for this
	modelSpecial="\d4t_files\models\us\weapons\fim92a.p3d"; //used odol explorer for this
	modelOptics="optika_stinger";
	canLock=2;
	dexterity=0.25;
	valueWeapon=20;
	valueMagazine=10;
	displayName="FIM-92 Stinger";
	displayNameMagazine="Stinger Missile";
	shortNameMagazine="Stinger";
	initSpeed = 30;
	maxLeadSpeed=600;
	primary=0;
	uiPicture="isaa";
	ammo = "RocketFIM92Stinger";
};