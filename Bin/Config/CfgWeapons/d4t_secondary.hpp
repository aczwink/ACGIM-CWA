class d4t_m136at4 : CarlGustavLauncher
	{
		model="\d4t_files\models\us\weapons\m136at4.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelSpecial="\d4t_files\models\us\weapons\m136at4_empty.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelOptics="\d4t_files\optics\optic_m136.p3d";//used odol for this, if there are any bugs better to use textureswap
		picture="\d4t_files\pics\weapons\m136at4.paa";
		sound[]={"\d4t_files\sounds\weapons\handheld\at4fire.wss",db17,1};
		reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\at4reload.wss",0.010316,1};
		displayName="M136 AT4 Launcher";

		magazines[]={"d4t_at4heat","at4heat"};
	};

class d4t_fgm148 : LAWLauncher
	{
		model="\d4t_files\models\us\weapons\fgm148_empty.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelSpecial="\d4t_files\models\us\weapons\fgm148.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelOptics="\d4t_files\optics\optic_fgm148.p3d";//used odol for this, if there are any bugs better to use textureswap
		sound[]={"\d4t_files\sounds\weapons\handheld\fgm148_fire.wss","db17",1};
		reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\fgm148_reload.wss",0.010316,1};
		picture="\d4t_files\pics\weapons\fgm148.paa";
		displayName="FGM-148 Javelin";
		canLock=2;
		dexterity=0.25;
		valueWeapon=20;
		valueMagazine=10;
		initSpeed=10;
		canDrop=1;
		opticsZoomMin=0.04;
		opticsZoomMax=0.12;
		distanceZoomMin=40;
		distanceZoomMax=80;
		aiRateOfFire=20;
		aiRateOfFireDistance=0;
		maxLeadSpeed=1000;
		count=1;

		magazines[]={"d4t_fgm148missile","fgm148missile"};
	};

class d4t_prc117 : LAWLauncher //this weapon should never be selectable
	{
		scopeWeapon=2;
		scopeMagazine=0;
		nameSound="weapon";
		model="\d4t_files\models\us\misc\prc117.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelOptics="";
		magazineType="2 * 256";
		displayName = "PRC-117 Radio";
		displayNameMagazine="PRC-117 Battery";
		shortNameMagazine="Battery";
		reloadTime=10.0;
		canLock=1;
		valueWeapon=20;
		optics=0;
		forceOptics = 0;
		count=100;
		primary=0;
		picture="\d4t_files\pics\weapons\prc117.paa";
		uiPicture="\d4t_files\pics\ui\irto.paa";
		canDrop=1;
		showEmpty=0; //as long as we haven't got a magazine, this weapon is not selectable
		magazines[]={}; //this ensures that no magazine can be added :)
	};

class d4t_anpaq1 : LaserDesignator
	{
		scopeWeapon=2;
		scopeMagazine=1;
		model="\d4t_files\models\us\misc\anpaq1.p3d";//used odol for this, if there are any bugs better to use textureswap
		modelspecial="\d4t_files\models\us\misc\anpaq1_special.p3d";//used odol for this, if there are any bugs better to use textureswap
		displayName="AN/PAQ-1";
		picture="\d4t_files\pics\weapons\anpaq1.paa";
		canLock=1;
		canDrop=1;
		magazineType=256;
	};

//east
class rpg26launcher : LawLauncher
{
	model="\d4t_files\models\russia\weapons\rpg26_empty.p3d";
	modelSpecial="\d4t_files\models\russia\weapons\rpg26.p3d";
	modelOptics="\d4t_files\optics\optic_rpg26.p3d";
	picture="\d4t_files\pics\weapons\rpg26.paa";
	sound[]={"\d4t_files\sounds\weapons\impacts\fire.wss",db18,1.0};
	displayName="RPG-26";
	shortNameMagazine="RPG-26";
	magazines[]={rpg26};
};