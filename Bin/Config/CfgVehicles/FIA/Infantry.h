class FIA_Soldier : Soldier
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