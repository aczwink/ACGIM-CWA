class ShellBM6 : Heat105
{
	hit = HIT_115APFSDS;
	indirectHit = INDIRECTHIT_115APFSDS;
	indirectHitRange = INDIRECTHITRANGE_115APFSDS;
	cost = COST_SHELL_115APFSDS;
	explosive = false;
	model="\sjc_models\russia\objects\3bm26.p3d";//looks the same
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Ground.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Armor.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=0.9;
	maxRange=3500;
	maxRangeProbab=0.8;
};

class ShellBK4 : Shell105
{
	explosive=1;
	model="\sjc_models\russia\objects\bk12.p3d"; //looks the same
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
	airLock=1;
	hit = HIT_115HEAT;
	indirectHit = INDIRECTHIT_115HEAT;
	indirectHitRange = INDIRECTHITRANGE_115HEAT;
	cost = COST_SHELL_115HEAT;
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=08;
	maxRange=3000;
	maxRangeProbab=0.4;
};

class ShellOF27 : Shell105
{
	explosive=1;
	model="\sjc_models\russia\objects\bk12.p3d"; //looks the same
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Ground.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Armor.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
	airLock=1;
	cost = COST_SHELL_115HEFRAG;
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=1;
	maxRange=3000;
	maxRangeProbab=0.9;
	hit = HIT_115HEFRAG;
	indirectHit = INDIRECTHIT_115HEFRAG;
	indirectHitRange = INDIRECTHITRANGE_115HEFRAG;
};

/*
2A28 Grom rounds
*/
class ShellPG15V : Shell73
{
	hit = HIT_73HEAT;
	indirectHit = INDIRECTHIT_73HEAT;
	indirectHitRange = INDIRECTHITRANGE_73HEAT;
	cost=500;
	soundHit[]={"Explosions\expl1",100.0000076,1};
};

class ShellOG15V : Shell73
{
	hit = HIT_73HEFRAG;
	indirectHit = INDIRECTHIT_73HEFRAG;
	indirectHitRange = INDIRECTHITRANGE_73HEFRAG;
};

/*
2A46M
*/
class 3VBM17 : Heat125
{
	hit = HIT_125APFSDS;
	indirectHit = INDIRECTHIT_125APFSDS;
	indirectHitRange = INDIRECTHITRANGE_125APFSDS;
	cost = COST_SHELL_125APFSDS;
	explosive = false;
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=0.9;
	maxRange=3500;
	maxRangeProbab=0.8;
	model="\sjc_models\russia\objects\3bm26.p3d";
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Ground.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Sabot_Hit_Armor.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
};

class 3VBK16 : Shell125
{
	explosive=1;
	airLock=1;
	hit = HIT_125HEAT;
	indirectHit = INDIRECTHIT_125HEAT;
	indirectHitRange = INDIRECTHITRANGE_125HEAT;
	cost = COST_SHELL_125HEAT;
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=1;
	maxRange=3000;
	maxRangeProbab=0.9;
	model="\sjc_models\russia\objects\bk12.p3d";
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
};

class 3VOF36 : Shell125
{
	airLock=1;
	explosive=1;
	hit = HIT_125HEFRAG;
	indirectHit = INDIRECTHIT_125HEFRAG;
	indirectHitRange = INDIRECTHITRANGE_125HEFRAG;
	cost = COST_SHELL_125HEFRAG;
	minRange=10;
	minRangeProbab=1;
	midRange=1500;
	midRangeProbab=1;
	maxRange=3000;
	maxRangeProbab=0.9;
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Prjtl-Flg.wss",6,1};
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit.wss",50,1};
	hitGround[]={"soundHit",50};
	hitArmor[]={"soundHitArmor",50};
	model="\sjc_models\russia\objects\bk12.p3d"; //looks the same
};