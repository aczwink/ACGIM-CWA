class 30rd556x45mag : d4t_m4
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	picture="\d4t_files\pics\magazines\stanag.paa";
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
};

class d4t_30rd556x45sdmag : d4t_m4acog_sd
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	picture="\d4t_files\pics\magazines\stanag.paa";
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
};

class car15_mag : car15apt
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	picture="\d4t_files\pics\magazines\stanag.paa";
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
};

class car15_sdmag : car15apt_sd
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	picture="\d4t_files\pics\magazines\stanag.paa";
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
};

class d4t_m16a4mag : d4t_m16a4apt
{
	scopeWeapon=0;
   	scopeMagazine=2;
	count=30;
	displayNameMagazine="30 round 5.56x45mm FMJ Magazine";
	shortNameMagazine="STANAG Mag";
	picture="\d4t_files\pics\magazines\stanag.paa";
};

class d4t_100rd762x51mag : d4t_m240b
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=100;
	picture="\d4t_files\pics\magazines\m240b.paa";
	displayNameMagazine="100 round 7.62x51mm FMJ Box";
	shortNameMagazine="Bullet belt";
	magazineType="2 * 256";
};

class d4t_200rd556x45mag : d4t_m249saw
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=200;
	picture="\d4t_files\pics\magazines\m249.paa";
	displayName="M249";
	displayNameMagazine="200 round 5.56x45mm FMJ Box";
	shortNameMagazine="Softbox Mag";
	magazineType="2 * 256";
};

class d4t_200rd556x45sdmag : d4t_m249spw_acog_sd
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=200;
	picture="\d4t_files\pics\magazines\m249.paa";
	displayNameMagazine="200 round 5.56x45mm FMJ Box";
	shortNameMagazine="Softbox Mag";
	magazineType="2 * 256";
};

class d4t_10rd127x99mag : d4t_m82a1
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=10;
	displayNameMagazine="10 round 12.7 x 99mm BMG Magazine";
	shortNameMagazine=".50 BMG Mag";
	picture="\d4t_files\pics\magazines\m82.paa";
};

class 30rd545x39mag : ak74m
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=30;
	displayNameMagazine="30 round 5.45 x 39mm Magazine";
	shortNameMagazine="5.45x49mm Mag";
	picture="\d4t_files\pics\magazines\30rd5,45x39.paa";
};

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
class d4t_15rd9x19mag : d4t_m9
	{
		scopeWeapon=0;
		scopeMagazine=2;
		count=15;
		picture="\d4t_files\pics\magazines\pistolmag.paa";
		displayNameMagazine = "15 round 9x19mm FMJ Parabellum Magazine";
		shortNameMagazine = "9x19mm Mag";
	};

class m9_sd_mag : m9_sd
{
	scopeWeapon=0;
	scopeMagazine=2;
	count=15;
	picture="\d4t_files\pics\magazines\pistolmag.paa";
	displayNameMagazine = "15 round 9x19mm FMJ Parabellum SD Magazine";
	shortNameMagazine = "9x19mm SD Mag";
};

class d4t_12rd45acpmag : d4t_mk23_sd
	{
		scopeWeapon=0;
		scopeMagazine=2;
		count=12;
		picture="\d4t_files\pics\magazines\pistolmag.paa";
		displayNameMagazine="12 round 11,43 × 23 mm Magazine";
		shortNameMagazine=".45ACP Mag";
	};

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
class d4t_at4heat : d4t_m136at4
	{
		scopeWeapon=0;
		scopeMagazine=2;
		picture="\d4t_files\pics\magazines\m136at4.paa";
		ammo=d4t_m136at4rocket;
		magazineType="2 * 256";
		displayNameMagazine="M136AT4 HEAT Missile";
		shortNameMagazine="M136AT4 Missile";
	};

class d4t_fgm148missile : d4t_fgm148
	{
		scopeWeapon=0;
		scopeMagazine=2;
		magazineType="6 * 256";
		displayNameMagazine="Javelin Missile";
		shortNameMagazine="Javelin";
		ammo=d4t_fgm148missile;
		modelMagazine="\d4t_files\models\us\weapons\javelin_missile.p3d";//used odol for this, if there are any bugs better to use textureswap
		picture="\d4t_files\pics\magazines\fgm148.paa";
	};

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