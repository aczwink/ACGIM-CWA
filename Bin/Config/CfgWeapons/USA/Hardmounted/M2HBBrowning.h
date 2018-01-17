/*
Sources:
	(1) http://en.wikipedia.org/wiki/M2_Browning
Rate of fire: 450–635 so 542.5
*/
class M2HBBrowning : MachineGun12_7
{
	ammo = "M2HBBrowning";
	displayName="M2HB Browning";
    displayNameMagazine="12.7mm .50cal 100rd ammobox";
    shortNameMagazine="M2HB ammobox";
    count=100; //No Proof
    reloadTime = 0.11;
	sound[]={"\d4t_files\sounds\weapons\vehicles\50cal.ogg",20,1};
    soundContinuous=0;
    initSpeed = 890;
    dispersion=0.003;
	maxLeadSpeed=300;
	ffMagnitude=0.5;
	ffFrequency=11;
	ffCount=6;
    flash="gunfire";
    flashSize=1.500000;
    recoil="mgunBurst3";
    aiDispersionCoefY=2.000000;    		
    aiRateOfFire=0.1;
	aiRateOfFireDistance=1000;
    autoFire=1;
    optics=1;
    autoReload=1;
    magazineReloadTime=5;
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\m249reload.wav",0.010316,1};
};

class M2HBBrowningTwin : M2HBBrowning
{
	count = 200;
	reloadTime = 0.055; //half the reloadTime because twin
};