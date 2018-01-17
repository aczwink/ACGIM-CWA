//Soldiers
class SoldierGB : FIA_Soldier
{
	scope = SCOPE_HIDDEN;
};

class SoldierGMedic : fia_medic
{
	scope = SCOPE_HIDDEN;
};

class SoldierGCrew : fia_crew
{
	scope = SCOPE_HIDDEN;
};

class SoldierGG : fia_grenadier
{
	scope = SCOPE_HIDDEN;
};

class SoldierGMG : fia_machinegunner
{
	scope = SCOPE_HIDDEN;
};

class SoldierGLAW : FIA_ATSoldier
{
	scope = SCOPE_HIDDEN;
};

class SoldierGAT : FIA_HATSoldier
{
	scope = SCOPE_HIDDEN;
};

class SoldierGAA : FIA_AASoldier
{
	scope = SCOPE_HIDDEN;
};

class OfficerG : FIA_Leader
{
	scope = SCOPE_HIDDEN;
};

class Hunter : FIA_ShotgunSoldier
{
	scope = SCOPE_HIDDEN;
};

class SoldierGSniper : fia_sniper
{
	scope = SCOPE_HIDDEN;
};

class ParachuteG : FIA_Parachute
{
	scope = SCOPE_HIDDEN;
};

class SoldierGNOG : SoldierGB
{
	scope=1;
};

class SoldierG:SoldierGG
{
	scope=1;
};

class OfficerGNight:SoldierGB
{
	scope=1;
};

class SoldierGFakeE:SoldierEB
{
	scope=1;
};

class SoldierGFakeC:SoldierGFakeE
{
	scope=1;
};

class SoldierGFakeC2:SoldierGFakeE
{
	scope=1;
};

class OfficerGHG:OfficerG
{
	scope=1;
};

class SoldierGFakeC3:SoldierGFakeC
{
	scope=1;
};

class SoldierGPilot : SoldierGB
{
	scope=1;
};

//Armored
class BMPRes : FIA_BMP1
{
	scope = SCOPE_HIDDEN;
};

class T55G : FIA_T54
{
	scope = SCOPE_HIDDEN;
};

class T72Res : FIA_T72A
{
	scope = SCOPE_HIDDEN;
};

class T80Res : FIA_T80B
{
	scope = SCOPE_HIDDEN;
};

//Cars
class UAZG : FIA_UAZ469
{
	scope = SCOPE_HIDDEN;
};

class SGUAZG : FIA_UAZ469Ambulance
{
	scope = SCOPE_HIDDEN;
};

class GJeep : Car
{
	scope = 1;
};

class TruckV3SG : FIA_ZIL131
{
	scope = SCOPE_HIDDEN;
};

class TruckV3SGRefuel : FIA_ZIL130Refuel
{
	scope = SCOPE_HIDDEN;
};

class TruckV3SGRepair : FIA_ZIL130Repair
{
	scope = SCOPE_HIDDEN;
};

class TruckV3SGReammo : FIA_ZIL130Reammo
{
	scope = SCOPE_HIDDEN;
};