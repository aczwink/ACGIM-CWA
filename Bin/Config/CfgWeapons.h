class CfgWeapons
{
	access = ACCESS_ADDVALUESONLY;

	//BIS Classes
	#include "Config\CfgWeapons\BISClasses.h"
	//Neutral
	#include "Config\CfgWeapons\Horns.h"
	//USA
#include "Config\CfgWeapons\USA\USA.h"
	//USSR
		//Baseclasses
		#include "Config\CfgWeapons\USSR\Baseclasses\GP25.h"
		//Primary
		#include "Config\CfgWeapons\USSR\Primary\AKM.h"
		#include "Config\CfgWeapons\USSR\Primary\AK74.h"
		#include "Config\CfgWeapons\USSR\Primary\PKM.h"
		#include "Config\CfgWeapons\USSR\Primary\RPD.h"
		#include "Config\CfgWeapons\USSR\Primary\SVDDragunov.h"
		//Secondary
		#include "Config\CfgWeapons\USSR\Secondary\9K32.h"
		#include "Config\CfgWeapons\USSR\Secondary\RPG2.h"
		#include "Config\CfgWeapons\USSR\Secondary\RPG7.h"
		#include "Config\CfgWeapons\USSR\Secondary\RPG16.h"
		#include "Config\CfgWeapons\USSR\Secondary\RPG18.h"
		//Items
		#include "Config\CfgWeapons\USSR\Items\RGO.h"
		#include "Config\CfgWeapons\USSR\Items\VOG.h"
		#include "Config\CfgWeapons\USSR\Items\RDG.h"
		//Hardmounted
			//Guns
			#include "Config\CfgWeapons\USSR\Hardmounted\2A20.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\2A28Grom.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\2A42.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\2A46M.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\AZP23.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\KPVT.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\NSV.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\PK.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\DShK.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\GSh.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\NR30.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\YakB.h"
			//Rockets
			#include "Config\CfgWeapons\USSR\Hardmounted\9K11Malyutka.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\9K112Kobra.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\9K114.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\9M113Konkurs.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\R60.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\UB.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\Kh.h"
			#include "Config\CfgWeapons\USSR\Hardmounted\KAB500L.h"
	//Unused BIS Classes
	#include "Config\CfgWeapons\BISClassesUnused.h"


class M4:Riffle
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="XM-177E2_proxy";
	modelOptics="optika_m16";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	valueWeapon=2;
	valueMagazine=2;
	displayName="$STR_DN_M4";
	displayNameMagazine="$STR_MN_M4";
	shortNameMagazine="$STR_SN_M4";
	drySound[]={"weapons\M16Dry",0.0031623,1};
	magazines[]={"M4","Mortar"};
	modes[]={"Single","FullAuto"};

	class Single
	{
		ammo="BulletSingleW";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_M4";
		dispersion=0.002;
		sound[]={"Weapons\M16Single",1.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="BulletFullAutoW";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_M4_AUTO";
		dispersion=0.004;
		sound[]={"Weapons\M16Single",1.0,1};
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

class AK47CZ:AK47
{
	scopeWeapon=2;
	scopeMagazine=0;
	model="AK_47_v58_proxy";
	modelOptics="optika_ak47";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	displayName="$STR_DN_AK47_CZ";
	drySound[]={"weapons\AK74Dry",0.01,1};
	modes[]={"Single","Burst","FullAuto"};
	magazines[]={"AK47"};
};

/*
class AK74SU:AK74
{
scopeWeapon=2;
scopeMagazine=0;
model="AK_74_SU_proxy";
modelOptics="optika_ak47";
optics=1;
opticsZoomMin=0.35;
opticsZoomMax=0.35;
valueWeapon=1;
valueMagazine=1;
displayName="$STR_DN_AK74_SU";
drySound[]={"weapons\AK74Dry",0.01,1};
modes[]={"Single","Burst","FullAuto"};
magazines[]={"AK74"};
};*/

class HK:Riffle
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="HKM5_SD6_proxy";
	modelOptics="optika_HK";
	displayName="$STR_DN_HK";
	displayNameMagazine="$STR_MN_HK";
	shortNameMagazine="$STR_SN_HK";
	drySound[]={"weapons\m16dry",0.0003162,1};
	optics=1;
	opticsZoomMin=0.3;
	opticsZoomMax=0.3;
	distanceZoomMin=150;
	distanceZoomMax=150;
	valueWeapon=1000;
	valueMagazine=1000;
	initSpeed=400;
	modes[]={"Single","FullAuto"};

	class Single
	{
		ammo="BulletSilencedSingleW";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_HK";
		dispersion=0.002;
		sound[]={"Weapons\hk_singleshot",0.0003162,1};
		soundContinuous=0;
		reloadTime=0.07;
		recoil="riffleSilenced";
		ffCount=1;
		autoFire=0;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="BulletSilencedBurstW";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_HK_AUTO";
		dispersion=0.004;
		sound[]={"Weapons\hk_fullauto",0.0003162,1};
		soundContinuous=1;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class NVGoggles:Binocular
{
	displayName="$STR_DN_NV_GOGGLES";
	showEmpty=0;
	valueWeapon=5;
	opticsZoomMin=1.0;
	opticsZoomMax=1.0;
	modelOptics="optika_night";
	model="nvg_proxy";
};

class Phone:Binocular
{
	scopeWeapon=1;
	displayName="$STR_DN_PHONE";
	showEmpty=0;
	opticsZoomMin=1.0;
	opticsZoomMax=1.0;
	model="sluchatko_proxy";
	modelOptics="";
};

/*class PK:MachineGun7_6Manual
{
scopeWeapon=2;
scopeMagazine=2;
ammo="Bullet7_6E";
model="PK_MG_proxy";
modelOptics="optika_PK";
sound[]={"Weapons\AK74full",3.1622777,1};
displayName="$STR_DN_PK";
displayNameMagazine="$STR_MN_PK";
shortNameMagazine="$STR_SN_PK";
};*/

class MachineGun30A10:MachineGun30
{
	canLock=0;
	sound[]={"Weapons\vulcan",3.1622777,1};
	count=2000;
	multiplier=4;
};

class MachineGun30A10Burst:MachineGun30A10
{
	ammo="Bullet30A10";
};

class RiffleGrenadeLauncher
{
	scopeWeapon=0;
	scopeMagazine=0;
	weaponType=1;
	valueWeapon=0;
	valueMagazine=0;
	displayName="$STR_DN_RIFLE_GRENADE";
	model="";
	picture="";
	muzzles[]={"RiffleMuzzle","GrenadesMuzzle"};
	canDrop=1;
	uiPicture="igrenadier";

	class RiffleMuzzle:Riffle
	{
		modelOptics="";
		magazines[]={"Riffle"};
	};

	class GrenadesMuzzle:GrenadeLauncher
	{
		modelOptics="";
		magazines[]={"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
	};
};

class AK47GrenadeLauncher
{
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=1;
	valueWeapon=2;
	valueMagazine=2;
	displayName="$STR_DN_AK47_GRENADE";
	model="ak_47_granatomet_proxy";
	picture="";
	uiPicture="igrenadier";
	muzzles[]={"AK47Muzzle","GrenadesMuzzle"};
	canDrop=1;

	class AK47Muzzle:AK47
	{
		magazines[]={"AK47"};
	};

	class GrenadesMuzzle:GrenadeLauncher
	{
		magazines[]={"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
	};
};

class AK74GrenadeLauncher
{
	scopeWeapon=2;
	scopeMagazine=0;
	weaponType=1;
	valueWeapon=2;
	valueMagazine=2;
	displayName="$STR_DN_AK74_GRENADE";
	model="ak_74_granatomet_proxy";
	picture="";
	uiPicture="igrenadier";
	muzzles[]={"AK74Muzzle","GrenadesMuzzle"};
	canDrop=1;

	class AK74Muzzle//:AK74
	{
		magazines[]={"AK74"};
	};

	class GrenadesMuzzle:GrenadeLauncher
	{
		magazines[]={"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
	};
};

class Mortar:GrenadeLauncher
{
	scopeWeapon=0;
	scopeMagazine=2;
	modelSpecial="m16_mortar_proxy";
	valueMagazine=5;
	magazineType="2 * 		256";
	ammo="MortarShell";
	displayName="$STR_DN_MORTAR_W";
	displayNameMagazine="$STR_MN_MORTAR_W";
	shortNameMagazine="$STR_SN_MORTAR_W";
	count=1;
	initSpeed=70;
	reloadAction=manactreloadmortar;
	modes[]={"this","this"};
};

class Put:Default
{
	scopeWeapon=1;
	scopeMagazine=0;
	valueWeapon=0;
	weaponType=0;
	displayName="$STR_DN_PUT";
	sound[]={"",0.0003162,1};
	reloadSound[]={"",0.0003162,1};
	canLock=0;
	enableAttack=0;
	optics=0;
	primary=0;
	showEmpty=0;
	magazines[]={"TimeBomb","PipeBomb","Mine","MineE"};
	canDrop=0;
};

class TimeBomb:Default
{
	scopeWeapon=0;
	scopeMagazine=0;
	magazineType="2 * 		256";
	ammo="TimeBomb";
	displayName="$STR_DN_TIME_BOMB";
	displayNameMagazine="$STR_MN_TIME_BOMB";
	shortNameMagazine="$STR_SN_TIME_BOMB";
	enableAttack=1;
	valueMagazine=5;
	count=1;
	initSpeed=0;
	maxLeadSpeed=0;
	useAction=1;
	useActionTitle="$STR_ACTION_PUTBOMB";
	sound[]={"People\gravel_L",0.0003162,1};
};

class Mine:TimeBomb
{
	scopeMagazine=2;
	enableAttack=0;
	magazineType="2 * 		256";
	ammo="Mine";
	displayName="$STR_DN_MINE";
	displayNameMagazine="$STR_MN_MINE";
	shortNameMagazine="$STR_SN_MINE";
};

class MineE:TimeBomb
{
	scopeMagazine=2;
	enableAttack=0;
	picture="mine";
	magazineType="2 * 		256";
	ammo="MineE";
	displayName="$STR_DN_MINE";
	displayNameMagazine="$STR_MN_MINE";
	shortNameMagazine="$STR_SN_MINE";
};

class PipeBomb:Put
{
	scopeWeapon=0;
	scopeMagazine=2;
	enableAttack=1;
	valueMagazine=5;
	magazineType="2 * 		256";
	ammo="PipeBomb";
	displayName="$STR_DN_PIPE_BOMB";
	displayNameMagazine="$STR_MN_PIPE_BOMB";
	shortNameMagazine="$STR_SN_PIPE_BOMB";
	count=1;
	initSpeed=0;
	maxLeadSpeed=0;
	showEmpty=0;
	useAction=1;
	useActionTitle="$STR_ACTION_PUTBOMB";
	sound[]={"People\gravel_L",0.0003162,1};
	magazines[]={"this"};
};

class RPGLauncher:LAWLauncher
{
	model="RPG7_proxy";
	modelOptics="optika_RPG";
	ammo="RPG";
	displayName="$STR_DN_RPG";
	displayNameMagazine="$STR_MN_RPG";
	shortNameMagazine="$STR_SN_RPG";
};

class AT4Launcher:CarlGustavLauncher
{
	model="AT-4_SpigotB_proxy";
	modelOptics="optika_AT4_Spigot_B";
	ammo="AT4";
	displayName="$STR_DN_AT4";
	displayNameMagazine="$STR_MN_AT4";
	shortNameMagazine="$STR_SN_AT4";
};

class Rocket57x192:Rocket57x64
{
	count=192;
};
//d4t adding res addons weapons
class 6G30Base:GrenadeLauncher
{
	scopeWeapon=1;
	scopeMagazine=1;
	weaponType="1 + 	16";
	magazineType="4 * 			256";
	displayName="$STR_DN_6G30";
	displayNameMagazine="$STR_MN_6G30";
	shortNameMagazine="$STR_SN_6G30";
	count=6;
	reloadTime=0.5;
	magazineReloadTime=12;
	model="\6g30\6g30";
	modelOptics="\6g30\optika_6g30";
	picture="\6g30\6g30.paa";
	revolving="buben";
	revolvingAxis="osa_buben";
};

class 6G30Magazine:6G30Base
{
	scopeMagazine=2;
	picture="\6g30\m_6g30.paa";
};

class 6G30:6G30Base
{
	scopeWeapon=2;
	magazines[]={"6G30Magazine"};
};

class HellfireLauncherApach:HellfireLauncher
{
	ammo="HellfireApach";
	displayName="$STR_DN_AH64Ammo";
	displayNameMagazine="$STR_MN_AH64Ammo";
	shortNameMagazine="$STR_SN_AH64Ammo";
	count=8;
};

class BizonBase:Riffle
{
	scopeWeapon=1;
	scopeMagazine=1;
	model="\Bizon\Bizon";
	modelOptics="\Bizon\optika_Bizon";
	picture="\bizon\w_bizon.paa";
	count=64;
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_BIZON";
	displayNameMagazine="$STR_DN_ADD_BIZON_MAG";
	shortNameMagazine="$STR_DN_ADD_BIZON";
	drySound[]={"weapons\M16dry",0.0031623,1};
	modes[]={"Single","Fullauto"};

	class Single
	{
		ammo="Bizon";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_BIZON";
		dispersion=0.01;
		sound[]={"\Bizon\bizon",0.0003162,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="Bizon";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_BIZON_AUTO";
		dispersion=0.015;
		sound[]={"\Bizon\bizon",0.0003162,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class BizonMag:BizonBase
{
	scopeMagazine=2;
	picture="\Bizon\m_bizon.paa";
};

class Bizon:BizonBase
{
	scopeWeapon=2;
	magazines[]={"BizonMag"};
};
class HellfireLauncherBMP2:AT3Launcher
{
	count=8;
	reloadTime=30;
	displayName="$STR_DN_ADD_BMP2_AT";
	displayNameMagazine="$STR_DN_ADD_BMP2_AT";
	shortNameMagazine="$STR_DN_ADD_BMP2_AT";
};

class G36aBase:Riffle
{
	scopeWeapon=2;
	scopeMagazine=2;
	model="\G36A\G36";
	modelOptics="\G36A\G36_optics";
	picture="\G36A\w_g36.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_G36";
	displayNameMagazine="$STR_DN_ADD_G36_AMMO";
	shortNameMagazine="$STR_DN_ADD_G36_AMMO";
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"G36a"};
	modes[]={"Single","Burst","Fullauto"};

	class Single
	{
		ammo="G36a";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_G36";
		dispersion=0.0002;
		sound[]={"\G36A\g36a.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class Burst
	{
		ammo="G36a";
		multiplier=1;
		burst=3;
		displayName="$STR_DN_ADD_G36_BURST";
		dispersion=0.001;
		sound[]={"\G36A\g36a_burst",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=3;
		recoil="riffleBurst3";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="G36a";
		multiplier=1;
		burst=1;
		displayName="G36 Auto";
		dispersion=0.0003;
		sound[]={"\G36A\g36a_full",1.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class G36aMag:G36aBase
{
	scopeMagazine=2;
	picture="\G36a\m_G36.paa";
};

class G36a:G36aBase
{
	scopeWeapon=2;
	magazines[]={"G36aMag"};
};
class BikeHorn:CarHorn
{
	drySound[]={"\kolo\bc_ring.wav",0.1,1};
};
class KozliceBall: Riffle
{
	scopeWeapon = 0;
	scopeMagazine = 2;

	modelOptics="\kozl\optika_kozlice";
	picture="\kozl\m_kozlice2.paa";
	optics = 1;
	opticsZoomMin=0.35; //was 0.21
	opticsZoomMax=0.35;

	displayName = $STR_DN_KOZLICE_BALL;
	displayNameMagazine = $STR_MN_KOZLICE_BALL;
	shortNameMagazine = $STR_SN_KOZLICE_BALL;
	drySound[]={"weapons\M16dry",db-40,1};	// empty magazine


	ammo = KozliceBall;
	count = 1;
	multiplier=1;
	burst=1;
	dispersion=0.0002;
	sound[]={\kozl\kozl_single,db0,1};
	reloadMagazineSound[]={\kozl\kozl_load,db-70,1};


	soundContinuous=0;
	reloadTime=0.05;
	ffCount=1;
	recoil=sniperSingle;
	recoilFixed=riffleSingleFixed;
	autoFire = 0;
	aiRateOfFire=5.0; // delay between shots at given distance
	aiRateOfFireDistance=500; // at shorter distance delay goes lineary to zero

	useAction = 0;
	useActionTitle = "";
};

class KozliceShell: Riffle
{
	scopeWeapon = 0;
	scopeMagazine = 2;

	modelOptics="\kozl\optika_kozlice";
	picture="\kozl\m_kozlice1.paa";
	optics = 1;
	opticsZoomMin=0.35; //was 0.21
	opticsZoomMax=0.35;

	displayName = $STR_DN_KOZLICE_SHELL;
	displayNameMagazine = $STR_MN_KOZLICE_SHELL;
	shortNameMagazine = $STR_SN_KOZLICE_SHELL;
	drySound[]={"weapons\M16dry",db-40,1};	// empty magazine

	muzzles[] = {};

	ammo = KozliceShell;
	count = 7;
	multiplier=1;
	division=7; //added for fix in the US version of wrong ammo count
	burst=7;
	dispersion=0.0001;
	sound[]={\kozl\kozl_single,db0,1};
	reloadMagazineSound[]={\kozl\kozl_load,db-70,1};

	soundContinuous=0;
	reloadTime=0.001;
	magazineReloadTime=3;	
	ffCount=1;
	recoil=sniperSingle;
	recoilFixed=riffleSingleFixed;
	autoFire = 0;
	aiRateOfFire=5.0; // delay between shots at given distance
	aiRateOfFireDistance=500; // at shorter distance delay goes lineary to zero

	useAction = 0;
	useActionTitle = "";
};

class Kozlice
{
	scopeWeapon = 2;
	scopeMagazine = 0;

	weaponType = WEAPON_PRIMARY;

	displayName = $STR_DN_KOZLICE;
	model="\kozl\kozlice";
	picture="\kozl\w_kozlice.paa";

	muzzles[] = {KozliceBallMuzzle, KozliceShellMuzzle};
	class KozliceBallMuzzle : KozliceBall
	{
		magazines[] = {KozliceBall};
	};
	class KozliceShellMuzzle : KozliceShell
	{
		magazines[] = {KozliceShell};
	};
};
class LaserGuidedBombLauncher:HellfireLauncher
{
	picture="Hellfire";
	ammo="LaserGuidedBomb";
	displayName="$STR_DN_LASER_BOMB";
	displayNameMagazine="$STR_DN_LASER_BOMB";
	shortNameMagazine="$STR_DN_LASER_BOMB";
	count=8;
	reloadTime=0.5;
	sound[]={"",0.0316228,1};
	reloadSound[]={"",0.0003162,1};
	initSpeed=0;
	aiRateOfFire=13.0;
	aiRateOfFireDistance=2500;
};
class HellfireLauncherM2A2:AT3Launcher
{
	count=2;
	reloadTime=0.5;
	displayName="$STR_DN_TOW";
	displayNameMagazine="$STR_DN_TOW";
	shortNameMagazine="$STR_DN_TOW";
	cost=20000;
};

class Cannon25HE:Default
{
	scopeWeapon=2;
	scopeMagazine=2;
	shotFromTurret=1;
	autoFire=1;
	magazineReloadTime=1.5;
	displayName="$STR_DN_ADD_M2A2_25";
	displayNameMagazine="$STR_DN_ADD_M2A2_25";
	shortNameMagazine="$STR_DN_ADD_M2A2_25";
	ammo="Cannon25HE";
	count=300;
	reloadTime=0.14;
	initSpeed=1000;
	sound[]={"\m2a2\cannon.wss",3.1622777,1};
	flashSize=1.1;
	maxLeadSpeed=450;
	optics=1;
	ffCount=1;
	multiplier=2;
};
class Mm1Base:GrenadeLauncher
{
	scopeWeapon=1;
	scopeMagazine=1;
	weaponType="1 + 	16";
	magazineType="8 * 			256";
	displayName="$STR_DN_MM1";
	displayNameMagazine="$STR_DN_MM1_MAG";
	shortNameMagazine="$STR_DN_MM1";
	count=12;
	reloadTime=0.5;
	magazineReloadTime=12;
	model="\MM-1\MM-1";
	modelOptics="\MM-1\optika_MM-1";
	picture="\MM-1\mm-1.paa";
	revolving="buben";
	revolvingAxis="osa_buben";
};

class MM1Magazine:Mm1Base
{
	scopeMagazine=2;
	picture="\MM-1\m_mm1.paa";
};

class MM1:Mm1Base
{
	scopeWeapon=2;
	magazines[]={"MM1Magazine"};
};
class HellfireLauncherKamov:HellfireLauncherHind
{
	ammo="AT6";
	displayName="$STR_DN_AT6";
	displayNameMagazine="$STR_MN_AT6";
	shortNameMagazine="$STR_SN_AT6";
	count=12;
	initSpeed=30;
};

class UZIBase:HK
{
	access=2;
	scopeWeapon=0;
	scopeMagazine=0;
	model="\O\Guns\UZI";
	modelOptics="\O\Guns\optika_uzi";
	picture="\O\Guns\w_uzi.paa";
	displayName="$STR_DN_OUT_UZI";
	displayNameMagazine="$STR_DN_OUT_UZI_AMMO";
	shortNameMagazine="$STR_DN_OUT_UZI_AMMO_SHORT";
	count=32;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"UZI"};

	class Single
	{
		ammo="UZI";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_UZI";
		dispersion=0.002;
		sound[]={"\O\Guns\uzi_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="UZI";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_UZI_FULL";
		dispersion=0.004;
		sound[]={"\o\Guns\uzi_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=30;
		recoil="riffleSilenced";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
};

class UZIMag:UZIBase
{
	scopeMagazine=2;
	picture="\O\Guns\m_uzi.paa";
};

class UZI:UZIBase
{
	scopeWeapon=2;
	magazines[]={"UZIMag"};
};

class CZ75Base:HandGunBase
{
	access=2;
	scopeWeapon=0;
	scopeMagazine=0;
	dexterity=2;
	model="\O\Guns\CZ75";
	modelOptics="\O\Guns\optika_CZ75";
	picture="\O\Guns\CZ75.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_OUT_CZ75";
	displayNameMagazine="$STR_DN_OUT_CZ75_AMMO";
	shortNameMagazine="$STR_DN_OUT_CZ75_AMMO_SHORT";
	weaponType=2;
	magazineType=32;
	count=14;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"CZ75"};
	modes[]={"Single"};

	class Single
	{
		ammo="CZ75";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_CZ75";
		dispersion=0.007;
		sound[]={"\O\Guns\cz75_berreta.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class CZ75Mag:CZ75Base
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class CZ75:CZ75Base
{
	scopeWeapon=2;
	magazines[]={"CZ75Mag"};
	uiPicture="\misc\ipistole.paa";
};

class SkorpionBase:CZ75Base
{
	model="\O\Guns\SA61Skorpion";
	modelOptics="\O\Guns\optika_Sa61skorpion";
	picture="\O\Guns\skorpion.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=100;
	distanceZoomMax=100;
	displayName="$STR_DN_OUT_Skorpion";
	displayNameMagazine="$STR_DN_OUT_Skorpion_AMMO";
	shortNameMagazine="$STR_DN_OUT_Skorpion_AMMO_SHORT";
	count=20;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Skorpion"};
	modes[]={"Single","FullAuto"};

	class Single
	{
		ammo="Skorpion";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_Skorpion";
		dispersion=0.003;
		sound[]={"\O\Guns\skorpion_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="SkorpionSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="Skorpion";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_Skorpion_FULL";
		dispersion=0.004;
		sound[]={"\O\Guns\skorpion_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=30;
		recoil="SkorpionFull";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
};

class SkorpionMag:SkorpionBase
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class Skorpion:SkorpionBase
{
	scopeWeapon=2;
	magazines[]={"SkorpionMag"};
	uiPicture="\misc\ipistole.paa";
};

class HKG3Base:M16
{
	access=2;
	scopeWeapon=0;
	scopeMagazine=0;
	model="\O\Guns\HKG3A4";
	modelOptics="\O\Guns\optika_HKG3A4";
	picture="\O\Guns\w_HKG3.paa";
	count=20;
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_OUT_HKG3";
	displayNameMagazine="$STR_DN_OUT_HKG3_AMMO";
	shortNameMagazine="$STR_DN_OUT_HKG3_AMMO_SHORT";
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"HKG3"};
	modes[]={"Single","Fullauto"};

	class Single
	{
		ammo="HKG3";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_HKG3";
		dispersion=0.0002;
		sound[]={"\O\Guns\fal_g3_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=200;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="HKG3";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_HKG3_FULL";
		dispersion=0.0003;
		sound[]={"\O\Guns\fal_g3_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=200;
		useAction=0;
		useActionTitle="";
	};
};

class HKG3Mag:HKG3Base
{
	scopeMagazine=2;
	picture="\O\Guns\m_HKG3.paa";
};

class HKG3:HKG3Base
{
	scopeWeapon=2;
	magazines[]={"HKG3Mag"};
	uiPicture="ivojak";
};

class FALBase:HKG3Base
{
	model="\O\Guns\FAL";
	modelOptics="\O\Guns\optika_FAL";
	picture="\O\Guns\w_fal.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	count=20;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_OUT_FAL";
	displayNameMagazine="$STR_DN_OUT_FAL_AMMO";
	shortNameMagazine="$STR_DN_OUT_FAL_AMMO_SHORT";
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"FAL"};
	modes[]={"Single","Fullauto"};

	class Single
	{
		ammo="FAL";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_FAL";
		dispersion=0.0002;
		sound[]={"\O\Guns\fal_g3_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=200;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="FAL";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_FAL_FULL";
		dispersion=0.0003;
		sound[]={"\O\Guns\fal_g3_single.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=200;
		useAction=0;
		useActionTitle="";
	};
};

class FALMag:FALBase
{
	scopeMagazine=2;
	picture="\O\Guns\m_fal.paa";
};

class FAL:FALBase
{
	scopeWeapon=2;
	magazines[]={"FALMag"};
	uiPicture="ivojak";
};

class TokarevBase:CZ75Base
{
	model="\O\Guns\TokarevT33";
	modelOptics="\O\Guns\optika_TokarevT33";
	picture="\O\Guns\tokarev.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_OUT_Tokarev";
	displayNameMagazine="$STR_DN_OUT_Tokarev_AMMO";
	shortNameMagazine="$STR_DN_OUT_Tokarev_AMMO_SHORT";
	count=8;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Tokarev"};
	modes[]={"Single"};

	class Single
	{
		ammo="Tokarev";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_Tokarev";
		dispersion=0.01;
		sound[]={"\O\Guns\tokarev.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class TokarevMag:TokarevBase
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class Tokarev:TokarevBase
{
	scopeWeapon=2;
	magazines[]={"TokarevMag"};
	uiPicture="\misc\ipistole.paa";
};

class BerettaBase:CZ75Base
{
	model="\O\Guns\Beretta92F";
	modelOptics="\O\Guns\optika_beretta92";
	picture="\O\Guns\bereta.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_OUT_Beretta";
	displayNameMagazine="$STR_DN_OUT_Beretta_AMMO";
	shortNameMagazine="$STR_DN_OUT_Beretta_AMMO_SHORT";
	count=10;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Beretta"};
	modes[]={"Single"};

	class Single
	{
		ammo="Beretta";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_Beretta";
		dispersion=0.008;
		sound[]={"\O\Guns\cz75_berreta.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class BerettaMag:BerettaBase
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class Beretta:BerettaBase
{
	scopeWeapon=2;
	magazines[]={"BerettaMag"};
	uiPicture="\misc\ipistole.paa";
};

class GlockBase:HandGunBase
{
	access=2;
	scopeWeapon=0;
	scopeMagazine=0;
	model="\O\Guns\Glock17";
	modelOptics="\O\Guns\optika_glock17";
	picture="\O\Guns\Glock.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_OUT_Glock";
	displayNameMagazine="$STR_DN_OUT_Glock_AMMO";
	shortNameMagazine="$STR_DN_OUT_Glock_AMMO_SHORT";
	weaponType=2;
	magazineType=32;
	count=14;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Glock"};
	modes[]={"Single"};

	class Single
	{
		ammo="Glock";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_OUT_Glock";
		dispersion=0.004;
		sound[]={"\O\Guns\glock.wss",10.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class GlockMag:GlockBase
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class Glock:GlockBase
{
	scopeWeapon=2;
	magazines[]={"GlockMag"};
	uiPicture="\misc\ipistole.paa";
};
class Rocket57x40Kamov:Rocket57x64
{
	ammo="Rocket57";
	displayName="$STR_DN_ROCKET_57";
	displayNameMagazine="$STR_MN_ROCKET_57";
	shortNameMagazine="$STR_SN_ROCKET_57";
	count=40;
};
class HuntingRifleBase:SniperRiffle
{
	scopeWeapon=1;
	scopeMagazine=1;
	weaponType=1;
	magazineType="1 * 		256";
	model="\O_wp\Remington";
	modelOptics="\O_wp\cs_optika";
	picture="\O_wp\w_remigton.paa";
	sound[]={"\O_wp\snip_reload.wav",1.0,1};
	count=6;
	ammo="HuntingRifle";
	reloadTime=2;
	magazineReloadTime=5;
	opticsZoomMin=0.05;
	opticsZoomMax=0.05;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_WEAPPACK_NAME";
	displayNameMagazine="$STR_DN_ADD_WEAPPACK_MAG";
	shortNameMagazine="$STR_DN_ADD_WEAPPACK_MAG_SHORT";
};

class HuntingRifleMag:HuntingRifleBase
{
	scopeMagazine=2;
	picture="m21";
};

class HuntingRifle:HuntingRifleBase
{
	scopeWeapon=2;
	magazines[]={"HuntingRifleMag"};
};
class RevolverBase:HandGunBase
{
	access="ReadOnly";
	scopeWeapon=0;
	scopeMagazine=0;
	dexterity=2;
	model="\O_wp\SaW";
	modelOptics="\O_wp\SaW_optika";
	picture="\O_wp\w_sam.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_ADD_WEAPPACK_SAW";
	displayNameMagazine="$STR_DN_ADD_WEAPPACK_SAW_AMMO";
	shortNameMagazine="$STR_DN_ADD_WEAPPACK_SAW_AMMO_SHORT";
	weaponType=2;
	magazineType=32;
	count=6;
	reloadTime=0.3;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Revolver"};
	revolving="buben";
	revolvingAxis="osa_buben";
	modes[]={"Single"};

	class Single
	{
		ammo="RevolverBullet";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_WEAPPACK_SAW";
		dispersion=0.004;
		sound[]={"\O_wp\SaW.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="revolverSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class RevolverMag:RevolverBase
{
	scopeMagazine=2;
	picture="\O_wp\m_revolever.paa";
};

class Revolver:RevolverBase
{
	scopeWeapon=2;
	magazines[]={"RevolverMag"};
	uiPicture="\misc\ipistole.paa";
};

class IngramBase:HandGunBase
{
	access="ReadOnly";
	scopeWeapon=0;
	scopeMagazine=0;
	dexterity=2;
	valueWeapon=8;
	valueMagazine=4;
	model="\O_wp\Ingram";
	modelOptics="\O_wp\optika_ing";
	picture="\O_wp\w_ingram.paa";
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=100;
	distanceZoomMax=100;
	displayName="$STR_DN_ADD_WEAPPACK_INGRAM";
	displayNameMagazine="$STR_DN_ADD_WEAPPACK_INGRAM_AMMO";
	shortNameMagazine="$STR_DN_ADD_WEAPPACK_INGRAM_AMMO_SHORT";
	weaponType=2;
	magazineType=32;
	count=30;
	reloadTime=0.05;
	magazineReloadTime=1;
	drySound[]={"weapons\M16dry",0.0031623,1};
	magazines[]={"Ingram"};
	modes[]={"Single","FullAuto"};

	class Single
	{
		ammo="Skorpion";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_WEAPPACK_INGRAM";
		dispersion=0.002;
		sound[]={"\O\Guns\skorpion_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="IngramSingle";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="Skorpion";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_WEAPPACK_INGRAM_AUTO";
		dispersion=0.004;
		sound[]={"\O\Guns\skorpion_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=30;
		recoil="IngramFull";
		autoFire=1;
		aiRateOfFire=5.0;
		aiRateOfFireDistance=100;
		useAction=0;
		useActionTitle="";
	};
};

class IngramMag:IngramBase
{
	scopeMagazine=2;
	picture="\O\Guns\m_uzi.paa";
};

class Ingram:IngramBase
{
	scopeWeapon=2;
	magazines[]={"IngramMag"};
	uiPicture="\misc\ipistole.paa";
};
class GlockSBase:GlockBase
{
	model="\O_wp\Glock17Sil";
	modelOptics="\O\Guns\optika_glock17";
	picture="\O_wp\w_Glocksilent.paa";
	valueWeapon=6;
	valueMagazine=4;
	optics=1;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	distanceZoomMin=50;
	distanceZoomMax=50;
	displayName="$STR_DN_ADD_WEAPPACK_GLOCKS";
	displayNameMagazine="$STR_DN_ADD_WEAPPACK_GLOCKS_AMMO";
	shortNameMagazine="$STR_DN_ADD_WEAPPACK_GLOCKS_AMMO_SHORT";
	magazines[]={"GlockS"};
	modes[]={"Single"};

	class Single
	{
		ammo="GlockS";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_WEAPPACK_GLOCKS";
		dispersion=0.004;
		sound[]={"\O\Guns\uzi_single.wss",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSilenced";
		autoFire=0;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		useAction=0;
		useActionTitle="";
	};
};

class GlockSMag:GlockSBase
{
	scopeMagazine=2;
	picture="\O\Guns\zasobnik.paa";
};

class GlockS:GlockSBase
{
	scopeWeapon=2;
	magazines[]={"GlockSMag"};
	uiPicture="\misc\ipistole.paa";
};
class LaserDesignatorOH:LaserDesignatorBase
{
	scopeWeapon=2;
	scopeMagazine=2;
	primary=10;
};
class ZuniLauncherOH:ZuniLauncher38
{
	opticsZoomMin=0.08;
	opticsZoomMax=0.84;
	count=14;
	reloadTime=0.15;
};
class SteyrBase:Riffle
{
	scopeWeapon=1;
	scopeMagazine=1;
	model="\steyr\steyr";
	modelOptics="\steyr\optika_steyr";
	picture="\Steyr\w_steyr.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="$STR_DN_ADD_STEYR";
	displayNameMagazine="$STR_DN_ADD_STEYR_AMMO";
	shortNameMagazine="$STR_DN_ADD_STEYR_AMMO_SHORT";
	drySound[]={"weapons\M16dry",0.0031623,1};
	modes[]={"Single","Fullauto"};

	class Single
	{
		ammo="Steyr";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_STEYR";
		dispersion=0.0002;
		sound[]={"\Steyr\Steyr",1.0,1};
		soundContinuous=0;
		reloadTime=0.1;
		ffCount=1;
		recoil="riffleSingle";
		autoFire=0;
		aiRateOfFire=2.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};

	class FullAuto
	{
		ammo="Steyr";
		multiplier=1;
		burst=1;
		displayName="$STR_DN_ADD_STEYR_AUTO";
		dispersion=0.0003;
		sound[]={"\Steyr\Steyr",1.0,1};
		soundContinuous=0;
		reloadTime=0.07;
		ffCount=1;
		recoil="riffleBurst3";
		recoilFixed="riffleSingleFixed";
		autoFire=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		useAction=0;
		useActionTitle="";
	};
};

class SteyrMag:SteyrBase
{
	scopeMagazine=2;
	picture="\Steyr\m_steyr.paa";
};

class Steyr:SteyrBase
{
	scopeWeapon=2;
	magazines[]={"SteyrMag"};
};
class Ch29TLauncher: MaverickLauncher
{
	ammo=Ch29T;
	displayName=$STR_DN_CH29T;
	displayNameMagazine=$STR_MN_CH29T;
	shortNameMagazine=$STR_SN_CH29T;
	count=6;
};
class VulcanCannon:MachineGun30
{
	ammo="Bullet4x20";
	count=2000;
	multiplier=4;
	initSpeed=900;
	flashSize=1.2;
	reloadTime=0.15;
	displayName="$STR_DN_VULCAN20";
	displayNameMagazine="$STR_DN_VULCAN20";
	shortNameMagazine="$STR_DN_VULCAN20";
	dispersion=0.0015;
	maxLeadSpeed=900;
	aiRateOfFire=0.3;
	aiRateOfFireDistance=3000;
};
class XMS:M4
{
	model="\XMS\XMS";
	modelOptics="\XMS\optika_XMS";
	picture="\XMS\w_XMS.paa";
	optics=1;
	opticsZoomMin=0.28;
	opticsZoomMax=0.28;
	displayName="$STR_DN_ADD_XMS";
	displayNameMagazine="$STR_DN_ADD_XMS_AMMO";
	shortNameMagazine="$STR_DN_ADD_XMS";
};


//---d4t cfgweapons
//-infantry
//primary weapons
#include "config\cfgweapons\d4t_primary.hpp"
//secondary
#include "config\cfgweapons\d4t_secondary.hpp"
//tertiary
#include "config\cfgweapons\d4t_tertiary.hpp"
//misc
#include "config\cfgweapons\d4t_misc.hpp"
//-vehicles
//air
#include "config\cfgweapons\d4t_air_weapons.hpp"
//surface vehicles
#include "config\cfgweapons\d4t_surface_vehicles_weapons.h"

//magazines
//magazines for infantry
#include "config\cfgweapons\d4t_infantry_magazines.hpp"
	
	class d4t_M4SD_aimpoint : Riffle
		{
		scopeWeapon=2;
		scopeMagazine=0;
		model="\SJB_TOSM4\SJB_M4_SD_Aimpoint_proxy.p3d";
		modelMagazine="\SJB_TOSM4\m4_mag.p3d";
		modelOptics="\SJB_Optics\optic_aimpoint_sd.p3d";
		picture="\SJB_TOSM4\Inventory\w_m4a1_aimpoint_sd.paa";
		optics=1;
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		displayName="M4 SOPMOD Aimpoint SD";
		magazines[]={"d4t_m4sdmag"};
		drySound[]={"\SJB_TOSM4\sound\Dry.wss",0.010316,1};
		reloadMagazineSound[]={"\SJB_TOSM4\sound\Reload.wss",1.000000,1};
		count=30;
		displayNameMagazine = "M4 5.56x45 JHP (SD) Magazine";
		shortNameMagazine = "M4 (SD) Mag";
		modes[]={Single,FullAuto};

		class Single
		{
			ammo=d4t_jhp_bullet;
			multiplier=1;
			burst=1;
			displayName="M4 - Semi";
			dispersion=0.0008;
			sound[]={"\d4t_sounds\weapons\M4fireSD.wss",1.000000,1};
			soundContinuous=0;
			reloadTime=0.07;
			ffCount=1;
			recoil="d4t_m4Recoil";
			autoFire=0;
			aiRateOfFire=5.0;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo=d4t_jhp_bullet;
			multiplier=1;
			burst=1;
			displayName="M4 - Full Automatic";
			dispersion=0.00085;
			sound[]={"\d4t_sounds\weapons\M4fireSD.wss",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=100;
			recoil="d4t_m4Recoil";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		};

	class d4t_m4sdmag : d4t_M4SD_aimpoint
	{
		picture="\lsr_uswp\weapics\m_ar15.paa";
		scopeMagazine=2;
	};

	class d4t_M240Coax:MachineGun7_6
		{
		scopeWeapon=2;
		scopeMagazine=1;
		displayName="M240C 7.62mm";
		displayNameMagazine="M240C Coax";
		shortNameMagazine="M240C";
		sound[]={"\CBT_Misc\sound\coax.ogg","db-10",1};
		soundContinuous=0;
		autoFire=1;
		count=500;
		ammo="CBT_7_6";
		};

	/*class d4t_m1a1_m2: MachineGun12_7
	{
    ammo="d4t_bmgfmj_bullet";
    displayName="M2 12.7mm MG";
    displayNameMagazine="M2";
    shortNameMagazine="12.7mm M2 Box Mag";
    count=4000;
    reloadTime=0.11;
    sound[]={"\SIG_MN\m2.ogg",20,1};
    reloadMagazineSound[]={"\SIG_MN\m2RL.ogg",0.3,1};
    soundContinuous=0;
    initSpeed=1215;
    flash="gunfire";
    flashSize=1.500000;
    dispersion=0.00125;
    maxLeadSpeed=50;
    aiRateOfFire=0;
    aiRateOfFireDistance=0;
    autoFire=1;
    optics=1;
    autoReload=1;
    magazineReloadTime=10;
	};*/

	class d4t_GP25Grenade: Grenadelauncher
	{
		cursor="t_select.paa";
		scopeMagazine=2;
		valueWeapon=3;
		valueMagazine=2;
		weaponType=0;
		displayName="GP-25 Grenade Launcher";
		displayNameMagazine="GP-25 Grenade";
		shortNameMagazine="Grenade";
		modelOptics="\RHS_Weap\AK_Optics\optic_gl";
		optics=1;
		opticsZoomMin=0.500000;
		opticsZoomMax=0.500000;
		magazines[]={"GrenadeLauncher"};
		sound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_GP25_grenadeLaunch.wss",0.0316,1};
		reloadSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_GP25_grenadeReload.wss",0.0316,1};
		reloadMagazineSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_GP25_grenadeReload.wss",0.0316,1};
		count=1;
		reloadTime=0;
		initSpeed=76;
		canLock=0;
		autoReload=0;
		ffMagnitude=0.100000;
		ffFrequency=1;
		ffCount=1;
		dispersion=0.015000;
		aiDispersionCoefY=2;
		maxLeadSpeed=15;
		muzzlePos="usti granatometu";
		muzzleEnd="konec granatometu";
		uiPicture="igrenadier";
		canDrop = 1;
	};

	class d4t_AK74GP25
	{
		scopeWeapon=2;
		scopeMagazine=0;
		weaponType=1;
		displayName="AK-74M GP-25";
		model="\RHS_Weap\AK74M\AK74M_GP25";
		picture="\RHS_Weap\AK_Pics\w_AK74M_GP25.paa";
		muzzles[]={"d4t_AK74M_Muzzle","d4t_GP25_Muzzle"};

		class d4t_AK74M_Muzzle: ak74m
		{
		};
		class d4t_GP25_Muzzle: d4t_GP25Grenade
		{
		};
		canDrop = 1;
	};

	class d4t_RPG29 : LawLauncher
	{
		sound[]={"\ICPrpg7\sound\launch.ogg",0.250000,1};
		modelOptics="\ICPRPG7\rpg\pgo7_sight.p3d";
		model="\ICPrpg7\rpg\rpg29";
		modelMagazine="\ICPrpg7\rpg\rpg29Rocket";		
		opticsZoomMin=0.3500000;
		opticsZoomMax=0.3500000;
		displayName="RPG-29 'Vampire'";
		displayNameMagazine="PG-29";
		shortNameMagazine="PG-29";
		magazines[]={"d4t_RPG29Mag"};
		magazineType="6 * 256";
		ammo="d4t_rpg29ammo";
		picture="\ICPrpg7\rpg26\rpg29_w.paa";
	};
	
	class d4t_RPG29Mag: d4t_RPG29
	{
		picture="\ICPrpg7\rpg26\rpg29_m.paa";
	};

	class d4t_5RD_127_Mag: MachineGun7_6Manual
	{
		scopeWeapon=0;
		scopeMagazine=2;
		count=5;
		weaponType=17;
		initSpeed=1000;
		magazineType=256;
		displayNameMagazine="5rd 12.7x107mm Magazine";
		shortNameMagazine="12.7mm Mag.";
		picture="\RHS_Weap\AK_Pics\12.7_MAG.paa";
		modes[]={"Single"};
		
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
		canDrop = 1;
	};

	class d4t_V94: d4t_5RD_127_Mag
	{
		scopeWeapon=2;
		scopeMagazine=0;
		displayName="OSV-96";
		model="\RHS_Weap\V_94\V_94.p3d";
		modelOptics="\RHS_Weap\AK_Optics\AK_Optic4";
		picture="\RHS_Weap\AK_Pics\v-94I.paa";
		opticsZoomMin=0.02;
		opticsZoomMax=0.02;
		distanceZoomMin=400;
		distanceZoomMax=400;
		drySound[]={"weapons\AK74Dry",0.010000,1};
		reloadMagazineSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_load.wss",1.000000,1};
		modes[]={"Single"};
		magazines[]={"d4t_5RD_127_Mag"};
	};

	class d4t_30RD_545_SDmag : AK74	
	{		
		scopeWeapon=0;
		scopeMagazine=2;
		count=30;
		initSpeed=330;
		distanceZoomMin=100;
		distanceZoomMax=100;
		displayNameMagazine="30rd 5.45x39 SD Magazine";
		shortNameMagazine="30rd 5.45x39 SD Mag.";
		picture="\RHS_Weap\AK_Pics\m_30RD_5,45_MAG.paa";
		modes[]={"Single","FullAuto"};
		
		class Single
		{
			ammo="RHS_E545x39_30_BulletSilencedSingle";
			multiplier=1;
			burst=1;
			displayName="5.45x39 SD Semi";
			dispersion=0.000200;
			sound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_545_silenced_single.wss",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="RHS_E545x39_RifleRecoil";
			autoFire=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="RHS_E545x39_30_BulletSilencedSingle";
			multiplier=1;
			burst=1;
			displayName="5.45x39 SD Auto";
			dispersion=0.001000;
			sound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_545_silenced_single.wss",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.0667;
			ffCount=30;
			recoil="RHS_E545x39_RifleAutoRecoil";
			autoFire=1;
			aiRateOfFire=1;
			aiRateOfFireDistance=80;
			useAction=0;
			useActionTitle="";
		};
		canDrop = 1;
	};

	class d4t_AKS74PSO1PBS3: d4t_30RD_545_SDmag
	{
		scopeWeapon=2;
		scopeMagazine=0;
		displayName="AKS-74B PSO-1";
		model="\RHS_Weap\AKS74\AKS74_PSO1_PBS3";
		modelOptics="\RHS_Weap\AK_Optics\AK_OpticSD2";
		optics=1;
		opticsZoomMin=0.080000;
		opticsZoomMax=0.080000;
		opticsFlare=0;
		picture="\RHS_Weap\AK_Pics\w_AK74SB_PSO1.paa";
		drySound[]={"weapons\AK74Dry",0.010000,1};
		reloadMagazineSound[]={"\RHS_Weap_Sounds\AK_Sounds\RHS_AK_load.wss",1.000000,1};
		modes[]={"Single","FullAuto"};
		magazines[]={"d4t_30RD_545_SDmag"};
	};

	class VIT_2A70GUN:Gun73
		{
		shotFromTurret=1;
		sound[]={"\ffur_ru_arm\p3\Sound\Gun100.ogg","db+10",1};
		reloadSound[]={"\ffur_ru_arm\p3\Sound\2A70REL.ogg","db-15",1.0};
		reloadTime=12;
		autoFire=1;
		ammo="VIT_2A70GUN";
		displayName="2A70 100mm Gun";
		displayNameMagazine="2A70 100mm";
		shortNameMagazine="2A70 100mm";
		magazines[]={"VIT_2A70GUN"};
		namesound="shell";
		count=40;
		initSpeed=800;
		aiRateOfFire=0;
		aiRateOfFireDistance=2000;
		irLock=1;
		};

	class VIT_2A42_Base:Cannon30
		{
		scopeWeapon=2;
		scopeMagazine=0;
		shotFromTurret=1;
		displayName="2A42 30mm";
		reloadSound[]={"",0,0};
		backgroundReload=1;
		soundContinuous=0;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		};

	class VIT_2A42HE:VIT_2A42_Base
		{
		ammo="VIT_2A42HE";
		count=580;
		autoFire=1;
		reloadTime=0.15909;
		dispersion=0.0025;
		nameSound="shell";
		magazines[]={"VIT_2A42HE"};
		magazineReloadTime=10;
		displayName="2A42 30mm HE";
		displayNameMagazine="30mm HE";
		shortNameMagazine="30mm HE";
		initSpeed=960;
		multiplier=1;
		};

	class VIT_2A42AP:VIT_2A42HE
		{
		ammo="VIT_2A42AP";
		count=280;
		nameSound="heat";
		magazines[]={"VIT_2A42AP"};
		displayName="2A42 30mm AP";
		displayNameMagazine="30mm AP";
		shortNameMagazine="30mm AP";
		initSpeed=980;
		};

	class VIT_2A42:VIT_2A42_Base
		{
		muzzles[]={"HE","AP"};

		class HE:VIT_2A42HE
			{
			};

		class AP:VIT_2A42AP
			{
			};
		};

	class d4t_bmp3_pkt : MachineGun7_6
		{
		dispersion=0.01;
		displayName="PKT 7.62mm";
		displayNameMagazine="PKT";
		shortNameMagazine="PKT";
		count=250;
		reloadTime=0.1;
		autoFire=1;
		magazineReloadTime=10;
		};

	class VIT_9M117:AT3Launcher
		{
		count=6;
		cost=10000;
		displayName="9M117 Bastion";
		displayNameMagazine="9M117";
		shortNameMagazine="9M117";
		weaponType=65536;
		reloadTime=20;
		irLock=1;
		ammo="VIT_9M117";
		sound[]={"\ffur_ru_arm\p3\Sound\9m117.ogg","db0",1};
		reloadSound[]={"\ffur_ru_arm\p3\Sound\9m113rel.wss",1,1};
		};

	class d4t_gun155 : Gun120
	{
	magazines[]={"d4t_155he_dummy"};
    reloadTime=5;
    sound[]={"\SIG_MN\120gun.ogg",10.000000,1};
    reloadSound[]={"\SIG_MN\breech.wav",db-20,1};
	};

	class d4t_155he_dummy : Shell120
	{
    displayName="M829A2 120 APFSDS";
    displayNameMagazine="M829A2 APFSDS";
    shortNameMagazine="M829A2 APFSDS";
    ammo="d4t_120mmAPFSDSshell";
    count=40;
    nameSound="heat";
    initSpeed=1540;
    reloadTime=5;
    aiRateOfFire=0;
    aiRateOfFireDistance=0;
    sound[]={"\d4t_sounds\weapons\abrams_m256_120mm_apfsds.wss",100,1};
    reloadSound[]={"\SIG_MN\breech.wav",db-20,1};
	};

//d4t include bis and short classes
#include "config\cfgweapons\short.hpp"
};