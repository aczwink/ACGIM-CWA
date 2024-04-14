class DSL_a10_mesh_g : Vehicle
{
	sectionsInherit = "Vehicle";
	sections[] = 
	{
		"n1", "n2", "n3",
		"bas_tailflash_l", "bas_tailflash_r", "bas_taillogo_l", "bas_taillogo_r", "bas_tailnum_l", "bas_tailnum_r", "bas_usaf_l", "bas_usaf_r",
		"_aimA", "_aimB", 
		"_mavA", "_mavB", "_mavC", "_mavD", "_mavE", "_mavF", 
		"_mk82A", "_mk82B", "_mk82C", "_mk82D",
		"zasleh", "vrtule staticka", "vrtule blur"
	};
};

class DSL_a10_mesh_gbu_g : Vehicle
{
	sectionsInherit = "Vehicle";
	sections[] = 
	{
		"n1", "n2", "n3",
		"bas_tailflash_l", "bas_tailflash_r", "bas_taillogo_l", "bas_taillogo_r", "bas_tailnum_l", "bas_tailnum_r", "bas_usaf_l", "bas_usaf_r",
		"_aimA", "_aimB",
		"_mavA", "_mavB", 
		"_gbuA", "_gbuB", "_gbuC", "_gbuD",
		"zasleh", "vrtule staticka", "vrtule blur"
	};
};

class f15c : vehicle
{
	sectionsInherit="Vehicle";
	sections[]=
	{
		"roundel", "vrtule", 
		"num1", "num2", "num3", 
		"vrtule 1", 
		"_swA", "_swB", "_swC", "_swD", 
		"_amrmA", "_amrmB", "_amrmC", "_amrmD", "_amrmE", "_amrmF", 
		"foldwheelfront", "foldwheelrear", "spinwheelfront", "spinwheelrear", 
		"zasleh"
	};
};

class f4e : Vehicle 
{
	sections[] = {"roundel", "bombA", "bombB", "bombC", "harmA", "harmB", "sp1", "sp2", "sp3", "sp4", "num1", "num2", "num3", "blu1", "blu2", "burn", "zasleh"};
};

class Vit_Isr_F16C : Default
{
	sectionsInherit="Vehicle";
	sections[]=
	{
		"AIM1201",
		"AIM1202",
		"AIM91",
		"AIM92",
		"MAV1",
		"MAV2",
		"MAV3",
		"MAV4",
		"MAV5",
		"MAV6",
		"GBU1",
		"GBU2",
		"cislo",
		"grupa",
		"side",
		"sektor",
		"clan",
		"podsvit pristroju",
		"poskozeni",
		"L svetlo",
		"P svetlo",
		"zasleh",
		"sklo predni p",
		"sklo predni l",
		"vrtule staticka",
		"vrtule blur"
	};
};