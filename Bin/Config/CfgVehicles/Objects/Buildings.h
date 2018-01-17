class Barracks : Shed
{
	scope=2;
	model="budova4_in";
	displayName="$STR_DN_BARRACKS";
	vehicleClass="Objects (Buildings)";
	simulation="house";
	mapSize=15.3999996;
};

class Hangar_Hall : Shed
{
	scope=2;
	model="HANGAR";
	displayName="$STR_DN_HANGAR_HALL";
	vehicleClass="Objects (Buildings)";
	simulation="house";
	mapSize=25;
};

class Church : NonStrategic
{
	scope=2;
	displayName="Church 1";
	vehicleClass="Objects (Buildings)";
	accuracy=0.25;
	simulation="church";
	model="kostel";
	ladders[]={{"start","end"}};
};

class Church002 : Church
{
	displayName="Church 2";
	model="kostel2";
	ladders[]={};
};

class Church003 : Church
{
	displayName="Church 3";
	model="kostel3";
	ladders[]={};
};

class Chapel : NonStrategic
{
	scope=2;
	displayName="$STR_DN_CHAPEL";
	vehicleClass="Objects (Buildings)";
	model="kostelik";
	accuracy=0.25;
};

class FuelStation : Strategic
{
	icon="Fuel_object";
	scope=2;
	cost=0;
	armor=50;
	model="fuelstation";
	displayName="$STR_DN_FUEL_STATION";
	vehicleClass="Objects (Buildings)";
	nameSound="fuelstation";
	accuracy=0.5;
	transportFuel=50000;
	destrType=DESTRUCT_ENGINE;
};

class FuelStationNew : FuelStation
{
	armor=100;
	model="fuelstation_new";
	displayName="$STR_DN_FUEL_STATION_2";
	accuracy=1000;
};

class FuelStationNew2 : FuelStation
{
	armor=100;
	model="fuelstation_army";
	displayName="$STR_DN_FUEL_STATION_3";
	accuracy=1000;
};

class FuelStationDD : FuelStation
{
	displayName="Fuel Station 4";
	model="\O\Hous\benzina";
};

class Houseryb_domek : House
{
	scope=2;
	model="ryb_domek";
	displayName = "House 01";
};

class Housemajak : House
{
	scope=2;
	model="majak";
	displayName = "House 02";
};

class Houseplechbud : House
{
	scope=2;
	model="plechbud";
	displayName = "House 03";
};

class Housedeutshe_mini : House
{
	scope=2;
	model="deutshe_mini";
	displayName = "House 04";
};

class Housebouda2_vnitrek : House
{
	scope=2;
	model="bouda2_vnitrek";
	displayName = "House 05";
};

class Housedeutshe : House
{
	scope=2;
	model="deutshe";
	displayName = "House 06";
};

class Housedum_mesto : House
{
	scope=2;
	model="dum_mesto";
	displayName = "House 07";
};

class Housedum_mesto2 : House
{
	scope=2;
	model="dum_mesto2";
	displayName = "House 08";
};

class Housedum_rasovna : House
{
	scope=2;
	model="dum_rasovna";
	displayName = "House 09";
};

class Housebouda2 : House
{
	scope=2;
	model="bouda2";
	displayName = "House 10";
};

class Housebouda3 : House
{
	scope=2;
	model="bouda3";
	displayName = "House 11";
};

class Housedumruina_mini : House
{
	scope=2;
	model="dumruina_mini";
	displayName = "House 12";
};

class Housedum_mesto3:House
{
	scope=2;
	model="dum_mesto3";
	displayName = "House 13";
};

class Housestodola_open:House
{
	scope=2;
	model="stodola_open";
	displayName = "House 14";
};

class Housestatek_kulna:House
{
	scope=2;
	model="statek_kulna";
	displayName = "House 15";
};

class Housedum_mesto2l:House
{
	scope=2;
	model="dum_mesto2l";
	displayName = "House 16";
};

class Housecihlovej_dum_mini:House
{
	scope=2;
	model="cihlovej_dum_mini";
	displayName = "House 17";
};

class Housebudova5:House
{
	scope=2;
	model="budova5";
	displayName = "House 18";
};

class Housedumruina:House
{
	scope=2;
	model="dumruina";
	displayName = "House 19";
};

class Housedum01:House
{
	scope=2;
	model="dum01";
	displayName = "House 20";
};

class Housecihlovej_dum:House
{
	scope=2;
	model="cihlovej_dum";
	displayName = "House 21";
};

class Housecihlovej_dum_in:House
{
	scope=2;
	model="cihlovej_dum_in";
	displayName = "House 22";
};

class Housebudova1:House
{
	scope=2;
	model="budova1";
	displayName = "House 23";
};

class Housebudova3:House
{
	scope=2;
	model="budova3";
	displayName = "House 24";
};

class Housebudova4:House
{
	scope=2;
	model="budova4";
	displayName = "House 25";
};

class Housebudova2:House
{
	scope=2;
	model="budova2";
	displayName = "House 26";
};

class Housegaraz:House
{
	scope=2;
	model="garaz";
	displayName = "House 27";
};

class Housegaraz_bez_tanku:House
{
	scope=2;
	model="garaz_bez_tanku";
	displayName = "House 28";
};

class Housegaraz_s_tankem:House
{
	scope=2;
	model="garaz_s_tankem";
	displayName = "House 29";
};

class Houserepair_center:House
{
	scope=2;
	model="repair_center";
	displayName = "House 30";
};

class Housedum02:House
{
	scope=2;
	model="dum02";
	displayName = "House 31";
};

class Houseafdum_mesto2:House
{
	scope=2;
	model="afdum_mesto2";
	displayName = "House 32";
};

class Househospoda_mesto:House
{
	scope=2;
	model="hospoda_mesto";
	displayName = "House 33";
};

class Housestanice:House
{
	scope=2;
	model="stanice";
	displayName = "House 34";
};

class Housedum_m2:House
{
	scope=2;
	model="dum_m2";
	displayName = "House 35";
};

class Housebouda1:House
{
	scope=2;
	model="bouda1";
	displayName = "House 36";
};

class Housestodola:House
{
	scope=2;
	model="stodola";
	displayName = "House 37";
};

class Housestatek_hl_bud:House
{
	scope=2;
	model="statek_hl_bud";
	displayName = "House 38";
};

class Househospital:House
{
	scope=2;
	model="hospital";
	displayName = "House 39";
};

class Housemesto_dum:House
{
	scope=2;
	model="mesto_dum";
	displayName = "House 40";
};

class Housedum_rasovna_in:House
{
	scope=2;
	model="dum_rasovna_in";
	displayName = "House 41";
};

class Househelfenburk:House
{
	scope=2;
	model="helfenburk";
	displayName = "House 42";
};

class Housedum_olezlina:House
{
	scope=2;
	model="dum_olezlina";
	displayName = "House 43";
};

class Houseafdum_mesto3:House
{
	scope=2;
	model="afdum_mesto3";
	displayName = "House 44";
};

class Houseafhospoda_mesto:House
{
	scope=2;
	model="afhospoda_mesto";
	displayName = "House 45";
};

class Housedulni_bs:House
{
	scope=2;
	model="dulni_bs";
	displayName = "House 46";
};

class Housekostel_trosky:House
{
	scope=2;
	model="kostel_trosky";
	displayName = "House 47";
};

class Houseafdum_mesto2l:House
{
	scope=2;
	model="afdum_mesto2l";
	displayName = "House 48";
};

class Housedum_mesto_in:House
{
	scope=2;
	model="dum_mesto_in";
	displayName = "House 49";
};

class Houseafbarabizna:House
{
	scope=2;
	model="afbarabizna";
	displayName = "House 50";
};

class Househruzdum:House
{
	scope=2;
	model="hruzdum";
	ladders[]={{"start","end"}};
	displayName = "House 51";
};

class Houseammostore2:House
{
	scope=2;
	model="ammostore2";
	ladders[]={{"start","end"},{"start1","end1"}};
	displayName = "House 52";
};

class Dum01 : House
{
	access=2;
	scope=2;
	armor=2000;
	displayName = "House 53";
	ladders[]={{"start","end"}};
	model="\O\Hous\Panelak";
};

class Dum02 : Dum01
{
	displayName = "House 54";
	ladders[]={};
	model="\O\Hous\KBud";
	animated=1;
	
	class Animations
	{
		class Dvere1
		{
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=0;
			angle1=-1.6;
		};
	};

	class UserActions
	{
		class OpenDoors
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};

		class CloseDoors
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};
	};
};

class Dum03 : Dum01
{
	armor=2500;
	displayName = "House 55";
	ladders[]={{"start","end"}};
	model="\O\Hous\Tovarna1";
};

class Dum04 : Dum01
{
	displayName = "House 56";
	model="\O\Hous\Hlidac_budka";
	ladders[]={};
	animated=1;

	class Animations
	{
		class Dvere1
		{
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=1.6;
			angle1=0;
		};

		class Dvere2
		{
			type="rotation";
			animPeriod=1;
			selection="dvere2";
			axis="osa_dvere2";
			angle0=1.6;
			angle1=0;
		};
	};

	class UserActions
	{
		class OpenDoors1
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};

		class CloseDoors1
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};

		class OpenDoors2
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere2";
			radius=2.5;
			condition="this animationPhase ""Dvere2"" < 0.5";
			statement="this animate [""Dvere2"", 1]";
		};

		class CloseDoors2
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere2";
			radius=2.5;
			condition="this animationPhase ""Dvere2"" >= 0.5";
			statement="this animate [""Dvere2"", 0]";
		};
	};
};

class Dum05 : Dum01
{
	displayName = "House 57";
	ladders[]={};
	model="\O\Hous\Domek_sedy";
	animated=1;

	class Animations
	{
		class Dvere1
		{
			memory=0;
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=0;
			angle1=-1.6;
		};
	};

	class UserActions
	{
		class OpenDoors1
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};

		class CloseDoors1
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};
	};
};

class Dum06 : Dum01
{
	displayName = "House 58";
	ladders[]={{"start","end"}};
	model="\O\Hous\Posed";
};

class Dum07 : Dum01
{
	displayName = "House 59";
	ladders[]={};
	model="\O\Hous\domek_zluty";
	animated=1;

	class Animations
	{
		class Dvere1
		{
			memory=0;
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=0;
			angle1=1.6;
		};
	};

	class UserActions
	{
		class OpenDoors1
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};

		class CloseDoors1
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};
	};
};

class Dum08 : Dum01
{
	armor=2500;
	displayName = "House 60";
	ladders[]={{"start","end"}};
	model="\O\Hous\Vysilac_FM";
};

class Dum09 : Dum01
{
	displayName = "House 61";
	ladders[]={};
	armor=2500;
	model="\O\Hous\zluty_statek_in";
	animated=1;

	class Animations
	{
		class Dvere1
		{
			memory=0;
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=0.8;
			angle1=-1.6;
		};
	};

	class UserActions
	{
		class OpenDoors1
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};

		class CloseDoors1
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=3;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};
	};
};


class Dum10 : Church
{
	armor=2500;
	displayName = "House 62";
	model="\O\Hous\domek_radnice";
	ladders[]={{"start","end"}};
};

class Dum11 : Dum01
{
	displayName = "House 63";
	ladders[]={{"start","end"}};
	model="\O\Hous\Panelak2";
};

class Dum12 : Dum01
{
	displayName = "House 64";
	ladders[]={{"start2","end2"},{"start1","end1"}};
	model="\O\Hous\Panelak3";
	animated=1;

	class Animations
	{
		class Dvere1
		{
			memory=0;
			type="rotation";
			animPeriod=1;
			selection="dvere1";
			axis="osa_dvere1";
			angle0=0;
			angle1=1.6;
		};

		class Dvere2
		{
			memory=0;
			type="rotation";
			animPeriod=1;
			selection="dvere2";
			axis="osa_dvere2";
			angle0=0;
			angle1=-1.6;
		};
	};

	class UserActions
	{
		class OpenDoors1
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" < 0.5";
			statement="this animate [""Dvere1"", 1]";
		};

		class CloseDoors1
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere1";
			radius=2.5;
			condition="this animationPhase ""Dvere1"" >= 0.5";
			statement="this animate [""Dvere1"", 0]";
		};

		class OpenDoors2
		{
			displayName="$STR_DN_OUT_O_DOOR";
			position="osa_dvere2";
			radius=2.5;
			condition="this animationPhase ""Dvere2"" < 0.5";
			statement="this animate [""Dvere2"", 1]";
		};

		class CloseDoors2
		{
			displayName="$STR_DN_OUT_C_DOOR";
			position="osa_dvere2";
			radius=2.5;
			condition="this animationPhase ""Dvere2"" >= 0.5";
			statement="this animate [""Dvere2"", 0]";
		};
	};
};

class Dum13 : Dum01
{
	displayName = "House 65";
	ladders[]={{"start2","end2"},{"start1","end1"}};
	model="\O\Misc\leseni4x";
};

class Dum16 : Dum01
{
	displayName = "House 66";
	ladders[]={{"start","end"}};
	model="\O\Tree\Javor01Posed";
};

class Dum15 : Dum01 //is this used?
{
	scope = 1;
	displayName = "House 67";
	ladders[]={{"start2","end2"},{"start1","end1"}};
	model="\O\Hous\nabrezi_najezd";
};

class ResHousedomek01 : House
{
	scope=2;
	displayName = "House 67";
	model="\o\hous\domek01";
};

class ResHousedomek02 : House
{
	scope=2;
	displayName = "House 68";
	model="\o\hous\domek02";
};

class ResHousedomek03 : House
{
	scope=2;
	displayName = "House 69";
	model="\o\hous\domek03";
};

class ResHousedomek04 : House
{
	scope=2;
	displayName = "House 70";
	model="\o\hous\domek04";
};

class ResHousedomek05 : House
{
	scope=2;
	displayName = "House 71";
	model="\o\hous\domek05";
};

class ResHousedum_podloubi : House
{
	scope=2;
	displayName = "House 72";
	model="\o\hous\dum_podloubi";
};

class ResHousedum_podloubi02 : House
{
	scope=2;
	displayName = "House 73";
	model="\o\hous\dum_podloubi02";
};

class ResHousedum_podloubi03 : House
{
	scope=2;
	displayName = "House 74";
	model="\o\hous\dum_podloubi03";
};

class ResHousedum_podloubi03klaster : House
{
	scope=2;
	displayName = "House 75";
	model="\o\hous\dum_podloubi03klaster";
};

class ResHousestodola : House
{
	scope=2;
	displayName = "House 76";
	model="\o\hous\stodola";
};

class ResHousestodola2 : House
{
	scope=2;
	displayName = "House 77";
	model="\o\hous\stodola2";
};

class ResHousestodola3 : House
{
	scope=2;
	displayName = "House 78";
	model="\o\hous\stodola3";
};

class ResHousekostelin : House
{
	scope=2;
	displayName = "House 79";
	model="\o\hous\kostelin";
};

class ResHousezluty_statek : House
{
	scope=2;
	displayName = "House 80";
	model="\o\hous\zluty_statek";
};

class ResHousedomek_kovarna : House
{
	scope=2;
	displayName = "House 81";
	model="\o\hous\domek_kovarna";
};

class ResHousedomek_rosa : House
{
	scope=2;
	displayName = "House 82";
	model="\o\hous\domek_rosa";
};

class ResHousedomek_hospoda : House
{
	scope=2;
	displayName = "House 83";
	model="\o\hous\domek_hospoda";
};

class ResHousedomek_sedy_bez : House
{
	scope=2;
	displayName = "House 84";
	model="\o\hous\domek_sedy_bez";
};

class ResHousedomek_zluty_bez : House
{
	scope=2;
	displayName = "House 85";
	model="\o\hous\domek_zluty_bez";
};

class ResHousedomek_vilka : House
{
	scope=2;
	displayName = "House 86";
	model="\o\hous\domek_vilka";
};

class ResHousedomek_ruina : House
{
	scope=2;
	displayName = "House 87";
	model="\o\hous\domek_ruina";
};

class ResHousedomek_podhradi_1 : House
{
	scope=2;
	displayName = "House 88";
	model="\o\hous\domek_podhradi_1";
};

class ResHousedum_patr_nizky_prujezd : House
{
	scope=2;
	displayName = "House 89";
	model="\o\hous\dum_patr_nizky_prujezd";
};

class ResHousedum_patrovy01prujezd : House
{
	scope=2;
	displayName = "House 90";
	model="\o\hous\dum_patrovy01prujezd";
};

class ResHousedum_patrovy01 : House
{
	scope=2;
	displayName = "House 91";
	model="\o\hous\dum_patrovy01";
};

class ResHousedum_patrovy01c : House
{
	scope=2;
	displayName = "House 92";
	model="\o\hous\dum_patrovy01c";
};

class ResHousedum_patrovy01d : House
{
	scope=2;
	displayName = "House 93";
	model="\o\hous\dum_patrovy01d";
};

class ResHousedum_patrovy02 : House
{
	scope=2;
	displayName = "House 94";
	model="\o\hous\dum_patrovy02";
};

class ResHousedum_patrovy03 : House
{
	scope=2;
	displayName = "House 95";
	model="\o\hous\dum_patrovy03";
};

class ResHousedum_patrovy04 : House
{
	scope=2;
	displayName = "House 96";
	model="\o\hous\dum_patrovy04";
};

class ResHousedum_patrovy05 : House
{
	scope=2;
	displayName = "House 97";
	model="\o\hous\dum_patrovy05";
};

class ResHousedum_patrovy06 : House
{
	scope=2;
	displayName = "House 98";
	model="\o\hous\dum_patrovy06";
};

class ResHouseskola : House
{
	scope=2;
	displayName = "House 99";
	model="\o\hous\skola";
};

class ResHousenabrezi_najezd : House //is this used?
{
	scope=1;
	displayName = "House 101";
	model="\o\hous\nabrezi_najezd";
};

class ResHouseruiny_obvod_3 : House
{
	scope=2;
	displayName = "House 100";
	model="\o\hous\ruiny_obvod_3";
};

class ResHouseruiny_3_roh : House
{
	scope=2;
	displayName = "House 101";
	model="\o\hous\ruiny_3_roh";
};

class ResHouseruiny_3_prasklina : House
{
	scope=2;
	displayName = "House 102";
	model="\o\hous\ruiny_3_prasklina";
};

class ResHouseruiny_3_dvere : House
{
	scope=2;
	displayName = "House 103";
	model="\o\hous\ruiny_3_dvere";
};

class ResHousehangar_2 : House
{
	scope=2;
	displayName = "House 104";
	model="\o\hous\hangar_2";
};

class ResHousebouda_plech : House
{
	scope=2;
	displayName = "House 105";
	model="\o\hous\bouda_plech";
};

class ResHouseaut_zast : House
{
	scope=2;
	displayName = "House 106";
	model="\o\hous\aut_zast";
};

class ResHousedrevo_hromada : House
{
	scope=2;
	displayName = "House 107";
	model="\o\hous\drevo_hromada";
};

class ResHouseChata6 : House
{
	scope=2;
	displayName = "House 108";
	model="\o\hous\Chata6";
};

class ResHouseOrlHot : House
{
	scope=2;
	displayName = "House 109";
	model="\o\hous\OrlHot";
};

class ResHouseZalChata : House
{
	scope=2;
	displayName = "House 110";
	model="\o\hous\ZalChata";
};

class ResHousehasic_zbroj : House
{
	scope=2;
	displayName = "House 111";
	model="\o\hous\hasic_zbroj";
};

class Houseleseni2x : House
{
	scope=2;
	displayName = "House 112";
	model="\o\misc\leseni2x";
};

class Housepumpa : House
{
	scope=2;
	displayName = "House 113";
	model="\o\misc\pumpa";
};