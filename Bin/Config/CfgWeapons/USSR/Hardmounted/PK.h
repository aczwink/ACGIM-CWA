/*
Sources:
	http://en.wikipedia.org/wiki/PKT
	http://en.wikipedia.org/wiki/T-62
*/
class PKT : MachineGun7_6
{
	magazineReloadTime=5;
	ammo = "PKT";
	reloadTime = 0.075;
	soundContinuous=0;
	count = 1250;
	displayName="PKT Coax";
	displayNameMagazine="100rd 7.62x54R Magazine";
	shortNameMagazine="100rd 7.62x54R Mag.";
	sound[]={"\sjc_sounds\weapons\hardmounted\pkt.wss",3,1};
	burst=1;
	initSpeed = 825;
	dispersion=0.00033;
	aiDispersionCoefX=1;
	aiRateOfFireDistance=1200;
};

class PKT_2000 : PKT
{
	count = 2000;
};

class PKT_2500 : PKT
{
	count = 2500;
};

/*
Sources:
	http://en.wikipedia.org/wiki/PK_machine_gun
Rate of fire: 650–850 -> 750
*/
class PKMS : MachineGun7_6
{
	ammo = "PKT";
	reloadTime = 0.08;
	initSpeed = 825;
	count = 100;
	modelOptics="\sjc_optics\russia\optics_pkt_mounted.p3d";
	sound[]={"\sjc_sounds\weapons\handheld\PKT.ogg",3.1622777,1};
	soundContinuous=0;
	reloadSound[]={"",1,1};
	reloadMagazineSound[]={"\sjc_sounds\weapons\handheld\mg_reload.wss",0.003162,1};
	magazineReloadTime=6;
	dispersion=0.010;
	displayName = "PKMS";
	displayNameMagazine="100rd 7.62x54R Magazine";
	shortNameMagazine="100rd 7.62x54R Mag.";
	maxLeadSpeed=450;
	optics = true;
	aiRateOfFire=0.5;
	aiRateOfFireDistance=1000;
};