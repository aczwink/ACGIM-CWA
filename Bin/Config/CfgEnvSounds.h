class CfgEnvSounds
{
	access=1;

	class Default
	{
		name="$STR_CFG_ENVSOUNDS_DEFAULT";
		sound[]={"$DEFAULT$",0,1};
		soundNight[]={"$DEFAULT$",0,1};
	};

	class Rain
	{
		name="$STR_DN_RAIN";
		sound[]={"Environmental\Rain_hard",0.0017783,1};
		soundNight[]={"Environmental\Rain_hard",0.0017783,1};
	};

	class Sea
	{
		name="$STR_DN_SEA";
		sound[]={"environmental\wave_break",0.0003162,1};
		soundNight[]={"environmental\wave_break",0.0003162,1};
	};

	class Meadows
	{
		name="$STR_DN_MEADOWS";
		sound[]={"animals\crickets07",0.0000562,1};
		soundNight[]={"animals\crickets03",0.0000562,1};
	};

	class Trees
	{
		name="$STR_DN_TREES";
		sound[]={"environmental\treesbirds",0.0001778,1};
		soundNight[]={"animals\crickets03",0.0001778,1};
	};

	class Hills
	{
		name="$STR_DN_HILLS";
		sound[]={"environmental\wind_heavy",0.0001778,1};
		soundNight[]={"environmental\wind_whistle",0.0001778,1};
	};

	class Combat
	{
		name="$STR_CFG_ENVSOUNDS_COMBAT";
		sound[]={"environmental\battle1",0.01,1};
		soundNight[]={"environmental\battle2",0.01,1};
	};
};