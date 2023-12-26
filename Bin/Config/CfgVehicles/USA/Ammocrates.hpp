class ReammoBoxWest : ReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USA Ammo Crates";
	model = "\ABox\ABox";
	
	class TransportMagazines
	{
		//Primary Magazines
		class m_M16A2
		{
			magazine = WEAPON_REFERENCE(M16A2);
			count = 20;
		};

		class m_MG
		{
			magazine = WEAPON_REFERENCE(M60);
			count = 5;
		};

		class m_M21
		{
			magazine = "M21";
			count = 3;
		};

		class m_CAR15
		{
			magazine = WEAPON_REFERENCE(CAR15);
			count = 6;
		};

		class m_CAR15_SD
		{
			magazine = WEAPON_REFERENCE(CAR15_SD);
			count = 3;
		};

		//Tertiary Magazines
		class m_M1911
		{
			magazine = "M1911";
			count = 10;
		};

		class m_M1911_SD
		{
			magazine = "M1911_SD";
			count = 4;
		};
	};
};

class HeavyReammoBoxWest : HeavyReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USA Explosives Crates";

	class TransportMagazines
	{
		//Secondary Magazines
		class m_M72LAW
		{
			magazine = WEAPON_REFERENCE(M72LAW);
			count = 4;
		};
		
		class m_M47Dragon
		{
			magazine = WEAPON_REFERENCE(M47Dragon);
			count = 1;
		};
		
		class m_FIM92Stinger
		{
			magazine = WEAPON_REFERENCE(FIM92Stinger);
			count = 1;
		};

		//Grenades
		class m_M67
		{
			magazine = "M67";
			count = 10;
		};
		
		class m_M406HEFR
		{
			magazine = "M406HEFR";
			count = 6;
		};

		class m_ANM8
		{
			magazine = "ANM8";
			count = 3;
		};

		class m_M18Red
		{
			magazine = "M18Red";
			count = 1;
		};

		class m_M18Green
		{
			magazine = "M18Green";
			count = 1;
		};

		class m_Flare
		{
			magazine = "Flare";
			count = 3;
		};

		class m_FlareGreen
		{
			magazine = "FlareGreen";
			count = 1;
		};

		class m_FlareRed
		{
			magazine = "FlareRed";
			count = 1;
		};

		class m_FlareYellow
		{
			magazine = "FlareYellow";
			count = 1;
		};

		//Items
		class m_Mine
		{
			magazine = "Mine";
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

class AmmoBoxOUTWW : ReammoBoxWest
{
	displayName = "USA Weapon Crates";
	model = "bedna_ammo";

	class TransportWeapons
	{
		//Primary
		class w_M16A2
		{
			weapon = WEAPON_REFERENCE(M16A2);
			count = 3;
		};

		class w_M16A2_M203
		{
			weapon = WEAPON_REFERENCE(M16A2_M203);
			count = 1;
		};

		class w_MG
		{
			weapon = WEAPON_REFERENCE(M60);
			count = 1;
		};

		class w_M21
		{
			weapon = "M21";
			count = 1;
		};

		class w_CAR15
		{
			weapon = WEAPON_REFERENCE(CAR15);
			count = 2;
		};

		class w_CAR15_SD
		{
			weapon = WEAPON_REFERENCE(CAR15_SD);
			count = 1;
		};

		//Secondary
		class w_M72LAW
		{
			weapon = WEAPON_REFERENCE(M72LAW);
			count = 1;
		};

		//Tertiary
		class w_M1911
		{
			weapon = "M1911";
			count = 4;
		};

		class w_M1911_SD
		{
			weapon = "M1911_SD";
			count = 1;
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