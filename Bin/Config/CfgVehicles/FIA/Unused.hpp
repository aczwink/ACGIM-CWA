class OfficerGCheat : OfficerG
{
	scope = SCOPE_HIDDEN;
	displayName = "Cheating is not supported. This unit lost it's cheat effects.";
};

class ParachuteG : ParachuteBase
{
	scope = SCOPE_HIDDEN; //FIA does not have air vehicles but still it is needed if you for instance steal an aircraft
	side = SIDE_FIA;
	crew = "SoldierGB";
};

class ReammoBoxOUTGuer : ReammoBoxGuer
{
	scope=1;
};

class SoldierGCheat : SoldierGB
{
	scope = 1;
	displayName="Cheating is not supported. This unit lost it's cheat effects.";
};

class SoldierGNOG : SoldierGB
{
	scope=1;
};

class SoldierG : SoldierGG
{
	scope=1;
};

class SoldierGPilot : SoldierGB
{
	scope = 1;
	vehicleClass = "Vehicles (Unused)";
	accuracy=1000;
	model="\sjc_models\fia\crew.p3d";
	weapons[]={"tokarev", "NVGoggles", "Throw", "Put"};
	magazines[]={"tokarevmag", "tokarevmag", "tokarevmag", "tokarevmag"};
	displayName = "$STR_DN_PILOT";
};