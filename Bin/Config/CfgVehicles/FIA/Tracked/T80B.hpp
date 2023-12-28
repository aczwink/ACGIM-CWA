class T80Res : T80
{
	access=2;
#ifdef ACGIM_SCENARIO_1985
	displayName = "T-80B (Stolen)";
#endif
#ifdef ACGIM_SCENARIO_2007
	displayName="T-90 (Stolen)";
#endif
	side = SIDE_FIA;
	hiddenSelections[]={"n1","n2","n3","SNK1","SNK2","SNK3","emb","shield"};
	model="\sjc_models\fia\t80b_fia.p3d";
	crew = "SoldierGCrew";
};