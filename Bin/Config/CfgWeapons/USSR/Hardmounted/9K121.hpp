/*
Sources:
https://en.wikipedia.org/wiki/9K121_Vikhr
*/

class 9K121 : AT3Launcher
{
    ammo = "Rocket9K121Vikhr";
    displayName="9K121 Vikhr AT-16 ATGM";
    displayNameMagazine = "AT16";
    shortNameMagazine = "AT16";
    count = 12;
    reloadTime = 0.5;
    autoReload = true;
    magazineReloadTime = 15;
    sound[]={"\sjc_sounds\weapons\missiles\AT6_fire.wss",3,1};
    reloadSound[]={Weapons\missload,db-70,1};
    initSpeed=0;
    aiRateOfFire=5.0; // delay between shots at given distance
    aiRateOfFireDistance=4500; // at shorter distance delay goes lineary to zero
};