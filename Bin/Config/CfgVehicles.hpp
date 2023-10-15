class CfgVehicles
{
	access = ACCESS_ADDVALUESONLY;
	vehicleClass[]={"Men","Car","Armored","Air","Support","Camera","Objects","Ammo","Sounds","Mines"};
	
	//Include Baseclasses
#include "Config\CfgVehicles\Baseclasses.h"
	
	//Sides
#include "Config\CfgVehicles\USA.hpp"
#include "Config\CfgVehicles\Russia.h"
#include "Config\CfgVehicles\FIA.h"

	//Always included sides
#include "Config\CfgVehicles\Civilian.hpp"
#include "Config\CfgVehicles\World.h"
#include "Config\CfgVehicles\Misc.h"
#include "Config\CfgVehicles\Unused.h"

	/*
#include "Config\CfgVehicles\USA\Aircraft.h"
#include "Config\CfgVehicles\USA\Wheeled.h"
	
	//----Russia----
#include "Config\CfgVehicles\Russia\Aircraft.h"




	//----USSR----
	//Armored Ground Vehicles
#include "Config\CfgVehicles\1985\USSR\BRDM2.h"
#include "Config\CfgVehicles\1985\USSR\T62.h"
	//Cars
#include "Config\CfgVehicles\1985\USSR\ScudLauncher.h"
	//Ships
#include "Config\CfgVehicles\1985\USSR\Boat.h"



	//----FIA----
	//Armored Ground Vehicles
#include "Config\CfgVehicles\1985\FIA\BMP1.h"
#include "Config\CfgVehicles\1985\FIA\T54.h"
#include "Config\CfgVehicles\1985\FIA\T72A.h"
#include "Config\CfgVehicles\1985\FIA\T80B.h"
	//Cars
#include "Config\CfgVehicles\1985\FIA\UAZ469.h"
	
	//----Civilian----
	//Men
#include "Config\CfgVehicles\Civilian\Women.h"
	//Aircraft
#include "Config\CfgVehicles\Civilian\Cessna182.h"

	//-Empty
#include "Config\CfgVehicles\Objects\Buildings.h"
#include "Config\CfgVehicles\Objects\Forest.h"

	//----BIS Specific----
#include "Config\CfgVehicles\BIS\Specific.h"

	//----BIS Shared----
#include "Config\CfgVehicles\BIS\Shared\WestLinks.h"
#include "Config\CfgVehicles\BIS\Shared\WestUnused.h"
#include "Config\CfgVehicles\1985\BIS\UnusedEast.h"
#include "Config\CfgVehicles\1985\BIS\UnusedFIA.h"
#include "Config\CfgVehicles\1985\BIS\UnusedEmpty.h"
#include "Config\CfgVehicles\BIS\Shared\Cheats.h"



*/
	
	
	
	
	
	//Modern OFP 2007
/*#ifdef ACGIM_SCENARIO_2007

#include "config\cfgvehicles\modern2007\west.h"
#include "config\cfgvehicles\modern2007\east.hpp"
#include "config\cfgvehicles\modern2007\bundeswehr\infantry.h"
#include "config\cfgvehicles\modern2007\resistance.hpp"
#include "config\cfgvehicles\modern2007\civilian.hpp"

	//d4t include BIS classes
#include "config\cfgvehicles\modern2007\BIS\BIS.hpp"
#include "config\cfgvehicles\modern2007\BIS\useless.hpp"
#include "config\cfgvehicles\modern2007\BIS\cheats.h"

#endif*/
};