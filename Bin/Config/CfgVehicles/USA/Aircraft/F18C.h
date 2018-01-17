/*
Sources:
	http://en.wikipedia.org/wiki/McDonnell_Douglas_F/A-18_Hornet
In service: 1987-present
*/
class USA_F18C : Plane
{
	scope = SCOPE_PUBLIC;
	picture="\sjc_images\vehicles\f18pic.paa";
	icon="\sjc_images\vehicles\f18icon.paa";
	model="\sjc_models\usa\f18.p3d";
	displayName="F/A-18C Hornet (USMC)";
	precision = 200;
	brakeDistance = 600;
	maxSpeed = 1915;
	landingSpeed = 240;
	gearRetracting = false;
	wheelSteeringSensitivity = 1.2;
	aileronSensitivity = 0.25;
	elevatorSensitivity = 0.80;
	flapsFrictionCoef = 1.5;
	side=1;
	crew = "USA_AircraftPilot";
	driveriscommander=1;
	driverAction = ManActA10Pilot;
	camouflage=10;
	audible=5;
	accuracy = ACCURACY_F18C;
	armor = ARMOR_F18C;
	cost = COST_F18C;
	fov=0.5;
	type = VEHICLE_AIR;
	threat[]={THREAT_F18C};
	irScanRange=5500;
	irTarget=1;
	irScanGround=1;
	laserScanner=1;
	nightVision=1;
	soundEnviron[]= {"\sjc_sounds\vehicles\env.ogg",db+30,1};
	soundEngine[]={"\sjc_sounds\vehicles\f18engine.ogg",db+10,1};
	weapons[]={"M61Vulcan_578", "Mk83", "CBU87"};
	magazines[]={"M61Vulcan_578", "Mk83", "CBU87"};
	animated=true;
	hiddenselections[]={"lkhklapka2","lkh klapka","pkhklapka2","pkh klapka","cone1","cone2","cone3","cone4","cone5","cone6","cone7","cone8","cone9", "cone10","cone11","cone12",};
	
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -45;
		min = 0;
		max = 800;
	};
	
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -20;
		min = 0;
		max = 1.2;
	};
	
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -60;
		min = -90;
		max = 90;
	};
	
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -45;
		min = 0;
		max = 900;
	};
	
	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 304;
	};
	
	class ViewPilotBase
	{
		initAngleX=5;
		minAngleX=-60;
		maxAngleX=60;
		initAngleY=0;
		minAngleY=-120;
		maxAngleY=120;
		initFov=0.550000;
		minFov=0.320000;
		maxFov=0.850000;
	};
	
	class ViewPilot: ViewPilotBase {};
	
	class Animations
	{
		class CanopyAnim
		{
			type="rotation";
			animPeriod=4.266;
			selection="canopy";
			axis="osa_canopy";
			angle0=0;
			angle1=-0.942474;
		};
		
		class FrontGearAnim
		{
			type="rotation";
			animPeriod=2;
			selection="FrontGear";
			axis="osa_FrontGear";
			angle0=0;
			angle1=-1.745323;
		};
		
		class lgflanim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgfl";
			axis="osa_lgfl";
			angle0=0;
			angle1=-1.500977;
		};
		
		class lgfranim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgfr";
			axis="osa_lgfr";
			angle0=0;
			angle1=1.500977;
		};
		
		class lgfl2anim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgfl2";
			axis="osa_lgfl2";
			angle0=0;
			angle1=-1.658056;
		};
		
		class leftgearanim
		{
			type="rotation";
			animPeriod=2;
			selection="leftgear";
			axis="osa_leftgear";
			angle0=0;
			angle1=-1.919855;
		};
		
		class rightgearanim
		{
			type="rotation";
			animPeriod=2;
			selection="rightgear";
			axis="osa_rightgear";
			angle0=0;
			angle1=1.919855;
		};
		
		class lgorlanim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgorl";
			axis="osa_lgorl";
			angle0=0;
			angle1=-1.483524;
		};
		
		class lgorranim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgorr";
			axis="osa_lgorr";
			angle0=0;
			angle1=-1.483524;
		};
		
		class lgrlanim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgrl";
			axis="osa_lgrl";
			angle0=0;
			angle1=1.500977;
		};
		
		class lgrranim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgrr";
			axis="osa_lgrr";
			angle0=0;
			angle1=1.500977;
		};
		
		class lgrl2anim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgrl2";
			axis="osa_lgrl";
			angle0=0;
			angle1=1.500977;
		};
		
		class lgrr2anim
		{
			type="rotation";
			animPeriod=3.5;
			selection="lgrr2";
			axis="osa_lgrr";
			angle0=0;
			angle1=1.500977;
		};
		
		class warnanim
		{
			type="rotation";
			animPeriod=0.25;
			selection="warn";
			axis="osa_warn";
			angle0=0;
			angle1=0.017453;
		};
		
		class hookanim
		{
			type="rotation";
			animPeriod=3.8;
			selection="hook";
			axis="osa_hook";
			angle0=0;
			angle1=-1.047194;
		};
		
		class lwinganim
		{
			type="rotation";
			animPeriod=12.167;
			selection="lwing";
			axis="osa_lwing";
			angle0=0;
			angle1=-1.919855;
		};
		
		class rwinganim
		{
			type="rotation";
			animPeriod=12.167;
			selection="rwing";
			axis="osa_rwing";
			angle0=0;
			angle1=1.919855;
		};
		
		class lkhklapka2anim
		{
			type="rotation";
			animPeriod=12.167;
			selection="lkhklapka2";
			axis="osa_lkhklapka2";
			angle0=0;
			angle1=1.919855;
		};
		
		class pkhklapka2anim
		{
			type="rotation";
			animPeriod=12.167;
			selection="pkhklapka2";
			axis="osa_pkhklapka2";
			angle0=0;
			angle1=-1.919855;
		};
		
		class BrakeAnim
		{
			type="rotation";
			animPeriod=3;
			selection="brake";
			axis="osa_brake";
			angle0=0;
			angle1=0.872661;
		};
		
		class jammeranim
		{
			type="rotation";
			animPeriod=2.0;
			selection="jammer";
			axis="osa_jammer";
			angle0=0;
			angle1=-0.785395;
		};
	};
	
	class UserActions
	{
		//TODO
		/*class CBUMenu
		{
			displayName="Setup CBU";
			position="cockpit";
			radius=3;
			condition="avgRADCBUMenu and player in this";
			statement="[] exec ""\Rad_F18\scripts\CBUSetup.sqs""";
		};
		
		class RadarJammerOn
		{
			displayName="ALQ-165 Jammer On";
			position="cockpit";
			radius=3;
			condition="(this animationPhase ""jammeranim""<.5) and (player in this) and (avgRADRadarJammer>0)";
			statement="[this] exec ""\Rad_F18\scripts\jammer.sqs""";
		};
		
		class RadarJammerOff
		{
			displayName="ALQ-165 Jammer Off";
			position="cockpit";
			radius=3;
			condition="(this animationPhase ""jammeranim"">.5) and (player in this)";
			statement="this Animate [""jammeranim"", 0]";
		};
		class OpenCanopy
		{
			displayName="Open Canopy";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""CanopyAnim"" < 0.5 and player in this and speed this <= 20";
			statement="[this, true] exec ""\Rad_F18\scripts\canopyctrl.sqs""";
		};
		
		class CloseCanopy
		{
			displayName="Close Canopy";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""CanopyAnim"" > 0.5 and player in this";
			statement="[this, false] exec ""\Rad_F18\scripts\canopyctrl.sqs""";
		};
		
		class EjectSeat
		{
			displayName="Eject";
			position="cockpit";
			radius=3;
			condition="agvRADEjectAction and player in this and speed this > 5";
			statement="[this] exec ""\Rad_F18\scripts\ejectaction.sqs""";
		};

		class RaiseGear
		{
			displayName="Gear up";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""FrontGearAnim"" <= 0.1 and player in this and speed this > 5";
			statement="[this, false] exec ""\Rad_F18\scripts\gearctrl.sqs""";
		};
		
		class LowerGear
		{
			displayName="Gear down";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""FrontGearAnim"" >= 0.9 and player in this and getpos this select 2 <= 100";
			statement="[this, true] exec ""\Rad_F18\scripts\gearctrl.sqs""";
		};
		
		class raisehook
		{
			displayName="Raise Arrester Hook";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""hookanim"" >= 0.5 and player in this";
			statement="[this, false] exec ""\Rad_F18\scripts\hookctrl.sqs""";
		};
		
		class lowerhook
		{
			displayName="Lower Arrester Hook";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""hookanim"" < 0.5 and player in this and getpos this select 2 <= 100";
			statement="[this, true] exec ""\Rad_F18\scripts\hookctrl.sqs""";
		};
		
		class foldwingsup
		{
			displayName="Fold Wings Up";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""lwinganim"" < 0.5 and player in this and speed this <= 20";
			statement="[this, true] exec ""\Rad_F18\scripts\wingctrl.sqs""";
		};
		
		class foldwingsdown
		{
			displayName="Fold Wings Down";
			position="cockpit";
			radius=3;
			condition="this animationPhase ""lwinganim"" >= 0.5 and player in this";
			statement="[this, false] exec ""\Rad_F18\scripts\wingctrl.sqs""";
		};*/
	};
	
	class eventhandlers
	{
		//TODO
		/*init  = "if (alive (_this Select 0)) then {[_this select 0, true] exec ""\Rad_F18\scripts\messagemgr.sqs""}";
		getin = "if (alive (_this Select 0)) then {[_this select 0, false, _this select 2] exec ""\Rad_F18\scripts\messagemgr.sqs""}";
		incomingMissile = "[_this select 0, _this Select 1, _this Select 2] exec ""\Rad_F18\scripts\inmissile.sqs""";
		fired = "[_this Select 0, _this Select 1, _this Select 2, _this Select 3, _this Select 4] exec ""\Rad_F18\scripts\fired.sqs""";
		fuel  = "if ((count (crew (_this Select 0)) == 0)) then {[(_this Select 0), false] exec ""\Rad_F18\scripts\aleronctrl.sqs""}";*/
	};
};