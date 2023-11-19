class USA_Crew : USA_Soldier
{
	animated=1;
	nameSound="crew";
	displayName="Crew";
	vehicleClass="Infantry (Misc)";
	weapons[]={"M1911", "NVGoggles", "Throw", "Put"};
	magazines[]={"M1911", "M1911", "M1911", "M1911"};
	model="\d4t_files\models\us\infantry\1985\crew85.p3d";

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_AircraftPilot : USA_Soldier
{
	vehicleClass="Infantry (Misc)";
	nameSound="pilot";
	displayName="Aircraft Pilot";
	weapons[]={"M1911", "NVGoggles", "Throw", "Put"};
	magazines[]={"M1911", "M1911", "M1911", "M1911", "M18Red", "M18Red", "M18Green", "M18Green"};
	model="\d4t_files\models\us\infantry\us_aircraft_pilot.p3d";
	wounds[]=
	{
		"\d4t_tex\pt\ArmGnA.paa","\d4t_tex\pt\ArmGnAD.paa",
		"\d4t_tex\pt\ArmGnB.paa","\d4t_tex\pt\ArmGnBD.paa",
		"\d4t_tex\pt\LegGn.paa","\d4t_tex\pt\LegGnD.paa",
		"\d4t_tex\pt\PilbdyB.paa","\d4t_tex\pt\PilBdyBD.paa",
		"\d4t_tex\pt\PilHel1.paa","\d4t_tex\pt\PilHel1D.paa"
	};

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class USA_HelicopterPilot : USA_AircraftPilot
{
	displayName="Helicopter Pilot";
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

	//TODO_2005:
	//TODO_Marines:
	//TODO_Desert:
};

class OfficerWHG : USA_Soldier
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