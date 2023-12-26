class SoldierWCrew : SoldierWB
{
	animated=1;
	nameSound="crew";
	displayName="Crew";
	vehicleClass="Infantry (Misc)";

#ifdef ACGIM_SCENARIO_1985
	model="\d4t_files\models\us\infantry\1985\crew85.p3d";
	weapons[]={"M1911", "NVGoggles", "Throw", "Put"};
	magazines[]={"M1911", "M1911", "M1911", "M1911"};
#endif
#ifdef ACGIM_SCENARIO_2007
	model="\d4t_files\models\us\infantry\us_crew.p3d";
	weapons[]={"M9","NVGoggles","Throw","Put"};
	magazines[]={"M9","M9","M9","M9"};
	wounds[]={
		"\d4t_tex\usi\armL.paa","\d4t_tex\usi\armLd.paa",
		"\d4t_tex\usi\armR.paa","\d4t_tex\usi\armRd.paa",
		"\d4t_tex\usi\baBO.paa","\d4t_tex\usi\BaBOd.paa",
		"\d4t_tex\usi\baFO.paa","\d4t_tex\usi\BaFOd.paa",
		"\d4t_tex\usi\bodyB.paa","\d4t_tex\usi\bodyBd.paa",
		"\d4t_tex\usi\bodyF.paa","\d4t_tex\usi\bodyFd.paa",
		"\d4t_tex\usi\legL.paa","\d4t_tex\usi\legLd.paa",
		"\d4t_tex\usi\legR.paa","\d4t_tex\usi\legRd.paa",
	};
	hiddenSelections[]={"medic"};
#endif
};

class SoldierWPilot : SoldierWB
{
	vehicleClass="Infantry (Misc)";
	nameSound="pilot";
	displayName="Aircraft Pilot";
	model="\d4t_files\models\us\infantry\us_aircraft_pilot.p3d";
	wounds[]=
	{
		"\d4t_tex\pt\ArmGnA.paa","\d4t_tex\pt\ArmGnAD.paa",
		"\d4t_tex\pt\ArmGnB.paa","\d4t_tex\pt\ArmGnBD.paa",
		"\d4t_tex\pt\LegGn.paa","\d4t_tex\pt\LegGnD.paa",
		"\d4t_tex\pt\PilbdyB.paa","\d4t_tex\pt\PilBdyBD.paa",
		"\d4t_tex\pt\PilHel1.paa","\d4t_tex\pt\PilHel1D.paa"
	};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={"M1911", "NVGoggles", "Throw", "Put"};
	magazines[]={"M1911", "M1911", "M1911", "M1911", "M18Red", "M18Red", "M18Green", "M18Green"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M9","NVGoggles","Throw","Put"};
	magazines[]={"M9","M9","M9","M9","M18Red","M18Red","M18Green","M18Green"};
#endif
};

class SoldierWPilotHG : SoldierWPilot
{
	displayName="Helicopter Pilot";

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"armpatch_left","armpatch_right"};
	model="\d4t_files\models\us\infantry\1985\helicopter_pilot85.p3d";
	wounds[]=
	{
		"\d4t_tex\piloth\wl\leg_r.paa","\d4t_tex\piloth\wl\leg_r_d.paa",
		"\d4t_tex\piloth\wl\leg_l.paa","\d4t_tex\piloth\wl\leg_l_d.paa",
		"\d4t_tex\piloth\wl\arm_l.paa","\d4t_tex\piloth\wl\arm_l_d.paa",
		"\d4t_tex\piloth\wl\arm_r.paa","\d4t_tex\piloth\wl\arm_r_d.paa",
		"\d4t_tex\piloth\wl\back.paa","\d4t_tex\piloth\wl\back_d.paa",
		"\d4t_tex\piloth\wl\chest.paa","\d4t_tex\piloth\wl\chest_d.paa",
		"\d4t_tex\piloth\hgu56p.paa","\d4t_tex\piloth\hgu56p_d.paa"
	};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={"armpatch_left","armpatch_right","nvg_gear"};
	model="\d4t_files\models\us\infantry\us_helicopter_pilot.p3d";
	wounds[]={
		"\d4t_tex\piloth\arm_l.paa","\d4t_tex\piloth\arm_l_d.paa",
		"\d4t_tex\piloth\arm_r.paa","\d4t_tex\piloth\arm_r_d.paa",
		"\d4t_tex\piloth\back.paa","\d4t_tex\piloth\back_d.paa",
		"\d4t_tex\piloth\chest.paa","\d4t_tex\piloth\chest_d.paa",
		"\d4t_tex\piloth\hgu56p.paa","\d4t_tex\piloth\hgu56p_d.paa",
		"\d4t_tex\piloth\leg_l.paa","\d4t_tex\piloth\leg_l_d.paa",
		"\d4t_tex\piloth\leg_r.paa","\d4t_tex\piloth\leg_r_d.paa",
	};
#endif
};

class OfficerWHG : SoldierWB
{
	accuracy = ACCURACY_OFFICER;
	cost = COST_OFFICER;
	model = "\sjc_models\USA\officer.p3d";
	nameSound="officer";
	displayName = "Officer";
	vehicleClass="Infantry (Misc)";
	weapons[]={"M1911", "Throw", "Put"};
	magazines[]={"M1911", "M1911", "M1911", "M1911"};
};

class SoldierWCaptive : SoldierWB
{
	cost = 50000;
	displayName = "$STR_DN_SOLDIERCAPTIVE";
	vehicleClass="Infantry (Misc)";
	weapons[] = {};
	magazines[] = {};
};