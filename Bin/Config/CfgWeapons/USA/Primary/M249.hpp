/*reloadTime formula with neglection of time to reload magazine (only for automatic-fire)
  x rounds/min from wiki
  x / 60 rounds/sec
  1 / x seconds/round

  1/(x/60) => 60/x
*/
class M249SAW : MachineGun7_6Manual
{
    scopeWeapon=2;
    scopeMagazine=2;
    displayName="M249 SAW";
    displayNameMagazine="200 round 5.56x45mm FMJ Box";
	shortNameMagazine="Softbox Mag";
    model="\d4t_files\models\us\weapons\m249.p3d";//2.0 one, if there are bugs -> odl2.44
    modelOptics="\d4t_files\optics\optic_m249.p3d";//2.0 one, if there are bugs -> odl2.44
    sound[]={"\d4t_files\sounds\weapons\handheld\m249.wav",10,1};
    reloadTime=0.08;//according to wiki 750rounds/min
    reloadSound[]={"\d4t_files\sounds\weapons\handheld\m240belt.wss",0.010316,1};
    reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
    soundContinuous=0;
    dexterity=0.35;
    ammo = "BulletNATO556x45";
    recoil = "M249";
    autoReload=0;
    autoFire=1;
    initSpeed=1000;
    dispersion=0.000700;		
    optics=1;
    canLock=0;
    flashSize=0.9;
    ffMagnitude=0.5;
    ffFrequency=11;
    ffCount=6;
    maxLeadSpeed=300;
    aiDispersionCoefX=5;		
    aiRateOfFire=0.5;
    aiRateOfFireDistance=800;
    uipicture="\d4t_files\pics\ui\ismg.paa";
    magazines[]={"this"};
    count=200;
    magazineType="2 * 256";
};