class ReammoBoxEast : ReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USSR Ammo Crates";
	model = "\ABox\ABoxR";

	class TransportMagazines
	{
		//Primary Magazines
		class m_AK74
		{
			magazine = "AK74";
			count = 20;
		};

		class m_PKM
		{
			magazine = WEAPON_REFERENCE(PKM);
			count = 5;
		};

		class m_SVDDragunov
		{
			magazine = "SVDDragunov";
			count = 3;
		};

		class m_AKS74B
		{
			magazine = "AKS74B";
			count = 6;
		};

		//Tertiary Magazines
		class m_TokarevMag
		{
			magazine = "TokarevMag";
			count = 10;
		};
	};
};

class HeavyReammoBoxEast : HeavyReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USSR Explosives Crates";

	class TransportMagazines
	{
		//Secondary Magazines
		class m_RPG18
		{
			magazine = WEAPON_REFERENCE(RPG18);
			count = 4;
		};

		class m_PG7VL
		{
			magazine = WEAPON_REFERENCE(RPG7V);
			count = 2;
		};

		class m_9K32Launcher
		{
			magazine = "9K32Launcher";
			count = 1;
		};

		//Grenades
		class m_RGO
		{
			magazine = "RGO";
			count = 10;
		};

		class m_VOG25
		{
			magazine = "VOG25";
			count = 6;
		};

		class m_RDG1
		{
			magazine = "RDG1";
			count = 3;
		};

		class m_RDG1Red
		{
			magazine = "RDG1Red";
			count = 1;
		};

		//Items
		class m_MineE
		{
			magazine = "MineE";
			count = 3;
		};

		class m_PipeBomb
		{
			magazine = "PipeBomb";
			count = 2;
		};
	};

	class EventHandlers
	{
		killed = "_this exec {\acgim_scripts\Events\ExplosivesCarrierDestroyed.sqs}";
	};
};

class AmmoBoxOUTEW : ReammoBoxEast
{
	displayName = "USSR Weapon Crates";
	model = "bedna_ammo";

	class TransportWeapons
	{
		//Primary
		class w_AK74
		{
			weapon = "AK74";
			count = 3;
		};

		class w_AK74GP25
		{
			weapon = WEAPON_REFERENCE(AK74GP25);
			count = 1;
		};

		class w_PKM
		{
			weapon = WEAPON_REFERENCE(PKM);
			count = 1;
		};

		class w_SVDDragunov
		{
			weapon = "SVDDragunov";
			count = 1;
		};

		class w_AKS74
		{
			weapon = WEAPON_REFERENCE(AKS74);
			count = 2;
		};

		class w_AKS74B
		{
			weapon = "AKS74B";
			count = 1;
		};

		//Secondary
		class w_RPG7V
		{
			weapon = WEAPON_REFERENCE(RPG7V);
			count = 1;
		};

		//Tertiary
		class w_Tokarev
		{
			weapon = "Tokarev";
			count = 4;
		};

		//Items
		class w_Binocular
		{
			weapon = "Binocular";
			count = 2;
		};

		class w_NVGoggles
		{
			weapon = "NVGoggles";
			count = 1;
		};
	};
};