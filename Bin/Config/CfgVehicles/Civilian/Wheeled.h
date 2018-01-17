class Rapid : SkodaBase
{
	scope=2;
	picture="iskoda";
	maxSpeed=200;
	displayName="$STR_DN_ASTON";
	nameSound="car";
	accuracy=0.5;
	armor=10;
	cost=90000;
	fuelCapacity=50;
	transportSoldier=1;
	model="rapid";
	soundEngine[]={"Vehicles\car",0.0316228,1.5};
	weapons[]={"SportCarHorn"};
	magazines[]={};
	typicalCargo[]={};
	dammageHalf[]={"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa","rapid_skloP.paa","rapid_skloPB.paa"};
	dammageFull[]={"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa","rapid_skloP.paa","rapid_skloPC.paa"};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-260;
		min=0;
		max="180 / 3.6";
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-240;
		min=0;
		max=1;
	};
};

class RapidY : Rapid
{
	scope=2;
	model="rapid_y";
};

class Skoda : SkodaBase
{
	scope=2;
	model="skodovka";
	displayName="$STR_DN_SKODA_YELLOW";
};

class SkodaBlue : SkodaBase
{
	scope=2;
	model="skodovka_blue";
	displayName="$STR_DN_SKODA_BLUE";
};

class SkodaRed : SkodaBase
{
	scope=2;
	model="skodovka_red";
	displayName="$STR_DN_SKODA_RED";
};

class SkodaGreen : SkodaBase
{
	scope=2;
	model="skodovka_green";
	displayName="$STR_DN_SKODA_GREEN";
};

class Mini : SkodaBase
{
	hideWeaponsCargo=1;
	scope=2;
	picture="\mini\imini";
	maxSpeed=120;
	displayName="$STR_DN_ADD_MINI";
	nameSound="car";
	accuracy=0.5;
	armor=10;
	cost=1000;
	fuelCapacity=50;
	transportSoldier=3;
	model="\mini\SmallCar";
	soundEngine[]={"\mini\MiniSound",0.0177828,1.0};
	weapons[]={"SportCarHorn"};
	magazines[]={};
	typicalCargo[]={};
	crew="Civilian4";
	driverAction="ManActMiniDriver";
	dammageHalf[]={"\mini\mini_skloa.paa","\mini\mini_skloaR1.paa","\mini\mini_sklob.paa","\mini\mini_sklobR1.paa"};
	dammageFull[]={"\mini\mini_skloa.paa","\mini\mini_skloaR2.paa","\mini\mini_sklob.paa","\mini\mini_sklobR2.paa"};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-260;
		min=0;
		max="160 / 3.6";
	};
	
	class IndicatorSpeed2
	{
		selection="ukaz_rychlo2";
		axis="osa_rychlo2";
		angle=-260;
		min=0;
		max="320 / 3.6";
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=190;
		min=0;
		max=1;
	};
};

class Trabant : SkodaBase
{
	scope = SCOPE_PUBLIC;
	picture=\trab\itrabant;
	maxSpeed=100;
	displayName=$STR_DN_TRABANT;
	nameSound="car";
	accuracy=0.50;
	armor=1;
	cost=1000;
	fuelCapacity=50;
	transportSoldier = 3;
	model=\trab\trabant;
	soundEngine[]={\trab\trabbi,db-35,1.0};
	weapons[]={SportCarHorn};
	magazines[]={};
	typicalCargo[]={};
	driverAction = ManActTrabiDriver;
	dammageHalf[]={jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa};
	dammageFull[]={jeep_kab_sklo1.paa,jeep_kab_sklo1C.paa};
	
	class IndicatorSpeed
	{
		selection = "ukaz_rychlo";
		axis = "osa_rychlo";
		angle = -260;
		min = 0;
		max = 120 / 3.6;
	};
};

class Kolo : Motorcycle
{
	access="ReadOnly";
	canFloat=0;
	isBicycle=1;
	hideWeaponsDriver=0;
	displayName="$STR_DN_KOLO_KOLO";
	scope=2;
	picture="\Kolo\ikolo";
	icon="\O\Vehl\moto.paa";
	maxSpeed=20;
	crew="Civilian5";
	side=3;
	nameSound="car";
	accuracy=0.5;
	model="\Kolo\Kolo";
	terrainCoef=6.0;
	soundEngine[]={"\Kolo\bc_chain.wav",0.0177828,1};
	weapons[]={"BikeHorn"};
	magazines[]={};
	driverAction="ManActKoloDriver";
	transportSoldier=0;
	transportAmmo=0;
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=280;
		min=0;
		max="140 / 3.6";
	};
};

class Tractor : Car
{
	scope=2;
	picture="itruck5t";
	icon="truck";
	side=3;
	displayName="$STR_DN_TRACTOR";
	nameSound="tractor";
	accuracy=0.3;
	fuelCapacity=50;
	transportSoldier=0;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	weapons[]={};
	magazines[]={};
	wheelCircumference=8;
	turnCoef=9.0;
	maxSpeed=30;
	cost=10000;
	armor=30;
	model="traktor";
	soundEngine[]={"Vehicles\TractorRun",0.0316228,0.5};
	typicalCargo[]={};
	driverAction="ManActTractorDriver";
	getInAction=manactgetintank;
	getOutAction=manactgetouttank;
};

class TruckV3SCivil : FIA_ZIL131
{
	side=3;
	crew="Civilian";
	displayName="$STR_DN_PV3S_CIVIL";
	model="v3scivil";
};

class JeepPolice : Car
{
	access=2;
	scope=2;
	crew="civilian8";
	picture="ijeepMUTT";
	maxSpeed=100;
	side=3;
	displayName="$STR_DN_OUT_JEEPP";
	nameSound="jeep";
	accuracy=0.5;
	armor=20;
	cost=30000;
	fuelCapacity=50;
	transportSoldier=1;
	transportAmmo=0;
	model="\O\Vehl\CJ5";
	armorWheels=0.12;
	driverAction="ManActJeepDriver";
	cargoAction[]={"ManActJeepCoDriver","ManActJeepCoDriverBack"};
	cargoIsCoDriver[]={1,0};
	soundEngine[]={"Vehicles\jeepmove",0.1778279,1};
	typicalCargo[]={"Soldier","SoldierLAW"};
	dammageHalf[]={"\o\vehl\cj5_okno.paa","\o\vehl\cj5_oknoR1.paa"};
	dammageFull[]={"\o\vehl\cj5_okno.paa","\o\vehl\cj5_oknoR2.paa"};
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=-240;
		min=0;
		max=40;
	};
	
	class IndicatorRPM
	{
		selection="ukaz_rpm";
		axis="osa_rpm";
		angle=-240;
		min=0;
		max=1;
	};
};

class Bus : TruckV3SCivil
{
	access=2;
	displayName="$STR_DN_OUT_BUS";
	model="\o\vehl\skodasm11";
	crew="civilian5";
	picture="\o\vehl\iskodasm11.paa";
	icon="\O\vehl\bus.paa";
	turnCoef=12.0;
	transportSoldier=27;
	driverAction="ManActBusDriver";
	cargoAction[]={"ManActBusCargo"};
	cargoIsCoDriver[]={0};
	dammageHalf[]={"\o\vehl\bus_okna.paa","\o\vehl\bus_oknaR1.paa"};
	dammageFull[]={"\o\vehl\bus_okna.paa","\o\vehl\bus_oknaR2.paa"};
};

class Jawa : Motorcycle
{
	access=2;
	canFloat=0;
	hideWeaponsDriver=0;
	displayName="$STR_DN_OUT_JAWA";
	scope=2;
	picture="\o\vehl\ijawa";
	icon="\O\Vehl\moto.paa";
	maxSpeed=130;
	crew="Civilian6";
	side=3;
	nameSound="car";
	accuracy=0.5;
	model="\O\Vehl\JAWA250";
	soundEngine[]={"\O\Vehl\moto.wss",0.0177828,1};
	weapons[]={"SportCarHorn"};
	magazines[]={};
	driverAction="ManActJAWADriver";
	cargoAction[]={"ManActJAWACoDriver"};
	transportSoldier=1;
	transportAmmo=0;
	
	class IndicatorSpeed
	{
		selection="ukaz_rychlo";
		axis="osa_rychlo";
		angle=280;
		min=0;
		max="140 / 3.6";
	};
};