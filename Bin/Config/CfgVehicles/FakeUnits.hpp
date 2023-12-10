class SoldierEFakeW : SoldierWB
{
    model = "MC vojakW2";
    moves = "CfgMovesMC";
    vehicleClass = "Men";
    scope = 1;
    side = 0;
    accuracy = 2;
    displayName = "$STR_DN_ESOLDIERFAKE";
    weapons[] = {"M16", "Throw", "Put"};
    magazines[] = {"M16", "M16", "M16", "M16", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
    cost = 40000;
};

class SoldierGFakeC : Civilian
{
    scope = 1;
    side = 2;
    accuracy = 2;
    displayName = "$STR_DN_CIVILFAKE";
    weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
    weapons[] = {"AK74", "Throw", "Put"};
    magazines[] = {"AK74", "AK74", "AK74", "AK74", "HandGrenade", "HandGrenade"};
    cost = 40000;
};

class SoldierGFakeC2 : Civilian2
{
    scope = 1;
    side = 2;
    accuracy = 2;
    displayName = "$STR_DN_CIVILFAKE";
    weaponSlots = "1	 + 	16	 + 2 * 	4096	 + 6 * 		256	 + 	2	 + 4*	32";
    weapons[] = {"AK74", "Throw", "Put"};
    magazines[] = {"AK74", "AK74", "AK74", "AK74", "HandGrenade", "HandGrenade"};
    cost = 40000;
};

class SoldierGFakeC3 : SoldierGFakeC
{
	model = "\O\Char\Char01";
};