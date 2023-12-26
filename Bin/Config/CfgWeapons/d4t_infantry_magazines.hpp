class rpk74mag : rpk74
{
	scopeWeapon=0;
	scopeMagazine=2;
	displayNameMagazine="45rd 5.45MG Magazine";
	shortNameMagazine="45rd 5.45MG Mag.";
	picture="\sjc_images\magazines\45rd5,45x39.paa";
};

class g36mag : g36
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	picture="\sjc_files\pics\magazines\g36.paa";
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
};

//tertiary
class makarovmag : makarov_pm
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=8;
	displayNameMagazine="8 round 9x18mm Makarov Magazine";
	shortNameMagazine="Makarov Mag";
	picture="\d4t_files\pics\magazines\9x18makarov.paa";
	ammo=Bullet9x18Makarov;			
};
//explosives
class rpg26 : rpg26launcher
{
	scopeWeapon=0;
	scopeMagazine=2;
	magazineType="4 * 256";
	picture="\d4t_files\pics\magazines\rpg26.paa";
	ammo=rpg26_missile;
	displayName="RPG-26 'Aglen'";
	displayNameMagazine="RPG-26";
};












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

	class d4t_RPG29 : Default
	{
		scopeWeapon=2;
		scopeMagazine=2;
		weaponType=16;
		valueWeapon=10;
		valueMagazine=5;
		count=1;
		magazineReloadTime=12;
		reloadTime=0.5;
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
		distanceZoomMin=100;
		distanceZoomMax=100;
		uiPicture="islaw";
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