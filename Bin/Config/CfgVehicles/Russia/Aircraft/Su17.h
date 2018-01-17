/*
Sources:
	http://en.wikipedia.org/wiki/Su-17
*/
class Su17 : Plane
{
	scope = SCOPE_PUBLIC;
	crew = "SoldierEPilot";
	picture="\sjc_images\vehicles\su17pic.paa";
	side = SIDE_EAST;
	soundEngine[]={"\sjc_sounds\vehicles\su17engine.wav",db+10,1};
	displayName="Su-17M4 Fitter";
	accuracy = ACCURACY_SU17;
	maneuvrability=15;
	icon = "\sjc_images\vehicles\su17icon.paa";
	formationX=25;
	formationZ=10;
	driverAction = ManActA10Pilot;
	landingSpeed =180;
	maxSpeed = 1860;
	wheelSteeringSensitivity = 2.0;
	brakeDistance=300;
	elevatorSensitivity = 1.3; 
	aileronSensitivity = 0.5; 
	armor = ARMOR_SU17;
	cost = COST_SU17;
	soundLandCrash[]={"\sjc_sounds\vehicles\TireTouch.wav",db+1,1};
	model="\sjc_models\ussr\su17.p3d";
	weapons[] = {"NR30", "UV32", "R60_2", "Kh29"};
	magazines[] = {"NR30", "UV32", "R60_2", "Kh29"};
	fov=0.5;
	hiddenselections[] = {klapa,engineon,rga,rgb,rgc,rgd,rge,rgf,r60a,r60b,num1,num2,num3,num4,lights,light2,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,nap1,nap2};
	type = VEHICLE_AIR;
	threat[]={THREAT_SU17};
	driverOpticsModel="optika_heli_gunner";
	
	class Animations
	{
		class Flight
		{
			type ="rotation";
			animPeriod =1;
			selection ="Flight";
			axis ="os Flight";
			angle0 =0;
			angle1 =1.6;
		};
		
		class Canopy
		{
			type ="rotation";
			animPeriod =5;
			selection ="canopy";
			sound[]={"Vehicles\gun_elevate",10.0,1.000000};
			axis ="os canopy";
			angle0 =0;
			angle1 =.9;
		};
		
		class AftTrigger
		{
			type ="rotation";
			animPeriod =.1;
			selection ="afttrigger";
			axis ="axis_afttrigger";
			angle0 =0;
			angle1 =-.45;
		};
		
		class flareTrigger
		{
			type ="rotation";
			animPeriod =.1;
			selection ="flaretrigger";
			axis ="os flare";
			angle0 =0;
			angle1 =-.45;
		};
		
		class lwlot
		{
			type="rotation";
			animPeriod=4;
			selection="lwlot";
			axis="os lwlot";
			angle0=-.4;
			angle1=0;
		};
		
		class pwlot
		{
			type="rotation";
			animPeriod=4;
			selection="pwlot";
			axis="os pwlot";
			angle0=.4;
			angle1=0;
		};
		
		class frontgear
		{
			type="rotation";
			animPeriod=4;
			selection="predni kolo";
			axis="osa predniho kola";
			angle0=0;
			angle1=-1.8;
		};
		
		class ldor
		{
			type="rotation";
			animPeriod=4;
			selection="ldor";
			axis="os_backgearL";
			angle0=-1.6;
			angle1=0;
		};
		
		class pdor
		{
			type="rotation";
			animPeriod=4;
			selection="pdor";
			axis="os_backgearP";
			angle0=1.6;
			angle1=0;
		};
		
		class backgearL
		{
			type="rotation";
			animPeriod=4;
			selection="backgearL";
			axis="os_backgearL";
			angle0=0;
			angle1=1.64;
		};
		
		class backgearP
		{
			type="rotation";
			animPeriod=4;
			selection="backgearP";
			axis="os_backgearP";
			angle0=0;
			angle1=-1.64;
		};
		
		class lpdoor
		{
			type="rotation";
			animPeriod=4;
			selection="lpdoor";
			axis="osa lpdoor";
			angle0=1.6;
			angle1=0;
		};
		
		class rpdoor
		{
			type="rotation";
			animPeriod=4;
			selection="rpdoor";
			axis="osa rpdoor";
			angle0=-1.6;
			angle1=0;
		};
		
		class LX
		{
			type="rotation";
			animPeriod=6;
			selection="Lx";
			axis="osa lx";
			angle0=0;
			angle1=-0.55;
		};
		
		class RX
		{
			type="rotation";
			animPeriod=6;
			selection="Rx";
			axis="osa rx";
			angle0=0;
			angle1=0.55;
		};
	};
	
	class Reflectors
	{
		class Reflector
		{
			color[]={0.800000,0.800000,1.000000,1.000000};
			ambient[]={0.070000,0.070000,0.070000,1.000000};
			position="L svetlo";
			direction="konec L svetla";
			hitpoint="L svetlo";
			selection="L svetlo";
			size=10.500000;
			brightness=10.000000;
		};
	};
	
	class Viewoptics
	{
		initAngleX=0;
		minAngleX=0;
		maxAngleX=0;
		initAngleY=0;
		minAngleY=0;
		maxAngleY=0;
		initFov=1;
		minFov=9;
		maxFov=9;
	};
	
	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -340;
		min = 0;
		max = 1000;
	};
	
	class IndicatorAltRadar2
	{
		selection = "alt2";
		axis = "osa_alt2";
		angle = -340;
		min = 0;
		max = 1000;
	};
	
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 1000 / 3.6;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -240;
		min = -150;
		max = 150;
	};
	
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -240;
		min = -150;
		max = 150;
	};
	
	/*class UserActions//TODO
	{
		class canopy1
		{
			displayName="Open canopy";
			position="kulomet";
			radius=6;
			condition="(this animationPhase ""canopy"" == 0)  and (speed this < 50)";
			statement="this animate [""canopy"",1];[this] exec ""\TMD_Su17\script\canopy.sqs""";
		};
		
		class canopy2
		{
			displayName="Close canopy";
			position="kulomet";
			radius=6;
			condition="(this animationPhase ""canopy"" == 1)";
			statement="this animate [""canopy"",0]";
		};
		
		class TMD_ABOn
		{
			displayName ="Afteburner On";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" < 0.5 and isengineon this";
			statement = "[this] exec ""\TMD_Su17\script\burner.sqs""; this say ""forsage1su17""";
		};
		
		class TMD_ABOff
		{
			displayName ="Afteburner Off";
			position = "doors";
			radius =10;
			condition = "this animationphase ""afttrigger"" > 0.5";
			statement = "this animate[""afttrigger"", 0]";
		};
		
		class flar1
		{
			displayName="Flares On";
			position="kulomet";
			radius=10;
			condition="(this animationPhase ""flaretrigger"" == 0) and isengineon this"; 
			statement="this animate [""flaretrigger"",1]";
		};
		
		class flar2
		{
			displayName="Flares Off";
			position="kulomet";
			radius=10;
			condition="(this animationPhase ""flaretrigger"" == 1) and isengineon this";
			statement="this animate [""flaretrigger"",0]";
		};
	};*/
	
	/*class EventHandlers////TODO
	{
		gear = "if (_this Select 1) then {[(_this select 0)] exec {\TMD_Su17\script\geardn.sqs}} else {[(_this select 0)] exec {\TMD_Su17\script\gearup.sqs}}";
		Init = "[_this select 0] exec ""\TMD_Su17\script\swingwing.sqs"";[_this select 0] exec ""\TMD_Su17\script\gear.sqs""; [_this select 0] exec ""\TMD_Su17\script\autoburnsnd.sqs"";[_this select 0] exec ""\TMD_Su17\script\drawmissiles.sqs"";[_this select 0] exec ""\TMD_Su17\script\num.sqs"";[_this select 0] exec ""\TMD_Su17\script\lights.sqs""";
		fired="[_this] exec ""\TMD_Su17\script\firemissiles.sqs""";
		killed = "[[0,0,0],[0,0,0],60,3+random 3,_this select 0] exec ""\TMD_Su17\script\destroyed.sqs""";
		incomingMissile = "if ((_this select 0)==(_this select 0)) then {(_this select 0) say ""MissileAlertTMD_Su17""};if ((_this select 0)==(_this select 0)) then { [_this] exec ""\TMD_Su17\script\SpoofMissile.sqs""; [_this] exec ""\TMD_Su17\script\autoflares.sqs""; } ";
	};*/
};