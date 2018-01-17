/*
class WeaponFireGun //Fire a Gun
{
	access=3;
	cloudletAnimPeriod = "0.3+(random 0.3)"; // animation speed, time to wait between frames
	//cloudletSize = "2000000-(random 200000)";
	cloudletSize="2+random 10";
	cloudletAlpha = 1;
	cloudletGrowUp = 0.07;	// grow-up time
	cloudletFadeIn=0;	// fade-in time
	cloudletDuration=0.01;	// time to live (not including fades)
	cloudletFadeOut = "0.1+(random 0.1)";	// fade-out time
	cloudletAccY = 0;	// vertical acceleration
	cloudletMinYSpeed=-100;	// vertical speed range
	cloudletMaxYSpeed=100;
	cloudletShape = "cl_fired";
	cloudletColor[] = {1,1,1,1};
	interval=0.03; // about 10
	size = "10 + (random 10)";	// size of particle
	sourceSize="0.01 + (random 0.03)";	// distance from source for particles to spawn ?
	timeToLive=0;
	initT="0";	// starting time
	deltaT="500 +(random 1000)";	// time to count to during it's life ? 
	
	class Table	// sets colors and advances the animation frame for each row (maybe)
	{
		class T0
		{
			maxT=0;
			color[] = {1,1,1,1};
		};

		class T1
		{
			maxT = 1000;
			color[] = {1,1,1,1};
		};
	};
};
*/
class WeaponFireGun //Fire a Gun
{
   access=3;
   cloudletDuration = 0.02;
   cloudletAnimPeriod=1.000000;
   cloudletSize=1.000000;
   cloudletAlpha=1.000000;
   cloudletGrowUp=0.200000;
   cloudletFadeIn=0.010000;
   cloudletFadeOut=0.500000;
   cloudletAccY=0;
   cloudletMinYSpeed=-100;
   cloudletMaxYSpeed=100;
   cloudletShape="cl_fired";
   cloudletColor[]={1,1,1,0};
   interval=0.010000;
   size=3;
   sourceSize=0.500000;
   timeToLive=0;
   initT=4500;
   deltaT=-3000;
   class Table
   {
      class T0
      {
         maxT=0;
         color[]={0.820000,0.950000,0.930000,0};
      };
      class T1
      {
         maxT=200;
         color[]={0.750000,0.770000,0.900000,0};
      };
      class T2
      {
         maxT=400;
         color[]={0.560000,0.620000,0.670000,0};
      };
      class T3
      {
         maxT=600;
         color[]={0.390000,0.460000,0.470000,0};
      };
      class T4
      {
         maxT=800;
         color[]={0.240000,0.310000,0.310000,0};
      };
      class T5
      {
         maxT=1000;
         color[]={0.230000,0.310000,0.290000,0};
      };
      class T6
      {
         maxT=1500;
         color[]={0.210000,0.290000,0.270000,0};
      };
      class T7
      {
         maxT=2000;
         color[]={0.190000,0.230000,0.210000,0};
      };
      class T8
      {
         maxT=2300;
         color[]={0.220000,0.190000,0.100000,0};
      };
      class T9
      {
         maxT=2500;
         color[]={0.350000,0.200000,0.020000,0};
      };
      class T10
      {
         maxT=2600;
         color[]={0.620000,0.290000,0.030000,0};
      };
      class T11
      {
         maxT=2650;
         color[]={0.590000,0.350000,0.050000,0};
      };
      class T12
      {
         maxT=2700;
         color[]={0.750000,0.370000,0.030000,0};
      };
      class T13
      {
         maxT=2750;
         color[]={0.880000,0.340000,0.030000,0};
      };
      class T14
      {
         maxT=2800;
         color[]={0.910000,0.500000,0.170000,0};
      };
      class T15
      {
         maxT=2850;
         color[]={1,0.600000,0.200000,0};
      };
      class T16
      {
         maxT=2900;
         color[]={1,0.710000,0.300000,0};
      };
      class T17
      {
         maxT=2950;
         color[]={0.980000,0.830000,0.410000,0};
      };
      class T18
      {
         maxT=3000;
         color[]={0.980000,0.910000,0.540000,0};
      };
      class T19
      {
         maxT=3100;
         color[]={0.980000,0.990000,0.600000,0};
      };
      class T20
      {
         maxT=3300;
         color[]={0.960000,0.990000,0.720000,0};
      };
      class T21
      {
         maxT=3600;
         color[]={1,0.980000,0.910000,0};
      };
      class T22
      {
         maxT=4200;
         color[]={1,1,1,0};
      };
   };
};


class WeaponFireMGun : WeaponFireGun{}; //Fire a machine gun

class WeaponCloudsGun
{
	access=3;
	sourceSize="0.01 + (random 0.03)";
	size="2 + (random 2)";
	interval="0.1";
	cloudletAnimPeriod="2 + (random 1)";
	cloudletSize="20";
	cloudletFadeIn="0";
	cloudletGrowUp="0.7 + (random 0.3)";
	cloudletDuration="0.5 + (random 1)";
	cloudletFadeOut="1 + (random 2)";
	cloudletAccY=".1 + (random .5)";
	cloudletMinYSpeed = "-3 - (random -3)";
	cloudletMaxYSpeed="100";
	cloudletShape = "cl_basic";
	cloudletColor[]={0.8,0.8,0.8,0.09};
	//cloudletShape = "cl_water";
	//cloudletColor[]={1,1,1,0};
	cloudletAlpha="0.1 + (random 0.05)";
	density="0";
	initT="0";
	deltaT="500 +(random 1000)";

	class Table
	{
		class T0
		{
			maxT = 0;
			color[] = {0.54,0.56,0.55,1};
		};

		class T1
		{
			maxT = 1000;
			color[] = {0.67,0.72,0.71,0};
		};
	};
};
class WeaponCloudsMGun : WeaponCloudsGun {};

//SJC
class GAU8AvengerGunSmoke : WeaponCloudsMGun
{
	access=3;
	cloudletDuration="0.2 + (random 0.2)";
	cloudletAnimPeriod=0.5;
	cloudletSize="2.7 + (random 0.2)";
	cloudletAlpha=0.5;
	cloudletGrowUp=0.25;
	cloudletFadeIn=0.3;
	cloudletFadeOut="0.7 + (random 0.2)";
	cloudletAccY=0.2;
	cloudletMinYSpeed=-1000;
	cloudletMaxYSpeed=1000;
	cloudletShape = "cl_basic";
	cloudletColor[]={0.8,0.8,0.8,0.09};
	interval=0.02;
	size="2.8 + (random 0.2)";
	sourceSize=0.05;
	timeToLive="0.2 + (random 0.2)";
	density=0;
	initT=0;
	deltaT=0;

	class Table
	{
		class T0
		{
			maxT=4;
			color[]={1,1,1,0};
		};
	};
};