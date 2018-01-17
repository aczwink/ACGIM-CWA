class nmod_fire :All
{
	reversed = 0;
	hasDriver = 0;
	picture = "ivojak";
	Weapons[] = {};
	magazines[] = {};
	type = 1;
	threat[] = {0.0,0.0,0.0};
	maxSpeed = 0;
	coefInside = 2;
	coefInsideHeur = 4.3000002;
	side = 3;
	scope = 0;
	simulation = "fire";
	sound = "Fire";
	vehicleClass = "Objects";
	icon = "Unknown_object";
	model = "empty";
	displayName = "";
	accuracy = 0.2;
	typicalCargo[] = {};
	mapSize = 0;
	cost = 0;
	armor = 20;

	class Light
	{
		Shape = "koulesvetlo";
		color[] = {1.0,0.6,0.0,1.0};
		ambient[] = {0.7,0.2,0.0,0.0};
		position = "";
		size = 0.4;
		brightness = 0.1;
	};

	class Smoke
	{
		interval = 0.08;
		cloudletDuration = 0.8;
		cloudletAnimPeriod = 0.4;
		cloudletSize = 0.4;
		cloudletAlpha = 0.8;
		cloudletGrowUp = 0.5;
		cloudletFadeIn = 0.05;
		cloudletFadeOut = 0.7;
		cloudletAccY = 1.5;
		cloudletMinYSpeed = 0.3;
		cloudletMaxYSpeed = 2.5;
		cloudletMaxXSpeed = 0.0;
		cloudletShape = "cl_fire";
		cl_basic = 0;
		cloudletColor[] = {1,1,1,0};
		initT = 1000;
		deltaT = -500;
		density = 0.9;
		size = 0.51;
		in = 0;
		out = 0;
		initYSpeed = 0.0;
		timetolive = 150.0;

		class Table
		{

			class T1
			{
				maxT = 0;
				color[] = {0.9,0.9,0.0,1};
			};

			class T2
			{
				maxT = 500;
				color[] = {1,0.8,0.0,1};
			};

			class T3
			{
				maxT = 800;
				color[] = {0.8,0.7,0.0,1};
			};

			class T4
			{
				maxT = 1000;
				color[] = {0.8,0.8,0.8,0.2};
			};
		};
	};
};

class nmod_smoke :nmod_fire
{

	class Light
	{
		Shape = "koulesvetlo";
		color[] = {1,0.54,0,1};
		ambient[] = {1,0.3,0,1};
		position = "";
		size = 0.25;
		brightness = 0.6;
	};

	class Smoke
	{
		interval = 0.3;
		cloudletDuration = 30;
		cloudletAnimPeriod = 1.0;
		cloudletSize = 2.5;
		cloudletAlpha = 0.7;
		cloudletGrowUp = 3.5;
		cloudletFadeIn = 0.01;
		cloudletFadeOut = 8.0;
		cloudletAccY = 0.5;
		cloudletMinYSpeed = 0.5;
		cloudletMaxYSpeed = 5.0;
		cloudletShape = "cl_basic";
		cloudletColor[] = {0.2,0.2,0.2,0.1};
		initT = 1000;
		deltaT = 429496679;
		maxT = 0;
		density = 0.5;
		size = 0.1;
		initYSpeed = 1.7;
		timeToLive = 350;
		in = 0;
		out = 0;

		class Table
		{

			class T1
			{
				maxT = 0;
				color[] = {0.2,0.2,0.2,0.8};
			};

			class T2
			{
				maxT = 900;
				color[] = {0.3,0.3,0.3,0.6};
			};

			class T3
			{
				maxT = 1000;
				color[] = {0.3,0.3,0.3,0.3};
			};
		};

	};
};