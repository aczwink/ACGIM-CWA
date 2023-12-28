class SoldierECrew : SoldierEB
{
	hiddenSelections[]={};
	nameSound="crew";
	displayName="Crew";
	vehicleClass="Infantry (Misc)";
	weapons[]={"Tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag", "RDG1Red", "RDG1Red", "RDG1Red"};

#ifdef ACGIM_SCENARIO_1985
	model="\d4t_files\models\russia\infantry\1985\ussr_crew85.p3d";
	wounds[]={
		"\d4t_tex\rc85\ru03.pac","\d4t_tex\rc85\ru03D.pac",
		"\d4t_tex\rc85\helm2.paa","\d4t_tex\rc85\helm2_d.paa",
		"\d4t_tex\rc85\arm_l.paa","\d4t_tex\rc85\arm_l_d.paa",
		"\d4t_tex\rc85\arm_r.paa","\d4t_tex\rc85\arm_r_d.paa",
		"\d4t_tex\rc85\back.paa","\d4t_tex\rc85\back_d.paa",
		"\d4t_tex\rc85\chest.paa","\d4t_tex\rc85\chest_d.paa",
		"\d4t_tex\rc85\leg_l.paa","\d4t_tex\rc85\leg_l_d.paa",
		"\d4t_tex\rc85\leg_r.paa","\d4t_tex\rc85\leg_r_d.paa"
	};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\ffur_ru\cr\RHS_crew1";
	wounds[] = {
		"\ffur_ru\cr\f\ru00.pac","\ffur_ru\cr\f\ru00D.pac",
		"\ffur_ru\cr\helm2.paa","\ffur_ru\cr\helm2_d.paa",
		"\ffur_ru\cr\vsr\arm_l.paa","\ffur_ru\cr\vsr\arm_l_d.paa",
		"\ffur_ru\cr\vsr\arm_r.paa","\ffur_ru\cr\vsr\arm_r_d.paa",
		"\ffur_ru\cr\vsr\back.paa","\ffur_ru\cr\vsr\back_d.paa",
		"\ffur_ru\cr\vsr\chest.paa","\ffur_ru\cr\vsr\chest_d.paa",
		"\ffur_ru\cr\vsr\leg_l.paa","\ffur_ru\cr\vsr\leg_l_d.paa",
		"\ffur_ru\cr\vsr\leg_r.paa","\ffur_ru\cr\vsr\leg_r_d.paa"
	};
#endif
};

class Russia_HelicopterPilot : SoldierEB
{
	displayName="Helicopter Pilot";
	vehicleClass="Infantry (Misc)";
	nameSound="pilot";
	weapons[]={"Tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag", "RDG1Red", "RDG1Red", "RDG1Red"};

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"headgear","shlem2"};
	model="\d4t_files\models\russia\infantry\1985\ussr_helipilot85.p3d";
	wounds[]={
		"\d4t_tex\rp85\leg_r.paa","\d4t_tex\rp85\leg_r_d.paa",
		"\d4t_tex\rp85\leg_l.paa","\d4t_tex\rp85\leg_l_d.paa",
		"\d4t_tex\rp85\arm_l.paa","\d4t_tex\rp85\arm_l_d.paa",
		"\d4t_tex\rp85\arm_r.paa","\d4t_tex\rp85\arm_r_d.paa",
		"\d4t_tex\rp85\vest_b.paa","\d4t_tex\rp85\vest_b_d.paa",
		"\d4t_tex\rp85\vest_f.paa","\d4t_tex\rp85\vest_f_d.paa",
		"\d4t_tex\rp85\helmet.paa","\d4t_tex\rp85\helmet_d.paa",
		"\d4t_tex\rp85\rl02.pac","\d4t_tex\rp85\rl02D.pac"
	};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"headgear","shlem2"};
	model="\ffur_ru\cr\rhs_pilot";
	wounds[] = {
		"\ffur_ru\cr\pil\leg_r.paa","\ffur_ru\cr\pil\leg_r_d.paa",
		"\ffur_ru\cr\pil\leg_l.paa","\ffur_ru\cr\pil\leg_l_d.paa",
		"\ffur_ru\cr\pil\arm_l.paa","\ffur_ru\cr\pil\arm_l_d.paa",
		"\ffur_ru\cr\pil\arm_r.paa","\ffur_ru\cr\pil\arm_r_d.paa",
		"\ffur_ru\cr\pil\vest_b.paa","\ffur_ru\cr\pil\vest_b_d.paa",
		"\ffur_ru\cr\pil\vest_f.paa","\ffur_ru\cr\pil\vest_f_d.paa",
		"\ffur_ru\cr\helmet.paa","\ffur_ru\cr\helmet_d.paa",
		"\ffur_ru\cr\f\rl02.pac","\ffur_ru\cr\f\rl02D.pac"
	};
#endif
};

class SoldierEPilot : Russia_HelicopterPilot
{
	displayName="Aircraft Pilot";

#ifdef ACGIM_SCENARIO_1985
	model="\d4t_files\models\russia\infantry\1985\ussr_aircraftpilot85.p3d";
	wounds[]={
		"\d4t_tex\rpa85\ArmGrA.paa","\d4t_tex\rpa85\ArmGrAD.paa",
		"\d4t_tex\rpa85\ArmGrB.paa","\d4t_tex\rpa85\ArmGrBD.paa",
		"\d4t_tex\rpa85\ArmGrC.paa","\d4t_tex\rpa85\ArmGrCD.paa",
		"\d4t_tex\rpa85\ArmGnA.paa","\d4t_tex\rpa85\ArmGnAD.paa",
		"\d4t_tex\rpa85\ArmGnB.paa","\d4t_tex\rpa85\ArmGnBD.paa",
		"\d4t_tex\rpa85\ArmGnC.paa","\d4t_tex\rpa85\ArmGnCD.paa",
		"\d4t_tex\rpa85\ArmDsA.paa","\d4t_tex\rpa85\ArmDsAD.paa",
		"\d4t_tex\rpa85\ArmDsB.paa","\d4t_tex\rpa85\ArmDsBD.paa",
		"\d4t_tex\rpa85\ArmDsC.paa","\d4t_tex\rpa85\ArmDsCD.paa",
		"\d4t_tex\rpa85\ArmBlA.paa","\d4t_tex\rpa85\ArmBlAD.paa",
		"\d4t_tex\rpa85\ArmBlB.paa","\d4t_tex\rpa85\ArmBlBD.paa",
		"\d4t_tex\rpa85\LegBl.paa","\d4t_tex\rpa85\LegBlD.paa",
		"\d4t_tex\rpa85\LegDs.paa","\d4t_tex\rpa85\LegDsD.paa",
		"\d4t_tex\rpa85\LegDs2.paa","\d4t_tex\rpa85\LegDs2D.paa",
		"\d4t_tex\rpa85\LegDs3.paa","\d4t_tex\rpa85\LegDs3D.paa",
		"\d4t_tex\rpa85\LegGn.paa","\d4t_tex\rpa85\LegGnD.paa",
		"\d4t_tex\rpa85\LegGn2.paa","\d4t_tex\rpa85\LegGn2D.paa",
		"\d4t_tex\rpa85\LegGn3.paa","\d4t_tex\rpa85\LegGn3D.paa",
		"\d4t_tex\rpa85\LegGr.paa","\d4t_tex\rpa85\LegGrD.paa",
		"\d4t_tex\rpa85\LegGr2.paa","\d4t_tex\rpa85\LegGr2D.paa",
		"\d4t_tex\rpa85\LegGr3.paa","\d4t_tex\rpa85\LegGr3D.paa",
		"\d4t_tex\rpa85\CrwBdy1.paa","\d4t_tex\rpa85\CrwBdy1D.paa",
		"\d4t_tex\rpa85\CrwBdy2.paa","\d4t_tex\rpa85\CrwBdy2D.paa",
		"\d4t_tex\rpa85\CrwBdy3.paa","\d4t_tex\rpa85\CrwBdy3D.paa",
		"\d4t_tex\rpa85\CrwBdy4.paa","\d4t_tex\rpa85\CrwBdy4D.paa",
		"\d4t_tex\rpa85\PilBdyA.paa","\d4t_tex\rpa85\PilBdyAD.paa",
		"\d4t_tex\rpa85\PilBdyB.paa","\d4t_tex\rpa85\PilBdyBD.paa",
		"\d4t_tex\rpa85\PilBdyC.paa","\d4t_tex\rpa85\PilBdyCD.paa",
		"\d4t_tex\rpa85\PilBdyD.paa","\d4t_tex\rpa85\PilBdyDD.paa",
		"\d4t_tex\rpa85\PilBdyE.paa","\d4t_tex\rpa85\PilBdyED.paa",
		"\d4t_tex\rpa85\PilBdyF.paa","\d4t_tex\rpa85\PilBdyFD.paa",
		"\d4t_tex\rpa85\PilBdyG.paa","\d4t_tex\rpa85\PilBdyGD.paa",
		"\d4t_tex\rpa85\PilBdyH.paa","\d4t_tex\rpa85\PilBdyHD.paa",
		"\d4t_tex\rpa85\PilBdyI.paa","\d4t_tex\rpa85\PilBdyID.paa",
		"\d4t_tex\rpa85\PilHel1.paa","\d4t_tex\rpa85\PilHel1D.paa",
		"\d4t_tex\rpa85\PilHel2.paa","\d4t_tex\rpa85\PilHel2D.paa",
		"\d4t_tex\rpa85\PilHel3.paa","\d4t_tex\rpa85\PilHel3D.paa",
		"\d4t_tex\rpa85\PilHel4.paa","\d4t_tex\rpa85\PilHel4D.paa",
		"\d4t_tex\rpa85\PisCov.paa","\d4t_tex\rpa85\PisCovD.paa"
	};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\ffur_us\pt\usmcPilotGrey.p3d";
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
		"\ffur_us\pt\ArmGrA.paa","\ffur_us\pt\ArmGrAD.paa",
		"\ffur_us\pt\ArmGrB.paa","\ffur_us\pt\ArmGrBD.paa",
		"\ffur_us\pt\ArmGrC.paa","\ffur_us\pt\ArmGrCD.paa",
		"\ffur_us\pt\ArmGnA.paa","\ffur_us\pt\ArmGnAD.paa",
		"\ffur_us\pt\ArmGnB.paa","\ffur_us\pt\ArmGnBD.paa",
		"\ffur_us\pt\ArmGnC.paa","\ffur_us\pt\ArmGnCD.paa",
		"\ffur_us\pt\ArmDsA.paa","\ffur_us\pt\ArmDsAD.paa",
		"\ffur_us\pt\ArmDsB.paa","\ffur_us\pt\ArmDsBD.paa",
		"\ffur_us\pt\ArmDsC.paa","\ffur_us\pt\ArmDsCD.paa",
		"\ffur_us\pt\ArmBlA.paa","\ffur_us\pt\ArmBlAD.paa",
		"\ffur_us\pt\ArmBlB.paa","\ffur_us\pt\ArmBlBD.paa",
		"\ffur_us\pt\LegBl.paa","\ffur_us\pt\LegBlD.paa",
		"\ffur_us\pt\LegDs.paa","\ffur_us\pt\LegDsD.paa",
		"\ffur_us\pt\LegDs2.paa","\ffur_us\pt\LegDs2D.paa",
		"\ffur_us\pt\LegDs3.paa","\ffur_us\pt\LegDs3D.paa",
		"\ffur_us\pt\LegGn.paa","\ffur_us\pt\LegGnD.paa",
		"\ffur_us\pt\LegGn2.paa","\ffur_us\pt\LegGn2D.paa",
		"\ffur_us\pt\LegGn3.paa","\ffur_us\pt\LegGn3D.paa",
		"\ffur_us\pt\LegGr.paa","\ffur_us\pt\LegGrD.paa",
		"\ffur_us\pt\LegGr2.paa","\ffur_us\pt\LegGr2D.paa",
		"\ffur_us\pt\LegGr3.paa","\ffur_us\pt\LegGr3D.paa",
		"\ffur_us\pt\CrwBdy1.paa","\ffur_us\pt\CrwBdy1D.paa",
		"\ffur_us\pt\CrwBdy2.paa","\ffur_us\pt\CrwBdy2D.paa",
		"\ffur_us\pt\CrwBdy3.paa","\ffur_us\pt\CrwBdy3D.paa",
		"\ffur_us\pt\CrwBdy4.paa","\ffur_us\pt\CrwBdy4D.paa",
		"\ffur_us\pt\PilBdyA.paa","\ffur_us\pt\PilBdyAD.paa",
		"\ffur_us\pt\PilBdyB.paa","\ffur_us\pt\PilBdyBD.paa",
		"\ffur_us\pt\PilBdyC.paa","\ffur_us\pt\PilBdyCD.paa",
		"\ffur_us\pt\PilBdyD.paa","\ffur_us\pt\PilBdyDD.paa",
		"\ffur_us\pt\PilBdyE.paa","\ffur_us\pt\PilBdyED.paa",
		"\ffur_us\pt\PilBdyF.paa","\ffur_us\pt\PilBdyFD.paa",
		"\ffur_us\pt\PilBdyG.paa","\ffur_us\pt\PilBdyGD.paa",
		"\ffur_us\pt\PilBdyH.paa","\ffur_us\pt\PilBdyHD.paa",
		"\ffur_us\pt\PilBdyI.paa","\ffur_us\pt\PilBdyID.paa",
		"\ffur_us\pt\PilHel1.paa","\ffur_us\pt\PilHel1D.paa",
		"\ffur_us\pt\PilHel2.paa","\ffur_us\pt\PilHel2D.paa",
		"\ffur_us\pt\PilHel3.paa","\ffur_us\pt\PilHel3D.paa",
		"\ffur_us\pt\PilHel4.paa","\ffur_us\pt\PilHel4D.paa",
		"\ffur_us\pt\PisCov.paa","\ffur_us\pt\PisCovD.paa"
	};
#endif
};

class OfficerEHG : SoldierEB
{
	nameSound="officer";
	displayName="Officer";
	vehicleClass="Infantry (Misc)";
	hiddenSelections[]={"medic","_AKmags1","_Armpatch_right","_Bottle","_Cap","_Gpouch","_Helm","_Helmcamo","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_Shovel","_SVDmags","_Tuch","_Backpack","_HelmF"};
	accuracy = ACCURACY_OFFICER;
	cost = COST_OFFICER;
	weapons[]={"Tokarev"};
	magazines[] = {"TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};

class GeneralE : OfficerEHG
{
	displayName = "General";
	model = "mc vojake2_guba";
	weapons[] = {};
	magazines[] = {};
};

class Angelina : SoldierEB
{
	displayName="$STR_DN_ANGELINA";
	vehicleClass="Infantry (Misc)";
	model="angelina.p3d";
	accuracy = ACCURACY_OFFICER;
	cost = COST_OFFICER;
	weapons[]={};
	magazines[]={};
};

//Parachute
class ParachuteEast : ParachuteBase
{
	scope = SCOPE_PUBLIC;
	side = SIDE_EAST;
	crew = "SoldierEB";
	displayName = "Paratrooper";
	vehicleClass = "Infantry";
};