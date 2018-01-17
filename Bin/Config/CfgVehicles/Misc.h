class LaserTargetW : LaserTargetWBase
{
	accuracy=1000;
	weapons[]={};
	magazines[]={};
};

class LaserTargetE : LaserTargetEBase
{
	accuracy=1000;
	weapons[]={};
	magazines[]={};
};

class MineMine : MineGeneric
{
	scope=2;
	displayName="$STR_DN_MINE";
	ammo="Mine";
};