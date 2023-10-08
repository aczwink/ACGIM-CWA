class USA_Sniper : USA_Soldier
{
	accuracy = ACCURACY_SNIPER;
	camouflage = CAMOUFLAGE_SNIPER;
	canDeactivateMines=1;
	canHideBodies=1;
	cost = COST_SNIPER;
	displayName="Sniper";
	hiddenSelections[]={"medic"};
	model="\d4t_files\models\us\infantry\us_sniper.p3d";//used odol explorer for this
	nameSound="sniper";
	picture="\misc\sniper.paa";
	sensitivity = 2;
	threat[]={THREAT_SNIPER};
	vehicleClass="Infantry (Special Forces)";
	weapons[]={"M21_JungleCamo", "M1911_SD", "NVGoggles", "Throw", "Put"};
	magazines[]={"M21", "M21", "M21", "M21", "M21", "M21", "ANM8", "ANM8", "M18Red", "M18Green", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};
	wounds[]= //No face is visible, no facial wounds
	{
		"\d4t_tex\snip\back.paa", "\d4t_tex\snip\back_d.paa",
		"\d4t_tex\snip\chest.paa", "\d4t_tex\snip\chest_d.paa"
	};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Operator : USA_Soldier
{
	accuracy = ACCURACY_SFOPERATOR;
	camouflage = CAMOUFLAGE_USA_SF_OPERATOR;
	cost = COST_SFOPERATOR;
	picture="\misc\meciky.paa";
	nameSound="blackOp";
	vehicleClass="Infantry (Special Forces)";
	displayName="Operator";
	weapons[]={"CAR15_SD", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"CAR15_SD", "CAR15_SD", "CAR15_SD", "CAR15_SD", "PipeBomb", "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};//TODO
	threat[]={THREAT_SFOPERATOR};
	model="\d4t_files\models\us\infantry\1985\sf_op85.p3d";
	canHideBodies=1;
	canDeactivateMines=1;
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd"};
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

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Operator_Spotter : USA_SF_Operator
{
	accuracy = ACCURACY_SFOPERATOR_SPOTTER;
	cost = COST_SFOPERATOR_SPOTTER;
	displayName = "Operator (Spotter)";
	weapons[] = {"CAR15_SD", "LaserDesignator", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[] = {"CAR15_SD", "CAR15_SD", "CAR15_SD", "CAR15_SD", "LaserDesignator", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Operator_Marksman : USA_SF_Operator
{
	accuracy = ACCURACY_SFOPERATOR_MARKSMAN;
	cost = COST_SFOPERATOR_MARKSMAN;
	displayName = "Operator (Marksman)";
	weapons[] = {"M21_SD", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"M21_SD", "M21_SD", "M21_SD", "M21_SD", "M21_SD", "M21_SD", "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Operator_TeamLeader : USA_SF_Operator
{
	accuracy = ACCURACY_SFOPERATOR_TEAMLEADER;
	cost = COST_SFOPERATOR_TEAMLEADER;
	displayName="Operator (Team Leader)";
	weapons[]={"CAR15_ACOG_SD", "M1911_SD", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"CAR15_SD", "CAR15_SD", "CAR15_SD", "CAR15_SD", "CAR15_SD", "CAR15_SD", "PipeBomb", "PipeBomb", "M1911_SD", "M1911_SD", "M1911_SD", "M1911_SD"};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Ranger : USA_SF_Operator
{
	accuracy = ACCURACY_SFOPERATOR;
	cost = COST_SFOPERATOR;
	model = "\sjc_models\USA\ranger.p3d";
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd", "medic", "mic", "holster"};
	displayName="Ranger";
	weapons[]={WEAPON_REFERENCE(CAR15), "M1911", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), "PipeBomb", "PipeBomb", "M1911", "M1911", "M1911", "M1911"};
};

class USA_SF_Ranger_Spotter : USA_SF_Ranger
{
	accuracy = ACCURACY_SFOPERATOR_SPOTTER;
	cost = COST_SFOPERATOR_SPOTTER;
	displayName = "Ranger (Spotter)";
	weapons[] = {WEAPON_REFERENCE(CAR15), "LaserDesignator", "M1911", "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), WEAPON_REFERENCE(CAR15), "LaserDesignator", "M1911", "M1911", "M1911", "M1911"};
};

class USA_SF_Ranger_Marksman : USA_SF_Ranger
{
	accuracy = ACCURACY_SFOPERATOR_MARKSMAN;
	cost = COST_SFOPERATOR_MARKSMAN;
	displayName = "Ranger (Marksman)";
	weapons[] = {"M21", "M1911", "Throw", "Put"};
	magazines[]={"M21", "M21", "M21", "M21", "M21", "M21", "PipeBomb", "PipeBomb", "M1911", "M1911", "M1911", "M1911"};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_SF_Ranger_TeamLeader : USA_SF_Ranger
{
	accuracy = ACCURACY_SFOPERATOR_TEAMLEADER;
	cost = COST_SFOPERATOR_TEAMLEADER;
	displayName="Ranger (Team Leader)";
	weapons[]={"CAR15_ACOG", "M1911", "Binocular", "Throw", "Put"};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};