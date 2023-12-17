class FIA_AASoldier : FIA_ATSoldier
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName="AA Soldier";
	model = "\sjc_models\fia\rebel7.p3d";
	weapons[]={"AKM", "9K32Launcher", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "9K32Launcher"};
	threat[]={THREAT_AASOLDIER};
};

class FIA_ShotgunSoldier : FIA_Soldier
{
	displayName = "Soldier (Shotgun)";
	model = "\sjc_models\fia\rebel9.p3d";
	weapons[]={"Kozlice","Throw","Put"};
	magazines[]={"KozliceShell","KozliceShell","KozliceShell","KozliceShell","KozliceShell","KozliceBall","KozliceBall","KozliceBall","KozliceBall","KozliceBall"};
};

class FIA_Sniper : FIA_Soldier
{
	displayName="Sniper";
	model = "\sjc_models\fia\rebel10.p3d";
	weapons[]={"HuntingRifle", "Ingram", "Binocular", "Throw", "Put"};
	magazines[]={"HuntingRifleMag", "HuntingRifleMag", "HuntingRifleMag", "HuntingRifleMag", "HuntingRifleMag", "HuntingRifleMag", "RGO", "RGO", "RGO", "RDG1", "IngramMag", "IngramMag", "IngramMag", "IngramMag"};
};

//-Parachute
class FIA_Parachute : ParachuteBase
{
	scope = SCOPE_HIDDEN; //FIA does not have air vehicles but still it is needed if you for instance steal an aircraft
	side = SIDE_FIA;
	crew = "FIA_Soldier";
};