class CfgTitles
{
	access=1;
	titles[]={"Sphere","BISLogo","TVSet"};

	class Sphere
	{
		name="$STR_CFG_TITLES_SPHERE";
		model="koule.p3d";
		duration=5;
		camera[]={0,0,-10};
	};

	class BISLogo
	{
		name="$STR_CFG_TITLES_BISLOGO";
		model="bohemiaolor2.p3d";
		duration=3;
		camera[]={0,0,-200};
	};

	class TVSet
	{
		name="$STR_CFG_TITLES_TVSET";
		duration=1000;
		model="TVhi.p3d";
		camera[]={0,0,-0.7};
	};
};