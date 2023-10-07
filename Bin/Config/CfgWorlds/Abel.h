class Abel:DefaultWorld
{
	access=3;
	plateFormat="ML$ - #####";
	plateLetters="ABCDEGHIKLMNOPRSTVXZ";
#ifdef SJC_SET_GRASS_ENABLED
	worldName = "\worlds\Abel.wrp";
#else
	worldName="abel.wrp";
#endif
	description="Malden";
	icon="_abel.paa";
	startTime="8:30";
	startDate="30/4/84";
	startWeather=0.3;
	startFog=0.0;
	forecastWeather=0.3;
	forecastFog=0.0;
	seagullPos[]={8074,4048,100};
	ilsPosition[]={7922,9590,0};
	ilsDirection[]={0,0.08,-1};
	ilsTaxiIn[]={"7922+69","9590+400","7922+69","9590+45-18","7922+61","9590+37-18","7922+8","9590+37-18",7922,"9590+45-18",7922,"9590+100-18"};
	ilsTaxiOff[]={7922,9590,7922,"9590+878-18","7922+8","9590+886-18","7922+61","9590+886-18","7922+69","9590+878-18","7922+69","9590+400"};
	forestOldTriangle="data3D\les_su_trojuhelnik.p3d";
	forestOldSquare="data3D\les_su_ctver.p3d";
	forestInner="data3D\les_su_ctver.p3d";
	forestOuter="data3D\les_su_ctver_pruhozi.p3d";
	forestOuterT1="data3D\les_su_ctver_pruhozi_T1.p3d";
	forestOuterT2="data3D\les_su_ctver_pruhozi_T2.p3d";
	forestTriangle="data3D\les_su_trojuhelnik.p3d";
	forestBorder="data3D\les_su_ctver_mlaz.p3d";
	cutscenes[]={"intro","intro1"};

	class ReplaceObjects
	{

		class ForestBorder
		{
			replace="data3D\les_su_ctver_mlaz.p3d";
			with[]={};
		};

		class ForestSquare
		{
			replace="data3D\les_su_ctver.p3d";
			with[]={"data3D\les_su_ctver_pruhozi_T1.p3d","data3D\les_su_ctver_pruhozi_T2.p3d"};
			center=1;
		};
	};

	class EnvSounds : CfgEnvSounds
	{

		class Rain
		{
			sound[]={"Environmental\Rain_hard",0.001,1};
			soundNight[]={"Environmental\Rain_hard",0.001,1};
		};

		class Sea
		{
			sound[]={"Environmental\wave_break",0.0001,1};
			soundNight[]={"Environmental\wave_break",0.0001,1};
		};

		class Meadows
		{
			sound[]={"animals\crickets03",0.0000178,1};
			soundNight[]={"animals\crickets03",0.0000178,1};
		};

		class Trees
		{
			sound[]={"animals\crickets03",0.0001,1};
			soundNight[]={"animals\crickets03",0.0001,1};
		};

		class Hills
		{
			sound[]={"Environmental\wind_heavy",0.0000316,1};
			soundNight[]={"Environmental\wind_whistle",0.0000316,1};
		};
	};

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

		class SaintLouis
		{
			name="Saint Louis";
			position[]={7144,8963,130};
		};

		class Larche
		{
			name="Larche";
			position[]={6034,8599,200};
		};

		class LaTrinite
		{
			name="La Trinite";
			position[]={7268,7944,200};
		};

		class Goisee
		{
			name="Goisse";
			position[]={3593,8528,150};
		};

		class LaPessagne
		{
			name="La Pessagne";
			position[]={3111,6326,100};
		};

		class Vigny
		{
			name="Vigny";
			position[]={3075,6831,100};
		};

		class Houdan
		{
			name="Houdan";
			position[]={7117,6069,100};
		};

		class SainteMarie
		{
			name="Sainte Marie";
			position[]={5563,4217,100};
		};

		class Chapoi
		{
			name="Chapoi";
			position[]={5841,3527,200};
		};

		class LePort
		{
			name="Le Port";
			position[]={8193,3129,100};
		};

		class Cancon
		{
			name="Cancon";
			position[]={5388,2786,100};
		};

		class LaRiviere
		{
			name="La Riviere";
			position[]={3744,3257,200};
		};

		class Arudy
		{
			name="Arudy";
			position[]={5518,6981,100};
		};

		class Dourdan
		{
			name="Dourdan";
			position[]={7029,7125,100};
		};
	};
};