/*
Sources:
	http://en.wikipedia.org/wiki/Sikorsky_UH-60_Black_Hawk
In service: late 1980s - present
*/
class USA_MH60L : USA_UH60
{
	displayName="MH-60L Black Hawk";
	nameSound="blackhawk";
	icon="\d4t_files\pics\vehicles\mh60_icon.pac";
	steerAheadSimul=2.0;
	steerAheadPlan=2.0;
	fuelCapacity=220;
	accuracy = ACCURACY_MH60L;
	scope=2;
	irScanRange=2000;
	nightVision=1;
	model="\d4t_files\models\us\vehicles\mh60l.p3d";
	minFireTime=30;
	rotorBig="vrtule_uh_v";
	rotorBigBlend="vrtule_uh_v_bl";
	rotorSmall="vrtule_uh_m";
	rotorSmallBlend="vrtule_uh_m_bl";
	mainRotorSpeed = 1;
	soundEngine[]={"\d4t_files\sounds\vehicles\air\uh60_rotors.wss",3.162278,1.500000};
	driverAction="ManActUH60Pilot";
	commanderAction="ManActUH60Pilot";
	cargoAction[]={"ManActCargo","ManActBAS_MH60Cargo2","ManActBAS_MH60Cargo3","ManActBAS_MH60Cargo4","ManActBAS_MH60Cargo5","ManActBAS_MH60Cargo6","ManActBAS_MH60Cargo7","ManActBAS_MH60Cargo8","ManActBAS_MH60Cargo9","ManActBAS_MH60Cargo10","ManActBAS_MH60Cargo11","ManActBAS_MH60Cargo12"};
	driverCanSee=31;
	GunnerCanSee=31;
	gunnerAction="ManActBAS_MH60Gunner";
	gunnerOpticsModel="optika_empty";
	hasGunner=1;
	weapons[]={"M134Minigun"};
	magazines[]={"M134Minigun"};
	crew = "USA_HelicopterPilot";
	picture="iuh60";
	maxSpeed = 295;
	side=1;
	armor = ARMOR_MH60L;
	cost = COST_MH60L;
	transportSoldier=12;
	type = VEHICLE_AIR;
	threat[]={THREAT_MH60L};
	hiddenSelections[] = {"bas_map","bas_mapev","bas_mapma","bas_mapko","bas_mapdi","bas_mapno","bas_mapid","bas_mapli"};

	class ReloadAnimations
	{
		class M134Minigun
		{
			weapon = "M134Minigun";
			angle0 = 0;
			angle1 = -2 * 3.141592654;
			multiplier = 1000;
			type = rotation;
			animPeriod = 1;
			selection = gatling;
			begin="usti hlavne";
			end="konec hlavne";
		};
	};

	class ViewGunner:ViewGunnerBase
	{
		initAngleY=90;
		minAngleY=30;
		maxAngleY=150;
		initAngleX=0;
		minAngleX=-42;
		maxAngleX=5;
	};

	class Turret:TurretBase
	{
		minElev=-42;
		maxElev=5;
		minTurn=30;
		maxTurn=150;
		soundServo[]={"",0.01,1.0};
	};

	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="osaveze";
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		soundServo[]={};
		minElev=-360;
		maxElev=40;
		minTurn=-110;
		maxTurn=110;
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Reflectors
	{
		class Left
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 1.0;
		};
		class Right
		{
			color[] = {0.8, 0.8, 1.0, 1.0};
			ambient[] = {0.07, 0.07, 0.07, 1.0};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 0.5;
			brightness = 1.0;
		};
	};
	dammageHalf[]={"\d4t_tex\mh60\bas60_glass.paa","\d4t_tex\mh60\bas60_glassb.paa"};
	dammageFull[]={"\d4t_tex\mh60\bas60_glass.paa","\d4t_tex\mh60\bas60_glassc.paa"};
		
	class IndicatorAltRadar
	{
		selection = "alt";
		axis = "osa_alt";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro
	{
		selection = "nm_alt";
		axis = "osa_nm_alt";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed
	{
		selection = "mph";
		axis = "osa_mph";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed
	{
		selection = "vert_speed";
		axis = "osa_vert_speed";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM
	{
		selection = "rpm";
		axis = "osa_rpm";
		angle = -320;
		min = 0;
		max = 12;
	};
	class IndicatorAltRadar2
	{
		selection = "alt2";
		axis = "osa_alt2";
		angle = -360;
		min = 0;
		max = 304;
	};
	class IndicatorAltBaro2
	{
		selection = "nm_alt2";
		axis = "osa_nm_alt2";
		angle = -180;
		min = 0;
		max = 61;
	};
	class IndicatorSpeed2
	{
		selection = "mph2";
		axis = "osa_mph2";
		angle = -350;
		min = 0;
		max = 120;
	};
	class IndicatorVertSpeed2
	{
		selection = "vert_speed2";
		axis = "osa_vert_speed2";
		angle = -300;
		min = -30;
		max = 30;
	};
	class IndicatorRPM2
	{
		selection = "rpm2";
		axis = "osa_rpm2";
		angle = -320;
		min = 0;
		max = 12;
	};
	animated=1;
	class Animations
	{
		class sidedoorl
		{
			type="rotation";
			animPeriod=1;
			selection="sidedoorl";
			axis="axissidedoorl";
			angle0=0.161;
			angle1=0;
		};
		class sidedoorr
		{
			type="rotation";
			animPeriod=1;
			selection="sidedoorr";
			axis="axissidedoorr";
			angle0=-0.161;
			angle1=0;
		};
		class pilotdoorl
		{
			type="rotation";
			animPeriod=1;
			selection="pilotdoorl";
			axis="axispilotdoorl";
			angle0=0;
			angle1=-1.22;
		};
		class pilotdoorr
		{
			type="rotation";
			animPeriod=1;
			selection="pilotdoorr";
			axis="axispilotdoorr";
			angle0=0;
			angle1=1.22;
		};
		class map_X
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markerx";
			axis="bas_mapxaxis";
			angle0=0.0;
			angle1=-0.109;
		};
		class map_Y
		{
			type="rotation";
			animperiod=0.100000;
			selection="bas_markery";
			axis="bas_mapyaxis";
			angle0=0;
			angle1=-0.109;
		};

		class switch3LLight
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch0";
			axis="axisswitch0";
			angle0=0;
			angle1=-1;
		};
		class switch1FRope
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch1";
			axis="axisswitch1";
			angle0=0;
			angle1=-1;
		};
		class switch2Pickup
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch2";
			axis="axisswitch2";
			angle0=0;
			angle1=-1;
		};
		class switch4CLight
		{
			type="rotation";
			animPeriod=0.01;
			selection="bas-switch3";
			axis="axisswitch3";
			angle0=0;
			angle1=-1;
		};
		class tail1
		{
			type="rotation";
			animPeriod=1.5;
			selection="bas-tail";
			axis="axistail";
			angle0=0.785;
			angle1= 0;
		};
	};
	class UserActions
	{
		//TODO
		/*class FastRoperemote
		{
			displayName="Fast Rope Insertion (A)";
			position="axisswitch1";
			radius=5;
			condition="(getpos this select 2)>3 && (player in this) && (driver this != player) && (this animationPhase {switch1FRope} ==1) && !(local this) && (player != leader group player) && (this animationphase {switch2Pickup} <= 0.456)";
			statement="[this,player] exec {\d4t_files\FX\scripts\vehicles\mh60l\rappel.sqs}";
		};
		class FastRoperemoteplusAI
		{
			displayName="Fast Rope Insertion (B)";
			position="axisswitch1";
			radius=5;
			condition="(getpos this select 2)>5 && (player in this) && (driver this != player) && (this animationPhase {switch1FRope} ==1) && !(local this) && (player == leader group player) && (this animationphase {switch2Pickup}<= 0.456)";
			statement="[this,player] exec {\d4t_files\FX\scripts\vehicles\mh60l\rappel2.sqs}";
		};
		class MapFastRope
		{
			displayName="Fast Rope Insertion (C)";
			position="axisswitch1";
			radius=2000;
			condition="(player != driver this) && (getpos this select 2)>5 && (this animationPhase {switch1FRope} ==0) && (player == leader this) && (local this) && (count ((units group player) - (crew this)) < count (((units group player) - [driver this]) - [gunner this])) && this animationphase {switch2Pickup}<= 0.456";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\maprappel.sqs}; this animate [{switch1Frope}, 0.9] ";
		};
		class MapFastRopeNonGroup
		{
			displayName="Fast Rope Insertion (D)";
			position="axisswitch1";
			radius=2000;
			condition="(player != driver this) &&(getpos this select 2)>3 && (player == leader group player) && (group this != group player) && (count ((units group player) - (crew this)) < count (((units group player) - [driver this]) - [gunner this]))&& (this animationPhase {switch1FRope} ==0) && (gunner this != player) && (this animationphase {switch2Pickup}<= 0.456)&&(local this)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\maprappel.sqs}; this animate [{switch1FRope}, 0.9]";
		};
		class PlayerdriverRope
		{
			displayName="Fast Rope Insertion (For Troops in Cargo)";
			position="axisswitch1";
			radius=5;
			condition="(player == leader group player) && (player == driver this) && (this animationPhase {switch1FRope} ==1) && (count (crew this) >2) && (this animationPhase {switch2pickup}<= 0.456)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\ALLROPE.sqs}";
		};
		class cancelfastrope
		{
			displayName="Cancel Fast Rope Insertion";
			position="axisswitch1";
			radius=1000;
			condition="(player == leader group this or (player == leader group player && player in this)) && (this animationPhase {switch1FRope} ==0.9) && (local this)";
			statement="this animate [{switch1FRope}, 0]";
		};
		class 60HoldPos
		{
			displayName="Hold Position (For Fast Roping & Pickup)";
			position="axisswitch1";
			radius=5;
			condition="(abs(speed this)<50) &&(getpos this select 2)<30 && ((getpos this select 2)>5) && (player == driver this) && (this animationphase {switch1FRope} == 0) && (local this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\holdpos.sqs};this animate [{switch1FRope}, 0.95]";
		};
		class 60CancelHoldPos
		{
			displayName="Cancel Hold Position";
			position="axisswitch1";
			radius=5;
			condition="(player == driver this) && (this animationphase {switch1FRope} == 0.95 || this animationphase {switch1FRope} == 1) && (local this)";
			statement="this animate [{switch1FRope}, 0]";
		};
		class 60FastLANDER
		{
			displayName="ORDER: Land MH60L";
			position="axisswitch1";
			radius=5;
			condition="(player in this)&&((getpos this select 2)>5) && (isengineon this) &&  (player == leader this) && !(player == driver this) && (this animationPhase {switch1FRope} == 0) && (this animationphase {switch2Pickup}<= 0.1) && (local this)";
			statement="commandstop this; this land {land}";
		};
		class 60Pickupday
		{
			displayName="RADIO: MH60L Extraction";
			position="axisswitch1";
			radius=100000;
			condition="(daytime >5 && daytime <18)&& (local this) && ((player distance this) >50) && (player == leader group this) &&(vehicle player == player)&& (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1)&& !(isnull driver this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastext.sqs}";
		};
		class 60Pickupnight
		{
			displayName="RADIO: MH60L Extraction";
			position="axisswitch1";
			radius=100000;
			condition="(daytime <=5 ||daytime >=18)&& (local this) && ((player distance this) >50) && (player == leader group this) &&(vehicle player == player)&& (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1)&& !(isnull driver this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastnightext.sqs}";
		};
		class Dropoff
		{
			displayName="Rapid Insertion";
			position="axisswitch1";
			radius=5;
			condition="((getpos driver this select 2)>30) && (isengineon this) && (player == leader group this) && (player in this) &&  (driver this != player) && (this animationPhase {switch1FRope} == 0) && (this animationPhase {switch2Pickup}<= 0.1) && (local this)";
			statement="[this] exec {\d4t_files\FX\scripts\vehicles\mh60l\fastins.sqs}; this animate [{switch1Frope}, 0.9] ";
		};
		class 60NewGunner
		{
			displayName="Mount Door Gun";
			position="axisswitch1";
			radius=4;
			condition="(driver this != player) && (!(alive gunner this) or (isnull gunner this)) && (player in this) && (local this)";
			statement="this say ""BAS_60Buckle"";player action [{getout},this]; player moveingunner this";
		};
		class 60gunnertocargo
		{
			displayName="Move to Cargo Seat";
			position="axisswitch1";
			radius=5;
			condition="(gunner this == player) && (local this) && ((count crew this) <= 10)";
			statement="this say ""BAS_60Buckle"";player action [{getout},this]; player moveincargo this";
		};
		class 60DropRopeLadder
		{
			displayName="Lower Rope Ladder";
			position="axisswitch1";
			radius=5;
			condition="(driver this == player) && (this animationphase {switch1FRope} ==1) && (this animationphase {switch2Pickup} == 0)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\ladder.sqs};this animate [{switch2Pickup},1]";
		};
		class 60RaiseRopeLadder
		{
			displayName="Raise Rope Ladder";
			position="axisswitch1";
			radius=5;
			condition="(driver this == player) && (this animationphase {switch2Pickup} == 1)";
			statement="this animate [{switch2Pickup},0]";
		};
		class 60LadderPickupAI
		{
			displayName="ORDER: Board MH60L (AI)";
			position="axisswitch1";
			radius=1000000;
			condition="(player == driver this) && (this animationphase {switch1FRope} ==1) && (this animationphase {switch2Pickup} == 1) && (player == leader group player)&& count((units group player)-(crew this))>=1";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\AIboard.sqs}";
		};
			class 60ClamberAboard
		{
			displayName="CLIMB ABOARD MH60L";
			position="axisswitch1";
			radius=5;
			condition="!(player in this) && (this animationphase {switch2Pickup} == 1)&& ((player distance this) < 4.5)";
			statement="player moveincargo this";
		};
		class 60Roofrescue
		{
			displayName="RADIO: MH60L Ladder Evac.";
			position="axisswitch1";
			radius=1000000;
			condition="(vehicle player == player)&&(alive driver this) && (local this) && !(player in this)&& (player == leader this) && (this animationphase {switch1FRope}==0) && (this animationphase {switch2Pickup} == 0) && ((player distance this)>20)";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\roofpickup.sqs};this animate [{switch2Pickup},0.5]";
		};
		class 60CANCELRoofrescue
		{
			displayName="Cancel Ladder Evac.";
			position="axisswitch1";
			radius=1000000;
			condition="!(player == driver this) && (local this) && (player == leader this) && (this animationphase {switch2Pickup} >= 0.5)";
			statement="this animate [{switch2Pickup},0]";
		};
		class 60CabinLightON
		{
			displayName="Cabin Light ON";
			position="axisswitch1";
			radius=5;
			condition=" (daytime <=6 ||daytime >=18)  && (player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch4CLight} == 0)";
				statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\Cabin.sqs};this animate [{switch4CLight},1]";
		};
		class 60CabinLightOFF
		{
			displayName="Cabin Light OFF";
			position="axisswitch1";
			radius=5;
			condition="(player in this)&&((player == driver this) ||(player == leader group player))&& (this animationPhase {switch4CLight}==1)";
			statement="this animate [{switch4CLight},0]";
		};
		class 60LandingLightON
		{
			displayName="Landing Light ON";
			position="axisswitch1";
			radius=5;
			condition="(daytime <=6 ||daytime >=18)  && (player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch3LLight} == 0) && (getpos this select 2)<40 && (speed this)<100";
			statement="this exec {\d4t_files\FX\scripts\vehicles\mh60l\Landing.sqs};this animate [{switch3LLight},1]";
		};
		class 60LandingLightOFF
		{
			displayName="Landing Light OFF";
			position="axisswitch1";
			radius=5;
			condition="(player in this) && (player == driver this ||player == leader group player)&& (this animationPhase {switch3LLight} == 1)";
			statement="this animate [{switch3LLight},0];this action [{light off}] ";
		};*/
	};

	class EventHandlers
	{
		//TODO
		/*init="_this select 0 exec {\d4t_files\FX\scripts\vehicles\mh60l\BAS_60init.sqs}";
		engine="if (_this select 1) then {[_this select 0] exec {\d4t_files\FX\scripts\vehicles\mh60l\BAS_global.sqs}}";
		incomingMissile="if ((_this select 0)==(_this select 0)) then {[_this] exec {\d4t_files\FX\scripts\vehicles\mh60l\EastCM.sqs},[_this] exec {\d4t_files\FX\scripts\vehicles\mh60l\WestCM.sqs},[_this select 0] exec {\d4t_files\FX\scripts\vehicles\mh60l\flares.sqs}}";
		fired="if (_this select 1=={BAS_60M134}) then {_this exec {\d4t_files\FX\scripts\vehicles\mh60l\brasspos.sqs}}";
		hit="if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\d4t_files\FX\scripts\vehicles\mh60l\Jammer.sqs}}";
		getin="_this exec {\d4t_files\FX\scripts\vehicles\mh60l\openDoors.sqs}";
		killed="_this exec {\d4t_files\FX\scripts\vehicles\mh60l\fire.sqs}";*/
	};
};