class Cain : DefaultWorld
{
	access=3;
	plateFormat="## - KO$ - #";
	plateLetters="ABCEHKMOPT";
#ifdef SJC_SET_GRASS_ENABLED
	worldName = "\worlds\Cain.wrp";
#else
	worldName="cain.wrp";
#endif
	description="Kolgujev";
	icon="_cain.paa";
	startTime="8:30";
	startDate="30/4/84";
	startWeather=0.3;
	startFog=0.0;
	forecastWeather=0.3;
	forecastFog=0.0;
	seagullPos[]={8074,4048,100};
	ilsPosition[]={0,0,0};
	ilsDirection[]={0,0.08,-1};
	ilsTaxiIn[]={};
	ilsTaxiOff[]={};
	cutscenes[]={"intro","intro1"};

	class Sounds
	{
		sounds[]={};
	};

	class Animation
	{
		vehicles[]={};
	};

	class Names
	{
	};
};