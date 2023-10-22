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
			weapon = WEAPON_REFERENCE(M16A2);
			count = 3;
		};

		class w_M16A2_M203
		{
			weapon = WEAPON_REFERENCE(M16A2_M203);
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