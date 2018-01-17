/*
Sources:
http://en.wikipedia.org/wiki/AGM-65_Maverick
*/
class AGM65BMaverick : MaverickLauncher
{
	displayname="AGM-65B Maverick";
	displaynameMagazine="AGM-65B missile";
	shortNameMagazine="AGM-65B";
	ammo = "AGM65MaverickB";
	count = 6;
	reloadTime = 1.0;
	sound[]={"\d4t_files\sounds\weapons\vehicles\MaverickLaunch.wss",3,1};
};

class AGM65BMaverick_2 : AGM65BMaverick
{
	count = 2;
};