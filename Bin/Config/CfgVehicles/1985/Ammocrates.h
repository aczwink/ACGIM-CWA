//USA Crates
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
			magazine = "M16A2";
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
			magazine = "CAR15";
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
			magazine = "M47Dragon";
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

class AmmoBoxOUTWW : HeavyReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "USA Weapon Crates";

	class TransportWeapons
	{
		//Primary
		class w_M16A2
		{
			weapon = "M16A2";
			count = 3;
		};

		class w_M16A2_M203
		{
			weapon = "M16A2_M203";
			count = 1;
		};

		class w_M60
		{
			weapon = "M60";
			count = 1;
		};

		class w_M21
		{
			weapon = "M21";
			count = 1;
		};

		class w_CAR15
		{
			weapon = "CAR15";
			count = 2;
		};

		class w_CAR15_SD
		{
			weapon = "CAR15_SD";
			count = 1;
		};

		//Secondary
		class w_M72LAW
		{
			weapon = "M72LAW";
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

//FIA Crates
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

class HeavyReammoBoxRes : ReammoBoxGuer
{
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
		
		class m_9K32
		{
			magazine = "9K32";
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
};

class AmmoBoxOUTGW : HeavyReammoBox
{
	scope = SCOPE_PUBLIC;
	accuracy = ACCURACY_SUPERCLASS;
	displayName = "FIA Weapon Crates";

	class TransportWeapons
	{
		//Primary
		class w_AKM
		{
			weapon = "AKM";
			count = 3;
		};

		class w_AKMGP25
		{
			weapon = "AKMGP25";
			count = 1;
		};

		class w_RPD
		{
			weapon = "RPD";
			count = 1;
		};

		class w_HuntingRifle
		{
			weapon = "HuntingRifle";
			count = 1;
		};

		class w_Kozlice
		{
			weapon = "Kozlice";
			count = 1;
		};
		
		//Secondary
		class w_RPG2
		{
			weapon = "RPG2";
			count = 2;
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
			count = 1;
		};
	};
};