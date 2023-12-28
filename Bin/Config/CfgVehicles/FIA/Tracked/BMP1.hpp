class BMPRes : BMP
{
	access=2;
#ifdef ACGIM_SCENARIO_1985
	displayName="BMP-1 (Stolen)";
#endif
#ifdef ACGIM_SCENARIO_2007
	displayName="BMP-3 (Stolen)";
#endif
	side = SIDE_FIA;
	crew = "SoldierGCrew";
	hiddenSelections[]={"cccp"};
};