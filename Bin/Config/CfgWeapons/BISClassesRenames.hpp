/*
Weapons need to be handled differently from for example CfgVehicles.
In missions you can often change your loadout before mission start and these missions reference the weapons by their original BIS class name.
Since the goal of ACGIM is to be 100% compatible with any mission/campaign created for the standard game, preprocessor magic is used to rename real weapons class names to a BIS class correspondent.
This is how it is done:
#define RealWeaponName BISClassWeaponName

Like this the real weapon name will be replaced with the BIS class correspondent everywhere in the config. Note that, like this, the real weapon name can not be used in double quotes anymore.
*/

//Primary
//      FROM            TO
//      ACGIM           BIS
#define AK74GP25        AK74GrenadeLauncher
#define AKS74           AK74SU
#define CAR15           M4
#define CAR15_SD        HK
#define FIM92Stinger    AALauncher
#define M47Dragon       CarlGustavLauncher
#define M72LAW          LAWLauncher
#define M16A2           M16
#define M16A2_M203      M16GrenadeLauncher
#define PKM             PK
#define RPG7            RPGLauncher //use the RPG-7 because it betters matches range-wise with the BIS RPG



#define WEAPON_REFERENCE(weaponName) #weaponName