access=3;
idd=0;
movingEnable=1;
controlsBackground[]={"Background1","Background2","Background3"};
controls[]={"CWA","Line1","Line2","Continue","Player","Game","SingleMission","Multiplayer","Custom","Options","Quit","Version","AllMissions","Copy","ACGIM_ModTitle", "ACGIM_ConfigScenario", "ACGIM_Copyright"};

class copy:RscText
{
	style="16 + 					2 + 				512";
	lineSpacing=1.0;
	text="$STR_CREDITS23";
	x=0.03;
	y=0.96;
	w=0.9;
	h=0.7;
	colorText[]={1,1,1,0.5};
	font="tahomaB24";
	sizeEx=0.016;
};

class CWA: RscPicture {
	text = "startup_logo_CWA_ca.paa";
	x = 0.41;
	y = 0.0;
	w = 0.18;
	h = 0.12;
};

class Line1:RscText
{
	style=176;
	x=0.7;
	y=0.125;
	w=0;
	h=0.75;
	text="";
	colorBackground[]={1,1,1,1};
	color[]={1,1,1,1};
	colorText[]={1,1,1,1};
};

class Line2:RscText
{
	style=176;
	x=0.0;
	y=0.0;
	w=0;
	h=0;
	text="";
	colorBackground[]={1,1,1,1};
	color[]={1,1,1,1};
	colorText[]={1,1,1,1};
};

class Continue:RscActiveMenu
{
	idc=114;
	x=0.05;
	y=0.155;
	w=0.0;
	h=0.0;
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	text="$STR_DISP_MAIN_CONTINUE";
};

class Player:RscActiveMenu
{
	idc=109;
	x=0.75;
	y=0.15;
	w=0.25;
	h=0.05;
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	text="$STR_DISP_ERROR";
};

class Game:RscActiveMenu
{
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	idc=101;
	x=0.75;
	y=0.25;
	w=0.2;
	h=0.05;
	text="$STR_DISP_MAIN_GAME";
};

class SingleMission:RscActiveMenu
{
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	idc=117;
	x=0.75;
	y=0.35;
	w=0.2;
	h=0.05;
	text="$STR_DISP_MAIN_SINGLE";
	default=1;
};

class Multiplayer:RscActiveMenu
{
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	idc=105;
	x=0.75;
	y=0.45;
	w=0.2;
	h=0.05;
	text="$STR_DISP_MAIN_MULTI";
};

class Custom:RscActiveMenu
{
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	idc=115;
	x=0.75;
	y=0.55;
	w=0.2;
	h=0.05;
	text="$STR_DISP_MAIN_CUSTOM";
};

class Options:RscActiveMenu
{
	font="SteelfishB128";
	sizeEx="0.6 * 0.098";
	idc=102;
	x=0.75;
	y=0.65;
	w=0.2;
	h=0.05;
	text="$STR_DISP_MAIN_OPTIONS";
};

class Quit:RscActiveMenu
{
	font="SteelfishB128";
	idc=106;
	x=0.75;
	y=0.75;
	w=0.2;
	h=0.05;
	sizeEx="0.6 * 0.098";
	text="$STR_DISP_MAIN_QUIT";
};

class Date:RscText
{
	idc=112;
	x=0.4;
	y=0.17;
	w=0.2;
	h=0.05;
	style=2;
	font="tahomaB24";
	sizeEx=0.02;
	text="$STR_DISP_ERROR";
	colorText[]={1,1,1,0.5};
};

class Version:RscText
{
	idc = 118;
	x = 0.4;
	y = 0.09;
	w=0.2;
	h=0.05;
	style=2;
	font="tahomaB24";
	sizeEx=0.016;
	text="$STR_DISP_ERROR";
	colorText[]={1,1,1,0.5};
};

class AllMissions:RscActiveMenu
{
	idc=104;
	x=0.4;
	y=0.935;
	w=0.52;
	h=0.03;
	font="SteelfishB64";
	sizeEx="0.5 * 0.05";
	colorText[]={1,1,1,0.25};
	text="$STR_DISP_MAIN_DESIGN";
};

class ACGIM_ModTitle : RscText
{
	style=2;
	font="tahomaB24";
	x=0.63;
	y=0.03;
	w=0.25;
	h=0.05;
	sizeEx="0.02";
	text = "Amir Czwink's Game Improvement Mod";
	colorText[]={1,1,1,0.5};
};

class ACGIM_ConfigScenario : RscText
{
	style=2;
	font="tahomaB24";
	x=0.63;
	y=0.08;
	w=0.25;
	h=0.05;
	sizeEx="0.02";
#ifdef ACGIM_SCENARIO_1985
	text="Scenario: OFP 1985";
#endif
#ifdef ACGIM_SCENARIO_2007
	text = "Scenario: 2007";
#endif
	colorText[]={1,1,1,0.5};
};

class ACGIM_Copyright : RscText
{
	style="16 + 					2 + 				512";
	lineSpacing=1.0;
	text = "This is a private, absolutely unofficial Mod which will never be published. Thanks to every Addonmaker for the Addons used in this Mod.";
	x=0.03;
	y=0.92;
	w=0.9;
	h=0.7;
	colorText[]={1,1,1,0.5};
	font="tahomaB24";
	sizeEx=0.016;
};