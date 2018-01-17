class Intro : DefaultWorld
{
	access=3;
	description="Desert Island";
	icon="_training.paa";
	worldName="intro.wrp";
	plateFormat="ML$ - #####";
	plateLetters="ABCDEGHIKLMNOPRSTVXZ";
	startTime="4:30";
	startDate="10/4/82";
	startWeather=0.4;
	startFog=0.0;
	forecastWeather=0.4;
	forecastFog=0.0;
	seagullPos[]={8897,4349,100};
	ilsPosition[]={0,0,0};
	ilsDirection[]={0,0.08,1};
	ilsTaxiIn[]={};
	ilsTaxiOff[]={};
	centerPosition[]={9735,3964,0};
	cutscenes[]={"intro"};

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