class Explosion // Dust Skirt
{
	access=3;
	cloudletAnimPeriod = "3.5+(random 3)"; // animation speed, time to wait between frames
	sourceSize = 1;
	cloudletSize=1;
	size="6+(random 4)";	// Size of particle ?
	in="0";	// Emitter fade in
	out="1+(random 2)";	// Emitter fade out
	timeToLive="1+(random 2)";	// Emitter time
	interval=0.005;	// Emitter interval
	cloudletAlpha="0.7+(random 0.2)";
	density=-15;	// ??? spread ? not used ?
	cloudletGrowUp="0.05+(random 0.1)";
	cloudletFadeIn="0";
	cloudletDuration="2+(random 3)"; // time to live (not including fades)
	cloudletFadeOut="15+(random 10)";
	initYSpeed="random 0.1";
	cloudletAccY = "-0.06 -(random 0.1)";	// vertical acceleration
	cloudletMinYSpeed = "-(random 3)";	// vertical speed range down
	cloudletMaxYSpeed = "(random 1)";	// vertical speed range up
	cloudletColor[]={0.8,0.8,0.8,0};
	cloudletShape="cl_water";
	initT=0;
	deltaT="500+(random 6000)";
	
	class Table
	{
		class T0
		{
			maxT=0;
			color[]={0,0,0,0};
		};
		class T1
		{
			maxT=200;
			color[]={0.360784,0.356863,0.278431,0};
		};
		class T2
		{
			maxT=2500;
			color[]={0.533333,0.537255,0.529412,1};
		};
		class T3
		{
			maxT=5000;
			color[]={0.733333,0.737255,0.690196,1};
		};
	};
};

class CraterSmoke1 // Dust/Fire Ball
{
	access=3;
	size = 1;
	cloudletSize = "2000000-(random 200000)";
	in=0;
	out=0;
	cloudletAlpha=1;
	density="0.9 + (random 0.2)";	// alpha
	timeToLive = 1;
	interval = 2;	// Emitter interval
	cloudletGrowUp="0";
	cloudletFadeIn="0";
	cloudletDuration="(random 0.1)";	// Particle life
	cloudletFadeOut="0";
	cloudletAnimPeriod = "0.3+(random 0.3)"; // animation speed, time to wait between frames
	initYSpeed="0.1+(random 0.5)";
	cloudletAccY = -0.1;
	cloudletMinYSpeed = 0;
	cloudletMaxYSpeed = 1;
	cloudletShape = "\sjc_models\fx\Explosion";
	//cloudletShape = "\SLX_Cloud\Explosion";
	//cloudletShape = "cl_fired";
	cloudletColor[]={1,1,0,1};
	initT=1000;
	deltaT="-2000";

	class Table
	{
		class T0
		{
			maxT=500;
			color[]={0.623529,0.611765,0.513726,0};
		};
		
		class T1
		{
			maxT=900;
			color[]={0.4196,0.4156,0.2823,0};
		};
		
		class T2
		{
			maxT=1000;
			color[]={1,1,1,1};
		};
	};
};

class CraterSmoke2 // Buoyant/Drifting Dust Cloud
{
	access = 3;

		cloudletAnimPeriod = "4+(random 2)"; // animation speed, time to wait between frames

//		sourceSize = 1;
		size = 1;
		cloudletSize = "1000000+1000000-(random 200000)";
//		cloudletSize = 1000000;
//		cloudletSize="4000+ random 8000"; // ???????
//		timeToLive = "1+(random 3)";	// Emitter time

		in = "0.05 +(random 0.1)";
		out = "1+(random 3)";
		timeToLive="1+(random 8)";	// Emitter time
		interval="0.2+(random 0.1)";	// Emitter interval

		//density = 1;		// used for alpha
		density="0.9 + (random 0.2)";	// alpha

		cloudletGrowUp="0.05+(random 0.1)";
		cloudletFadeIn="0.2+(random 1)";
		cloudletDuration="2+(random 3)";	// Particle life
		cloudletFadeOut="2+(random 2)";

		initYSpeed="1 +(random 2)";
		cloudletAccY = "1 -(random 1.5)";
		cloudletMinYSpeed = "-(random 0.5)";
		cloudletMaxYSpeed = "1 +(random 3)";

		cloudletShape = "cl_basic";
		cloudletColor[]={1,1,1,0};
		cloudletAlpha = 0; // not used

		initT = 0;
		deltaT = "(random 1500)";
		class Table
		{
			class T0 {maxT = 0; color[] = {0.219608,0.176471,0.188235,1.000000};}
			class T1 {maxT = 1000; color[] = {0.498039,0.572549,0.584314,1.000000};}
		}
		//timeToLive=1;	// Emitter time
		//interval = 2;	// Emitter interval

		//cloudletAlpha = 0.2; // not used
		//initYSpeed="1+(random 1.5)";
		//density = 0.2;		// used for alpha
};

class CraterSmoke3 // Extra Dust Skirt/ Smoking Crater
{
	access = 3;

		cloudletAnimPeriod = "3.5+(random 3)"; // animation speed, time to wait between frames

		size = 1;					// source size
//		size = 4;					// source size
//		cloudletSize = 1000000;
		cloudletSize = "1000000-(random 200000)";

		timeToLive="4+(random 4)";	// Emitter time
		interval=0.1+(random 0.1);	// Emitter interval

		in="5";
		out="4+(random 4)";
		density="0.1 + (random 0.1)";	// alpha
//		density=1;	// alpha

		cloudletGrowUp="0.5+(random 0.5)";
		cloudletFadeIn="(random 0.5)";
		cloudletDuration="5+(random 5)";	// Particle life
		cloudletFadeOut="5+(random 5)";

		initYSpeed="(random 0.5)";	// Emitter initial vertical acceleration
		cloudletAccY="-(random 1)";	// individual particle vertical acceleration
		cloudletMinYSpeed="-0.1-(random 1)";	// individual particle vertical speed range down
		cloudletMaxYSpeed="0.1+(random 1)";	// individual particle vertical speed range up

		cloudletShape = "cl_water";
		cloudletColor[]={1,1,1,0};
		cloudletAlpha = 0; // not used

		initT = 0;
		deltaT = "0";
		class Table
		{
			class T1 {maxT = 0; color[] = {0.498039,0.572549,0.584314,1};}
		}
};

class CraterDustSmall// Bullet hit
{
	access=3;
		sourceSize = 2;
		size = 2;
		interval = "0.01 +(random .08)";
		cloudletDuration = .5; // time to live (not including fades)
		cloudletAnimPeriod = ".1+(random .1)"; // animation speed
		cloudletSize = 2;	// not used
		cloudletGrowUp = 0; // grow-up time
		cloudletFadeIn = 0; // fade-in time
		cloudletFadeOut = ".2+(random .2)"; // fade-out time
		cloudletAccY = 8;	// vertical acceleration
		cloudletMinYSpeed = 8;	// vertical speed range
		cloudletMaxYSpeed = 8;
		cloudletShape = "cl_water";
		cloudletColor[] = {1, 1, 1, 0};
		cloudletAlpha = ".3 +(random .1)";
		initT = 0;
		deltaT = "5 +(random 15)";
		class Table
		{
			class T0 { maxT = 0; color[]={0.3250000,0.3230000,0.16,0};}
			class T1 { maxT = 4; color[]={0.3250000,0.3230000,0.16,0};}
			  class T2 { maxT = 7; color[] = {.85, .85, .85, 0};}
			  class T3 { maxT = 10; color[] = {.8, .8, .8, 0};}
		}
};