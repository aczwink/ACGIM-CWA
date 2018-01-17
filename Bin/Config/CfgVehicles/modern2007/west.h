//---Infantry
//-Army Soldiers
class d4t_USA_Soldier : Soldier
{
	model="\d4t_files\models\us\infantry\army_soldier.p3d";//used odol explorer for this, if there are any bugs better to use textureswap
	hiddenSelections[]={"medic"};
	vehicleClass="Infantry - Army";
	scope=2;
	side=1;
	armor=5.0;
	armorHead=2.0;
	armorBody=6.5;
	cost=40000;
	accuracy=0.7;
	displayName="Soldier";
	weapons[]={"m4apt","m9","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","m67","m67","m67","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	wounds[]={
		"\d4t_tex\usi2\aarmL.paa","\d4t_tex\usi2\aarmLd.paa",
		"\d4t_tex\usi2\achs.paa","\d4t_tex\usi2\achsd.paa",
		"\d4t_tex\usi2\acht.paa","\d4t_tex\usi2\achtd.paa",
		"\d4t_tex\usi2\arml.paa","\d4t_tex\usi2\armld.paa",
		"\d4t_tex\usi2\armr.paa","\d4t_tex\usi2\armrd.paa",
		"\d4t_tex\usi2\babo.paa","\d4t_tex\usi2\babod.paa",
		"\d4t_tex\usi2\bafo.paa","\d4t_tex\usi2\bafod.paa",
		"\d4t_tex\usi2\bodyb.paa","\d4t_tex\usi2\bodybd.paa",
		"\d4t_tex\usi2\bodyf.paa","\d4t_tex\usi2\bodyfd.paa",
		"\d4t_tex\usi2\legl.paa","\d4t_tex\usi2\legld.paa",
		"\d4t_tex\usi2\legr.paa","\d4t_tex\usi2\legrd.paa"
	};
};

class d4t_USA_Grenadier : d4t_USA_Soldier
{
	cost=60000;
	displayName="Grenadier";
	weapons[]={"m4apt_m203","m9","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","m406hefr_grenade","m406hefr_grenade","m406hefr_grenade","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

class d4t_USA_Medic : d4t_USA_Soldier
{
	hiddenSelections[]={};
	picture="\misc\medik.paa";
	cost=60000;
	displayName="Medic";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	nameSound="medic";
	attendant=1;
	weapons[]={"m4apt","m9","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

class d4t_USA_LMGSoldier : d4t_USA_Soldier
{
	nameSound="machineGunner";
	displayName="Machine Gunner (Squad Support)";
	cost=60000;
	weapons[]={"m249saw","m9","Throw","Put"};
	magazines[]={"200rd556x45mag","200rd556x45mag","200rd556x45mag","200rd556x45mag","m67","m67","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.1,0.8};
};

class d4t_USA_MGSoldier : d4t_USA_Soldier
{
	displayName="Machine Gunner";
	weapons[]={"m240b","m9","Throw","Put"};
	magazines[]={"100rd762x51mag","100rd762x51mag","100rd762x51mag","100rd762x51mag","100rd762x51mag","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,1,0.1};
};

class d4t_USA_ATSoldier : d4t_USA_Soldier
{
	nightVision=1;
	cost=150000;
	displayName="AT Soldier";
	nameSound="missileSoldier";
	weapons[]={"m4apt","m9","m136at4","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","at4heat","at4heat","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.9,0.1};
};

class d4t_USA_HATSoldier : d4t_USA_ATSoldier
{
	displayName="Heavy AT Soldier";
	nameSound="missileSoldier";
	accuracy=0.7;
	weapons[]={"m4apt","m9","fgm148","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","fgm148missile","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.9,0.1};
};

class d4t_USA_AASoldier : d4t_USA_ATSoldier
{
	displayName="AA Soldier";
	nameSound="missileSoldier";
	accuracy=0.7;
	weapons[]={"m4apt","m9","fim92a","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","fim92amissile","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.9};
};

class d4t_USA_RadioOp : d4t_USA_Soldier //new class radio operator
{
	displayName="Radio Operator";
	weapons[]={"m4apt","prc117","m9","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","m67","m67","m67","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.9};

	/*class UserActions
	{
		class Artillery
		{  
			displayName="Call Artillery";
			position="pos driver";
			radius=2.00000;
			condition="(side this == west) && (this hasweapon ""d4t_prc117"" || this hasweapon ""prc117"") && alive this ";
			statement= "[this, player, 0] exec ""\d4t_misc\artillery\init.sqs""";
		};
	};*/
};

class d4t_USA_Miner : d4t_USA_Soldier
{
	displayName="Miner";
	canDeactivateMines=1;
	picture="\misc\sapper.paa";
	accuracy=1000;
	weapons[]={"m4apt","m9","Binocular","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","Mine","Mine","Mine","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.1};
};

class d4t_USA_SquadLeader : d4t_USA_Soldier
{
	picture="\misc\frcky.paa";
	nameSound="officer";
	displayName="Squad Leader";
	accuracy=2.0;
	cost=500000;
	nightVision=1;
	weapons[]={"m4acog","m9","Binocular","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","m67","m67","SmokeShell","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

//-Army SF
class d4t_USA_Sniper : d4t_USA_Soldier
{
	vehicleClass="Infantry - Army SF";
	displayName="SF Sniper";
	nameSound="sniper";
	canHideBodies=1;
	canDeactivateMines=1;
	nightVision=1;
	camouflage=0.5;
	cost=250000;
	weapons[]={"m82a1","mk23_sd","NVGoggles","Throw","Put"};
	magazines[]={"10rd127x99mag","10rd127x99mag","10rd127x99mag","10rd127x99mag","10rd127x99mag","10rd127x99mag","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
	hiddenSelections[]={"medic"};
	threat[]={1,0.1,0.1};
	picture="\misc\sniper.paa";
	model="\d4t_files\models\us\infantry\us_sniper.p3d";//used odol explorer for this, if there are any bugs better to use textureswap
	wounds[]={"\d4t_tex\snip\back.paa","\d4t_tex\snip\back_d.paa","\d4t_tex\snip\chest.paa","\d4t_tex\snip\chest_d.paa",};
};

class ParachuteWest : ParachuteBase
{
	scope=2;
	accuracy=0.5;
	side=1;
	crew=d4t_USA_SF_Operator;
	displayName="SF Airborne";
	vehicleClass="Infantry - Army SF";
};

class d4t_USA_SF_Operator : d4t_USA_Soldier
{
	picture="\misc\meciky.paa";
	nameSound="blackOp";
	vehicleClass="Infantry - Army SF";
	displayName="SF Operator";
	weapons[]={"m4acog_sd","anpaq1","mk23_sd","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","anpaq1","PipeBomb","PipeBomb","PipeBomb","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
	camouflage=0.7;
	threat[]={1,0.5,0.1};
	model="\d4t_files\models\us\infantry\sf_op.p3d";//used odol explorer for this, if there are any bugs better to use textureswap
	canHideBodies=1;
	canDeactivateMines=1;
	nightVision=1;
	hiddenSelections[]={"goou","goostu","googu","essu","good","goostd","googd","essd"};
	wounds[]={
		"\d4t_tex\usfc\armr.paa","\d4t_tex\usfc\armrd.paa",
		"\d4t_tex\usfc\bodyb.paa","\d4t_tex\usfc\bodybd.paa",
		"\d4t_tex\usfc\bodyf.paa","\d4t_tex\usfc\bodyfd.paa",
		"\d4t_tex\usfc\cachs.paa","\d4t_tex\usfc\cachsd.paa",
		"\d4t_tex\usfc\cacht.paa","\d4t_tex\usfc\cachtd.paa",
		"\d4t_tex\usfc\legl.paa","\d4t_tex\usfc\legld.paa",
		"\d4t_tex\usfc\legp.paa","\d4t_tex\usfc\legpd.paa",
		"\d4t_tex\usfc\legr.paa","\d4t_tex\usfc\legrd.paa",
		"\d4t_tex\usfc\sarml.paa","\d4t_tex\usfc\sarmLd.paa",
		"\d4t_tex\usfc\sbab.paa","\d4t_tex\usfc\sbaBd.paa",
		"\d4t_tex\usfc\sbaf.paa","\d4t_tex\usfc\sbaFd.paa",
	};
};

class d4t_USA_SF_Operator_DMR : d4t_USA_SF_Operator
{
	displayName="SF Operator (DMR)";
	weapons[]={"m4spr_sd","anpaq1","mk23_sd","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","anpaq1","PipeBomb","PipeBomb","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
};

class d4t_USA_SF_Operator_TeamLeader : d4t_USA_SF_Operator
{
	displayName="SF Operator (Team Leader)";
	weapons[]={"m4eotech_sd","anpaq1","mk23_sd","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","anpaq1","PipeBomb","PipeBomb","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
};

class d4t_USA_SF_Operator_Entry : d4t_USA_SF_Operator
{
	displayName="SF Operator (Entry)";
	weapons[]={"m4cobra_sd","anpaq1","mk23_sd","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","30rd556x45sdmag","anpaq1","PipeBomb","PipeBomb","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
};

//d4t add: new class delta op (supporter)
class d4t_USA_SF_Operator_Support : d4t_USA_SF_Operator
{
	displayName="SF Operator (Support)";
	weapons[]={"m249spw_acog_sd","mk23_sd","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"200rd556x45sdmag","200rd556x45sdmag","200rd556x45sdmag","200rd556x45sdmag","PipeBomb","12rd45acpmag","12rd45acpmag","12rd45acpmag","12rd45acpmag"};
};

class d4t_USA_SF_Ranger : d4t_USA_SF_Operator
{
	displayName="SF Ranger";
	weapons[]={"m4acog","anpaq1","m9","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","anpaq1","PipeBomb","PipeBomb","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	model="\d4t_files\models\us\infantry\ranger.p3d";
	hiddenSelections[]={"medic","holster","mic"};
	wounds[]={
		"\d4t_tex\rng\aarm_l.paa","\d4t_tex\rng\aarm_ld.paa",
		"\d4t_tex\rng\arm_r.paa","\d4t_tex\rng\arm_rd.paa",
		"\d4t_tex\rng\body_bk.paa","\d4t_tex\rng\body_bkd.paa",
		"\d4t_tex\rng\body_frt.paa","\d4t_tex\rng\body_frtd.paa",
		"\d4t_tex\rng\foot_bk.paa","\d4t_tex\rng\foot_bkd.paa",
		"\d4t_tex\rng\foot_frt.paa","\d4t_tex\rng\foot_frtd.paa",
		"\d4t_tex\rng\FOOTPOK.paa","\d4t_tex\rng\FOOTPOKd.paa",
		"\d4t_tex\rng\mich_sid.paa","\d4t_tex\rng\mich_sidd.paa",
		"\d4t_tex\rng\mich_tp.paa","\d4t_tex\rng\mich_tpd.paa"
	};
};

class d4t_USA_SF_Ranger_TeamLeader : d4t_USA_SF_Ranger
{//d4t note: there is also a special model for the team leader... this will be done when i have the desire ;)
	displayName="SF Ranger (Team Leader)";
	weapons[]={"m4eotech","anpaq1","m9","Binocular","NVGoggles","Throw","Put"};
};

//d4t add: new class delta ranger (entry)
class d4t_USA_SF_Ranger_Entry : d4t_USA_SF_Ranger
{
	displayName="SF Ranger (Entry)";
	weapons[]={"m4cobra_m203","anpaq1","m9","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","anpaq1","PipeBomb","m406hefr_grenade","m406hefr_grenade","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

//d4t add: new class delta ranger (supporter)
class d4t_USA_SF_Ranger_Support : d4t_USA_SF_Ranger
{
	displayName="SF Ranger (Support)";
	weapons[]={"m249spw_acog","m9","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"200rd556x45mag","200rd556x45mag","200rd556x45mag","200rd556x45mag","PipeBomb","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

//d4t add: new class delta ranger (dmr)
class d4t_USA_SF_Ranger_DMR : d4t_USA_SF_Ranger
{
	displayName="SF Ranger (DMR)";
	weapons[]={"m4spr","anpaq1","m9","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","30rd556x45mag","anpaq1","PipeBomb","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

//Marines
class d4t_USA_Marines_Soldier : d4t_USA_Soldier
{
	vehicleClass="Infantry - Marines";
	hiddenSelections[]={"medic"};
	displayName="Soldier";
	weapons[]={"m16a4apt","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m67","m67","m67","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};

	model="\d4t_files\models\us\infantry\marine.p3d";
	wounds[]={
		"\d4t_tex\mw\arml.paa","\d4t_tex\mw\armld.paa",
		"\d4t_tex\mw\armr.paa","\d4t_tex\mw\armrd.paa",
		"\d4t_tex\mw\babo.paa","\d4t_tex\mw\babod.paa",
		"\d4t_tex\mw\bafo.paa","\d4t_tex\mw\bafod.paa",
		"\d4t_tex\mw\bodyb.paa","\d4t_tex\mw\bodyBd.paa",
		"\d4t_tex\mw\bodyf.paa","\d4t_tex\mw\bodyFd.paa",
		"\d4t_tex\mw\hels.paa","\d4t_tex\mw\helsd.paa",
		"\d4t_tex\mw\helt.paa","\d4t_tex\mw\heltd.paa",
		"\d4t_tex\mw\legp.paa","\d4t_tex\mw\legpd.paa",
		"\d4t_tex\mw\legr.paa","\d4t_tex\mw\legrd.paa"
	};
};

class d4t_USA_Marines_Grenadier : d4t_USA_Marines_Soldier
{
	displayName="Grenadier";
	weapons[]={"m16a4apt_m203","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m406hefr_grenade","m406hefr_grenade","m406hefr_grenade","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

class d4t_USA_Marines_Medic : d4t_USA_Marines_Soldier
{
	picture="\misc\medik.paa";
	cost=60000;
	displayName="Medic";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	attendant=1;
	weapons[]={"m16a4apt","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	nameSound="medic";
};

class d4t_USA_Marines_LMGSoldier : d4t_USA_Marines_Soldier
{
	nameSound="machineGunner";
	displayName="Machine Gunner (Squad Support)";
	cost=60000;
	accuracy=1.5;
	weapons[]={"m249saw_m145","m9","Throw","Put"};
	magazines[]={"200rd556x45mag","200rd556x45mag","200rd556x45mag","200rd556x45mag","m67","m67","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.1,0.8};
};

class d4t_USA_Marines_MGSoldier : d4t_USA_Marines_Soldier
{
	nameSound="machineGunner";
	displayName="Machine Gunner";
	cost=60000;
	accuracy=1.5;
	weapons[]={"m240b_acog","m9","Throw","Put"};
	magazines[]={"100rd762x51mag","100rd762x51mag","100rd762x51mag","100rd762x51mag","100rd762x51mag","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.1,0.8};
};

class d4t_USA_Marines_ATSoldier : d4t_USA_Marines_Soldier
{
	nameSound="missileSoldier";
	nightVision=1;
	displayName="AT Soldier";
	cost=150000;
	accuracy=1.5;
	weapons[]={"m16a4apt","m136at4","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","at4heat","at4heat","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	type=0;
	threat[]={1,0.9,0.1};
};

class d4t_USA_Marines_HATSoldier : d4t_USA_Marines_Soldier
{
	displayName="Heavy AT Soldier";
	nameSound="missileSoldier";
	accuracy=1.5;
	weapons[]={"m16a4apt","fgm148","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","fgm148missile","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.9,0.1};
};

class d4t_USA_Marines_AASoldier : d4t_USA_Marines_Soldier
{
	displayName="AA Soldier";
	nameSound="missileSoldier";
	accuracy=1.5;
	weapons[]={"m16a4apt","fim92a","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","fim92amissile","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.9};
};

class d4t_USA_Marines_Miner : d4t_USA_Marines_Soldier
{
	displayName="Miner";
	canDeactivateMines=1;
	picture="\misc\sapper.paa";
	accuracy=1000;
	weapons[]={"m16a4apt","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","Mine","Mine","Mine","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.1};
};

class d4t_USA_Marines_SquadLeader : d4t_USA_Marines_Soldier
{
	picture="\misc\frcky.paa";
	nameSound="officer";
	displayName="Squad Leader";
	accuracy=2.0;
	cost=500000;
	nightVision=1;
	weapons[]={"m16a4acog","m9","Binocular","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m67","m67","Smokeshell","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
};

//d4t add: new class radio operator
class d4t_USA_Marines_RadioOp : d4t_USA_Marines_Soldier
{
	displayName="Radio Operator";
	weapons[]={"m16a4apt","prc117","m9","Throw","Put"};
	magazines[]={"m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m16a4mag","m67","m67","m67","Smokeshell","15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	threat[]={1,0.5,0.9};
};

//-Misc Troops
class d4t_USA_Crew : d4t_USA_Soldier
{
	animated=1;
	nameSound="crew";
	displayName="Crew";
	vehicleClass="Infantry - Misc";
	weapons[]={"m9","NVGoggles","Throw","Put"};
	magazines[]={"15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag"};
	model="\d4t_files\models\us\infantry\us_crew.p3d";
	wounds[]={
		"\d4t_tex\usi\armL.paa","\d4t_tex\usi\armLd.paa",
		"\d4t_tex\usi\armR.paa","\d4t_tex\usi\armRd.paa",
		"\d4t_tex\usi\baBO.paa","\d4t_tex\usi\BaBOd.paa",
		"\d4t_tex\usi\baFO.paa","\d4t_tex\usi\BaFOd.paa",
		"\d4t_tex\usi\bodyB.paa","\d4t_tex\usi\bodyBd.paa",
		"\d4t_tex\usi\bodyF.paa","\d4t_tex\usi\bodyFd.paa",
		"\d4t_tex\usi\legL.paa","\d4t_tex\usi\legLd.paa",
		"\d4t_tex\usi\legR.paa","\d4t_tex\usi\legRd.paa",
	};
	hiddenSelections[]={"medic"};
};

class d4t_USA_AircraftPilot : d4t_USA_Soldier
{
	vehicleClass="Infantry - Misc";
	nameSound="pilot";
	displayName="Pilot (Aircraft)";
	weapons[]={"m9","NVGoggles","Throw","Put"};
	magazines[]={"15rd9x19mag","15rd9x19mag","15rd9x19mag","15rd9x19mag","Smokeshellred","Smokeshellred","Smokeshellgreen","Smokeshellgreen"};
	model="\d4t_files\models\us\infantry\us_aircraft_pilot.p3d";
	wounds[]={
		"\d4t_tex\pt\ArmGnA.paa","\d4t_tex\pt\ArmGnAD.paa",
		"\d4t_tex\pt\ArmGnB.paa","\d4t_tex\pt\ArmGnBD.paa",
		"\d4t_tex\pt\LegGn.paa","\d4t_tex\pt\LegGnD.paa",
		"\d4t_tex\pt\PilbdyB.paa","\d4t_tex\pt\PilBdyBD.paa",
		"\d4t_tex\pt\PilHel1.paa","\d4t_tex\pt\PilHel1D.paa"
	};
};

class d4t_USA_HelicopterPilot : d4t_USA_AircraftPilot
{
	displayName="Helicopter Pilot";
	hiddenSelections[]={"armpatch_left","armpatch_right","nvg_gear"};
	model="\d4t_files\models\us\infantry\us_helicopter_pilot.p3d";
	wounds[]={
		"\d4t_tex\piloth\arm_l.paa","\d4t_tex\piloth\arm_l_d.paa",
		"\d4t_tex\piloth\arm_r.paa","\d4t_tex\piloth\arm_r_d.paa",
		"\d4t_tex\piloth\back.paa","\d4t_tex\piloth\back_d.paa",
		"\d4t_tex\piloth\chest.paa","\d4t_tex\piloth\chest_d.paa",
		"\d4t_tex\piloth\hgu56p.paa","\d4t_tex\piloth\hgu56p_d.paa",
		"\d4t_tex\piloth\leg_l.paa","\d4t_tex\piloth\leg_l_d.paa",
		"\d4t_tex\piloth\leg_r.paa","\d4t_tex\piloth\leg_r_d.paa",
	};
};

class d4t_USA_Marines_HelicopterPilot : d4t_USA_AircraftPilot
{
	displayName="Helicopter Pilot (USMC)";
	model="\d4t_files\models\us\infantry\marine_helicopter_pilot.p3d";
	wounds[]={
		"\d4t_tex\mw\arml.paa","\d4t_tex\mw\armld.paa",
		"\d4t_tex\mw\armr.paa","\d4t_tex\mw\armrd.paa",
		"\d4t_tex\mw\babo.paa","\d4t_tex\mw\babod.paa",
		"\d4t_tex\mw\bafo.paa","\d4t_tex\mw\bafod.paa",
		"\d4t_tex\mw\bodyb.paa","\d4t_tex\mw\bodyBd.paa",
		"\d4t_tex\mw\bodyf.paa","\d4t_tex\mw\bodyFd.paa",
		"\d4t_tex\mw\hels.paa","\d4t_tex\mw\helsd.paa",
		"\d4t_tex\mw\helt.paa","\d4t_tex\mw\heltd.paa",
		"\d4t_tex\mw\legp.paa","\d4t_tex\mw\legpd.paa",
		"\d4t_tex\mw\legr.paa","\d4t_tex\mw\legrd.paa",
		"\d4t_tex\mw\cvc_hel.paa","\d4t_tex\mw\cvc_held.paa"
	};
};
//---End of Infantry

//---Air | also possible for vehicleClass would be "Vehicles ($type)"
//-Aircrafts
class A10 : Plane //d4t bug -> bombs on bomb ports have mk82 model instead of gbu model
{
	scope=2;
	access=2;
	side=1;
	maxSpeed=1100;
	brakeDistance=450;
	landingspeed=190;
	flapsFrictionCoef=0.14;
	gearRetracting=1;	
	insideSoundCoef=0.01;
    cost=20000000;
	type=2;
    threat[]={0.600000,1,0.900000};
	noseDownCoef=1;
	elevatorSensitivity=1.4;
	aileronSensitivity=1.1;
	wheelSteeringSensitivity=1.3;
	animated=1;
	armor=120;
	accuracy=0.80;
    fuelCapacity=100;
    crew=d4t_USA_AircraftPilot;
	driverAction=ManActA10Pilot;
	vehicleClass="Vehicles (Air)";
    displayName="A-10 Thunderbolt II (USAF)";
	picture="\d4t_files\pics\vehicles\a10_grey.paa";
	model="\d4t_files\models\us\vehicles\a10tb2.p3d";
	soundEngine[]={"\d4t_files\sounds\vehicles\air\a10engine.wav",4,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\air\A10air.wss",db-10,1};
	soundLandCrash[]={"\d4t_files\sounds\vehicles\air\LandingEnd.wav",db+60,1};
	soundGear[]={"",db-75,1};
	weapons[]={d4t_gau8, d4t_agm65b_6, d4t_hydra70_14, d4t_aim9m_2, d4t_gbu12_4};
	magazines[]={d4t_gau8, d4t_agm65b_6, d4t_hydra70_14, d4t_aim9m_2, d4t_gbu12_4};
	hiddenSelections[]={"n1", "n2", "n3", "bas_tailflash_l", "bas_tailflash_r", "bas_taillogo_l", "bas_taillogo_r", "bas_tailnum_l", "bas_tailnum_r", "bas_usaf_l", "bas_usaf_r",	"_aimA", "_aimB", 	"_mavA", "_mavB", "_mavC", "_mavD", "_mavE", "_mavF", "_mk82A", "_mk82B", "_mk82C", "_mk82D"};

	class GunFire : d4t_air_mgun{};
	class GunClouds : d4t_air_mgun{};
	class MGunFire : d4t_air_mgun{};
	class MGunClouds : d4t_air_mgun{};

	class ViewPilot
	{
		initFov=0.8;
		minFov=0.6;
		maxFov=1.0;
		initAngleX=15;
		minAngleX=-15;
		maxAngleX=+25;
        initAngleY=0;
		minAngleY=-100;
		maxAngleY=+100;
	};

	class ReloadAnimations
	{
		class d4t_gau8
		{
			weapon=d4t_gau8;
			angle0=0;
			angle1="-2 * 3.141592654";
			multiplier=5000;
			type=rotation;
			animPeriod=1;
			selection=gau8a;
			begin="usti hlavne";
			end="konec hlavne";
		};
	};
		
	class Reflectors
	{
		class Reflector
		{
			color[]={0.0,0.0,0.0,0.0};
			ambient[]={0.0,0.0,0.0,0.0};
			position=;
			direction=;
			hitpoint=;
			selection="L svetlo";
			size=0.0;
			brightness=0.0;
		};
	};

	class Animations
	{
		class LeftGear
		{
			type="rotation";
			animPeriod=2;
			selection="left wheel";
			axis="axis left wheel";
			angle0=0;
			angle1=1.43;
		};

		class LeftGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="left flap1";
			axis ="axis left flap1";
			angle0 =0;
			angle1 =1.560;
		};
			
		class RightGear
		{
			type ="rotation";
			animPeriod =1.9;
			selection ="right wheel";
			axis ="axis right wheel";
			angle0 =0;
			angle1 =-1.43;
		};

		class RightGearDoor
		{
			type ="rotation";
			animPeriod =1.9;
			selection ="right flap1";
			axis ="axis right flap1";
			angle0 =0;
			angle1 =-1.560;
		};

		class NoseGear
		{
			type ="rotation";
			animPeriod =2.3;
			selection ="nose wheel";
			axis ="axis nose wheel";
			angle0 =0;
			angle1 =1.5;
		};
			
		class NoseGearDoor
		{
			type ="rotation";
			animPeriod =2;
			selection ="nose door2";
			axis ="axis nose door2";
			angle0 =0;
			angle1 =1.477;
		};

		class NoseGearDoor2
		{
			type ="rotation";
			animPeriod =2.3;
			selection ="nose door";
			axis ="axis nose door";
			angle0 =0;
			angle1 =1.40;
		};

		class CanGear
		{
			type ="rotation";
			animPeriod =2;
			selection ="can_gear";
			axis ="axis can_gear";
			angle0 =0;
			angle1 =0.61086;
		};

		class GearW
		{
			type = "rotation";
			animperiod=0.01;
			selection="gearw";
			axis="axis gearw";
			angle0=0;
			angle1=-3.141581;
		};
	};

	class EventHandlers
	{
			init="_this exec ""\d4t_files\FX\scripts\PlaneEngineFX.sqs""; [(_this Select 0)] exec ""\d4t_files\FX\scripts\vehicles\a10\num.sqs""; [_this select 0] exec ""\d4t_files\FX\scripts\vehicles\a10\checkgear.sqs""; [_this select 0, {wa}] exec ""\d4t_files\FX\scripts\vehicles\a10\set_markings.sqs""; [_this select 0] exec ""\d4t_files\FX\scripts\vehicles\a10\drawmissiles.sqs""; _this select 0 animate [""NoseGearDoor2"", 1]; ";
			getout = "[_this] exec ""\d4t_files\FX\scripts\vehicles\eject.sqs""";
			gear="if (_this Select 1) then {[_this select 0] exec""\d4t_files\FX\scripts\vehicles\a10\geardown.sqs""} else {[_this select 0] exec ""\d4t_files\FX\scripts\vehicles\a10\gearup.sqs""}";
			fired="_this exec ""\d4t_files\FX\scripts\MissileFlame.sqs""; [_this] exec ""\d4t_files\FX\scripts\vehicles\a10\firemissiles.sqs""; ";
			incomingMissile=" if ((_this select 0)==(_this select 0)) then {[_this] exec ""\d4t_files\FX\scripts\vehicles\autoflares.sqs""; [_this] exec ""\d4t_files\FX\scripts\vehicles\spoofmissile.sqs""}";
			hit="_this exec ""\d4t_files\FX\scripts\DebrisFly.sqs""";
			killed="[_this select 0] exec ""\d4t_files\FX\scripts\planefire.sqs""";
	};
};

class F16 : A10 //very TODO
{
	scope=2;
	side=1;
	displayName="F-16C Fighting Falcon";
	model="\d4t_files\models\us\vehicles\f16c.p3d";
	/*weapons[]={f16gun,F16aim120,F16aim9,f16mk84,F16MAV};
	magazines[]={f16gun,F16aim120,F16aim9,f16mk84,F16MAV};*/
	picture="\Vit_Isr_F16\pic.paa"; //...missing
	icon="\d4t_files\pics\vehicles\f16c_icon.paa";
	soundEngine[]={"\d4t_files\sounds\vehicles\air\eng1.wav",db30,.85};
	soundDammage[]={"Objects\alarm_loop1",1.200000,1.000000};
	hiddenselections[]={"AIM1201","AIM1202","AIM91","AIM92","MAV1","MAV2","MAV3","MAV4","MAV5","MAV6","GBU1","GBU2"};
	landingAoa = 7*3.1415/180;
	nightVision=1;
	gearRetracting=0;
	crew=d4t_USA_AircraftPilot;
	irTarget=1;
	irScanRangeMin=100;
	irScanRangeMax=5000;
	irScanGround=1;
	driverAction=ManActA10Pilot;
	maxSpeed=1200;
	brakeDistance=150;
	landingspeed=240;
	formationX=20;
	formationZ=2;
	wheelSteeringSensitivity = 3.0;
	ejectSpeed[]={0,40,0};
	aileronSensitivity = .75;
	elevatorSensitivity = 1.3;
	noseDownCoef = 0.4;
	/*dammageHalf[]={"\Vit_Isr_F16\window.paa","\Vit_Isr_F16\window_b.paa","\Vit_Isr_F16\main.pac","\Vit_Isr_F16\main_b.pac"};
	dammageFull[]={"\Vit_Isr_F16\window.paa","\Vit_Isr_F16\window_c.paa","\Vit_Isr_F16\main.pac","\Vit_Isr_F16\main_c.paa"};*/
	fov=0.5;
	precision=200;
	armor=70;
	cost=2000000;
	type=VAir;
	threat[]={0.4, 0.9, 1};
	animated =1;
	insideSoundCoef = 0.001;
	
	/*class GunFire: F16_GunSmoke{};
	class GunClouds: F16_GunSmoke{};
	class MGunFire: F16_GunSmoke{};
	class MGunClouds: F16_GunSmoke{};*/
	
	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-30;
		maxAngleX=+30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=+100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};
	
	class Animations
	{
		class gearR
		{
			type="rotation";
			animperiod=2;
			selection="gearR";
			axis="osa gearR";
			angle0=0;
			angle1=-2.20000;
		};
		
		class gearL
		{
			type="rotation";
			animperiod = 2;
			selection ="gearL";
			axis = "osa gearL";
			angle0=0;
			angle1=2.200000;
		};
		
		class gearA
		{
			type="rotation";
			animperiod=2;
			selection="gearA";
			axis="osa gearA";
			angle0=0;
			angle1=-1.750000;
		};
		
		class doorC
		{
			type="rotation";
			animperiod=5;
			selection="doorC";
			axis="osa doorC";
			angle0=0;
			angle1=-0.39000;
		};
		
		class doorA
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorA";
			axis = "osa doorA";
			angle0 = 0;
			angle1= 1.60;
		};
		
		class doorR
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorR";
			axis = "osa doorR";
			angle0 = 0;
			angle1= -1.60;
		};
		
		class doorL
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorL";
			axis = "osa doorL";
			angle0 = 0;
			angle1= 1.60;
		};
		
		class GA
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GA";
			axis ="axis GA";
			angle0=0;
			angle1=6.28;
		};
		
		class GL
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GL";
			axis ="axis GL";
			angle0=0;
			angle1=6.28;
		};
		
		class GR
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GR";
			axis ="axis GR";
			angle0=0;
			angle1=6.28;
		};
		
		class flammen
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="flammen";
			axis ="flammen";
			angle0=0;
			angle1=3.141581;
		};
		
		class eng1
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng1";
			axis ="eng1";
			angle0=0;
			angle1=0.2;
		};
		
		class eng11
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng11";
			axis ="eng11";
			angle0=0;
			angle1=0.2;
		};
		
		class eng2
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng2";
			axis ="eng2";
			angle0=0;
			angle1=0.2;
		};
		
		class eng22
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng22";
			axis ="eng22";
			angle0=0;
			angle1=0.2;
		};
		
		class eng3
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng3";
			axis ="eng3";
			angle0=0;
			angle1=0.2;
		};
		
		class eng33
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng33";
			axis ="eng33";
			angle0=0;
			angle1=0.2;
		};
		
		class eng4
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng4";
			axis ="eng4";
			angle0=0;
			angle1=0.2;
		};
		
		class eng44
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng44";
			axis ="eng44";
			angle0=0;
			angle1=0.2;
		};
		
		class eng5
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng5";
			axis ="eng5";
			angle0=0;
			angle1=0.2;
		};
		
		class eng55
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng55";
			axis ="eng55";
			angle0=0;
			angle1=0.2;
		};
		
		class eng6
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng6";
			axis ="eng6";
			angle0=0;
			angle1=0.2;
		};
		
		class eng66
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng66";
			axis ="eng66";
			angle0=0;
			angle1=0.2;
		};
		
		class eng7
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng7";
			axis ="eng7";
			angle0=0;
			angle1=0.2;
		};
		
		class eng77
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng77";
			axis ="eng77";
			angle0=0;
			angle1=0.2;
		};
	};
	
	class UserActions
	{
		class LowerLandingGear
		{
			displayName="Gear Down";
			position="main";
			radius=2;
			condition = "this animationPhase ""gearA"" > 0.5 and player in this && (getpos driver this select 2)<50;";
			statement = "[this] exec ""\Vit_Isr_F16\sqs\f16geardn.sqs""";
		};
		
		class RaiseLandingGear
		{
			displayName="Gear Up";
			position="main";
			radius=2;
			condition = "this animationPhase ""gearA"" < 0.5 and player in this && (getpos driver this select 2)>50;";
			statement = "[this] exec ""\Vit_Isr_F16\sqs\f16gearup.sqs""";
		};
		
		class dooropen
		{
			displayName="Close Cockpit Door";
			position="main";
			radius=5;
			condition="this animationPhase ""doorC"" >=0.5 and !isengineon this";
			statement= "[this] exec ""\Vit_Isr_F16\sqs\f16doorclose.sqs""";
		};
		
		class doorclose
		{
			displayName="Open Cockpit Door";
			position="main";
			radius=5;
			condition="this animationPhase ""doorC"" <=0.5 and !isengineon this";
			statement= "[this] exec ""\Vit_Isr_F16\sqs\f16dooropen.sqs""";
		};
		
		class BurnerOff
		{
			displayName="AfterBurner Off";
			position="main";
			radius=3;
			condition="this animationPhase ""flammen"" >=0.5 and isengineon this";
			statement="this animate [""flammen"", 0]";
		};
		
		class BurnerOn
		{
			displayName="AfterBurner On";
			position="main";
			radius=3;
			condition="this animationPhase ""flammen"" <=0.5 and isengineon this";
			statement="this animate [""flammen"", 1],[this] exec ""\Vit_Isr_F16\sqs\f16turbo_on.sqs""";
		};
	};
	
	class EventHandlers
	{
		init = [_this select 0] exec "\Vit_Isr_F16\sqs\f16WEP_C.sqs";
		IncomingMissile = [_this select 0] exec "\Vit_Isr_F16\sqs\f16missile.sqs";
		killed = "_this exec {\Vit_Isr_F16\sqs\f16fire.sqs},_this exec {\Vit_Isr_F16\sqs\F16crash.sqs}";
		hit =[_this select 0] exec "\Vit_Isr_F16\sqs\f16hit.sqs";
		gear="if (_this select 1) then {[_this select 0] exec""\Vit_Isr_F16\sqs\F16Gearup.sqs""} else {[_this select 0] exec ""\Vit_Isr_F16\sqs\F16Geardn.sqs""}";
		fired = " [_this] exec ""\Vit_Isr_F16\sqs\f16wep.sqs"" ";
		engine ="if (_this select 1) then {[_this select 0] exec ""\Vit_Isr_F16\Sqs\F16engineon.sqs""} else {[_this select 0] exec ""\Vit_Isr_F16\Sqs\F16engineoff.sqs""}";
	};
};
//-Helicopters
class AH1W : Helicopter 
{
	picture="\d4t_files\pics\vehicles\ah1w.paa";
	uipicture="\d4t_files\pics\vehicles\ah1w.paa";
    icon="\d4t_files\pics\vehicles\ah1w_icon.paa";
	crew=d4t_USA_Marines_HelicopterPilot;
	scope=2;
	side=1;
	hiddenSelections[]={"n1","n2","miss1","miss2"};
	vehicleClass="Vehicles (Air)";
	displayName="AH-1Z SuperCobra (USMC)";
	nameSound="cobra";
	accuracy=5;
	gunnerUsesPilotView=0;
	driverAction=ManActAH1Pilot;
	gunnerAction=ManActAH1Gunner;
	maxSpeed=170;
	armor=90;
	cost=10000000;
	model="\d4t_files\models\us\vehicles\ah1z1.p3d";
	weapons[]={d4t_m197, d4t_agm114a_8, d4t_hydra70_38, d4t_aim9_2};
	magazines[]={d4t_m197, d4t_agm114a_8, d4t_hydra70_38, d4t_aim9_2};
    rotorBig=vrtule_velka;
	rotorBigBlend=vrtule_velka_blur;
	rotorSmall=vrtule_mala;
	rotorSmallBlend=vrtule_mala_blur;
	type=VAir;
	threat[]={1.0, 0.8, 0.5};
    soundEngine[]={"\d4t_files\sounds\vehicles\air\engine.wav",5,1};

	dammageHalf[]={"\d4t_tex\ah1\window1.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Canopy.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Lside.pac","\d4t_tex\ah1\LsideB.pac","\d4t_tex\ah1\Sside.pac","\d4t_tex\ah1\SsideB.pac"};
	dammageFull[]={"\d4t_tex\ah1\window1.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Canopy.paa","\d4t_tex\ah1\window1b.paa","\d4t_tex\ah1\Lside.pac","\d4t_tex\ah1\LsideC.pac","\d4t_tex\ah1\Sside.pac","\d4t_tex\ah1\SsideC.pac"};

	class ReloadAnimations
	{
		class d4t_m197
		{
			weapon = d4t_m197;
			angle0 = 0;
			angle1 = -2 * 3.141592654;
			multiplier = 500;
			type = rotation;
			animPeriod = 1;
			selection = gatling;
			begin = "usti hlavne";
			end = "konec hlavne";
		};
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-50;
		maxElev=20;
		minTurn=-90;
		maxTurn=90;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret : TurretBase{};

	class EventHandlers
	{//d4t_aim9
		Init="_this exec ""\d4t_files\FX\scripts\vehicles\ah1\AH1num1.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1hit.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1wepcheck.sqs""";
		engine="if (_this select 1) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1engineon.sqs""} else {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1engineoff.sqs""}";
        killed="_this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1fire.sqs""";
        IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1EastCM.sqs},[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1flares.sqs}}";
        fired="_this exec ""\d4t_files\FX\scripts\MissileFlame.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\AH1wep.sqs""; _this exec ""\d4t_files\FX\scripts\vehicles\ah1\ah1wepcheck.sqs""";
        Hit="if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah1\ah1incomming.sqs}}";
	};
};

//d4t res addons apache
class AH64 : Helicopter
{
	side=1;				
	scope=2;
	displayName="AH-64D Apache Longbow";
	model="\d4t_files\models\us\vehicles\ah64d.p3d";
	picture="\d4t_files\pics\ui\ah64pic.paa";
	icon ="\d4t_files\pics\vehicles\ah64icon.paa";
	maxSpeed=400;
	weapons[]={d4t_m230, d4t_agm114l_8, d4t_hydra70_38_pairs, d4t_aim9_4, LaserDesignatorOH};
	magazines[]={d4t_m230, d4t_agm114l_8, d4t_hydra70_38_pairs, d4t_aim9_4, LaserDesignatorOH};
	nameSound="chopper";
	soundEngine[]={"\d4t_files\sounds\vehicles\air\ah64_rotor.wav",9,1};
	insideSoundCoef=0.002;
	vehicleClass="Vehicles (Air)";
	hasGunner=1;
	armor=150;
	audible=2;
	camouflage=1.2;
	hiddenselections[]={"hf1","hf2","hf3","hf4","hf5","hf6","hf7","hf8","hf9","hf10","hf11","hf12","hf13","hf14","hf15","hf16","hudhf1","hudhf2","hudhf3","hudhf4","hudhf5","hudhf6","hudhf7","hudhf8","sting1","sting2","sting3","sting4","hudrckt1","hudrckt2","hfrack1","hfrack2","rocketpod1","rocketpod2","hudhf9","hudhf10","hudhf11","hudhf12","hudhf13","hudhf14","hudhf15","hudhf16","hudrckt3","hudrckt4","hfrack3","hfrack4","stingers","cradar","mapmfd","mfdrdr","mfdtds","mapev","mapma","mapko","mapdi","mapno","mfdarmL","mfdmapL","mfdrdrL","mfdtdsL","horizont","ckfail","ckmarg","lefail","lemarg","refail","remarg","rtfail","rtmarg","tlfail","tlmarg","lwfail","lwmarg","rwfail","rwmarg","cafail","camarg","olfail","olmarg","hyfail","hymarg","rpm","mfdsysLG","units","firedgun","nofrdgun","num","grnnvlgt","maploc","fuel","auxtank"};
	transportSoldier=0;
	accuracy=5;
	driverAction=ManActfz_ah64pilot;
	gunnerAction=ManActfz_ah64gunner;
	enableSweep=1;
	gunnerIsCommander=1;
	gunnerUsesPilotView=0;
	crew=d4t_USA_HelicopterPilot;
	animated=1;
	irScanToEyeFactor = 4;
	irScanRangeMax=8000;
	irScanRangeMin=100;
	laserScanner=1;
	fuelCapacity=110;
	nightVision=1;
	mainRotorSpeed = 1;
	threat[]={0.8,1,0.9};
	armorStructural=2.5;
	armorHull=0.75;
	armorEngine=0.9;
	armorAvionics=1.6;
	armorVRotor=0.75;
	armorHRotor=1.0;
	armorMissiles=1.8;
	armorGlass=1.0;
	gunnerOpticsModel="\d4t_files\optics\optic_ah64_gunner.p3d";
	driverCanSee = CANSEE_RADAR + CANSEE_EYE + CANSEE_OPTICS + CANSEE_EAR;
	gunnerCanSee = CANSEE_ALL;

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={,db-40,1.0};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-60;
		maxElev=+11;
		minTurn=-86;
		maxTurn=+86;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class ViewPilot
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};

	class ViewGunner
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	
	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.7;
		maxFov=0.7;
	};

		
	class ViewOptics: ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.7;
		minFov=0.03;
		maxFov=0.7;
	};

	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=360;
		min=-190;
		max=190;
	};
	
	class Animations
	{
		class DamageWarn
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="damage";
			axis = "osa_damage";
			angle0 = 0;
			angle1= 3.141581;
		};

		class IRJam
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="irjam";
			axis = "osa_irjam";
			angle0 = 0;
			angle1= 3.141581;
		};

		class radarstatus
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="radardash";
			axis = "osa_radardash";
			angle0 = 0;
			angle1= 3.141581;
		};

		class systems
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="systems";
			axis = "osa_systems";
			angle0 = 0;
			angle1= 3.141581;
		};

		class mfdradar1
		{
			type = "rotation";
			animperiod = 5;
			selection ="cradar";
			axis = "osa_cradar";
			angle0 = 0;
			angle1= -3.5;
		};
		
		class pilotdoor1
		{
			type = "rotation";
			animperiod = 2;
			selection ="pilot_door";
			axis = "osa pilot_door";
			angle0 = 0;
			angle1= 1.7;
		};
		
		class gundoor1
		{
			type = "rotation";
			animperiod = 2;
			selection ="gun_door";
			axis = "osa gun_door";
			angle0 = 0;
			angle1= -1.7;
		};

		class rg_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="rg_mfd";
			axis = "osa_rg_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};
			
		class lg_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="lg_mfd";
			axis = "osa_lg_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};
		
		class rp_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="rp_mfd";
			axis = "osa_rp_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class lp_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="lp_mfd";
			axis = "osa_lp_mfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class hstab
		{
			type = "rotation";
			animperiod = 5;
			selection ="hstab";
			axis = "osa_hstab";
			angle0 = 0;
			angle1= 0.5;          
		};

		class firebottles
		{
			type = "rotation";
			animperiod = 1;
			selection ="bottles";
			axis = "osa_bottles";
			angle0 = 0;
			angle1= 0.723597;          
		};

		class firebottles2
		{
			type = "rotation";
			animperiod = 1;
			selection ="bottles2";
			axis = "osa_bottles2";
			angle0 = 0;
			angle1= 0.723597;          
		};

		class leftnavlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="lnlight";
			axis = "osa_lnlight";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightnavlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="rnlight";
			axis = "osa_rnlight";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class leftlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="llght";
			axis = "osa_llght";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightlight
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="rlght";
			axis = "osa_rlght";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class rightgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="rgear";
			axis = "osa_rgear";
			angle0 = 0;
			angle1= -0.296705;          
		};

		class leftgear
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="lgear";
			axis = "osa_lgear";
			angle0 = 0;
			angle1= -0.296705;          
		};

		class tailwheel
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="tailwheel";
			axis = "osa_tailwheel";
			angle0 = 0;
			angle1= -0.261798;          
		};

		class navlightstatus
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="nvlgtsts";
			axis = "osa_nvlgtsts";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class arming1
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="arming";
			axis = "osa_arming";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=-0.109;
		};

		class map_Y
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markery";
			axis="bas_mapyaxis";
			angle0=0;
			angle1=-0.109;
		};

		class fcssensors
		{
			type = "rotation";
			animperiod = 5;
			selection ="fcs_snsr";
			axis = "osa_fcs_snsr";
			angle0 = 0;
			angle1= 1.570790;          
		};

		class pilotwiper
		{
			type = "rotation";
			animperiod = 1;
			selection ="pltwiper";
			axis = "osa_pltwpr";
			angle0 = 0;
			angle1= -0.8;          
		};

		class gunnerwiper
		{
			type = "rotation";
			animperiod = 1;
			selection ="gunwiper";
			axis = "osa_gunwpr";
			angle0 = 0;
			angle1= 0.8;          
		};
		
		class indifuel
		{
			type = "rotation";
			animperiod = 5;
			selection ="fuel";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class tailrtrfail
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="tailrtrfail";
			axis = "osa_tailrtrfail";
			angle0 = 0;
			angle1= 3.141581;
		};

		class crashswitch
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="crashswitch";
			axis = "osa_crashswitch";
			angle0 = 0;
			angle1= 3.141581;
		};

		class altconfig
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="altconfig";
			axis = "osa_altconfig";
			angle0 = 0;
			angle1= 3.141581;
		};
	};

	class UserActions
	{
		class switchpltmfdR
		{
			displayName="Switch Right MFD";
			position="pltaction";
			radius=2;
			condition="driver vehicle this == player";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\switchmfdpr.sqs""";
		};
		/*class artyrequest
		{
			displayName="Request Artillery";
			position="pltaction";
			radius=2;
			condition="driver vehicle this == player && d4t_map_artillery == 1";
			statement="[this] exec ""\d4t_misc\apache\scripting\artillery_click.sqs""";
		};*/
		class frbtls
		{
			displayName="Fire Bottles";
			position="dooraction";
			radius=3;
			condition="this animationPhase ""firebottles2"" == 0 and driver vehicle this == player || this animationPhase ""firebottles2"" == 0 and gunner vehicle this == player";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\bottles.sqs""";
		};
		
		class navlighton
		{
			displayName="Nav Lights On";
			position="pltaction";
			radius=3;
			condition="(daytime <=6 ||daytime >=18) && driver vehicle this == player && this animationPhase ""navlightstatus"" == 0";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\navlgton.sqs""";
		};

		class navlightoff
		{
			displayName="Nav Lights Off";
			position="pltaction";
			radius=3;
			condition="driver vehicle this == player and this animationPhase ""navlightstatus"" == 1";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\ah64\navlgtoff.sqs""";
		};

		//d4t note: i don't know if this will be included... i think not
		/*class guntopilot
		{
			displayName="Take Controls";
			position="gunaction";
			radius=2;
			condition="(!(alive driver this) or (isnull driver this)) && (gunner vehicle this == player) && (local this)";
			statement="player action [{getout},this]; player moveindriver this";
		};*/
	};

	class Eventhandlers
	{
		init="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\initialize.sqs}";
		engine="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\engineon.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\ah64_map.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\ah64_rtrwash.sqs}";
		hit="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\ah64\sysfail.sqs};";
		fired="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\wpnfire.sqs}, [_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\BarrageArea.sqs}, [_this] exec {\d4t_files\FX\scripts\vehicles\ah64\prox.sqs}";
		killed="[_this select 0] exec ""\d4t_files\FX\scripts\vehicles\ah64\crash.sqs"";";
		IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec ""\d4t_files\FX\scripts\vehicles\ah64\CMS.sqs""}";
		GetIn="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\apr39.sqs}";
	};
};

class d4t_AH64_Wreck : AH64
{
	model="\d4t_files\models\us\misc\ah64_wreck.p3d";
	vehicleclass="Objects (D4T)";
	armor=9000000;
	scope=2;
	displayName="AH-64D Wreck";
	picture="\d4t_files\pics\ui\ah64pic.paa";
	icon="\d4t_files\pics\vehicles\ah64icon.paa";
	transportSoldier=4;
	hasDriver=0;
	hasGunner=0;
	maxspeed=0;
	fuelCapacity=0;
	side=4;
	soundEngine[]={"",0,0};
	hiddenselections[]={};
	weapons[]={};
	magazines[]={};
	nameSound="chopper";
	driverAction = ManActUH60Pilot;
	cargoAction[]={ManActfz_ah64pilot,ManActfz_ah64gunner};

	class Eventhandlers{};
};

class OH58 : Helicopter
{
	scope=2;
	side=1;
	vehicleClass="Vehicles (Air)";
	displayName="OH-58D Kiowa Warrior";
	picture="\d4t_files\pics\ui\oh58_pic.paa";
	icon="\d4t_files\pics\vehicles\oh58kw_icon.paa";
	crew=d4t_USA_HelicopterPilot;
	nameSound="chopper";
	accuracy=5;
	gunnerUsesPilotView=1;
	maxSpeed=220;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\oh58rtr1.wav",3.162278,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\air\oh58rtr1.wav",3.162278,1};
	armor=100;
	cost=10000000;
	model="\d4t_files\models\us\vehicles\oh58d.p3d";
	weapons[]={"d4t_hydra70_14","LaserDesignatorOH"};//d4t note: the laser designator...
	magazines[]={"d4t_hydra70_14","LaserDesignatorOH"};
	hasGunner=1;
	transportSoldier=1;
	cargoAction[]={ManActfz_oh58gunner};
	camouflage=1;
	threat[]={0.3,1,0.4};
	hiddenselections[]={"hf1","hf2","hf3","hf4","hfrack1","hfrack2","lstingers","rstingers","rrocketpod","lrocketpod","rocket1","rocket2","rocket3","rocket4","rocket5","rocket6","rocket7","rocket8","rocket9","rocket10","rocket11","rocket12","rocket13","rocket14","m296","door","pylon","door_win","sys_cp","sys_en","sys_rt","sys_tl","sys_lw","sys_rw","sys_ol","sys_hy","bas_markerx","bas_markery","mapev","mapma","mapko","mapdi","mapno","rwr12","rwr1","rwr2","rwr3","rwr4","rwr5","rwr6","rwr7","rwr8","rwr9","rwr10","rwr11","skid","skid_n","arty_amount","so_1","so_2","so_3","so_4","so_5","unit","message","kompas2","vert_speed2","hudhf1","hudhf2","hudhf3","hudhf4","sting1","sting2","sting3","sting4","loal","lhudrkt","rhudrkt","hudgun","vsd_spd1","vsd_spd2","vsd_spd3","nm_alth","horizont"};
	driverAction=ManActfz_oh58plt;
	gunnerAction=ManActfz_oh58gunner;
	enableSweep=1;
	gunnerIsCommander=0;
	gunnerOpticsModel="\d4t_files\optics\optic_ka52.p3d";
	irScanToEyeFactor=4;
	irscanrangemin=100;
	irscanrangemax=5000;
	laserScanner=1;
	fuelCapacity=70;
	type=2;
	
	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={,db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		minElev=-30; maxElev=+30;
		minTurn=-175; maxTurn=+175;
		body = "OtocVez";
		gun = "OtocHlaven";
	};
		
	class ViewPilot
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	
	class ViewGunner
	{
		initFov=0.700000;
		minFov=0.400000;
		maxFov=0.850000;
		initAngleX=0;
		minAngleX=-75;
		maxAngleX=50;
		initAngleY=0;
		minAngleY=-150;
		maxAngleY=150;
	};
	
	class ViewOptics
	{
		initAngleX=0;
		minAngleX=-120;
		maxAngleX=+120;
		initAngleY=0;
		minAngleY=-80;
		maxAngleY=+15;
		initFov=0.3;
		minFov=0.01;
		maxFov=1.0;
	};
	
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -8;
		min = 0;
		max = 12;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = 8;
		min = -20;
		max = 25;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = 46;
		min = -30;
		max = 30;
	};
	
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = 11;
		min = 0;
		max = 61;
	};

	class Animations
	{
		class firebottles
		{
			type = "rotation";
			animperiod = 0.001;
			selection ="firebottles";
			axis = "osa_firebottles";
			angle0 = 0;
			angle1= 3.141581;          
		};

		class p_mfd
		{
			type = "rotation";
			animperiod = 0.0001;
			selection ="p_mfd";
			axis = "osa_pmfd";
			angle0 = 0;
			angle1= 6.283161;
		};

		class indi_fuel
		{
			type = "rotation";
			animperiod = 0.5;
			selection ="indi_fuel";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class oil_temp
		{
			type = "rotation";
			animperiod = 0.7;
			selection ="oil_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class oil_psi
		{
			type = "rotation";
			animperiod = 0.4;
			selection ="oil_psi";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class hyd_temp
		{
			type = "rotation";
			animperiod = 0.7;
			selection ="hyd_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class hyd_psi
		{
			type = "rotation";
			animperiod = 0.4;
			selection ="hyd_psi";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};

		class trans_temp
		{
			type = "rotation";
			animperiod = 0.8;
			selection ="trans_tmp";
			axis = "osa_fuel";
			angle0 = 0;
			angle1= 0.069813;
		};
		
		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=0.109;
		};

		class map_Y
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markery";
			axis="bas_mapyaxis";
			angle0=0;
			angle1=-0.109;
		};
	};

	class UserActions
	{
		class switchpfmd
		{
			displayName="Cycle MFD";
			position="pltaction";
			radius=3;
			condition="driver vehicle this == player";
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\oh58\cycle_pmfd.sqs""";
		};

		/*class artyrequest
		{
			displayName="Request Artillery";
			position="pltaction";
			radius=2
			condition="driver vehicle this == player and fz_artystrikes >= 1";
			statement="[this] exec ""\d4t_misc\apache\scripting\artillery_click.sqs""";
		};*/

		class firebottleson
		{
			displayName="Fire Extinguishers";
			position="doorarea";
			radius=3;
			condition="driver vehicle this == player and this animationPhase ""firebottles"" == 0"; 
			statement="[this] exec ""\d4t_files\FX\scripts\vehicles\oh58\bottles.sqs""";
		};
	};

	class Eventhandlers
	{
		init="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\initialize58D.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\so.sqs};";
		engine="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\oh58_map.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\oh58_engani.sqs}, [_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\oh58_rtrwash.sqs}";
		fired="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\oh58\wpnfire_oh.sqs}, [_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\BarrageArea.sqs}, [_this] exec {\d4t_files\FX\scripts\vehicles\ah64\prox.sqs};";
		IncomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec ""\d4t_files\FX\scripts\vehicles\oh58\CMS.sqs""};";
		Killed="[_this select 0] exec {\d4t_files\FX\scripts\vehicles\oh58\oh58_crash.sqs};";
		GetIn="[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\ah64\apr39.sqs}";
	};
};

class OH58_Wreck : OH58
{
	model="\d4t_files\models\us\misc\oh58d_wreck.p3d";
	vehicleclass="Objects (D4T)";
	displayName="OH-58D Wreck";
	picture="\d4t_files\pics\ui\oh58_pic.paa";
	icon="\d4t_files\pics\vehicles\oh58kw_icon.paa";
	armor=9000000;
	scope=1;
	transportSoldier=2;
	hasDriver=0;
	maxspeed=50;
	side=4;
	soundEngine[]={"",0,0};
	hiddenselections[]={"skid"};
	weapons[]={};
	magazines[]={};
	fuelCapacity=50;
	nameSound="chopper";
	driverAction = ManActUH60Pilot;
	cargoAction[]={"ManActfz_oh58plt","ManActfz_oh58gunner"};
};

class UH60 : Helicopter
{
	scope=2;
	enableSweep=0;
	crew=d4t_USA_HelicopterPilot;
	vehicleClass="Vehicles (Air)";
	picture="iuh60";
	maxSpeed=270;
	side=1;
	displayName="UH-60A DAP Black Hawk";
	nameSound="blackhawk";
	accuracy=0.3;
	armor=70;
	cost=10000000;
	mainRotorSpeed=-1;
	model="\d4t_files\models\us\vehicles\uh60a.p3d";
	rotorBig="vrtule_uh_v";
	rotorBigBlend="vrtule_uh_v_bl";
	rotorSmall="vrtule_uh_m";
	rotorSmallBlend="vrtule_uh_m_bl";
	weapons[]={d4t_hydra70_38};
	magazines[]={d4t_hydra70_38};
	driverAction="ManActUH60Pilot";
	gunnerAction="ManActUH60Pilot";
	dammageHalf[]={"\d4t_tex\uh60\ps_sklo.paa","\d4t_tex\uh60\ps_sklo2.paa","\d4t_tex\uh60\zp_sklo.paa","\d4t_tex\uh60\zp_sklo2.paa","\d4t_tex\uh60\po_sklo.paa","\d4t_tex\uh60\po_sklo2.paa","\d4t_tex\uh60\pp_sklo.paa","\d4t_tex\uh60\pp_sklo2.paa"};
	dammageFull[]={"\d4t_tex\uh60\ps_sklo.paa","\d4t_tex\uh60\ps_sklo3.paa","\d4t_tex\uh60\zp_sklo.paa","\d4t_tex\uh60\zp_sklo3.paa","\d4t_tex\uh60\po_sklo.paa","\d4t_tex\uh60\po_sklo3.paa","\d4t_tex\uh60\pp_sklo.paa","\d4t_tex\uh60\pp_sklo3.paa"};
	gunnerUsesPilotView=1;
	transportSoldier=12;
	transportAmmo=0;
	transportMaxMagazines=150;
	transportMaxWeapons=30;
	initCargoAngleY=10;
	minCargoAngleY=-60;
	maxCargoAngleY=120;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\uh60_rotors.wss",3.162278,1.500000};
	type=2;
	hasGunner=1;
	hiddenSelections[]={"cis1","cis2","cis3","cis4","cis5","zasleh2","offline"};
	steerAheadSimul=2.0;
	steerAheadPlan=2.0;
	threat[]={0.3,1,0.4};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

	class IndicatorAltRadar
	{
		selection="alt";
		axis="osa_alt";
		angle=-360;
		min=0;
		max=304;
	};
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -320;
		min = 0;
		max = 12;
	};
	class IndicatorAltRadar2
	{
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro2
	{
		selection = "nm_alt2";
		axis = "osa_nm_alt2";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed2
	{
		selection = "mph2";
		axis = "osa_mph2";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM2
	{
		selection = "rpm2";
		axis = "osa_rpm2";
		angle = -320;
		min = 0;
		max = 12;
	};

	class Reflectors
	{
		class FLeft
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=1.0;
		};
		class FRight
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.5;
			brightness=1.0;
		};
		class BLeft
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="LZ svetlo";
			direction="konec LZ svetla";
			hitpoint="LZ svetlo";
			selection="LZ svetlo";
			size=0.5;
			brightness=1.0;
		};
		class BRight
		{
			color[]={0.8,0.8,1.0,1.0};
			ambient[]={0.07,0.07,0.07,1.0};
			position="PZ svetlo";
			direction="konec PZ svetla";
			hitpoint="PZ svetlo";
			selection="PZ svetlo";
			size=0.5;
			brightness=1.0;
		};
	};

	class Animations
	{
		class PP_kolo
		{
			type="rotation";
			animPeriod=0.3;
			selection="L_pruzeni";
			axis="osa_PK";
			angle0=0;
			angle1=-0.03;
		};
		class LP_kolo
		{
			type="rotation";
			animPeriod=0.3;
			selection="P_pruzeni";
			axis="osa_PK";
			angle0=0;
			angle1=-0.03;
		};

		class Z_kolo
		{
				type="rotation";
				animPeriod=0.3;
				selection="Z_pruzeni";
				axis="osa_ZK";
				angle0=0;
				angle1=-0.2;
		};
	};
};

class UH60MG : UH60
{
	displayName="MH-60L Black Hawk";
	nameSound="blackhawk";
	icon="\d4t_files\pics\vehicles\mh60_icon.pac";
	steerAheadSimul=2.0;
	steerAheadPlan=2.0;
	fuelCapacity=220;
	accuracy=0.3;
	scope=2;
	irScanRange=2000;
	nightVision=1;
	model="\d4t_files\models\us\vehicles\mh60l.p3d";
	minFireTime=30;
	rotorBig="vrtule_uh_v";
	rotorBigBlend="vrtule_uh_v_bl";
	rotorSmall="vrtule_uh_m";
	rotorSmallBlend="vrtule_uh_m_bl";
	mainRotorSpeed = 1;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\uh60_rotors.wss",3.162278,1.500000};
	driverAction="ManActUH60Pilot";
	commanderAction="ManActUH60Pilot";
	cargoAction[]={"ManActCargo","ManActBAS_MH60Cargo2","ManActBAS_MH60Cargo3","ManActBAS_MH60Cargo4","ManActBAS_MH60Cargo5","ManActBAS_MH60Cargo6","ManActBAS_MH60Cargo7","ManActBAS_MH60Cargo8","ManActBAS_MH60Cargo9","ManActBAS_MH60Cargo10","ManActBAS_MH60Cargo11","ManActBAS_MH60Cargo12"};
	driverCanSee=31;
	GunnerCanSee=31;
	gunnerAction="ManActBAS_MH60Gunner";
	gunnerOpticsModel="optika_empty";
	hasGunner=1;
	weapons[]={d4t_m134};
	magazines[]={d4t_m134};
	crew=d4t_USA_HelicopterPilot;
	picture="iuh60";
	maxSpeed=270;
	side=1;
	armor=80;
	cost=10000000;
	transportSoldier=12;
	type=VAir;
	threat[]={1,0.05,0.05};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
	hiddenSelections[] = {"bas_map","bas_mapev","bas_mapma","bas_mapko","bas_mapdi","bas_mapno","bas_mapid","bas_mapli"};

	class ReloadAnimations
	{
		class d4t_m134
		{
			weapon = d4t_m134;
			angle0 = 0;
			angle1 = -2 * 3.141592654;
			multiplier = 1000;
			type = rotation;
			animPeriod = 1;
			selection = gatling;
			begin="usti hlavne";
			end="konec hlavne";
		};
	};

	class ViewGunner:ViewGunnerBase
	{
		initAngleY=90;
		minAngleY=30;
		maxAngleY=150;
		initAngleX=0;
		minAngleX=-42;
		maxAngleX=5;
	};

	class Turret:TurretBase
	{
		minElev=-42;
		maxElev=5;
		minTurn=30;
		maxTurn=150;
		soundServo[]={"",0.01,1.0};
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="osaveze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-360;
		maxElev=40;
		minTurn=-110;
		maxTurn=110;
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Reflectors
	{
		class Left
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 1.0;
		};
		class Right
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 0.5;
			brightness = 1.0;
		};
	};
	dammageHalf[]={"\d4t_tex\mh60\bas60_glass.paa","\d4t_tex\mh60\bas60_glassb.paa"};
	dammageFull[]={"\d4t_tex\mh60\bas60_glass.paa","\d4t_tex\mh60\bas60_glassc.paa"};
		
	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -320;
		min = 0;
		max = 12;
	};
	class IndicatorAltRadar2
	{
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro2
	{
		selection = "nm_alt2";
		axis = "osa_nm_alt2";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed2
	{
		selection = "mph2";
		axis = "osa_mph2";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM2
	{
		selection = "rpm2";
		axis = "osa_rpm2";
		angle = -320;
		min = 0;
		max = 12;
	};
	animated=1;
	class Animations
	{
		class sidedoorl
		{
			type="rotation";
			animPeriod=1;
			selection="sidedoorl";
			axis="axissidedoorl";
			angle0=0.161;
			angle1=0;
		};
		class sidedoorr
		{
			type="rotation";
			animPeriod=1;
			selection="sidedoorr";
			axis="axissidedoorr";
			angle0=-0.161;
			angle1=0;
		};
		class pilotdoorl
		{
			type="rotation";
			animPeriod=1;
			selection="pilotdoorl";
			axis="axispilotdoorl";
			angle0=0;
			angle1=-1.22;
		};
		class pilotdoorr
		{
			type="rotation";
			animPeriod=1;
			selection="pilotdoorr";
			axis="axispilotdoorr";
			angle0=0;
			angle1=1.22;
		};
		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=-0.109;
		};
		class map_Y
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markery";
			axis="bas_mapyaxis";
			angle0=0;
			angle1=-0.109;
		};

		class switch3LLight
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch0";
			axis="axisswitch0";
			angle0=0;
			angle1=-1;
		};
		class switch1FRope
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch1";
			axis="axisswitch1";
			angle0=0;
			angle1=-1;
		};
		class switch2Pickup
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch2";
			axis="axisswitch2";
			angle0=0;
			angle1=-1;
		};
		class switch4CLight
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch3";
			axis="axisswitch3";
			angle0=0;
			angle1=-1;
		};
		class tail1
		{
			type="rotation";
			animPeriod=1.5;
			selection="bas-tail";
			axis="axistail";
			angle0=0.785;
			angle1= 0;
		};
	};
	class UserActions
	{
		class FastRoperemote
		{
			displayName="Fast Rope Insertion (A)";
			position="axisswitch1";
			radius=5;
			condition="(getpos this select 2)>3 && (player in this) && (driver this != player) && (this animationPhase {switch1FRope} ==1) && !(local this) && (player != leader group player) && (this animationphase {switch2Pickup} <= 0.456)";
			statement="[this,player] exec {\d4t_files\FX\scripts\vehicles\mh60l\rappel.sqs}";
		};
		class FastRoperemoteplusAI
		{
			displayName="Fast Rope Insertion (B)";
			position="axisswitch1";
			radius=5;
			condition="(getpos this select 2)>5 && (player in this) && (driver this != player) && (this animationPhase {switch1FRope} ==1) && !(local this) && (player == leader group player) && (this animationphase {switch2Pickup}<= 0.456)";
			statement="[this,player] exec {\d4t_files\FX\scripts\vehicles\mh60l\rappel2.sqs}";
		};
		class MapFastRope
		{
			displayName="Fast Rope Insertion (C)";
			position="axisswitch1";
			radius=2000;
			condition="(player != driver this) && (getpos this select 2)>5 && (this animationPhase {switch1FRope} ==0) && (player == leader this) && (local this) && (count ((units group player) - (crew this)) < count (((units group player) - [driver this]) - [gunner this])) && this animationphase {switch2Pickup}<= 0.456";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\maprappel.sqs}; this animate [{switch1Frope}, 0.9] ";
		};
		class MapFastRopeNonGroup
		{
			displayName="Fast Rope Insertion (D)";
			position="axisswitch1";
			radius=2000;
			condition="(player != driver this) &&(getpos this select 2)>3 && (player == leader group player) && (group this != group player) && (count ((units group player) - (crew this)) < count (((units group player) - [driver this]) - [gunner this]))&& (this animationPhase {switch1FRope} ==0) && (gunner this != player) && (this animationphase {switch2Pickup}<= 0.456)&&(local this)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\maprappel.sqs}; this animate [{switch1FRope}, 0.9]";
		};
		class PlayerdriverRope
		{
			displayName="Fast Rope Insertion (For Troops in Cargo)";
			position="axisswitch1";
			radius=5;
			condition="(player == leader group player) && (player == driver this) && (this animationPhase {switch1FRope} ==1) && (count (crew this) >2) && (this animationPhase {switch2pickup}<= 0.456)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\ALLROPE.sqs}";
		};
		class cancelfastrope
		{
			displayName="Cancel Fast Rope Insertion";
			position="axisswitch1";
			radius=1000;
			condition="(player == leader group this or (player == leader group player && player in this)) && (this animationPhase {switch1FRope} ==0.9) && (local this)";
			statement="this animate [{switch1FRope}, 0]";
		};
		class 60HoldPos
		{
			displayName="Hold Position (For Fast Roping & Pickup)";
			position="axisswitch1";
			radius=5;
			condition="(abs(speed this)<50) &&(getpos this select 2)<30 && ((getpos this select 2)>5) && (player == driver this) && (this animationphase {switch1FRope} == 0) && (local this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\holdpos.sqs};this animate [{switch1FRope}, 0.95]";
		};
		class 60CancelHoldPos
		{
			displayName="Cancel Hold Position";
			position="axisswitch1";
			radius=5;
			condition="(player == driver this) && (this animationphase {switch1FRope} == 0.95 || this animationphase {switch1FRope} == 1) && (local this)";
			statement="this animate [{switch1FRope}, 0]";
		};
		class 60FastLANDER
		{
			displayName="ORDER: Land MH60L";
			position="axisswitch1";
			radius=5;
			condition="(player in this)&&((getpos this select 2)>5) && (isengineon this) &&  (player == leader this) && !(player == driver this) && (this animationPhase {switch1FRope} == 0) && (this animationphase {switch2Pickup}<= 0.1) && (local this)";
			statement="commandstop this; this land {land}";
		};
		class 60Pickupday
		{
			displayName="RADIO: MH60L Extraction";
			position="axisswitch1";
			radius=100000;
			condition="(daytime >5 && daytime <18)&& (local this) && ((player distance this) >50) && (player == leader group this) &&(vehicle player == player)&& (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1)&& !(isnull driver this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastext.sqs}";
		};
		class 60Pickupnight
		{
			displayName="RADIO: MH60L Extraction";
			position="axisswitch1";
			radius=100000;
			condition="(daytime <=5 ||daytime >=18)&& (local this) && ((player distance this) >50) && (player == leader group this) &&(vehicle player == player)&& (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1)&& !(isnull driver this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastnightext.sqs}";
		};
		class Dropoff
		{
			displayName="Rapid Insertion";
			position="axisswitch1";
			radius=5;
			condition="((getpos driver this select 2)>30) && (isengineon this) && (player == leader group this) && (player in this) &&  (driver this != player) && (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1) && (local this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastins.sqs}; this animate [{switch1Frope}, 0.9] ";
		};
		class 60NewGunner
		{
			displayName="Mount Door Gun";
			position="axisswitch1";
			radius=4;
			condition="(driver this != player) && (!(alive gunner this) or (isnull gunner this)) && (player in this) && (local this)";
			statement="this say ""BAS_60Buckle"";player action [{getout},this]; player moveingunner this";
		};
		class 60gunnertocargo
		{
			displayName="Move to Cargo Seat";
			position="axisswitch1";
			radius=5;
			condition="(gunner this == player) && (local this) && ((count crew this) <= 10)";
			statement="this say ""BAS_60Buckle"";player action [{getout},this]; player moveincargo this";
		};
		class 60DropRopeLadder
		{
			displayName="Lower Rope Ladder";
			position="axisswitch1";
			radius=5;
			condition="(driver this == player) && (this animationphase {switch1FRope} ==1) && (this animationphase {switch2Pickup} == 0)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\ladder.sqs};this animate [{switch2Pickup},1]";
		};
		class 60RaiseRopeLadder
		{
			displayName="Raise Rope Ladder";
			position="axisswitch1";
			radius=5;
			condition="(driver this == player) && (this animationphase {switch2Pickup} == 1)";
			statement="this animate [{switch2Pickup},0]";
		};
		class 60LadderPickupAI
		{
			displayName="ORDER: Board MH60L (AI)";
			position="axisswitch1";
			radius=1000000;
			condition="(player == driver this) && (this animationphase {switch1FRope} ==1) && (this animationphase {switch2Pickup} == 1) && (player == leader group player)&& count((units group player)-(crew this))>=1";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\AIboard.sqs}";
		};
			class 60ClamberAboard
		{
			displayName="CLIMB ABOARD MH60L";
			position="axisswitch1";
			radius=5;
			condition="!(player in this) && (this animationphase {switch2Pickup} == 1)&& ((player distance this) < 4.5)";
			statement="player moveincargo this";
		};
		class 60Roofrescue
		{
			displayName="RADIO: MH60L Ladder Evac.";
			position="axisswitch1";
			radius=1000000;
			condition="(vehicle player == player)&&(alive driver this) && (local this) && !(player in this)&& (player == leader this) && (this animationphase {switch1FRope}==0) && (this animationphase {switch2Pickup} == 0) && ((player distance this)>20)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\roofpickup.sqs};this animate [{switch2Pickup},0.5]";
		};
		class 60CANCELRoofrescue
		{
			displayName="Cancel Ladder Evac.";
			position="axisswitch1";
			radius=1000000;
			condition="!(player == driver this) && (local this) && (player == leader this) && (this animationphase {switch2Pickup} >= 0.5)";
			statement="this animate [{switch2Pickup},0]";
		};
		class 60CabinLightON
		{
			displayName="Cabin Light ON";
			position="axisswitch1";
			radius=5;
			condition=" (daytime <=6 ||daytime >=18)  && (player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch4CLight} == 0)";
				statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\Cabin.sqs};this animate [{switch4CLight},1]";
		};
		class 60CabinLightOFF
		{
			displayName="Cabin Light OFF";
			position="axisswitch1";
			radius=5;
			condition="(player in this)&&((player == driver this) ||(player == leader group player))&& (this animationPhase {switch4CLight}==1)";
			statement="this animate [{switch4CLight},0]";
		};
		class 60LandingLightON
		{
			displayName="Landing Light ON";
			position="axisswitch1";
			radius=5;
			condition="(daytime <=6 ||daytime >=18)  && (player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch3LLight} == 0) && (getpos this select 2)<40 && (speed this)<100";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\Landing.sqs};this animate [{switch3LLight},1]";
		};
		class 60LandingLightOFF
		{
			displayName="Landing Light OFF";
			position="axisswitch1";
			radius=5;
			condition="(player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch3LLight} == 1)";
			statement="this animate [{switch3LLight},0];this action [{light off}] ";
		};
	};

	class EventHandlers
	{
		init="_this select 0 exec {\d4t_files\FX\scripts\vehicles\mh60l\BAS_60init.sqs}";
		engine="if (_this select 1) then {[_this select 0] exec {\d4t_files\FX\scripts\vehicles\mh60l\BAS_global.sqs}}";
		incomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec {\d4t_files\FX\scripts\vehicles\mh60l\EastCM.sqs},[_this] exec {\d4t_files\FX\scripts\vehicles\mh60l\WestCM.sqs},[_this select 0] exec {\d4t_files\FX\scripts\vehicles\mh60l\flares.sqs}}";
		fired="if (_this select 1=={BAS_60M134}) then {_this exec {\d4t_files\FX\scripts\vehicles\mh60l\brasspos.sqs}}";
		hit="if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\mh60l\Jammer.sqs}}";
		getin="_this exec {\d4t_files\FX\scripts\vehicles\mh60l\openDoors.sqs}";
		killed="_this exec {\d4t_files\FX\scripts\vehicles\mh60l\fire.sqs}";
	};
};
//---End of Air

//---Cars
class HMMWV : Car
{
	scope=2;
	vehicleClass="Vehicles (Cars)";
	crew=d4t_USA_Soldier;
	picture="\d4t_files\pics\vehicles\hmmwv.paa";
	maxspeed=89;
	side=1;
	displayName="HMMWV";
	nameSound="jeep";
	accuracy=0.5;
	armor=80;
	fuelcapacity=250;
	transportSoldier=3;
	transportAmmo=0;
	model="\d4t_files\models\us\vehicles\hmmwv.p3d";
	hideUnitInfo=0;
	terrainCoef=1.4;
	turnCoef=4.0;
	unloadInCombat=1;
	hiddenSelections[]={"mrk1","mrk2","for"};
	unitInfoType="UnitInfoCar";
	driverAction="ManActJeepDriver";
	cargoAction[]={"ManActJeepCoDriver","ManActJeepCoDriverBack"};
	cargoIsCoDriver[]={1,0};
	insideSoundCoef=0.3;
	type="VArmor";
	threat[]={0.5,0.5,0.1};
	cost=100000;
	armorGlass=0.5;
	armorWheels=0.4;
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\Hummer_Idle.wav","db-25",1.25};
	soundGetIn[]={"\d4t_files\sounds\vehicles\surface\getin.ogg",0.000716,1};
	soundGetOut[]={"\d4t_files\sounds\vehicles\surface\getout.ogg",0.000716,1};
	soundCrash[]={"\d4t_files\sounds\vehicles\surface\crash.wss","db-20",1};
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","Officer"};
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1b.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2b.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1c.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2c.paa"};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=40;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-240;
		min=0;
		max=1;
	};

	class EventHandlers
	{
		init="_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_init.sqs}}";
	};
};

class HMMWV_M2 : HMMWV
{
	displayName="HMMWV M2";
	picture="\d4t_files\pics\vehicles\hmmwv_m2.paa";
	model="\d4t_files\models\us\vehicles\hmmwv_m2.p3d";
	gunnerAction="ManActM113gunner";
	unitInfoType="UnitInfoSoldier";
	hiddenSelections[]={"mrk1","mrk2","for","bullet1","bullet2","bullet3"};
	gunnerOpticsModel="optika_empty";
	viewGunnerInExternal=1;
	ejectDeadGunner=0;
	castGunnerShadow=1;
	driverIsCommander=1;
	outGunnerMayFire=1;
	hasGunner=1;
	irScanRangeMin=50;
	irScanRangeMax=2000;
	irScanToEyeFactor=5;
	irScanGround=1;
	type="VArmor";
	threat[]={0.8,0.2,0.6};
	weapons[]={d4t_m2hmg};
	magazines[]={d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};
	animated=1;

	class ViewGunner
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX="+30";
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewOpticsBase{};

	class ViewOptics:ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-30;
		maxAngleX=80;
		initAngleY=0;
		minAngleY=-180;
		maxAngleY=180;
		initFov=0.3;
		minFov=0.3;
		maxFov=0.3;
	};

	class Turret
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-5;
		maxElev=40;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Animations
	{
		class gun_recoil
		{
			type="rotation";
			animperiod=0.01;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1="-0.00073";
		};

		class ani_bullet1
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet1";
			axis="osa bullet1";
			angle0=0;
			angle1=2.2;
		};

		class ani_bullet2
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet2";
			axis="osa bullet2";
			angle0=0;
			angle1=2.2;
		};
		
		class ani_bullet3
		{
			type="rotation";
			animPeriod=0.2;
			selection="bullet3";
			axis="osa bullet3";
			angle0=0;
			angle1=2.2;
		};
	};

	class EventHandlers
	{
		init="_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_init.sqs}}";
		fired="(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\hmmwv\mg.sqs"", _this select 1];[_this select 0] exec  ""\d4t_files\FX\scripts\vehicles\hmmwv\CBT_shot.sqs""; _this call loadFile {\d4t_files\FX\scripts\MGbullet.sqf}";
	};

	class MGunClouds : WeaponCloudsMGun{};
};

class HMMWV_Ambulance : HMMWV
{
	scope=2;
	side=1;
	hideUnitInfo=0;
	fuelcapacity=250;
	maxspeed=89;
	terrainCoef=1.4;
	turnCoef=4.0;
	unitInfoType="UnitInfoCar";
	driverAction="ManActJeepDriver";
	insideSoundCoef=0.3;
	unloadInCombat=1;
	armor=80;
	type="VArmor";
	cost=100000;
	armorGlass=0.5;
	armorWheels=0.4;
	picture="\d4t_files\pics\vehicles\hmmwv_ambulance.paa";
	crew=d4t_USA_Medic;
	icon="Ambulance_move";
	nameSound="ambulance";
	attendant=1;
	hiddenSelections[]={"mrk1","mrk2","for","recog"};
	displayName="HMMWV Ambulance";
	model="\d4t_files\models\us\vehicles\hmmwv_ambulance.p3d";
	weapons[]={};
	magazines[]={};
	hasGunner=0;
	transportSoldier=5;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	cargoAction[]={"ManActJeepCoDriver","ManActCargo"};
	cargoIsCoDriver[]={1,0,0,0,0};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	dammageHalf[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1b.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2b.paa"};
	dammageFull[]={"jeep_kab_sklo1.paa","jeep_kab_sklo1c.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2c.paa"};

	class EventHandlers
	{
		init="_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_HMMWV_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\hmmwv\CBT_init.sqs}}";
	};
};

class Truck5t : Truck
{
	scope=2;
	crew=d4t_USA_Soldier;
	picture="itruck5t";
	vehicleClass="Vehicles (Cars)";
	icon="truck";
	model="\d4t_files\models\us\vehicles\5t_woodland.p3d";
	hiddenSelections[]={"ammo"};
	side=1;
	displayName="5t Truck";
	accuracy=0.3;
	fuelCapacity=200;
	transportSoldier=12;
	driverAction="ManActTruck5tDriver";
	cargoAction[]={"ManActTruck5tCoDriver","ManActTruck5tCoDriver","ManActCargo"};
	cargoIsCoDriver[]={1,1,0};
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	camouflage=5;
	weapons[]={"TruckHorn"};
	magazines[]={};
	wheelCircumference=4.513;
	turnCoef=6.0;
	maxSpeed=90;
	cost=65000;
	armorGlass=5.500000;
	armor=25;
	armorWheels=0.400000;
	initCargoAngleY=185;
	soundEngine[]={"Vehicles\dieseltruckloop2",0.5,1};
	soundGear[]={"\d4t_files\sounds\vehicles\surface\Gear_2.wav",db-45,0.7};
	soundGetIn[]={"\d4t_files\sounds\vehicles\surface\getin.ogg",0.000716,1};
    soundGetOut[]={"\d4t_files\sounds\vehicles\surface\getout.ogg",0.000716,1};
    soundCrash[]={"\d4t_files\sounds\vehicles\surface\crash.wss",db-20,1};
	insideSoundCoef=1;
	typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

	class TransportMagazines
	{
		class _xx_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=20;
		};

		class _xx_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=3;
		};

		class _xx_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=5;
		};

		class _xx_d4t_m67
		{
			magazine=d4t_m67;
			count=6;
		};

		class _xx_d4t_at4heat
		{
			magazine=d4t_at4heat;
			count=3;
		};

		class _xx_d4t_m406hefr_grenade
		{
			magazine=d4t_m406hefr_grenade;
			count=4;
		};
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-210;
		min=0;
		max="100 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-220;
		min=0;
		max=1;
	};
};

class Truck5tOpen : Truck5t
{
	model="\d4t_files\models\us\vehicles\5t_open_woodland.p3d";
	hiddenSelections[]={};
	camouflage=3;
	displayName="5t Truck open";
	accuracy=1000;
	cost=69000;
};

class Truck5tRepair : Truck5t
{
	picture="itruck5trepair";
	icon="Repair_move";
	displayName="5t Truck Repair";
	accuracy=0.9;
	transportSoldier=2;
	transportRepair=200000000;
	model="\d4t_files\models\us\vehicles\5t_repair_woodland.p3d";
	camouflage=4;
	hiddenSelections[]={};
	type=0;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	cost=77000;
};

class Truck5tReammo : Truck5t
{
	icon="Ammo_move";
	displayName="5t Truck Ammo";
	accuracy=0.9;
	transportSoldier=2;
	transportAmmo=300000;
	model="\d4t_files\models\us\vehicles\5t_woodland.p3d";
	hiddenSelections[]={};
	cost=80000;
	camouflage=4;
	type=0;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};

	class TransportMagazines
	{
		class _xx_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=40;
		};

		class _xx_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=10;
		};

		class _xx_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=20;
		};

		class _xx_d4t_m67
		{
			magazine=d4t_m67;
			count=30;
		};

		class _xx_d4t_at4heat
		{
			magazine=d4t_at4heat;
			count=10;
		};

		class _xx_d4t_m406hefr_grenade
		{
			magazine=d4t_m406hefr_grenade;
			count=15;
		};
	};
};	

class Truck5tRefuel : Truck5t
{
	picture="iTruck5tfuel";
	icon="Fuel_move";
	displayName="5t Truck Fuel";
	nameSound="truck";
	accuracy=0.8;
	transportFuel=3000;
	transportSoldier=2;
	transportAmmo=0;
	model="\d4t_files\models\us\vehicles\5t_fuel_woodland.p3d";
	hiddenSelections[]={};
	type=0;
	threat[]={0.0,0.0,0.0};
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	cost=78000;
	camouflage=3;

	class EventHandlers
	{
		killed = "([_this select 0]) exec {\d4t_files\FX\scripts\FuellEffect\Init.sqs}";
	};
};


//---Armored
class M1A1 : Tank
{
	scope=2;
	vehicleClass="Vehicles (Armored)";
	crew="SoldierWCrew";
	picture="iabrams";
	side=1;
	displayName="M1A1";
	nameSound="Abrams";
	accuracy=0.4;
	armor=950;
	armorStructural=2.0;
	armorHull=0.59;
	armorTurret=0.96;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	cost=4000000;
	maxSpeed=72;
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\m1treads.ogg",1,1};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\m1engine.ogg",0.5,2};
	model="\d4t_files\models\us\vehicles\m1a1.p3d";
	weapons[]={d4t_m256_120mmGun, d4t_m240_coax, d4t_m2hmg};//heat
	magazines[]={d4t_120mm_apfsds_40, Shell120, d4t_m240_coax, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};
	gunnerAction="ManActM1A1Gunner";
	gunnerInAction="ManActM1A1Gunner";
	driverAction="ManActM1A1DriverOut";
	driverInAction="ManActM1A1Driver";
	commanderAction="ManActM1A1CommanderOut";
	commanderInAction="ManActM1A1Commander";
	type=1;
	threat[]={0.900000,0.950000,0.500000};
	wheelCircumference=8.513000;
	laserscanner=1;
	laserscanrange=3333;
	irscanner=1;
	irscanrange=3333;
	gunnercansee="31";
	driverCanSee=31;

	class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
	class HitHull {armor=0.59;material=50;name=hull;passThrough=1;};
	class HitTurret {armor=0.96;material=51;name=turet;passThrough=1;};
	class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
	class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
	class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

    class HatchCommander
	{
		selection = "poklop_commander";
		axis = "osa_poklop_commander";
		angle = 165;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="80 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-270;
		min=0;
		max=1;
	};
	
	class TurretBase 
    {
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\m1turret.ogg",0.08,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-5;
		maxElev=42;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
    };
	
	class Turret: TurretBase 
    {
		model="\d4t_files\models\us\vehicles\m1a1.p3d";
		weapons[]={d4t_m256_120mmGun, d4t_m240_coax, d4t_m2hmg};//heat
		magazines[]={d4t_120mm_apfsds_40, Shell120, d4t_m240_coax, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};
		fuelCapacity=675;
    };

	class EventHandlers
    {
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
		fired="_this exec ""\d4t_files\FX\scripts\vehicles\m1a1\shock.sqs""";
	}; 
};

class M1A2 : Tank
{
	scope=2;
	crew=SoldierWCrew;
	vehicleClass="Vehicles (Armored)";
	picture="\d4t_files\pics\vehicles\iabrams.paa";
	icon="\d4t_files\pics\vehicles\m1.paa";
	model="\d4t_files\models\us\vehicles\m1a2.p3d";
	gunnerOpticsModel="\d4t_files\optics\optic_m1a2_gunner.p3d";
	commanderOpticsModel="\d4t_files\optics\optic_m1a2_commander.p3d";
	side=1;
	displayName="M1A2 SEP";
	nameSound="Abrams";
	accuracy=0.4;
	armor=1150;
	armorStructural=2.0;
	armorHull=0.99;
	armorTurret=0.99;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorTracks=0.6;
	cost=4000000;
	maxSpeed=67;
	gunnerOpticsColor[]={0,0,0,1};
	commanderOpticsColor[]={0,0,0,1};
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\M1_Treads.wss",1,0.8};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\M1_Turbine.wss",1,1};
	soundCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash_heavy.wss",1,1};
	soundLandCrash[]={"\d4t_files\sounds\vehicles\surface\tank_crash.wss",1,1};
	soundGear[]={"\d4t_files\sounds\vehicles\surface\Gear.wss",0.07,1};
	soundDammage[]={"\d4t_files\sounds\vehicles\surface\Alarm.wss",0.1,1};
	forceHideGunner=0;
	forceHideCommander=0;
	transportSoldier=0;
	hideWeaponsCargo=1;
	weapons[]={d4t_m256_120mmGun, d4t_m240_coax, d4t_m2hmg};//heat
	magazines[]={d4t_120mm_mpat_20, d4t_120mm_apfsds_12, Shell120, d4t_120mm_staff, d4t_m240_coax, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};
	laserscanner=1;
	laserscanrange=6000;
	irscanner=1;
	irScanRangeMin=500;
	irScanRangeMax=5000;
	irScanToEyeFactor=1;
	irScanGround=1;
	gunnerAction="ManActm1a1commanderout";
	gunnerInAction="ManActM1A1Gunner";
	driverAction="ManActM1A1DriverOut";
	driverInAction="ManActM1A1Driver";
	commanderAction="ManActm113gunner";
	commanderInAction="ManActM1A1Commander";
	hiddenSelections[]={"BS1","BS2","BS3","_mark","_chevron","_for"};
	type=1;
	threat[]={1,1,0.3};

	class HatchDriver
	{
		selection="poklop_driver";
		axis="osa_poklop_driver";
		angle=-100;
	};

	class HatchCommander
	{
		selection="poklop_commander";
		axis="osa_poklop_commander";
		angle=95;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max="80 / 3.6";
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-270;
		min=0;
		max=1;
	};
	
	class HitEngine
	{
		armor=0.8;
		material=60;
		name="engine";
		passThrough=1;
	};

	class HitHull
	{
		armor=0.99;
		material=50;
		name="hull";
		passThrough=1;
	};

	class HitTurret
	{
		armor=0.99;
		material=51;
		name="turet";
		passThrough=1;
	};

	class HitGun
	{
		armor=0.6;
		material=52;
		name="gun";
		passThrough=1;
	};

	class HitLTrack
	{
		armor=0.6;
		material=53;
		name="pasL";
		passThrough=1;
	};

	class HitRTrack
	{
		armor=0.6;
		material=54;
		name="pasP";
		passThrough=1;
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M1_Turret.wss",0.3,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-6;
		maxElev=18;
		minTurn=-360;
		maxTurn=360;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret:TurretBase
	{
		model="\d4t_files\models\us\vehicles\m1a2.p3d";
		weapons[]={d4t_m256_120mmGun, d4t_m240_coax, d4t_m2hmg};//heat
		magazines[]={d4t_120mm_mpat_20, d4t_120mm_apfsds_12, Shell120, d4t_120mm_staff, d4t_m240_coax, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};
		fuelCapacity=675;
	};

	class ComTurret
	{
		turretAxis="OsaVelitele";
		gunAxis="OsaHlavneVelitele";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\M1_Turret.wss",0.05,1.4};
		minElev=-6;
		maxElev=18;
		minTurn=-360;
		maxTurn=360;
		body="OtocVelitele";
		gun="OtocHlavenVelitele";
	};

	class ViewCommanderBase
	{
		initAngleX=5;
		minAngleX=-30;
		maxAngleX=30;
		initAngleY=0;
		minAngleY=-360;
		maxAngleY=360;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};

	class ViewCommander:ViewCommanderBase{};

	class Animations
	{
		class recoil
		{
			animperiod=0.1;
			selection="recoil";
			axis="osa_rec";
			angle0=0;
			angle1=0.006;
			type="rotation";
		};

		class suspension
		{
			animperiod=0.5;
			selection="sus";
			axis="sus_osa";
			angle0="-0.09";
			angle1=0.09;
			type="rotation";
		};

		class suspension2
		{
			animperiod=0.5;
			selection="sus2";
			axis="sus2_osa";
			angle0="-0.09";
			angle1=0.09;
			type="rotation";
		};
	};

	/*class UserActions
	{
		class LaunchSmoke
		{
			displayName="Launch Smoke";
			position="kulas";
			radius=10;
			condition="player == commander this && {_x=={INQ_smokeDischarger}}count magazines this>0";
			statement="[this,0] exec {\INQ_M1\scripts\Smoke\INQ_Smoke.sqs}";
		};
	};*/

	class EventHandlers
	{
		init="_this exec ""\d4t_files\FX\scripts\vehicles\m1a2\INQ_M1_Init.sqs""";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
		fired="_this call INQ_Fired";
		engine="if (_this select 1) then {(_this select 0) exec {\d4t_files\FX\scripts\vehicles\m1a2\INQ_M1_Tank_Accel.sqs}}";
	};
};

class M3A2Bradley : APC
{
	model="\d4t_files\models\us\vehicles\m3a2.p3d";
	scope=2;
	displayName="M3A2 Bradley CFV";
	vehicleClass="Vehicles (Armored)";
	picture="\d4t_files\pics\vehicles\m3a2.paa";
	maxSpeed=61;
	crew=SoldierWCrew;
	transportSoldier=2;
	nameSound="apc";
	typicalCargo[]={SoldierLAW, SoldierLAW};
	icon="\d4t_files\pics\vehicles\bradley.paa";
	preferRoads=0;
	canFloat=1;
	side=1;
	cost=150000;
	armor=400;
	armorStructural=2.0;
	armorHull=1;
	armorTurret=0.75;
	armorGun=0.4;
	armorEngine=0.9;
	armorLights=0.4;
	armorTracks=0.6;
	hiddenSelections[] = {"mrk1","mrk2","recog","gps","for"};
	soundEnviron[]={"\d4t_files\sounds\vehicles\surface\m2treads.ogg",db-12, 1.0};
	soundEngine[]={"\d4t_files\sounds\vehicles\surface\m2eng.wss",db-10, 1.0};
	soundGetIn[]={"\d4t_files\sounds\vehicles\surface\getinapc.wss",0.000316,1};
	soundGetOut[]={"\d4t_files\sounds\vehicles\surface\getoutapc.wss",0.000316,1};
	soundGear[]={"Vehicles\Gear_Trans1",0.010000,1};
	threat[]={0.9,0.8,0.5};
	laserscanner=1;
	laserscanrange=5000;
	irscanner=1;
	accuracy=0.850000;
	irScanRangeMin=500;
	irScanRangeMax=4000;
	irScanToEyeFactor=1;
	irScanGround=1;
	type=VArmor;
	commanderCanSee=31;
	gunnerCanSee=31;
	gunnerOpticsModel="\d4t_files\optics\optic_m3a2_gunner.p3d";
	gunnerAction="ManActCBT_M2GunnerOut";
	gunnerInAction="ManActCBT_M2Gunner";
	driverAction="ManActCBT_M2Driver";
	driverInAction="ManActCBT_M2Driver";
	commanderAction="ManActCBT_M2CommanderOut";
	commanderInAction="ManActCBT_M2Commander";
	hasCommander=1;
	hasGunner=1;
	outGunnerMayFire=0;
	forceHideGunner=0;
	viewGunnerInExternal=0;
	ejectdeadcargo = 1;
	commanderUsesPilotView=1;
	insideSoundCoef = 0.05;
	nightVision=1;
	weapons[]={d4t_m242_25mm_bushmaster, d4t_m240_coax_4400, d4t_m220_towa};
	magazines[]={d4t_m242_25mm_apds, d4t_m242_25mm_apds, d4t_m242_25mm_hei, d4t_m242_25mm_hei, d4t_m240_coax_4400, d4t_m220_towa, d4t_m220_towa, d4t_m220_towa};

	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\elevate.wss",db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		body = "OtocVez";
		gun = "OtocHlaven";
		minElev=-9;
		maxElev=+40;
		minTurn=-360;
		maxTurn=+360;
	};
	
	class HatchDriver
	{
		selection = "poklop_driver";
		axis = "osa_poklop_driver";
		angle = 40;
	};
	
	class HatchCommander
	{
		selection = "poklop_commander";
		axis = "osa_poklop_commander";
		angle = -165;
	};

	class HatchGunner
	{
		selection = "poklop_gunner";
		axis = "osa_poklop_gunner";
		angle = -150;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max=37;
	};

	class Animations
	{
		class CBT_TOW
		{
			type="rotation";
			animPeriod=3.000000;
			selection="tow";
			axis="osa_tow";
			angle0=0;
			angle1=1.575;
		};

		class gun_recoil
		{
			type="rotation";
			animperiod=0.050000;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1=-0.00103;
		};

		class suspension
		{
			type="rotation";
			animperiod=.5;
			selection=sus_f;
			axis=osa_sus;
			angle0=-.02;
			angle1=.02;
		};
	};		
	
	transportMaxMagazines=100;
	
	class TransportMagazines
	{
		class _xx_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=10;
		};

		class _xx_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=1;
		};

		class _xx_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=2;
		};

		class _xx_d4t_m67
		{
			magazine=d4t_m67;
			count=3;
		};

		class _xx_d4t_m406hefr_grenade
		{
			magazine=d4t_m406hefr_grenade;
			count=2;
		};
	};

	class Eventhandlers
	{
		init = "_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_init.sqs}};_this exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_ai.sqs""";
		hit="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		incomingMissile="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}; if ( (_this select 1 in [{d4t_m220_tow},{d4t_m220_towa},{d4t_fim92}]) ) then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_firedEH.sqs}};if ((_this select 1) != ""d4t_m240_coax_4400"" || (_this select 1) != ""d4t_m220_tow"" || (_this select 1) != ""d4t_m220_towa"") Then {(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\m3a2\%1.sqs"", _this select 1]}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
	};
};			

class M2A3Bradley : M3A2Bradley
{
	displayname="M2A3 Bradley IFV";
	model="\d4t_files\models\us\vehicles\m2a3.p3d";
	preferRoads=0;
	canFloat=1;
	scope=2;
	side=1;
	cost=150000;
	maxSpeed=61;
	armor=400;
	armorStructural=2.0;
	armorHull=1;
	armorTurret=0.75;
	armorGun=0.4;
	armorEngine=0.9;
	armorLights=0.4;
	armorTracks=0.6;
	nameSound="apc";
	weapons[]={d4t_m242_25mm_bushmaster, d4t_m240_coax_4400, d4t_m220_tow};
	magazines[]={d4t_m242_25mm_apds, d4t_m242_25mm_apds, d4t_m242_25mm_hei, d4t_m242_25mm_hei, d4t_m240_coax_4400, d4t_m220_tow, d4t_m220_tow, d4t_m220_tow};
	soundGear[]={"Vehicles\Gear_Trans1",0.010000,1};
	threat[]={0.9,0.8,0.5};
	laserscanner=1;
    laserscanrange=5000;
    irscanner=1;
    accuracy=0.850000;
    irScanRangeMin=500;
	irScanRangeMax=4000;
	irScanToEyeFactor=1;
	irScanGround=1;
	type=VArmor;
	commanderCanSee=31;
	gunnerCanSee=31;
	gunnerAction="ManActCBT_M2GunnerOut";
	gunnerInAction="ManActCBT_M2Gunner";
	driverAction="ManActCBT_M2Driver";
	driverInAction="ManActCBT_M2Driver";
	commanderAction="ManActCBT_M2CommanderOut";
	commanderInAction="ManActCBT_M2Commander";
	hasCommander=1;
	hasGunner=1;
	outGunnerMayFire=0;
	forceHideGunner=0;
	viewGunnerInExternal=0;
	ejectdeadcargo = 1;
	commanderUsesPilotView=1;
	transportSoldier=6;
	insideSoundCoef = 0.05;
	nightVision=1;
	typicalCargo[]={Soldier, Soldier, Soldier, Soldier, SoldierLAW, SoldierLAW};
	transportMaxMagazines=100;

	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\elevate.wss",db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		body = "OtocVez";
		gun = "OtocHlaven";
		minElev=-9;
		maxElev=+40;
		minTurn=-360;
		maxTurn=+360;
	};
	
	class HatchDriver
	{
		selection = "poklop_driver";
		axis = "osa_poklop_driver";
		angle = 40;
	};
	
	class HatchCommander
	{
		selection = "poklop_commander";
		axis = "osa_poklop_commander";
		angle = -165;
	};

	class HatchGunner
	{
		selection = "poklop_gunner";
		axis = "osa_poklop_gunner";
		angle = -150;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-270;
		min=0;
		max=37;
	};

	class Animations
	{
		class CBT_TOW
		{
			type="rotation";
			animPeriod=3.000000;
			selection="tow";
			axis="osa_tow";
			angle0=0;
			angle1=1.575;
		};

		class gun_recoil
		{
			type="rotation";
			animperiod=0.050000;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1=-0.00103;
		};

		class suspension
   		{
			type="rotation";
			animperiod=.5;
            selection=sus_f;
            axis=osa_sus;
            angle0=-.02;
            angle1=.02;   
        };
	};
	
	class TransportMagazines
	{
		class _xx_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=15;
		};

		class _xx_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=2;
		};

		class _xx_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=3;
		};

		class _xx_d4t_m67
		{
			magazine=d4t_m67;
			count=4;
		};

		class _xx_d4t_m406hefr_grenade
		{
			magazine=d4t_m406hefr_grenade;
			count=3;
		};
	};
	
	class Eventhandlers
	{
		init = "_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_init.sqs}};_this exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_ai.sqs""";
		hit="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		incomingMissile="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}; if ( (_this select 1 in [{d4t_m220_tow},{d4t_m220_towa},{d4t_fim92}]) ) then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_firedEH.sqs}};if ((_this select 1) != ""d4t_m240_coax_4400"" || (_this select 1) != ""d4t_m220_tow"" || (_this select 1) != ""d4t_m220_towa"") Then {(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\m3a2\%1.sqs"", _this select 1]}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
	};
};

class M6Linebacker : M2A3Bradley
{
	displayName="M6 Linebacker";
	scope=public;
	hiddenSelections[] = {"mrk1","mrk2","chev1"};
	maxSpeed=61;
	armor=400;
	threat[]={0.8,0.9,0.5};
	cost=900000;
	audible=15; 
	accuracy=0.12; 
	sensitivity=3.5;
	irScanRangeMin = 20;
	irScanRangeMax = 15000;
	visibleNightLightsOn=50;
	irScanToEyeFactor=10;
	transportSoldier = 2;
	nameSound="apc";
	model="\d4t_files\models\us\vehicles\m6.p3d";
	weapons[]={d4t_m242_25mm_bushmaster, d4t_m240_coax_4400, d4t_fim92};
	magazines[]={d4t_m242_25mm_apds, d4t_m242_25mm_apds, d4t_m242_25mm_hei, d4t_m242_25mm_hei, d4t_m240_coax_4400, d4t_fim92};

	class Turret
	{
		gunAxis = "OsaHlavne";
		turretAxis = "OsaVeze";
		soundServo[]={"\d4t_files\sounds\vehicles\surface\elevate.wss",db-40,1.0};
		gunBeg = "usti hlavne";
		gunEnd = "konec hlavne";
		body = "OtocVez";
		gun = "OtocHlaven";
		minElev=-9;
		maxElev=+54;
		minTurn=-360;
		maxTurn=+360;
	};
		
	class Eventhandlers
	{
		init = "_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_Init.sqs}; if (format [""%1"", CBT_FctLoad] == ""scalar bool array string 0xfcffffef"") then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_init.sqs}};_this exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_ai.sqs""";
		hit="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		incomingMissile="if (_this select 0 call CBT_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\d4t_files\FX\scripts\vehicles\m3a2\CBT_Brad_throwOff.sqs""}; if ( (_this select 1 in [{d4t_m220_tow},{d4t_m220_towa},{d4t_fim92}]) ) then {_this exec {\d4t_files\FX\scripts\vehicles\m3a2\CBT_firedEH.sqs}};if ((_this select 1) != ""d4t_m240_coax_4400"" || (_this select 1) != ""d4t_m220_tow"" || (_this select 1) != ""d4t_m220_towa"") Then {(_this select 0) exec format [""\d4t_files\FX\scripts\vehicles\m3a2\%1.sqs"", _this select 1]}";
		killed="(_this select 0) exec ""\d4t_files\FX\scripts\DKMM_RSC_Veh_burner.sqs""";
	};
};

class M109A6_Paladin : M1A2 //TODO
{
	displayName="M109A6-G Paladin";
	vehicleClass="Vehicles (Support)";
	model="\dkmm_ARTY\dkmm_m109A6.p3d"; 
    picture="\dkmm_arty\m109a6_g.paa";
	hiddenselections[] ={"vlam","mk4","mk5","mk6","mk7"};
	side=1;
	type=Varmor;
	camouflage=2.2;
    threat[]={0.8,0.8,0.1}; 
    nameSound="weapon";
	maxSpeed=60;
	soundGear[] = {"\dkmm_arty\s\shift.wss",db-25,1};
	soundEnviron[]={"m1treads.ogg",1,1}; 
	soundEngine[]={"\dkmm_arty\s\diesel.wss",0.5,1.2}; 
    armor=150; 
	cost=750000;
	extCameraPosition[] = {0,2.5,-12};
	gunnerOpticsModel="optika_tankw_auxiliary";
	CommanderOpticsModel="optika_tankw_auxiliary";
	DriverOpticsModel="optika_empty";
	hasGunner=1;
	gunnercansee=31;
	formationX=30;
	formationZ=40;
	irScanRangeMin = 35;
	irScanRangeMax = 10000;
	irTarget = 1;
	irScanGround=1;
	irScanToEyeFactor=5;
	laserScanner = 1;
	getInRadius = 3.5;
	getInAction = ManActGetInTank;
	getOutAction = ManActGetOutTank;
	nightVision=1;
	weapons[]={"d4t_gun155"};
	magazines[]={"d4t_155he_dummy"};
	turnCoef=5.000000;
	armorHull=1;
	armorTurret=0.9;
	armorGun=0.8; 
	armorEngine=0.8;
	armorLights=0.2;
	armorTracks=0.6;
	driverAction="ManActBMPDriverOut";
	gunnerAction="ManActBMPGunnerOut";
	commanderAction="ManActBMPCommander";
	driverInAction="ManActBMPDriver";
	gunnerInAction="ManActBMPGunner";
	commanderInAction="ManActBMPCommanderOut";
	commanderCanSee = 31;
	drivercansee = CANSEE_DEFAULT_DRIVER + CANSEE_RADAR;
	castdrivershadow=1;
	castGunnerShadow = 1;
	castCommanderShadow = 1;
	forcehideDriver=False;
	forceHideGunner=False;
	forcehideCommander=False;

	class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
	class HitHull {armor=1;material=50;name=hull;passThrough=1;};
	class HitTurret {armor=0.8;material=51;name=turet;passThrough=1;};
	class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
	class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
	class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

	class HatchDriver
	{
		selection="poklop_driver";
	    axis="osa_poklop_driver";
	    angle=155;
	};
	class HatchCommander
	{
	    selection="poklop_commander";
	    axis="osa_poklop_commander";
	    angle=110;
	};
	class HatchGunner
	{
	      selection="poklop_gunner";
	      axis="osa_poklop_gunner";
	      angle=100;
	};
	class Turret
	{ 
		gunAxis="OsaHlavne"; 
		turretAxis="OsaVeze"; 
		soundServo[]={"\dkmm_m109a6\servo.wss",0.18,1}; 
		gunBeg="usti hlavne"; 
		gunEnd="konec hlavne"; 
		minElev=-4; 
		maxElev=68; 
		minTurn=-360; 
		maxTurn=360; 	
		body="OtocVez"; 
		gun="OtocHlaven"; 
	}; 
	class ComTurret
	{
		turretAxis = "comturAx";
		gunAxis = "comgunAx";
		soundServo[]={"Vehicles\gun_elevate",db-70,1.2};
		gunBeg = "comgunB";
		gunEnd = "comgunE";
		minElev=-4; maxElev=+20;
		minTurn=-360; maxTurn=+360;
		body = "cmdrturret";
		gun = "cmdrgun";
	};	
	class Animations
	{
		class gun_recoil
		{
			type=rotation;
			animperiod=.1;
			selection=rec;
			axis=osa_rec;
			angle0= 0;	
			angle1= .004; 	
			};

		class suspension : gun_Recoil
		{
			animperiod=.5;
			selection=sus_F;
			axis=osa_sus;
			angle0= -.08;
			angle1= .08; 	
		};

		class backdoor
		{
			type=rotation;
			animperiod=.5;
			selection=backdoor;
			axis=osa_bd;
			angle0= 0;
			angle1= 1.61; 	
		};

		class sidedoor: backdoor
		{
			selection=sidedoor;
			axis=osa_sd;
			angle0= 0;
			angle1= 3.1415; 	
		};

		class shovL : suspension
		{
			selection=shovL;
			axis=osa_shov;
			angle0= 0;
			angle1= 2.8; 
			animperiod=.7;	
		};

		class clamp : suspension
		{
			selection=clamp;
			axis=osa_clamp;
			angle0= 0;
			angle1= 1.62; 
			animperiod=1.2;	
		};
		
		class shovR : shovL
		{
			selection=shovR;
			axis=osa_shov;
		};
		
		class BoxL : shovL
		{
			selection=boxL;
			axis=osa_boxL;
			angle0= 0;
			angle1= -3.1415; 
			animperiod=1;	
		};
		
		class BoxR : BoxL
		{
			selection=boxR;
			axis=osa_boxR;
		};
	};
	
	class UserActions
	{
	    class prepfire
		{
			displayName="Take firing position";
			position="osahlavne";
			radius=5;
			condition="player == leader this && this animationphase {backdoor} == 0";
			statement="[this,1] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
		};
	
		class prepdrive
		{
			displayName="Driving mode";
			position="osahlavne";
			radius=5;
			condition="player == leader this && this animationphase {backdoor} == 1";
			statement="[this,0] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
		};
	};
	
	class EventHandlers 
	{
		init="(_this select 0) exec {\dkmm_arty\scripts\DKMM_m109_Init.sqs}";
		engine="if (_this select 1) Then {[_this select 0, {Suspension},{Ant}] exec {\DKMM_ARTY\scripts\DKMM_Tank_AccelAdv.sqs}}"; 
		fired="if ((_this select 1) != {d4t_m1a1_m2}) Then {_this exec {\dkmm_arty\scripts\DKMM_M109_Gun155.sqs}}";
		killed="(_this select 0) exec {\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};

//---Ships
class BoatW : SmallShip
{
	vehicleClass="Vehicles (Ships)";
	displayName="$STR_DN_MARK_II";
	accuracy=0.5;
	scope=2;
	crew=d4t_USA_Soldier;
	model="pbr";
	picture="ipbr";
	side=1;
	driverIsCommander=1;
	driverAction="ManActPBRDriver";
	gunnerAction="ManActPBRGunner";
	cargoAction[]={"ManActCargo"};
	gunnerOpticsModel="optika_empty";
	maxSpeed=60;
	transportSoldier=6;
	cost=100000;
	armor=100;
	weapons[]={d4t_m2hmg_200rdmag};
	magazines[]={d4t_m2hmg_200rdmag,d4t_m2hmg_200rdmag,d4t_m2hmg_200rdmag};

	class TransportMagazines
	{
		class _xx_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=5;
		};

		class _xx_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=1;
		};

		class _xx_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=2;
		};
	};
};

//d4t temporary not available
class CarrierW : BigShip
{
	vehicleClass="Vehicles (Ships)";
	scope=protected;
	crew=d4t_USA_Soldier;
	side=1;
	displayName="$STR_DN_LST";
	model="newport";
	picture="im113";
	accuracy=0.5;
	maxSpeed=50;
	transportSoldier=50;
	transportAmmo=10000000;
	transportVehiclesCount=15;
	cost=200000000;
	armor=10000;
	weapons[]={};
	magazines[]={};

	class TransportMagazines{};
};

//---Misc
class M2StaticMG : APC
{
	scope=2;
	vehicleClass="Vehicles (Support)";
	side=1;
	hideProxyInCombat=0;
	picture="m2";
	crew=d4t_USA_Soldier;
	hasDriver=0;
	hasGunner=1;
	hasCommander=0;
	castGunnerShadow=1;
	ejectDeadGunner=1;
	unitInfoType=unitinfosoldier;
	hideUnitInfo=1;
	irScanRangeMin=0;
	irScanRangeMax=0;
	irTarget=0;
	maxSpeed=1;
	fuelCapacity=0;
	transportSolider=0;
	gunnerAction="ManActM2Gunner";
	gunnerInAction="ManActM2Gunner";
	gunnerCanSee="2+8";
	commanderCanSee="2+8";
	extCameraPosition[]={0,0.8,-5};
	cost=10000;
	getInAction=manactgetincar;
	getOutAction=manactgetoutcar;
	armor=30;
	armorStructural=10.0;
	type=0;
	model="\d4t_files\models\us\misc\m2hb_50cal.p3d";
	icon="kulomet.paa";
	displayName="M2HMG Browning";
	nameSound="mgun";
	transportSoldier=0;
	transportAmmo=0;
	accuracy=0.3;
	typicalCargo[]={};
	transportMaxMagazines=0;
	transportMaxWeapons=0;
	gunnerOpticsModel="optika_empty";
	weapons[]={d4t_m2hmg};
	magazines[]={d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg, d4t_m2hmg};

	class Turret:TurretBase
	{
		soundServo[]={};
		minElev=-20;
		maxElev=20;
		minTurn=-360;
		maxTurn=360;
	};

	class EventHandlers
	{
		fired="_this call loadFile {\d4t_files\FX\scripts\MGbullet.sqf}";
	};
};

class ReammoBoxWest : ReammoBox
{
	scope=public;
	accuracy=1000;
	displayName="$STR_DN_AMMO_CRATES_WEST";

	class TransportMagazines
	{
		class mag_d4t_30rd556x45mag
		{
			magazine=d4t_30rd556x45mag;
			count=20;
		};

		class mag_d4t_30rd556x45sdmag
		{
			magazine=d4t_30rd556x45sdmag;
			count=20;
		};

		class mag_d4t_m16a4mag
		{
			magazine=d4t_m16a4mag;
			count=20;
		};

		class mag_d4t_200rd556x45mag
		{
			magazine=d4t_200rd556x45mag;
			count=10;
		};

		class mag_d4t_200rd556x45sdmag
		{
			magazine=d4t_200rd556x45sdmag;
			count=10;
		};

		class mag_d4t_100rd762x51mag
		{
			magazine=d4t_100rd762x51mag;
			count=5;
		};

		class mag_d4t_10rd127x99mag
		{
			magazine=d4t_10rd127x99mag;
			count=2;
		};

		class mag_d4t_15rd9x19mag
		{
			magazine=d4t_15rd9x19mag;
			count=10;
		};

		class mag_d4t_12rd45acpmag
		{
			magazine=d4t_12rd45acpmag;
			count=10;
		};

		class mag_d4t_m67
		{
			magazine=d4t_m67;
			count=10;
		};

		class mag_d4t_m406hefr_grenade
		{
			magazine=d4t_m406hefr_grenade;
			count=5;
		};

		class mag_d4t_at4heat
		{
			magazine=d4t_at4heat;
			count=3;
		};

		class mag_d4t_fgm148missile
		{
			magazine=d4t_fgm148missile;
			count=1;
		};

		class mag_d4t_fim92amissile
		{
			magazine=d4t_fim92amissile;
			count=1;
		};
	};
};

class AmmoBoxOUTWW : HeavyReammoBox
{
	scope=public;
	accuracy=1000;
	displayName="$STR_DN_OUT_AMMO_CRATES_WP_WEST";

	class TransportWeapons
	{
		class weapon_d4t_m4apt
		{
			weapon=d4t_m4apt;
			count=1;
		};

		class weapon_d4t_m4apt_m203
		{
			weapon=d4t_m4apt_m203;
			count=1;
		};

		class weapon_d4t_m4acog
		{
			weapon=d4t_m4acog;
			count=1;
		};

		class weapon_d4t_m16a4apt
		{
			weapon=d4t_m16a4apt;
			count=1;
		};

		class weapon_d4t_m249saw
		{
			weapon=d4t_m249saw;
			count=1;
		};

		class weapon_d4t_m240b
		{
			weapon=d4t_m240b;
			count=1;
		};

		class weapon_d4t_m136at4
		{
			weapon=d4t_m136at4;
			count=1;
		};
	};
};