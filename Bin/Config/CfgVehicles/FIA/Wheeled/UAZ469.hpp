class UAZG : Russia_UAZ469
{
	displayName = "UAZ-469";
	model = "\sjc_models\fia\uaz469.p3d";
	hiddenSelections[] = {"n1","n2","n3","n4","doorSign"};
	side = SIDE_FIA;
	crew = "FIA_Soldier";
	
	class EventHandlers
	{
		Init = "[_this select 0, 49] exec {\SJC_Scripts\vehicleTODO.sqs}";
	};
	/*class eventHandlers//TODO
	{
		Init = "[(_this Select 0)] exec {\rf_uaz\scripts\spz.sqs}";
	};*/
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