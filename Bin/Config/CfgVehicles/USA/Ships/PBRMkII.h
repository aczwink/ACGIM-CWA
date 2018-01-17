/*
Sources:
	http://en.wikipedia.org/wiki/Patrol_Boat,_River
In service: 1966-1995
*/
class USA_PBRMkII : SmallShip
{
	displayName="$STR_DN_MARK_II";
	accuracy = ACCURACY_PBRMKII;
	scope=2;
	crew = "USA_Soldier";
	model="pbr";
	picture="ipbr";
	side=1;
	driverIsCommander=1;
	driverAction="ManActPBRDriver";
	gunnerAction="ManActPBRGunner";
	cargoAction[]={"ManActCargo"};
	gunnerOpticsModel="optika_empty";
	maxSpeed = 53;
	transportSoldier=6;
	cost = COST_PBRMKII;
	armor = ARMOR_PBRMKII;
	weapons[]={"M2HBBrowningTwin"};
	magazines[]={"M2HBBrowningTwin","M2HBBrowningTwin","M2HBBrowningTwin"};

	class TurretBase
	{
		gunAxis="osa hlavne";
		turretAxis="osa veze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={"",0,1.0};
		minElev=-5;
		maxElev=40;
		minTurn=-135;
		maxTurn=135;
		body="OtocVez";
		gun="OtocHlaven";
	};

	class Turret : TurretBase{};
};