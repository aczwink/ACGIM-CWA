class FIM92 : M220_BGM71ETOW
{
	aiRateOfFire=1; 
	aiRateOfFireDistance=20000;
	initSpeed=10;
	maxLeadSpeed=3000;
	flash=gunfire;
	flashsize=8;
	count=4;
	ammo = "FIM92Stinger";
	reloadSound[]={"Weapons\missload",db-50,1};
	muzzlePos="usti hlavne";
	muzzleEnd="konec hlavne";
	optics=true;
	reloadTime=2;
	displayName="FIM92 Stinger";
	displayNameMagazine="FIM92 Stinger Missle";
	shortNameMagazine="Stinger";
	sound[]={"\d4t_files\sounds\weapons\vehicles\stinger.wss",3,1};
	magazinereloadTime=30;
};