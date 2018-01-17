#ifdef SJC_BUNDESWEHR_ENABLE

class bw_soldier : Soldier
{
	scope=public;
	side=SJC_BUNDESWEHR_SIDE;
	displayName="Schütze";
	vehicleClass="Infantry - BW";

	weapons[]={g36, Throw, Put}; //p8
	magazines[]={g36mag, g36mag, g36mag, g36mag, g36mag, g36mag, g36mag, HandGrenade, HandGrenade, HandGrenade};
	model="\d4t_files\models\bw\infantry\bw_soldier.p3d";
	wounds[]={
		"\BWMOD_i\crewH\arm.pac",	"\BWMOD_i\crewH\w\arm.pac",
		"\BWMOD_i\crewH\hose.pac",	"\BWMOD_i\crewH\w\hose.pac",
		"\BWMOD_i\crewH\torso.pac",	"\BWMOD_i\crewH\w\torso.pac",
		"\BWMOD_i\crewT\arm.pac","\BWMOD_i\crewT\w\arm.pac","\BWMOD_i\crewT\hose.pac","\BWMOD_i\crewT\w\hose.pac",
		"\BWMOD_i\crewT\torso.pac","\BWMOD_i\crewT\w\torso.pac","\BWMOD_i\ksk\leg.pac","\BWMOD_i\ksk\w\leg.pac","\BWMOD_i\ksk\torsoh.pac",
		"\BWMOD_i\ksk\w\torsoh.pac","\BWMOD_i\ksk\torsov.pac","\BWMOD_i\ksk\w\torsov.pac","\d4t_tex\bw_solder\1starm1.pac","\d4t_tex\bw_solder\w\arm.pac",
		"\d4t_tex\bw_solder\1starml.pac","\d4t_tex\bw_solder\w\arm.pac","\d4t_tex\bw_solder\1starmr.pac","\d4t_tex\bw_solder\w\arm.pac","\d4t_tex\bw_solder\arm1.pac",
		"\d4t_tex\bw_solder\w\arm.pac","\d4t_tex\bw_solder\arml.pac","\d4t_tex\bw_solder\w\arm.pac","\d4t_tex\bw_solder\armr.pac","\d4t_tex\bw_solder\w\arm.pac","\d4t_tex\bw_solder\leg.pac",
		"\d4t_tex\bw_solder\w\leg.pac","\d4t_tex\bw_solder\legh.pac","\d4t_tex\bw_solder\w\legh.pac","\d4t_tex\bw_solder\legv.pac","\d4t_tex\bw_solder\w\legv.pac","\d4t_tex\bw_solder\torsoh.pac",
		"\d4t_tex\bw_solder\w\torsoh.pac","\d4t_tex\bw_solder\torsov.pac","\d4t_tex\bw_solder\w\torsov.pac","\BWMOD_i\des\1starm1.pac","\BWMOD_i\des\d\1starm1.pac",
		"\BWMOD_i\des\1starml.pac","\BWMOD_i\des\d\1starml.pac","\BWMOD_i\des\1starmr.pac","\BWMOD_i\des\d\1starmr.pac","\BWMOD_i\des\arm1.pac",
		"\BWMOD_i\des\d\arm1.pac","\BWMOD_i\des\arml.pac","\BWMOD_i\des\d\arml.pac","\BWMOD_i\des\armr.pac","\BWMOD_i\des\d\armr.pac","\BWMOD_i\des\leg.pac",
		"\BWMOD_i\des\d\leg.pac","\BWMOD_i\des\legh.pac","\BWMOD_i\des\d\legh.pac","\BWMOD_i\des\legksk.pac","\BWMOD_i\des\d\legksk.pac","\BWMOD_i\des\legs.pac",
		"\BWMOD_i\des\d\legs.pac","\BWMOD_i\des\legv.pac","\BWMOD_i\des\d\legv.pac","\BWMOD_i\des\torsoh.pac","\BWMOD_i\des\d\torsoh.pac","\BWMOD_i\des\torsohksk.pac",
		"\BWMOD_i\des\d\torsohksk.pac","\BWMOD_i\des\torsov.pac","\BWMOD_i\des\d\torsov.pac","\BWMOD_i\des\torsovksk.pac","\BWMOD_i\des\d\torsovksk.pac"};//TODO
	hiddenSelections[]={"medic","backpack"};
};

#endif