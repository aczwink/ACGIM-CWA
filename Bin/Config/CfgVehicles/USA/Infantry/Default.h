//-Standard Infantry
class USA_Soldier : Soldier
{
	scope = SCOPE_PUBLIC;
	side = SIDE_WEST;
	armorBody = 3.0; //This soldier wears a Ballistic vest
	cost = COST_SOLDIER;
	accuracy = ACCURACY_SOLDIER;
	displayName = "Soldier";
	threat[]={THREAT_SOLDIER};

	model = "\d4t_files\models\us\infantry\1985\usa_soldier1985.p3d";

	weapons[] = {WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "M67"};

	hiddenSelections[] = {"goou", "goostu", "googu", "good", "goostd", "googd", "medic", "mic", "holster"};
	wounds[] =
	{
		FACE_WOUNDS,
		"\d4t_tex\usi85\armL.paa", "\d4t_tex\usi85\armLd.paa",
		"\d4t_tex\usi85\armR.paa", "\d4t_tex\usi85\armRd.paa",
		"\d4t_tex\usi85\baB85.paa", "\d4t_tex\usi85\BaB85d.paa",
		"\d4t_tex\usi85\baF85.paa", "\d4t_tex\usi85\BaF85d.paa",
		"\d4t_tex\usi85\baBO.paa", "\d4t_tex\usi85\BaBOd.paa",
		"\d4t_tex\usi85\baFO.paa", "\d4t_tex\usi85\BaFOd.paa",
		"\d4t_tex\usi85\bodyB.paa", "\d4t_tex\usi85\bodyBd.paa",
		"\d4t_tex\usi85\bodyF.paa", "\d4t_tex\usi85\bodyFd.paa",
		"\d4t_tex\usi85\legL.paa", "\d4t_tex\usi85\legLd.paa",
		"\d4t_tex\usi85\legR.paa", "\d4t_tex\usi85\legRd.paa",
		"\d4t_tex\usi85\legP.paa", "\d4t_tex\usi85\legPd.paa",
		"\d4t_tex\usi85\helS.paa", "\d4t_tex\usi85\helSd.paa",
		"\d4t_tex\usi85\helT85.paa", "\d4t_tex\usi85\helT85d.paa",
		"\d4t_tex\usi85\achS.paa", "\d4t_tex\usi85\achSd.paa",
		"\d4t_tex\usi85\achT.paa", "\d4t_tex\usi85\achTd.paa",
		"\d4t_tex\usi85\pcapS.paa", "\d4t_tex\usi85\pcapSd.paa",
		"\d4t_tex\usi85\pcapT.paa", "\d4t_tex\usi85\pcapTd.paa",
		"\d4t_tex\usi85\bhatS.paa", "\d4t_tex\usi85\bhatSd.paa",
		"\d4t_tex\usi85\bhatT.paa", "\d4t_tex\usi85\bhatTd.paa",
		"\d4t_tex\usi85\rarmL.paa", "\d4t_tex\usi85\rarmLd.paa",
		"\d4t_tex\usi85\aarmL.paa", "\d4t_tex\usi85\aarmLd.paa",
		"\d4t_tex\usi85\sarmL.paa", "\d4t_tex\usi85\sarmLd.paa",
		"\d4t_tex\usi85\sarmR.paa", "\d4t_tex\usi85\sarmRd.paa",
		"\d4t_tex\usi85\sbaB.paa", "\d4t_tex\usi85\sBaBd.paa",
		"\d4t_tex\usi85\sbaF.paa", "\d4t_tex\usi85\sBaFd.paa",
		"\d4t_tex\usi85\cachS.paa", "\d4t_tex\usi85\cachSd.paa",
		"\d4t_tex\usi85\cachT.paa", "\d4t_tex\usi85\cachTd.paa",
		"\d4t_tex\usi85\rbaB.paa", "\d4t_tex\usi85\rBaBd.paa",
		"\d4t_tex\usi85\rbaF.paa", "\d4t_tex\usi85\rBaFd.paa",
		"\d4t_tex\usi85\chelS.paa", "\d4t_tex\usi85\chelSd.paa",
		"\d4t_tex\usi85\chelT.paa", "\d4t_tex\usi85\chelTd.paa"
	};
};

class USA_Grenadier : USA_Soldier
{
	accuracy = ACCURACY_GRENADIER;
	cost = COST_GRENADIER;
	displayName="Grenadier";
	weapons[]={WEAPON_REFERENCE(M16A2_M203), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M406HEFR", "M406HEFR", "M406HEFR", "M406HEFR"};
	threat[]={THREAT_GRENADIER};
};

class SoldierWMortar : USA_Grenadier
{
	accuracy = 1.5;
	displayName = "$STR_DN_MORTAR";
	weapons[] = {WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Mortar", "Mortar", "Mortar"};
	threat[] = {1, 1, 0.1};
};

class USA_Medic : USA_Soldier
{
	accuracy = ACCURACY_MEDIC;
	cost = COST_MEDIC;
	picture="\misc\medik.paa";
	displayName="Medic";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	nameSound="medic";
	attendant=1;
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2)};
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd", "mic", "holster"};
	threat[]={THREAT_MEDIC};
};

class USA_MachineGunner : USA_Soldier
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	displayName="Machine Gunner";
	nameSound="machineGunner";
	weapons[]={"M60", "Throw", "Put"};
	magazines[]={"M60", "M60", "M60", "M60", "M60"};
	threat[]={THREAT_MACHINEGUNNER};
};

class USA_LightATSoldier : USA_Soldier
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	displayName="AT Soldier";
	nameSound="missileSoldier";
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M72LAW), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M72LAW), WEAPON_REFERENCE(M72LAW)};
	threat[]={THREAT_ATSOLDIER};
};

class USA_ATSoldier : USA_LightATSoldier
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName="AT Specialist";
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M47Dragon), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M47Dragon)};
	threat[]={THREAT_HATSOLDIER};
};

class USA_AASoldier : USA_LightATSoldier
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName="AA Soldier";
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(FIM92Stinger), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(FIM92Stinger)};
	threat[]={THREAT_AASOLDIER};
};

class USA_RadioOperator : USA_Soldier
{
	accuracy = ACCURACY_RADIOOPERATOR;
	cost = COST_RADIOOPERATOR;
	displayName="Radio Operator";
	weapons[]={WEAPON_REFERENCE(M16A2), "PRC119_SINCGARS", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "M67"};
	threat[]={THREAT_RADIOOPERATOR};

	class UserActions
	{
		class Artillery
		{  
			displayName="Call Artillery";
			position="pos driver";
			radius=2.00000;
			condition="(side this == west) && (this hasweapon ""PRC119_SINCGARS"") && alive this";
			statement= "[this, player] exec ""\acgim_scripts\Artillery\init.sqs""";
		};
	};
};

class USA_Miner : USA_Soldier
{
	accuracy = ACCURACY_MINER;
	cost = COST_MINER;
	displayName="Miner";
	canDeactivateMines=1;
	picture="\misc\sapper.paa";
	weapons[]={WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Mine", "Mine", "Mine"};
	threat[]={THREAT_MINER};
};

class USA_SquadLeader : USA_Soldier
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	picture="\misc\frcky.paa";
	displayName="Squad Leader";
	weapons[]={WEAPON_REFERENCE(M16A2), "M1911", "Binocular", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "ANM8", "M1911", "M1911", "M1911", "M1911"};
};

class OfficerWNight : USA_SquadLeader
{
	displayName="Squad Leader (Night)";
	weapons[]={WEAPON_REFERENCE(M16A2_M203), "M1911", "Binocular", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Flare", "Flare", "FlareGreen", "FlareRed", "FlareYellow", "M1911", "M1911", "M1911", "M1911"};
};

//-Parachute
class USA_Parachute : ParachuteBase
{
	scope = SCOPE_PUBLIC;
	side = SIDE_WEST;
	crew = "USA_Soldier";
	displayName="Paratrooper";
	vehicleClass="Infantry";
};