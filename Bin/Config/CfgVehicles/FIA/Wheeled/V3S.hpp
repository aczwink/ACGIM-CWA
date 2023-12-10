class TruckV3SGRefuel : Truck
{
    scope = 2;
    crew = "SoldierGB";
    picture = "iv3sfuel";
    icon = "Fuel_move";
    side = 2;
    displayName = "Praga V3S Refuel";
    accuracy = 0.3;
    maxSpeed = 75;
    transportSoldier = 1;
    transportAmmo = 0;
    transportRepair = 0;
    turnCoef = 6;
    cost = 20000;
    armor = 30;
    model = "v3sfuel";
    hiddenSelections[] = {};
    initCargoAngleY = 185;
    soundEngine[] = {"vehicles\dieseltruckloop1", 0.0562341, 1};
    weapons[] = {};
    magazines[] = {};
    driverAction = "ManActV3SDriver";
    cargoAction[] = {"ManActV3SCoDriver", "ManActCargo"};
    cargoIsCoDriver[] = {1, 0};
    typicalCargo[] = {};
    threat[] = {1, 1, 0.3};

    class IndicatorSpeed
    {
        selection = "ukaz_rychlo";
        axis = "osa_rychlo";
        angle = -275;
        min = 0;
        max = "80 / 3.6";
    };

    class IndicatorRPM
    {
        selection = "ukaz_rpm";
        axis = "osa_rpm";
        angle = -275;
        min = 0;
        max = 1;
    };

    class TransportMagazines
    {
    };

    class EventHandlers
	{
		killed = "(_this select 0) exec {\acgim_scripts\Events\FuelCarrierDestroyed.sqs}; (_this select 0) exec {\acgim_scripts\nmod_effects\DKMM_RSC_Veh_burner.sqs}";
	};
};