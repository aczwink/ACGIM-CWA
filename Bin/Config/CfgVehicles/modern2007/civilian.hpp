//////////////////////////////Soldiers///////////////////////////////////////////
	class Civilian:Man
		{
		vehicleClass="Men";
		scope=2;
		displayName="$STR_DN_MAN";
		nameSound="man";
		model="\graa_units\civ_man1.p3d";
		wounds[]={"\merged\00007mc_vojakw2.paa","\merged\00009mc_vojakw2.paa","\merged\00008mc_vojake2.paa","\merged\00010mc_vojake2.paa","00004mc_vojakw2.paa","00009mc_vojakw2.paa","00005mc_vojakw2.paa","00008mc_vojakw2.paa","00003mc_vojakw2.paa","00007mc_vojakw2.paa","00004mc_vojake2.paa","00007mc_vojake2.paa","00005mc_vojake2.paa","00008mc_vojake2.paa","00004mc_tankistaw2.paa","00007mc_tankistaw2.paa","00002mc_tankistaw2.paa","00006mc_tankistaw2.paa","00000mc_tankistae2.paa","00008mc_tankistae2.paa","00003mc_tankistae2.paa","00007mc_tankistae2.paa","00002mc_saboteur.paa","00007mc_saboteur.paa","00000mc_saboteur.paa","00006mc_saboteur.paa","00003mc_SPECNAS2.paa","00011mc_SPECNAS2.paa","00005mc_SPECNAS2.paa","00010mc_SPECNAS2.paa","00000mc_vojakg2.paa","00009mc_vojakg2.paa","00003mc_vojakg2.paa","00008mc_vojakg2.paa","00003mc_vojakg3.paa","00009mc_vojakg3.paa","00004mc_vojakg3.paa","00008mc_vojakg3.paa","00005mc_vojakg3.paa","00007mc_vojakg3.paa","00002mc_pilote2.paa","00007mc_pilote2.paa","00004mc_pilote2.paa","00006mc_pilote2.paa","00003mc_Pilotw2.paa","00007mc_Pilotw2.paa","00002mc_Pilotw2.paa","00006mc_Pilotw2.paa","00002mc_SNIPERe2.paa","00009mc_SNIPERe2.paa","00004mc_SNIPERe2.paa","00008mc_SNIPERe2.paa","w_helma_front","w_helma_front_D","w_helma_side2","w_helma_side2_D","w_helma_vnitrek","w_helma_vnitrek_D","w_ramena","w_ramena_D","w_hrud_p","w_hrud_p_D","w_zadaruce_z","w_zadaruce_z_D","w_vojak_ruka_bok_l","w_vojak_ruka_bok_l_D","w_vojak_ruka_bok_p","w_vojak_ruka_bok_p_D","w_vojak_nohy_bok_l","w_vojak_nohy_bok_l_D","w_vojak_nohy_bok_p","w_vojak_nohy_bok_p_D","w_nohy_p","w_nohy_p_D","w_nohy_z","w_nohy_z_D","e_helma_front","e_helma_front_D","e_hrud_p","e_hrud_p_D","e_zada_z","e_zada_z_d","e_ruka_bok_l","e_ruka_bok_l_D","e_ruka_bok_p","e_ruka_bok_p_D","e_nohy_bok_l","e_nohy_bok_l_D","e_nohy_bok_p","e_nohy_bok_p_D","e_nohy_p","e_nohy_p_D","e_nohy_z","e_nohy_z_D","e_pilot_helma_z","e_pilot_helma_z_d","e_pilot_nohy_p","e_pilot_nohy_p_d","e_pilot_nohy_z","e_pilot_nohy_z_d","e_pilot_ramena","e_pilot_ramena_d","e_pilot_nohybok_l","e_pilot_nohybok_l_d","e_pilot_nohybok_p","e_pilot_nohybok_p_d","e_pilot_rucebok_l","e_pilot_rucebok_l_d","e_pilot_rucebok_p","e_pilot_rucebok_p_d","e_pilot_zada_z","e_pilot_zada_z_d","e_tankhelma_side512","e_tankhelma_side512_d","zaloha_hrud","zaloha_hrud_d","e_tank_zada_z","e_tank_zada_z_d","e_tank_nohy_p","e_tank_nohy_p_D","e_tank_nohy_z","e_tank_nohy_z_D","e_tank_ruka_p","e_tank_ruka_p_d","e_tank_ruka_l","e_tank_ruka_l_d","e_tank_nohybok_l","e_tank_nohybok_l_d","e_tank_nohybok_r","e_tank_nohybok_r_d","e_tankhelma_back512","e_tankhelma_back512_d","g_zada_z","g_zada_z_D","g_hrud_p","g_hrud_p_d","g_nohy_p","g_nohy_p_D","g_nohy_z","g_nohy_z_D","g_noha_bok_l","g_noha_bok_l_d","g_noha_bok_p","g_noha_bok_p_d","g_ruka_bok_p","g_ruka_bok_p_d","g_ruka_bok_l","g_ruka_bok_l_d","g_ramena","g_ramena_D","g_cepice_side","g_cepice_side_d","g_cepice_up","g_cepice_up_d","g2_hrud_p","g2_hrud_p_d","g2_zada_z","g2_zada_z_d","g2_nohy_z","g2_nohy_z_d","g2_nohy_p","g2_nohy_p_d","g2_nohy_bok_p","g2_nohy_bok_p_d","g2_nohy_bok_l","g2_nohy_bok_l_d","g2_ramena","g2_ramena_D","g2_ruka_bok_p","g2_ruka_bok_p_d","g2_ruka_bok_l","g2_ruka_bok_l_d","w_saboteur_hrud_p","w_saboteur_hrud_p_D","w_saboteur_zada_z","w_saboteur_zada_z_D","w_saboteur_nohy_z","w_saboteur_nohy_z_D","w_saboteur_nohy_p","w_saboteur_nohy_p_D","w_saboteur_ruka_p","w_saboteur_ruka_p_d","w_saboteur_ruka_l","w_saboteur_ruka_l_d","w_saboteur_ramena_z","w_saboteur_ramena_z_D","w_saboteur_kukla_s","w_saboteur_kukla_s_d","w_saboteur_kukla_f","w_saboteur_kukla_f_d","w_sniper_rukabok_l","w_sniper_rukabok_l_d","w_sniper_rukabok_p","w_sniper_rukabok_p_d","w_sniper_zada_z","w_sniper_zada_z_d","w_sniper_hrud_p","w_sniper_hrud_p_d","w_sniper_nohy_z","w_sniper_nohy_z_d","w_sniper_nohy_p","w_sniper_nohy_p_d","w_sniper_ramena","w_sniper_ramena_d","w_sniper_sitka.paa","w_sniper_sitka_d.paa","w_tank_hrud_p","w_tank_hrud_p_D","w_tank_zada_z","w_tank_zada_z_D","w_tank_nohy_p","w_tank_nohy_p_D","w_tank_nohy_z","w_tank_nohy_z_D","w_tank_nohybok_l","w_tank_nohybok_l_d","w_tank_nohybok_p","w_tank_nohybok_p_d","w_tank_rucebok_p","w_tank_rucebok_p_d","w_tank_rucebok_l","w_tank_rucebok_l_d","w_tank_helma_side","w_tank_helma_side_d","w_tank_helma_front_p","w_tank_helma_front_p_d","w_tank_ramena","w_tank_ramena_d","w_pilot_hrud_p","w_pilot_hrud_p_D","w_pilot_zada_z","w_pilot_zada_z_D","w_pilot_nohy_p","w_pilot_nohy_p_D","w_pilot_nohy_z","w_pilot_nohy_z_D","w_pilot_rucebok_l","w_pilot_rucebok_l_d","w_pilot_rucebok_p","w_pilot_rucebok_p_D","w_pilot_nohybok_l","w_pilot_nohybok_l_d","w_pilot_nohybok_p","w_pilot_nohybok_p_d","w_pilot_ramena","w_pilot_ramena_d","w_pilot_helma","w_pilot_helma_d","e_spec_hrud_p","e_spec_hrud_p_d","e_spec_ruka_bok_p","e_spec_ruka_bok_p_d","e_spec_ruka_bok_l","e_spec_ruka_bok_l_d","e_spec_ramena","e_spec_ramena_d","e_spec_zada_z","e_spec_zada_p_z","e_spec_hrud_p","e_spec_hrud_p_z","e_spec_satek_back","e_spec_satek_back_d","e_spec_satek_side","e_spec_satek_side_d","jirka_hrud_p","jirka_hrud_p_D","jirka_zada_z","jirka_zada_p_D","jirka_nohy_p","jirka_nohy_p_D","jirka_nohy_z","jirka_nohy_z_D","jirka_rukabok_p","jirka_rukabok_p_d","jirka_nohybok_l","jirka_nohybok_l_d","ang_bluza3","ang_bluza3_d","ang_face_f10","ang_face_f10_d","ang_sako_b","ang_sako_b_d","ang_sako_f","ang_sako_f_d","karel_hrud_p","karel_hrud_p_d","karel_rukabok","karel_rukabok_d","karel_zada","karel_zada_d","petr_hrud_p","petr_hrud_p_d","petr_zada_z","petr_zada_z_d","petr_nohy_zad","petr_nohy_zad_d","petr_nohy_pr","petr_nohy_pr_d","\o\char\New_civlegsT.pac","\o\char\New_civlegsT_i.pac","\o\char\New_civtopT1.pac","\o\char\New_civtopT1_i.pac","\o\char\New_civtopT2.pac","\o\char\New_civtopT2_i.pac","\o\char\New_civtopT3.pac","\o\char\New_civtopT3_i.pac","\o\char\New_civtopT4.pac","\o\char\New_civtopT4_i.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","\o\char\Civ_leg_dgre.pac","\o\char\Civ_leg_dgre_i.pac","\o\char\Civ_top_pul_r.pac","\o\char\Civ_top_pul_r_i.pac","\o\char\Civ_top_pulo.pac","\o\char\Civ_top_pulo_i.pac","\o\char\Civ_top_jacket.pac","\o\char\Civ_top_jacket_i.pac","\o\char\Civ_top_jack_r.pac","\o\char\Civ_top_jack_r_i.pac","\o\char\new_civ_jeans.pac","\o\char\new_civ_jeans_i.pac","\o\char\tom_civ_top.pac","\o\char\tom_civ_top_i.pac","\o\char\tom_civ_ruk.pac","\o\char\tom_civ_ruk_i.pac","\o\char\fizl_gate.pac","\o\char\fizl_gate_i.pac","\o\char\fizl_top.pac","\o\char\fizl_top_i.pac","\o\char\fizl_rukav.pac","\o\char\fizl_rukav_i.pac","\o\char\new_civ_jeansblck.pac","\o\char\new_civ_jnsbl_i.pac","\o\char\honza_civ_top.pac","\o\char\honza_civ_top_i.pac","\o\char\honza_civ_ruk.pac","\o\char\honza_civ_ruk_i.pac","\o\char\cern_civ_top.pac","\o\char\cern_civ_top_i.pac","\o\char\cern_civ_ruk.pac","\o\char\cern_civ_ruk_i.pac","\o\char\club_civ_T-s copy.pac","\o\char\club_civ_T-sc_i.pac"};
		moves="CfgMovesMC";
		accuracy=0.4;
		type=0;
		threat[]={0.0,0.0,0.0};
		camouflage=1.2;
		cost=100000;
		side=3;
		weapons[]={"Throw","Put"};
		magazines[]={};
		};

	class Civilian2:Civilian
		{
		displayName="$STR_DN_MAN2";
		model="\graa_units\civ_man2.p3d";
		};

	class Civilian3:Civilian
		{
		displayName="$STR_DN_MAN3";
		model="\graa_units\civ_man3.p3d";
		};

	class Civilian4:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN4";
		model="\graa_units\civ_man4.p3d";
		};

	class Civilian5:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN5";
		model="\graa_units\civ_man5.p3d";
		};

	class Civilian6:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN6";
		model="\graa_units\civ_man6.p3d";
		};

	class Civilian7:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN7";
		model="\graa_units\civ_man7.p3d";
		};

	class Civilian9:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN8";
		model="\graa_units\civ_man8.p3d";
		};

	class Civilian10:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_MAN9";
		model="\graa_units\civ_man9.p3d";
		};

	class Civilian11:Civilian
		{
		access=2;
		displayName="Police Officer";
		model="\graa_units\civ_pol1.p3d";
		hiddenSelections[]={"police","rookie","sailor"};
		weaponSlots="1	 + 6*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"cz75","binocular","Throw","Put"};
		magazines[]={"cz75mag","cz75mag","cz75mag","cz75mag"};
		};

	class Woman1:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_WOMAN1";
		model="\O\Char\civilistka01a";
		moves="CfgMovesMCWoman";
		woman=1;
		wounds[]={"\o\char\civ_topin.pac","\o\char\civ_topin_d.pac","\o\char\new_civ_rb.pac","\o\char\new_civ_rb_d.pac","\o\char\new_civ_bnd.pac","\o\char\new_civ_bnd_d.pac","\o\char\sukne_2.pac","\o\char\sukne_2_d.pac","\o\misc\civilistka_leg.pac","\o\misc\civilistka_leg_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
		};

	class Woman2:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_WOMAN2";
		model="\O\Char\civilistka01b";
		moves="CfgMovesMCWoman";
		woman=1;
		wounds[]={"\o\char\sukne_kyt.pac","\o\char\sukne_kyt_d.pac","\o\char\svetr_bez.pac","\o\char\svetr_bez_d.pac","\o\char\civ_top_zel.pac","\o\char\civ_top_zel_d.pac","\o\misc\civilistka_leg.pac","\o\misc\civilistka_leg_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
		};

	class Woman3:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_WOMAN3";
		model="\O\Char\civilistka02a";
		moves="CfgMovesMCWoman";
		woman=1;
		wounds[]={"\o\char\civ_topin.pac","\o\char\civ_topin_d.pac","\o\char\new_civ_rb.pac","\o\char\new_civ_rb_d.pac","\o\char\new_civ_bnd.pac","\o\char\new_civ_bnd_d.pac","\o\char\civilistka_jeans.pac","\o\char\civilistka_jeans_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
		};

	class Woman4:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_WOMAN4";
		model="\O\Char\civilistka02b";
		moves="CfgMovesMCWoman";
		woman=1;
		wounds[]={"\o\char\civilistka_jeans.pac","\o\char\civilistka_jeans_d.pac","\o\char\civilistka1.pac","\o\char\civilistka1_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
		};

	class Woman5:Civilian
		{
		access=2;
		displayName="$STR_DN_OUT_WOMAN5";
		model="\O\Char\civilistka02c";
		moves="CfgMovesMCWoman";
		woman=1;
		wounds[]={"\o\char\namor.pac","\o\char\namor_d.pac","\o\char\namor_rukav.pac","\o\char\namor_rukav_d.pac","\o\char\civilistka_pants.pac","\o\char\civilistka_pants_d.pac","\o\misc\eva.pac","\o\misc\eva_d.pac","\o\misc\kamila.pac","\o\misc\kamila_d.pac","\o\misc\lada.pac","\o\misc\lada_d.pac","\o\misc\lucie.pac","\o\misc\lucie_d.pac","\o\misc\marketa.pac","\o\misc\marketa_d.pac","\o\misc\nada.pac","\o\misc\nada_d.pac","xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen"};
		};
//////////////////////////////Air////////////////////////////////////////////////
	class ParachuteC:ParachuteBase
		{
		scope=2;
		accuracy=0.5;
		side=3;
		crew="Civilian";
		};

	class Cessna:A10
		{
		scope=2;
		crew="Civilian";
		side=3;
		displayName="$STR_DN_PLANE";
		nameSound="plane";
		accuracy=0.3;
		maxSpeed=300;
		gearRetracting=0;
		ejectSpeed[]={0,0,0};
		armor=15;
		cost=200000;
		model="cessna182";
		picture="icessna";
		weapons[]={};
		magazines[]={};
		fov=0.5;
		landingAoa="7*3.1415/180";
		driverAction="ManActCessnaPilot";
		cargoAction[]={"ManActCessnaCoPilot","ManActCessnaCargo"};
		soundEngine[]={"Vehicles\plane",0.3162278,1};
		soundEnviron[]={"Objects\noise",0.001,1.0};
		soundServo[]={"Vehicles\gun_elevate",0.01,0.4};
		transportSoldier=3;
		extCameraPosition[]={0,2,-30};
		type=2;
		threat[]={0.1,1,0.7};
		audible=6;
		aileronSensitivity=0.33;
		elevatorSensitivity=0.1;
		noseDownCoef=0.025;
		vehicleClass="Air";

		class Reflectors
			{

			class Left
				{
				color[]={0.9,0.8,0.8,1.0};
				ambient[]={0.1,0.1,0.1,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=0.25;
				};

			class Right
				{
				color[]={0.9,0.8,0.8,1.0};
				ambient[]={0.1,0.1,0.1,1.0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=0.25;
				};
			};

		class IndicatorAltRadar
			{
			selection="alt";
			axis="osa_alt";
			angle=-355;
			min=0;
			max=150;
			};

		class IndicatorAltRadar2
			{
			selection="alt2";
			axis="osa_alt2";
			angle=-355;
			min=0;
			max=150;
			};

		class IndicatorSpeed
			{
			selection="mph";
			axis="osa_mph";
			angle=-300;
			min=0;
			max=90;
			};

		class IndicatorVertSpeed
			{
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-30;
			max=30;
			};

		class IndicatorVertSpeed2
			{
			selection="vert_speed2";
			axis="osa_vert_speed2";
			angle=-300;
			min=-30;
			max=30;
			};

		class IndicatorRPM
			{
			selection="rpm";
			axis="osa_rpm";
			angle=-240;
			min=0;
			max=1;
			};

		class IndicatorCompass
			{
			selection="kompas";
			axis="osa_kompas";
			angle=360;
			min=-3.1415927;
			max=3.1415927;
			};

		class IndicatorWatch
			{
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=0;
			};

		class IndicatorWatch2
			{
			hour="hodinova2";
			minute="minutova2";
			axis="osa_time2";
			reversed=0;
			};
		};
//////////////////////////////Cars///////////////////////////////////////////////
	class Rapid:SkodaBase
		{
		vehicleClass="Cars";
		scope=2;
		picture="iskoda";
		maxSpeed=200;
		displayName="$STR_DN_ASTON";
		nameSound="car";
		accuracy=0.5;
		armor=10;
		cost=90000;
		fuelCapacity=50;
		transportSoldier=1;
		model="rapid";
		soundEngine[]={"Vehicles\car",0.0316228,1.5};
		weapons[]={"SportCarHorn"};
		magazines[]={};
		typicalCargo[]={};
		dammageHalf[]={"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa","rapid_skloP.paa","rapid_skloPB.paa"};
		dammageFull[]={"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa","rapid_skloP.paa","rapid_skloPC.paa"};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-260;
			min=0;
			max="180 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-240;
			min=0;
			max=1;
			};
		};

	class RapidY:Rapid
		{
		vehicleClass="Cars";
		scope=2;
		model="rapid_y";
		};

	class Skoda:SkodaBase
		{
		scope=2;
		model="skodovka";
		displayName="$STR_DN_SKODA_YELLOW";
		};

	class SkodaBlue:SkodaBase
		{
		scope=2;
		model="skodovka_blue";
		displayName="$STR_DN_SKODA_BLUE";
		};

	class SkodaRed:SkodaBase
		{
		scope=2;
		model="skodovka_red";
		displayName="$STR_DN_SKODA_RED";
		};

	class SkodaGreen:SkodaBase
		{
		scope=2;
		model="skodovka_green";
		displayName="$STR_DN_SKODA_GREEN";
		};

	class Mini:SkodaBase
		{
		vehicleClass="Cars";
		hideWeaponsCargo=1;
		scope=2;
		picture="\mini\imini";
		maxSpeed=120;
		displayName="$STR_DN_ADD_MINI";
		nameSound="car";
		accuracy=0.5;
		armor=10;
		cost=1000;
		fuelCapacity=50;
		transportSoldier=3;
		model="\mini\SmallCar";
		soundEngine[]={"\mini\MiniSound",0.0177828,1.0};
		weapons[]={"SportCarHorn"};
		magazines[]={};
		typicalCargo[]={};
		crew="Civilian4";
		driverAction="ManActMiniDriver";
		dammageHalf[]={"\mini\mini_skloa.paa","\mini\mini_skloaR1.paa","\mini\mini_sklob.paa","\mini\mini_sklobR1.paa"};
		dammageFull[]={"\mini\mini_skloa.paa","\mini\mini_skloaR2.paa","\mini\mini_sklob.paa","\mini\mini_sklobR2.paa"};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-260;
			min=0;
			max="160 / 3.6";
			};

		class IndicatorSpeed2
			{
			selection="ukaz_rychlo2";
			axis="osa_rychlo2";
			angle=-260;
			min=0;
			max="320 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=190;
			min=0;
			max=1;
			};
		};
	class Trabant: SkodaBase
		{
		vehicleClass="Cars";
		scope=public;
		picture=\trab\itrabant;
		maxSpeed=100;
		displayName=$STR_DN_TRABANT;
		nameSound="car";
		accuracy=0.50;
		armor=1;
		cost=1000;
		fuelCapacity=50;
		transportSoldier = 3;
		model=\trab\trabant;
		soundEngine[]={\trab\trabbi,db-35,1.0};
		weapons[]={SportCarHorn};
		magazines[]={};
		typicalCargo[]={};
		driverAction = ManActTrabiDriver;
		dammageHalf[]=
		{
			jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa
		};
		dammageFull[]=
		{
			jeep_kab_sklo1.paa,jeep_kab_sklo1C.paa
		};
		class IndicatorSpeed
		{
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -260;
			min = 0;
			max = 120 / 3.6;
		};
	};

	class Kolo:Motorcycle
		{
		access="ReadOnly";
		vehicleClass="Cars";
		canFloat=0;
		isBicycle=1;
		hideWeaponsDriver=0;
		displayName="$STR_DN_KOLO_KOLO";
		scope=2;
		picture="\Kolo\ikolo";
		icon="\O\Vehl\moto.paa";
		maxSpeed=20;
		crew="Civilian5";
		side=3;
		nameSound="car";
		accuracy=0.5;
		model="\Kolo\Kolo";
		terrainCoef=6.0;
		soundEngine[]={"\Kolo\bc_chain.wav",0.0177828,1};
		weapons[]={"BikeHorn"};
		magazines[]={};
		driverAction="ManActKoloDriver";
		transportSoldier=0;
		transportAmmo=0;

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=280;
			min=0;
			max="140 / 3.6";
			};
		};

	class Tractor:Car
		{
		scope=2;
		picture="itruck5t";
		icon="truck";
		side=3;
		displayName="$STR_DN_TRACTOR";
		nameSound="tractor";
		accuracy=0.3;
		fuelCapacity=50;
		transportSoldier=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		weapons[]={};
		magazines[]={};
		wheelCircumference=8;
		turnCoef=9.0;
		maxSpeed=30;
		cost=10000;
		armor=30;
		model="traktor";
		soundEngine[]={"Vehicles\TractorRun",0.0316228,0.5};
		typicalCargo[]={};
		driverAction="ManActTractorDriver";
		getInAction=manactgetintank;
		getOutAction=manactgetouttank;
		vehicleClass="Cars";
		};
		
	class TruckV3SCivil:TruckV3SG
		{
		side=3;
		vehicleClass="Cars";
		crew="Civilian";
		displayName="$STR_DN_PV3S_CIVIL";
		model="v3scivil";
		};

	class JeepPolice:HMMWV
		{
		access=2;
		scope=2;
		crew="civilian8";
		picture="ijeepMUTT";
		maxSpeed=100;
		side=3;
		displayName="$STR_DN_OUT_JEEPP";
		nameSound="jeep";
		accuracy=0.5;
		armor=20;
		cost=30000;
		fuelCapacity=50;
		transportSoldier=1;
		transportAmmo=0;
		model="\O\Vehl\CJ5";
		armorWheels=0.12;
		driverAction="ManActJeepDriver";
		cargoAction[]={"ManActJeepCoDriver","ManActJeepCoDriverBack"};
		cargoIsCoDriver[]={1,0};
		soundEngine[]={"Vehicles\jeepmove",0.1778279,1};
		typicalCargo[]={"Soldier","SoldierLAW"};
		dammageHalf[]={"\o\vehl\cj5_okno.paa","\o\vehl\cj5_oknoR1.paa"};
		dammageFull[]={"\o\vehl\cj5_okno.paa","\o\vehl\cj5_oknoR2.paa"};
		vehicleClass="Cars";

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
		};

	class Bus:TruckV3SCivil
		{
		access=2;
		displayName="$STR_DN_OUT_BUS";
		model="\o\vehl\skodasm11";
		crew="civilian5";
		picture="\o\vehl\iskodasm11.paa";
		icon="\O\vehl\bus.paa";
		turnCoef=12.0;
		transportSoldier=27;
		driverAction="ManActBusDriver";
		cargoAction[]={"ManActBusCargo"};
		cargoIsCoDriver[]={0};
		dammageHalf[]={"\o\vehl\bus_okna.paa","\o\vehl\bus_oknaR1.paa"};
		dammageFull[]={"\o\vehl\bus_okna.paa","\o\vehl\bus_oknaR2.paa"};

		class TransportMagazines
			{

			class _xx_AK47
				{
				magazine="AK47";
				count="30*0";
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count="10*0";
				};

			class _xx_PK
				{
				magazine="PK";
				count="5*0";
				};

			class _xx_LAWLauncher
				{
				magazine="LAWLauncher";
				count="3*0";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*0";
				};
			};
		};

	class Jawa:Motorcycle
		{
		access=2;
		vehicleClass="Cars";
		canFloat=0;
		hideWeaponsDriver=0;
		displayName="$STR_DN_OUT_JAWA";
		scope=2;
		picture="\o\vehl\ijawa";
		icon="\O\Vehl\moto.paa";
		maxSpeed=130;
		crew="Civilian6";
		side=3;
		nameSound="car";
		accuracy=0.5;
		model="\O\Vehl\JAWA250";
		soundEngine[]={"\O\Vehl\moto.wss",0.0177828,1};
		weapons[]={"SportCarHorn"};
		magazines[]={};
		driverAction="ManActJAWADriver";
		cargoAction[]={"ManActJAWACoDriver"};
		transportSoldier=1;
		transportAmmo=0;

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=280;
			min=0;
			max="140 / 3.6";
			};
		};
	class JetRanger:Helicopter
		{
		scope=1;
		access=2;
		picture="\OH58\iKiowa";
		crew="Civilian";
		side=3;
		displayName="$STR_DN_OUT_HELI";
		nameSound="chopper";
		accuracy=0.3;
		gunnerUsesPilotView=1;
		driverAction="ManActUH60Pilot";
		gunnerAction="ManActUH60Pilot";
		maxSpeed=235;
		soundEngine[]={"\oh58\oh58",1.7782794,1};
		armor=30;
		cost=10000000;
		model="\O\Vehl\JetRanger.p3d";
		rotorBig="vrtule_velka";
		rotorBigBlend="vrtule_velka_bl_";
		rotorSmall="vrtule_mala";
		rotorSmallBlend="vrtule_mala_bl";
		weapons[]={};
		magazines[]={};
		type="VAir";
		threat[]={0.6,0.6,0.3};
		dammageHalf[]={"\OH58\OH58_sklotest.paa","\OH58\OH58_sklotest_B.paa","\OH58\OH58_sklotestL.paa","\OH58\OH58_sklotestL_B.paa"};
		dammageFull[]={"\OH58\OH58_sklotest.paa","\OH58\OH58_sklotest_C.paa","\OH58\OH58_sklotestL.paa","\OH58\OH58_sklotestL_C.paa"};

		class ViewOptics
			{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-86;
			maxAngleY=86;
			initFov=0.1;
			minFov=0.03;
			maxFov=1.2;
			};
		};

	class JetRangerSilent:JetRanger
		{
		access=2;
		nameSound="chopper";
		accuracy=0.3;
		maxSpeed=235;
		soundEngine[]={"\oh58\oh58",0.0001,1};
		displayName="$STR_DN_OUT_HELI_SIL";
		armor=30;
		cost=10000000;
		model="\O\Vehl\JR_RC.p3d";
		};