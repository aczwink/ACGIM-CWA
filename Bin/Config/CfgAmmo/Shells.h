/*
M68 105mm Gun
*/
class Shell105_APFSDS : Heat105
{
	hit = HIT_105APFSDS;
	indirectHit = INDIRECTHIT_105APFSDS;
	indirectHitRange = INDIRECTHITRANGE_105APFSDS;
	airlock=0;
	explosive=0;
	soundHit[]={"\d4t_files\sounds\weapons\impacts\Sabot_Hit_Ground.wss",50,1};
	soundHitArmor[]={"\d4t_files\sounds\weapons\impacts\Sabot_Hit_Armor.wss",50,1};
	hitGround[]={"soundHit",1};
	hitArmor[]={"soundHitArmor",1};
	cost = COST_SHELL_105APFSDS;
	//No prooves for range values
	minRange=20;
	minRangeProbab=0.9;
	midRange=1500;
	midRangeProbab=0.95;
	maxRange=3500;
	maxRangeProbab=0.4;
};

class Shell105_HEAT : Shell105
{
	hit = HIT_105HEAT;
	indirectHit = INDIRECTHIT_105HEAT;
	indirectHitRange = INDIRECTHITRANGE_105HEAT;
	cost = COST_SHELL_105HEAT;
	soundHit[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit_Ground.ogg",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit_Armor.ogg",50,1};
	hitGround[]={"soundHit",1};
	hitArmor[]={"soundHitArmor",1};
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Shell_Fly.ogg",6,1};
};

/*
M256 120mm Gun
*/
class Shell120_APFSDS : Heat120
{
	cost = COST_SHELL_120APFSDS;
    hit = HIT_120APFSDS;
	indirectHit = INDIRECTHIT_120APFSDS;
    indirectHitRange = INDIRECTHITRANGE_120APFSDS;
	explosive=false;
	soundHit[]={"\d4t_files\sounds\weapons\impacts\Sabot_Hit_Ground.wss",50,1};
	soundHitArmor[]={"\d4t_files\sounds\weapons\impacts\Sabot_Hit_Armor.wss",50,1};
	soundFly[]={"\sjc_sounds\weapons\hardmounted\Shell_Fly.ogg",6,1};
	minRange = 20;
	minRangeProbab = 0.5;
	midRange = 2000;
	midRangeProbab = 1;
	maxRange = 4000;
	maxRangeProbab = 0.4;
};

class Shell120_HEAT : Shell120
{
	airLock=1;
	cost = COST_SHELL_120HEAT;
    hit = HIT_120HEAT;
	indirectHit = INDIRECTHIT_120HEAT;
    indirectHitRange = INDIRECTHITRANGE_120HEAT;
    soundHit[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit_Ground.ogg",50,1};
	soundHitArmor[]={"\sjc_sounds\weapons\hardmounted\Heat_Hit_Armor.ogg",50,1};
    soundFly[]={"\sjc_sounds\weapons\hardmounted\Shell_Fly.ogg",6,1};
    minRange = 20;
	minRangeProbab = 0.5;
	midRange = 2000;
	midRangeProbab = 1;
	maxRange = 4000;
	maxRangeProbab = 0.4;
};