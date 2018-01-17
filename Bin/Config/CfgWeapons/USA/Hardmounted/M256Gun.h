/*
Sources:
http://en.wikipedia.org/wiki/M829_%28munition%29
http://en.wikipedia.org/wiki/M830
http://www.defense-update.com/products/digits/120he-mp.htm
http://en.wikipedia.org/wiki/M1_Abrams
Rounds for M1A1: 40
*/

class M256Gun : Gun120
{
	displayName="M256 120mm Gun";
	magazines[]={"M829_120APFSDS", "M830_120HEAT"};
	reloadSound[]={"\d4t_files\sounds\weapons\vehicles\Gun120_Reload.wss",0.019,1};
	aiRateOfFire=0;
	aiRateOfFireDistance=0;
};

class M829_120APFSDS : Heat120
{
	displayName="M829 120mm APFSDS";
	displayNameMagazine="M829 APFSDS";
	shortNameMagazine="APFSDS";
	ammo = "Shell120_APFSDS";
	count = 28;
	reloadTime = 5;
	nameSound="heat";
	initSpeed=1540; //~Approx. this is lowered a bit from the M829A1 value
    //sound[]={"\d4t_files\sounds\weapons\vehicles\abrams_m256_120mm_apfsds.wss",100,1}; //sound from inside
	sound[]={"\d4t_files\sounds\weapons\vehicles\Gun120.wss",50,1}; //external sound
};

class M830_120HEAT : Shell120
{
	count=12;
	reloadTime = 5;
	initSpeed = 1400;
	ammo = "Shell120_HEAT";
	displayName="M830 120mm HEAT";
	displayNameMagazine="M830 HEAT";
    shortNameMagazine="HEAT";
	sound[]={"\d4t_files\sounds\weapons\vehicles\Gun120.wss",50,1};
  };