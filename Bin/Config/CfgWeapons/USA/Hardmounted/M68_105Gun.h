/*
Sources:
http://en.wikipedia.org/wiki/Royal_Ordnance_L7
http://afvdb.50megs.com/usa/m60.html
Rounds: Maximum of 63 rounds
*/
class M68_105Gun : Gun105
{
	displayName="M68 105mm Gun";
	magazines[]={"M735_105APFSDS", "M456A1_105HEAT"};
	reloadTime=10;
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\Gun105_Reload.ogg",0.019,1};
};

class M735_105APFSDS : Heat105
{
	ammo = "Shell105_APFSDS";
	displayName="M735 105mm APFSDS";
	displayNameMagazine="M735 105mm APFSDS";
	shortNameMagazine="APFSDS";
	count=33;
	initSpeed = 1475;
	sound[]={"\d4t_files\sounds\weapons\vehicles\105gun.ogg",100,1};
};

class M456A1_105HEAT : Shell105
{
	ammo = "Shell105_HEAT";
	displayName="M456A1 105mm HEAT";
	displayNameMagazine="M456A1 105mm HEAT";
	shortNameMagazine="HEAT";
	count=30;
	initSpeed=1140; //No Proof
	sound[]={"\sjc_sounds\weapons\hardmounted\Gun105.ogg",50,1};
};