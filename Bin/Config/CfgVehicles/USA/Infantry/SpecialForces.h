class SoldierWSniper : SoldierWB
{
	accuracy = ACCURACY_SNIPER;
	camouflage = CAMOUFLAGE_SNIPER;
	canDeactivateMines=1;
	canHideBodies=1;
	nightVision=1;
	cost = COST_SNIPER;
	displayName="Sniper";
	hiddenSelections[]={"medic"};
	model="\d4t_files\models\us\infantry\us_sniper.p3d";//used odol explorer for this
	nameSound="sniper";
	picture="\misc\sniper.paa";
	sensitivity = 2;
	threat[]={THREAT_SNIPER};
	vehicleClass="Infantry (Special Forces)";
	wounds[]= //No face is visible, no facial wounds
	{
		"\d4t_tex\snip\back.paa", "\d4t_tex\snip\back_d.paa",
		"\d4t_tex\snip\chest.paa", "\d4t_tex\snip\chest_d.paa"
	};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={"M21_JungleCamo", "M1911_SD", "NVGoggles", "Throw", "Put"};
	magazines[]={"M21", "M21", "M21", "M21", "M21", "M21", "M21", "ANM8", "M18Red", "M18Green", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M82A1","MK23SD","NVGoggles","Throw","Put"};
	magazines[]={"M82A1","M82A1","M82A1","M82A1","M82A1","M82A1","M82A1","ANM8","M18Red","M18Green","MK23SD","MK23SD","MK23SD","MK23SD"};
#endif
};

class SoldierWSaboteur : SoldierWB
{
	accuracy = ACCURACY_SFOPERATOR;
	camouflage = CAMOUFLAGE_USA_SF_OPERATOR;
	cost = COST_SFOPERATOR;
	picture="\misc\meciky.paa";
	nameSound="blackOp";
	vehicleClass="Infantry (Special Forces)";
	displayName="Operator";
	threat[]={THREAT_SFOPERATOR};
	canHideBodies=1;
	canDeactivateMines=1;
	nightVision=1;

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd"};
	model="\d4t_files\models\us\infantry\1985\sf_op85.p3d";
	weapons[]={WEAPON_REFERENCE(CAR15_SD), "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), "PipeBomb", "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
	wounds[]=
	{
		FACE_WOUNDS,
		"\d4t_tex\usfc85\armL.paa",		"\d4t_tex\usfc85\armLd.paa",
		"\d4t_tex\usfc85\armR.paa",		"\d4t_tex\usfc85\armRd.paa",
		"\d4t_tex\usfc85\baB.paa",		"\d4t_tex\usfc85\BaBd.paa",
		"\d4t_tex\usfc85\baF.paa",		"\d4t_tex\usfc85\BaFd.paa",
		"\d4t_tex\usfc85\baBO.paa",		"\d4t_tex\usfc85\BaBOd.paa",
		"\d4t_tex\usfc85\baFO.paa",		"\d4t_tex\usfc85\BaFOd.paa",
		"\d4t_tex\usfc85\bodyB.paa",		"\d4t_tex\usfc85\bodyBd.paa",
		"\d4t_tex\usfc85\bodyF.paa",		"\d4t_tex\usfc85\bodyFd.paa",
		"\d4t_tex\usfc85\legL.paa",		"\d4t_tex\usfc85\legLd.paa",
		"\d4t_tex\usfc85\legR.paa",		"\d4t_tex\usfc85\legRd.paa",
		"\d4t_tex\usfc85\legP.paa",		"\d4t_tex\usfc85\legPd.paa",
		"\d4t_tex\usfc85\helS.paa",		"\d4t_tex\usfc85\helSd.paa",
		"\d4t_tex\usfc85\helT.paa",		"\d4t_tex\usfc85\helTd.paa",
		"\d4t_tex\usfc85\achS.paa",		"\d4t_tex\usfc85\achSd.paa",
		"\d4t_tex\usfc85\achT.paa",		"\d4t_tex\usfc85\achTd.paa",
		"\d4t_tex\usfc85\pcapS.paa",		"\d4t_tex\usfc85\pcapSd.paa",
		"\d4t_tex\usfc85\pcapT.paa",		"\d4t_tex\usfc85\pcapTd.paa",
		"\d4t_tex\usfc85\bhatS.paa",		"\d4t_tex\usfc85\bhatSd.paa",
		"\d4t_tex\usfc85\bhatT.paa",		"\d4t_tex\usfc85\bhatTd.paa",
		"\d4t_tex\usfc85\rarmL.paa",		"\d4t_tex\usfc85\rarmLd.paa",
		"\d4t_tex\usfc85\aarmL.paa",		"\d4t_tex\usfc85\aarmLd.paa",
		"\d4t_tex\usfc85\sarmL.paa",		"\d4t_tex\usfc85\sarmLd.paa",
		"\d4t_tex\usfc85\sarmR.paa",		"\d4t_tex\usfc85\sarmRd.paa",
		"\d4t_tex\usfc85\sbaB.paa",		"\d4t_tex\usfc85\sBaBd.paa",
		"\d4t_tex\usfc85\sbaF.paa",		"\d4t_tex\usfc85\sBaFd.paa",
		"\d4t_tex\usfc85\cachS.paa",		"\d4t_tex\usfc85\cachSd.paa",
		"\d4t_tex\usfc85\cachT.paa",		"\d4t_tex\usfc85\cachTd.paa",
		"\d4t_tex\usfc85\helT85.paa",	"\d4t_tex\usfc85\helT85d.paa",
		"\d4t_tex\usfc85\baB85.paa",		"\d4t_tex\usfc85\BaB85d.paa",
		"\d4t_tex\usfc85\baF85.paa",		"\d4t_tex\usfc85\BaF85d.paa",
		"\d4t_tex\usfc85\rbaB.paa",		"\d4t_tex\usfc85\rBaBd.paa",
		"\d4t_tex\usfc85\rbaF.paa",		"\d4t_tex\usfc85\rBaFd.paa",
		"\d4t_tex\usfc85\chelS.paa",		"\d4t_tex\usfc85\chelSd.paa",
		"\d4t_tex\usfc85\chelT.paa",		"\d4t_tex\usfc85\chelTd.paa",
	};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"goou","goostu","googu","essu","good","goostd","googd","essd"};
	model="\d4t_files\models\us\infantry\sf_op.p3d";//used odol explorer for this, if there are any bugs better to use textureswap
	weapons[]={"M4ACOG_SD","MK23SD","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"M4_SD","M4_SD","M4_SD","M4_SD","PipeBomb","PipeBomb","PipeBomb","MK23SD","MK23SD","MK23SD","MK23SD"};
	wounds[]={
		"\d4t_tex\usfc\armr.paa","\d4t_tex\usfc\armrd.paa",
		"\d4t_tex\usfc\bodyb.paa","\d4t_tex\usfc\bodybd.paa",
		"\d4t_tex\usfc\bodyf.paa","\d4t_tex\usfc\bodyfd.paa",
		"\d4t_tex\usfc\cachs.paa","\d4t_tex\usfc\cachsd.paa",
		"\d4t_tex\usfc\cacht.paa","\d4t_tex\usfc\cachtd.paa",
		"\d4t_tex\usfc\legl.paa","\d4t_tex\usfc\legld.paa",
		"\d4t_tex\usfc\legp.paa","\d4t_tex\usfc\legpd.paa",
		"\d4t_tex\usfc\legr.paa","\d4t_tex\usfc\legrd.paa",
		"\d4t_tex\usfc\sarml.paa","\d4t_tex\usfc\sarmLd.paa",
		"\d4t_tex\usfc\sbab.paa","\d4t_tex\usfc\sbaBd.paa",
		"\d4t_tex\usfc\sbaf.paa","\d4t_tex\usfc\sbaFd.paa",
	};
#endif
};

class SoldierWSaboteurLaser : SoldierWSaboteur
{
	accuracy = ACCURACY_SFOPERATOR_SPOTTER;
	cost = COST_SFOPERATOR_SPOTTER;
	displayName = "Operator (Spotter)";

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {WEAPON_REFERENCE(CAR15_SD), "LaserDesignator", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), "LaserDesignator", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4Cobra_SD","ANPAQ1","MK23SD","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","ANPAQ1","PipeBomb","PipeBomb","MK23SD","MK23SD","MK23SD","MK23SD"};
#endif
};

class SoldierWSaboteurPipe : SoldierWSaboteur
{
	accuracy = ACCURACY_SFOPERATOR_MARKSMAN;
	cost = COST_SFOPERATOR_MARKSMAN;
	displayName = "Operator (Marksman)";

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"M21_SD", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"M21_SD", "M21_SD", "M21_SD", "M21_SD", "M21_SD", "M21_SD", "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4SPR_SD","MK23SD","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","PipeBomb","PipeBomb","MK23SD","MK23SD","MK23SD","MK23SD"};
#endif
};

class SoldierWSaboteurPipeHGS : SoldierWSaboteur
{
	accuracy = ACCURACY_SFOPERATOR_TEAMLEADER;
	cost = COST_SFOPERATOR_TEAMLEADER;
	displayName="Operator (Team Leader)";

#ifdef ACGIM_SCENARIO_1985
	weapons[]={"CAR15_ACOG_SD", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), WEAPON_REFERENCE(CAR15_SD), "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4Eotech_SD","MK23SD","Binocular","NVGoggles","Throw","Put"};
	magazines[]={"M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","M4_SD","PipeBomb","PipeBomb","MK23SD","MK23SD","MK23SD","MK23SD"};
#endif
};


class SoldierWSaboteurDay : SoldierWSaboteur
{
	accuracy = ACCURACY_SFOPERATOR;
	cost = COST_SFOPERATOR;
	displayName="Ranger";

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd", "medic", "mic", "holster"};
	model = "\sjc_models\USA\ranger.p3d";
	weapons[]={WEAPON_REFERENCE(CAR15), "M1911", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), "PipeBomb", "PipeBomb", "M1911", "M1911", "M1911", "M1911"};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"medic","holster","mic"};
	model="\d4t_files\models\us\infantry\ranger.p3d";
	weapons[]={"M4ACOG","M9","Binocular","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","PipeBomb","PipeBomb","M9","M9","M9","M9"};
	wounds[]={
		"\d4t_tex\rng\aarm_l.paa","\d4t_tex\rng\aarm_ld.paa",
		"\d4t_tex\rng\arm_r.paa","\d4t_tex\rng\arm_rd.paa",
		"\d4t_tex\rng\body_bk.paa","\d4t_tex\rng\body_bkd.paa",
		"\d4t_tex\rng\body_frt.paa","\d4t_tex\rng\body_frtd.paa",
		"\d4t_tex\rng\foot_bk.paa","\d4t_tex\rng\foot_bkd.paa",
		"\d4t_tex\rng\foot_frt.paa","\d4t_tex\rng\foot_frtd.paa",
		"\d4t_tex\rng\FOOTPOK.paa","\d4t_tex\rng\FOOTPOKd.paa",
		"\d4t_tex\rng\mich_sid.paa","\d4t_tex\rng\mich_sidd.paa",
		"\d4t_tex\rng\mich_tp.paa","\d4t_tex\rng\mich_tpd.paa"
	};
#endif
};

class USA_SF_Ranger_Spotter : SoldierWSaboteurDay
{
	accuracy = ACCURACY_SFOPERATOR_SPOTTER;
	cost = COST_SFOPERATOR_SPOTTER;
	displayName = "Ranger (Spotter)";
	weapons[] = {WEAPON_REFERENCE(CAR15), "LaserDesignator", "M1911", "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), "LaserDesignator", "M1911", "M1911", "M1911", "M1911"};
};

class SoldierWSaboteurPipeHG : SoldierWSaboteurDay
{
	accuracy = ACCURACY_SFOPERATOR_MARKSMAN;
	cost = COST_SFOPERATOR_MARKSMAN;
	displayName = "Ranger (Marksman)";

#ifdef ACGIM_SCENARIO_1985
	weapons[] = {"M21", "M1911", "Throw", "Put"};
	magazines[]={"M21", "M21", "M21", "M21", "M21", "M21", "PipeBomb", "PipeBomb", "M1911", "M1911", "M1911", "M1911"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4SPR","M9","Binocular","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M4","M4","PipeBomb","M9","M9","M9","M9"};
#endif
};

class SoldierWSaboteurXMS : SoldierWSaboteurDay
{
	accuracy = ACCURACY_SFOPERATOR_TEAMLEADER;
	cost = COST_SFOPERATOR_TEAMLEADER;
	displayName="Ranger (Team Leader)";

#ifdef ACGIM_SCENARIO_1985
	weapons[]={"CAR15_ACOG", "M1911", "Binocular", "Throw", "Put"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4Eotech","M9","Binocular","Throw","Put"};
#endif
};