class CfgMovesMC
{
	access = ACCESS_ADDVALUESONLY;
	vehicleActions = "CfgVehicleActions";
	transitionsInterpolated[]={};
	transitionsSimple[]={"Lying","LyingDying",1,"LyingDying","LyingDead",1,"CivilLying","CivilLyingDying",1,"CivilLyingDying","CivilLyingDead",1,"Stand","StandDying",1,"StandDying","StandDead",1,"Stand","StandDyingVer2",1,"StandDyingVer2","StandDeadVer2",1,"Weapon","WeaponDying",1,"WeaponDying","WeaponDead",1,"Weapon","WeaponDyingVer2",1,"WeaponDyingVer2","WeaponDeadVer2",1,"Cargo","CargoDying",1,"CargoDying","CargoDead",1,"Combat","CombatToWeapon",2,"CombatToWeapon","Weapon",2,"Lying","LyingToWeapon",2,"LyingToWeapon","Weapon",2,"Weapon","WeaponToLying",2,"WeaponToLying","Lying",2,"Combat","CombatReloadMagazine",2,"CombatReloadMagazine","Combat",2,"Combat","CombatReloadMGun",2,"CombatReloadMGun","Combat",2,"Combat","CombatReloadMortarStart",2,"CombatReloadMortarStart","CombatReloadMortarEnd",2,"CombatReloadMortarEnd","Combat",2,"Combat","CombatThrowGrenadeStart",2,"CombatThrowGrenadeStart","CombatThrowGrenadeEnd",2,"CombatThrowGrenadeEnd","Combat",2,"Stand","StandThrowGrenadeStart",2,"StandThrowGrenadeStart","StandThrowGrenadeEnd",2,"StandThrowGrenadeEnd","Stand",2,"Civil","CivilThrowGrenadeStart",2,"CivilThrowGrenadeStart","CivilThrowGrenadeEnd",2,"CivilThrowGrenadeEnd","Civil",2,"Lying","LyingThrowGrenadeStart",2,"LyingThrowGrenadeStart","LyingThrowGrenadeEnd",2,"LyingThrowGrenadeEnd","Lying",2,"CombatRunF","CombatRunThrowGrenadeStart",2,"CombatRunThrowGrenadeStart","CombatRunThrowGrenadeEnd",2,"CombatRunThrowGrenadeEnd","Combat",2,"CivilRunF","CivilRunThrowGrenadeStart",2,"CivilRunThrowGrenadeStart","CivilRunThrowGrenadeEnd",2,"CivilRunThrowGrenadeEnd","Civil",2,"Lying","LyingReloadMagazine",2,"LyingReloadMagazine","Lying",2,"Combat","CombatToBinoc",2,"CombatToBinoc","Binoc",2,"Binoc","BinocToCombat",2,"BinocToCombat","Combat",2,"Lying","LyingToBinocLying",2,"LyingToBinocLying","BinocLying",2,"BinocLying","BinocLyingToLying",2,"BinocLyingToLying","Lying",2,"Weapon","WeaponReloadAT",2,"WeaponReloadAT","Weapon",2,"Stand","StandToCombat",1,"StandToCombat","Combat",1,"Combat","CombatToStand",1,"CombatToStand","Stand",1,"Lying","LyingToCombat",1.2,"LyingToCombat","Combat",1.2,"Combat","CombatToLying",1.2,"CombatToLying","Lying",1.2,"CombatRunF","CombatRunFToLying",1,"CombatRunFToLying","Lying",1,"Lying","LyingToCombatRun",1,"LyingToCombatRun","CombatRunF",1,"Civil","CivilToCivilLying",1.2,"CivilToCivilLying","CivilLying",1.2,"CivilLying","CivilLyingToCivil",1.2,"CivilLyingToCivil","Civil",1.2,"Combat","CombatGetInCar",1,"CombatGetInCar","Combat",1,"Combat","CombatGetInTank",1,"CombatGetInTank","Combat",1,"CombatGetOutTank","Combat",1,"Civil","CivilGetInCar",1,"CivilGetInCar","Civil",1,"Civil","CivilGetInTank",1,"CivilGetInTank","Civil",1,"CivilGetOutTank","Civil",1,"Stand","StandGetInCar",1,"StandGetInCar","Stand",1,"Stand","StandGetInTank",1,"StandGetInTank","Stand",1,"StandGetOutTank","Stand",1,"Stand","StandToSitDown",1,"StandToSitDown","EffectStandSitDown",1,"EffectStandSitDown","SitDownToStand",1,"SitDownToStand","Stand",1,"EffectStandSitDown","SitDownDying",1,"SitDownDying","SitDownDead",1,"CombatDead","DeadState",10,"CombatDeadVer2","DeadState",10,"StandDead","DeadState",10,"StandDeadVer2","DeadState",10,"LyingDead","DeadState",10,"CivilLyingDead","DeadState",10,"WeaponDead","DeadState",10,"WeaponDeadVer2","DeadState",10,"SitDownDead","DeadState",10,"Crouch","CrouchThrowGrenadeStart",2,"CrouchThrowGrenadeStart","CrouchThrowGrenadeEnd",2,"CrouchThrowGrenadeEnd","Crouch",2};
	transitionsDisabled[]={};
	
	class Actions
	{
		#include "Config\CfgMovesMC\Actions.h"
	};
	
	class BlendAnims
	{
		#include "Config\CfgMovesMC\BlendAnims.h"
	};

	#include "Config\CfgMovesMC\BaseClasses.h"

	class States
	{
		#include "Config\CfgMovesMC\States.h"
	};

	class Interpolations
	{
		#include "Config\CfgMovesMC\Interpolations.h"
	};
};