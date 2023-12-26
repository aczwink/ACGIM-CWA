//-Standard Infantry
class SoldierWB : Soldier
{
	scope = SCOPE_PUBLIC;
	side = SIDE_WEST;
	cost = COST_SOLDIER;
	accuracy = ACCURACY_SOLDIER;
	displayName = "Soldier";
	threat[]={THREAT_SOLDIER};

#ifdef ACGIM_SCENARIO_1985
	armorBody = 3.0; //This soldier wears a Ballistic vest

	model = "\d4t_files\models\us\infantry\1985\usa_soldier1985.p3d";
	hiddenSelections[] = {"goou", "goostu", "googu", "good", "goostd", "googd", "medic", "mic", "holster"};

	weapons[] = {WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "M67"};

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
#endif

#ifdef ACGIM_SCENARIO_2007
	//Protection got better over time
	armor=5.0;
	armorHead=2.0;
	armorBody=6.5;

	model="\d4t_files\models\us\infantry\army_soldier.p3d";//used odol explorer for this, if there are any bugs better to use textureswap
	hiddenSelections[]={"medic"};

	weapons[]={WEAPON_REFERENCE(M4Aimpoint),"Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M4","M67","M67","M67"};
	wounds[]={
		FACE_WOUNDS,

		"\d4t_tex\usi2\aarmL.paa","\d4t_tex\usi2\aarmLd.paa",
		"\d4t_tex\usi2\achs.paa","\d4t_tex\usi2\achsd.paa",
		"\d4t_tex\usi2\acht.paa","\d4t_tex\usi2\achtd.paa",
		"\d4t_tex\usi2\arml.paa","\d4t_tex\usi2\armld.paa",
		"\d4t_tex\usi2\armr.paa","\d4t_tex\usi2\armrd.paa",
		"\d4t_tex\usi2\babo.paa","\d4t_tex\usi2\babod.paa",
		"\d4t_tex\usi2\bafo.paa","\d4t_tex\usi2\bafod.paa",
		"\d4t_tex\usi2\bodyb.paa","\d4t_tex\usi2\bodybd.paa",
		"\d4t_tex\usi2\bodyf.paa","\d4t_tex\usi2\bodyfd.paa",
		"\d4t_tex\usi2\legl.paa","\d4t_tex\usi2\legld.paa",
		"\d4t_tex\usi2\legr.paa","\d4t_tex\usi2\legrd.paa"
	};
#endif
};

class SoldierWG : SoldierWB
{
	accuracy = ACCURACY_GRENADIER;
	cost = COST_GRENADIER;
	displayName="Grenadier";
	threat[]={THREAT_GRENADIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2_M203), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M406HEFR", "M406HEFR", "M406HEFR", "M406HEFR"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4Aimpoint_M203","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M406HEFR","M406HEFR","M406HEFR", "M406HEFR"};
#endif
};

class SoldierWMortar : SoldierWG
{
	accuracy = 1.5;
	threat[] = {1, 1, 0.1};

#ifdef ACGIM_SCENARIO_1985
	displayName = "$STR_DN_MORTAR";
	weapons[] = {WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[] = {WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Mortar", "Mortar", "Mortar"};
#endif
#ifdef ACGIM_SCENARIO_2007
	displayName="Machine Gunner";
	nameSound="machineGunner";
	weapons[]={"M240B","Throw","Put"};
	magazines[]={"M240B","M240B","M240B","M240B","M240B"};
#endif
};

class SoldierWMedic : SoldierWB
{
	accuracy = ACCURACY_MEDIC;
	cost = COST_MEDIC;
	picture="\misc\medik.paa";
	displayName="Medic";
	weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
	nameSound="medic";
	attendant=1;
	threat[]={THREAT_MEDIC};

#ifdef ACGIM_SCENARIO_1985
	hiddenSelections[]={"goou", "goostu", "googu", "good", "goostd", "googd", "mic", "holster"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2)};
#endif
#ifdef ACGIM_SCENARIO_2007
	hiddenSelections[]={};
	magazines[]={"M4","M4","M4","M4"};
#endif
};

class SoldierWMG : SoldierWB
{
	accuracy = ACCURACY_MACHINEGUNNER;
	cost = COST_MACHINEGUNNER;
	nameSound="machineGunner";
	threat[]={THREAT_MACHINEGUNNER};

#ifdef ACGIM_SCENARIO_1985
	displayName="Machine Gunner";
	weapons[]={"M60", "Throw", "Put"};
	magazines[]={"M60", "M60", "M60", "M60", "M60"};
#endif
#ifdef ACGIM_SCENARIO_2007
	displayName = "Squad automatic rifleman";
	weapons[]={WEAPON_REFERENCE(M249SAW),"Throw","Put"};
	magazines[]={WEAPON_REFERENCE(M249SAW),WEAPON_REFERENCE(M249SAW),WEAPON_REFERENCE(M249SAW),WEAPON_REFERENCE(M249SAW),"M67","M67"};
#endif
};

class SoldierWLAW : SoldierWB
{
	accuracy = ACCURACY_ATSOLDIER;
	cost = COST_ATSOLDIER;
	displayName="AT Soldier";
	nameSound="missileSoldier";
	threat[]={THREAT_ATSOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M72LAW), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M72LAW), WEAPON_REFERENCE(M72LAW)};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={WEAPON_REFERENCE(M4Aimpoint),"M136AT4","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M136AT4","M136AT4"};
#endif
};

class SoldierWAT : SoldierWLAW
{
	accuracy = ACCURACY_HATSOLDIER;
	cost = COST_HATSOLDIER;
	displayName="AT Specialist";
	threat[]={THREAT_HATSOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M47Dragon), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M47Dragon)};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={WEAPON_REFERENCE(M4Aimpoint), "FGM148","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","FGM148"};
#endif
};

class SoldierWAA : SoldierWLAW
{
	accuracy = ACCURACY_AASOLDIER;
	cost = COST_AASOLDIER;
	displayName="AA Soldier";
	threat[]={THREAT_AASOLDIER};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(FIM92Stinger), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(FIM92Stinger)};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={WEAPON_REFERENCE(M4Aimpoint),WEAPON_REFERENCE(FIM92Stinger),"Throw","Put"};
	magazines[]={"M4","M4","M4","M4", WEAPON_REFERENCE(FIM92Stinger)};
#endif
};

class USA_RadioOperator : SoldierWB
{
	accuracy = ACCURACY_RADIOOPERATOR;
	cost = COST_RADIOOPERATOR;
	displayName="Radio Operator";
	threat[]={THREAT_RADIOOPERATOR};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), "PRC119_SINCGARS", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "M67"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={WEAPON_REFERENCE(M4Aimpoint),"PRC117","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M4","M67","M67","M67"};
#endif

	class UserActions
	{
		class Artillery
		{  
			displayName="Call Artillery";
			position="pos driver";
			radius=2.00000;
#ifdef ACGIM_SCENARIO_1985
			condition="(side this == west) && (this hasweapon ""PRC119_SINCGARS"") && alive this";
#endif
#ifdef ACGIM_SCENARIO_2007
			condition="(side this == west) && (this hasweapon ""PRC117"") && alive this";
#endif
			statement= "[this, player] exec ""\acgim_scripts\Artillery\init.sqs""";
		};
	};
};

class SoldierWMiner : SoldierWB
{
	accuracy = ACCURACY_MINER;
	cost = COST_MINER;
	displayName="Miner";
	canDeactivateMines=1;
	picture="\misc\sapper.paa";
	threat[]={THREAT_MINER};

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Mine", "Mine", "Mine"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={WEAPON_REFERENCE(M4Aimpoint),"Throw","Put"};
	magazines[]={"M4","M4","M4","M4","Mine","Mine","Mine"};
#endif
};

class OfficerW : SoldierWB
{
	accuracy = ACCURACY_SQUADLEADER;
	cost = COST_SQUADLEADER;
	picture="\misc\frcky.paa";
	displayName="Squad Leader";

#ifdef ACGIM_SCENARIO_1985
	weapons[]={WEAPON_REFERENCE(M16A2), "M1911", "Binocular", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "M67", "M67", "ANM8", "M1911", "M1911", "M1911", "M1911"};
#endif
#ifdef ACGIM_SCENARIO_2007
	weapons[]={"M4ACOG","M9","Binocular","Throw","Put"};
	magazines[]={"M4","M4","M4","M4","M4","M4","M4","M67","M67","ANM8","M9","M9","M9","M9"};
#endif
};

class OfficerWNight : OfficerW
{
	displayName="Squad Leader (Night)";
	weapons[]={WEAPON_REFERENCE(M16A2_M203), "M1911", "Binocular", "Throw", "Put"};
	magazines[]={WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), WEAPON_REFERENCE(M16A2), "Flare", "Flare", "FlareGreen", "FlareRed", "FlareYellow", "M1911", "M1911", "M1911", "M1911"};
};

//-Parachute
class ParachuteWest : ParachuteBase
{
	scope = SCOPE_PUBLIC;
	side = SIDE_WEST;
	crew = "SoldierWB";
	displayName="Paratrooper";
	vehicleClass="Infantry";
};