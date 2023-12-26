class M126Gun155 : Gun120
{
    magazines[]={"Gun155HE"};
    reloadTime=5;
    sound[]={"\SIG_MN\120gun.ogg",10.000000,1};
    reloadSound[]={"\SIG_MN\breech.wav",db-20,1};
};

class Gun155HE : Shell120
{
    displayName="M829A2 120 APFSDS";
    displayNameMagazine="M829A2 APFSDS";
    shortNameMagazine="M829A2 APFSDS";
    ammo = "Shell120_HEAT";
    count=40;
    nameSound="heat";
    initSpeed=1540;
    reloadTime=5;
    aiRateOfFire=0;
    aiRateOfFireDistance=0;
    sound[]={"\d4t_sounds\weapons\abrams_m256_120mm_apfsds.wss",100,1};
    reloadSound[]={"\SIG_MN\breech.wav",db-20,1};
};