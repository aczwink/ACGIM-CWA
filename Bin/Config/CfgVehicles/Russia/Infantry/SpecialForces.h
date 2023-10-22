class Russia_Sniper : Russia_Soldier
{
	accuracy = ACCURACY_SNIPER;
	camouflage = CAMOUFLAGE_USSR_SPETSNAZ;
	cost = COST_SNIPER;
	nameSound="sniper";
	vehicleClass="Infantry (Special Forces)";
	displayName="Sniper";
	weaponSlots="1	 + 	16	 + 4 * 		256	 + 2 * 	4096	 + 	2	 + 4*	32";
	weapons[]={"SVDDragunov", "Tokarev", "Throw", "Put"};
	magazines[]={"SVDDragunov", "SVDDragunov", "SVDDragunov", "SVDDragunov", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
	model = "\sjc_models\USSR\spetsnaz.p3d";
	picture="\misc\sniper.paa";
	sensitivity=2;
	hiddenSelections[]={"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Backpack","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Mapcase","_Lamp"};
	threat[]={THREAT_SNIPER};
};

class Russia_Spetsnaz : Russia_Soldier
{
	accuracy = ACCURACY_SPETSNAZ;
	cost = COST_SPETSNAZ;
	vehicleClass="Infantry (Special Forces)";
	displayName="Spetsnaz";
	picture="\misc\meciky.paa";
	camouflage = CAMOUFLAGE_USSR_SPETSNAZ;
	threat[]={THREAT_SPETSNAZ};
	nameSound="specNas";
	canHideBodies=1;
	canDeactivateMines=1;
	model = "\sjc_models\USSR\spetsnaz.p3d";
	hiddenSelections[]={"medic","svetlo","_AKmags1","_Armpatch_right","_Beret","_Backpack","_Cap","_Gpouch","_Helmcamo","_HelmF","_Holster","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_SVDmags","_Mapcase","_Lamp"};
	weapons[]={WEAPON_REFERENCE(AKS74), "Tokarev", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "PipeBomb", "PipeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};

class Russia_Spetsnaz_RPG : Russia_Spetsnaz
{
	displayName="Spetsnaz (RPG)";
	weapons[]={WEAPON_REFERENCE(AKS74), "RPG7V", "Tokarev", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"AK74", "AK74", "AK74", "AK74", "AK74", "AK74", "PG7VL", "PG7VL", "PipeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};

class Russia_Spetsnaz_SD : Russia_Spetsnaz
{
	displayName="Spetsnaz (SD)";
	weapons[]={"AKS74B", "Tokarev", "Binocular", "NVGoggles", "Throw", "Put"};
	magazines[]={"AKS74B", "AKS74B", "AKS74B", "AKS74B", "AKS74B", "AKS74B", "PipeBomb", "PipeBomb", "TokarevMag", "TokarevMag", "TokarevMag", "TokarevMag"};
};