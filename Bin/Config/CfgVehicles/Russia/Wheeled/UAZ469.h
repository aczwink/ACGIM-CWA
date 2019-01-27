/*
Sources:
	http://en.wikipedia.org/wiki/UAZ-469
	http://warfare.ru/?linkid=2297&catid=247
*/
class Russia_UAZ469 : Car
{
	picture="\sjc_images\vehicles\uaz.paa";
	scope=2;
	crew = "Russia_Soldier";
	side=0;
	displayName="UAZ-469";
	nameSound="UAZ";
	accuracy = ACCURACY_UAZ469;
	fuelCapacity=75;
	maxSpeed = 100;
	preferRoads=true;
	transportSoldier = 4;
	transportAmmo = 0;
	cost = COST_UAZ469;
	turnCoef=2.5;
	armor = ARMOR_UAZ469;
	armorGlass=0.5;
	armorWheels=0.15;
	model="\sjc_models\ussr\uaz469.p3d";
	hiddenSelections[] = {"clan"};
	soundEngine[]={"Vehicles\uazloop",0.0316228,1.25};
	type = VEHICLE_SOFT;
	threat[]={THREAT_UAZ469};
	dammageHalf[]={"\sjc_textures\uaz\okna.paa","\sjc_textures\uaz\okna_d.paa"};
	dammageFull[]={"\sjc_textures\uaz\okna.paa","\sjc_textures\uaz\okna_d.paa"};
	hideWeaponsDriver=true;
	hideWeaponsCargo=true;
	driverCastShadow = true;
	cargoIsCoDriver[]={1,0};
	driverInAction=ManActUAZDriver;
	driverAction=ManActUAZDriver;
	cargoAction[]={ManActUAZCoDriver, ManActCargo};
	cargoInAction[]={ManActUAZCoDriver, ManActCargo};
	hasCommander=false;
	driverIsCommander=false;
	animated=1;

	class ViewPilot:ViewPilotBase
	{
		initAngleX=10;
	};

	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=50;
	};

	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-170;
		min=0;
		max=1;
	};

	class EventHandlers
	{
		init = "_this exec {\SJC_Scripts\Russia\UAZ469\spz.sqs};";
	};
};