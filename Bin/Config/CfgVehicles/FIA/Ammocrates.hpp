class ReammoBoxGuer : ReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "FIA Ammo Crates";
	
	class TransportMagazines
	{
		//Primary Magazines
		class m_AKM
		{
			magazine = "AKM";
			count = 25;
		};

		class m_RPD
		{
			magazine = "RPD";
			count = 6;
		};

		class m_HuntingRifleMag
		{
			magazine = "HuntingRifleMag";
			count = 3;
		};

		class m_KozliceShell
		{
			magazine = "KozliceShell";
			count = 6;
		};

		class m_KozliceBall
		{
			magazine = "KozliceBall";
			count = 3;
		};

		//Tertiary Magazines
		class m_TokarevMag
		{
			magazine = "TokarevMag";
			count = 10;
		};

		class m_IngramMag
		{
			magazine = "IngramMag";
			count = 4;
		};
	};
};