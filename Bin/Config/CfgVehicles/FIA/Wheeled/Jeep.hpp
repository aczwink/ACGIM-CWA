class GJeep : Car
{
	scope = 2;
    crew = "SoldierGB";
    picture = "ijeep";
    maxSpeed = 100;
    side = 2;
    displayName = "$STR_DN_JEEP";
    nameSound = "jeep";
    accuracy = 0.5;
    armor = 20;
    cost = 30000;
    fuelCapacity = 50;
    transportSoldier = 3;
    transportAmmo = 0;
    model = "gjeep";
    armorWheels = 0.12;
    driverAction = "ManActJeepDriver";
    cargoAction[] = {"ManActJeepCoDriver", "ManActJeepCoDriverBack"};
    cargoIsCoDriver[] = {1, 0};
    soundEngine[] = {"Vehicles\jeeploop", 0.1, 1};
    typicalCargo[] = {"Soldier", "SoldierLAW"};

    class IndicatorSpeed
    {
        selection = "ukaz_rychlo";
        axis = "osa_rychlo";
        angle = -240;
        min = 0;
        max = 40;
    };

    class IndicatorRPM
    {
        selection = "ukaz_rpm";
        axis = "osa_rpm";
        angle = -240;
        min = 0;
        max = 1;
    };
};