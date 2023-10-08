class Noe:DefaultWorld
{
	access=2;
	description="Nogova";
	icon="\o\misc\_nogovo.paa";
#ifdef ACGIM_SET_GRASS_ENABLED
	worldName = "\worlds\Noe.wrp";
#else
	worldName="\Noe\Noe.wrp";
#endif
	plateFormat="NO$ - #####";
	plateLetters="ABCDEGHIKLMNOPRSTVXZ";
	startTime="4:30";
	startDate="10/4/82";
	startWeather=0.4;
	startFog=0.0;
	forecastWeather=0.4;
	forecastFog=0.0;
	seagullPos[]={8897,4349,100};
	ilsPosition[]={1525,4490};
	ilsDirection[]={0,0.08,-1};
	ilsTaxiIn[]={"1525+50","4490+510","1525+50","4490+290","1525+45","4490+286","1525+8","4490+286",1525,"4490+294",1525,"4490+450"};
	ilsTaxiOff[]={1525,4490,1525,"4490+1078","1525+23","4490+1090","1525+41","4490+1084","1525+50","4490+1075","1525+50","4490+510"};
	centerPosition[]={7690,4403,0};
	cutscenes[]={"intro"};

	class ReplaceObjects
	{

		class Forest1Border
		{
			replace="O\Tree\les_nw_ctver_mlaz.p3d";
			with[]={};
		};

		class Forest1Triangle
		{
			replace="O\Tree\les_nw_trojuhelnik.p3d";
			with[]={"O\Tree\les_nw_trojuhelnik.p3d"};
		};

		class Forest1Square
		{
			replace="O\Tree\les_nw_ctver_pruhozi.p3d";
			with[]={"O\Tree\les_nw_ctver_pruhozi_T1.p3d","O\Tree\les_nw_ctver_pruhozi_T2.p3d"};
			center="1";
		};

		class Forest2Border
		{
			replace="O\Tree\les_nw_jehl_mlaz.p3d";
			with[]={};
		};

		class Forest2Triangle
		{
			replace="O\Tree\les_nw_jehl_trojuhelnik.p3d";
			with[]={"O\Tree\les_nw_jehl_trojuhelnik.p3d"};
		};

		class Forest2Square
		{
			replace="O\Tree\les_nw_jehl_ctver_pruhozi.p3d";
			with[]={"O\Tree\les_nw_jehl_T1.p3d","O\Tree\les_nw_jehl_T2.p3d"};
			center="1";
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

		class Modrava
		{
			name="Modrava";
			position[]={1668,9513,350};
		};

		class Lipany
		{
			name="Lipany";
			position[]={10810,3085,600};
		};

		class Paseky
		{
			name="Paseky";
			position[]={6634,6127,100};
		};

		class Dolina
		{
			name="Dolina";
			position[]={5913,8473,150};
		};

		class Velka_ves
		{
			name="Velka ves";
			position[]={8823,5495,150};
		};

		class Mala_ves
		{
			name="Mala ves";
			position[]={9170,4962,50};
		};

		class Mokropsy
		{
			name="Mokropsy";
			position[]={5559,9532,100};
		};

		class Bludov
		{
			name="Bludov";
			position[]={2358,9702,100};
		};

		class Petrovice
		{
			name="Petrovice";
			position[]={3923,5188,100};
		};

		class Opatov
		{
			name="Opatov";
			position[]={6689,6793,100};
		};

		class Mirov
		{
			name="Mirov";
			position[]={3955,7044,150};
		};

		class Kvilda
		{
			name="Kvilda";
			position[]={11060,11546,100};
		};

		class Lany
		{
			name="Lany";
			position[]={10531,4076,100};
		};

		class Davle
		{
			name="Davle";
			position[]={7739,4347,100};
		};

		class Kost
		{
			name="Kost";
			position[]={5798,5222,100};
		};

		class Mokra_vrata
		{
			name="Mokra vrata";
			position[]={1551,11394,100};
		};

		class Neveklov
		{
			name="Neveklov";
			position[]={6663,4109,100};
		};

		class Frymburk
		{
			name="Frymburk";
			position[]={5414,5519,100};
		};

		class Skalice
		{
			name="Skalice";
			position[]={6771,5536,100};
		};

		class Slapy
		{
			name="Slapy";
			position[]={5258,4975,100};
		};

		class Varta
		{
			name="Varta";
			position[]={9027,7846,100};
		};

		class Blata
		{
			name="Blata";
			position[]={9807,6935,100};
		};

		class Loukov
		{
			name="Loukov";
			position[]={11220,7664,100};
		};

		class Trosky
		{
			name="Trosky";
			position[]={8074,9450,100};
		};

		class Joudov
		{
			name="Joudov";
			position[]={6239,7291,100};
		};

		class Vidlakov
		{
			name="Vidlakov";
			position[]={4178,3648,100};
		};

		class Bitov
		{
			name="Bitov";
			position[]={11222,5384,100};
		};

		class StSedlo
		{
			name="St. Sedlo";
			position[]={10730,1768,100};
		};

		class Okrouhlo
		{
			name="Okrouhlo";
			position[]={11525,2224,100};
		};

		class Bor
		{
			name="Bor";
			position[]={9444,2753,100};
		};
	};
};