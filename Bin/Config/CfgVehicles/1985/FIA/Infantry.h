class FIA_Medic : FIA_Soldier
{
	accuracy = ACCURACY_MEDIC;
	picture="\misc\medik.paa";
	cost = COST_MEDIC;
	displayName="Medic";
	model = "\sjc_models\fia\rebel2.p3d";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	attendant=1;
	weapons[]={"AKM", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM"};
	nameSound="medic";
	hiddenSelections[]={};
};

class FIA_Grenadier : FIA_Soldier
{
	displayName="Grenadier";
	model = "\sjc_models\fia\rebel3.p3d";
	cost = COST_GRENADIER;
	accuracy = ACCURACY_GRENADIER;
	weapons[]={"AKMGP25", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "VOG25", "VOG25", "VOG25"};
};

class FIA_MachineGunner : FIA_Soldier
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	nameSound="machineGunner";
	displayName="Machine Gunner";
	model = "\sjc_models\fia\rebel4.p3d";
	weapons[]={"RPD", "Throw", "Put"};
	magazines[]={"RPD", "RPD", "RPD", "RPD", "RPD"};
	threat[]={THREAT_MACHINEGUNNER};
	/*class UserActions //TODO
		{
            class setcamo
			{
		    displayName="Establish MG Position";
			position="renzhong";
			radius=0.500000;
			condition="alive this";
			statement="[this]exec""\ffur_misc\scripts\Setcamo.sqs""";
			};
			
		};*/
};

class FIA_ATSoldier : FIA_Soldier
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	nameSound="missileSoldier";
	displayName="AT Soldier";
	model = "\sjc_models\fia\rebel5.p3d";
	weapons[]={"AKM", "RPG2", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "RPG2", "RPG2", "RPG2"};
	threat[]={THREAT_ATSOLDIER};
};

class FIA_HATSoldier : FIA_ATSoldier
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName="Heavy AT Soldier";
	model = "\sjc_models\fia\rebel6.p3d";
	weapons[]={"AKM", "RPG16", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "RPG16", "RPG16", "RPG16"};
	threat[]={THREAT_HATSOLDIER};
};

class FIA_AASoldier : FIA_ATSoldier
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName="AA Soldier";
	model = "\sjc_models\fia\rebel7.p3d";
	weapons[]={"AKM", "9K32", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "9K32"};
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

class FIA_Leader : FIA_Soldier
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	model = "\sjc_models\fia\rebel8.p3d";
	picture="\misc\frcky.paa";
	displayName = "Leader";
	weapons[]={"AKM", "tokarev", "Binocular", "Throw", "Put"};
	magazines[]={"AKM", "AKM", "AKM", "AKM", "AKM", "AKM", "RGO", "RGO", "RGO", "RDG1", "tokarevmag", "tokarevmag", "tokarevmag", "tokarevmag"};
};

class FIA_Crew : FIA_Soldier
{
	nameSound="crew";
	model="\sjc_models\fia\crew.p3d";
	weapons[]={"tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"tokarevmag", "tokarevmag", "tokarevmag", "tokarevmag"};
	displayName="Crew";
};

//-Parachute
class FIA_Parachute : ParachuteBase
{
	scope = SCOPE_HIDDEN; //FIA does not have air vehicles but still it is needed if you for instance steal an aircraft
	side = SIDE_FIA;
	crew = "FIA_Soldier";
};