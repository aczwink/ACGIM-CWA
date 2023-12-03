class SoldierGB : Soldier
{
	vehicleClass = "Infantry";
	scope = 2;
	model = "\sjc_models\fia\rebel1.p3d";
	wounds[] =
	{
		"\sjc_textures\rebels\bl_arm.pac","\sjc_textures\rebels\bl_arm_d.pac",
		"\sjc_textures\rebels\bl_arm2.pac","\sjc_textures\rebels\bl_arm2_d.pac",
		"\sjc_textures\rebels\bl_body.pac","\sjc_textures\rebels\bl_body_d.pac",
		"\sjc_textures\rebels\bl_boonie.pac","\sjc_textures\rebels\bl_boonie_d.pac",
		"\sjc_textures\rebels\bl_legs.pac","\sjc_textures\rebels\bl_legs_d.pac",
		"\sjc_textures\rebels\bl_shirt.pac","\sjc_textures\rebels\bl_shirt_d.pac",
		"\sjc_textures\rebels\bl_shirt2.pac","\sjc_textures\rebels\bl_shirt2_d.pac",
		"\sjc_textures\rebels\bl_shirt3.pac","\sjc_textures\rebels\bl_shirt3_d.pac",
		"\sjc_textures\rebels\bl_shirt4.pac","\sjc_textures\rebels\bl_shirt4_d.pac",
		"\sjc_textures\rebels\fl_arm.pac","\sjc_textures\rebels\fl_arm_d.pac",
		"\sjc_textures\rebels\fl_boonie.pac","\sjc_textures\rebels\fl_boonie_d.pac",
		"\sjc_textures\rebels\fl_legs.pac","\sjc_textures\rebels\fl_legs_d.pac",
		"\sjc_textures\rebels\fl_vest.pac","\sjc_textures\rebels\fl_vest_d.pac",
		"\sjc_textures\rebels\g_legs.pac","\sjc_textures\rebels\g_legs_d.pac",
		"\sjc_textures\rebels\jeans.pac","\sjc_textures\rebels\jeans_d.pac",
		"\sjc_textures\rebels\jogpants.pac","\sjc_textures\rebels\jogpants_d.pac",
		"\sjc_textures\rebels\st_mask.pac","\sjc_textures\rebels\st_mask_d.pac",
		"\sjc_textures\rebels\st_maskg.pac","\sjc_textures\rebels\st_maskg_d.pac",
		"\sjc_textures\rebels\tgr_legs.pac","\sjc_textures\rebels\tgr_legs_d.pac",
		"\sjc_textures\rebels\tgr_vest.pac","\sjc_textures\rebels\tgr_vest_d.pac",
		"\sjc_textures\rebels\ukr_vest.pac","\sjc_textures\rebels\ukr_vest_d.pac",
		"\sjc_textures\rebels\yug_arm1.pac","\sjc_textures\rebels\yug_arm1_d.pac",
		"\sjc_textures\rebels\yug_boonie.pac","\sjc_textures\rebels\yug_boonie_d.pac",
		"\sjc_textures\rebels\yug_cap.pac","\sjc_textures\rebels\yug_cap_d.pac",
		"\sjc_textures\rebels\yug_coat.pac","\sjc_textures\rebels\yug_coat_d.pac",
		"\sjc_textures\rebels\yug_coatarm.pac","\sjc_textures\rebels\yug_coatarm_d.pac",
		"\sjc_textures\rebels\yug_legs.pac","\sjc_textures\rebels\yug_legs_d.pac",
		"\sjc_textures\rebels\yug_shirt1.pac","\sjc_textures\rebels\yug_shirt1_d.pac",
		"\sjc_textures\rebels\yug_shirt2.pac","\sjc_textures\rebels\yug_shirt2_d.pac",
		"\sjc_textures\rebels\yug_shirt2.pac","\sjc_textures\rebels\yug_shirt3_d.pac"
	};
	hiddenSelections[] = {"medic"};
	moves = "CfgMovesMC";
	displayName = "Soldier";
	side = SIDE_FIA;
	cost = COST_SOLDIER;
	accuracy = ACCURACY_SOLDIER;
	weapons[] = {"AKM", "Throw", "Put"};
	magazines[] = {"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "RGO", "RGO", "RGO"};
};

class SoldierGG : SoldierGB
{
	displayName="Grenadier";
	model = "\sjc_models\fia\rebel3.p3d";
	cost = COST_GRENADIER;
	accuracy = ACCURACY_GRENADIER;
	weapons[]={"AKMGP25", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "VOG25", "VOG25", "VOG25"};
};

class SoldierGLAW : SoldierGB
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	nameSound="missileSoldier";
	displayName="AT Soldier";
	model = "\sjc_models\fia\rebel5.p3d";
	weapons[]={"AKM", "RPG2", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "RPG2", "RPG2", "RPG2"};
	threat[]={THREAT_ATSOLDIER};
};

class SoldierGAT : SoldierGLAW
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName="AT Specialist";
	model = "\sjc_models\fia\rebel6.p3d";
	weapons[]={"AKM", "RPG7", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "RPG7", "RPG7", "RPG7", "RPG7"};
	threat[]={THREAT_HATSOLDIER};
};

class SoldierGMedic : SoldierGB
{
	accuracy = ACCURACY_MEDIC;
	picture="\misc\medik.paa";
	cost = COST_MEDIC;
	displayName="Medic";
	model = "\sjc_models\fia\rebel2.p3d";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	attendant=1;
	weapons[]={"AKM", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM"};
	nameSound="medic";
	hiddenSelections[]={};
};

class SoldierGMG : SoldierGB
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	nameSound="machineGunner";
	displayName="Machine Gunner";
	model = "\sjc_models\fia\rebel4.p3d";
	weapons[]={"RPD", "Throw", "Put"};
	magazines[]={"RPD", "RPD", "RPD", "RPD", "RPD"};
	threat[]={THREAT_MACHINEGUNNER};
	
	class UserActions
	{
		class setcamo
		{
			displayName="Establish MG Position";
			position="renzhong";
			radius=0.500000;
			condition="alive this";
			statement="[this] exec""\acgim_scripts\Crafting\SetCamo.sqs""";
		};
	};
};

class OfficerG : SoldierGB
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	model = "\sjc_models\fia\rebel8.p3d";
	picture="\misc\frcky.paa";
	displayName = "Leader";
	weapons[]={"AKM", "tokarev", "Binocular", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "RGO", "RGO", "RGO", "RDG1", "tokarevmag", "tokarevmag", "tokarevmag", "tokarevmag"};
};