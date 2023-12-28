class M136AT4 : Default
{
    scopeWeapon = 2;
    scopeMagazine = 2;
    weaponType = 16;
    magazineType="2 * 256";
    valueWeapon = 20;
    valueMagazine = 10;
    model="\d4t_files\models\us\weapons\m136at4.p3d";//used odol for this, if there are any bugs better to use textureswap
    modelOptics="\d4t_files\optics\optic_m136.p3d";//used odol for this, if there are any bugs better to use textureswap
    modelSpecial="\d4t_files\models\us\weapons\m136at4_empty.p3d";//used odol for this, if there are any bugs better to use textureswap
    ammo = "RocketM136AT4";
    displayName="M136 AT4 Launcher";
    displayNameMagazine="M136AT4 HEAT Missile";
    shortNameMagazine="M136AT4 Missile";
    count = 1;
    magazineReloadTime = 12;
    reloadTime = 0.5;
    sound[]={"\d4t_files\sounds\weapons\handheld\at4fire.wss",db17,1};
    reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\at4reload.wss",0.010316,1};
    initSpeed = 30;
    canLock = 1;
    reloadAction = MANACT_RELOADAT;
    autoReload = 0;
    ffMagnitude = 0.1;
    ffFrequency = 1;
    ffCount = 1;
    recoil = "LAWSingle";
    aiRateOfFire = 10;
    aiRateOfFireDistance = 500;
    optics = 1;
    primary = 0;
    opticsZoomMin = 0.18;
    opticsZoomMax = 0.18;
    distanceZoomMin = 100;
    distanceZoomMax = 100;
    uiPicture = "isat";
    magazines[]={"this"};
};