class SoldierEB : Soldier
{
	displayName = "Soldier";
	vehicleClass = "Infantry";
	scope = SCOPE_PUBLIC;
	moves = "CfgMovesMC";
	side = SIDE_EAST;
	cost = COST_SOLDIER;
	accuracy = ACCURACY_SOLDIER;
	armor = 3.5;
	armorStructural = 1.5;
	armorHead = 1.0;
	armorBody = 3.5;
	armorHands = 0.5;
	armorLegs = 0.5;

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Backpack","_Armpatch_right","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
	model = "\d4t_files\models\russia\infantry\1985\ussr_soldier85.p3d";
	wounds[] = {
		"\d4t_tex\vdv85\6b9_back.paa","\d4t_tex\vdv85\6b9_back_d.paa",
		"\d4t_tex\vdv85\6b9_front.paa","\d4t_tex\vdv85\6b9_front_d.paa",
		"\d4t_tex\vdv85\arm_l.paa","\d4t_tex\vdv85\arm_l_d.paa",
		"\d4t_tex\vdv85\arm_r.paa","\d4t_tex\vdv85\arm_r_d.paa",
		"\d4t_tex\vdv85\chest.paa","\d4t_tex\vdv85\chest_d.paa",
		"\d4t_tex\vdv85\leg_l1.paa","\d4t_tex\vdv85\leg_l1_d.paa",
		"\d4t_tex\vdv85\leg_r1.paa","\d4t_tex\vdv85\leg_r1_d.paa"
	};
	weapons[] = {"AK74", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "RGO", "RGO", "RGO"};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"medic"};
	model = "\d4t_files\models\russia\infantry\russian_soldier.p3d";
	wounds[] = {
		"d4t_tex\rs\leg_r.paa","d4t_tex\rs\leg_r_d.paa",
		"d4t_tex\rs\leg_l.paa","d4t_tex\rs\leg_l_d.paa",
		"d4t_tex\rs\arm_l.paa","d4t_tex\rs\arm_l_d.paa",
		"d4t_tex\rs\arm_r.paa","d4t_tex\rs\arm_r_d.paa",
		"d4t_tex\rs\6b9_bck.paa","d4t_tex\rs\6b9_bck_d.paa",
		"d4t_tex\rs\6b9_frt.paa","d4t_tex\rs\6b9_frt_d.paa",
		"d4t_tex\rs\vest2_bk.paa","d4t_tex\rs\vest2_bk_d.paa",
		"d4t_tex\rs\vest2_frt.paa","d4t_tex\rs\vest2_frt_d.paa",
		"d4t_tex\rs\back.paa","d4t_tex\rs\back_d.paa",
		"d4t_tex\rs\chest.paa","d4t_tex\rs\chest_d.paa",
		"d4t_tex\rs\cap_body.paa","d4t_tex\rs\cap_body_d.paa",
		"d4t_tex\rs\kaska.paa","d4t_tex\rs\kaska_d.paa",
		"d4t_tex\rs\kaska_paint.paa","d4t_tex\rs\kaska_paint_d.paa",
		"d4t_tex\rs\kaskasetka.paa","d4t_tex\rs\kaskasetka_d.paa"
	};
	weapons[]={"AK74M", "Throw", "Put"};
	magazines[]={"AK74M", "AK74M", "AK74M", "AK74M", "AK74M", "AK74M", "AK74M", "RGO","RGO","RGO"};
#endif
};

class SoldierEG : SoldierEB
{
	cost = COST_GRENADIER;
	accuracy = ACCURACY_GRENADIER;
	displayName = "Grenadier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Backpack","_Armpatch_right","_Beret","_Cap","_Helmcamo","_HelmF","_Holster","_MAGpouch1","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	threat[] = {THREAT_GRENADIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {WEAPON_REFERENCE(AK74GP25), "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "VOG25", "VOG25", "VOG25", "VOG25"};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\ffur_ru\mt\ffur_ru_mg";
	weapons[]={"AK74MGP25","Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
#endif
};

class SoldierEMedic : SoldierEB
{
	accuracy = ACCURACY_MEDIC;
	picture = "\misc\medik.paa";
	cost = COST_MEDIC;
	displayName = "Medic";
	weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	attendant = 1;
	nameSound = "medic";
	threat[] = {THREAT_MEDIC};

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[] = {"svetlo","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Backpack","_Shovel"};
	weapons[] = {"AK74", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74"};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"medic"};
	model="\ffur_ru\mt\ffur_ru_medic";
	weapons[]={"AK74M","Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M"};
#endif
};

class SoldierEMG : SoldierEB
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	displayName = "Machine Gunner";
	hiddenSelections[] = {"medic","svetlo","_AKmags","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_MAGpouch1","_MAGpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Backpack","_Shovel"};
	nameSound = "machineGunner";
	weapons[] = {WEAPON_REFERENCE(PKM), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM)};
	threat[] = {THREAT_MACHINEGUNNER};

#ifdef ACGIM_SCENARIO_2007
	model="\ffur_ru\mt\ffur_ru_mg";
#endif
};

class SoldierELAW : SoldierEB
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	displayName = "AT Soldier";
	nameSound = "missileSoldier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	threat[] = {THREAT_ATSOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"AK74", "RPG18", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "RPG18", "RPG18"};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\ffur_ru\mt\ffur_ru_rpg";
	weapons[]={"AK74M",WEAPON_REFERENCE(RPG7V),"Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M",WEAPON_REFERENCE(RPG7V), WEAPON_REFERENCE(RPG7V), WEAPON_REFERENCE(RPG7V)};
#endif
};

class SoldierEAT : SoldierELAW
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName = "AT Specialist";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
	threat[] = {THREAT_HATSOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"AK74", WEAPON_REFERENCE(RPG7V), "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", WEAPON_REFERENCE(RPG7V), WEAPON_REFERENCE(RPG7V)};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"AK74M","RPG29","Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M","RPG29"};
#endif
};

class SoldierEAA : SoldierELAW
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName = "AA Soldier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
	threat[] = {THREAT_AASOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"AK74", "9K32Launcher", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "9K32Launcher"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"AK74M","9K32Launcher","Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M","9K32Launcher"};
#endif
};

class SoldierEMiner : SoldierEB
{
	accuracy = ACCURACY_MINER;
	cost = COST_MINER;
	displayName = "Miner";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	canDeactivateMines = 1;
	picture = "\misc\sapper.paa";
	threat[] = {THREAT_MINER};

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"AK74", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "MineE", "MineE", "MineE"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"AK74M","Throw","Put"};
	magazines[]={"AK74M","AK74M","AK74M","AK74M","MineE","MineE","MineE"};
#endif
};

class OfficerE : SoldierEB
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	displayName = "Squad Leader";
	picture = "\misc\frcky.paa";

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[] = {"medic","_AKmags1","_Armpatch_right","_Beret","_Bottle","_Cap","_Gpouch","_HelmF","_Helmcamo","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_Shovel","_SVDmags","_Tuch","_Backpack"};
	weapons[] = {"AK74", "Tokarev", "Binocular", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "RGO", "RGO", "RGO", "RDG1", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"helmcamo_net","rpgpack","_Backpack","Backpack"};
	model="\ffur_ru\mt\ffur_ru_off";
	weapons[]={"AK74M","Tokarev","Binocular","Throw","Put"};
		magazines[]={"AK74M","AK74M","AK74M","AK74M","AK74M","AK74M","RGO","RGO","RGO","RDG1","TokarevMag","TokarevMag","TokarevMag","TokarevMag"};
#endif
};

class OfficerENight : OfficerE
{
	displayName = "Squad Leader (night eq.)";
	picture = "\misc\medik.paa";
	nightVision = 1;
	weapons[] = {WEAPON_REFERENCE(AK74GP25), "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "HandGrenade", "HandGrenade", "HandGrenade", "Flare", "Flare", "Flare"};
};