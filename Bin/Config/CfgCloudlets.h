class CfgCloudlets
{
	access = ACCESS_ADDVALUESONLY;
#ifdef ACGIM_SET_SMOKEEFFECTS_LOW
	#include "Config\CfgCloudlets\Low.h"
#endif

#ifdef ACGIM_SET_SMOKEEFFECTS_HIGH
	#include "Config\CfgCloudlets\High.h"
#endif

	class CraterBlood// Bullet hit person
	{
		access=3;
	sourceSize = 0.01;
	size = ".1 +(random .1)";
	interval = .1;
	cloudletDuration = ".1 +(random .2)";
	cloudletAnimPeriod = .1;
	cloudletSize = 1;
	cloudletGrowUp = ".1 +(random .1)";
	cloudletFadeIn = 0;
	cloudletFadeOut = ".3 +(random .3)";
	cloudletAccY = "0 +(random 2.5)";
	cloudletMinYSpeed = -10;
	cloudletMaxYSpeed = 10;
//	cloudletShape = "cl_basic";
	cloudletShape = "cl_water";
//	cloudletShape = "\SLX_Cloud\FlatSmoke";
	cloudletAlpha = "0.15 +(random 0.05)";
	cloudletColor[] = {1, 1, 1, 0};
	timeToLive=0;	// ??
	initT = 0;	
	deltaT = "1 +(random 10)";	
	class Table
	{
			class T0 { maxT = 0; color[] = {.8, 0, 0, 0};}
			class T1 { maxT = 2; color[] = {.8, .8, .8, .5};}
			class T2 { maxT = 10; color[] = {.8, .8, .8, .2};}
	};
	};
	
	class CraterWater : CraterDustSmall// Bullet hit water
	{
		access = ReadOnlyVerified;
		sourceSize=0.02;
//		size="0.3 +(random .4)";
		size="0.7 +(random 1)";
		interval=0.4;
		cloudletDuration=0.1;
		cloudletAnimPeriod = .3;
		cloudletColor[] = {1, 1, 1, 1};
		cloudletAlpha="0.7 +(random 0.3)";
		cloudletGrowUp="0.01 +(random 0.5)";
		cloudletFadeIn=0;
		cloudletFadeOut="0.2 +(random 0.8)";
		cloudletAccY = "-30 -(random -5)";
		cloudletMinYSpeed="-1 -(random -.5)";
		cloudletMaxYSpeed=100;
//		cloudletShape = "cl_water";
		cloudletShape = "\sjc_models\fx\WaterHit";
		initT = 0;
		deltaT = 0;
		class Table
		{
		class T0 {maxT = 0; color[] = {0.54, 0.69, 0.645, 0};}
		};
	};

	class CraterDustBig : CraterDustSmall
	{
		access=3;
		cloudletShape = "cl_water";
		cloudletDuration=2;
		cloudletAnimPeriod = ".01 +(random .1)";
		cloudletGrowUp=0.2;
		cloudletFadeIn=0.2;
		cloudletFadeOut=1.5;
		cloudletAccY=8;
		cloudletMinYSpeed=2;
		cloudletMaxYSpeed=10;
		cloudletColor[]={0.9,0.9,0.9,0};
	};

	class CloudletsMissile// Missile smoke
	{
		access=3;
		cloudletSize="4 +(random 4)";
		interval=0.01;
		cloudletShape="cl_basic";
		cloudletDuration="0.2 +(random 0.5)";
		cloudletAnimPeriod="1.9+(random 1.5)";
		cloudletGrowUp=".3 +(random .7)";
		cloudletFadeIn=(random 0.02);
		cloudletFadeOut="1 +(random 1)";
		cloudletAccY = "(random 2)";	// vertical acceleration
		cloudletMinYSpeed=-10;
		cloudletMaxYSpeed=10;
		cloudletColor[]={0.8,0.8,0.8,0};
		cloudletAlpha = "0.2 +(random 0.1)";
		initT=0;
		deltaT="500+(random 1000)";
		class Table
		{
			class T0 { maxT = 0; color[] = {0,0,0, 1};}
			class T1 { maxT = 1000; color[] = {.8, .8, .8, 0};}
		};
	};

	class CloudletsMissileManual : CloudletsMissile//???
	{
		interval=0.02;
		cloudletAlpha = "0.03 +(random 0.03)";
		initT=0;
		deltaT="500+(random 1000)";
		class Table
		{
			class T0 { maxT = 0; color[] = {.5, .5, .5, 0};}
			class T1 { maxT = 1000; color[] = {.8, .8, .8, 0};}
		};
	};

	class CloudletsScud : CloudletsMissile// Scud smoke
	{
		cloudletSize=8;
		cloudletColor[]={1,1,1,0};
		cloudletFadeIn=0;
		cloudletDuration=1.5;
		cloudletFadeOut=0.5;
		cloudletGrowUp=1;
		cloudletAccY=0;
		cloudletMinYSpeed=-1000;
		cloudletMaxYSpeed=1000;
		interval=0.02;
		size=8.0;
		sourceSize=1.0;
	};
};