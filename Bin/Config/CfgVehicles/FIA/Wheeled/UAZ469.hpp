class UAZG : Russia_UAZ469
{
	displayName = "UAZ-469";
	model = "\sjc_models\fia\uaz469.p3d";
	hiddenSelections[] = {"n1","n2","n3","n4","doorSign"};
	side = SIDE_FIA;
	crew = "SoldierGB";
	
	class EventHandlers
	{
		init = "_this exec {\SJC_Scripts\Russia\UAZ469\spz.sqs};";
		killed = "(_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Car_Burner.sqs}";
	};
};

class FIA_UAZ469Ambulance : UAZG
{
	displayName="UAZ-469 Ambulance";
	model="sguaz";
	transportSoldier=2;
	attendant=1;
	cargoAction[]={"ManActM113Injured","ManActCargo"};
	cargoIsCoDriver[]={0,0};
};