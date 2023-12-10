//---Infantry
class Russia_Rifleman : Soldier
{
	displayName="Rifleman";
	vehicleClass="Infantry";
	scope=public;
	model="\d4t_files\models\russia\infantry\russian_soldier.p3d";
	moves="CfgMovesMC";
	side=EAST;
	cost=40000;
	accuracy=0.7;
	nightVision=1;
	armor=3.5;
	armorStructural=1.5;
	armorHead=1.0;
	armorBody=3.5;
	armorHands=0.500000;
	armorLegs=0.500000;
	hiddenSelections[]={"medic"};
	wounds[]={"d4t_tex\rs\leg_r.paa","d4t_tex\rs\leg_r_d.paa","d4t_tex\rs\leg_l.paa","d4t_tex\rs\leg_l_d.paa","d4t_tex\rs\arm_l.paa","d4t_tex\rs\arm_l_d.paa","d4t_tex\rs\arm_r.paa","d4t_tex\rs\arm_r_d.paa","d4t_tex\rs\6b9_bck.paa","d4t_tex\rs\6b9_bck_d.paa","d4t_tex\rs\6b9_frt.paa","d4t_tex\rs\6b9_frt_d.paa","d4t_tex\rs\vest2_bk.paa","d4t_tex\rs\vest2_bk_d.paa","d4t_tex\rs\vest2_frt.paa","d4t_tex\rs\vest2_frt_d.paa","d4t_tex\rs\back.paa","d4t_tex\rs\back_d.paa","d4t_tex\rs\chest.paa","d4t_tex\rs\chest_d.paa","d4t_tex\rs\cap_body.paa","d4t_tex\rs\cap_body_d.paa","d4t_tex\rs\kaska.paa","d4t_tex\rs\kaska_d.paa","d4t_tex\rs\kaska_paint.paa","d4t_tex\rs\kaska_paint_d.paa","d4t_tex\rs\kaskasetka.paa","d4t_tex\rs\kaskasetka_d.paa"};
	weapons[]={ak74m, aps, Throw, Put};//aps is not finished, rgos
	magazines[]={30rd545x39mag, 30rd545x39mag, 30rd545x39mag, 30rd545x39mag, 30rd545x39mag, 30rd545x39mag, 30rd545x39mag, "d4t_rgo","d4t_rgo","d4t_rgo", 20rd9x18mag, 20rd9x18mag, 20rd9x18mag, 20rd9x18mag};
};

	class SoldierEG:Russia_Rifleman
		{
		cost=50000;
		accuracy=1000;
		displayName="Grenadier";
		model="\ffur_ru\mt\ffur_ru_mg";
		weapons[]={"d4t_AK74GP25","d4t_aps","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		};

	class SoldierEMedic:Russia_Rifleman
		{
		accuracy=1000;
		picture="\misc\medik.paa";
		model="\ffur_ru\mt\ffur_ru_medic";
		hiddenSelections[]={"medic"};
		scope=2;
		cost=60000;
		displayName="Medic";
		weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant=1;
		weapons[]={"d4t_AK74","d4t_aps","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		nameSound="medic";
		};

	class SoldierENOG:Russia_Rifleman
		{
		scope=1;
		};

	class SoldierECrew:Russia_Rifleman
		{
		model="\ffur_ru\cr\RHS_crew1";
		nameSound="crew";
		accuracy=1000;
		displayName="Crew";
		vehicleClass="Infantry (Pilots & Crew)";
		wounds[]={"\ffur_ru\cr\f\ru00.pac","\ffur_ru\cr\f\ru00D.pac","\ffur_ru\cr\helm2.paa","\ffur_ru\cr\helm2_d.paa","\ffur_ru\cr\vsr\arm_l.paa","\ffur_ru\cr\vsr\arm_l_d.paa","\ffur_ru\cr\vsr\arm_r.paa","\ffur_ru\cr\vsr\arm_r_d.paa","\ffur_ru\cr\vsr\back.paa","\ffur_ru\cr\vsr\back_d.paa","\ffur_ru\cr\vsr\chest.paa","\ffur_ru\cr\vsr\chest_d.paa","\ffur_ru\cr\vsr\leg_l.paa","\ffur_ru\cr\vsr\leg_l_d.paa","\ffur_ru\cr\vsr\leg_r.paa","\ffur_ru\cr\vsr\leg_r_d.paa"};
		weapons[]={"d4t_aps","NVGoggles","Throw","Put"};
		magazines[]={"d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		};

	class SoldierEPilot:Russia_Rifleman
		{
		accuracy=1000;
		model="\ffur_ru\cr\rhs_pilot";
		hiddenSelections[]={"headgear","shlem2"};
		wounds[]={"\ffur_ru\cr\pil\leg_r.paa","\ffur_ru\cr\pil\leg_r_d.paa","\ffur_ru\cr\pil\leg_l.paa","\ffur_ru\cr\pil\leg_l_d.paa","\ffur_ru\cr\pil\arm_l.paa","\ffur_ru\cr\pil\arm_l_d.paa","\ffur_ru\cr\pil\arm_r.paa","\ffur_ru\cr\pil\arm_r_d.paa","\ffur_ru\cr\pil\vest_b.paa","\ffur_ru\cr\pil\vest_b_d.paa","\ffur_ru\cr\pil\vest_f.paa","\ffur_ru\cr\pil\vest_f_d.paa","\ffur_ru\cr\helmet.paa","\ffur_ru\cr\helmet_d.paa","\ffur_ru\cr\f\rl02.pac","\ffur_ru\cr\f\rl02D.pac"};
		displayName="Pilot (Helicopter)";
		vehicleClass="Infantry (Pilots & Crew)";
		nameSound="pilot";
		weapons[]={"d4t_aps","NVGoggles","Throw","Put"};
		magazines[]={"d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","SmokeShellRed","SmokeShellgreen","SmokeShell"};
		};

		class d4t_aircraftpilot : SoldierEPilot
		{
		model="\ffur_us\pt\usmcPilotGrey.p3d";
		displayName="Pilot (Aircraft)";
		nameSound="pilot";
		wounds[]={"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\ffur_us\pt\ArmGrA.paa","\ffur_us\pt\ArmGrAD.paa","\ffur_us\pt\ArmGrB.paa","\ffur_us\pt\ArmGrBD.paa","\ffur_us\pt\ArmGrC.paa","\ffur_us\pt\ArmGrCD.paa","\ffur_us\pt\ArmGnA.paa","\ffur_us\pt\ArmGnAD.paa","\ffur_us\pt\ArmGnB.paa","\ffur_us\pt\ArmGnBD.paa","\ffur_us\pt\ArmGnC.paa","\ffur_us\pt\ArmGnCD.paa","\ffur_us\pt\ArmDsA.paa","\ffur_us\pt\ArmDsAD.paa","\ffur_us\pt\ArmDsB.paa","\ffur_us\pt\ArmDsBD.paa","\ffur_us\pt\ArmDsC.paa","\ffur_us\pt\ArmDsCD.paa","\ffur_us\pt\ArmBlA.paa","\ffur_us\pt\ArmBlAD.paa","\ffur_us\pt\ArmBlB.paa","\ffur_us\pt\ArmBlBD.paa","\ffur_us\pt\LegBl.paa","\ffur_us\pt\LegBlD.paa","\ffur_us\pt\LegDs.paa","\ffur_us\pt\LegDsD.paa","\ffur_us\pt\LegDs2.paa","\ffur_us\pt\LegDs2D.paa","\ffur_us\pt\LegDs3.paa","\ffur_us\pt\LegDs3D.paa","\ffur_us\pt\LegGn.paa","\ffur_us\pt\LegGnD.paa","\ffur_us\pt\LegGn2.paa","\ffur_us\pt\LegGn2D.paa","\ffur_us\pt\LegGn3.paa","\ffur_us\pt\LegGn3D.paa","\ffur_us\pt\LegGr.paa","\ffur_us\pt\LegGrD.paa","\ffur_us\pt\LegGr2.paa","\ffur_us\pt\LegGr2D.paa","\ffur_us\pt\LegGr3.paa","\ffur_us\pt\LegGr3D.paa","\ffur_us\pt\CrwBdy1.paa","\ffur_us\pt\CrwBdy1D.paa","\ffur_us\pt\CrwBdy2.paa","\ffur_us\pt\CrwBdy2D.paa","\ffur_us\pt\CrwBdy3.paa","\ffur_us\pt\CrwBdy3D.paa","\ffur_us\pt\CrwBdy4.paa","\ffur_us\pt\CrwBdy4D.paa","\ffur_us\pt\PilBdyA.paa","\ffur_us\pt\PilBdyAD.paa","\ffur_us\pt\PilBdyB.paa","\ffur_us\pt\PilBdyBD.paa","\ffur_us\pt\PilBdyC.paa","\ffur_us\pt\PilBdyCD.paa","\ffur_us\pt\PilBdyD.paa","\ffur_us\pt\PilBdyDD.paa","\ffur_us\pt\PilBdyE.paa","\ffur_us\pt\PilBdyED.paa","\ffur_us\pt\PilBdyF.paa","\ffur_us\pt\PilBdyFD.paa","\ffur_us\pt\PilBdyG.paa","\ffur_us\pt\PilBdyGD.paa","\ffur_us\pt\PilBdyH.paa","\ffur_us\pt\PilBdyHD.paa","\ffur_us\pt\PilBdyI.paa","\ffur_us\pt\PilBdyID.paa","\ffur_us\pt\PilHel1.paa","\ffur_us\pt\PilHel1D.paa","\ffur_us\pt\PilHel2.paa","\ffur_us\pt\PilHel2D.paa","\ffur_us\pt\PilHel3.paa","\ffur_us\pt\PilHel3D.paa","\ffur_us\pt\PilHel4.paa","\ffur_us\pt\PilHel4D.paa","\ffur_us\pt\PisCov.paa","\ffur_us\pt\PisCovD.paa"};
		};

	class SoldierEMG:Russia_Rifleman
		{
		scope=2;
		displayName="Machine Gunner";
		model="\ffur_ru\mt\ffur_ru_mg";
		cost=60000;
		side=0;
		accuracy=1.5;
		nameSound="machineGunner";
		weapons[]={"d4t_pk","d4t_aps","Throw","Put"};
		magazines[]={"d4t_pk_mag","d4t_pk_mag","d4t_pk_mag","d4t_pk_mag","d4t_pk_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		threat[]={1,0.1,0.8};
		};

	class SoldierELAW:Russia_Rifleman
		{
		displayName="AT Soldier";
		nameSound="missileSoldier";
		model="\ffur_ru\mt\ffur_ru_rpg";
		cost=80000;
		accuracy=1.5;
		weapons[]={"d4t_AK74","d4t_aps","d4t_RPGLauncher","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_rpgrocket","d4t_rpgrocket","d4t_rpgrocket","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		nightVision=1;
		threat[]={1,0.9,0.1};
		};

	class SoldierEAT:SoldierELAW
		{
		displayName="Heavy AT Soldier";
		nameSound="missileSoldier";
		accuracy=1.5;
		weapons[]={"d4t_AK74","d4t_aps","d4t_RPG29","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_RPG29mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		threat[]={1,0.9,0.1};
		};

	class SoldierEAA:SoldierELAW
		{
		displayName="AA Soldier";
		nameSound="missileSoldier";
		accuracy=1.5;
		weapons[]={"d4t_AK74","d4t_aps","9K32Launcher","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","9K32Launcher","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		threat[]={1,0.5,0.9};
		};

	class SoldierEMiner:Russia_Rifleman
		{
		displayName="Miner";
		accuracy=1000;
		canDeactivateMines=1;
		picture="\misc\sapper.paa";
		weapons[]={"d4t_AK74","d4t_aps","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","MineE","MineE","MineE","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		threat[]={1,0.5,0.1};
		};

	class OfficerE:Russia_Rifleman
		{
		nameSound="officer";
		displayName="Squad Leader";
		scope=2;
		picture="\misc\frcky.paa";
		side=0;
		accuracy=2.0;
		model="\ffur_ru\mt\ffur_ru_off";
		hiddenSelections[]={"helmcamo_net","rpgpack","_Backpack","Backpack"};
		cost=600000;
		nightVision=1;
		weapons[]={"d4t_AK74","d4t_aps","Binocular","Throw","Put"};
		magazines[]={"d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_AK74_mag","d4t_rgo","d4t_rgo","d4t_rgo","SmokeShell","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		};

	class GeneralE:Russia_Rifleman
		{
		nameSound="officer";
		displayName="Officer";
		scope=2;
		model="mc vojake2_guba.p3d";
		side=0;
		accuracy=2.0;
		cost=100000;
		nightVision=1;
		weapons[]={};
		magazines[]={};
		};

	class Angelina:Russia_Rifleman
		{
		displayName="$STR_DN_ANGELINA";
		scope=1;
		model="angelina.p3d";
		side=0;
		accuracy=2.0;
		cost=100000;
		weapons[]={};
		magazines[]={};
		};

	class SoldierESniper:Russia_Rifleman
		{
		nameSound="sniper";
		vehicleClass="Infantry (Special Forces)";
		displayName="Sniper";
		accuracy=3.5;
		nightVision=1;
		cost=250000;
		weaponSlots="1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
		weapons[]={"d4t_V94","d4t_aps","Throw","Put"};
		magazines[]={"d4t_5RD_127_Mag","d4t_5RD_127_Mag","d4t_5RD_127_Mag","d4t_5RD_127_Mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		model="\ffur_ru\spec\rhs_gru09";
		wounds[]={"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\ffur_ru\spec\snip\leg_r.paa","\ffur_ru\spec\snip\leg_r_d.paa","\ffur_ru\spec\snip\leg_l.paa","\ffur_ru\spec\snip\leg_l_d.paa","\ffur_ru\spec\snip\arm.paa","\ffur_ru\spec\snip\arm_d.paa","\ffur_ru\spec\snip\back.paa","\ffur_ru\spec\snip\back_d.paa","\ffur_ru\spec\snip\chest.paa","\ffur_ru\spec\snip\chest_d.paa","\ffur_ru\spec\mask_new.paa","\ffur_ru\spec\mask_new_d.paa"};
		picture="\misc\sniper.paa";
		sensitivity=2;
		camouflage=0.6;
		threat[]={1,0.1,0.1};
		};

	class SoldierESaboteurPipe:Russia_Rifleman
		{
		scope=2;
		vehicleClass="Infantry (Special Forces)";
		picture="\misc\meciky.paa";
		accuracy=3.5;
		cost=400000;
		camouflage=0.7;
		threat[]={1,0.5,0.1};
		nameSound="specNas";
		canHideBodies=1;
		canDeactivateMines=1;
		model="\ffur_ru\spec\rhs_gru01";
		hiddenSelections[]={"radiogear","backpack"};
		wounds[]={"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\ffur_ru\spec\leg_r.paa","\ffur_ru\spec\leg_r_d.paa","\ffur_ru\spec\leg_l.paa","\ffur_ru\spec\leg_l_d.paa","\ffur_ru\spec\arm.paa","\ffur_ru\spec\arm_d.paa","\ffur_ru\spec\6b9_back.paa","\ffur_ru\spec\6b9_back_d.paa","\ffur_ru\spec\6b9_front.paa","\ffur_ru\spec\6b9_front_d.paa"};
		displayName="Spetsnaz";
		weapons[]={"d4t_AKS74PSO1PBS3","d4t_aps","NVGoggles","Throw","Put"};
		magazines[]={"d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","PipeBomb","PipeBomb","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		};

	class SoldierESaboteurBizon:SoldierESaboteurPipe
		{
		displayName="Spetsnaz (RPG)";
		weapons[]={"d4t_AKS74PSO1PBS3","d4t_RPGLauncher","d4t_aps","NVGoggles","Throw","Put"};
		magazines[]={"d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_30RD_545_SDmag","d4t_rpgrocket","d4t_rpgrocket","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag","d4t_aps_mag"};
		};

	class SoldierESaboteurPipeHG:SoldierESaboteurPipe //TODO | will become spetsnaz with vintorez 
		{
		scope=2;
		displayName="Spetsnaz (Sniper)";
		weapons[]={"AK74SU","NVGoggles","Throw","Put","skorpion"};
		magazines[]={"AK74","AK74","AK74","AK74","skorpionmag","skorpionmag","skorpionmag","skorpionmag","PipeBomb","PipeBomb","PipeBomb"};
		};
//---Air
class ParachuteEast : ParachuteBase//TODO
{
	scope=2;
	accuracy=0.5;
	side=0;
	crew="SoldierESaboteurPipe";
	vehicleClass="Russia Air";
};
//---Cars
//---Armored
//---Misc

	class UAZ:Car
		{
		picture="iuaz";
		vehicleClass="Russia Cars";
		scope=2;
		crew="Russia_Rifleman";
		side=0;
		displayName="$STR_DN_UAZ";
		nameSound="UAZ";
		accuracy=0.5;
		transportSoldier=3;
		transportAmmo=0;
		maxSpeed=90;
		driverAction="ManActUAZDriver";
		cargoAction[]={"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[]={1,0};
		cost=25000;
		armor=20;
		model="uaz";
		armorWheels=0.12;
		soundEngine[]={"Vehicles\uazloop",0.0316228,1.25};
		type=0;
		threat[]={0.5,0.5,0.1};
		dammageHalf[]={"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[]={"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};

		class ViewPilot:ViewPilotBase
			{
			initAngleX=10;
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-240;
			min=0;
			max=50;
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-170;
			min=0;
			max=1;
			};
		};

	class Ural:Truck
		{
		scope=2;
		vehicleClass="Russia Cars";
		crew="Russia_Rifleman";
		picture="iural";
		icon="truck";
		side=0;
		displayName="$STR_DN_URAL";
		accuracy=0.3;
		maxSpeed=80;
		wheelCircumference=4.513;
		turnCoef=6.0;
		driverAction="ManActUralDriver";
		cargoAction[]={"ManActUralCoDriver","ManActUralCoDriver","ManActCargo"};
		cargoIsCoDriver[]={1,1,0};
		transportSoldier=12;
		transportAmmo=0;
		transportRepair=0;
		weapons[]={"TruckHorn"};
		magazines[]={};
		cost=50000;
		armor=20;
		model="ural";
		hiddenSelections[]={"ammo"};
		initCargoAngleY=185;
		soundEngine[]={"Vehicles\Largecar",0.1,1};
		type=0;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};

		class TransportMagazines
			{

			class _xx_AK74
				{
				magazine="AK74";
				count="30*1";
				};

			class _xx_PK
				{
				magazine="PK";
				count="5*1";
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count="10*1";
				};

			class _xx_SVDDragunov
				{
				magazine="SVDDragunov";
				count="10*1";
				};

			class _xx_RPGLauncher
				{
				magazine="RPGLauncher";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-280;
			min=0;
			max=40;
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-280;
			min=0;
			max=1;
			};
		};

	class UralRepair:Ural
		{
		picture="iuralrepair";
		vehicleClass="Russia Support";
		icon="Repair_move";
		scope=2;
		displayName="$STR_DN_URAL_REPAIR";
		accuracy=0.9;
		model="uralrepair";
		hiddenSelections[]={};
		transportSoldier=2;
		transportRepair=200000000;
		weapons[]={};
		magazines[]={};
		type=0;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={};
		};

	class UralReammo:Ural
		{
		vehicleClass="Russia Support";
		icon="Ammo_move";
		scope=2;
		displayName="$STR_DN_URAL_AMMO";
		accuracy=0.9;
		transportSoldier=2;
		transportAmmo=300000;
		model="ural";
		hiddenSelections[]={};
		weapons[]={};
		magazines[]={};
		type=0;
		threat[]={0.0,0.0,0.0};

		class TransportMagazines
			{

			class _xx_AK74
				{
				magazine="AK74";
				count="30*1";
				};

			class _xx_PK
				{
				magazine="PK";
				count="5*1";
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count="10*1";
				};

			class _xx_SVDDragunov
				{
				magazine="SVDDragunov";
				count="10*1";
				};

			class _xx_RPGLauncher
				{
				magazine="RPGLauncher";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};
		};

	class UralRefuel:Ural
		{
		picture="iuralfuel";
		vehicleClass="Russia Support";
		icon="Fuel_move";
		scope=2;
		displayName="$STR_DN_URAL_FUEL";
		accuracy=0.8;
		model="uralfuel";
		hiddenSelections[]={};
		weapons[]={};
		magazines[]={};
		transportFuel=3000;
		transportSoldier=2;
		transportAmmo=0;
		type=0;
		threat[]={0.0,0.0,0.0};
		};

		class BMP:APC //becomes bmp3
		{
		scope=2;
		vehicleClass="Russia Armored";
		crew="SoldierECrew";
		picture="ibmp";
		side=0;
		displayName="BMP-3";
		nameSound="BMP";
		accuracy=0.3;
		maxSpeed=70;
		hiddenSelections[]={"pruh"};
		transportSoldier=8;
		transportAmmo=0;
		armor=260;
		cost=150000;
		forceHideGunner=0;
		forcehidecommander=0;
		driverCanSee=30;
		model="\ffur_ru_arm\p3\vitbmp3.P3D";
		canFloat=1;
		minGunElev=-5;
		maxGunElev=15;
		weapons[]={"VIT_2A70GUN","VIT_2A42","d4t_bmp3_pkt","VIT_9M117"};
		magazines[]={"VIT_2A70GUN","VIT_2A42AP","VIT_2A42HE","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","d4t_bmp3_pkt","VIT_9M117"};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW"};
		type=1;
		threat[]={0.9,0.7,0.3};
		soundEnviron[]={"Vehicles\OldRolling_Treads1",0.1778279,1};
		soundEngine[]={"\ffur_ru_arm\p3\sound\bmp3eng.ogg","db+5",1.0};
		driverAction="ManActzsuDriver";
		driverInAction="ManActBMPDriver";
		gunnerInAction="ManActBMPGunner";
		gunnerAction="ManActBMPGunnerOut";
		CommanderAction="ManActBmpCommanderout";
		CommanderInAction="ManActBmpCommander";

		class TransportMagazines
			{

			class _xx_d4t_AK74
				{
				magazine="d4t_AK74_mag";
				count="30*1";
				};

			class _xx_d4t_pk_mag
				{
				magazine="d4t_pk_mag";
				count="5*1";
				};

			class _xx_d4t_rgo
				{
				magazine="d4t_rgo";
				count="10*1";
				};

			class _xx_d4t_5RD_127_Mag
				{
				magazine="d4t_5RD_127_Mag";
				count="10*1";
				};

			class _xx_d4t_rpgrocket
				{
				magazine="d4t_rpgrocket";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};
		class Turret
			{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			soundServo[]={"\ffur_ru_arm\p3\sound\turretbmd.ogg","db-45",1};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			body="OtocVez";
			gun="OtocHlaven";
			minElev=-3;
			maxElev="+70";
			minTurn=-360;
			maxTurn="+360";
			};

		class HatchCommander
			{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=90;
			};

		class HitHull
			{
			armor=1;
			material=50;
			name="hull";
			passThrough=1;
			};

		class HitTurret
			{
			armor=0.8;
			material=51;
			name="turet";
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

		class HatchDriver
			{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-100;
			};

		class HatchGunner
			{
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=90;
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-320;
			min=0;
			max="40 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-230;
			min=0;
			max=1;
			};
		};

	class BMPAmbul:BMP
		{
		destrType=DESTRUCT_DEFAULT;
		vehicleClass="Russia Support";
		icon="Ambulance_move";
		type=1;
		nameSound="ambulance";
		picture="\ffur_ru_arm\mtlb\mtlb_pict";
		displayName="MT-LB Ambulance";
		hiddenSelections[]={"cislo1","cislo2","cislo3","MARINE","RES","CSLA","halterung","barrel","box"};
		scope=2;
		attendant=1;
		hasGunner=0;
		transportSoldier=2;
		driverAction="ManActBMPDriverOut";
		driverInAction="ManActBMPDriver";
		cargoAction[]={"ManActCargo"};
		driverCanSee="4+2+8";
		model="\ffur_ru_arm\mtlb\mtlb";
		weapons[]={};
		magazines[]={};
		maxSpeed=66;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={};
		commanderInAction="ManActTruck5tCoDriver";
		cargoIsCoDriver[]={0,0};
		forceHideCommander=1;

		class TransportMagazines
			{

			class _xx_d4t_AK74
				{
				magazine="d4t_AK74_mag";
				count="30*1";
				};

			class _xx_d4t_pk_mag
				{
				magazine="d4t_pk_mag";
				count="5*1";
				};

			class _xx_d4t_rgo
				{
				magazine="d4t_rgo";
				count="10*1";
				};
			};

		class Animations
			{

			class Hatch
				{
				type="rotation";
				animPeriod=1;
				selection="luken";
				axis="osa_luken";
				angle0=0;
				angle1=-0.7;
				};

			class Mudgards
				{
				type="rotation";
				animPeriod=1;
				selection="mud";
				axis="osa_mud";
				angle0=0;
				angle1=-2.0999999;
				};
			};
		};

	class BMP2:BMP
		{
		scope=2;
		crew="SoldierECrew";
		picture="ibmp";
		side=0;
		displayName="BMP-2";
		nameSound="BMP";
		accuracy=0.3;
		maxSpeed=70;
		transportSoldier=24;
		transportAmmo=0;
		transportFuel=3000;
		cost=150000;
		forceHideGunner=0;
		model="\ffur_ru_arm\csla\csla2_BMP2g";
		hiddenSelections[]={"cislo1","cislo2","cislo3","blatnik","plachta","brvno","znak1","sign","csla"};
		canFloat=1;
		minGunElev=-5;
		maxGunElev=15;
		weapons[]={"Cannon30","MachineGun7_6","HellfireLauncherBMP2"};
		magazines[]={"Cannon30HE","Cannon30AP","MachineGun7_6","HellfireLauncherBMP2"};
		//weapons[]={"Cannon30","PKT55","HellfireLauncherBMP2"};
		//magazines[]={"Cannon30HE","Cannon30AP","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","HellfireLauncherBMP2"};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW"};
		cargoAction[]={"ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActCargo","ManActBMP_Cargo20","ManActBMP_Cargo15","ManActBMP_Cargo16","ManActBMP_Cargo15","ManActBMP_Cargo00","ManActBMP_Cargo03","ManActBMP_Cargo14","ManActBMP_Cargo15","ManActBMP_Cargo18","ManActBMP_Cargo15","ManActBMP_Cargo152","ManActBMP_Cargo14","ManActBMP_Cargo15","ManActBMP_Cargo21","ManActBMP_Cargo22","ManActBMP_Cargo00","ManActBMP_Cargo14"};
		armor=250;
		type=1;
		threat[]={0.9,0.7,0.3};

		soundEngine[]={"\slx_gl3\sounds\bmp_engine.wss",0.200000,1}; 
		soundEnviron[]={"\slx_gl3\sounds\light_treads.wss",0.200000,1};
		soundGetIn[]={"\slx_gl3\sounds\tank_getin.wss",0.001000,1};
		soundGetOut[]={"\slx_gl3\sounds\tank_getout.wss",0.001000,1};
		soundLandCrash[]={"\slx_gl3\sounds\tank_crash_light.wss",0.006000,1};
		soundCrash[]={"\slx_gl3\sounds\tank_crash_light.wss",0.006000,1};
		soundDammage[]={"\slx_gl3\sounds\alarm_e_tank.wss",0.001000,1};
		soundGear[]={"\slx_gl3\sounds\tank_gear.wss",0.000500,1};
		soundWaterCrash[]={"\slx_gl3\sounds\heavy_water_splash.wss",0.006000,1};

		driverAction="ManActcsla2_BMP_driverout";
		gunnerAction="ManActcsla2_BMP2_gunnerout";
		commanderAction="ManActcsla2_BMP2_commanderout";
		driverInAction="ManActBMPDriver";
		gunnerInAction="ManActBMPGunner";
		commanderInAction="ManActBMPCommander";

		class HatchDriver
			{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-120;
			};

		class HatchCommander
			{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=-120;
			};

		class HatchGunner
			{
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=90;
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-230;
			min=0;
			max="100 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=1.2;
			};
		};

	class BRDM : HMMWV_M2
		{
		vehicleClass="Russia Armored";
		fuelCapacity=100;
		scope=2;
		audible=4;
		crew="Russia_Rifleman";
		side=0;
		accuracy=0.5;
		nameSound="apc";
		transportSoldier=16;
		insideSoundCoef=0.1;
		transportAmmo=0;
		unloadInCombat=1;
		maxSpeed=70;
		castGunnerShadow=0;
		castDriverShadow=0;
		preferRoads=1;
		cargoAction[]={"ManActUazCoDriver","ManActVIT_BTRCargo2","ManActVIT_BTRCargo3","ManActVIT_BTRCargo4","ManActVIT_BTRCargo5","ManActVIT_BTRCargo6","ManActVIT_BTRCargo7","ManActCargo"};
		cargoIsCoDriver[]={1,0};
		gunnerInAction="ManActbmpGunner";
		gunnerAction="ManActbmpGunner";
		forceHideGunner=1;
		forceHidedriver=1;
		driverIsCommander="true";
		ejectDeadDriver=0;
		ejectDeadGunner=0;
		ejectDeadCargo=1;
		hiddenSelections[]={"n1","n2","n3"};
		driverCanSee="CANSEE_EYE+CANSEE_OPTICS+CANSEE_COMPASS";
		gunnerCanSee="CANSEE_EYE+CANSEE_OPTICS+CANSEE_COMPASS";
		gunnerHasOptics="true";
		threat[]={0.5,0.5,0.1};
		icon="bmp";
		soundEngine[]={"\ffur_ru_arm\btr\sound\diesel.ogg","db0",1.1};
		soundGear[]={"\ffur_ru_arm\btr\sound\gear.ogg",0.008,1};
		soundEnviron[]={"\ffur_ru_arm\btr\sound\move.ogg","db0",1.1};
		soundGetIn[]={"\ffur_ru_arm\btr\sound\in.ogg",0.008,1};
		soundGetOut[]={"\ffur_ru_arm\btr\sound\out.ogg",0.008,1};
		displayName="BTR-80";
		model="\ffur_ru_arm\btr\VITBTR80.p3d";
		picture="\ffur_ru_arm\btr\icon.paa";
		//weapons[]={"KVPT","PKT"};
		//magazines[]={"KVPT","KVPT","KVPT","KVPT","KVPT","KVPT","KVPT","KVPT","KVPT","KVPT","PKT","PKT","PKT","PKT","PKT","PKT","PKT","PKT"};
		armor=80;
		hideWeaponsGunner=1;
		type="VArmor";
		cost=100000;
		canFloat=1;
		simulation="car";
		hasDriver=1;
		hasGunner=1;
		hasCommander=0;
		hideProxyInCombat=0;
		wheelCircumference=4.513;
		turnCoef=8.0;
		terrainCoef=1.05;
		armorGlass=0.5;
		armorWheels=0.15;
		damperSize=0.1;
		damperForce=30;
		armorBody=0.4;
		armorFuel=1.4;
		armorLights=0.4;
		scudLaunch="";
		scudStart="";
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","Officer"};
		formationX=20;
		formationZ=20;
		getInRadius=3.5;
		precision=10;
		brakeDistance=10;
		steerAheadSimul=0.5;
		steerAheadPlan=0.35;
		predictTurnSimul=1.2;
		predictTurnPlan=1.2;
		sensitivity=0.6;

		class Turret
			{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			soundServo[]={"Vehicles\gun_elevate","db-40",0.5};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-5;
			maxElev="+30";
			minTurn=-360;
			maxTurn="+360";
			body="OtocVez";
			gun="OtocHlaven";
			};

		class ViewOptics
			{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX="+30";
			initAngleY=0;
			minAngleY=-100;
			maxAngleY="+100";
			initFov=0.11;
			minFov=0.11;
			maxFov=0.11;
			};

		class ViewGunner
			{
			initAngleX=5;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.7;
			minFov=0.42;
			maxFov=0.85;
			};

		class ViewPilot
			{
			initAngleX=10;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.7;
			minFov=0.42;
			maxFov=0.85;
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-260;
			min=0;
			max=35.6699982;
			};

		class IndicatorSpeed2
			{
			selection="ukaz_rychlo2";
			axis="osa_rychlo2";
			angle=-240;
			min=0;
			max=16.6700001;
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-240;
			min=0;
			max=1.2;
			};

		class IndicatorCompass
			{
			selection="kompas";
			axis="osa_kompas";
			angle=360;
			min=-3.1415927;
			max=3.1415927;
			};
		};

	class T72:RussianTank
		{
		side=0;
		scope=2;
		crew="SoldierECrew";
		//weapons[]={"ICP_2A46M","ICP_PKT","ICP_NSV"};
		//magazines[]={"ICP_3VBM17","ICP_3VBK25","ICP_3VOF36","ICP_9K119","ICP_PKT","ICP_NSV"};
		picture="it80";
		icon="tank";
		armorStructural=2.0;
		forceHideGunner=0;
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=51;name=turet;passThrough=1;};
		class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

		//soundEnviron[]={"\ICP_t72s\sound\treads.wav",0.916666,0.800000};
		//soundEngine[]={"\ICP_t72s\sound\engine.wav",22,1};
		//soundGear[]={"\ICP_t72s\sound\gear.wav",0.1,0.8};
		gunnerOpticsModel="\icp_t90\d30tim\pr.p3d";
		//commanderOpticsModel="\ICP_t72s\sight.p3d";
		driverAction="ManActT80DriverOut";
		gunnerAction="ManActT80GunnerOut";
		commanderAction="ManActT80CommanderOut";
		driverInAction="ManActT80Driver";
		gunnerInAction="ManActT80Gunner";
		commanderInAction="ManActT80Commander";
		type=VArmor;
		simulation="tank";
		hiddenselections[]= {"TR","zak","dz","pl","no1","no2","no3","fire1","fire2","fire3","fire4","fire5","fire6","rak1","rak2","rak3","rak4","Flag"};
		model="\icp_t90\t80utim";
		vehicleClass="Russia Armored";
		displayName="T-80UM";
		maxSpeed=75;
		soundEngine[]={"\icp_t90\DVI.wss","db-2",1};
		nameSound="tank";
		transportSoldier = 5;
        ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCargo = 1;
		cargoAction[]={"ManActicpt80proxy1","ManActicpt80proxy2","ManActicpt80proxy3","ManActicpt80proxy4","ManActicpt80proxy5",};
		armor=1100;
		class HatchDriver
		{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-100;
		};
		class HatchGunner
		{
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=-100;
		};
		class HatchCommander
		{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=-100;
		};

		class ViewGunnerBase
		{
			initAngleX=5;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.550000;
			minFov=0.320000;
			maxFov=0.850000;
		};
		
		class TurretBase
		{
			//soundServo[]={"\ICP_t72s\sound\turret.ogg",0.0316228,1.0};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};

		class UserActions
		{
			//class UseASP
			//{
				//displayName="Use fire-extinguishers";
				//position="pos driver";
				//radius=5;
				//sound={};
				//condition="((this animationPhase ""InFlamed"") == 1) && (player in this)";
				//statement="[this] exec {\ICP_t90\scripts\asp.sqs}";
			//};
			//class Use902B
			//{
				//displayName="Launch smoke";
				//position="pos driver";
				//radius=5;
				//sound={};
				//condition="((this animationPhase ""SmokeLaunch"") < 2) && (player in this)";
				//statement="[this] exec {\ICP_t90\scripts\smoke.sqs}";
			//};
		};

		class Animations
		{
  			class SetNumber
			{
				type="rotation";
				animperiod=0.5;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class InFlamed
			{
				type="rotation";
				animperiod=0.5;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class SmokeLaunch
			{
				type="rotation";
				animperiod=0.1;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class OtstrelGilz
			{
				type ="rotation";
				animPeriod =0.5;
				selection ="Krish";
				axis ="osa_krish";
				angle0 =0;
				angle1 =-2.5;
			};
			class Recoil
			{
				type ="rotation";
				animPeriod =0.1;
				selection ="stv";
				axis ="osa_stv";
				angle0 =0;
				angle1 =-0.0042;
			};              
			class Podveska
			{
				type ="rotation";
                animperiod=0.5;
				selection="podv";
				axis="osa_sus";
				angle0=-0.041;
				angle1=0.041;
			};
		};

		class EventHandlers
		{
			//Init="[_this select 0] exec {\ICP_t90\scripts\podw.sqs}; [_this select 0] exec {\ICP_t90\scripts\number.sqs}; [_this select 0] exec {\ICP_t90\scripts\cargo.sqs}; [_this select 0] exec {\ICP_t90\scripts\opvtt80.sqs}";
			//Fired="if ((_this select 4) in [""ICP_3OF26"",""ICP_3BK29M"",""ICP_3BM42""]) then {_this call loadFile ""\ICP_t90\scripts\stvol.sqf""; [_this select 0] exec ""\ICP_t90\scripts\gunrec.sqs""}";
			//Hit="[_this select 0] exec {\ICP_t90\scripts\fire.sqs}; [_this select 0] exec {\ICP_t90\scripts\iskra.sqs}";
			//IncomingMissile="[_this select 0, _this select 1, _this select 2] exec {\ICP_t90\scripts\dz.sqs}; [_this select 0] exec {\ICP_t90\scripts\unload.sqs}";
			//Killed="[_this select 0] exec {\ICP_t90\scripts\destroyed.sqs}";
		};
		};

	class T80:RussianTank
		{
		side=0;
		scope=2;
		crew="SoldierECrew";
		//weapons[]={"ICP_2A46M","ICP_PKT","ICP_NSV"};
		//magazines[]={"ICP_3VBM17","ICP_3VBK25","ICP_3VOF36","ICP_9K119","ICP_PKT","ICP_NSV"};
		vehicleClass="Russia Armored";
		displayName="T-90";
		model="\icp_t90\t90utim.p3d";
		nameSound="tank";
		canfloat=1;
		picture="it80";
		icon="tank";
		maxSpeed=65;
		armor=1050;
		armorStructural=2.0;
		forceHideGunner=0;
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=51;name=turet;passThrough=1;};
		class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

		//soundEnviron[]={"\ICP_t72s\sound\treads.wav",0.916666,0.800000};
		//soundEngine[]={"\ICP_t72s\sound\engine.wav",22,1};
		//soundGear[]={"\ICP_t72s\sound\gear.wav",0.1,0.8};
		gunnerOpticsModel="\icp_t90\d30tim\pr.p3d";
		//commanderOpticsModel="\ICP_t72s\sight.p3d";
		driverAction="ManActT80DriverOut";
		gunnerAction="ManActT80GunnerOut";
		commanderAction="ManActT80CommanderOut";
		driverInAction="ManActT80Driver";
		gunnerInAction="ManActT80Gunner";
		commanderInAction="ManActT80Commander";
		type=VArmor;
		simulation="tank";
		hiddenselections[]= {"TR","zak","dz","pl","no1","no2","no3","fire1","fire2","fire3","fire4","fire5","fire6","rak1","rak2","rak3","rak4","Flag"};

		class HatchDriver
		{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-100;
		};
		class HatchGunner
		{
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=-100;
		};
		class HatchCommander
		{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=-100;
		};
		class ViewGunnerBase
		{
			initAngleX=5;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.550000;
			minFov=0.320000;
			maxFov=0.850000;
		};
		
		class TurretBase
		{
			//soundServo[]={"\ICP_t72s\sound\turret.ogg",0.0316228,1.0};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};

		class Animations
		{
			class SetNumber
			{
				type="rotation";
				animperiod=0.5;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class InFlamed
			{
				type="rotation";
				animperiod=0.5;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class SmokeLaunch
			{
				type="rotation";
				animperiod=0.1;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
			};
			class Minoiskatel
			{
				type ="rotation";
				animPeriod =0.5;
				selection ="mini";
				axis ="osa_mini";
				angle0 =0;
				angle1 =1;
			};
			class OtstrelGilz
			{
				type ="rotation";
				animPeriod =0.5;
				selection ="Krish";
				axis ="osa_krish";
				angle0 =0;
				angle1 =-2.5;
			};
			class Recoil
			{
				type ="rotation";
				animPeriod =0.1;
				selection ="stv";
				axis ="osa_stv";
				angle0 =0;
				angle1 =-0.0038;
			};              
			class Podveska
			{
				type ="rotation";
                animperiod=0.5;
				selection="podv";
				axis="osa_sus";
				angle0=-0.041;
				angle1=0.041;
			};
		};

		class EventHandlers
		{
			//Init="[_this select 0] exec {\ICP_t90\scripts\podw.sqs}; [_this select 0] exec {\ICP_t90\scripts\number.sqs}; [_this select 0] exec {\ICP_t90\scripts\opvtt90.sqs}";
			//Fired="if ((_this select 4) in [""ICP_3OF26"",""ICP_3BK29M"",""ICP_3BM42""]) then {_this call loadFile ""\ICP_t90\scripts\stvol.sqf""; [_this select 0] exec ""\ICP_t90\scripts\gunrec.sqs""}";
			//Hit="[_this select 0] exec {\ICP_t90\scripts\fire.sqs}; [_this select 0] exec {\ICP_t90\scripts\iskra.sqs}";
			//IncomingMissile="[_this select 0, _this select 1, _this select 2] exec {\ICP_t90\scripts\dz.sqs}";
			//Killed="[_this select 0] exec {\ICP_t90\scripts\destroyed.sqs}";
		};

		class UserActions
		{
			/*class KMTon
			{
				displayName = "Deploy KMT";
				position = "Toka";
				radius = 2;
				condition = "((this animationphase ""Minoiskatel"") == 0) and (player in this)";
				statement = "this animate [""Minoiskatel"",1]; [this] exec {\icp_t90\scripts\kmt.sqs}";
			};
			class KMToff
			{
				displayName = "Remove KMT";
				position = "Toka";
				radius = 2;
				condition = "((this animationphase ""Minoiskatel"") == 1) and (player in this)";
				statement = "this animate [""Minoiskatel"",0]";
			};
			class UseASP
			{
				displayName="Use fire-extinguishers";
				position="pos driver";
				radius=5;
				sound={};
				condition="((this animationPhase ""InFlamed"") == 1) && (player in this)";
				statement="[this] exec {\ICP_t90\scripts\asp.sqs}";
			};
			class Use902B
			{
				displayName="Launch smoke";
				position="pos driver";
				radius=5;
				sound={};
				condition="((this animationPhase ""SmokeLaunch"") < 2) && (player in this)";
				statement="[this] exec {\ICP_t90\scripts\smoke.sqs}";
			};*/			
		};
		};

	class ZSU:Tank
		{
		scope=2;
		vehicleClass="Russia Armored";
		crew="SoldierECrew";
		picture="izsu";
		icon="antiAC.paa";
		side=0;
		hiddenSelections[]={"n1","n2","n3","pod_1","pod_2","pod_3","rot_1","rot_2","rot_3","ukaz_radar"};
		displayName="ZSU-23-4";
		nameSound="shilka";
		accuracy=0.3;
		commanderCanSee=31;
		gunnerCanSee="1+16 +4+8";
		driverAction="ManActZSUDriver";
		gunnerAction="ManActZSUGunnerOut";
		commanderAction="ManActZSUCommanderOut";
		driverInAction="ManActZSUDriver";
		gunnerInAction="ManActZSUGunner";
		commanderInAction="ManActZSUCommander";
		forceHideGunner=1;
		forceHideDriver=1;
		armor=250;
		cost=1000000;
		model="\ffur_ru_arm\zsu\Grau2a6.p3d";
		simulation="tank";
		maxSpeed=44;
		irScanRangeMin=4000;
		irScanRangeMax=10000;
		irScanToEyeFactor=5;
		irScanGround=0;
		soundCrash[]={"Vehicles\crash1",0.1,1};
		//weapons[]={"ZsuCannon"};
		//magazines[]={"ZsuCannon"};
		type=1;
		threat[]={0.5,0.5,1};
		//gunnerOpticsModel="\ffur_optics\optic_zsu";
		//gunnerOpticsColor[]={0.91,0.23,0.23,1};
		//commanderOpticsModel="\ffur_optics\optic_zsu";
		//commanderOpticsColor[]={0.91,0.23,0.23,1};

		class HatchDriver
			{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=100;
			};

		class HatchCommander
			{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=100;
			};

		class Animations
			{

			class SetNumber
				{
				type="rotation";
				animperiod=0.5;
				selection="useract";
				axis="osa_useract";
				angle0=0;
				angle1=0;
				};

			class Podveska
				{
				type="rotation";
				animperiod=0.5;
				selection="podv";
				axis="osa_sus";
				angle0=-0.04;
				angle1=0.04;
				};

			class Trigg_Radar
				{
				type="rotation";
				animperiod=1;
				selection="trigg";
				axis="osa_trigg";
				angle0=0;
				angle1=1.8200001;
				};

			class Pod_Radar
				{
				type="rotation";
				animperiod=2;
				selection="R1";
				axis="osa_R1";
				angle0=0;
				angle1=1.8200001;
				};

			class Rotat_Radar
				{
				type="rotation";
				animperiod=3;
				selection="R2";
				axis="osa_R2";
				angle0=0;
				angle1=3.7;
				};
			};

		/*class UserActions
			{

			class RadarOn
				{
				displayName="Radar on";
				position="osahlavne";
				radius=1;
				condition="(this animationphase ""pod_radar"" == 0) && ((player == driver this) or (player == gunner this) or (player == commander this))";
				statement="[this] exec {\ffur_ru_arm\zsu\scripts\radar.sqs}; this action [""Engine on"", this]";
				};

			class RadarOff
				{
				displayName="Radar off";
				position="osahlavne";
				radius=1;
				condition="(this animationphase ""trigg_radar"" == 1) && ((player == driver this) or (player == gunner this) or (player == commander this))";
				statement="this animate [""trigg_radar"", 0]";
				};
			};*/

		class TransportWeapons
			{
			};

		class Turret:TurretBase
			{
			minElev="-12";
			maxElev=70;
			soundServo[]={"\ffur_ru_arm\zsu\shilkaturretservo.ogg",1,1};
			};

		class IndicatorSpeed
			{
			selection="ukaz_mph";
			axis="osa_mph";
			angle=250;
			min=0;
			max="100 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=315;
			min=0;
			max=1.2;
			};

		/*class EventHandlers:ECP_EventHandlers
			{
			init="_this exec ""..\@ffsx2007\SLX_Init_GL3.sqs"";
			};*/
		};

	class M2StaticMGE:M2StaticMG //TODO
		{
		side=0;
		vehicleClass="Russia Armored";
		displayName="$STR_DN_M2_MGE";
		crew="Russia_Rifleman";
		};

	class Mi24:Helicopter
		{
		scope=2;
		crew="SoldierEPilot";
		picture="imi24";
		maxSpeed=294;
		side=0;
		displayName="MI-24";
		nameSound="hind";
		accuracy=0.5;
		cost=4000000;
		armor=100;
		model="\FFUR_Hind\FFUR_Hind.p3d";
		hiddenSelections[]={"n1","n2"};
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		soundEngine[]={"\ffur_zguba\hind\engine.wss",3.1622779,1};
		soundDammage[]={"\ffur_rua\mi\Sound\beaconfar.wav",10.0,1};
		//weapons[]={"YakB","HellfireLauncherHind","Rocket57x64"};
		//magazines[]={"YakB","HellfireLauncherHind","Rocket57x64"};
		weapons[]={"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		magazines[]={"MachineGun30E","HellfireLauncherHind","Rocket57x64"};
		transportSoldier=8;
		transportAmmo=0;
		type=3;
		threat[]={0.6,1,0.8};
		typicalCargo[]={"Soldier","SoldierLAW"};
		driverAction="ManActMi24Pilot";
		gunnerAction="ManActMi24Gunner";
		animated=1;
		vehicleClass="Russia Air";

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
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-320;
			min=0;
			max=700;
			};

		class IndicatorSpeed
			{
			selection="mph";
			axis="osa_mph";
			angle=-350;
			min="40/3.6";
			max="450/3.6";
			};

		class IndicatorVertSpeed
			{
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-360;
			min=-30;
			max=30;
			};

		class IndicatorRPM
			{
			selection="rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=10.5;
			};

		class IndicatorRPM2
			{
			selection="rpm2";
			axis="osa_rpm2";
			angle=-320;
			min=0;
			max=10.5;
			};

		class IndicatorWatch
			{
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=1;
			};

/*		class ReloadAnimations
			{

			class yakB
				{
				weapon="YakB";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=5000;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
				};
			};*/

		class Animations
			{

			class gearL
				{
				type="rotation";
				animperiod=1;
				selection="gearL";
				axis="osa_gearL";
				angle0=0;
				angle1=0.8;
				};

			class gearR
				{
				type="rotation";
				animperiod=1;
				selection="gearR";
				axis="osa_gearR";
				angle0=0;
				angle1=-0.8;
				};

			class gearF
				{
				type="rotation";
				animperiod=1;
				selection="gearF";
				axis="osa_gearF";
				angle0=0;
				angle1=-1.3;
				};

			class gcL
				{
				type="rotation";
				animperiod=1;
				selection="gcL";
				axis="osa_gcL";
				angle0=0;
				angle1=1.8;
				};

			class gcR
				{
				type="rotation";
				animperiod=1;
				selection="gcR";
				axis="osa_gcR";
				angle0=0;
				angle1=-1.8;
				};

			class gcF
				{
				type="rotation";
				animperiod=1;
				selection="gcF";
				axis="osa_gcF";
				angle0=0;
				angle1=-2.5;
				};

			class rightgear
				{
				type="rotation";
				animperiod=0.5;
				selection="gearR2";
				axis="osa_gearR2";
				angle0=0;
				angle1=-0.296705;
				};

			class leftgear
				{
				type="rotation";
				animperiod=0.5;
				selection="gearL2";
				axis="osa_gearL2";
				angle0=0;
				angle1=-0.296705;
				};

			class frontgear
				{
				type="rotation";
				animperiod=0.5;
				selection="gearF2";
				axis="osa_gearF2";
				angle0=0;
				angle1=-0.296705;
				};
			};

		class Turret:TurretBase
			{
			};
		};

	class Mi17:Helicopter
		{
		scope=2;
		crew="SoldierEPilot";
		picture="imi17";
		maxSpeed=240;
		side=0;
		displayName="MI-17";
		nameSound="mi17";
		accuracy=0.5;
		cost=3000000;
		armor=50;
		model="\ffur_rua\hip\Mi8MTV_m.p3d";
		hiddenSelections[]={"cdln1","cdrn1","cdln2","cdrn2","zasleh2","zasleh3","zasleh4","zasleh5","ss_cms","ss_engine1","ss_engine2","ss_fuel","ss_gun","ss_transm","ss_weap","num_1","num_2","deslight"};
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		soundEngine[]={"\ffur_rua\hip\Sounds\mi8rotor.ogg","db+8",1};
		//weapons[]={"PKT55","Rocket57x192c","Rocket57x192cm"};
		//magazines[]={"PKT55","PKT55","PKT55","PKT55","PKT55","PKT55","Rocket57x192c","Rocket57x192cm"};
		driverAction="ManActOWPMi8pilot";
		gunnerAction="ManActOWPMi8GunnerFront";
		cargoAction[]={"ManActOWPMi8copilot","ManActCargo"};
		gunnerUsesPilotView=0;
		gunnerOpticsModel="\ffur_rua\hip\optika_pkt.p3d";
		driverOpticsModel="\ffur_rua\hip\optika_pkv.p3d";
		DriverOpticsColor[]={1,1,1,0,3};
		hideWeaponsDriver=0;
		hideWeaponsGunner=0;
		transportSoldier=12;
		transportAmmo=0;
		type=2;
		threat[]={0.6,1,0.4};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		vehicleClass="Russia Air";

		/*class ViewGunner
			{
			initFov=0.5;
			minFov=0.4;
			maxFov=1.0;
			initAngleY="+90";
			minAngleY="+10";
			maxAngleY="+180";
			initAngleX=0;
			minAngleX=-15;
			maxAngleX="+40";
			};*/

		class Turret:TurretBase
			{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-35;
			maxElev="+7";
			minTurn=-15;
			maxTurn="+15";
			body="OtocVez";
			gun="OtocHlaven";
			};

		class ViewGunner
			{
			initFov=0.5;
			minFov=0.4;
			maxFov=1.0;
			initAngleX=0;
			minAngleX=-35;
			maxAngleX="+35";
			initAngleY=0;
			minAngleY=-130;
			maxAngleY="+130";
			};

		class IndicatorAltBaro
			{
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-300;
			min=0;
			max=500;
			};

		class IndicatorAltRadar
			{
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
			};

		class IndicatorAltRadar2
			{
			selection="alt2";
			axis="osa_alt2";
			angle=-360;
			min=0;
			max=304;
			};

		class IndicatorSpeed
			{
			selection="mph";
			axis="osa_mph";
			angle=-350;
			min="40 / 3.6";
			max="450 / 3.6";
			};

		class IndicatorSpeed2
			{
			selection="mph2";
			axis="osa_mph2";
			angle=-350;
			min="40 / 3.6";
			max="450 / 3.6";
			};

		class IndicatorRPM
			{
			selection="rpm";
			axis="osa_rpm";
			angle=-330;
			min=0;
			max=12;
			};

		class IndicatorRPM2
			{
			selection="rpm2";
			axis="osa_rpm2";
			angle=-330;
			min=0;
			max=12;
			};

		class IndicatorVertSpeed
			{
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-360;
			min=-30;
			max=30;
			};

		class IndicatorVertSpeed2
			{
			selection="vert_speed2";
			axis="osa_vert_speed2";
			angle=-360;
			min=-30;
			max=30;
			};

		class Reflectors
			{

			class Left
				{
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.6;
				brightness=1.0;
				};

			class Right
				{
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.6;
				brightness=1.0;
				};
			};
		};

	class BoatE:SmallShip
		{
		vehicleClass="Russia Ships";
		displayName="$STR_DN_BOAT";
		accuracy=0.5;
		scope=2;
		crew="Russia_Rifleman";
		model="hrl";
		picture="ihrl";
		side=0;
		maxSpeed=60;
		driverAction="ManActHRLDriver";
		gunnerAction="ManActHRLGunner";
		cargoAction[]={"ManActCargo"};
		gunnerOpticsModel="optika_empty";
		transportSoldier=10;
		cost=100000;
		armor=100;

		class TransportMagazines
			{

			class _xx_d4t_AK74
				{
				magazine="d4t_AK74_mag";
				count="30*1";
				};

			class _xx_d4t_pk_mag
				{
				magazine="d4t_pk_mag";
				count="5*1";
				};

			class _xx_d4t_rgo
				{
				magazine="d4t_rgo";
				count="10*1";
				};
			};

		class Turret:TurretBase
			{
			soundServo[]={"",0.01,1.0};
			minElev=-5;
			maxElev=20;
			minTurn=90;
			maxTurn=270;
			};

		class ViewOptics:ViewOpticsBase
			{
			initFov=0.3;
			minFov=0.17;
			maxFov=0.35;
			initAngleY=180;
			minAngleY=90;
			maxAngleY=270;
			};

		class ViewGunner:ViewGunnerBase
			{
			initAngleY=180;
			minAngleY=180;
			maxAngleY=180;
			initAngleX=0;
			minAngleX=-15;
			maxAngleX=25;
			};
		};

	class ReammoBoxEast:ReammoBox
		{
		scope=2;
		accuracy=1000;
		displayName="$STR_DN_AMMO_CRATES_EAST";

		class TransportMagazines
			{

			class _xx_d4t_AK74
				{
				magazine="d4t_AK74_mag";
				count="30*1";
				};

			class _xx_d4t_pk_mag
				{
				magazine="d4t_pk_mag";
				count="5*1";
				};

			class _xx_d4t_rgo
				{
				magazine="d4t_rgo";
				count="10*1";
				};

			class _xx_d4t_5RD_127_Mag
				{
				magazine="d4t_5RD_127_Mag";
				count="10*1";
				};

			class _xx_d4t_rpgrocket
				{
				magazine="d4t_rpgrocket";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};
		};

	class HeavyReammoBoxEast:HeavyReammoBox //TODO
		{
		scope=2;
		accuracy=1000;
		displayName="$STR_DN_AMMO_CRATES_EAST2";

		class TransportMagazines
			{

			class AK74
				{
				magazine="AK74";
				count=20;
				};

			class HandGrenade
				{
				magazine="HandGrenade";
				count=10;
				};

			class GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count=10;
				};

			class RPGLauncher
				{
				magazine="RPGLauncher";
				count=8;
				};

			class 9K32Launcher
				{
				magazine="9K32Launcher";
				count=3;
				};

			class PipeBomb
				{
				magazine="PipeBomb";
				count=6;
				};

			class Mine
				{
				magazine="Mine";
				count=6;
				};

			class AT4Launcher
				{
				magazine="AT4Launcher";
				count=3;
				};
			};
		};

	class Kamov:Helicopter
		{
		access=2;
		scope=2;
		crew="SoldierEPilot";
		picture="\ffur_rua\hok\icon";
		maxSpeed=350;
		ejectSpeed[]={0,80,0};
		gearRetracting="true";
		soundEngine[]={"\ffur_rua\hok\sound\e_nrm_ot.ogg","db+2",1};
		side=0;
		displayName="Ka-52";
		nameSound="chopper";
		accuracy=0.5;
		cost=4000000;
		armor=150;
		model="\ffur_rua\hok\KA52.p3d";
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		//weapons[]={"EV_Ka2A4230mm","EV_RakVikhr","EVKa52Igla","Ev80mmrocket"};
		//magazines[]={"EV_Ka2A4230mm_AP","EV_Ka2A4230mm_HE","EV_RakVikhr","EVKa52Igla","Ev80mmrocket"};
		transportSoldier=0;
		transportAmmo=0;
		type=3;
		extCameraPosition[]={0,3,-20};
		driverAction="ManActEvKa52Pilot";
		gunnerAction="ManActEvKa52Pilot";
		gunnerOpticsModel="\ffur_rua\hok\optika_ka52";
		driverOpticsModel="\ffur_rua\hok\optika_ka52_Pl";
		hiddenselections[]={"n1","n2","n3","n4","igla1","igla2","igla3","igla4","DvigL","dvigP","fireL","fireP","maslo","rotor","Topliv","lamp_gearDW","lamp_gearUP","ARL","NS","obluch","OPS","PA","Radio","Schassi","Tormoz","Uderg","VCU","threat_1","threat_2","threat_3","INDIK_dvig","INDIK_toplivo","INDIK_Weapon","INDIK_elektronik","ILS_OFF","st"};
		threat[]={0.6,1,0.8};
		typicalCargo[]={"Soldier"};
		hasGunner=1;
		hideWeaponsCargo=1;
		mainRotorSpeed=5;
		backRotorSpeed=5;
		steerAheadSimul=2;
		steerAheadPlan=2;
		minMainRotorDive=-5;
		maxMainRotorDive="+5";
		neutralMainRotorDive=0;
		minBackRotorDive=-5;
		maxBackRotorDive="+5";
		neutralBackRotorDive=0;
		armorAvionics=0.7;
		armorVRotor=1.0;
		armorHRotor=1.0;
		armorMissiles=0.6;
		armorGlass=0.7;
		dammageHalf[]={"\ffur_rua\hok\Steclo\S1.paa","\ffur_rua\hok\Steclo\S2.paa","\ffur_rua\hok\Steclo\S3.paa"};
		dammageFull[]={"\ffur_rua\hok\Steclo\S1.paa","\ffur_rua\hok\Steclo\S3.paa"};
		animated=1;
		vehicleClass="Russia Air";

		class ViewOpticsBase
			{
			};

		class ViewOptics:ViewOpticsBase
			{
			initAngleX=0;
			minAngleX=-15;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=-45;
			maxAngleY=10;
			initFov=0.5;
			minFov=0.01;
			maxFov=0.5;
			};

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
				brightness=1;
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
				brightness=1;
				};
			};

		class IndicatorWatch
			{
			hour="hour";
			minute="minute";
			axis="osa_time";
			reversed="true";
			};

		class IndicatorAltBaro
			{
			selection="alt";
			axis="osa_alt";
			angle=-350;
			min=0;
			max=200;
			};

		class IndicatorAltRadar
			{
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-360;
			min=0;
			max=304;
			};

		class IndicatorSpeed
			{
			selection="mph";
			axis="osa_mph";
			angle=350;
			min=0;
			max="400 / 3.6";
			};

		class IndicatorVertSpeed
			{
			selection="vs";
			axis="osa_vs";
			angle=-360;
			min=30;
			max=-30;
			};

		class IndicatorCompass
			{
			selection="kompas";
			axis="osa_kompas";
			angle=360;
			min=-3.141593;
			max=3.141593;
			};

		class IndicatorCompass2
			{
			selection="kompas2";
			axis="osa_kompas2";
			angle=360;
			min=-3.141593;
			max=3.141593;
			};

		class indicatorHorizont2
			{
			selection="horizont2";
			axis="osa_horizont2";
			angle=-360;
			min=-3.141593;
			max=3.141593;
			};

		class TurretBase
			{
			};

		class Turret:TurretBase
			{
			gunAxis="osahlavne";
			turretAxis="osaveze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-45;
			maxElev=2;
			minTurn=-15;
			maxTurn=0;
			initTurn=0;
			body="otocvez";
			gun="otochlaven";
			};

		class Animations
			{

			class missilewarner
				{
				type="rotation";
				animperiod=0.001;
				selection="threat";
				axis="osa_threat";
				angle0=-1.5700001;
				angle1=-7.8499999;
				};

			class RightDoor
				{
				type="rotation";
				animPeriod=2;
				selection="P_door";
				axis="osa_P_door";
				angle0=0;
				angle1=-1;
				};

			class LeftDoor
				{
				type="rotation";
				animPeriod=2;
				selection="L_door";
				axis="osa_L_door";
				angle0=0;
				angle1=1;
				};

			class NoseGear
				{
				type="rotation";
				animPeriod=2;
				selection="nosewheel";
				axis="axisnosewheel";
				angle0=0;
				angle1=1;
				};

			class RightGear
				{
				type="rotation";
				animPeriod=2;
				selection="rightwheel";
				axis="osa GearP";
				angle0=0;
				angle1=1.5;
				};

			class LeftGear
				{
				type="rotation";
				animPeriod=2;
				selection="leftwheel";
				axis="osa GearL";
				angle0=0;
				angle1=-1.5;
				};

			class GearP
				{
				type="rotation";
				animPeriod=2;
				selection="GearP";
				axis="osa stoikaP";
				angle0=0;
				angle1=-1.5;
				};

			class GearL
				{
				type="rotation";
				animPeriod=2;
				selection="GearL";
				axis="osa stoikaL";
				angle0=0;
				angle1=1.5;
				};

			class zgd_P
				{
				type="rotation";
				animPeriod=2;
				selection="zgd_P";
				axis="osa_zgd_P";
				angle0=0;
				angle1=1.2;
				};

			class zgd_L
				{
				type="rotation";
				animPeriod=2;
				selection="zgd_L";
				axis="osa_zgd_L";
				angle0=0;
				angle1=-1.2;
				};

			class zgd2_P
				{
				type="rotation";
				animPeriod=2;
				selection="zgd2_P";
				axis="osa_zgd2_P";
				angle0=0;
				angle1=1;
				};

			class zgd2_L
				{
				type="rotation";
				animPeriod=2;
				selection="zgd2_L";
				axis="osa_zgd2_L";
				angle0=0;
				angle1=-1;
				};

			class Flir
				{
				type="rotation";
				animPeriod=3;
				selection="flir";
				axis="osa flir";
				angle1=3;
				angle0=-3;
				};

			class Flir2
				{
				type="rotation";
				animPeriod=3;
				selection="flir2";
				axis="osa_flir2";
				angle1=-1;
				angle0=1;
				};

			class Radar
				{
				type="rotation";
				animPeriod=3;
				selection="radar";
				axis="osa_radar";
				angle1=0.8;
				angle0=-0.8;
				};

			class IndicatorRPM
				{
				type="rotation";
				animPeriod=4;
				selection="rpm";
				axis="osa_rpm";
				angle0=0;
				angle1=-0.16;
				};

			class IndicatorRPM2
				{
				type="rotation";
				animPeriod=4;
				selection="rpm2";
				axis="osa_rpm2";
				angle0=0;
				angle1=-0.16;
				};

			class GearTumbler
				{
				type="rotation";
				animPeriod=2;
				selection="gear_tumbl";
				axis="osa_gear_tumbl";
				angle0=0;
				angle1=1;
				};

			class tumbler_AFL
				{
				type="rotation";
				animPeriod=1;
				selection="tumb_AFL";
				axis="osa_tumb_AFL";
				angle0=0;
				angle1=1;
				};

			class tumbler_AFR
				{
				type="rotation";
				animPeriod=1;
				selection="tumb_AFR";
				axis="osa_tumb_AFR";
				angle0=0;
				angle1=1;
				};
			};
		};

	class AmmoBoxOUTEW:ReammoboxEast //TODO
		{
		model="hromada_beden";
		scope=2;
		accuracy=1000;
		displayName="$STR_DN_OUT_AMMO_CRATES_WP_EAST";

		class TransportMagazines
			{

			class _xx_AK74
				{
				magazine="AK74";
				count=100;
				};

			class _xx_skorpionmag
				{
				magazine="skorpionmag";
				count=100;
				};

			class _xx_tokarevmag
				{
				magazine="tokarevmag";
				count=100;
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count=30;
				};
			};

		class TransportWeapons
			{

			class _xx_AK74
				{
				weapon="AK74";
				count=50;
				};

			class _xx_skorpion
				{
				weapon="skorpion";
				count=10;
				};

			class _xx_tokarev
				{
				weapon="tokarev";
				count=10;
				};
			};
		};

	class Su25: Plane //TODO
		{
		scope=2;
		crew = SoldierEPilot;
		picture=\su25\isu25;

		side=TEast;
		displayName="SU-39";
		accuracy=0.30;

		driverAction = ManActA10Pilot;

		maxSpeed = 800;

		armor=24;
		cost=20000000;
		model="\su25\su25";
		weapons[]={Ch29TLauncher, Rocket57x64, MachineGun30A10};
		magazines[]={Ch29TLauncher, Rocket57x64, MachineGun30A10};
		fov=0.5;

		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={0.1, 1, 0.7};
		vehicleClass="Russia Air";

		class Reflectors
		{
			class Reflector
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};

		class IndicatorAltRadar
		{
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar2
		{
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt2";
			axis = "osa_alt2";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorSpeed
		{
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 1000 / 3.6;
		};
		class IndicatorVertSpeed
		{
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -240;
			min = -150;
			max = 150;
		};
		class IndicatorVertSpeed2
		{
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -240;
			min = -150;
			max = 150;
		};
	};