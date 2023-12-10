class CarrierW : BigShip
{
    scope = 2;
    crew = "SoldierWB";
    side = 1;
    displayName = "$STR_DN_LST";
    model = "newport";
    picture = "im113";
    accuracy = 0.5;
    maxSpeed = 50;
    transportSoldier = 50;
    transportAmmo = 10000000;
    transportVehiclesCount = 15;
    cost = 200000000;
    armor = 10000;
    weapons[] = {};
    magazines[] = {};

    class TransportMagazines
    {
    };
};