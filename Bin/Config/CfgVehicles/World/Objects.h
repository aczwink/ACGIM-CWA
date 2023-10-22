class FlagCarrier : Strategic
{
	scope=2;
	vehicleClass="Objects";
	icon="vlajka";
	displayName="$STR_DN_FLAG";
	simulation="flagcarrier";
	model="vlajkstozar.p3d";
	mapSize=5;
};

class Danger : FlagCarrier
{
	model="Danger!.p3d";
	displayName="$STR_DN_DANGER";
	mapSize=0.7;
	accuracy=0.2;
	destrType=DESTRUCT_BUILDING;
};

class Fire : NonStrategic
{
	scope=2;
	simulation="fire";
	sound="Fire";
	vehicleClass="Objects";
	icon="Unknown_object";
	model="ohniste";
	displayName="$STR_DN_FIRE";
	accuracy=0.2;
	typicalCargo[]={};
	mapSize=1.2;
	cost=0;
	armor=20;

	//New Smoke
	/*class Smoke
	{
		interval=0.01;
		cloudletDuration=0.9;
		cloudletAnimPeriod=1.0;
		cloudletSize=0.1;
		cloudletAlpha=0.8;
		cloudletGrowUp=0.4;
		cloudletFadeIn=0.0;
		cloudletFadeOut=5.0;
		cloudletAccY=-0.1;
		cloudletMinYSpeed=0.3;
		cloudletMaxYSpeed=1.5;
		cloudletShape="cl_basic";
		cloudletColor[]={1,1,1,0};
		initT=1000;
		deltaT=-500;
		density=0.5;
		size=0.1;
		initYSpeed=1.7;
		timeToLive=1.00000002004088E+20;
		in=0.0;
		out=0.0;

		class Table
		{
			class T1
			{
				maxT=0;
				color[]={0.8,0.8,0.8,1};
			};

			class T2
			{
				maxT=900;
				color[]={0.3,0.3,0.3,1};
			};

			class T3
			{
				maxT=1000;
				color[]={1,0.5,0,0.5};
			};
		};
	};

	class Light
	{
		color[]={1.0,0.5,0.0,1.0};
		ambient[]={0.3,0.15,0.0,1.0};
		brightness=0.08;
		shape="koulesvetlo";
		size=0.3;
		position="ohniste";
	};*/
	class Smoke
	{
		timeToLive=1.00000002004088E+20;
		in=10.0;
		out=20.0;

		interval=0.09;
		density=0.5;
		size=0.15;
		cloudletSize="1+(random .5)";
		cloudletGrowUp="4+(random 1)";
		cloudletFadeIn=0.0;
		cloudletDuration=0.9;
		cloudletFadeOut="5+(random 1)";
		initYSpeed=1.7;
		cloudletAccY=0.1;
		cloudletMinYSpeed=0.3;
		cloudletMaxYSpeed="3+(random 1)";
		cloudletShape="cl_basic";
		cloudletColor[]={1,1,1,0};
		cloudletAlpha=0.8;
		cloudletAnimPeriod=3;
		initT=1000;
		deltaT=-500;
		
		class Table
		{
			class T1
			{
				maxT=0;
				color[]={0.4,0.4,0.4,1};
			};
			
			class T2
			{
				maxT=900;
				color[]={0.5,0.5,0.5,1};
			};
			
			class T3
			{
				maxT=1000;
				color[]={1,0.5,0,0.7};
			};
		};
	};
	class Light
	{
		shape="koulesvetlo";
		position="ohniste";
		color[] = {0.1, 0.044, 0, 0.8};
		ambient[] = {0.002, 0.0008,0,1};
		size = 0.001;
		brightness = "0.2 + (random 0.065)";
	};
};

class Target : Strategic
{
	scope=2;
	destrType=DESTRUCT_TREE;
	side=3;
	icon="Unknown_object";
	model="terc";
	accuracy=0.2;
	cost=0;
	armor=10;
};

class TargetE : Target
{
	scope=2;
	vehicleClass="Objects";
	displayName="$STR_DN_TARGET_EAST";
	accuracy=1000;
	mapSize=0.8;
};

class Grave : Strategic
{
	scope=2;
	model="hrobecek.p3d";
	displayName="$STR_DN_GRAVE";
	accuracy=1000;
	icon="Unknown_object";
	typicalCargo[]={};
	destrType = DESTRUCT_TENT;
	irTarget=0;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	cost=0;
	armor=20;
	mapSize=6.4000001;
};

class GraveCross1 : Grave
{
	model="hrobecek_krizek1.p3d";
	displayName="$STR_DN_GRAVE_CROSS_1";
};

class GraveCross2 : Grave
{
	model="hrobecek_krizek2.p3d";
	displayName="$STR_DN_GRAVE_CROSS_2";
};

class GraveCrossHelmet : Grave
{
	model="hrobecek_krizekhelma.p3d";
	displayName="$STR_DN_GRAVE_CROSS_HELMET";
};

class Body : Strategic
{
	scope=2;
	mapSize=0.7;
	model="Mrtvola_Army1.p3d";
	displayName="$STR_DN_BODY";
	accuracy=0.3;
	transportFuel=0;
	destrType=DESTRUCT_ENGINE;
	icon="Unknown_object";
	typicalCargo[]={};
	irTarget=0;
	transportAmmo=0;
	transportRepair=0;
	cost=0;
	armor=20;
};

class Fence : NonStrategic
{
	scope=2;
	vehicleClass="Objects";
	icon="Unknown_object";
	model="pytle_BSL";
	displayName="$STR_DN_FENCE";
	accuracy=0.2;
	typicalCargo[]={};
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	cost=0;
	armor=200;
	mapSize=3.3;
};

class FenceWood : Fence
{
	model="pytle";
	displayName="$STR_DN_FENCE_WOOD";
	mapSize=2.4000001;
	accuracy=1000;
};

class Wire : Fence
{
	model="Barbedwire.p3d";
	displayName="$STR_DN_WIRE";
	accuracy=0.3;
	mapSize=5.5;
};

class WireFence : Wire
{
	model="plot_provizorni.p3d";
	displayName="$STR_DN_FENCE_WIRE";
};

class Barrels : BarrelBase
{
	scope=2;
	model="Barels.p3d";
	displayName="$STR_DN_BARRELS";
	transportFuel=400;
};

class Barrel1 : BarrelBase
{
	scope=2;
	model="Barel1.p3d";
	displayName="$STR_DN_BARREL_RED";
};

class Barrel2 : BarrelBase
{
	scope=2;
	model="Barel2.p3d";
	displayName="$STR_DN_BARREL_BROWN";
};

class Barrel3 : BarrelBase
{
	scope=2;
	model="Barel4.p3d";
	displayName="$STR_DN_BARREL_WHITE";
};

class Barrel4 : BarrelBase
{
	scope=2;
	model="Barel3.p3d";
	displayName="$STR_DN_BARREL_WHITE";
};

class Table : Thing
{
	scope=2;
	simulation="thing";
	model="stulsuplik_proxy.p3d";
	displayName="$STR_DN_TABLE";
	transportFuel=0;
	mapSize=0.7;
	accuracy=0.2;
	destrType=DESTRUCT_BUILDING;
	cost=0;
};

class Tablemap : Table
{
	model="stulsuplikmapa.p3d";
	displayName="$STR_DN_TABLEMAP";
};

class Chair : Table
{
	model="Zidle.p3d";
	displayName="$STR_DN_CHAIR";
};

class ChairHangar : Chair
{
	model="Hangar_zidle.p3d";
	displayName="$STR_DN_CHAIR_HANGAR";
};

class ChairX : Chair
{
	model="zidle_x.p3d";
	displayName="$STR_DN_CHAIR_X";
};

class ChairSmall : Chair
{
	model="Zidlicka.p3d";
	displayName="$STR_DN_CHAIR_SMALL";
};

class Phone : Table
{
	model="hangar_telefon.p3d";
	displayName="$STR_DN_PHONEHANG";
};

class Camera1 : Table
{
	model="betacam.p3d";
	displayName="$STR_DN_CAMERA";
};

class Computer : Table
{
	model="PC.p3d";
	displayName="$STR_DN_COMPUTER";
};

class VideoTable : Table
{
	model="televizesvideem.p3d";
	displayName="$STR_DN_VIDEO";
};

class TablePub : Table
{
	model="stul_hospodax.p3d";
	displayName="$STR_DN_TABLE_PUB";
};

class Radio : Table
{
	model="radio.p3d";
	displayName="$STR_DN_RADIO";
};

class Crawling : Strategic
{
	scope=2;
	irTarget=0;
	mapSize=0.7;
	model="podlejzacka.p3d";
	displayName="$STR_DN_CRAWLING";
	accuracy=0.3;
	transportFuel=0;
	destrType=DESTRUCT_BUILDING;
	coefInside=0.5;
	coefInsideHeur=0.8;
	icon="Unknown_object";
	typicalCargo[]={};
	transportAmmo=0;
	transportRepair=0;
	cost=0;
	armor=20;
};

class ExcerciseTrack : Crawling
{
	displayName="$STR_DN_TRAINING_2";
	model="prolejzacka.p3d";
};

class ExcerciseTrack2 : Crawling
{
	displayName="$STR_DN_TRAINING_3";
	model="prebehlavka.p3d";
};

class ExcerciseTrack3 : Crawling
{
	displayName="$STR_DN_TRAINING_4";
	model="obihacka.p3d";
};

class Paleta1 : PaletaBase
{
	scope=2;
	model="PaletaA.p3d";
	displayName="$STR_DN_PALLET_A";
};

class Paleta2 : PaletaBase
{
	scope=2;
	model="PaletyC.p3d";
	displayName="$STR_DN_PALLETS_C";
};

class Camp : Strategic
{
	scope=2;
	icon="Unknown_object";
	model="stan";
	displayName="$STR_DN_TENT";
	accuracy=0.2;
	typicalCargo[]={};
	destrType=DESTRUCT_TENT;
	irTarget=0;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	cost=0;
	armor=20;
	mapSize=6.4000001;
};

class Fortress1 : Strategic
{
	scope=2;
	icon="Unknown_object";
	model="fortress1";
	displayName="$STR_DN_FORTRESS_1";
	accuracy=0.2;
	typicalCargo[]={};
	destrType=DESTRUCT_BUILDING;
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	mapSize=11;
	cost=0;
	armor=800;
};

class Fortress2 : Fortress1
{
	model="fortress2";
	displayName="$STR_DN_FORTRESS_2";
};

class CampEmpty : Camp
{
	model="stan_inside";
	displayName="$STR_DN_TENT_OPEN";
	accuracy=1000;
};

class CampEast : Camp
{
	model="stan_east";
	displayName="$STR_DN_TENT_EAST";
	accuracy=1000;
};

class CampEastC : Camp
{
	model="stan_eastC";
	displayName="$STR_DN_TENT_EAST_C";
	accuracy=1000;
};

class ACamp : Camp
{
	model="astan";
	displayName="$STR_DN_TENT_A";
	accuracy=1000;
	mapSize=2.5999999;
};

class MASH : Camp
{
	model="mash";
	displayName="$STR_DN_MASH";
	accuracy=0.3;
	attendant=1;
	mapSize=6.4000001;
};

class Fountain : NonStrategic
{
	animated=0;
	scope=2;
	model="kasna";
	displayName="$STR_DN_FOUNTAIN";
	vehicleClass="Objects";
	simulation="fountain";
	sound="Fountain";
	animPeriod=1.33;
	cost=0;
};

class ViewTower : House
{
	scope=2;
	model="hlaska";
	vehicleClass="Objects";
	ladders[]={{"start","end"}};
	displayName = "View Tower";
};

class ViewTower2 : House
{
	scope=2;
	model="vez";
	vehicleClass="Objects";
	ladders[]={{"start","end"}};
	displayName = "View Tower 2";
};

class HeliH : NonStrategic
{
	scope=2;
	model="Heli_H";
	displayName="$STR_DN_HELI_H";
	vehicleClass="Objects";
	icon="Unknown_object";
	nameSound="helipad";
	accuracy=0.2;
	typicalCargo[]={};
	transportAmmo=0;
	transportRepair=0;
	transportFuel=0;
	mapSize=9.8000002;
	cost=0;
	armor=200;
};

class HeliHEmpty : HeliH
{
	model="empty";
	displayName="$STR_DN_HELI_H_EMPTY";
	nameSound="";
};

class TargetTraining : NonStrategic
{
	vehicleClass="Objects";
	nameSound="target";
	model="terc";
	side=3;
	armor=15;
	cost=0;
	scope=2;
	displayName="$STR_DN_TARGET";
	accuracy=0.25;
};

class TargetGrenade : TargetTraining
{
	model="drevtank";
	armor=60;
	displayName="$STR_DN_ARMORED_TARGET";
	accuracy=1000;
};

class Bomb : Strategic
{
	access=2;
	scope=2;
	displayName="$STR_DN_OUT_BOMB";
	vehicleClass="Objects";
	model="shell";
	transportFuel=50000;
	destrType="DESTRUCT_ENGINE";
};

class Vec03 : House
{
	displayName = "Haystack";
	model="\O\Misc\seno_balik";
	vehicleClass="Objects";
	access=2;
	scope=2;
	armor=2000;
};

class Vysilacka : Table
{
	access=2;
	displayName="$STR_DN_OUT_RADIO";
	model="\O\Misc\mutt_vysilacka";
};

class TableX : Table
{
	access=2;
	displayName="$STR_DN_OUT_TABLEX";
	model="\O\Misc\stulsuplik_proxy_x";
};

class WallMap : Table
{
	access=2;
	displayName="$STR_DN_OUT_WALLMAP";
	model="\O\Misc\nastenkaX";
};

class TableMapRes : Table
{
	access=2;
	displayName="$STR_DN_OUT_TABLEMAP";
	model="\O\Misc\stulsuplikmapaX";
};

class FountainNew : Fountain
{
	access=2;
	displayName = "Fountain New";
	model="\o\hous\kasna_new";
	animPeriod=2;
};