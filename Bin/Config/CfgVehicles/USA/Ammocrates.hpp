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
			magazine = "CAR15_SD";
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