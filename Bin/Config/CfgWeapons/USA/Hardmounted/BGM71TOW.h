class BGM71TOW : HellfireLauncherCobra
{
	ammo = "RocketBGM71TOW";
	displayName = "BGM-71 TOW";
	sound[]={"\d4t_files\sounds\weapons\vehicles\Bradley_M220_ATGM.wav","db17",1};
};

class M220_BGM71DTOW : BGM71TOW
{
	ammo = "RocketBGM71DTOW";
	count = 2;
	reloadTime = 5;
	magazineReloadTime = 15;
	displayName = "M220 BGM-71 TOW-2";
	displayNameMagazine="BGM-71D TOW-2";
	shortNameMagazine="TOW-2";
};

class M220_BGM71ETOW : M220_BGM71DTOW
{
	ammo = "RocketBGM71ETOW";
	displayName="M220 BGM-71 TOW-2A";
	displayNameMagazine="BGM-71E TOW-2A";
	shortNameMagazine="TOW-2A";
};

class M220_BGM71ETOW_7 : MachineGun12_7
{
	ammo = "RocketBGM71ETOW_HMMWV";
	displayName="M220 BGM-71 TOW-2A";
	displayNameMagazine="BGM-71E TOW-2A";
	magazine="TOW-2A";
	shortNameMagazine="TOW-2A";
	count=7;
	soundContinuous=0;
	dispersion=0.00;
	maxLeadSpeed=1250;
	ffCount=1;
	autoFire=1;
	multiplier=1;
	burst=0;
	aiRateOfFire=37.5;
	aiRateOfFireDistance=3750;
	autoReload=1;
	canlock =2;
	initSpeed=5000;
	flash="gunfire";
	flashSize=1.000000;
	sound[]={"\d4t_files\sounds\weapons\vehicles\Bradley_M220_ATGM.wav","db17",1};
	reloadSound[]={"\sjc_sounds\weapons\hardmounted\psy_mcar_towreload.wav",db-75,0};
	reloadTime=15;
};