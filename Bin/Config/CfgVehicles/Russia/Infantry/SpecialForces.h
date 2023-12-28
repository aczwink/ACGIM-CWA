class SoldierESniper : SoldierEB
{
	accuracy = ACCURACY_SNIPER;
	camouflage = CAMOUFLAGE_USSR_SPETSNAZ;
	cost = COST_SNIPER;
	nameSound="sniper";
	vehicleClass="Infantry (Special Forces)";
	displayName="Sniper";
	weaponSlots="1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
	picture="\misc\sniper.paa";
	sensitivity=2;
	hiddenSelections[]={"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Backpack","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Mapcase","_Lamp"};
	threat[]={THREAT_SNIPER};

#ifdef ACGIM_SCENARIO_1985
	model = "\sjc_models\USSR\spetsnaz.p3d";
	weapons[]={"SVDDragunov", "Tokarev", "Throw", "Put"};
	magazines[]={"SVDDragunov", "SVDDragunov", "SVDDragunov", "SVDDragunov", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\ffur_ru\spec\rhs_gru09";
	weapons[]={"V94","Tokarev","Throw","Put"};
	magazines[]={"V94","V94","V94","V94","TokarevMag","TokarevMag","TokarevMag","TokarevMag"};
	wounds[] = {
		"xicht_a.paa","xicht_a_zranen",
		"xicht_b.paa","xicht_a_zranen",
		"xicht_c.paa","xicht_a_zranen",
		"xicht_d.paa","xicht_a_zranen",
		"xicht_e.paa","xicht_e_zranen",
		"xicht_f.paa","xicht_a_zranen",
		"xicht_g.paa","xicht_a_zranen",
		"xicht_h.paa","xicht_a_zranen",
		"xicht_i.paa","xicht_a_zranen",
		"xicht_j.paa","xicht_a_zranen",
		"xicht_k.paa","xicht_a_zranen",
		"xicht_l.paa","xicht_a_zranen",
		"xicht_m.paa","xicht_a_zranen",
		"xicht_n.paa","xicht_a_zranen",
		"xicht_o.paa","xicht_o_zranen",
		"xicht_p.paa","xicht_a_zranen",
		"xicht_q.paa","xicht_a_zranen",
		"xicht_r.paa","xicht_a_zranen",
		"xicht_s.paa","xicht_a_zranen",
		"xicht_t.paa","xicht_a_zranen",
		"xicht_u.paa","xicht_a_zranen",
		"xicht_v.paa","xicht_v_zranen",
		"xicht_w.paa","xicht_w_zranen",
		"xicht_x.paa","xicht_a_zranen",
		"xicht_y.paa","xicht_a_zranen",
		"xicht_z.paa","xicht_a_zranen",
		"xicht_2a.paa","xicht_a_zranen",
		"xicht_2b.paa","xicht_w_zranen",
		"xicht_2c.paa","xicht_a_zranen",
		"xicht_2d.paa","xicht_v_zranen",
		"xicht_2e.paa","xicht_a_zranen",
		"xicht_2f.paa","xicht_a_zranen",
		"xicht_2g.paa","xicht_w_zranen",
		"xicht_2h.paa","xicht_a_zranen",
		"xicht_2i.paa","xicht_a_zranen",
		"xicht_2j.paa","xicht_a_zranen",
		"xicht_2k.paa","xicht_a_zranen",
		"xicht_2l.paa","xicht_a_zranen",
		"xicht_2m.paa","xicht_a_zranen",
		"xicht_2n.paa","xicht_a_zranen",
		"xicht_2o.paa","xicht_a_zranen",
		"xicht_2p.paa","xicht_2p_zranen",
		"xicht_2q.paa","xicht_a_zranen",
		"xicht_2r.paa","xicht_e_zranen",
		"xicht_2s.paa","xicht_a_zranen",
		"xicht_2t.paa","xicht_a_zranen",
		"xicht_2u.paa","xicht_a_zranen",
		"xicht_2v.paa","xicht_a_zranen",
		"xicht_2w.paa","xicht_w_zranen",
		"xicht_2x.paa","xicht_a_zranen",
		"xicht_2y.paa","xicht_a_zranen",
		"xicht_2z.paa","xicht_a_zranen",
		"\ffur_ru\spec\snip\leg_r.paa","\ffur_ru\spec\snip\leg_r_d.paa",
		"\ffur_ru\spec\snip\leg_l.paa","\ffur_ru\spec\snip\leg_l_d.paa",
		"\ffur_ru\spec\snip\arm.paa","\ffur_ru\spec\snip\arm_d.paa",
		"\ffur_ru\spec\snip\back.paa","\ffur_ru\spec\snip\back_d.paa",
		"\ffur_ru\spec\snip\chest.paa","\ffur_ru\spec\snip\chest_d.paa",
		"\ffur_ru\spec\mask_new.paa","\ffur_ru\spec\mask_new_d.paa"
	};
#endif
};

class SoldierESaboteur : SoldierEB
{
	accuracy = ACCURACY_SPETSNAZ;
	cost = COST_SPETSNAZ;
	vehicleClass="Infantry (Special Forces)";
	displayName="Spetsnaz";
	picture="\misc\meciky.paa";
	camouflage = CAMOUFLAGE_USSR_SPETSNAZ;
	threat[]={THREAT_SPETSNAZ};
	nameSound="specNas";
	canHideBodies=1;
	canDeactivateMines=1;
	weapons[]={WEAPON_REFERENCE(AKS74), "Tokarev", "Throw", "Put"};
	magazines[]={"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "TimeBomb", "TimeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Backpack","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Mapcase","_Lamp"};
	model = "\sjc_models\USSR\spetsnaz.p3d";
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"radiogear","backpack"};
	model="\ffur_ru\spec\rhs_gru01";
	wounds[] = {
		"xicht_a.paa","xicht_a_zranen",
		"xicht_b.paa","xicht_a_zranen",
		"xicht_c.paa","xicht_a_zranen",
		"xicht_d.paa","xicht_a_zranen",
		"xicht_e.paa","xicht_e_zranen",
		"xicht_f.paa","xicht_a_zranen",
		"xicht_g.paa","xicht_a_zranen",
		"xicht_h.paa","xicht_a_zranen",
		"xicht_i.paa","xicht_a_zranen",
		"xicht_j.paa","xicht_a_zranen",
		"xicht_k.paa","xicht_a_zranen",
		"xicht_l.paa","xicht_a_zranen",
		"xicht_m.paa","xicht_a_zranen",
		"xicht_n.paa","xicht_a_zranen",
		"xicht_o.paa","xicht_o_zranen",
		"xicht_p.paa","xicht_a_zranen",
		"xicht_q.paa","xicht_a_zranen",
		"xicht_r.paa","xicht_a_zranen",
		"xicht_s.paa","xicht_a_zranen",
		"xicht_t.paa","xicht_a_zranen",
		"xicht_u.paa","xicht_a_zranen",
		"xicht_v.paa","xicht_v_zranen",
		"xicht_w.paa","xicht_w_zranen",
		"xicht_x.paa","xicht_a_zranen",
		"xicht_y.paa","xicht_a_zranen",
		"xicht_z.paa","xicht_a_zranen",
		"xicht_2a.paa","xicht_a_zranen",
		"xicht_2b.paa","xicht_w_zranen",
		"xicht_2c.paa","xicht_a_zranen",
		"xicht_2d.paa","xicht_v_zranen",
		"xicht_2e.paa","xicht_a_zranen",
		"xicht_2f.paa","xicht_a_zranen",
		"xicht_2g.paa","xicht_w_zranen",
		"xicht_2h.paa","xicht_a_zranen",
		"xicht_2i.paa","xicht_a_zranen",
		"xicht_2j.paa","xicht_a_zranen",
		"xicht_2k.paa","xicht_a_zranen",
		"xicht_2l.paa","xicht_a_zranen",
		"xicht_2m.paa","xicht_a_zranen",
		"xicht_2n.paa","xicht_a_zranen",
		"xicht_2o.paa","xicht_a_zranen",
		"xicht_2p.paa","xicht_2p_zranen",
		"xicht_2q.paa","xicht_a_zranen",
		"xicht_2r.paa","xicht_e_zranen",
		"xicht_2s.paa","xicht_a_zranen",
		"xicht_2t.paa","xicht_a_zranen",
		"xicht_2u.paa","xicht_a_zranen",
		"xicht_2v.paa","xicht_a_zranen",
		"xicht_2w.paa","xicht_w_zranen",
		"xicht_2x.paa","xicht_a_zranen",
		"xicht_2y.paa","xicht_a_zranen",
		"xicht_2z.paa","xicht_a_zranen",
		"\ffur_ru\spec\leg_r.paa","\ffur_ru\spec\leg_r_d.paa",
		"\ffur_ru\spec\leg_l.paa","\ffur_ru\spec\leg_l_d.paa",
		"\ffur_ru\spec\arm.paa","\ffur_ru\spec\arm_d.paa",
		"\ffur_ru\spec\6b9_back.paa","\ffur_ru\spec\6b9_back_d.paa",
		"\ffur_ru\spec\6b9_front.paa","\ffur_ru\spec\6b9_front_d.paa"
	};
#endif
};

class SoldierESaboteurPipe : SoldierESaboteur
{
	displayName = "Spetsnaz (night eq.)";
	weapons[]={WEAPON_REFERENCE(AKS74), "Tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "PipeBomb", "PipeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};

class SoldierESaboteurPipeHG : SoldierESaboteur
{
	displayName="Spetsnaz (RPG)";

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(AKS74), "RPG16", "Tokarev", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "RPG16", "RPG16", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"AKS74PSO1PBS3",WEAPON_REFERENCE(RPG7V),"Tokarev","NVGoggles","Throw","Put"};
	magazines[]={"AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3", WEAPON_REFERENCE(RPG7V), WEAPON_REFERENCE(RPG7V), "TokarevMag","TokarevMag","TokarevMag","TokarevMag"};
#endif
};

class SoldierESaboteurBizon : SoldierESaboteur
{
	displayName="Spetsnaz (SD)";

#ifdef ACGIM_SCENARIO_1985
	weapons[]={"AKS74B", "Tokarev", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"AKS74B", "AKS74B", "AKS74B", "AKS74B", "AKS74B", "AKS74B", "PipeBomb", "PipeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"AKS74PSO1PBS3","Tokarev","NVGoggles","Throw","Put"};
	magazines[]={"AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","AKS74PSO1PBS3","PipeBomb","PipeBomb","TokarevMag","TokarevMag","TokarevMag","TokarevMag"};
#endif
};