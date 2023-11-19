//Soldiers
class SoldierENOG : SoldierEB
{
	scope = SCOPE_HIDDEN;
};

class SoldierE : SoldierEG
{
	scope = SCOPE_HIDDEN;
};

class SoldierESaboteur : SoldierEB
{
	scope = SCOPE_HIDDEN;
};

class SoldierWFakeE : SoldierEB
{
	scope = SCOPE_HIDDEN;
};

class OfficerEHG : OfficerE
{
	scope = SCOPE_HIDDEN;
};

class BISCamelPilot2 : BISCamelPilot
{
	side = 0;
	model = "\BISCamel\BIScamelpilot2";
	displayName = "$STR_BISCAMEL_PILOT";
	wounds[] = {"\BISCamel\pilot2_jacket.pac", "\BISCamel\pilot2_jacket_i.pac", "\BISCamel\pilot2_kukla.pac", "\BISCamel\pilot2_kukla_i.pac", "\o\char\Civ_top_jack_r.pac", "\o\char\Civ_top_jack_r_i.pac", "\o\char\Civ_top_pul_r.pac", "\o\char\Civ_top_pul_r_i.pac", "\o\char\Civ_top_pulo.pac", "\o\char\Civ_top_pulo_i.pac", "\o\char\new_civ_jeansblck.pac", "\o\char\new_civ_jnsbl_i.pac", "xicht_a.paa", "xicht_a_zranen", "xicht_b.paa", "xicht_a_zranen", "xicht_c.paa", "xicht_a_zranen", "xicht_d.paa", "xicht_a_zranen", "xicht_e.paa", "xicht_e_zranen", "xicht_f.paa", "xicht_a_zranen", "xicht_g.paa", "xicht_a_zranen", "xicht_h.paa", "xicht_a_zranen", "xicht_i.paa", "xicht_a_zranen", "xicht_j.paa", "xicht_a_zranen", "xicht_k.paa", "xicht_a_zranen", "xicht_l.paa", "xicht_a_zranen", "xicht_m.paa", "xicht_a_zranen", "xicht_n.paa", "xicht_a_zranen", "xicht_o.paa", "xicht_o_zranen", "xicht_p.paa", "xicht_a_zranen", "xicht_q.paa", "xicht_a_zranen", "xicht_r.paa", "xicht_a_zranen", "xicht_s.paa", "xicht_a_zranen", "xicht_t.paa", "xicht_a_zranen", "xicht_u.paa", "xicht_a_zranen", "xicht_v.paa", "xicht_v_zranen", "xicht_w.paa", "xicht_w_zranen", "xicht_x.paa", "xicht_a_zranen", "xicht_y.paa", "xicht_a_zranen", "xicht_z.paa", "xicht_a_zranen", "xicht_2a.paa", "xicht_a_zranen", "xicht_2b.paa", "xicht_w_zranen", "xicht_2c.paa", "xicht_a_zranen", "xicht_2d.paa", "xicht_v_zranen", "xicht_2e.paa", "xicht_a_zranen", "xicht_2f.paa", "xicht_a_zranen", "xicht_2g.paa", "xicht_w_zranen", "xicht_2h.paa", "xicht_a_zranen", "xicht_2i.paa", "xicht_a_zranen", "xicht_2j.paa", "xicht_a_zranen", "xicht_2k.paa", "xicht_a_zranen", "xicht_2l.paa", "xicht_a_zranen", "xicht_2m.paa", "xicht_a_zranen", "xicht_2n.paa", "xicht_a_zranen", "xicht_2o.paa", "xicht_a_zranen", "xicht_2p.paa", "xicht_2p_zranen", "xicht_2q.paa", "xicht_a_zranen", "xicht_2r.paa", "xicht_e_zranen", "xicht_2s.paa", "xicht_a_zranen", "xicht_2t.paa", "xicht_a_zranen", "xicht_2u.paa", "xicht_a_zranen", "xicht_2v.paa", "xicht_a_zranen", "xicht_2w.paa", "xicht_w_zranen", "xicht_2x.paa", "xicht_a_zranen", "xicht_2y.paa", "xicht_a_zranen", "xicht_2z.paa", "xicht_a_zranen"};
};

//Air
class BISCamel2 : BISCamel
{
	side = 0;
	Crew = "BISCamelPilot2";
	Model = "\BISCamel\BIScamel2";
	picture = "\BISCamel\icamel2";
	DisplayName = "$STR_BISCAMEL_NAME2";
};




class T80Auto : T80
{
	scope = SCOPE_HIDDEN;
};





class Ural_Open : USSR_Ural4320Open
{
	scope = SCOPE_HIDDEN;
};

class Scud : USSR_ScudLauncher
{
	scope = SCOPE_HIDDEN;
};