class V94: MachineGun7_6Manual
{
    picture="\RHS_Weap\AK_Pics\v-94I.paa";
    picture="\RHS_Weap\AK_Pics\12.7_MAG.paa";

    scopeWeapon=2;
    scopeMagazine=2;
    displayName="OSV-96";
    displayNameMagazine="5rd 12.7x107mm Magazine";
    shortNameMagazine="12.7mm Mag.";
    model="\RHS_Weap\V_94\V_94.p3d";
    modelOptics="\RHS_Weap\AK_Optics\AK_Optic4";
    opticsZoomMin=0.02;
    opticsZoomMax=0.02;
    distanceZoomMin=400;
    distanceZoomMax=400;
    drySound[]={"weapons\AK74Dry",0.010000,1};
    reloadMagazineSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_load.wss",1.000000,1};
    count=5;
    weaponType=17;
    initSpeed=1000;
    magazineType=256;
    canDrop = 1;
    modes[]={"Single"};
    magazines[]={"this"};

    class Single
    {
        ammo="RHS_E127_Bullet";
        multiplier=1;
        burst=1;
        displayName="12.7x107mm Semi";
        dispersion=0;
        sound[]={"\RHS_Weap_Sounds\AK_Sounds\barrett.wss",1.000000,1.00};
        soundContinuous=0;
        reloadTime=1.2;
        ffCount=1;
        aiDispersionCoefX=5;
        recoil="RHS_E127_RifleRecoil";
        autoFire=0;
        aiRateOfFire=0.5;
        aiRateOfFireDistance=1500;
        useAction=0;
        useActionTitle="";
    };
};