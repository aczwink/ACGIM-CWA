class ReammoBoxWest : ReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USA Ammo Crates";
	
	class TransportMagazines
	{
		//Primary Magazines
		class m_M16A2
		{
			magazine = WEAPON_REFERENCE(M16A2);
			count = 20;
		};

		class m_M60
		{
			magazine = "M60";
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

class HeavyReammoBoxWest : ReammoBoxWest
{
	displayName = "USA Explosives Crates";

	class TransportMagazines
	{
		//Secondary Magazines
		class m_M72LAW
		{
			magazine = "M72LAW";
			count = 4;
		};
		
		class m_M47Dragon
		{
			magazine = WEAPON_REFERENCE(M47Dragon);
			count = 1;
		};
		
		class m_FIM92Stinger
		{
			magazine = "FIM92Stinger";
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
};