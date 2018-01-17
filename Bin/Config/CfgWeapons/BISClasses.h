class Default
{
	access = ACCESS_FORBIDDENVERIFIED;
	scopeWeapon=0;
	scopeMagazine=0;
	valueWeapon=2;
	valueMagazine=2;
	picture="";
	uiPicture="ivojak";
	ammo="";
	cursor="w_weapon";
	cursorAim="w_lock";
	weaponType=65536;
	magazineType=0;
	displayName="";
	displayNameMagazine="";
	shortNameMagazine="";
	nameSound="weapon";
	count=0;
	multiplier=1;
	burst=1;
	magazineReloadTime=0;
	reloadTime=1.0;
	sound[]={"",1,1};
	soundContinuous=0;
	drySound[]={"",1,1};
	reloadSound[]={"",1,1};
	reloadMagazineSound[]={"",1,1};
	initSpeed=0;
	maxLeadSpeed=50;
	flash="";
	flashSize=0;
	dispersion=0.002;
	//aiDispersionCoefX=1.0;
	//aiDispersionCoefY=1.0;
	//SJC: Less AI accuracy
	aiDispersionCoefX=2.0;
	aiDispersionCoefY=2.0;
	canLock=2;
	enableAttack=1;
	ffMagnitude=0;
	ffFrequency=1;
	ffCount=1;
	recoil="Empty";
	model="";
	modelSpecial="";
	modelMagazine="\misc\mag_univ.p3d";
	muzzlePos="usti hlavne";
	muzzleEnd="konec hlavne";
	cartridgePos="nabojnicestart";
	cartridgeVel="nabojniceend";
	modelOptics="";
	opticsFlare=1;
	optics=1;
	forceOptics=0;
	//opticsZoomMin=0.35;
	//opticsZoomMax=0.35;
	//SJC: New eyeball zoom for weapons to inherit.
	opticsZoomMin=0.37;
	opticsZoomMax=0.9;
	//distanceZoomMin=400;
	//distanceZoomMax=400;
	//SJC: Most rifles zeroed at 300 meters.
	distanceZoomMin=300;
	distanceZoomMax=300;
	primary=10;
	showEmpty=1;
	autoFire=0;
	autoReload=1;
	aiRateOfFire=5.0;
	aiRateOfFireDistance=500;
	backgroundReload=0;
	reloadAction = MANACT_RELOADMAGAZINE;
	muzzles[]={"this"};
	magazines[]={"this"};
	modes[]={"this"};
	useAction=0;
	useActionTitle="";
	canDrop=1;
};

class Shell73 : Default
{
	scopeWeapon=0;
	scopeMagazine=2;
	displayName="$STR_DN_SHELL";
	displayNameMagazine="$STR_MN_SHELL";
	shortNameMagazine="$STR_SN_SHELL";
	nameSound="shell";
	ammo="Shell73";
	count=15;
	initSpeed=700;
	reloadTime=16.0;
	sound[]={"Weapons\gun73",10.0,1};
	reloadSound[]={"Weapons\reload",0.001,1};
	ffCount=1;
};

class Heat73 : Shell73
{
	ammo="Heat73";
	displayName="$STR_DN_HEAT";
	displayNameMagazine="$STR_MN_HEAT";
	shortNameMagazine="$STR_SN_HEAT";
	nameSound="heat";
};

class Gun73 : Default
{
	scopeWeapon=2;
	scopeMagazine=0;
	displayName="$STR_DN_GUN";
	sound[]={"Weapons\gun73",10.0,1};
	reloadSound[]={"Weapons\reload",0.001,1};
	backgroundReload=1;
	ffMagnitude=1;
	ffFrequency=5;
	magazines[]={"Heat73","Shell73"};
};

class Shell105 : Shell73
{
	ammo="Shell105";
	count=35;
	initSpeed=900;
	reloadTime=16.0;
	sound[]={"Weapons\gun105",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Heat105 : Shell105
{
	ammo="Heat105";
	displayName="$STR_DN_HEAT";
	displayNameMagazine="$STR_MN_HEAT";
	shortNameMagazine="$STR_SN_HEAT";
	nameSound="heat";
	sound[]={"Weapons\gun105",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Gun105 : Gun73
{
	sound[]={"Weapons\gun105",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	magazines[]={"Heat105","Shell105"};
};

class Shell120 : Shell105
{
	ammo="Shell120";
	count=35;
	initSpeed=1500;
	reloadTime=8.0;
	sound[]={"Weapons\gun120",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Heat120 : Shell120
{
	ammo="Heat120";
	displayName="$STR_DN_HEAT";
	displayNameMagazine="$STR_MN_HEAT";
	shortNameMagazine="$STR_SN_HEAT";
	nameSound="heat";
	sound[]={"Weapons\gun120",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Gun120 : Gun105
{
	sound[]={"Weapons\gun120",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	magazines[]={"Heat120","Shell120"};
};

class Shell125 : Shell120
{
	ammo="Shell125";
	count=35;
	initSpeed=1200;
	reloadTime=8.0;
	sound[]={"Weapons\gun125",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Heat125 : Shell125
{
	ammo="Heat125";
	displayName="$STR_DN_HEAT";
	displayNameMagazine="$STR_MN_HEAT";
	shortNameMagazine="$STR_SN_HEAT";
	nameSound="heat";
	sound[]={"Weapons\gun125",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
};

class Gun125 : Gun120
{
	sound[]={"Weapons\gun125",10.0,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	magazines[]={"Heat125","Shell125"};
};

class MGun : Default
{
	ammo="BulletSingle";
	displayName="$STR_DN_MGUN";
	displayNameMagazine="$STR_MN_MGUN";
	shortNameMagazine="$STR_SN_MGUN";
	nameSound="mgun";
	count=100;
	reloadTime=0.25;
	sound[]={"Weapons\M60mgun",1.0,1};
	soundContinuous=1;
	reloadSound[]={"",1,1};
	initSpeed=900;
	flash="gunfire";
	flashSize=0.5;
	optics=0;
	//Less AI accuracy.
	aiDispersionCoefX=8;
	aiDispersionCoefY=3;
	//Make coaxial machine guns less accurate.
	dispersion=0.003;
};

class Riffle : MGun
{
	cursor="w_weapon_T";
	cursorAim="w_weapon_S";
	valueWeapon=4;
	valueMagazine=4;
	ammo="BulletSingle";
	displayName="$STR_DN_RIFLE";
	displayNameMagazine="$STR_MN_MGUN";
	shortNameMagazine="$STR_SN_MGUN";
	weaponType=1;
	magazineType=256;
	count=30;
	reloadTime=0.15;
	magazineReloadTime=5;
	sound[]={"42m16",1.0,1};
	reloadSound[]={"",1,1};
	reloadMagazineSound[]={"weapons\m16load",0.0003162,1};
	opticsFlare=0;
	autoReload=0;
	flash="gunfire";
	flashSize=0.5;
	dispersion=0.0001;
	aiDispersionCoefX=2.0;
	aiDispersionCoefY=2.0;
	maxLeadSpeed=23;
	canLock=0;
	ffMagnitude=0.5;
	ffFrequency=11;
	ffCount=3;
};

class SniperRiffle : Riffle
{
	ammo="BulletSingle";
	displayName="$STR_DN_SNIPER_RIFFLE";
	dispersion=0.00003;
	optics=1;
	opticsZoomMin=0.16;
	opticsZoomMax=0.16;
	sound[]={"Weapons\AKFire_Single",1.0,1};
	soundContinuous=0;
	reloadTime=0.3;
	recoil="sniperSingle";
	opticsFlare=1;
	valueWeapon=1000;
	valueMagazine=1000;
	aiRateOfFire=5.0;
	aiRateOfFireDistance=500;
	maxLeadSpeed=50;
	uiPicture="\misc\isniper_new.paa";
};

class StrokeFist : Default
{
	scopeWeapon=1;
	scopeMagazine=1;
	ammo="StrokeFistHit";
	weaponType=0;
	magazineType=0;
	displayName="$STR_DN_FIST";
	displayNameMagazine="$STR_MN_FIST";
	shortNameMagazine="$STR_SN_FIST";
	sound[]={"Weapons\grenade_launch",0.0031623,1};
	reloadSound[]={"",0.0003162,1};
	aiDispersionCoefX=2.0;
	aiDispersionCoefY=2.0;
	enableAttack=0;
	primary=1;
	showEmpty=0;
	autoReload=1;
	burst=0;
	multiplier=0;
	magazines[]={"StrokeFist"};
	reloadTime=0;
	initSpeed=0;
	canLock=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="Empty";
	dispersion=0.015;
	maxLeadSpeed=15;
	optics=0;
	muzzlePos="";
	muzzleEnd="";
	count=100;
	canDrop=0;
};

class StrokeGun : StrokeFist
{
	ammo="StrokeGunHit";
	scopeWeapon=0;
	scopeMagazine=1;
	displayName="$STR_DN_STRIKE";
	displayNameMagazine="$STR_MN_STRIKE";
	shortNameMagazine="$STR_SN_STRIKE";
	count=100;
	modelOptics="";
	magazines[]={"StrokeGun"};
	primary=1;
};

class HandGunBase : Riffle
{
	initSpeed=380;
	dexterity=2;
	reloadMagazineSound[]={"\O\Guns\reload_gun",0.0316228,1};
	//Make pistols less valuable so AI's aren't always switching to them.
	//valueWeapon=4;
	//valueMagazine=2;
	valueWeapon=0;
	valueMagazine=0;
	distanceZoomMin = 25;
	distanceZoomMax = 25;
};

class GrenadeLauncher : Default
{
	cursor="t_select.paa";
	scopeMagazine=2;
	valueWeapon=3;
	valueMagazine=2;
	weaponType=0;
	magazineType="2 * 		256";
	ammo="Grenade";
	displayName="$STR_DN_GRENADE";
	displayNameMagazine="$STR_MN_GRENADE";
	shortNameMagazine="$STR_SN_GRENADE";
	count=1;
	reloadTime=0;
	//Louder
	//sound[]={"Weapons\grenade_launch",0.0003162,1};
	sound[]={"Weapons\grenade_launch", 0.1, 1};
	reloadSound[]={"Weapons\M16load",0.0003162,1};
	initSpeed=60;
	canLock=0;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="Empty";
	dispersion=0.015;
	aiDispersionCoefY=2.0;
	maxLeadSpeed=15;
	optics=0;
	muzzlePos="usti granatometu";
	muzzleEnd="konec granatometu";
	uiPicture="igrenadier";
};

class Throw : GrenadeLauncher
{
	scopeWeapon=1;
	scopeMagazine=0;
	valueWeapon=0;
	weaponType=0;
	displayName="$STR_DN_THROW";
	sound[]={"",0.0003162,1};
	reloadSound[]={"",0.0003162,1};
	//Less AI Accuracy.
	//aiDispersionCoefX=2.0;
	//aiDispersionCoefY=2.0;
	aiDispersionCoefX = 4;
	aiDispersionCoefY = 4;
	enableAttack=0;
	showEmpty=0;
	autoReload=1;
	//Add own Grenades
	//magazines[]={"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen"};
	magazines[]={"M67", "ANM8", "M18Red", "M18Green", "RGO", "RDG1", "RDG1Red"};
	canDrop=0;
};

class HandGrenade : GrenadeLauncher //This can stay as a "neutral" Grenade
{
	scopeWeapon=0;
	scopeMagazine=2;
	valueMagazine=1;
	magazineType=256;
	ammo="GrenadeHand";
	displayName="$STR_DN_HAND_GRENADE";
	displayNameMagazine="$STR_MN_HAND_GRENADE";
	shortNameMagazine="$STR_SN_HAND_GRENADE";
	initSpeed=22;
	maxLeadSpeed=7;
	reloadTime=1.5;
	count=1;
	sound[]={"",0.0003162,1};
};

class MachineGun7_6 : MGun
{
	scopeWeapon=2;
	scopeMagazine=2;
	//Wasn't considered dangerous enough ?
	//valueWeapon=2;
	//valueMagazine=2;
	valueWeapon=1000;
	valueMagazine=1000;
	ammo="Bullet7_6";
	count=500;
	reloadTime=0.1;
	sound[]={"Weapons\M60mgun",3.1622777,1};
	initSpeed=1000;
	flash="gunfire";
	flashSize=0.9;
	dispersion=0.0007;
	maxLeadSpeed=300;
	//Less AI accuracy.
	//aiDispersionCoefX=5;
	aiDispersionCoefX = 7;
	ffMagnitude=0.5;
	ffFrequency=11;
	ffCount=6;
	recoil="mgunBurst3";
	aiRateOfFire=0.5;
	aiRateOfFireDistance=1000;
	autoFire=1;
	optics=1;
	uiPicture="ismg";
};

class MachineGun7_6Manual : MachineGun7_6
{
	scopeWeapon=0;
	scopeMagazine=0;
	weaponType="1	 + 	16";
	count=100;
	magazineType="2 * 		256";
	canLock=0;
	reloadAction = MANACT_RELOADMAGAZINE;
	autoReload=0;
	reloadMagazineSound[]={"weapons\m16load",0.0003162,1};
	optics=1;
	opticsFlare=0;
	//AI accuracy.
	aiDispersionCoefX=6;
	aiDispersionCoefY=3;
};

class MachineGun12_7 : MachineGun7_6
{
	ammo="Bullet12_7";
	count=500;
	initSpeed=1000;
	reloadTime=0.1;
	sound[]={"Weapons\m2-50-loop",3.1622777,1};
	flashSize=1.1;
	maxLeadSpeed=350;
};

class Browning : MachineGun12_7
{
	ammo="Bullet12_7";
	sound[]={"Weapons\m2-50-loop",31.6227779,1};
};

class MachineGun30 : MachineGun7_6
{
	displayName="$STR_DN_MG30";
	displayNameMagazine="$STR_MN_MG30";
	shortNameMagazine="$STR_SN_MG30";
	ammo="Bullet30";
	count=500;
	reloadTime=0.18;
	initSpeed=1000;
	sound[]={"Weapons\automatic_cannon",3.1622777,1};
	flashSize=1.1;
	maxLeadSpeed=450;
	optics=1;
};

class MachineGun30W : MachineGun30
{
	ammo="Bullet30W";
};

class MachineGun30E : MachineGun30
{
	ammo="Bullet30E";
};

class ZsuCannon : MachineGun30
{
	ammo="Bullet4x23";
	count=2000;
	multiplier=4;
	initSpeed=900;
	flashSize=1.2;
	reloadTime=0.1;
	displayName="$STR_DN_AZP23";
	displayNameMagazine="$STR_MN_AZP23";
	shortNameMagazine="$STR_SN_AZP23";
	dispersion=0.0015;
	maxLeadSpeed=900;
	aiRateOfFire=0.3;
	aiRateOfFireDistance=3000;
};

class Cannon30HE:Default
{
	scopeWeapon=0;
	scopeMagazine=2;
	primary=0;
	autoFire=1;
	shotFromTurret=1;
	displayName="$STR_DN_OUT_V80_HE";
	displayNameMagazine="$STR_DN_OUT_V80_HE";
	shortNameMagazine="$STR_DN_OUT_V80_HE";
	nameSound="shell";
	ammo="Cannon30HE";
	count=250;
	multiplier=2;
	reloadTime=0.18;
	initSpeed=1000;
	sound[]={"\o\vehl\v80_cannon",3.1622777,1};
	flashSize=1.1;
	maxLeadSpeed=450;
	optics=1;
	ffCount=1;
};

class Cannon30AP:Cannon30HE
{
	shotFromTurret=1;
	ammo="Cannon30AP";
	displayName="$STR_DN_OUT_V80_AP";
	displayNameMagazine="$STR_DN_OUT_V80_AP";
	shortNameMagazine="$STR_DN_OUT_V80_AP";
	nameSound="heat";
};

class Cannon30:Default
{
	scopeWeapon=2;
	scopeMagazine=0;
	shotFromTurret=1;
	displayName="$STR_DN_GUN";
	sound[]={"\o\vehl\v80_cannon",3.1622777,1};
	reloadSound[]={"Weapons\reload",0.0003162,1};
	backgroundReload=1;
	ffMagnitude=1;
	ffFrequency=5;
	magazines[]={"Cannon30AP","Cannon30HE"};
};

class Binocular : Default
{
	scopeWeapon=2;
	scopeMagazine=1;
#ifdef ACGIM_SCENARIO_1985
	model = "dalekohled_proxy";
	modelOptics = "optika_dalekohled";
#endif
#ifdef ACGIM_SCENARIO_2005
	model="\d4t_files\models\us\misc\binocular.p3d"; //new model
	modelOptics="\d4t_files\optics\optic_binoculars.p3d";
#endif
	valueWeapon=5;
	weaponType=4096;
	magazineType=0;
	ammo="";
	displayName="$STR_DN_BINOCULAR";
	reloadTime=0.0;
	sound[]={"",0,1};
	canLock=0;
	optics=1;
	forceOptics=1;
	primary=0;
	opticsZoomMin=0.085;
	opticsZoomMax=0.085;
	magazines[]={};
};

class AK47 : Riffle
{
	scopeWeapon=2;
	scopeMagazine=2;
	valueWeapon=0;
	valueMagazine=1;
	model="AK_47_proxy";
	modelOptics="optika_ak47";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	displayName="$STR_DN_AK47";
	displayNameMagazine="$STR_MN_AK47";
	shortNameMagazine="$STR_SN_AK47";
	drySound[]={"weapons\AK74Dry",0.01,1};
	modes[]={"Single","Burst","FullAuto"};

	class Single
	{
		ammo="BulletSingleG";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_AK47";
		dispersion=0.0002;
		sound[]={"Weapons\AK74Single",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo="BulletBurstG";
		multiplier=1;
		burst=3;
		displayName="$STR_DN_AK47_BURST";
		dispersion=0.0004;
		sound[]={"Weapons\AK74Burst",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=3;
		recoil="riffleBurst3";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="BulletFullAutoG";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_AK47_AUTO";
		dispersion=0.0008;
		sound[]={"Weapons\AK74Single",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=30;
		recoil="riffleBurst3";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class LAWLauncher : Default
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=16;
	magazineType="2 * 		256";
	valueWeapon=10;
	valueMagazine=5;
	model="law_proxy";
	modelOptics="optika_LAW";
	ammo="LAW";
	displayName="$STR_DN_LAW";
	displayNameMagazine="$STR_MN_LAW";
	shortNameMagazine="$STR_SN_LAW";
	count=1;
	magazineReloadTime=12;
	reloadTime=0.5;
	//Longer range sound.
	//sound[]={"Weapons\at_launch",0.01,1};
	sound[]={"Weapons\at_launch", 2, 1};
	reloadMagazineSound[]={"Weapons\at_load",0.0003162,1};
	initSpeed=30;
	canLock=0;
	reloadAction = MANACT_RELOADAT;
	autoReload=0;
	ffMagnitude=0.1;
	ffFrequency=1;
	ffCount=1;
	recoil="LAWSingle";
	aiRateOfFire=10.0;
	aiRateOfFireDistance=500;
	optics=1;
	primary=0;
	opticsZoomMin=0.18;
	opticsZoomMax=0.18;
	distanceZoomMin=100;
	distanceZoomMax=100;
	uiPicture="islaw";
};

class CarlGustavLauncher : LAWLauncher
{
	magazineType="6 * 		256";
	model="carlgustav84_proxy";
	modelOptics="optika_CarlGustav";
	canLock=1;
	valueWeapon=20;
	valueMagazine=10;
	ammo="CarlGustav";
	displayName="$STR_DN_CARL_GUSTAV";
	displayNameMagazine="$STR_MN_CARL_GUSTAV";
	shortNameMagazine="$STR_SN_CARL_GUSTAV";
	uiPicture="isat";
};

class AALauncher:CarlGustavLauncher
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="Stinger_proxy";
	modelOptics="optika_stinger";
	magazineType="6 * 		256";
	canLock=2;
	valueWeapon=20;
	valueMagazine=10;
	ammo="AA";
	displayName="$STR_DN_AA";
	displayNameMagazine="$STR_MN_AA";
	shortNameMagazine="$STR_SN_AA";
	initSpeed=30;
	maxLeadSpeed=600;
	primary=0;
	uiPicture="isaa";
	//Engage at range.
	aiRateOfFire=10.0;
	aiRateOfFireDistance=5000;
};

class AT3Launcher : CarlGustavLauncher
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=65536;
	magazineType=0;
	ammo="AT3";
	displayName="$STR_DN_AT3";
	displayNameMagazine="$STR_MN_AT3";
	shortNameMagazine="$STR_SN_AT3";
	count=6;
	reloadTime=30.0;
	sound[]={"Weapons\missile",0.0031623,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	initSpeed=30;
	primary=10;
	canLock=2;
	autoReload=1;
};

class HellfireLauncher : AT3Launcher
{
	scopeWeapon=2;
	scopeMagazine=2;
	ammo="Hellfire";
	displayName="$STR_DN_TOW";
	displayNameMagazine="$STR_MN_TOW";
	shortNameMagazine="$STR_SN_TOW";
	count=8;
	reloadTime=0.5;
	sound[]={"Weapons\TOW",0.0316228,1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	initSpeed=0;
	aiRateOfFire=13.0;
	aiRateOfFireDistance=2500;
};

class HellfireLauncherCobra : HellfireLauncher
{
};

class HellfireLauncherHind : HellfireLauncher
{
	ammo="AT6";
	displayName="$STR_DN_AT6";
	displayNameMagazine="$STR_MN_AT6";
	shortNameMagazine="$STR_SN_AT6";
	count=8;
	initSpeed=30;
};

class MaverickLauncher : HellfireLauncher
{
	ammo="Maverick";
	displayName="$STR_DN_MAVERICK";
	displayNameMagazine="$STR_MN_MAVERICK";
	shortNameMagazine="$STR_SN_MAVERICK";
	sound[]={"Weapons\Missile",0.0031623,1};
	reloadSound[]={"",0,1};
};

class ZuniLauncher38 : AT3Launcher
{
	scopeWeapon=2;
	scopeMagazine=2;
	ammo="Zuni";
	displayName="$STR_DN_FFAR";
	displayNameMagazine="$STR_MN_FFAR";
	shortNameMagazine="$STR_SN_FFAR";
	count=38;
	reloadTime=0.1;
	aiRateOfFire=0.4;
	aiRateOfFireDistance=1000;
	//Longer range sound.
	//sound[]={"Weapons\rocket1",0.0316228,1};
	sound[]={"Weapons\rocket1", 2, 1};
	reloadSound[]={"Weapons\missload",0.0003162,1};
	initSpeed=44;
	autoFire=1;
};

class Rocket57x64 : ZuniLauncher38
{
	ammo="Rocket57";
	displayName="$STR_DN_ROCKET_57";
	displayNameMagazine="$STR_MN_ROCKET_57";
	shortNameMagazine="$STR_SN_ROCKET_57";
	count=64;
};

class Flare : GrenadeLauncher
{
	scopeWeapon=0;
	scopeMagazine=2;
	valueMagazine=5;
	magazineType=256;
	count=1;
	ammo="Flare";
	displayName="$STR_DN_FLARE";
	displayNameMagazine="$STR_MN_FLARE";
	shortNameMagazine="$STR_SN_FLARE";
	initSpeed=80;
};

class FlareGreen : Flare
{
	ammo="FlareGreen";
	displayName="$STR_DN_FLARE_GREEN";
	displayNameMagazine="$STR_MN_FLARE_GREEN";
	shortNameMagazine="$STR_SN_FLARE_GREEN";
};

class FlareRed : Flare
{
	ammo="FlareRed";
	displayName="$STR_DN_FLARE_RED";
	displayNameMagazine="$STR_MN_FLARE_RED";
	shortNameMagazine="$STR_SN_FLARE_RED";
};

class FlareYellow : Flare
{
	ammo="FlareYellow";
	displayName="$STR_DN_FLARE_YELLOW";
	displayNameMagazine="$STR_MN_FLARE_YELLOW";
	shortNameMagazine="$STR_SN_FLARE_YELLOW";
};

class LaserDesignatorBase : Default
{
	ammo="LaserDesignator";
	displayName="$STR_DN_LASER_DESIGNATOR";
	displayNameMagazine="$STR_DN_LASER_DESIGNATOR";
	shortNameMagazine="$STR_DN_LASER_DESIGNATOR";
	count=1;
	magazineReloadTime=12;
	reloadTime=0.5;
	sound[]={"",0.01,1};
	reloadMagazineSound[]={"Weapons\at_load",0.0003162,1};
	initSpeed=30;
	canLock="LockCadet";
	aiRateOfFire=5.0;
	aiRateOfFireDistance=1000;
	optics=1;
	primary=0;
	opticsZoomMin=0.05;
	opticsZoomMax=0.25;
	distanceZoomMin=100;
	distanceZoomMax=100;
};

class LaserDesignator : LaserDesignatorBase
{
	scopeWeapon=2;
	scopeMagazine=2;
	weaponType=16;
	magazineType="6 * 		256";
	model="LLDR";
	modelOptics="optika_CarlGustav";
	picture="CarlGustavLauncher";
};

class CarHorn : Default
{
	scopeWeapon=1;
	ammo="";
	displayName="$STR_DN_HORN";
	reloadTime=0.0;
	drySound[]={"Vehicles\carhorn",0.1,1};
	canLock=0;
	optics=0;
	enableAttack=0;
	magazines[]={};
};

class TruckHorn : CarHorn
{
	drySound[]={"Vehicles\carhorn",0.1,0.7};
};

class SportCarHorn : CarHorn
{
	drySound[]={"Vehicles\sportcarhorn",0.1,1};
};

//CWA
class BISCamelMGun : Browning
{
	count = 500;
	initSpeed = 600;
	reloadTime = 0.13;
	multiplier = 2;
	soundContinuous = 0;
	canLock = 0;
	ammo = "BISBulletCamel";
	sound[] = {"\BISCamel\vickers.wav", 3.16228, 1};
	displayName = "$STR_BISCAMEL_WEAPON";
	displayNameMagazine = "$STR_BISCAMEL_MAGAZINE";
	shortNameMagazine = "$STR_BISCAMEL_MAGAZINE_SHORT";
};

class BISGrenadeCamel : HellfireLauncher
{
	picture = "Hellfire";
	ammo = "BISGrenadeCamel";
	canLock = 0;
	displayName = "$STR_BISCAMEL_GRENADE";
	displayNameMagazine = "$STR_BISCAMEL_GRENADE";
	shortNameMagazine = "$STR_BISCAMEL_GRENADE";
	count = 10;
	reloadTime = 1;
	magazineReloadTime = 1;
	sound[] = {"", 0.0316228, 1};
	reloadSound[] = {"", 0.000316228, 1};
	initSpeed = 0;
	aiRateOfFire = 13;
	aiRateOfFireDistance = 2500;
};