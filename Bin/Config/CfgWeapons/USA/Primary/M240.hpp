class M240B : MachineGun7_6Manual
{
    displayName="M240B";
    displayNameMagazine="100 round 7.62x51mm FMJ Box";
	shortNameMagazine="Bullet belt";
    weaponType=1;
    model="\d4t_files\models\us\weapons\m240b.p3d";//2.0 one, if there are bugs -> odl2.44
    modelOptics="\d4t_files\optics\optic_m240.p3d";//2.0 one, if there are bugs -> odl2.44
    scopeWeapon=2;
    scopeMagazine = 2;
    optics = 1;
    opticsFlare=1;
    opticsZoomMin=0.35;
    opticsZoomMax=0.35;
    distanceZoomMin=300;
    distanceZoomMax=300;
    reloadSound[]={"\d4t_files\sounds\weapons\handheld\m240belt.wss",0.010316,1};
    backgroundReload=1;
    reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
    uipicture="\d4t_files\pics\ui\ismg.paa";
    ammo = "BulletNATO762x51";
    multiplier=1;
    burst=1;
    sound[]={"\d4t_files\sounds\weapons\handheld\m240b.wss",db7,1};
    soundContinuous=0;
    reloadTime=0.075;//according to wiki 650�950 rounds/min... i used 800
    ffCount=6;
    ffMagnitude=0.500000;
    ffFrequency=11;
    dispersion=0.002500;
    aiDispersionCoefX=50;
    maxLeadSpeed=300;
    recoil = "M240";
    autoFire = 1;
    useAction= 0;
    useActionTitle="";
    aiRateOfFire = 0.5;
    aiRateOfFireDistance=1000;
    count=100;
    magazineType="2 * 256";

    magazines[] = {"this"};
};