class CfgWorlds
{
	access=1;
	eastSign="east_01.paa";
	westSign="west_01.paa";
	eastFlag="rus_vlajka.pac";
	westFlag="usa_vlajka.pac";
	guerrilaSign="guer_01.paa";
	guerrilaFlag="guer_01.paa";
	initWorld="Intro";
	demoWorld="Demo";

	class GroupNameList
	{
		letters[]={"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","Kilo"};
	};

	class GroupNames
	{

		class Alpha
		{
			name="$STR_CFG_GRPNAMES_ALPHA";
			image="a.paa";
		};

		class Bravo
		{
			name="$STR_CFG_GRPNAMES_BRAVO";
			image="b.paa";
		};

		class Charlie
		{
			name="$STR_CFG_GRPNAMES_CHARLIE";
			image="c.paa";
		};

		class Delta
		{
			name="$STR_CFG_GRPNAMES_DELTA";
			image="d.paa";
		};

		class Echo
		{
			name="$STR_CFG_GRPNAMES_ECHO";
			image="e.paa";
		};

		class Foxtrot
		{
			name="$STR_CFG_GRPNAMES_FOXTROT";
			image="f.paa";
		};

		class Golf
		{
			name="$STR_CFG_GRPNAMES_GOLF";
			image="g.paa";
		};

		class Hotel
		{
			name="$STR_CFG_GRPNAMES_HOTEL";
			image="h.paa";
		};

		class November
		{
			name="$STR_CFG_GRPNAMES_NOVEMBER";
			image="a.paa";
		};

		class Kilo
		{
			name="$STR_CFG_GRPNAMES_KILO";
			image="a.paa";
		};

		class Yankee
		{
			name="$STR_CFG_GRPNAMES_YANKEE";
			image="a.paa";
		};

		class Zulu
		{
			name="$STR_CFG_GRPNAMES_ZULU";
			image="a.paa";
		};

		class Two
		{
			name="$STR_CFG_GRPNAMES_TWO";
			image="a.paa";
		};

		class Three
		{
			name="$STR_CFG_GRPNAMES_THREE";
			image="a.paa";
		};

		class Buffalo
		{
			name="$STR_CFG_GRPNAMES_BUFFALO";
			image="a.paa";
		};

		class Guardian
		{
			name="$STR_CFG_GRPNAMES_GUARDIAN";
			image="a.paa";
		};

		class Convoy
		{
			name="$STR_CFG_GRPNAMES_CONVOY";
			image="a.paa";
		};

		class Fox
		{
			name="$STR_CFG_GRPNAMES_FOX";
			image="a.paa";
		};
	};

	class GroupColorList
	{
		colors[]={"GroupColor1","GroupColor2","GroupColor3","GroupColor4","GroupColor5","GroupColor6","GroupColor7"};
	};

	class GroupColors
	{

		class GroupColor1
		{
			name="$STR_CFG_GRPCOL_BLACK";
			image="black.paa";
		};

		class GroupColor2
		{
			name="$STR_CFG_GRPCOL_RED";
			image="red.paa";
		};

		class GroupColor3
		{
			name="$STR_CFG_GRPCOL_GREEN";
			image="green.paa";
		};

		class GroupColor4
		{
			name="$STR_CFG_GRPCOL_BLUE";
			image="blue.paa";
		};

		class GroupColor5
		{
			name="$STR_CFG_GRPCOL_YELLOW";
			image="yellow.paa";
		};

		class GroupColor6
		{
			name="$STR_CFG_GRPCOL_ORANGE";
			image="orange.paa";
		};

		class GroupColor7
		{
			name="$STR_CFG_GRPCOL_PINK";
			image="pink.paa";
		};

		class GroupColor0
		{
			name="";
			image="";
		};

		class Six
		{
			name="$STR_CFG_GRPNAMES_SIX";
			image="a.paa";
		};
	};

	class East
	{
		access=0;

		class Soldiers
		{
			#include "Config\CfgWorlds\EastSoldiers.h"
		};

		class Women
		{

			class Tmp1
			{
				name="Eva";
				face="Eva";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};
		};
	};

	class West
	{
		class Soldiers
		{
			#include "Config\CfgWorlds\WestSoldiers.h"
		};
		class Women
		{
			class Tmp1
			{
				name="Eva";
				face="Eva";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};
		};
	};

	class Guerrila
	{
		class Soldiers
		{
			#include "Config\CfgWorlds\GuerrilaSoldiers.h"
		};
		class Women
		{
			class Tmp1
			{
				name="Eva";
				face="Eva";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};

			class Tmp2
			{
				name="Kamila";
				face="Kamila";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};

			class Tmp3
			{
				name="Lada";
				face="Lada";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};

			class Tmp4
			{
				name="Lucie";
				face="Lucie";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};

			class Tmp5
			{
				name="Marketa";
				face="Marketa";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};

			class Tmp6
			{
				name="Nada";
				face="Nada";
				glasses="None";
				speaker="Rob";
				pitch=1;
				description="";
			};
		};
	};

	class Civilian
	{
		class Soldiers
		{
			#include "Config\CfgWorlds\CivilianSoldiers.h"
		};
		class Women
		{
			#include "Config\CfgWorlds\CivilianWomen.h"
		};
	};

	#include "Config\CfgWorlds\DefaultWorld.h"
	#include "Config\CfgWorlds\Eden.h"
	#include "Config\CfgWorlds\Abel.h"
	#include "Config\CfgWorlds\Cain.h"
	#include "Config\CfgWorlds\Intro.h"
	#include "Config\CfgWorlds\Noe.h"

	class Demo : Abel
	{
		access=3;
		worldName="\demo\demo.wrp";
		description="Malden - Demo";
		cutscenes[]={"intro"};
	};
};