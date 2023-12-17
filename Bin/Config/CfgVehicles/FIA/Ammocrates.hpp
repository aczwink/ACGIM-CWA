class ReammoBoxGuer : ReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "FIA Ammo Crates";
	model = "\ABox\ABoxR";
	
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

class HeavyReammoBoxRes : HeavyReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "FIA Explosives Crates";

	class TransportMagazines
	{
		//Secondary Magazines
		class m_RPG2
		{
			magazine = "RPG2";
			count = 6;
		};
		
		class m_RPG16
		{
			magazine = "RPG16";
			count = 3;
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
	};

	class EventHandlers
	{
		killed = "_this exec {\acgim_scripts\Events\ExplosivesCarrierDestroyed.sqs}";
	};
};