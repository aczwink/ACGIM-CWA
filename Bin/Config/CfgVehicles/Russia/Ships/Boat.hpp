class BoatE : SmallShip
{
	displayName="$STR_DN_BOAT";
	accuracy = ACCURACY_BOAT;
	scope=2;
	crew = "SoldierEB";
	model="hrl";
	picture="ihrl";
	side=0;
	maxSpeed=60;
	driverAction="ManActHRLDriver";
	gunnerAction="ManActHRLGunner";
	cargoAction[]={"ManActCargo"};
	gunnerOpticsModel="optika_empty";
	transportSoldier=10;
	cost = COST_BOAT;
	armor = ARMOR_BOAT;
	weapons[] = {"PKMS"};
	magazines[] = {"PKMS", "PKMS", "PKMS", "PKMS", "PKMS"};

	class Turret : TurretBase
	{
		soundServo[]={"",0.01,1.0};
		minElev=-5;
		maxElev=20;
		minTurn=90;
		maxTurn=270;
	};

	class ViewOptics : ViewOpticsBase
	{
		initFov=0.3;
		minFov=0.17;
		maxFov=0.35;
		initAngleY=180;
		minAngleY=90;
		maxAngleY=270;
	};

	class ViewGunner : ViewGunnerBase
	{
		initAngleY=180;
		minAngleY=180;
		maxAngleY=180;
		initAngleX=0;
		minAngleX=-15;
		maxAngleX=25;
	};
};