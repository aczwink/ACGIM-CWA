/*reloadTime formula with neglection of time to reload magazine (only for automatic-fire)
  x rounds/min from wiki
  x / 60 rounds/sec
  1 / x seconds/round

  1/(x/60) => 60/x
*/
/*class d4t_fim92 : d4t_m220_towa
{
	aiRateOfFire=1; 
	aiRateOfFireDistance=20000;
	initSpeed=10;
	maxLeadSpeed=3000;
	flash=gunfire;
	flashsize=8;
	count=4;
	ammo=d4t_fim92amissile;
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
};*/