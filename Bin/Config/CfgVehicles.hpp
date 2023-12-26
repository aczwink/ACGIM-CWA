class CfgVehicles
{
	access = ACCESS_ADDVALUESONLY;
	vehicleClass[]={"Men","Car","Armored","Air","Support","Camera","Objects","Ammo","Sounds","Mines"};
	
	//Include Baseclasses
#include "Config\CfgVehicles\Baseclasses.h"
#include "Config\CfgVehicles\BISClassesRenames.hpp"
	
	//Sides
#include "Config\CfgVehicles\USA.hpp"
#include "Config\CfgVehicles\Russia.h"
#include "Config\CfgVehicles\FIA.h"

	//Always included sides
#include "Config\CfgVehicles\Civilian.hpp"
#include "Config\CfgVehicles\World.h"
#include "Config\CfgVehicles\FakeUnits.hpp"
#include "Config\CfgVehicles\Misc.h"
};