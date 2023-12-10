class CfgModels
{
	class Default
	{
		sections[]={};
		sectionsInherit="";
	};
	
	class Head : Default
	{
		sections[]={"osobnost","brejle"};
	};
	
	class Man : Default
	{
		sections[]={"head injury","body injury","l arm injury","r arm injury","p arm injury","l leg injury","r leg injury","p leg injury","medic","hlava","krk","zasleh"};
		sectionsInherit="Head";
	};
	
	class Vehicle : Default
	{
		sections[]={"cislo", "grupa", "side", "sektor", "clan", "podsvit pristroju", "poskozeni", "L svetlo", "P svetlo", "zasleh"};
	};
	
	class Tank : Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]={"zadni svetlo","brzdove svetlo","pruh"};
	};
	
	class Car : Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]={"ammo","sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo"};
	};
	
	class Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]={"sklo predni p","sklo predni l","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur"};
	};
	
	class Weapon : Default
	{
		sections[]={"zasleh"};
	};
	
	class hlavaw : Head
	{
	};
	
	class mc_vojakw2 : Man
	{
	};
	
	class mc_vojakwo2 : Man
	{
	};
	
	class mc_tankistaw2 : Man
	{
	};
	
	class mc_pilotw2 : Man
	{
	};
	
	class mc_sniperw2 : Man
	{
	};
	
	class mc_saboteur : Man
	{
	};
	
	class mc_saboteurday : Man
	{
	};
	
	class mc_vojake2 : Man
	{
	};
	
	class mc_vojakeo2 : Man
	{
	};
	
	class mc_tankistae2 : Man
	{
	};
	
	class mc_pilote2 : Man
	{
	};
	
	class mc_snipere2 : Man
	{
	};
	
	class mc_vojake2_guba : Man
	{
	};
	
	class angelina : Man
	{
	};
	
	class mc_specnas2 : Man
	{
	};
	
	class mc_civil : Man
	{
	};
	
	class mc_civil2 : Man
	{
	};
	
	class mc_civil3 : Man
	{
	};
	
	class mc_vojakg2 : Man
	{
	};
	
	class mc_vojakg3 : Man
	{
	};
	
	class mc_vojakgo2 : Man
	{
	};
	
	class mc_crewg : Man
	{
	};
	
	class mc_crewg2 : Man
	{
	};
	
	class m16_proxy : Weapon
	{
	};
	
	class xm_177e2_proxy : Weapon
	{
	};
	
	class optika_m16 : Weapon
	{
	};
	
	class m16_granatomet_proxy : Weapon
	{
	};
	
	class m60_mg_proxy : Weapon
	{
	};
	
	class optika_m60_mg : Weapon
	{
	};
	
	class m21_proxy : Weapon
	{
	};
	
	class optika_snpierw : Weapon
	{
	};
	
	class ak_74_su_proxy : Weapon
	{
	};

	class ak_74_granatomet_proxy : Weapon
	{
	};
	
	class pk_mg_proxy : Weapon
	{
	};
	
	class optika_pk : Weapon
	{
	};
	
	class ak_74_proxy : Weapon
	{
	};
	
	class optika_ak47 : Weapon
	{
	};
	
	class ak_47_v58_proxy : Weapon
	{
	};
	
	class svd_dragunov_proxy : Weapon
	{
	};
	
	class optika_snpiere : Weapon
	{
	};
	
	class optika_night : Weapon
	{
	};
	
	class ak_47_granatomet_proxy : Weapon
	{
	};
	
	class ak_47_proxy : Weapon
	{
	};
	
	class kozlice : Weapon
	{
	};
	
	class optika_kozlice : Weapon
	{
	};
	
	class Steyr : Weapon
	{
	};
	
	class optika_steyr : Weapon
	{
	};
	
	class G36 : Weapon
	{
	};
	
	class G36_optics : Weapon
	{
	};
	
	class XMS : Weapon
	{
	};
	
	class optika_XMS : Weapon
	{
	};
	
	class Bizon : Weapon
	{
	};
	
	class optika_Bizon : Weapon
	{
	};
	
	class 6g30 : Weapon
	{
	};
	
	class t80 : Tank
	{
	};
	
	class t72 : Tank
	{
	};
	
	class t55 : Tank
	{
	};
	
	class m1_abrams : Tank
	{
		sectionsInherit="Tank";
		sections[]={"BS1","BS2","BS3","_mark","_chevron","_for"};
	};
	
	class m60 : Tank
	{
	};
	
	class bmp : Tank
	{
	};
	
	class m113 : Tank
	{
	};
	
	class m113_ambulance : Tank
	{
	};
	
	class bmp_ambu : Tank
	{
	};
	
	class zsu : Tank
	{
	};
	
	class truck5t : Car
	{
	};
	
	class truck5t2 : Car
	{
	};
	
	class truck5trepair : Car
	{
	};
	
	class truck5tfuel : Car
	{
	};
	
	class ural : Car
	{
	};
	
	class uralrepair : Car
	{
	};
	
	class uralfuel : Car
	{
	};
	
	class v3s : Car
	{
	};
	
	class v3sfuel : Car
	{
	};
	
	class v3srepair : Car
	{
	};
	
	class jeep : Car
	{
	};
	
	class uaz : Car
	{
	};
	
	class guaz : Car
	{
	};
	
	class scud : Car
	{
	};
	
	class gjeep : Car
	{
	};
	
	class sguaz : Car
	{
	};
	
	class jeep_mg : Car
	{
	};
	
	class skodovka : Car
	{
	};
	
	class skodovka_blue : Car
	{
	};
	
	class skodovka_red : Car
	{
	};
	
	class skodovka_green : Car
	{
	};
	
	class traktor : Car
	{
	};
	
	class rapid : Car
	{
	};
	
	class rapid_y : Car
	{
	};
	
	class v3scivil : Car
	{
	};
	
	class m2_mg : Vehicle
	{
	};
	
	class uh_60 : Helicopter
	{
	};
	
	class uh_60mg : Helicopter
	{
	};
	
	class ah1_cobra : Helicopter
	{
	};
	
	class mi24_hind : Helicopter
	{
	};
	
	class mi17_hip : Helicopter
	{
	};
	
	class a10 : Vehicle
	{
	};
	
	class cessna182 : Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]={"vrtule staticka","vrtule blur"};
	};
	
	class Ship
	{
		sectionsInherit="Vehicle";
		sections[]={"zadni svetlo"};
	};
	
	class hrl : Ship
	{
	};
	
	class pbr : Ship
	{
	};
	
	class Flag : Default
	{
		sections[]={"latka"};
	};
	
	class flag_vojak : Flag
	{
	};
	
	class flag_stozar : Flag
	{
	};
	
	class flag_alone : Flag
	{
	};
	
	class flag_alone_big : Flag
	{
	};
	
	class flag_auto : Flag
	{
	};
	
	class flag_plane : Flag
	{
	};
	
	class flag_plane_big : Flag
	{
	};
	
	class blok : Default
	{
		sections[]={"papir"};
	};
	
	class trabant : Car
	{
	};
	
	class m163A1vulcan : Tank
	{
	};
	
	class su25 : Vehicle
	{
	};
	
	class ch_47d : Helicopter
	{
	};
	
	class apac : Helicopter
	{
	};
	
	class hmmwv : Car
	{
	};
	
	class brmd : Car
	{
	};
	
	class brdm : Car
	{
	};
	
	class kiowa : Helicopter
	{
	};
	
	class m2a2 : Tank
	{
	};
	
	//Resistance
	class kolo : Car
	{
	};
	
	class SmallCar : Car
	{
	};
	
	class JAWA250 : Car
	{
	};
	
	class skodasm11 : Car
	{
	};
	
	class CJ5 : Car
	{
	};
	
	class v80 : Helicopter
	{
	};
	
	class char01 : Man
	{
	};
	
	class char02 : Man
	{
	};
	
	class char03 : Man
	{
	};
	
	class char04 : Man
	{
	};
	
	class char05 : Man
	{
	};
	
	class char06 : Man
	{
	};
	
	class char07 : Man
	{
	};
	
	class civilistka01a : Man
	{
	};
	
	class civilistka01b : Man
	{
	};
	
	class civilistka02a : Man
	{
	};
	
	class civilistka02b : Man
	{
	};
	
	class civilistka02c : Man
	{
	};
	
	class civilistka_head : Head
	{
	};
	
	class beretta92f : Weapon
	{
	};
	
	class Glock17 : Weapon
	{
	};
	
	class FAL : Weapon
	{
	};
	
	class HKG3A4 : Weapon
	{
	};
	
	class TokarevT33 : Weapon
	{
	};
	
	class Sa61Skorpion : Weapon
	{
	};
	
	class cz75 : Weapon
	{
	};
	
	class uzi : Weapon
	{
	};
	
	class optika_beretta92 : Weapon
	{
	};
	
	class optika_glock17 : Weapon
	{
	};
	
	class optika_uzi : Weapon
	{
	};
	
	class optika_cz75 : Weapon
	{
	};
	
	class optika_sa61skorpion : Weapon
	{
	};
	
	class optika_HKG3A4 : Weapon
	{
	};
	
	class optika_FAL : Weapon
	{
	};
	
	class optika_TokarevT33 : Weapon
	{
	};
	
	class Road : Default
	{
		properties[]={"class","road"};
	};
	
	class most_stred : Road
	{
	};
	
	class most_kraj : Road
	{
	};
	
	class Remington : Weapon
	{
	};
	
	class cs_optika : Weapon
	{
	};
	
	class SaW : Weapon
	{
	};
	
	class SaW_optika : Weapon
	{
	};
	
	class Ingram : Weapon
	{
	};
	
	class Optika_ing : Weapon
	{
	};
	
	class Glock17Sil : Weapon
	{
	};
	
	class mc_specG : Man
	{
	};

	//CWA
	class BIScamel : Vehicle
	{
		sectionsInherit = "Vehicle";
		sections[] = {"vrtule staticka", "vrtule blur"};
	};

	class BIScamel2 : BIScamel
	{
	};

	class BIScamelpilot : Man
	{
	};

	class BIScamelpilot2 : Man
	{
	};

	//AC
	#include "Config\CfgModels\Humans.h"
	#include "Config\CfgModels\Weapons.h"
	#include "Config\CfgModels\Optics.h"
	#include "Config\CfgModels\US_Aircraft.h"
	#include "Config\CfgModels\US_Helicopters.h"
#include "Config\CfgModels\Russia_Helicopters.h"
#include "Config\CfgModels\Russia_Tracked.h"
#include "Config\CfgModels\Russia_Wheeled.h"
#include "Config\CfgModels\FIA_Wheeled.hpp"
};