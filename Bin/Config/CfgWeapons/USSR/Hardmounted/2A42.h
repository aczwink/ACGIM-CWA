/*
Sources:
	http://en.wikipedia.org/wiki/2A42
*/
class 2A42 : Cannon30
{
	displayName = "2A42 30mm Cannon";
	magazines[] = {"3UBR8", "3UOF8", "3UOF8_340"};
	reloadTime = 1;
};

class 3UBR8 : Cannon30AP
{
	ammo = "3UBR8";
	displayName = "2A42 APDS";
	displayNameMagazine="2A42 3UBR8 APDS";
	shortNameMagazine="APDS";
	initSpeed = 1120;
	reloadTime = 0.10909;
	count = 160;
};

class 3UOF8 : Cannon30HE
{
	ammo = "3UOF8";
	displayName = "2A42 HEI";
	displayNameMagazine="2A42 3UOF8 HEI";
	shortNameMagazine="HEI";
	initSpeed = 960;
	reloadTime = 0.10909;
	count = 300;
};

class 3UOF8_340 : 3UOF8
{
	count = 340;
};