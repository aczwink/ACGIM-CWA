class SoldierECrew : SoldierEB
{
	model="\d4t_files\models\russia\infantry\1985\ussr_crew85.p3d";
	hiddenSelections[]={};
	nameSound="crew";
	displayName="Crew";
	vehicleClass="Infantry (Misc)";
	weapons[]={"Tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag", "RDG1Red", "RDG1Red", "RDG1Red"};
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
};

class Russia_HelicopterPilot : SoldierEB
{
	model="\d4t_files\models\russia\infantry\1985\ussr_helipilot85.p3d";
	hiddenSelections[]={"headgear","shlem2"};
	displayName="Helicopter Pilot";
	vehicleClass="Infantry (Misc)";
	nameSound="pilot";
	weapons[]={"Tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag", "RDG1Red", "RDG1Red", "RDG1Red"};
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
};

class SoldierEPilot : Russia_HelicopterPilot
{
	displayName="Aircraft Pilot";
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