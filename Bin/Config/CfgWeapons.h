class CfgWeapons
{
	access = ACCESS_ADDVALUESONLY;

//BIS Classes
#include "Config\CfgWeapons\BISClasses.h"
#include "Config\CfgWeapons\BISClassesRenames.hpp"
//Neutral
#include "Config\CfgWeapons\Horns.h"
//USA
#include "Config\CfgWeapons\USA\USA.h"
#include "Config\CfgWeapons\Russia.hpp"
//Unused BIS Classes
#include "Config\CfgWeapons\BISClassesUnused.h"

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
};