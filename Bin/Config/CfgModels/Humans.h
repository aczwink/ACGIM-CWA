//USA
class usa_soldier1985 : Man 
{
	sections[] =
	{
		"head injury",
		"body injury",
		"osobnost",
		"l arm injury",
		"r arm injury",
		"p arm injury",
		"l leg injury",
		"r leg injury",
		"p leg injury",
		"medic",
		"hlava",
		"krk",
		"zadni svetlo",
		"zasleh",
		"facenull",
		"gooAX",
		"google",
		"mic",
		"holster",
		"fset1",
		"fset2",

		"good",
		"goou",
		"goostd",
		"goostu",
		"googd",
		"googu",
		"google",

		"essu",
		"essd"
	};
	sectionsInherit = "Head";
};

class us_sniper : Man
{
	sections[]=
	{
		"head injury",
		"body injury",
		"l arm injury",
		"r arm injury",
		"p arm injury",
		"l leg injury",
		"r leg injury",
		"p leg injury",
		"hlava",
		"krk",
		"zasleh",
		"pouch_m82"
	};
	sectionsInherit="Head";
};

class sf_op85 : usa_soldier1985{};
class ranger : usa_soldier1985{};
class crew85 : usa_soldier1985{};

class us_aircraft_pilot : Man
{
	sections[]=
	{
		"head injury",
		"body injury",
		"osobnost",
		"l arm injury",
		"r arm injury",
		"p arm injury",
		"l leg injury",
		"r leg injury",
		"p leg injury",
		"hlava",
		"krk",
		"zadni svetlo",
		"zasleh",
		"clan",
		"clan_sign",
		"_PilotHelm",
		"_Belt"
	};
	sectionsInherit="Head";
};

class helicopter_pilot85 : Man
{
	sections[] =
	{
		"head injury",
		"body injury",
		"l arm injury",
		"r arm injury",
		"p arm injury",
		"l leg injury",
		"r leg injury",
		"p leg injury",
		"hlava",
		"krk",
		"zasleh",
		"armpatch_left",
		"armpatch_right",
		"helm_logo",
		"hgu",
		"visor",
		"visor_dark",
		"lens",
		"lpu",
		"chestpocket",
		"faceshield",
		"nvg_tubes",
		"nvg_gear",
		"microphone"
	};
	sectionsInherit = "Head";
};

//USSR
class Spetsnaz : Man
{
	sections[] = 
	{
		"head injury",
		"body injury",
		"l arm injury",
		"r arm injury",
		"p arm injury",
		"l leg injury",
		"r leg injury",
		"p leg injury",
		"hlava",
		"krk",
		"zasleh",
		"medic",
		"svetlo",
		"_AKmags",
		"_AKmags1",
		"_Armpatch_left","_Armpatch_right","_Backpack","_Beret","_Bottle","_Cap","_Gasmask","_Gear","_Gpouch","_Helm","_Helmcamo","_HelmF","_Holster","_MAGpouch1","_MAGpouch2","_PKpouch1","_PKpouch2","_Radiogear","_Rpgpack","_Shovel","_SVDmags","_Tuch","_Mapcase","_Lamp"};
	sectionsInherit=Head;
};