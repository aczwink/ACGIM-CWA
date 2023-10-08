class Eden : DefaultWorld
{
	access=3;
	plateFormat="ER$  ## - ##";
	plateLetters="ABCDEFHIKLMOPRSTVXYZ";
#ifdef ACGIM_SET_GRASS_ENABLED
	worldName = "\worlds\Eden.wrp";
#else
	worldName="eden.wrp";
#endif
	description="Everon";
	icon="_eden.paa";
	startTime="8:30";
	startDate="30/4/84";
	startWeather=0.3;
	startFog=0.0;
	forecastWeather=0.3;
	forecastFog=0.0;
	seagullPos[]={10738,8509};
	ilsPosition[]={4772,10923};
	ilsDirection[]={0,0.08,-1};
	ilsTaxiIn[]={"4772+69","10923+400","4772+69","10923+95","4772+61","10923+87","4772+8","10923+87",4772,"10923+95",4772,"10923+150"};
	ilsTaxiOff[]={4772,10923,4772,"10923+878","4772+8","10923+886","4772+61","10923+886","4772+69","10923+878","4772+69","10923+400"};
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

		class SaintPhillippe
		{
			name="Saint Phillippe";
			position[]={4674,10730,50};
		};

		class Regina
		{
			name="Regina";
			position[]={7197,2347,50};
		};

		class Meaux
		{
			name="Meaux";
			position[]={4524,9549,100};
		};

		class Tyrone
		{
			name="Tyrone";
			position[]={4946,9056,50};
		};

		class Montignac
		{
			name="Montignac";
			position[]={4935,6994,50};
		};

		class Gravette
		{
			name="Gravette";
			position[]={4112,7772,50};
		};

		class EnreDeux
		{
			name="Entre Deux";
			position[]={5735,7059,100};
		};

		class Provins
		{
			name="Provins";
			position[]={5501,6050,50};
		};

		class Chotain
		{
			name="Chotain";
			position[]={7057,5987,50};
		};

		class Laruns
		{
			name="Laruns";
			position[]={7556,5558,50};
		};

		class Figari
		{
			name="Figari";
			position[]={5283,5375,50};
		};

		class LeMoule
		{
			name="Le Moule";
			position[]={2590,5384,50};
		};

		class Morton
		{
			name="Morton";
			position[]={5134,3955,100};
		};

		class Lamentin
		{
			name="Lamentin";
			position[]={1333,5962,100};
		};

		class Levie
		{
			name="Levie";
			position[]={7554,4737,10};
		};

		class Durras
		{
			name="Durras";
			position[]={8835,2710,50};
		};

		class Vernon
		{
			name="Vernon";
			position[]={9142,2159,50};
		};

		class SaintPierre
		{
			name="Saint Pierre";
			position[]={9662,1605,50};
		};
	};
};