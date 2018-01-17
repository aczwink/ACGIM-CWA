class DefaultWorld
{
	access=3;
	plateFormat="$$$  ## - ##";
	plateLetters="ABCDEFHIKLMOPRSTVXYZ";
	centerPosition[]={6400,6400,0};
	latitude=-40;
	longitude=15;
	cutscenes[]={"intro"};
	forestOldTriangle="data3D\les trojuhelnik.p3d";
	forestOldSquare="data3D\les ctverec.p3d";
	forestInner="data3D\les ctverec dark.p3d";
	forestOuter="data3D\les ctverec pruchozi.p3d";
	forestOuterT1="data3D\les ctverec pruchozi_T1.p3d";
	forestOuterT2="data3D\les ctverec pruchozi_T2.p3d";
	forestTriangle="data3D\les trojuhelnik pruchozi.p3d";
	forestBorder="data3D\les ctverec mlazi.p3d";
	landGrid=50;

	class Music:CfgMusic
	{
	};

	class EnvSounds:CfgEnvSounds
	{
	};

	class ReplaceObjects
	{

		class ForestBorder
		{
			replace="data3D\les ctverec mlazi.p3d";
			with[]={};
		};

		class ForestTriangle
		{
			replace="data3D\les trojuhelnik.p3d";
			with[]={"data3D\les trojuhelnik pruchozi.p3d"};
		};

		class ForestSquare
		{
			replace="data3D\les ctverec.p3d";
			with[]={"data3D\les ctverec pruchozi_T1.p3d","data3D\les ctverec pruchozi_T2.p3d"};
			center=1;
		};
	};

	class Grid
	{
		offsetX=0;
		offsetY=0;

		class Zoom1
		{
			zoomMax=0.2;
			format="XY";
			formatX="Aa";
			formatY="00";
			stepX=128;
			stepY=128;
		};

		class Zoom2
		{
			zoomMax=1.00000001504747E+30;
			format="XY";
			formatX="A";
			formatY="0";
			stepX=1280;
			stepY=1280;
		};
	};

	class Subdivision
	{
		minY=0.0;
		minSlope=0.02;

		class Fractal
		{
			rougness=10;
			maxRoad=0.2;
			maxTrack=1.0;
			maxSlopeFactor=0.05;
		};

		class WhiteNoise
		{
			rougness=5;
			maxRoad=0.1;
			maxTrack=0.5;
			maxSlopeFactor=0.025;
		};
	};
};