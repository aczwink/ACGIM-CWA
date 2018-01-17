/*
Sources:
	http://en.wikipedia.org/wiki/Cessna_182
*/
class Cessna : Plane
{
	scope=2;
	crew="Civilian";
	side=3;
	displayName="Cessna 182 Skylane";
	nameSound="plane";
	accuracy=0.3;
	maxSpeed = 201;
	gearRetracting=0;
	ejectSpeed[]={0,0,0};
	armor=15;
	cost=200000;
	model="cessna182";
	picture="icessna";
	weapons[]={};
	magazines[]={};
	fov=0.5;
	landingAoa="7*3.1415/180";
	driverAction="ManActCessnaPilot";
	cargoAction[]={"ManActCessnaCoPilot","ManActCessnaCargo"};
	soundEngine[]={"Vehicles\plane",0.3162278,1};
	soundEnviron[]={"Objects\noise",0.001,1.0};
	soundServo[]={"Vehicles\gun_elevate",0.01,0.4};
	transportSoldier=3;
	extCameraPosition[]={0,2,-30};
	type=2;
	threat[]={0.1,1,0.7};
	audible=6;
	aileronSensitivity=0.33;
	elevatorSensitivity=0.1;
	noseDownCoef=0.025;
	
	class Reflectors
	{
		class Left
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=0.5;
			brightness=0.25;
		};
		
		class Right
		{
			color[]={0.9,0.8,0.8,1.0};
			ambient[]={0.1,0.1,0.1,1.0};
			position="P svetlo";
			direction="konec P svetla";
			hitpoint="P svetlo";
			selection="P svetlo";
			size=0.5;
			brightness=0.25;
		};
	};
	
	class IndicatorAltRadar
	{
		selection="alt";
		axis="osa_alt";
		angle=-355;
		min=0;
		max=150;
	};
	
	class IndicatorAltRadar2
	{
		selection="alt2";
		axis="osa_alt2";
		angle=-355;
		min=0;
		max=150;
	};
	
	class IndicatorSpeed
	{
		selection="mph";
		axis="osa_mph";
		angle=-300;
		min=0;
		max=90;
	};
	
	class IndicatorVertSpeed
	{
		selection="vert_speed";
		axis="osa_vert_speed";
		angle=-300;
		min=-30;
		max=30;
	};
	
	class IndicatorVertSpeed2
	{
		selection="vert_speed2";
		axis="osa_vert_speed2";
		angle=-300;
		min=-30;
		max=30;
	};
	
	class IndicatorRPM
	{
		selection="rpm";
		axis="osa_rpm";
		angle=-240;
		min=0;
		max=1;
	};
	
	class IndicatorCompass
	{
		selection="kompas";
		axis="osa_kompas";
		angle=360;
		min=-3.1415927;
		max=3.1415927;
	};
	
	class IndicatorWatch
	{
		hour="hodinova";
		minute="minutova";
		axis="osa_time";
		reversed=0;
	};
	
	class IndicatorWatch2
	{
		hour="hodinova2";
		minute="minutova2";
		axis="osa_time2";
		reversed=0;
	};
};