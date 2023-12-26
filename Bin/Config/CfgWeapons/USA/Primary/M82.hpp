class M82A1 : SniperRiffle
{
    scopeWeapon=2;
    scopeMagazine=2;
    displayName="M82A1 Barett";
    displayNameMagazine="10 round 12.7 x 99mm BMG Magazine";
	shortNameMagazine=".50 BMG Mag";
    model="\d4t_files\models\us\weapons\m82a1.p3d";//used odol for this, if there are any bugs better to use textureswap
    modelOptics="\d4t_files\optics\optic_m82.p3d";//used odol for this, if there are any bugs better to use textureswap
    optics=1;
    opticsZoomMin=0.0205;
    opticsZoomMax=0.0205;
    opticsFlare=0;
    backgroundReload=0;
    initSpeed=1555;
    reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m16reload.wss",0.010316,1};
    drySound[]={"weapons\M16dry",db-40,1};
    count=10;

    modes[]={"Single"};
    class Single
    {
        ammo = "BulletNATO127x99";
        displayName="M82A1 Barett";
        multiplier=1;
        burst=1;
        dispersion=0.0000005;
        sound[]={"\d4t_files\sounds\weapons\handheld\m82fire.wav",db0,1};
        soundContinuous=0;
        reloadTime=0.175;
        ffCount=1;
        recoil="M82";
        autoFire=0;
        aiRateOfFire = 10.0000;
        aiRateOfFireDistance = 1000;
        useAction=0;
        useActionTitle="";
    };
    magazines[]={"this"};
};