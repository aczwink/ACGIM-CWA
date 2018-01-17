class Explosion
{
	access=3;
	cloudletDuration="0.25+(random 0.1)";
	cloudletAnimPeriod=0.450000;
	cloudletSize="0.060 +(random 0.15)";
	cloudletAlpha="0.05+(random 0.20000)";
	cloudletGrowUp=0.01000;
	cloudletFadeIn=0.020000;
	cloudletFadeOut=0.4500000;
	cloudletAccY=0.200200000;
	cloudletMinYSpeed="3+(random 3)";
	cloudletMaxYSpeed=7;
	cloudletShape="cl_fire";
	cloudletColor[]={1,1,1,0};
	interval=0.0010000;
	size= "1.5+(random 1)";
	sourceSize= "0.25+(random 0.6500)";
	timeToLive=0;
	initT=0;
	deltaT=4000;
	initYSpeed="3+(random 1.5)";
	density="0.62 + (random 0.8)";

	class Table
	{
		class T1
		{
			maxT=0;
			color[]={1,1,1,0};
		};

		class T2
		{
			maxT=500;
			color[]={1,1,0,0};
		};

		class T3
		{
			maxT=800;
			color[]={0,0,0,0};
		};

		class T4
		{
			maxT=1000;
			color[]={1,1,1,0};
		};

		class T5
		{
			maxT=1800;
			color[]={0.18,0.18,0.18,0};
		};

		class T6
		{
			maxT=2000;
			color[]={0.1,0.1,0.1,0};
		};

		class T7
		{
			maxT=4000;
			color[]={0.25,0.25,0.251,0};
		};
	};
};

class CraterSmoke1
{
	access=3;
	interval=0.0555;
	cloudletAnimPeriod=4.8;
	cloudletSize="1.5+(random 1.5)";
	cloudletAlpha= "0.5 + (random 0.15)";
	cloudletGrowUp=2.75;
	cloudletFadeIn=0.378;
	cloudletDuration="2.4 +(random 3)";
	cloudletFadeOut=3;
	cloudletAccY=-0.120;
	cloudletMinYSpeed=-0.5;
	cloudletMaxYSpeed="1+ (random 2.5)";
	cloudletColor[]={1,1,1,0};
	initT=500;
	deltaT="-50 *  0.8";
	cloudletShape="cl_fired";
	density="0.2+(random 0.72)";
	size="1.0+(random 2)";
	timeToLive=0.15;
	in=0.152;
	out=0.95;
	initYSpeed="1+(random 1.5)";

	class Table
	{
		class T0
		{
			maxT=0;
			color[]={1,1,1,0};
		};

		class T1
		{
			maxT=500;
			color[]={0.500000,0.500000,0.500000,0};
		};
	};
};

class CraterSmoke2
{
	access=3;
	interval=0.125;
	cloudletAnimPeriod=3.8;
	cloudletSize="1.5+(random 1)";
	cloudletAlpha="0.4+(random 0.450)";
	cloudletGrowUp=0.8;
	cloudletFadeIn=0.8;
	cloudletDuration="1.5 +(random 1)";
	cloudletFadeOut=1.2;
	cloudletAccY=-0.500000;
	cloudletMinYSpeed=0;
	cloudletMaxYSpeed=5.5;
	cloudletColor[]={0.345,0.36,0.348,0.15};
	initT=0;
	deltaT=700;
	cloudletShape="cl_fired";
	density=0.9;
	size=1.00;
	timeToLive=0.11;
	in=0;
	out=1.6;
	initYSpeed=0.1;

	class Table
	{
		class T0
		{
			maxT=0;
			color[]={0.345,0.36,0.348,0.15};
		};

		class T1
		{
			maxT=300;
			color[]={0.345,0.36,0.348,0.15};
		};
	};
};

class CraterSmoke3
{
	access=3;
	interval=0.125;
	cloudletAnimPeriod=3.8;
	cloudletSize="1.5+(random 0.5)";
	cloudletAlpha= "(random 0.550)";
	cloudletGrowUp=0.8;
	cloudletFadeIn=0.8;
	cloudletDuration="2.4 +(random 0.2)";
	cloudletFadeOut=1.2;
	cloudletAccY=-0.1500000;
	cloudletMinYSpeed=0.0;
	cloudletMaxYSpeed=0.5;
	cloudletColor[]={0.75,0.75,0.75,0};
	initT=500;
	deltaT="-50 *  0.8";
	cloudletShape="cl_fired";
	density="0.5+(random 0.1)";
	size="random 10.500";
	timeToLive="2.4 +(random 0.1)";
	in=0;
	out=3.6;
	initYSpeed=0.15;

	class Table
	{
		class T0
		{
			maxT=0;
			color[]={0.7,0.7,0.7,0};
		};

		class T1
		{
			maxT=500;
			color[]={0.400000,0.400000,0.400000,0};
		};
	};
};

class CraterDustSmall
{
	access=3;
	interval=0.010000;
	cloudletSize=1;
	cloudletAlpha="random 0.500";
	cloudletDuration="0.20 + (random 0.5)";
	cloudletAnimPeriod=1;
	cloudletGrowUp=0.600000;
	cloudletFadeIn=0;
	cloudletFadeOut=0.600000;
	cloudletAccY=-3.500000;
	cloudletMinYSpeed=3;
	cloudletMaxYSpeed=8;
	cloudletColor[]={0.3250000,0.3210000,0.260000,"random 0.5"};
	initT=0;
	deltaT=1000;
	cloudletShape="cl_basic";
	size="(random 0.4)";
	sourceSize="(random 0.035)";

	class Table
	{
		class T0
		{
			maxT=0;
			color[]={0.3250000,0.3230000,0.16,0.25};
		};

		class T5
		{
			maxT=500;
			color[]={0.32650000,0.3230000,0.160000,0.25};
		};

		class T10
		{
			maxT=1000;
			color[]={0.32650000,0.3230000,0.160000,0.25};
		};
	};
};