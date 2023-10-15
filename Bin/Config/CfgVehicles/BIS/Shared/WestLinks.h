//Soldiers
class OfficerWNight : USA_SquadLeaderNight
{
	scope = SCOPE_HIDDEN;
};

class SoldierWPilotHG : West_HelicopterPilot
{
	scope = SCOPE_HIDDEN;
};

class SoldierWSaboteurPipeHG : USA_SF_Operator
{
	scope = SCOPE_HIDDEN;
};

class SoldierWSaboteurPipeHGS : USA_SF_Operator
{
	scope = SCOPE_HIDDEN;
};

class SoldierWSaboteurXMS : USA_SF_Ranger_TeamLeader
{
	scope = SCOPE_HIDDEN;
};

class SoldierWNOG : SoldierWB
{
	scope = SCOPE_HIDDEN;
};

class SoldierW : SoldierWG
{
	scope = SCOPE_HIDDEN;
};

class SoldierWLAWSniper : SoldierWSniper
{
	scope = SCOPE_HIDDEN;
};

class SoldierWSaboteur : SoldierWB
{
	scope = SCOPE_HIDDEN;
};

class SoldierWMortar : USA_Grenadier
{
	scope = SCOPE_HIDDEN;
};

class SoldierEFakeW : SoldierWB
{
	scope = 1;
};

class OfficerWHG :OfficerW
{
	scope = 1;
};

class SoldierWCaptive :SoldierWB
{
	scope = 1;
};

class SoldierWG36a :SoldierWB
{
	scope = 1;
};

class SoldierWSteyr :SoldierWB
{
	scope = 1;
};

class SoldierWXMS :SoldierWB
{
	scope = 1;
};

class HeavyGW :SoldierWG
{
	scope = 1;
};

class BISCamelPilot : SoldierWB
{
	scope = SCOPE_HIDDEN;
	model = "\BISCamel\BIScamelpilot";
	nameSound = "pilot";
	displayName = "$STR_BISCAMEL_PILOT";
	weapons[] = {"Revolver", "Throw", "Put"};
	magazines[] = {"RevolverMag", "RevolverMag", "RevolverMag", "RevolverMag", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell"};
	wounds[] = {"\BISCamel\pilot_jacket.pac", "\BISCamel\pilot_jacket_i.pac", "\BISCamel\pilot_kukla.pac", "\BISCamel\pilot_kukla_i.pac", "\BISCamel\pilot_r.pac", "\BISCamel\pilot_r_i.pac", "\o\char\Civ_top_pul_r.pac", "\o\char\Civ_top_pul_r_i.pac", "\o\char\Civ_top_pulo.pac", "\o\char\Civ_top_pulo_i.pac", "\o\char\Civ_leg_dgre.pac", "\o\char\Civ_leg_dgre_i.pac", "xicht_a.paa", "xicht_a_zranen", "xicht_b.paa", "xicht_a_zranen", "xicht_c.paa", "xicht_a_zranen", "xicht_d.paa", "xicht_a_zranen", "xicht_e.paa", "xicht_e_zranen", "xicht_f.paa", "xicht_a_zranen", "xicht_g.paa", "xicht_a_zranen", "xicht_h.paa", "xicht_a_zranen", "xicht_i.paa", "xicht_a_zranen", "xicht_j.paa", "xicht_a_zranen", "xicht_k.paa", "xicht_a_zranen", "xicht_l.paa", "xicht_a_zranen", "xicht_m.paa", "xicht_a_zranen", "xicht_n.paa", "xicht_a_zranen", "xicht_o.paa", "xicht_o_zranen", "xicht_p.paa", "xicht_a_zranen", "xicht_q.paa", "xicht_a_zranen", "xicht_r.paa", "xicht_a_zranen", "xicht_s.paa", "xicht_a_zranen", "xicht_t.paa", "xicht_a_zranen", "xicht_u.paa", "xicht_a_zranen", "xicht_v.paa", "xicht_v_zranen", "xicht_w.paa", "xicht_w_zranen", "xicht_x.paa", "xicht_a_zranen", "xicht_y.paa", "xicht_a_zranen", "xicht_z.paa", "xicht_a_zranen", "xicht_2a.paa", "xicht_a_zranen", "xicht_2b.paa", "xicht_w_zranen", "xicht_2c.paa", "xicht_a_zranen", "xicht_2d.paa", "xicht_v_zranen", "xicht_2e.paa", "xicht_a_zranen", "xicht_2f.paa", "xicht_a_zranen", "xicht_2g.paa", "xicht_w_zranen", "xicht_2h.paa", "xicht_a_zranen", "xicht_2i.paa", "xicht_a_zranen", "xicht_2j.paa", "xicht_a_zranen", "xicht_2k.paa", "xicht_a_zranen", "xicht_2l.paa", "xicht_a_zranen", "xicht_2m.paa", "xicht_a_zranen", "xicht_2n.paa", "xicht_a_zranen", "xicht_2o.paa", "xicht_a_zranen", "xicht_2p.paa", "xicht_2p_zranen", "xicht_2q.paa", "xicht_a_zranen", "xicht_2r.paa", "xicht_e_zranen", "xicht_2s.paa", "xicht_a_zranen", "xicht_2t.paa", "xicht_a_zranen", "xicht_2u.paa", "xicht_a_zranen", "xicht_2v.paa", "xicht_a_zranen", "xicht_2w.paa", "xicht_w_zranen", "xicht_2x.paa", "xicht_a_zranen", "xicht_2y.paa", "xicht_a_zranen", "xicht_2z.paa", "xicht_a_zranen"};
};