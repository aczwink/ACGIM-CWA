class T72Res : T72
{
	access=2;
#ifdef ACGIM_SCENARIO_1985
	displayName="T-72A (Stolen)";
#endif
#ifdef ACGIM_SCENARIO_2007
	displayName="T-80UM (FIA)";
#endif
	side = SIDE_FIA;
	hiddenSelections[]={};
	model="\sjc_models\fia\t72a_fia.p3d";
	crew = "SoldierGCrew";
};