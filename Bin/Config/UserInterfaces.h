class CfgWrapperUI
{
	access=1;

	class Colors
	{
		color1[]={0.0,0.0,0.0,1.0};
		color2[]={0.2,0.2,0.2,1.0};
		color3[]={0.5,0.5,0.5,1.0};
		color4[]={0.6,0.6,0.6,1.0};
		color5[]={0.8,0.8,0.8,1.0};
	};

	class Background
	{
		alpha=0.75;
		texture="background.pac";
	};

	class TitleBar
	{
		alpha=0.3;
		texture="windowname.pac";
	};

	class GroupBox
	{
		alpha=0.2;
	};

	class GroupBox2
	{
		alpha=0.5;
		texture="windowdisplay.pac";
	};

	class Button
	{
		color1[]={0.0,0.0,0.0,0.3};
		color2[]={0.2,0.2,0.2,0.3};
		color3[]={0.5,0.5,0.5,0.3};
		color4[]={0.6,0.6,0.6,0.3};
		color5[]={0.8,0.8,0.8,0.3};
	};

	class Cursors
	{

		class Arrow
		{
			texture="kurzor_arrow";
			width=16;
			height=16;
			hotspotX=0;
			hotspotY=0;
			color[]={0.8,0.8,0.8,1};
		};

		class Track
		{
			texture="kurzor_track";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.7,0.1,0.0,1};
		};

		class Move
		{
			texture="kurzor_move";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.0,0.6,0.0,1};
		};

		class Scroll
		{
			texture="kurzor_scroll";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.8,0.6,0.0,1};
		};
	};
};

class CfgInGameUI
{
	access=1;
	imageCornerElement="cornern.paa";
	colorBackground[]={0,0,0,0.8};
	colorBackgroundCommand[]={0,0,0,0.3};
	colorBackgroundHelp[]={0,0,0,0.2};
	colorText[]={0.8,0.8,0.8,1};

	class SideColors
	{
		colorFriendly[]={0.0,0.6,0.0,1};
		colorEnemy[]={0.7,0.1,0.0,1};
		colorNeutral[]={0.8,0.8,0.8,1};
		colorCivilian[]={0.8,0.8,0.8,1};
		colorUnknown[]={0.8,0.6,0.0,1};
	};

	class IslandMap
	{
		colorFriendly[]={0,0.5,0,1};
		colorEnemy[]={0.5,0,0,1};
		colorNeutral[]={0.5,0.5,0.5,1};
		colorCivilian[]={0,0,1,1};
		colorUnknown[]={0.5,0.5,0,1};
		iconPlayer="you.paa";
		iconCheckpoint="target.paa";
		iconCamera="camera.paa";
		iconSelect="mkrouzek.paa";
		iconSensor="vlajka.paa";
		colorMe[]={0.7,0.1,0.0,1};
		colorPlayable[]={0.7,0,0.7,1};
		colorSelect[]={0.0,0.6,0.0,0.5};
		colorCamera[]={0.1,0.1,0.9,1};
		colorSensor[]={0.1,0.1,0.9,1};
		colorDragging[]={0.8,0.8,0.8,1};
		colorInactive[]={1,1,1,0.6};
		colorCountlines[]={0,0,0,0.33};
		colorCountlinesWater[]={0,0,1,1};
		colorExposureEnemy[]={1.0,0.2,0.2,0.5};
		colorExposureUnknown[]={0.8,0.8,0.2,0.5};
		colorRoads[]={0.35,0.2,0.1,0.8};
		colorGrid[]={0.25,0.25,0.1,0.75};
		colorGridMap[]={0.25,0.25,0.1,0.75};
		colorCheckpoints[]={0.2,0.2,0.2,1.0};
		colorMissions[]={0.5,0.5,0.0,0.5};
		colorActiveMission[]={0.0,0.0,0.0,1.0};
		colorPath[]={0.0,0.0,1,0.9};
		colorInfoMove[]={1.0,1.0,1.0,1.0};
		colorGroups[]={0.0,0.5,0.5,0.5};
		colorActiveGroup[]={0.0,1.0,1.0,1.0};
		colorSync[]={0.0,0.0,1.0,1.0};
		colorDetectorSync="{0,1,0,1}";
		colorLabelBackground[]={0.0,0.0,0.0,1.0};
	};

	class MPTable
	{
		color[]={1,1,1,1};
		colorBg[]={0,0,0,0.75};
		colorSelected[]={1,1,1,0.2};
		colorWest[]={0,1,0,1};
		colorEast[]={1,0,0,1};
		colorCiv[]={0.8,0.8,0.8,1};
		colorRes[]={0.47,0.47,0.94,1};
	};

	class TankDirection
	{
		left=0.04;
		top=0.007;
		width=0.15;
		height=0.195;
		color[]={0.8,0.8,0.8,1};
		colorHalfDammage[]={0.8,0.6,0.0,1};
		colorFullDammage[]={0.7,0.1,0.0,1};
		imageTower="vez_schema.paa";
		imageTurret="T_schema_vez.paa";
		imageGun="T_schema_kanon.paa";
		imageObsTurret="T_schema_velite2.paa";
		imageEngine="T_schema_motor.paa";
		imageHull="T_schema_trup.paa";
		imageLTrack="T_schema_Lpas";
		imageRTrack="T_schema_Ppas";
	};

	class Capture
	{
		colorBackground[]={0,0,0,0.93};
		colorText[]={0.8,0.6,0.0,1};
		colorLine[]={0.8,0.8,0.8,1};
	};

	class Picture
	{
		color[]={0.8,0.8,0.8,1};
		colorProblems[]={0.7,0.1,0.0,1};
		imageBusy="busy.paa";
		imageWaiting="orders.paa";
		imageCommand="execute.paa";
	};

	class Bar
	{
		imageBar="white.pac";
		colorBackground[]={0.2,0.5,0.2,0.5};
		colorGreen[]={0.0,0.6,0.0,0.6};
		colorYellow[]={0.8,0.6,0.0,0.6};
		colorRed[]={0.7,0.1,0.0,0.8};
		colorBlinkOn[]={1,0.2,0.2,0.8};
		colorBlinkOff[]={0.7,0.1,0.0,0.8};
		height=0.01;
	};

	class Messages
	{
		color1[]={0.8,0.6,0.0,1};
		color2[]={0.0,0.6,0.0,1};
		color3[]={0.8,0.8,0.8,1};
	};

	class TacticalDisplay:SideColors
	{
		left=0.24;
		top=0.053;
		width=0.52;
		height=0.1;
		colorCamera[]={0.1,0.1,0.1,0.4};

		class Cursor
		{
			width=0.015;
			height=0.02;
			color[]={0.8,0.8,0.8,1};
		};
	};

	class ProgressFont
	{
		font="SteelfishB64";
	};

	class Compass
	{
		left=0.24;
		top=0.02;
		width=0.52;
		height=0.02;
		color[]={0.8,0.8,0.8,1};
		dirColor[]={0.8,0.8,0.8,1};
		turretDirColor[]={0.8,0.6,0.0,1};
	};

	class Menu
	{
		left=0.78;
		top=0.02;
		width=0.2;
		height=0.28;
		colorChecked[]={0.8,0.6,0.0,1};
		colorEnabled[]={0.8,0.8,0.8,1};
		colorDisabled[]={0.4,0.4,0.4,1};
		hideTime=60;
	};

	class GameInfo
	{
		left=0.78;
		top=0.9;
		width=0.2;
		height=0.08;
	};

	class GroupDir
	{
		image="grouporient.paa";
		left=0.05;
		top=0.62;
		width=0.075;
		height=0.1;
		dimmStartTime=10;
		dimmEndTime=15;
	};

	class PlayerInfo
	{
		colorTime[]={0.8,0.8,0.8,1};
		left=0.02;
		top=0.02;
		width=0.2;
		height=0.28;
		dimmStartTime=5;
		dimmEndTime=10;

		class UnitPicture
		{
			width=0.15;
			height=0.16;
		};

		class Sign
		{
			height=0.03;
			widthSector=0.04;
			widthGroup=0.02;
			widthUnit=0.02;
		};

		class Side
		{
			height=0.072;
			width=0.06;
		};

		class HealthBar
		{
			width=0.12;
		};

		class ArmorBar
		{
			width=0.12;
		};

		class FuelBar
		{
			width=0.12;
		};

		class ExperienceBar
		{
			width=0.12;
			color[]={0.8,0.8,0.8,1};
		};
	};

	class Hint
	{
		dimmStartTime=30;
		dimmEndTime=35;
		sound[]={"ui\hint",3.1622777,1};
	};

	class Chat
	{
		sound[]={"ui\hint",0.3162278,1};
	};

	class GroupInfo
	{
		left=0.02;
		top=0.9;
		width=0.96;
		height=0.08;
		colorIDNone[]={0,0,0,1};
		colorIDNormal[]={0.8,0.8,0.8,1};
		colorIDSelected[]={0.0,0.6,0.0,1};
		colorIDPlayer[]={0.8,0.6,0.0,1};
		imageDefaultWeapons="ivojak";
		imageNoWeapons="\misc\ibezezbrane.paa";
		dimm=0.3;

		class Semaphore
		{
			imageSemaphore="white.pac";
			width=0.0075;
			height=0.01;
			colorHoldFire[]={0.7,0.1,0.0,1};
		};
	};

	class ConnectionLost
	{
		left=0.0;
		top=0.45;
		width=1.0;
		height=0.1;
		font="tahomaB36";
		size=0.03;
		color[]={1.0,0.5,0.25,1.0};
	};

	class Cursor
	{
		aim="W_weapon";
		weapon="W_lock";
		outArrow="UI_sipka.paa";
		select_target="target_active.paa";
		lock_target="target_locked.paa";
		me="circle";
		meColor[]={0.8,0.8,0.8,0.8};
		dimmMe=0.0;
		dimmMeStartTime=5;
		dimmMeEndTime=10;
		dimmCmdStartTime=5;
		dimmCmdEndTime=10;
		select="circle";
		selectColor[]={0.0,0.6,0.0,0.8};
		leader="circle";
		leaderColor[]={0.0,0.6,0.0,0.8};
		mission="M_mission";
		missionColor[]={0.8,0.6,0.0,0.8};
		tactical="T_tactical";
		move="T_basic";
		selected="T_select";
		attack="T_attack";
		getIn="T_getin";
		watch="kurzor_scroll";
		color[]={0.8,0.8,0.8,1};
		colorBackground[]={0,0,0,0.6};
		colorLocked[]={0.7,0.1,0.0,1};
		dimm=0.15;
		activeWidth=0.6;
		activeHeight=0.8;
		activeMinimum=0.05;
		activeMaximum=0.1;
		enemyActiveColor[]={0.7,0.1,0.0,0.7};

		class Sign
		{
			height=0.015;
			widthSector=0.02;
			widthGroup=0.01;
			widthUnit=0.01;
		};
	};
};