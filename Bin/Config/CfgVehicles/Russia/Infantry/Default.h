class Russia_Soldier : Soldier
{
	displayName = "Soldier";
	vehicleClass = "Infantry";
	scope = SCOPE_PUBLIC;
	model = "\d4t_files\models\russia\infantry\1985\ussr_soldier85.p3d";
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
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Backpack","_Armpatch_right","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
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
};

class Russia_Grenadier : Russia_Soldier
{
	cost = COST_GRENADIER;
	accuracy = ACCURACY_GRENADIER;
	displayName = "Grenadier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Backpack","_Armpatch_right","_Beret","_Cap","_Helmcamo","_HelmF","_Holster","_MAGpouch1","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	weapons[] = {WEAPON_REFERENCE(AK74GP25), "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "VOG25", "VOG25", "VOG25", "VOG25"};
	threat[] = {THREAT_GRENADIER};
};

class Russia_Medic : Russia_Soldier
{
	accuracy = ACCURACY_MEDIC;
	picture = "\misc\medik.paa";
	hiddenSelections[] = {"svetlo","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Backpack","_Shovel"};
	cost = COST_MEDIC;
	displayName = "Medic";
	weaponSlots = "1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	attendant = 1;
	weapons[] = {"AK74", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74"};
	nameSound = "medic";
	threat[] = {THREAT_MEDIC};
};

class Russia_MachineGunner : Russia_Soldier
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	displayName = "Machine Gunner";
	hiddenSelections[] = {"medic","svetlo","_AKmags","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_MAGpouch1","_MAGpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Backpack","_Shovel"};
	nameSound = "machineGunner";
	weapons[] = {WEAPON_REFERENCE(PKM), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM), WEAPON_REFERENCE(PKM)};
	threat[] = {THREAT_MACHINEGUNNER};
};

class Russia_LightATSoldier : Russia_Soldier
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	displayName = "AT Soldier";
	nameSound = "missileSoldier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	weapons[] = {"AK74", "RPG18", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "RPG18", "RPG18"};
	threat[] = {THREAT_ATSOLDIER};
};

class Russia_ATSoldier : Russia_LightATSoldier
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName = "AT Specialist";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
	weapons[] = {"AK74", "RPG7V", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "RPG7V", "RPG7V", "RPG7V", "RPG7V"};
	threat[] = {THREAT_HATSOLDIER};
};

class Russia_AASoldier : Russia_LightATSoldier
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName = "AA Soldier";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Backpack","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_SVDmags","_Rpgpack","_Tuch","_Mapcase","_Lamp","_Shovel"};
	weapons[] = {"AK74", "9K32", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "9K32"};
	threat[] = {THREAT_AASOLDIER};
};

class Russia_Miner : Russia_Soldier
{
	accuracy = ACCURACY_MINER;
	cost = COST_MINER;
	displayName = "Miner";
	hiddenSelections[] = {"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Cap","_Gpouch","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Tuch","_Mapcase","_Lamp","_Shovel"};
	canDeactivateMines = 1;
	picture = "\misc\sapper.paa";
	weapons[] = {"AK74", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "MineE", "MineE", "MineE"};
	threat[] = {THREAT_MINER};
};

class Russia_SquadLeader : Russia_Soldier
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	displayName = "Squad Leader";
	hiddenSelections[] = {"medic","_AKmags1","_Armpatch_right","_Beret","_Bottle","_Cap","_Gpouch","_HelmF","_Helmcamo","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_Shovel","_SVDmags","_Tuch","_Backpack"};
	picture = "\misc\frcky.paa";
	weapons[] = {"AK74", "Tokarev", "Binocular", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "RGO", "RGO", "RGO", "RDG1", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};

class OfficerENight : Russia_SquadLeader
{
	displayName = "Squad Leader (night eq.)";
	picture = "\misc\medik.paa";
	nightVision = 1;
	weapons[] = {WEAPON_REFERENCE(AK74GP25), "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[] = {"AK74", "AK74", "AK74", "AK74", "HandGrenade", "HandGrenade", "HandGrenade", "Flare", "Flare", "Flare"};
};