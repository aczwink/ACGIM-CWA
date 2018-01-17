class Forest:NonStrategic
{
	scope=1;
	model="";
	displayName="$STR_DN_FOREST";
	nameSound="forest";
	simulation="forest";
	accuracy=0.2;
	cost=5000;
	coefInside=1;
	coefInsideHeur=0.25;
};

class ForestSkewed:Forest
{
	animated=0;
};

class Forest001:Forest
{
	model="les ctverec pruchozi";
};

class Forest001T1:ForestSkewed
{
	model="les ctverec pruchozi_T1";
};

class Forest001T2:ForestSkewed
{
	model="les ctverec pruchozi_T2";
};

class Forest002:Forest
{
	model="les trojuhelnik pruchozi";
};

class Forest003:Forest
{
	model="les_su_ctver_pruhozi";
};

class Forest003T1:ForestSkewed
{
	model="les_su_ctver_pruhozi_T1";
};

class Forest003T2:ForestSkewed
{
	model="les_su_ctver_pruhozi_T2";
};

class Forest004:Forest
{
	model="les_su_trojuhelnik";
};

class ForestRes01 : Forest
{
	model="les_nw_ctver_pruhozi";
};

class ForestRes01T1 : ForestSkewed
{
	model="\o\tree\les_nw_ctver_pruhozi_T1";
};

class ForestRes01T2 : ForestSkewed
{
	model="\o\tree\les_nw_ctver_pruhozi_T2";
};

class ForestRes02T1 : ForestSkewed
{
	model="\o\tree\les_nw_jehl_T1";
};

class ForestRes02T2 : ForestSkewed
{
	model="\o\tree\les_nw_jehl_T2";
};

class ForestRes02 : Forest
{
	model="\o\tree\les_nw_trojuhelnik";
};

class ForestRes03 : Forest
{
	model="\o\tree\les_nw_jehl_trojuhelnik";
};