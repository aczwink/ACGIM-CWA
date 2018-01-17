class f16 : A10
{
	scope=public;
	side=1;
	displayName="F-16C";
	model="\Vit_Isr_F16\Vit_Isr_F16C";//TODO
	//TODO
	//weapons[]={f16gun,F16aim120,F16aim9,f16mk84,F16MAV};
	//magazines[]={f16gun,F16aim120,F16aim9,f16mk84,F16MAV};
	picture="\Vit_Isr_F16\pic.paa";//TODO
	icon="\Vit_Isr_F16\icon.paa";//TODO
	soundEngine[]={"\Vit_Isr_F16\sound\eng1.wav",db30,.85};//TODO
	soundDammage[]={"Objects\alarm_loop1",1.200000,1.000000};
	hiddenselections[] ={"AIM1201","AIM1202","AIM91","AIM92","MAV1","MAV2","MAV3","MAV4","MAV5","MAV6","GBU1","GBU2"};
	landingAoa = 7*3.1415/180;
	nightVision=true;
	gearRetracting = false;
	irTarget=1;
	irScanRangeMin=100;
	irScanRangeMax=5000;
	irScanGround=1;
	driverAction = ManActA10Pilot;
	maxSpeed = 1200;
	brakeDistance=150;
	landingspeed =240;
	formationX=20;
	formationZ=2;
	wheelSteeringSensitivity = 3.0;
	ejectSpeed[]={0,40,0};
	aileronSensitivity = .75;
	elevatorSensitivity = 1.3;
	noseDownCoef = 0.4;
	dammageHalf[]={"\Vit_Isr_F16\window.paa","\Vit_Isr_F16\window_b.paa","\Vit_Isr_F16\main.pac","\Vit_Isr_F16\main_b.pac"};//TODO
	dammageFull[]={"\Vit_Isr_F16\window.paa","\Vit_Isr_F16\window_c.paa","\Vit_Isr_F16\main.pac","\Vit_Isr_F16\main_c.paa"};//TODO
	fov=0.5;
	precision=200;
	armor=70;
	cost=2000000;
	type=VAir;
	threat[]={0.4, 0.9, 1};
	animated =1;
	insideSoundCoef = 0.001;
	
	class GunFire: F16_GunSmoke{};//TODO
	class GunClouds: F16_GunSmoke{};//TODO
	class MGunFire: F16_GunSmoke{};//TODO
	class MGunClouds: F16_GunSmoke{};//TODO
	
	class ViewOpticsBase
	{
		initAngleX=0;
		minAngleX=-30;
		maxAngleX=+30;
		initAngleY=0;
		minAngleY=-100;
		maxAngleY=+100;
		initFov=0.7;
		minFov=0.42;
		maxFov=0.85;
	};
	
	class Animations
	{
		class gearR
		{
			type="rotation";
			animperiod = 2;
			selection ="gearR";
			axis = "osa gearR";
			angle0=0;
			angle1=-2.20000;
		};
		
		class gearL
		{
			type="rotation";
			animperiod = 2;
			selection ="gearL";
			axis = "osa gearL";
			angle0=0;
			angle1=2.200000;
		};
		
		class gearA
		{
			type="rotation";
			animperiod = 2;
			selection ="gearA";
			axis = "osa gearA";
			angle0=0;
			angle1=-1.750000;
		};
		
		class doorC
		{
			type="rotation";
			animperiod = 5;
			selection ="doorC";
			axis = "osa doorC";
			angle0= 0;
			angle1= -0.39000;
		};
		
		class doorA
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorA";
			axis = "osa doorA";
			angle0 = 0;
			angle1= 1.60;
		};
		
		class doorR
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorR";
			axis = "osa doorR";
			angle0 = 0;
			angle1= -1.60;
		};
		
		class doorL
		{
			type = "rotation";
			animperiod = 3;
			selection ="doorL";
			axis = "osa doorL";
			angle0 = 0;
			angle1= 1.60;
		};
		
		class GA
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GA";
			axis ="axis GA";
			angle0=0;
			angle1=6.28;
		};
		
		class GL
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GL";
			axis ="axis GL";
			angle0=0;
			angle1=6.28;
		};
		
		class GR
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="GR";
			axis ="axis GR";
			angle0=0;
			angle1=6.28;
		};
		
		class flammen
		{
			type ="rotation";
			animPeriod =.0001;
			selection ="flammen";
			axis ="flammen";
			angle0=0;
			angle1=3.141581;
		};
		
		class eng1
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng1";
			axis ="eng1";
			angle0=0;
			angle1=0.2;
		};
		
		class eng11
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng11";
			axis ="eng11";
			angle0=0;
			angle1=0.2;
		};
		
		class eng2
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng2";
			axis ="eng2";
			angle0=0;
			angle1=0.2;
		};
		
		class eng22
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng22";
			axis ="eng22";
			angle0=0;
			angle1=0.2;
		};
		
		class eng3
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng3";
			axis ="eng3";
			angle0=0;
			angle1=0.2;
		};
		
		class eng33
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng33";
			axis ="eng33";
			angle0=0;
			angle1=0.2;
		};
		
		class eng4
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng4";
			axis ="eng4";
			angle0=0;
			angle1=0.2;
		};
		
		class eng44
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng44";
			axis ="eng44";
			angle0=0;
			angle1=0.2;
		};
		
		class eng5
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng5";
			axis ="eng5";
			angle0=0;
			angle1=0.2;
		};
		
		class eng55
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng55";
			axis ="eng55";
			angle0=0;
			angle1=0.2;
		};
		
		class eng6
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng6";
			axis ="eng6";
			angle0=0;
			angle1=0.2;
		};
		
		class eng66
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng66";
			axis ="eng66";
			angle0=0;
			angle1=0.2;
		};
		
		class eng7
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng7";
			axis ="eng7";
			angle0=0;
			angle1=0.2;
		};
		
		class eng77
		{
			type ="rotation";
			animPeriod =3;
			selection ="eng77";
			axis ="eng77";
			angle0=0;
			angle1=0.2;
		};
	};
	
	class UserActions
	{
		//TODO
		/*class LowerLandingGear
		{
			displayName="Gear Down";
			position="main";
			radius=2
				condition = "this animationPhase ""gearA"" > 0.5 and player in this && (getpos driver this select 2)<50;"
				statement = "[this] exec ""\Vit_Isr_F16\sqs\f16geardn.sqs"""; 
		};
		
		class RaiseLandingGear
		{
			displayName="Gear Up";
			position="main";
			radius=2
				condition = "this animationPhase ""gearA"" < 0.5 and player in this && (getpos driver this select 2)>50;"
				statement = "[this] exec ""\Vit_Isr_F16\sqs\f16gearup.sqs""";
		};
		
		class dooropen
		{
			displayName="Close Cockpit Door";
			position="main";
			radius=5;
			condition="this animationPhase ""doorC"" >=0.5 and !isengineon this"; 
			statement= "[this] exec ""\Vit_Isr_F16\sqs\f16doorclose.sqs""";
		};
		
		class doorclose
		{
			displayName="Open Cockpit Door";
			position="main";
			radius=5;
			condition="this animationPhase ""doorC"" <=0.5 and !isengineon this"; 
			statement= "[this] exec ""\Vit_Isr_F16\sqs\f16dooropen.sqs""";
		};
		
		class BurnerOff
		{
			displayName="AfterBurner Off";
			position="main";
			radius=3;
			condition="this animationPhase ""flammen"" >=0.5 and isengineon this"; 
			statement="this animate [""flammen"", 0]"
		};
		
		class BurnerOn
		{
			displayName="AfterBurner On";
			position="main";
			radius=3;
			condition="this animationPhase ""flammen"" <=0.5 and isengineon this";
			statement="this animate [""flammen"", 1],[this] exec ""\Vit_Isr_F16\sqs\f16turbo_on.sqs"""
		};*/
	};

	class EventHandlers
	{
		//TODO
		/*init = [_this select 0] exec "\Vit_Isr_F16\sqs\f16WEP_C.sqs";
		IncomingMissile = [_this select 0] exec "\Vit_Isr_F16\sqs\f16missile.sqs";
		killed = "_this exec {\Vit_Isr_F16\sqs\f16fire.sqs},_this exec {\Vit_Isr_F16\sqs\F16crash.sqs}";
		hit =[_this select 0] exec "\Vit_Isr_F16\sqs\f16hit.sqs";
		gear="if (_this select 1) then {[_this select 0] exec""\Vit_Isr_F16\sqs\F16Gearup.sqs""} else {[_this select 0] exec ""\Vit_Isr_F16\sqs\F16Geardn.sqs""}";
		fired = " [_this] exec ""\Vit_Isr_F16\sqs\f16wep.sqs"" ";
		engine ="if (_this select 1) then {[_this select 0] exec ""\Vit_Isr_F16\Sqs\F16engineon.sqs""} else {[_this select 0] exec ""\Vit_Isr_F16\Sqs\F16engineoff.sqs""}";*/
	};
};