class DeadState : Default
{
	actions="DeadActions";
	file="bezsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
};

class Stand : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	variantAfter[]={1,3,6};
	variantsAI[]={"StandVar2",0.7,"Stand",0.3};
	equivalentTo="Stand";
	interpolationSpeed=2;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandVar2 : Stand
{
	file="\sjc_anims\std\bezstanistill.rtm";
	speed=-7.8000002;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandWalkF : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\chuzeBez0l.rtm";
	speed=-1.2;
	looped=1;
	duty=-0.7;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandWalkLF : StandWalkF
{
	file="\sjc_anims\std\chuzebez-45L.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkRF : StandWalkF
{
	file="\sjc_anims\std\chuzebez45L.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkL : StandWalkF
{
	file="\sjc_anims\std\chuzebez-90L.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkR : StandWalkF
{
	file="\sjc_anims\std\chuzebez90L.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkLB : StandWalkF
{
	file="\sjc_anims\std\chuzebez-135l.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkRB : StandWalkF
{
	file="\sjc_anims\std\chuzebez135l.rtm";
	speed=-1.53;
	looped=1;
};

class StandWalkB : StandWalkF
{
	file="\sjc_anims\std\chuzebez180l.rtm";
	speed=-1.53;
	looped=1;
};

class StandRunF : StandWalkF
{
	file="\sjc_anims\std\bezbeh.rtm";
	speed=-0.8;
	duty=-0.5;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class StandToCombat : Default
{
	actions="CombatActions";
	file="\sjc_anims\std\bezstanistat.rtm";
	speed=-1.8;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatToStand : Default
{
	actions="StandActions";
	file="sstanistat.rtm";
	speed=-0.8;
	looped=0;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	interpolateWith[]={"Stand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class CombatToLying : Default
{
	actions="LyingActions";
	file="stanisdolehu.rtm";
	speed=-1.5;
	looped=0;
	onLandEnd=1;
	enableOptics=0;
	interpolateTo[]={"LyingDying",1};
	soundEnabled=1;
	soundOverride="laydown";
	soundEdge1=0.1;
	soundEdge2=0.1;
};

class CombatRunFToLying : Default
{
	actions="LyingActions";
	file="behleh.rtm";
	speed=-1.5;
	looped=0;
	onLandEnd=1;
	disableWeapons=1;
	soundEnabled=1;
	interpolateTo[]={"LyingDying",1};
	soundOverride="laydown";
	soundEdge1=0.1;
	soundEdge2=0.1;
};

class LyingToCombat : Default
{
	actions="CombatStandingUpActions";
	file="lehdostanis.rtm";
	speed=-2;
	looped=0;
	onLandBeg=1;
	enableOptics=0;
	interpolateTo[]={"LyingDying",1};
	soundEnabled=1;
	soundOverride="standup";
	soundEdge1=0.01;
	soundEdge2=0.01;
};

class LyingToCombatRun : Default
{
	actions="CombatStandingUpActions";
	file="lehbeh.rtm";
	speed=-1.0;
	looped=0;
	onLandBeg=1;
	disableWeapons=1;
	soundEnabled=1;
	interpolateTo[]={"LyingDying",1};
	soundOverride="standup";
	soundEdge1=0;
	soundEdge2=0;
};

class Combat : Default
{
	actions="CombatActions";
	preload=1;
	file="sstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
	variantsPlayer[]={"CombatStillPlayer",0.5,"Combat"};
	variantsAI[]={"CombatStillPlayer",0.3,"CombatStillV1",0.5,"Combat"};
};

class CombatRelaxed : Combat
{
	actions="CombatRelaxedActions";
	file="savarestanistat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	variantsAI[]={"CombatRelaxedStill",0.8,"CombatRelaxed"};
	interpolateTo[]={"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
};

class CombatStillV1 : Combat
{
	file="sstani.rtm";
	speed=-6.8000002;
	looped=1;
	equivalentTo="Combat";
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatStillPlayer : Combat
{
	file="sstaniSoft.rtm";
	speed=-6.8000002;
	looped=1;
	equivalentTo="Combat";
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatRelaxedStill : Combat
{
	actions="CombatRelaxedActions";
	file="savarestani.rtm";
	speed=-5;
	looped=1;
	disableWeapons=0;
	equivalentTo="CombatRelaxed";
};

class CombatReloadMagazine : Default
{
	preload=1;
	actions="CombatActions";
	file="snabij.rtm";
	speed="- 2.4";
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatToBinoc : Default
{
	actions="CombatActions";
	file="sdalek.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class Binoc : Default
{
	actions="BinocActions";
	file="sdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	head="headNo";
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class BinocToCombat : Default
{
	actions="CombatActions";
	file="sdalek2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class Crouch : Combat
{
	preload=1;
	actions="CrouchActions";
	file="klek.rtm";
	speed=10000000000.0;
	variantsPlayer[]={};
	variantsAI[]={};
	visibleSize=0.6;
	aimPrecision=0.5;
	recoilSuffix="halffixed";
};

class CrouchIM : Combat
{
	actions="CrouchActions";
	speed=10000000000.0;
	variantsPlayer[]={};
	variantsAI[]={};
};

class CrouchToCombat : Default
{
	preload=1;
	actions="CombatActions";
	file="klekdostani.rtm";
	speed=-0.4;
	looped=0;
	soundEnabled=0;
	enableOptics=0;
	connectFrom[]={"Crouch",0.5};
	connectTo[]={"Combat",0.5};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CrouchToCrouchSprintF : Default
{
	preload=1;
	actions="CrouchRunFActions";
	file="klekbeh.rtm";
	speed=-0.4;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Crouch",0.4};
	enableOptics=0;
	connectTo[]={"CrouchSprintF",0.4};
	interpolateTo[]={"Crouch",1};
};

class CombatToCrouch : Default
{
	preload=1;
	actions="CrouchActions";
	file="sstanidoklek.rtm";
	speed=-0.4;
	looped=0;
	soundEnabled=0;
	enableOptics=0;
	connectFrom[]={"Combat",0.5};
	connectTo[]={"Crouch",0.5};
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchToLying : Default
{
	preload=1;
	actions="LyingActions";
	file="klekleh.rtm";
	speed=-1;
	looped=0;
	connectFrom[]={"Crouch",1};
	connectTo[]={"Lying",1};
	soundEnabled=1;
	enableOptics=0;
	soundOverride="laydown";
	soundEdge1=0.1;
	soundEdge2=0.1;
	onLandEnd=1;
	interpolateTo[]={"LyingDying",0.1};
};

class LyingToCrouch : Default
{
	preload=1;
	actions="CrouchActions";
	file="lehklek.rtm";
	speed=-1;
	looped=0;
	connectFrom[]={"Lying",1};
	connectTo[]={"Crouch",1};
	soundEnabled=1;
	enableOptics=0;
	soundOverride="standup";
	soundEdge1=0.01;
	soundEdge2=0.01;
	onLandBeg=1;
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchReloadMagazine : Default
{
	preload=1;
	actions="CrouchActions";
	file="kleknabij.rtm";
	speed="- 2.4";
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	visibleSize=0.6;
	aimPrecision=0.5;
	recoilSuffix="halffixed";
	connectFrom[]={"Crouch",1};
	connectTo[]={"Crouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchDying : DefaultDie
{
	actions="NoActions";
	file="kleksmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"Crouch",1};
	connectTo[]={"CrouchDead",1};
};

class CrouchDead : CrouchDying
{
	actions="DeadActions";
	file="kleksmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
};

class CrouchToWeapon : Default
{
	actions="WeaponActions";
	file="klekdoAT.rtm";
	speed=-2.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Crouch",1};
	connectTo[]={"Weapon",1};
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class WeaponToCrouch : Default
{
	actions="CrouchActions";
	file="atdoklek.rtm";
	speed=-2.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Weapon",1.2};
	connectTo[]={"Crouch",1.2};
	interpolateTo[]={"CrouchDying",0.1};
};

class LyingToBinocLying : Default
{
	actions="LyingActions";
	file="plazenidalek.rtm";
	speed=-2.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	showItemInHand=1;
	onLandBeg=1;
	onLandEnd=1;
	interpolateTo[]={"LyingDying",0.1};
};

class BinocLying : Default
{
	actions="BinocLyingActions";
	file="plazenidalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	onLandBeg=1;
	onLandEnd=1;
	duty=-1;
	interpolateTo[]={"LyingDying",0.1};
};

class BinocLyingToLying : Default
{
	actions="LyingActions";
	file="plazenidalek2.rtm";
	speed=-2.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	onLandBeg=1;
	onLandEnd=1;
	interpolateTo[]={"LyingDying",0.1};
};

class StandToBinocStand : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezdalek.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectFrom[]={"Stand",2};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class BinocStand : Default
{
	actions="BinocStandActions";
	file="\sjc_anims\std\bezdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	connectFrom[]={"StandToBinocStand",1};
	connectTo[]={"BinocStandToStand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class BinocStandToStand : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezdalek2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectTo[]={"Stand",2};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandThrowGrenadeStart : Default
{
	actions="StandActions";
	file="bezgranat1.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};


class StandThrowGrenadeEnd : Default
{
	actions="StandActions";
	file="bezgranat2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class CombatToTakeFlag : Default
{
	actions="CombatActions";
	file="spoloz.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class TakeFlag : Default
{
	actions="TakeFlagActions";
	file="spolozstat.rtm";
	speed=-2.5;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CombatToTakeFlag",2};
	connectTo[]={"TakeFlagToCombat",2};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class TakeFlagToCombat : Default
{
	actions="CombatActions";
	file="spoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatToPutDown : Default
{
	actions="CombatActions";
	file="spoloz.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class PutDown : Default
{
	actions="PutDownActions";
	file="spolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CombatToPutDown",2};
	connectTo[]={"PutDownToCombat",2};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class PutDownToCombat : Default
{
	actions="CombatActions";
	file="spoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatToMedic : Default
{
	actions="CombatActions";
	file="smedicstart.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class Medic : Default
{
	actions="MedicActions";
	file="smedicloop.rtm";
	speed=-3;
	looped=0;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CombatToMedic",2};
	connectTo[]={"MedicToCombat",2};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class MedicToCombat : Default
{
	actions="CombatActions";
	file="smedicend.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatToTreated : Default
{
	actions="CombatActions";
	file="sosetrenstart.rtm";
	speed=-5;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class Treated : Default
{
	actions="TreatedActions";
	file="sosetrenloop.rtm";
	speed=-3;
	looped=0;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CombatToTreated",2};
	connectTo[]={"TreatedToCombat",2};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class TreatedToCombat : Default
{
	actions="CombatActions";
	file="sosetrenend.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class StandToStandTakeFlag : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanipoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Stand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandTakeFlag : Default
{
	actions="StandTakeFlagActions";
	file="\sjc_anims\std\bezstanipolozstat.rtm";
	speed=-2.5;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"StandToStandTakeFlag",2};
	connectTo[]={"StandTakeFlagToStand",2};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandTakeFlagToStand : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanipoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Stand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandToStandPutDown : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanipoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Stand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandPutDown : Default
{
	actions="StandPutDownActions";
	file="\sjc_anims\std\bezstanipolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"StandToStandPutDown",2};
	connectTo[]={"StandPutDownToStand",2};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandPutDownToStand : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanipoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Stand",1};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class CivilToCivilTakeFlag : Default
{
	actions="CivilActions";
	file="civilstanipoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Civil",1};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilTakeFlag : Default
{
	actions="CivilTakeFlagActions";
	file="civilstanipolozstat.rtm";
	speed=-2.5;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CivilToCivilTakeFlag",2};
	connectTo[]={"CivilTakeFlagToCivil",2};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilTakeFlagToCivil : Default
{
	actions="CivilActions";
	file="civilstanipoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Civil",1};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilToCivilPutDown : Default
{
	actions="CivilActions";
	file="civilstanipoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Civil",1};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilPutDown : Default
{
	actions="CivilPutDownActions";
	file="civilstanipolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CivilToCivilPutDown",2};
	connectTo[]={"CivilPutDownToCivil",2};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilPutDownToCivil : Default
{
	actions="CivilActions";
	file="civilstanipoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Civil",1};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class LyingToPutDownLying : Default
{
	actions="LyingActions";
	file="lehpoloz.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Lying",1};
	interpolateTo[]={"LyingDying",0.1};
};

class PutDownLying : Default
{
	actions="PutDownLyingActions";
	file="lehpolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"LyingToPutDownLying",2};
	connectTo[]={"PutDownLyingToLying",2};
	interpolateTo[]={"LyingDying",0.1};
};

class PutDownLyingToLying : Default
{
	actions="LyingActions";
	file="lehpoloz2.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Lying",1};
	interpolateTo[]={"LyingDying",0.1};
};

class LyingToTreatedLying : Default
{
	actions="LyingActions";
	file="lehosetrenstart.rtm";
	speed=-5;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Lying",1};
	interpolateTo[]={"LyingDying",0.1};
};

class TreatedLying : Default
{
	actions="TreatedLyingActions";
	file="lehosetrenloop.rtm";
	speed=-3;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"LyingToTreatedLying",2};
	connectTo[]={"TreatedLyingToLying",2};
	interpolateTo[]={"LyingDying",0.1};
};

class TreatedLyingToLying : Default
{
	actions="LyingActions";
	file="lehosetrenend.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Lying",1};
	interpolateTo[]={"LyingDying",0.1};
};

class CivilLyingToCivilLyingTakeFlag : Default
{
	actions="CivilLyingActions";
	file="lehcivilpoloz1.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"CivilLying",1};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CivilLyingTakeFlag : Default
{
	actions="CivilLyingTakeFlagActions";
	file="lehcivilpolozstat.rtm";
	speed=-2.5;
	looped=1;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CivilLyingToCivilLyingTakeFlag",2};
	connectTo[]={"CivilLyingTakeFlagToCivilLying",2};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CivilLyingTakeFlagToCivilLying : Default
{
	actions="CivilLyingActions";
	file="lehcivilpoloz2.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"CivilLying",1};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CivilLyingToCivilLyingPutDown : Default
{
	actions="CivilLyingActions";
	file="lehcivilpoloz1.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"CivilLying",1};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CivilLyingPutDown : Default
{
	actions="CivilLyingPutDownActions";
	file="lehcivilpolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CivilLyingToCivilLyingPutDown",2};
	connectTo[]={"CivilLyingPutDownToCivilLying",2};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CivilLyingPutDownToCivilLying : Default
{
	actions="CivilLyingActions";
	file="lehcivilpoloz2.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"CivilLying",1};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class CombatReloadMGun : Default
{
	actions="CombatActions";
	file="kulometnabij.rtm";
	speed=-2.9300001;
	looped=0;
	disableWeapons=1;
};

class CombatReloadMortarStart : Default
{
	actions="CombatActions";
	file="minabijstart.rtm";
	speed=-2.415;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
};

class CombatReloadMortarEnd : Default
{
	actions="CombatActions";
	file="minabijend.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
};

class CombatThrowGrenadeStart : Default
{
	actions="CombatActions";
	file="sgranat.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatThrowGrenadeEnd : Default
{
	actions="CombatActions";
	file="sgranat2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatRunThrowGrenadeStart : Default
{
	actions="CombatRunFActions";
	file="sbehgranat.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CombatRunDying",0.1,"CombatRunDyingVer2",0.1};
};

class CombatRunThrowGrenadeEnd : Default
{
	actions="CombatRunFActions";
	file="sbehgranat2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	connectFrom[]={"Combat",1};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatStrokeGun : Default
{
	actions="CombatActions";
	file="spazba.rtm";
	speed=-2.2;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
	connectFrom[]={"Combat",1};
	connectTo[]={"CombatStrokeGunEnd",1};
};

class CombatStrokeGunEnd : Default
{
	actions="CombatActions";
	file="sstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
	connectTo[]={"Combat",1};
};

class CombatRunF : Default
{
	preload=1;
	actions="CombatRunFActions";
	file="\sjc_anims\std\sbeh0l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
	showWeaponAim=0;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class CombatRunLF : CombatRunF
{
	preload=0;
	file="\sjc_anims\std\sbeh-45l.rtm";
	speed=-0.7;
};

class CombatRunRF : CombatRunF
{
	preload=0;
	file="\sjc_anims\std\sbeh45l.rtm";
	speed=-0.7;
};

class CombatRunNF : CombatRunF
{
	preload=0;
	actions="CombatActions";
};

class CombatRunL : CombatRunNF
{
	file="\sjc_anims\std\sbeh-90l.rtm";
	speed=-0.7;
};

class CombatRunR : CombatRunNF
{
	file="\sjc_anims\std\sbeh90l.rtm";
	speed=-0.76;
};

class CombatRunLB : CombatRunNF
{
	actions="CombatRunBActions";
	file="\sjc_anims\std\sbeh-135l.rtm";
	speed=-0.7;
};

class CombatRunRB : CombatRunNF
{
	actions="CombatRunBActions";
	file="\sjc_anims\std\sbeh135l.rtm";
	speed=-0.7;
};

class CombatRunB : CombatRunNF
{
	actions="CombatRunBActions";
	file="\sjc_anims\std\sbeh180l.rtm";
	speed=-0.7;
	soundEdge1=1;
	soundEdge2=0.5;
};

class CombatSprintF : Default
{
	preload=1;
	actions="CombatRunFActions";
	looped=1;
	file="ssprint0.rtm";
	speed=-0.4;
	duty=0.6;
	showWeaponAim=0;
	enableOptics=0;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class CombatSprintLF : CombatSprintF
{
	preload=0;
	file="ssprint-45l.rtm";
	speed=-0.45;
	duty=0.6;
};

class CombatSprintRF : CombatSprintF
{
	preload=0;
	file="ssprint45l.rtm";
	speed=-0.45;
	duty=0.6;
};

class CombatTurnR : Default
{
	actions="CombatActions";
	file="svpravo.rtm";
	speed=-1.8;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.9;
	relSpeedMax=1.0;
};

class CombatTurnL : Default
{
	actions="CombatActions";
	file="svlevo.rtm";
	speed=-1.8;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.9;
	relSpeedMax=1.0;
};

class CombatTurnRRelaxed : CombatTurnR
{
	file="savaredoprava.rtm";
	speed=-2.5999999;
};

class CombatTurnLRelaxed : CombatTurnL
{
	file="savaredoleva.rtm";
	speed=-2.5999999;
};

class CombatWalkF : Default
{
	actions="CombatActions";
	file="schuze0l.rtm";
	speed=-0.8;
	looped=1;
	duty=-0.7;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class CombatWalkLF : CombatWalkF
{
	file="schuze-45l.rtm";
};

class CombatWalkRF : CombatWalkF
{
	file="schuze45l.rtm";
};

class CombatWalkL : CombatWalkF
{
	file="schuze-90l.rtm";
};

class CombatWalkR : CombatWalkF
{
	file="schuze90l.rtm";
};

class CombatWalkLB : CombatWalkF
{
	file="schuze-135l.rtm";
};

class CombatWalkRB : CombatWalkF
{
	file="schuze135l.rtm";
};

class CombatWalkB : CombatWalkF
{
	file="schuze180l.rtm";
};

class CrouchRunF : CombatRunF
{
	actions="CrouchRunFActions";
	file="\sjc_anims\std\crouchrun0.rtm";
	duty=0.3;
	speed=-0.58;
	looped=1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateFrom[]={"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
	interpolateTo[]={"Crouch",1,"CrouchWalkF",1};
	enableOptics=0;
};

class CrouchRunLF : CombatRunLF
{
	actions="CrouchRunFActions";
	interpolateWith[]={"Crouch",1};
	file="\sjc_anims\std\crouchrun-45.rtm";
	duty=0.3;
	speed=-0.58;
	looped=1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateFrom[]={"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
	interpolateTo[]={"Crouch",1,"CrouchWalkF",1};
	enableOptics=0;
};

class CrouchRunRF : CombatRunRF
{
	actions="CrouchRunFActions";
	interpolateWith[]={"Crouch",1};
	file="\sjc_anims\std\crouchrun45.rtm";
	duty=0.3;
	speed=-0.58;
	looped=1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateFrom[]={"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
	interpolateTo[]={"Crouch",1,"CrouchWalkF",1};
	enableOptics=0;
};

class CrouchRunL : CombatRunL
{
	actions="CrouchRunFActions";
	connectAs="CombatRunL";
	interpolateWith[]={"Crouch",1};
};

class CrouchRunR : CombatRunR
{
	actions="CrouchRunFActions";
	connectAs="CombatRunR";
	interpolateWith[]={"Crouch",1};
};

class CrouchRunLB : CombatRunLB
{
	actions="CrouchRunBActions";
	connectAs="CombatRunLB";
	interpolateWith[]={"Crouch",1};
	enableOptics=0;
};

class CrouchRunRB : CombatRunRB
{
	actions="CrouchRunBActions";
	connectAs="CombatRunRB";
	interpolateWith[]={"Crouch",1};
	enableOptics=0;
};

class CrouchRunB : CombatRunB
{
	actions="CrouchRunBActions";
	connectAs="CombatRunB";
	interpolateWith[]={"Crouch",1};
	enableOptics=0;
};

class CrouchWalkF : CombatWalkF
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk0.rtm";
	aimPrecision=2;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkLF : CombatWalkLF
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk-45.rtm";
	aimPrecision=2;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkRF : CombatWalkRF
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk45.rtm";
	aimPrecision=2;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkL : CombatWalkL
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk-90.rtm";
	aimPrecision=2;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkR : CombatWalkR
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk90.rtm";
	aimPrecision=2;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkLB : CombatWalkLB
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk-135.rtm";
	aimPrecision=2.5;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkRB : CombatWalkRB
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk135.rtm";
	aimPrecision=2.5;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchWalkB : CombatWalkB
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchwalk180.rtm";
	aimPrecision=3;
	speed=-0.8;
	looped=1;
	duty=0.1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateTo[]={"Crouch",1,"CrouchRunF",1};
	enableOptics=1;
	interpolateWith[]={"Crouch",1};
	interpolateFrom[]={"CrouchRunF",1};
};

class CrouchSprintF : CombatSprintF
{
	actions="CrouchRunFActions";
	connectAs="CombatSprintF";
	enableOptics=0;
};

class CrouchSprintLF : CombatSprintLF
{
	actions="CrouchRunFActions";
	connectAs="CombatSprintLF";
	enableOptics=0;
};

class CrouchSprintRF : CombatSprintRF
{
	actions="CrouchRunFActions";
	connectAs="CombatSprintRF";
	enableOptics=0;
};

class CrouchTurnR : CombatTurnR
{
	actions="CrouchActions";
	connectAs="CombatTurnR";
};

class CrouchTurnL : CombatTurnL
{
	actions="CrouchActions";
	connectAs="CombatTurnL";
};

class CrouchToBinocCrouch : Default
{
	actions="CrouchActions";
	file="klekdalekstart.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectFrom[]={"Crouch",2};
	interpolateTo[]={"CrouchDying",0.1};
};

class BinocCrouch : Default
{
	actions="BinocCrouchActions";
	file="klekdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	connectFrom[]={"CrouchToBinocCrouch",1};
	connectTo[]={"BinocCrouchToCrouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class BinocCrouchToCrouch : Default
{
	actions="CrouchActions";
	file="klekdalekend.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectTo[]={"Crouch",2};
	interpolateTo[]={"CrouchDying",0.1};
};

class CivilBase : Default
{
	aiming="aimingNo";
	actions="CivilActions";
	duty=-1;
	disableWapons=1;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
	interpolationSpeed=3;
};

class Civil : CivilBase
{
	file="civilstat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	variantAfter[]={1,3,6};
	variantsAI[]={"Civil",0.2,"CivilStillV1",0.8};
	equivalentTo="Civil";
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
	interpolateFrom[]={"CombatThrowGrenadeEnd",1};
};

class CivilStillV1 : Civil
{
	actions="CivilActions";
	file="civilstani.rtm";
	speed=-10;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CivilWalkF : CivilBase
{
	file="civilchuze0l.rtm";
	speed=-1.0;
	looped=1;
	duty=-0.7;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class CivilWalkLF : CivilWalkF
{
	file="civilchuze-45l.rtm";
};

class CivilWalkRF : CivilWalkF
{
	file="civilchuze45l.rtm";
};

class CivilWalkL : CivilWalkF
{
	file="civilchuze90l.rtm";
};

class CivilWalkR : CivilWalkF
{
	file="civilchuze-90l.rtm";
};

class CivilWalkLB : CivilWalkF
{
	file="civilchuze-135l.rtm";
};

class CivilWalkRB : CivilWalkF
{
	file="civilchuze135l.rtm";
};

class CivilWalkB : CivilWalkF
{
	file="civilchuze180l.rtm";
};

class CivilRunF : CivilWalkF
{
	actions="CivilRunFActions";
	file="civilbeh0l.rtm";
	speed=-0.55;
	looped=1;
	duty=-0.5;
};

class CivilRunLF : CivilRunF
{
	file="civilbeh-45l.rtm";
};

class CivilRunRF : CivilRunF
{
	file="civilbeh45l.rtm";
};

class CivilRunL : CivilRunF
{
	file="civilbeh-90l.rtm";
};

class CivilRunR : CivilRunF
{
	file="civilbeh90l.rtm";
};

class CivilRunB : CivilRunF
{
	actions="CivilActions";
	file="civilbeh180l.rtm";
};

class CivilRunLB : CivilRunB
{
	file="civilbeh-135l.rtm";
};

class CivilRunRB : CivilRunB
{
	file="civilbeh135l.rtm";
};

class CivilTurnR : CivilBase
{
	actions="CivilActions";
	file="civildoprava.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.9;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
};

class CivilTurnL : CivilBase
{
	actions="CivilActions";
	file="civildoleva.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.9;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
};

class CivilThrowGrenadeStart : Default
{
	actions="CivilActions";
	file="civilgranat1.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilThrowGrenadeEnd : Default
{
	actions="CivilActions";
	file="civilgranat2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilRunThrowGrenadeStart : Default
{
	actions="CivilRunFActions";
	file="behgranat1.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilRunThrowGrenadeEnd : Default
{
	actions="CivilRunFActions";
	file="behgranat2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilToCivilLying : Default
{
	actions="CivilLyingActions";
	file="civil2leh.rtm";
	speed=-1.5;
	looped=0;
	onLandEnd=1;
	enableOptics=0;
	soundEnabled=1;
	soundOverride="laydown";
	soundEdge1=0.1;
	soundEdge2=0.1;
	interpolateTo[]={"CivilLyingDying",1};
};

class CivilLyingToCivil : Default
{
	actions="CivilActions";
	file="leh2civil.rtm";
	speed=-2;
	looped=0;
	onLandBeg=1;
	enableOptics=0;
	soundEnabled=1;
	soundOverride="standup";
	soundEdge1=0.01;
	soundEdge2=0.01;
	interpolateTo[]={"CivilDying",1,"CivilDyingVer2",1};
};

class Lying : Default
{
	preload=1;
	actions="LyingActions";
	file="leh.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	duty=-1;
	visibleSize=0.25;
	aimPrecision=0.3;
	recoilSuffix="fixed";
};

class LyingNoAim : Lying
{
	preload=0;
	limitGunMovement=0;
	aiming="aimingLying";
	legs="legsNo";
};

class LyingStillV1 : Lying
{
	file="polehavani.rtm";
	speed=-6.1999998;
};

class LyingTurnL : Lying
{
	preload=0;
	file="plizenidoleva.rtm";
	speed=-4;
	duty=0.0;
};

class LyingTurnR : Lying
{
	preload=0;
	file="plizenidoprava.rtm";
	speed=-4;
	duty=0.0;
};

class LyingReloadMagazine : LyingNoAim
{
	preload=1;
	actions="LyingActions";
	file="plizeninabij.rtm";
	speed=-2.4000001;
	disableWeapons=1;
	looped=0;
	interpolateTo[]={"LyingDying",1};
};

class LyingThrowGrenadeStart : LyingNoAim
{
	looped=0;
	limitGunMovement=1;
	file="plazenigranat.rtm";
	speed=-1.8;
	disableWeapons=1;
	duty=0.0;
	interpolateTo[]={"LyingDying",0.1};
};

class LyingThrowGrenadeEnd : LyingNoAim
{
	looped=0;
	limitGunMovement=1;
	file="plazenigranat2.rtm";
	speed=-2.3;
	disableWeapons=1;
	duty=0.0;
	interpolateTo[]={"LyingDying",0.1};
};

class LyingCrawlF : LyingNoAim
{
	preload=1;
	actions="CrawlingActions";
	file="plazni0l.rtm";
	speed=-1.0;
	duty=0.0;
	disableWeapons=1;
	enableOptics=0;
	soundEnabled=1;
	soundOverride="crawl";
};

class LyingFastCrawlF : LyingCrawlF
{
	actions="CrawlingActions";
	file="ultraplaz.rtm";
	speed=-0.8;
	disableWeapons=1;
	duty=0.6;
};

class LyingCrawlLF : LyingCrawlF
{
	preload=0;
	file="plizeni-45l.rtm";
	speed=-1.0;
};

class LyingCrawlRF : LyingCrawlF
{
	preload=0;
	file="plizeni45l.rtm";
	speed=-1.0;
};

class LyingCrawlL : LyingCrawlF
{
	preload=0;
	actions="LyingActions";
	file="plizeni-90l.rtm";
	speed=-1.0;
};

class LyingCrawlR : LyingCrawlL
{
	preload=0;
	file="plizeni90l.rtm";
	speed=-1.0;
};

class LyingCrawlLB : LyingCrawlL
{
	preload=0;
	file="plizeni-135l.rtm";
	speed=-1.1;
};

class LyingCrawlRB : LyingCrawlL
{
	preload=0;
	file="plizeni135l.rtm";
	speed=-1.1;
};

class LyingCrawlB : LyingCrawlL
{
	preload=0;
	file="plizeni180L.rtm";
	speed=-1.1;
};

class LyingDying : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="plazenismrt.rtm";
	speed=-1;
	onLandEnd=1;
	looped=0;
	soundEnabled=0;
};

class CivilLying : Default
{
	actions="CivilLyingActions";
	file="lehcivil.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	duty=-1;
	disableWapons=1;
	disableWeaponsLong=1;
	visibleSize=0.25;
	aimPrecision=0.3;
	recoilSuffix="fixed";
};

class CivilLyingNoAim : CivilLying
{
	limitGunMovement=0;
	aiming="aimingNo";
	legs="legsNo";
};

class CivilLyingStillV1 : CivilLying
{
	file="lehcivilvar.rtm";
	speed=-6.1999998;
};

class CivilLyingCrawlF : CivilLyingNoAim
{
	actions="CivilCrawlingActions";
	file="plazni0l.rtm";
	speed=-1.0;
	duty=0.0;
};

class CivilLyingFastCrawlF : CivilLyingCrawlF
{
	actions="CivilCrawlingActions";
	file="ultraplaz.rtm";
	speed=-0.8;
	duty=0.6;
};

class CivilLyingCrawlLF : CivilLyingCrawlF
{
	file="plizeni-45l.rtm";
	speed=-1.0;
};

class CivilLyingCrawlRF : CivilLyingCrawlF
{
	file="plizeni45l.rtm";
	speed=-1.0;
};

class CivilLyingCrawlL : CivilLyingCrawlF
{
	actions="CivilLyingActions";
	file="plizeni-90l.rtm";
	speed=-1.0;
};

class CivilLyingCrawlR : CivilLyingCrawlL
{
	file="plizeni90l.rtm";
	speed=-1.0;
};

class CivilLyingCrawlLB : CivilLyingCrawlL
{
	file="plizeni-135l.rtm";
	speed=-1.1;
};

class CivilLyingCrawlRB : CivilLyingCrawlL
{
	file="plizeni135l.rtm";
	speed=-1.1;
};

class CivilLyingCrawlB : CivilLyingCrawlL
{
	file="plizeni180L.rtm";
	speed=-1.1;
};

class CivilLyingDying : DefaultDie
{
	actions="NoActions";
	file="civillehsmrt.rtm";
	speed=-1;
	onLandEnd=1;
	looped=0;
	soundEnabled=0;
};

class CivilLyingDead : CivilLyingDying
{
	actions="DeadActions";
	file="civillehsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
};

class WeaponDying : DefaultDie
{
	actions="NoActions";
	file="atsmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	soundEnabled=0;
};

class WeaponDyingVer2 : WeaponDying
{
	file="atsmrtB.rtm";
};

class WeaponDead : WeaponDying
{
	actions="DeadActions";
	file="atsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	variantsPlayer[]={"WeaponDead",0.5,"WeaponDeadVer2"};
	equivalentTo="WeaponDead";
	variantAfter[]={0,0,0};
	terminal=1;
};

class WeaponDeadVer2 : WeaponDead
{
	file="atsmrtB2.rtm";
};

class SitDownDying : DefaultDie
{
	actions="NoActions";
	file="\sjc_anims\std\bezsedismrt.rtm";
	speed=-0.6;
	looped=0;
	onLandEnd=1;
	soundEnabled=0;
};

class SitDownDead : SitDownDying
{
	actions="DeadActions";
	file="\sjc_anims\std\bezsedismrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
};

class StandDying : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="bezsmrt.rtm";
	speed=-2;
	looped=0;
	onLandEnd=1;
	interpolationSpeed=5;
};

class StandDead : StandDying
{
	actions="DeadActions";
	file="bezsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	variantsPlayer[]={"StandDead",0.5,"StandDeadVer2"};
	equivalentTo="StandDead";
	variantAfter[]={0,0,0};
	terminal=1;
};

class StandDyingVer2 : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="bezsmrtB.rtm";
	speed=-2;
	looped=0;
	onLandEnd=1;
	interpolationSpeed=5;
};

class StandDeadVer2 : StandDead
{
	actions="DeadActions";
	file="bezsmrtB2.rtm";
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
};

class CivilDying : DefaultDie
{
	actions="NoActions";
	file="civilsmrtb.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	interpolateFrom[]={};
	connectTo[]={"CivilDead",1};
};

class CivilDead : CivilDying
{
	actions="DeadActions";
	file="civilsmrtb2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	variantsPlayer[]={"CivilDead",0.5,"CivilDeadVer2"};
	variantAfter[]={0,0,0};
	equivalentTo="CivilDead";
};

class CivilDyingVer2 : CivilDying
{
	file="civilsmrt.rtm";
	connectTo[]={"CivilDeadVer2",1};
};

class CivilDeadVer2 : CivilDead
{
	file="civilsmrt2.rtm";
};

class CombatDying : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="ssmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"Combat",1};
	connectTo[]={"CombatDead",1};
};

class CombatDead : CombatDying
{
	actions="DeadActions";
	file="ssmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	variantsPlayer[]={"CombatDead",0.5,"CombatDeadVer3",0.2,"CombatDeadVer2"};
	variantAfter[]={0,0,0};
	equivalentTo="CombatDead";
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
};

class CombatDyingVer2 : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="ssmrtB.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"Combat",1};
	connectTo[]={"CombatDeadVer2",1};
};

class CombatDeadVer2 : CombatDead
{
	actions="DeadActions";
	file="ssmrtb2.rtm";
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
};

class CombatDyingVer3 : DefaultDie
{
	preload=1;
	actions="NoActions";
	file="kulometsmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"Combat",1};
	connectTo[]={"CombatDeadVer3",1};
};

class CombatDeadVer3 : CombatDead
{
	actions="DeadActions";
	file="kulometsmrt2.rtm";
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
};

class CombatRunDying : DefaultDie
{
	actions="NoActions";
	file="sbehsmrt0b.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	interpolateFrom[]={"CombatRunF",1};
	connectTo[]={"CombatRunDead",1};
};

class CombatRunDead : CombatRunDying
{
	actions="DeadActions";
	file="sbehsmrt0b2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	variantsPlayer[]={"CombatRunDead",0.75,"CombatRunDeadVer2"};
	variantAfter[]={0,0,0};
	equivalentTo="CombatRunDead";
};

class CombatRunDyingVer2 : DefaultDie
{
	actions="NoActions";
	file="sbehsmrt0.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	interpolateFrom[]={"CombatRunF",1};
	connectTo[]={"CombatRunDeadVer2",1};
};

class CombatRunDeadVer2 : CombatRunDyingVer2
{
	actions="DeadActions";
	file="sbehsmrt02.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	equivalentTo="CombatRunDead";
	variantAfter[]={0,0,0};
};

class CombatRunBDying : DefaultDie
{
	actions="NoActions";
	file="sbehsmrt180b.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	interpolateFrom[]={"CombatRunB",1};
	connectTo[]={"CombatRunBDead",1};
};

class CombatRunBDead : CombatRunBDying
{
	actions="DeadActions";
	file="sbehsmrt180b2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	variantsPlayer[]={"CombatRunBDead",0.75,"CombatRunBDeadVer2"};
	variantAfter[]={0,0,0};
	equivalentTo="CombatRunBDead";
};

class CombatRunBDyingVer2 : CombatRunBDying
{
	file="sbehsmrt180.rtm";
	connectTo[]={"CombatRunBDeadVer2",1};
};

class CombatRunBDeadVer2 : CombatRunBDead
{
	file="sbehsmrt1802.rtm";
};

class CombatRelaxedDying : DefaultDie
{
	actions="NoActions";
	file="kulometsmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"CombatRelaxed",1};
	connectTo[]={"CombatRelaxedDead",1};
};

class CombatRelaxedDead : DefaultDie
{
	actions="DeadActions";
	file="kulometsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	variantsPlayer[]={"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
	variantAfter[]={0,0,0};
};

class CombatRelaxedDyingVer2 : DefaultDie
{
	actions="NoActions";
	file="ssmrt.rtm";
	speed=-1.6;
	looped=0;
	onLandEnd=1;
	connectFrom[]={"CombatRelaxed",1};
	connectTo[]={"CombatRelaxedDeadVer2",1};
};

class CombatRelaxedDeadVer2 : DefaultDie
{
	actions="DeadActions";
	file="ssmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	connectFrom[]={};
	interpolateFrom[]={};
	connectTo[]={"DeadState",10};
	equivalentTo="CombatRelaxedDead";
	variantsPlayer[]={"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
	variantAfter[]={0,0,0};
};

class LyingDead : LyingDying
{
	actions="DeadActions";
	file="plazenismrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	terminal=1;
};

class CargoDying : DefaultDie
{
	actions="NoActions";
	file="Cargosmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
};

class CargoDead : CargoDying
{
	actions="DeadActions";
	file="Cargosmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"CargoDying",1};
	connectTo[]={"DeadState",1};
};

class CombatToWeapon : Default
{
	actions="WeaponActions";
	file="stanidoAT.rtm";
	speed=-2.4000001;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class LyingToWeapon : Default
{
	actions="WeaponActions";
	file="lehdoat.rtm";
	speed="- 3.0";
	visibleSize=0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class WeaponToLying : Default
{
	actions="WeaponActions";
	file="atdolehu.rtm";
	speed=-2.8;
	looped=0;
	visibleSize=0.7;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class Weapon : Default
{
	actions="WeaponActions";
	file="atstat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	enableMissile=1;
	duty=-1;
	visibleSize=0.6;
	aimPrecision=0.5;
	recoilSuffix="halffixed";
};

class WeaponWalkF : Weapon
{
	file="at0l.rtm";
	speed=-0.8;
	looped=1;
	duty=-0.5;
};

class WeaponWalkL : Weapon
{
	file="at-90l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponWalkR : Weapon
{
	file="at90l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponWalkB : Weapon
{
	file="at180l.rtm";
	speed=-0.9;
	looped=1;
	duty=-0.5;
};

class WeaponWalkLF : Weapon
{
	file="at-45l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponWalkRF : Weapon
{
	file="at45l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponWalkLB : Weapon
{
	file="at-135l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponWalkRB : Weapon
{
	file="at135l.rtm";
	speed=-0.6;
	looped=1;
	duty=-0.5;
};

class WeaponTurnL : Weapon
{
	file="atdoleva.rtm";
	speed=-1.5;
	looped=1;
	duty=-0.5;
	soundEnabled=0;
};

class WeaponTurnR : Weapon
{
	file="atdoprava.rtm";
	speed=-1.5;
	looped=1;
	duty=-0.5;
	soundEnabled=0;
};

class WeaponReloadAT : Weapon
{
	file="atnabij.rtm";
	speed=-4.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class WeaponRunF : Weapon
{
	preload=1;
	actions="WeaponActions";
	looped=1;
	file="\sjc_anims\std\runat0.rtm";
	speed=-0.55;
	duty=0.5;
	disableWeapons=1;
	enableMissile=0;
	showWeaponAim=0;
	enableOptics=0;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
};

class WeaponRunRF : WeaponRunF
{
	file="\sjc_anims\std\runat45.rtm";
	speed=-0.65;
};

class WeaponRunLF : WeaponRunF
{
	file="\sjc_anims\std\runat-45.rtm";
	speed=-0.65;
};

class WeaponRunL : WeaponRunF
{
	file="\sjc_anims\std\runat-90.rtm";
	speed=-0.7;
};

class WeaponRunR : WeaponRunF
{
	file="\sjc_anims\std\runat90.rtm";
	speed=-0.7;
};

class WeaponToCombat : Default
{
	actions="WeaponActions";
	file="ATdostani.rtm";
	speed="- 1.5";
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Weapon",2};
	connectTo[]={"Combat",2};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class Driver : Default
{
	actions="CargoActions";
	file="cargo.rtm";
	speed=-25;
	looped=1;
	soundEnabled=0;
};

class Pilot : Driver
{
	file="cargo.rtm";
	speed=-1;
	looped=1;
};

class Gunner : Driver
{
	file="cargo.rtm";
	speed=-10;
	looped=1;
};

class Commander : Driver
{
	file="cargo.rtm";
	speed=-10;
	looped=1;
};

class Cargo : Driver
{
	actions="CargoActions";
	file="cargostat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"CargoVer1",0.6,"CargoVer2",0.1,"CargoVer3",0.1,"CargoVer4",0.1,"CargoVer5",0.1,"Cargo"};
	equivalentTo="Cargo";
	interpolationSpeed=1;
};

class CargoVer1 : Cargo
{
	file="cargosoft.rtm";
	speed=-3.8;
	looped=1;
};

class CargoVer2 : Cargo
{
	file="cargomenipusku.rtm";
	speed=-3.8;
	looped=1;
};

class CargoVer3 : Cargo
{
	file="cargopuska.rtm";
	speed=-4.1999998;
	looped=1;
};

class CargoVer4 : Cargo
{
	file="cargorozhlizise.rtm";
	speed=-3.2;
	looped=1;
};

class CargoVer5 : Cargo
{
	file="cargo.rtm";
	speed=-9.6000004;
	looped=1;
};

class M113Gunner : Driver
{
	file="M113Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M113GunnerV1",0.7,"M113Gunner"};
	interpolateWith[]={"M113GunnerV1",0.5};
	equivalentTo="M113Gunner";
	interpolationSpeed=1;
	connectTo[]={"M113GunnerDying",1};
};

class M113GunnerV1 : M113Gunner
{
	file="M113Gunner.rtm";
	speed=-4;
	looped=1;
};

class M113GunnerDying : DefaultDie
{
	actions="NoActions";
	file="M113Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M113Gunner",1};
};

class M113GunnerDead : M113GunnerDying
{
	actions="DeadActions";
	file="M113Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M113GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class M113Driver : Driver
{
	file="M113Driverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M113DriverV1",0.7,"M113Driver"};
	interpolateWith[]={"M113DriverV1",0.5};
	equivalentTo="M113Driver";
	interpolationSpeed=1;
};

class M113DriverV1 : M113Driver
{
	file="M113Driver.rtm";
	speed=-4;
	looped=1;
};

class M113DriverOut : Driver
{
	file="M113DriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M113DriverOutV1",0.7,"M113DriverOut"};
	interpolateWith[]={"M113DriverOutV1",0.5};
	equivalentTo="M113DriverOut";
	interpolationSpeed=1;
	connectTo[]={"M113DriverOutDying",1};
};

class M113DriverOutV1 : M113DriverOut
{
	file="M113DriverOut.rtm";
	speed=-4;
	looped=1;
};

class M113DriverOutDying : DefaultDie
{
	actions="NoActions";
	file="M113DriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M113DriverOut",1};
};

class M113DriverOutDead : M113DriverOutDying
{
	actions="DeadActions";
	file="M113DriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M113DriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class M113Medic : Driver
{
	file="M113Medicstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M113MedicV1",0.7,"M113Medic"};
	interpolateWith[]={"M113MedicV1",0.5};
	equivalentTo="M113Medic";
	interpolationSpeed=1;
};

class M113MedicV1 : M113Medic
{
	file="M113Medic.rtm";
	speed=-4;
	looped=1;
};

class Nemocnej : Driver
{
	file="Nemocnejstat.rtm";
	speed=10000000000.0;
	looped=1;
};

class M60Gunner : Driver
{
	file="M60Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M60GunnerV1",0.7,"M60Gunner"};
	interpolateWith[]={"M60GunnerV1",0.5};
	equivalentTo="M60Gunner";
	interpolationSpeed=1;
};

class M60GunnerV1 : M60Gunner
{
	file="M60Gunner.rtm";
	speed=-4;
	looped=1;
};

class M60Driver : Driver
{
	file="M60Driverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M60DriverV1",0.7,"M60Driver"};
	interpolateWith[]={"M60DriverV1",0.5};
	equivalentTo="M60Driver";
	interpolationSpeed=1;
};

class M60DriverV1 : M60Driver
{
	file="M60Driver.rtm";
	speed=-4;
	looped=1;
};

class M60Commander : Driver
{
	file="M60Commanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M60CommanderV1",0.7,"M60Commander"};
	interpolateWith[]={"M60CommanderV1",0.5};
	equivalentTo="M60Commander";
	interpolationSpeed=1;
};

class M60CommanderV1 : M60Commander
{
	file="M60Commander.rtm";
	speed=-4;
	looped=1;
};

class M60DriverOut : Driver
{
	file="M60DriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M60DriverOutV1",0.7,"M60DriverOut"};
	interpolateWith[]={"M60DriverOutV1",0.5};
	equivalentTo="M60DriverOut";
	interpolationSpeed=1;
	connectTo[]={"M60DriverOutDying",1};
};

class M60DriverOutV1 : M60DriverOut
{
	file="M60DriverOut.rtm";
	speed=-4;
	looped=1;
};

class M60DriverOutDying : DefaultDie
{
	actions="NoActions";
	file="M60DriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M60DriverOut",1};
};

class M60DriverOutDead : M60DriverOutDying
{
	actions="DeadActions";
	file="M60DriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M60DriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class M60CommanderOut : Driver
{
	file="M60CommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M60CommanderOutV1",0.7,"M60CommanderOut"};
	interpolateWith[]={"M60CommanderOutV1",0.5};
	equivalentTo="M60CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"M60CommanderOutDying",1};
};

class M60CommanderOutV1 : M60CommanderOut
{
	file="M60CommanderOut.rtm";
	speed=-4;
	looped=1;
};

class M60CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="M60CommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M60CommanderOut",1};
};

class M60CommanderOutDead : M60CommanderOutDying
{
	actions="DeadActions";
	file="M60CommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M60CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class M1A1Commander : Driver
{
	file="M1A1Commanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M1A1CommanderV1",0.7,"M1A1Commander"};
	interpolateWith[]={"M1A1CommanderV1",0.5};
	equivalentTo="M1A1Commander";
	interpolationSpeed=1;
};

class M1A1CommanderV1 : M1A1Commander
{
	file="M1A1Commander.rtm";
	speed=-4;
	looped=1;
};

class M1A1Gunner : Driver
{
	file="M1A1Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M1A1GunnerV1",0.7,"M1A1Gunner"};
	interpolateWith[]={"M1A1GunnerV1",0.5};
	equivalentTo="M1A1Gunner";
	interpolationSpeed=1;
};

class M1A1GunnerV1 : M1A1Gunner
{
	file="M1A1Gunner.rtm";
	speed=-4;
	looped=1;
};

class M1A1Driver : Driver
{
	file="M1A1Driverstat.rtm";
	speed=10000000000.0;
	looped=1;
};

class M1A1DriverOut : Driver
{
	file="M1A1DriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M1A1DriverOutV1",0.7,"M1A1DriverOut"};
	interpolateWith[]={"M1A1DriverOutV1",0.5};
	equivalentTo="M1A1DriverOut";
	interpolationSpeed=1;
	connectTo[]={"M1A1DriverOutDying",1};
};

class M1A1DriverOutV1 : M1A1DriverOut
{
	file="M1A1DriverOut.rtm";
	speed=-4;
	looped=1;
};

class M1A1DriverOutDying : DefaultDie
{
	actions="NoActions";
	file="M1A1DriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M1A1DriverOut",1};
};

class M1A1DriverOutDead : M1A1DriverOutDying
{
	actions="DeadActions";
	file="M1A1DriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M1A1DriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class M1A1CommanderOut : Driver
{
	file="M1A1CommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M1A1CommanderOutV1",0.7,"M1A1CommanderOut"};
	interpolateWith[]={"M1A1CommanderOutV1",0.5};
	equivalentTo="M1A1CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"M1A1CommanderOutDying",1};
};

class M1A1CommanderOutV1 : M1A1CommanderOut
{
	file="M1A1CommanderOut.rtm";
	speed=-4;
	looped=1;
};

class M1A1CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="M1A1CommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M1A1CommanderOut",1};
};

class M1A1CommanderOutDead : M1A1CommanderOutDying
{
	actions="DeadActions";
	file="M1A1CommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M1A1CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class BMPGunner : Driver
{
	file="BMPGunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPGunnerV1",0.7,"BMPGunner"};
	interpolateWith[]={"BMPGunnerV1",0.5};
	equivalentTo="BMPGunner";
	interpolationSpeed=1;
};

class BMPGunnerV1 : BMPGunner
{
	file="BMPGunner.rtm";
	speed=-4;
	looped=1;
};

class BMPDriver : Driver
{
	file="BMPDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPDriverV1",0.7,"BMPDriver"};
	interpolateWith[]={"BMPDriverV1",0.5};
	equivalentTo="BMPDriver";
	interpolationSpeed=1;
};

class BMPDriverV1 : BMPDriver
{
	file="BMPDriver.rtm";
	speed=-4;
	looped=1;
};

class BMPCommander : Driver
{
	file="BMPCommanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPCommanderV1",0.7,"BMPCommander"};
	interpolateWith[]={"BMPCommanderV1",0.5};
	equivalentTo="BMPCommander";
	interpolationSpeed=1;
};

class BMPCommanderV1 : BMPCommander
{
	file="BMPCommander.rtm";
	speed=-4;
	looped=1;
};

class BMPGunnerOut : Driver
{
	file="BMPGunnerOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPGunnerOutV1",0.7,"BMPGunnerOut"};
	interpolateWith[]={"BMPGunnerOutV1",0.5};
	equivalentTo="BMPGunnerOut";
	interpolationSpeed=1;
	connectTo[]={"BMPGunnerOutDying",1};
};

class BMPGunnerOutV1 : BMPGunnerOut
{
	file="BMPGunnerOut.rtm";
	speed=-4;
	looped=1;
};

class BMPGunnerOutDying : DefaultDie
{
	actions="NoActions";
	file="BMPGunnerOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"BMPGunnerOut",1};
};

class BMPGunnerOutDead : BMPGunnerOutDying
{
	actions="DeadActions";
	file="BMPGunnerOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"BMPGunnerOutDying",1};
	connectTo[]={"DeadState",1};
};

class BMPDriverOut : Driver
{
	file="BMPDriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPDriverOutV1",0.7,"BMPDriverOut"};
	interpolateWith[]={"BMPDriverOutV1",0.5};
	equivalentTo="BMPDriverOut";
	interpolationSpeed=1;
	connectTo[]={"BMPDriverOutDying",1};
};

class BMPDriverOutV1 : BMPDriverOut
{
	file="BMPDriverOut.rtm";
	speed=-4;
	looped=1;
};

class BMPDriverOutDying : DefaultDie
{
	actions="NoActions";
	file="BMPDriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"BMPDriverOut",1};
};

class BMPDriverOutDead : BMPDriverOutDying
{
	actions="DeadActions";
	file="BMPDriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"BMPDriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class BMPCommanderOut : Driver
{
	file="BMPCommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"BMPCommanderOutV1",0.7,"BMPCommanderOut"};
	interpolateWith[]={"BMPCommanderOutV1",0.5};
	equivalentTo="BMPCommanderOut";
	interpolationSpeed=1;
	connectTo[]={"BMPCommanderOutDying",1};
};

class BMPCommanderOutV1 : BMPCommanderOut
{
	file="BMPCommanderOut.rtm";
	speed=-4;
	looped=1;
};

class BMPCommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="BMPCommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"BMPCommanderOut",1};
};

class BMPCommanderOutDead : BMPCommanderOutDying
{
	actions="DeadActions";
	file="BMPCommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"BMPCommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class T72Gunner : Driver
{
	file="T72Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T72GunnerV1",0.7,"T72Gunner"};
	interpolateWith[]={"T72GunnerV1",0.5};
	equivalentTo="T72Gunner";
	interpolationSpeed=1;
};

class T72GunnerV1 : T72Gunner
{
	file="T72Gunner.rtm";
	speed=-4;
	looped=1;
};

class T72Driver : Driver
{
	file="T72Driverstat.rtm";
	speed=10000000000.0;
	looped=1;
};

class T72Commander : Driver
{
	file="T72Commanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T72CommanderV1",0.7,"T72Commander"};
	interpolateWith[]={"T72CommanderV1",0.5};
	equivalentTo="T72Commander";
	interpolationSpeed=1;
};

class T72CommanderV1 : T72Commander
{
	file="T72Commander.rtm";
	speed=-4;
	looped=1;
};

class T72DriverOut : Driver
{
	file="T72DriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T72DriverOutV1",0.7,"T72DriverOut"};
	interpolateWith[]={"T72DriverOutV1",0.5};
	equivalentTo="T72DriverOut";
	interpolationSpeed=1;
	connectTo[]={"T72DriverOutDying",1};
};

class T72DriverOutV1 : T72DriverOut
{
	file="T72DriverOut.rtm";
	speed=-4;
	looped=1;
};

class T72DriverOutDying : DefaultDie
{
	actions="NoActions";
	file="T72DriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T72DriverOut",1};
};

class T72DriverOutDead : T72DriverOutDying
{
	actions="DeadActions";
	file="T72DriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T72DriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class T72GunnerOut : Driver
{
	file="T72GunnerOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T72GunnerOutV1",0.7,"T72GunnerOut"};
	interpolateWith[]={"T72GunnerOutV1",0.5};
	equivalentTo="T72GunnerOut";
	interpolationSpeed=1;
	connectTo[]={"T72GunnerOutDying",1};
};

class T72GunnerOutV1 : T72GunnerOut
{
	file="T72GunnerOut.rtm";
	speed=-4;
	looped=1;
};

class T72GunnerOutDying : DefaultDie
{
	actions="NoActions";
	file="T72GunnerOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T72GunnerOut",1};
};

class T72GunnerOutDead : T72GunnerOutDying
{
	actions="DeadActions";
	file="T72GunnerOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T72GunnerOutDying",1};
	connectTo[]={"DeadState",1};
};

class T72CommanderOut : Driver
{
	file="T72CommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T72CommanderOutV1",0.7,"T72CommanderOut"};
	interpolateWith[]={"T72CommanderOutV1",0.5};
	equivalentTo="T72CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"T72CommanderOutDying",1};
};

class T72CommanderOutV1 : T72CommanderOut
{
	file="T72CommanderOut.rtm";
	speed=-4;
	looped=1;
};

class T72CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="T72CommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T72CommanderOut",1};
};

class T72CommanderOutDead : T72CommanderOutDying
{
	actions="DeadActions";
	file="T72CommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T72CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class T80GunnerOut : Driver
{
	file="T80GunnerOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T80GunnerOutV1",0.7,"T80GunnerOut"};
	interpolateWith[]={"T80GunnerOutV1",0.5};
	equivalentTo="T80GunnerOut";
	interpolationSpeed=1;
	connectTo[]={"T80GunnerOutDying",1};
};

class T80GunnerOutV1 : T80GunnerOut
{
	file="T80GunnerOut.rtm";
	speed=-4;
	looped=1;
};

class T80GunnerOutDying : DefaultDie
{
	actions="NoActions";
	file="T80GunnerOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T80GunnerOut",1};
};

class T80GunnerOutDead : T80GunnerOutDying
{
	actions="DeadActions";
	file="T80GunnerOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T80GunnerOutDying",1};
	connectTo[]={"DeadState",1};
};

class T80CommanderOut : Driver
{
	file="T80CommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T80CommanderOutV1",0.7,"T80CommanderOut"};
	interpolateWith[]={"T80CommanderOutV1",0.5};
	equivalentTo="T80CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"T80CommanderOutDying",1};
};

class T80CommanderOutV1 : T80CommanderOut
{
	file="T80CommanderOut.rtm";
	speed=-4;
	looped=1;
};

class T80CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="T80CommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T80CommanderOut",1};
};

class T80CommanderOutDead : T80CommanderOutDying
{
	actions="DeadActions";
	file="T80CommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T80CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class T55Gunner : Driver
{
	file="T55Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T55GunnerV1",0.7,"T55Gunner"};
	interpolateWith[]={"T55GunnerV1",0.5};
	equivalentTo="T55Gunner";
	interpolationSpeed=1;
};

class T55GunnerV1 : T55Gunner
{
	file="T55Gunner.rtm";
	speed=-4;
	looped=1;
};

class T55Commander : Driver
{
	file="T55Commanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T55CommanderV1",0.7,"T55Commander"};
	interpolateWith[]={"T55CommanderV1",0.5};
	equivalentTo="T55Commander";
	interpolationSpeed=1;
};

class T55CommanderV1 : T55Commander
{
	file="T55Commander.rtm";
	speed=-4;
	looped=1;
};

class T55DriverOut : Driver
{
	file="T55DriverOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T55DriverOutV1",0.7,"T55DriverOut"};
	interpolateWith[]={"T55DriverOutV1",0.5};
	equivalentTo="T55DriverOut";
	interpolationSpeed=1;
	connectTo[]={"T55DriverOutDying",1};
};

class T55DriverOutV1 : T55DriverOut
{
	file="T55DriverOut.rtm";
	speed=-4;
	looped=1;
};

class T55DriverOutDying : DefaultDie
{
	actions="NoActions";
	file="T55DriverOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T55DriverOut",1};
};

class T55DriverOutDead : T55DriverOutDying
{
	actions="DeadActions";
	file="T55DriverOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T55DriverOutDying",1};
	connectTo[]={"DeadState",1};
};

class T55CommanderOut : Driver
{
	file="T55CommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"T55CommanderOutV1",0.7,"T55CommanderOut"};
	interpolateWith[]={"T55CommanderOutV1",0.5};
	equivalentTo="T55CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"T55CommanderOutDying",1};
};

class T55CommanderOutV1 : T55CommanderOut
{
	file="T55CommanderOut.rtm";
	speed=-4;
	looped=1;
};

class T55CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="T55CommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"T55CommanderOut",1};
};

class T55CommanderOutDead : T55CommanderOutDying
{
	actions="DeadActions";
	file="T55CommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"T55CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class ZSUGunner : Driver
{
	file="ZSUGunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ZSUGunnerV1",0.7,"ZSUGunner"};
	interpolateWith[]={"ZSUGunnerV1",0.5};
	equivalentTo="ZSUGunner";
	interpolationSpeed=1;
};

class ZSUGunnerV1 : ZSUGunner
{
	file="ZSUGunner.rtm";
	speed=-4;
	looped=1;
};

class ZSUDriver : Driver
{
	file="ZSUDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ZSUDriverV1",0.7,"ZSUDriver"};
	interpolateWith[]={"ZSUDriverV1",0.5};
	equivalentTo="ZSUDriver";
	interpolationSpeed=1;
	connectTo[]={"ZSUDriverDying",1};
};

class ZSUDriverV1 : ZSUDriver
{
	file="ZSUDriver.rtm";
	speed=-4;
	looped=1;
};

class ZSUDriverDying : DefaultDie
{
	actions="NoActions";
	file="ZSUDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ZSUDriver",1};
};

class ZSUDriverDead : ZSUDriverDying
{
	actions="DeadActions";
	file="ZSUDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ZSUDriverDying",1};
	connectTo[]={"DeadState",1};
};

class ZSUCommander : Driver
{
	file="ZSUCommanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ZSUCommanderV1",0.7,"ZSUCommander"};
	interpolateWith[]={"ZSUCommanderV1",0.5};
	equivalentTo="ZSUCommander";
	interpolationSpeed=1;
};

class ZSUCommanderV1 : ZSUCommander
{
	file="ZSUCommander.rtm";
	speed=-4;
	looped=1;
};

class ZSUGunnerOut : Driver
{
	file="ZSUGunnerOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ZSUGunnerOutV1",0.7,"ZSUGunnerOut"};
	interpolateWith[]={"ZSUGunnerOutV1",0.5};
	equivalentTo="ZSUGunnerOut";
	interpolationSpeed=1;
	connectTo[]={"ZSUGunnerOutDying",1};
};

class ZSUGunnerOutV1 : ZSUGunnerOut
{
	file="ZSUGunnerOut.rtm";
	speed=-4;
	looped=1;
};

class ZSUGunnerOutDying : DefaultDie
{
	actions="NoActions";
	file="ZSUGunnerOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ZSUGunnerOut",1};
};

class ZSUGunnerOutDead : ZSUGunnerOutDying
{
	actions="DeadActions";
	file="ZSUGunnerOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ZSUGunnerOutDying",1};
	connectTo[]={"DeadState",1};
};

class ZSUCommanderOut : Driver
{
	file="ZSUCommanderOutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ZSUCommanderOutV1",0.7,"ZSUCommanderOut"};
	interpolateWith[]={"ZSUCommanderOutV1",0.5};
	equivalentTo="ZSUCommanderOut";
	interpolationSpeed=1;
	connectTo[]={"ZSUCommanderOutDying",1};
};

class ZSUCommanderOutV1 : ZSUCommanderOut
{
	file="ZSUCommanderOut.rtm";
	speed=-4;
	looped=1;
};

class ZSUCommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="ZSUCommanderOutsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ZSUCommanderOut",1};
};

class ZSUCommanderOutDead : ZSUCommanderOutDying
{
	actions="DeadActions";
	file="ZSUCommanderOutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ZSUCommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class UH60Pilot : Driver
{
	file="UH60Pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UH60PilotV1",0.7,"UH60Pilot"};
	interpolateWith[]={"UH60PilotV1",0.5};
	equivalentTo="UH60Pilot";
	interpolationSpeed=1;
	connectTo[]={"UH60PilotDying",1};
};

class UH60PilotV1 : UH60Pilot
{
	file="UH60Pilot.rtm";
	speed=-4;
	looped=1;
};

class UH60PilotDying : DefaultDie
{
	actions="NoActions";
	file="UH60Pilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UH60Pilot",1};
};

class UH60PilotDead : UH60PilotDying
{
	actions="DeadActions";
	file="UH60Pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UH60PilotDying",1};
	connectTo[]={"DeadState",1};
};

class UH60Gunner : Driver
{
	file="UH60Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UH60GunnerV1",0.7,"UH60Gunner"};
	interpolateWith[]={"UH60GunnerV1",0.5};
	equivalentTo="UH60Gunner";
	interpolationSpeed=1;
	connectTo[]={"UH60GunnerDying",1};
};

class UH60GunnerV1 : UH60Gunner
{
	file="UH60Gunner.rtm";
	speed=-4;
	looped=1;
};

class UH60GunnerDying : DefaultDie
{
	actions="NoActions";
	file="UH60Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UH60Gunner",1};
};

class UH60GunnerDead : UH60GunnerDying
{
	actions="DeadActions";
	file="UH60Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UH60GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class AH1Pilot : Driver
{
	file="AH1Pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"AH1PilotV1",0.7,"AH1Pilot"};
	interpolateWith[]={"AH1PilotV1",0.5};
	equivalentTo="AH1Pilot";
	interpolationSpeed=1;
	connectTo[]={"AH1PilotDying",1};
};

class AH1PilotV1 : AH1Pilot
{
	file="AH1Pilot.rtm";
	speed=-4;
	looped=1;
};

class AH1PilotDying : DefaultDie
{
	actions="NoActions";
	file="AH1Pilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"AH1Pilot",1};
};

class AH1PilotDead : AH1PilotDying
{
	actions="DeadActions";
	file="AH1Pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"AH1PilotDying",1};
	connectTo[]={"DeadState",1};
};

class AH1Gunner : Driver
{
	file="AH1Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"AH1GunnerV1",0.7,"AH1Gunner"};
	interpolateWith[]={"AH1GunnerV1",0.5};
	equivalentTo="AH1Gunner";
	interpolationSpeed=1;
	connectTo[]={"AH1GunnerDying",1};
};

class AH1GunnerV1 : AH1Gunner
{
	file="AH1Gunner.rtm";
	speed=-4;
	looped=1;
};

class AH1GunnerDying : DefaultDie
{
	actions="NoActions";
	file="AH1Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"AH1Gunner",1};
};

class AH1GunnerDead : AH1GunnerDying
{
	actions="DeadActions";
	file="AH1Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"AH1GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class A10Pilot : Driver
{
	file="A10Pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"A10PilotV1",0.7,"A10Pilot"};
	interpolateWith[]={"A10PilotV1",0.5};
	equivalentTo="A10Pilot";
	interpolationSpeed=1;
	connectTo[]={"A10PilotDying",1};
};

class A10PilotV1 : A10Pilot
{
	file="A10Pilot.rtm";
	speed=-4;
	looped=1;
};

class A10PilotDying : DefaultDie
{
	actions="NoActions";
	file="A10Pilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"A10Pilot",1};
};

class A10PilotDead : A10PilotDying
{
	actions="DeadActions";
	file="A10Pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"A10PilotDying",1};
	connectTo[]={"DeadState",1};
};

class CesnaPilot : Driver
{
	file="CesnaPilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"CesnaPilotV1",0.7,"CesnaPilot"};
	interpolateWith[]={"CesnaPilotV1",0.5};
	equivalentTo="CesnaPilot";
	interpolationSpeed=1;
	connectTo[]={"CesnaPilotDying",1};
};

class CesnaPilotV1 : CesnaPilot
{
	file="CesnaPilot.rtm";
	speed=-4;
	looped=1;
};

class CesnaPilotDying : DefaultDie
{
	actions="NoActions";
	file="CesnaPilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"CesnaPilot",1};
};

class CesnaPilotDead : CesnaPilotDying
{
	actions="DeadActions";
	file="CesnaPilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"CesnaPilotDying",1};
	connectTo[]={"DeadState",1};
};

class CesnaCargo : Driver
{
	file="CesnaCargostat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"CesnaCargoV1",0.7,"CesnaCargo"};
	interpolateWith[]={"CesnaCargoV1",0.5};
	equivalentTo="CesnaCargo";
	interpolationSpeed=1;
	connectTo[]={"CesnaCargoDying",1};
};

class CesnaCargoV1 : CesnaCargo
{
	file="CesnaCargo.rtm";
	speed=-4;
	looped=1;
};

class CesnaCargoDying : DefaultDie
{
	actions="NoActions";
	file="CesnaCargosmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"CesnaCargo",1};
};

class CesnaCargoDead : CesnaCargoDying
{
	actions="DeadActions";
	file="CesnaCargosmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"CesnaCargoDying",1};
	connectTo[]={"DeadState",1};
};

class Mi17Pilot : Driver
{
	file="Mi17Pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"Mi17PilotV1",0.7,"Mi17Pilot"};
	interpolateWith[]={"Mi17PilotV1",0.5};
	equivalentTo="Mi17Pilot";
	interpolationSpeed=1;
	connectTo[]={"Mi17PilotDying",1};
};

class Mi17PilotV1 : Mi17Pilot
{
	file="Mi17Pilot.rtm";
	speed=-4;
	looped=1;
};

class Mi17PilotDying : DefaultDie
{
	actions="NoActions";
	file="Mi17Pilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Mi17Pilot",1};
};

class Mi17PilotDead : Mi17PilotDying
{
	actions="DeadActions";
	file="Mi17Pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"Mi17PilotDying",1};
	connectTo[]={"DeadState",1};
};

class Mi24Pilot : Driver
{
	file="Mi24Pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"Mi24PilotV1",0.7,"Mi24Pilot"};
	interpolateWith[]={"Mi24PilotV1",0.5};
	equivalentTo="Mi24Pilot";
	interpolationSpeed=1;
	connectTo[]={"Mi24PilotDying",1};
};

class Mi24PilotV1 : Mi24Pilot
{
	file="Mi24Pilot.rtm";
	speed=-4;
	looped=1;
};

class Mi24PilotDying : DefaultDie
{
	actions="NoActions";
	file="Mi24Pilotsmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Mi24Pilot",1};
};

class Mi24PilotDead : Mi24PilotDying
{
	actions="DeadActions";
	file="Mi24Pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"Mi24PilotDying",1};
	connectTo[]={"DeadState",1};
};

class Mi24Gunner : Driver
{
	file="Mi24Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"Mi24GunnerV1",0.7,"Mi24Gunner"};
	interpolateWith[]={"Mi24GunnerV1",0.5};
	equivalentTo="Mi24Gunner";
	interpolationSpeed=1;
	connectTo[]={"Mi24GunnerDying",1};
};

class Mi24GunnerV1 : Mi24Gunner
{
	file="Mi24Gunner.rtm";
	speed=-4;
	looped=1;
};

class Mi24GunnerDying : DefaultDie
{
	actions="NoActions";
	file="Mi24Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Mi24Gunner",1};
};

class Mi24GunnerDead : Mi24GunnerDying
{
	actions="DeadActions";
	file="Mi24Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"Mi24GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class 5TDriver : Driver
{
	file="5TDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"5TDriverV1",0.7,"5TDriver"};
	interpolateWith[]={"5TDriverV1",0.5};
	equivalentTo="5TDriver";
	interpolationSpeed=1;
	connectTo[]={"5TDriverDying",1};
};

class 5TDriverV1 : 5TDriver
{
	file="5TDriver.rtm";
	speed=-4;
	looped=1;
};

class 5TDriverDying : DefaultDie
{
	actions="NoActions";
	file="5TDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"5TDriver",1};
};

class 5TDriverDead : 5TDriverDying
{
	actions="DeadActions";
	file="5TDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"5TDriverDying",1};
	connectTo[]={"DeadState",1};
};

class 5TCoDriver : Driver
{
	file="5TCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"5TCoDriverV1",0.7,"5TCoDriver"};
	interpolateWith[]={"5TCoDriverV1",0.5};
	equivalentTo="5TCoDriver";
	interpolationSpeed=1;
	connectTo[]={"5TCoDriverDying",1};
};

class 5TCoDriverV1 : 5TCoDriver
{
	file="5TCoDriver.rtm";
	speed=-4;
	looped=1;
};

class 5TCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="5TCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"5TCoDriver",1};
};

class 5TCoDriverDead : 5TCoDriverDying
{
	actions="DeadActions";
	file="5TCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"5TCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class UralDriver : Driver
{
	file="UralDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UralDriverV1",0.7,"UralDriver"};
	interpolateWith[]={"UralDriverV1",0.5};
	equivalentTo="UralDriver";
	interpolationSpeed=1;
	connectTo[]={"UralDriverDying",1};
};

class UralDriverV1 : UralDriver
{
	file="UralDriver.rtm";
	speed=-4;
	looped=1;
};

class UralDriverDying : DefaultDie
{
	actions="NoActions";
	file="UralDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UralDriver",1};
};

class UralDriverDead : UralDriverDying
{
	actions="DeadActions";
	file="UralDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UralDriverDying",1};
	connectTo[]={"DeadState",1};
};

class UralCoDriver : Driver
{
	file="UralCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UralCoDriverV1",0.7,"UralCoDriver"};
	interpolateWith[]={"UralCoDriverV1",0.5};
	equivalentTo="UralCoDriver";
	interpolationSpeed=1;
	connectTo[]={"UralCoDriverDying",1};
};

class UralCoDriverV1 : UralCoDriver
{
	file="UralCoDriver.rtm";
	speed=-4;
	looped=1;
};

class UralCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="UralCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UralCoDriver",1};
};

class UralCoDriverDead : UralCoDriverDying
{
	actions="DeadActions";
	file="UralCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UralCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class V3SDriver : Driver
{
	file="V3SDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"V3SDriverV1",0.7,"V3SDriver"};
	interpolateWith[]={"V3SDriverV1",0.5};
	equivalentTo="V3SDriver";
	interpolationSpeed=1;
	connectTo[]={"V3SDriverDying",1};
};

class V3SDriverV1 : V3SDriver
{
	file="V3SDriver.rtm";
	speed=-4;
	looped=1;
};

class V3SDriverDying : DefaultDie
{
	actions="NoActions";
	file="V3SDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"V3SDriver",1};
};

class V3SDriverDead : V3SDriverDying
{
	actions="DeadActions";
	file="V3SDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"V3SDriverDying",1};
	connectTo[]={"DeadState",1};
};

class V3SCoDriver : Driver
{
	file="V3SCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"V3SCoDriverV1",0.7,"V3SCoDriver"};
	interpolateWith[]={"V3SCoDriverV1",0.5};
	equivalentTo="V3SCoDriver";
	interpolationSpeed=1;
	connectTo[]={"V3SCoDriverDying",1};
};

class V3SCoDriverV1 : V3SCoDriver
{
	file="V3SCoDriver.rtm";
	speed=-4;
	looped=1;
};

class V3SCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="V3SCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"V3SCoDriver",1};
};

class V3SCoDriverDead : V3SCoDriverDying
{
	actions="DeadActions";
	file="V3SCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"V3SCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class JeepDriver : Driver
{
	file="JeepDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"JeepDriverV1",0.7,"JeepDriver"};
	interpolateWith[]={"JeepDriverV1",0.5};
	equivalentTo="JeepDriver";
	interpolationSpeed=1;
	connectTo[]={"JeepDriverDying",1};
};

class JeepDriverV1 : JeepDriver
{
	file="JeepDriver.rtm";
	speed=-4;
	looped=1;
};

class JeepDriverDying : DefaultDie
{
	actions="NoActions";
	file="JeepDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"JeepDriver",1};
};

class JeepDriverDead : JeepDriverDying
{
	actions="DeadActions";
	file="JeepDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"JeepDriverDying",1};
	connectTo[]={"DeadState",1};
};

class JeepGunner : Driver
{
	file="JeepGunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"JeepGunnerV1",0.7,"JeepGunner"};
	interpolateWith[]={"JeepGunnerV1",0.5};
	equivalentTo="JeepGunner";
	interpolationSpeed=1;
	connectTo[]={"JeepGunnerDying",1};
};

class JeepGunnerV1 : JeepGunner
{
	file="JeepGunner.rtm";
	speed=-4;
	looped=1;
};

class JeepGunnerDying : DefaultDie
{
	actions="NoActions";
	file="JeepGunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"JeepGunner",1};
};

class JeepGunnerDead : JeepGunnerDying
{
	actions="DeadActions";
	file="JeepGunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"JeepGunnerDying",1};
	connectTo[]={"DeadState",1};
};

class JeepCoDriver : Driver
{
	file="JeepCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"JeepCoDriverV1",0.7,"JeepCoDriver"};
	interpolateWith[]={"JeepCoDriverV1",0.5};
	equivalentTo="JeepCoDriver";
	interpolationSpeed=1;
	connectTo[]={"JeepCoDriverDying",1};
};

class JeepCoDriverV1 : JeepCoDriver
{
	file="JeepCoDriver.rtm";
	speed=-4;
	looped=1;
};

class JeepCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="JeepCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"JeepCoDriver",1};
};

class JeepCoDriverDead : JeepCoDriverDying
{
	actions="DeadActions";
	file="JeepCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"JeepCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class JeepCoDriverBack : Driver
{
	file="JeepCoDriverBackstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"JeepCoDriverBackV1",0.7,"JeepCoDriverBack"};
	interpolateWith[]={"JeepCoDriverBackV1",0.5};
	equivalentTo="JeepCoDriverBack";
	interpolationSpeed=1;
	connectTo[]={"JeepCoDriverBackDying",1};
};

class JeepCoDriverBackV1 : JeepCoDriverBack
{
	file="JeepCoDriverBack.rtm";
	speed=-4;
	looped=1;
};

class JeepCoDriverBackDying : DefaultDie
{
	actions="NoActions";
	file="JeepCoDriverBacksmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"JeepCoDriverBack",1};
};

class JeepCoDriverBackDead : JeepCoDriverBackDying
{
	actions="DeadActions";
	file="JeepCoDriverBacksmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"JeepCoDriverBackDying",1};
	connectTo[]={"DeadState",1};
};

class UazDriver : Driver
{
	file="UazDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UazDriverV1",0.7,"UazDriver"};
	interpolateWith[]={"UazDriverV1",0.5};
	equivalentTo="UazDriver";
	interpolationSpeed=1;
	connectTo[]={"UazDriverDying",1};
};

class UazDriverV1 : UazDriver
{
	file="UazDriver.rtm";
	speed=-4;
	looped=1;
};

class UazDriverDying : DefaultDie
{
	actions="NoActions";
	file="UazDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UazDriver",1};
};

class UazDriverDead : UazDriverDying
{
	actions="DeadActions";
	file="UazDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UazDriverDying",1};
	connectTo[]={"DeadState",1};
};

class UazCoDriver : Driver
{
	file="UazCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"UazCoDriverV1",0.7,"UazCoDriver"};
	interpolateWith[]={"UazCoDriverV1",0.5};
	equivalentTo="UazCoDriver";
	interpolationSpeed=1;
	connectTo[]={"UazCoDriverDying",1};
};

class UazCoDriverV1 : UazCoDriver
{
	file="UazCoDriver.rtm";
	speed=-4;
	looped=1;
};

class UazCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="UazCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"UazCoDriver",1};
};

class UazCoDriverDead : UazCoDriverDying
{
	actions="DeadActions";
	file="UazCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"UazCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class SkodaDriver : Driver
{
	file="SkodaDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"SkodaDriverV1",0.7,"SkodaDriver"};
	interpolateWith[]={"SkodaDriverV1",0.5};
	equivalentTo="SkodaDriver";
	interpolationSpeed=1;
	connectTo[]={"SkodaDriverDying",1};
};

class SkodaDriverV1 : SkodaDriver
{
	file="SkodaDriver.rtm";
	speed=-4;
	looped=1;
};

class SkodaDriverDying : DefaultDie
{
	actions="NoActions";
	file="SkodaDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"SkodaDriver",1};
};

class SkodaDriverDead : SkodaDriverDying
{
	actions="DeadActions";
	file="SkodaDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"SkodaDriverDying",1};
	connectTo[]={"DeadState",1};
};

class SkodaCoDriver : Driver
{
	file="SkodaCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"SkodaCoDriverV1",0.7,"SkodaCoDriver"};
	interpolateWith[]={"SkodaCoDriverV1",0.5};
	equivalentTo="SkodaCoDriver";
	interpolationSpeed=1;
	connectTo[]={"SkodaCoDriverDying",1};
};

class SkodaCoDriverV1 : SkodaCoDriver
{
	file="SkodaCoDriver.rtm";
	speed=-4;
	looped=1;
};

class SkodaCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="SkodaCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"SkodaCoDriver",1};
};

class SkodaCoDriverDead : SkodaCoDriverDying
{
	actions="DeadActions";
	file="SkodaCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"SkodaCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class SkodaCoDriverBack : Driver
{
	file="SkodaCoDriverBackstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"SkodaCoDriverBackV1",0.7,"SkodaCoDriverBack"};
	interpolateWith[]={"SkodaCoDriverBackV1",0.5};
	equivalentTo="SkodaCoDriverBack";
	interpolationSpeed=1;
	connectTo[]={"SkodaCoDriverBackDying",1};
};

class SkodaCoDriverBackV1 : SkodaCoDriverBack
{
	file="SkodaCoDriverBack.rtm";
	speed=-4;
	looped=1;
};

class SkodaCoDriverBackDying : DefaultDie
{
	actions="NoActions";
	file="SkodaCoDriverBacksmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"SkodaCoDriverBack",1};
};

class SkodaCoDriverBackDead : SkodaCoDriverBackDying
{
	actions="DeadActions";
	file="SkodaCoDriverBacksmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"SkodaCoDriverBackDying",1};
	connectTo[]={"DeadState",1};
};

class PBRDriver : Driver
{
	file="PBRDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"PBRDriverV1",0.7,"PBRDriver"};
	interpolateWith[]={"PBRDriverV1",0.5};
	equivalentTo="PBRDriver";
	interpolationSpeed=1;
	connectTo[]={"PBRDriverDying",1};
};

class PBRDriverV1 : PBRDriver
{
	file="PBRDriver.rtm";
	speed=-4;
	looped=1;
};

class PBRDriverDying : DefaultDie
{
	actions="NoActions";
	file="PBRDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"PBRDriver",1};
};

class PBRDriverDead : PBRDriverDying
{
	actions="DeadActions";
	file="PBRDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"PBRDriverDying",1};
	connectTo[]={"DeadState",1};
};

class PBRGunner : Driver
{
	file="PBRGunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"PBRGunnerV1",0.7,"PBRGunner"};
	interpolateWith[]={"PBRGunnerV1",0.5};
	equivalentTo="PBRGunner";
	interpolationSpeed=1;
	connectTo[]={"PBRGunnerDying",1};
};

class PBRGunnerV1 : PBRGunner
{
	file="PBRGunner.rtm";
	speed=-4;
	looped=1;
};

class PBRGunnerDying : DefaultDie
{
	actions="NoActions";
	file="PBRGunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"PBRGunner",1};
};

class PBRGunnerDead : PBRGunnerDying
{
	actions="DeadActions";
	file="PBRGunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"PBRGunnerDying",1};
	connectTo[]={"DeadState",1};
};

class M2Gunner : Driver
{
	file="M2Gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2GunnerV1",0.7,"M2Gunner"};
	interpolateWith[]={"M2GunnerV1",0.5};
	equivalentTo="M2Gunner";
	interpolationSpeed=1;
	connectTo[]={"M2GunnerDying",1};
};

class M2GunnerV1 : M2Gunner
{
	file="M2Gunner.rtm";
	speed=-4;
	looped=1;
};

class M2GunnerDying : DefaultDie
{
	actions="NoActions";
	file="M2Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M2Gunner",1};
};

class M2GunnerDead : M2GunnerDying
{
	actions="DeadActions";
	file="M2Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M2GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class HRLGunner : Driver
{
	file="HRLGunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"HRLGunnerV1",0.7,"HRLGunner"};
	interpolateWith[]={"HRLGunnerV1",0.5};
	equivalentTo="HRLGunner";
	interpolationSpeed=1;
	connectTo[]={"HRLGunnerDying",1};
};

class HRLGunnerV1 : HRLGunner
{
	file="HRLGunner.rtm";
	speed=-4;
	looped=1;
};

class HRLGunnerDying : DefaultDie
{
	actions="NoActions";
	file="HRLGunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"HRLGunner",1};
};

class HRLGunnerDead : HRLGunnerDying
{
	actions="DeadActions";
	file="HRLGunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"HRLGunnerDying",1};
	connectTo[]={"DeadState",1};
};

class ScudDriver : Driver
{
	file="ScudDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ScudDriverV1",0.7,"ScudDriver"};
	interpolateWith[]={"ScudDriverV1",0.5};
	equivalentTo="ScudDriver";
	interpolationSpeed=1;
	connectTo[]={"ScudDriverDying",1};
};

class ScudDriverV1 : ScudDriver
{
	file="ScudDriver.rtm";
	speed=-4;
	looped=1;
};

class ScudDriverDying : DefaultDie
{
	actions="NoActions";
	file="ScudDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ScudDriver",1};
};

class ScudDriverDead : ScudDriverDying
{
	actions="DeadActions";
	file="ScudDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ScudDriverDying",1};
	connectTo[]={"DeadState",1};
};

class ScudCoDriver : Driver
{
	file="ScudCoDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ScudCoDriverV1",0.7,"ScudCoDriver"};
	interpolateWith[]={"ScudCoDriverV1",0.5};
	equivalentTo="ScudCoDriver";
	interpolationSpeed=1;
	connectTo[]={"ScudCoDriverDying",1};
};

class ScudCoDriverV1 : ScudCoDriver
{
	file="ScudCoDriver.rtm";
	speed=-4;
	looped=1;
};

class ScudCoDriverDying : DefaultDie
{
	actions="NoActions";
	file="ScudCoDriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ScudCoDriver",1};
};

class ScudCoDriverDead : ScudCoDriverDying
{
	actions="DeadActions";
	file="ScudCoDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ScudCoDriverDying",1};
	connectTo[]={"DeadState",1};
};

class TractorDriver : Driver
{
	file="traktordriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"TractorDriverV1",0.7,"TractorDriver"};
	interpolateWith[]={"TractorDriverV1",0.5};
	equivalentTo="TractorDriver";
	interpolationSpeed=1;
	connectTo[]={"TractorDriverDying",1};
};

class TractorDriverV1 : TractorDriver
{
	file="traktordriver.rtm";
	speed=-4;
	looped=1;
};

class TractorDriverDying : DefaultDie
{
	actions="NoActions";
	file="traktordriversmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"TractorDriver",1};
};

class TractorDriverDead : TractorDriverDying
{
	actions="DeadActions";
	file="traktordriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"TractorDriverDying",1};
	connectTo[]={"DeadState",1};
};

class Para : Driver
{
	file="Parastat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ParaV1",0.7,"Para"};
	interpolateWith[]={"ParaV1",0.5};
	equivalentTo="Para";
	interpolationSpeed=1;
	connectTo[]={"ParaDying",1};
};

class ParaV1 : Para
{
	file="Para.rtm";
	speed=-4;
	looped=1;
};

class ParaDying : DefaultDie
{
	actions="NoActions";
	file="Parasmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Para",1};
};

class ParaDead : ParaDying
{
	actions="DeadActions";
	file="Parasmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ParaDying",1};
	connectTo[]={"DeadState",1};
};

class StandTurnR : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\dopravabez.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
};

class StandTurnL : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\dolevabez.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
};

class StandStrokeFist : Default
{
	actions="StandActions";
	file="bezuder.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
	connectFrom[]={"Stand",1};
	connectTo[]={"StandStrokeFistEnd",1};
};

class StandStrokeFistEnd : Default
{
	actions="StandActions";
	file="\sjc_anims\std\bezstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
	connectTo[]={"Stand",1};
};

class OnChair : StandBase
{
	actions="NoActions";
	file="zidle.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
	interpolationSpeed=2;
};

class EffectStand : StandBase
{
	actions="StandStandActions";
	file="\sjc_anims\std\bezstanistill.rtm";
	speed=-8.8000002;
	looped=1;
	soundEnabled=0;
	duty=-1;
	interpolationSpeed=2;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class EffectStandStill : StandBase
{
	actions="StandStillActions";
	file="\sjc_anims\std\bezstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	equivalentTo="EffectStandStill";
	interpolationSpeed=1;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class EffectStandTalk : StandBase
{
	actions="StandTalkActions";
	file="bezpovidani.rtm";
	speed=-14.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
	interpolationSpeed=2;
};

class EffectStandSaluteStart : StandBase
{
	actions="StandSaluteActions";
	file="\sjc_anims\std\bezhlas.rtm";
	speed=-0.5;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"Stand",2};
};

class EffectStandSalute : StandBase
{
	actions="StandSaluteActions";
	file="\sjc_anims\std\bezhlasstat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	connectFrom[]={"EffectStandSaluteStart",1};
	connectTo[]={"EffectStandSaluteEnd",1};
};

class EffectStandSaluteEnd : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\bezhlas2.rtm";
	speed=-0.5;
	looped=0;
	soundEnabled=0;
	connectTo[]={"Stand",2};
};

class EffectStandmove : StandBase
{
	actions="StandStillActions";
	file="bezstani.rtm";
	speed=-8.8000002;
	looped=1;
	soundEnabled=0;
	equivalentTo="EffectStandStill";
	interpolationSpeed=1;
};

class EffectStandSitDown : StandBase
{
	actions="SitActions";
	file="\sjc_anims\std\bezsedi2.rtm";
	speed=-4.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
	variantsPlayer[]={"EffectStandSitDown",0.3,"EffectStandSitDownVer2",0.3,"EffectStandSitDownVer1"};
	equivalentTo="EffectStandSitDown";
	interpolateTo[]={"SitDownDying",0.1};
};

class EffectStandSitDownVer1 : EffectStandSitDown
{
	file="\sjc_anims\std\bezsedi2.rtm";
	speed=10000000000.0;
	looped=1;
	interpolateTo[]={"SitDownDying",0.1};
};

class EffectStandSitDownVer2 : EffectStandSitDown
{
	file="\sjc_anims\std\bezsedi.rtm";
	speed=-4.5999999;
	looped=1;
	interpolateTo[]={"SitDownDying",0.1};
};

class EffectStandSitDownStill : EffectStandSitDown
{
	file="\sjc_anims\std\bezsedi.rtm";
	speed=10000000000.0;
	interpolateTo[]={"SitDownDying",0.1};
};

class StandToSitDown : StandBase
{
	actions="SitActions";
	file="\sjc_anims\std\bezdosedu.rtm";
	speed=-3.2;
	looped=0;
	soundEnabled=0;
	duty=-1;
};

class SitDownToStand : StandBase
{
	actions="StandActions";
	file="\sjc_anims\std\bezvztava.rtm";
	speed=-2.5;
	looped=0;
	soundEnabled=0;
	duty=-1;
};

class FXBase : StandBase
{
	actions="StandActions";
	looped=0;
	soundEnabled=0;
	duty=-1;
	interpolationSpeed=1;
};

class FXStandToTel : FXBase
{
	file="ktelefonustart.rtm";
	speed=-0.5;
	connectTo[]={"FXStandToTelHand",1};
};

class FXStandToTelHand : FXBase
{
	file="ktelefonuend.rtm";
	speed=-4.5;
	showItemInRightHand=1;
};

class FXStandTelLoop : FXBase
{
	file="telloop.rtm";
	speed=-10.0;
	looped=1;
	showItemInRightHand=1;
};

class FXStandDropTel : FXBase
{
	file="poloztelefon.rtm";
	speed=-4.0;
	interpolateWith[]={"FXStandToTel",1};
};

class FXStandFromTable : FXBase
{
	file="staniodstolu.rtm";
	speed=-3.0;
};

class FXStandUnivTable : FXBase
{
	file="univsezeni.rtm";
	speed=-8.0;
	looped=1;
};

class FXStandToTable : FXBase
{
	file="sedkestolu.rtm";
	speed=-2.5;
};

class FXStandDangle : FXBase
{
	file="houpese.rtm";
	speed=-4.0;
};

class FXStandToDip : FXBase
{
	file="dokliku.rtm";
	speed=-2.0;
	connectFrom[]={"Stand",1};
	connectTo[]={"FXStandDip",1};
};

class FXStandDip : FXBase
{
	file="klik.rtm";
	speed=-1.5;
	looped=1;
};

class FXStandFromDip : FXBase
{
	file="zkliku.rtm";
	speed=-2.0;
	connectFrom[]={"FXStandDip",1};
	connectTo[]={"Stand",1};
};

class FXStandSur : FXBase
{
	file="zajatecstani.rtm";
	speed=-2.0;
};

class FXStandSurDead : FXBase
{
	file="zajatecsmrtb.rtm";
	speed=-2.0;
};

class FXStandSurUniv : FXBase
{
	file="zajatecstat.rtm";
	speed=10000000000.0;
};

class FXStandSurDown : FXBase
{
	file="lehzajatec.rtm";
	speed=-3.5;
};

class FXStandRotateTable : FXBase
{
	file="kestolu.rtm";
	speed=-2.0;
};

class FXStandShowTable : FXBase
{
	file="ukazujeustolu.rtm";
	speed=-3.0;
};

class FXStandEndTable : FXBase
{
	file="ukazodstolu.rtm";
	speed=-5.0;
};

class FXStandStraight : FXBase
{
	file="staninic.rtm";
	speed=-2.0;
};

class FXStandBug : FXBase
{
	file="buzeruje.rtm";
	speed=-10.0;
};

class FXStandhip : FXBase
{
	file="rucevbok.rtm";
	speed=-5.0;
};

class FXStandAtt : FXBase
{
	file="uspozorstat.rtm";
	speed=10000000000.0;
};

class FXStandAttVar1 : FXBase
{
	file="rucevbok.rtm";
	speed=-3.0;
};

class FXangel : FXBase
{
	file="fx_angel_stand.rtm";
	speed=10000000000.0;
};

class FXangel2 : FXBase
{
	file="fx_angel_stand2.rtm";
	speed=10000000000.0;
};

class LadderStatic : LadderBase
{
	file="upDownStat2.rtm";
	looped=1;
	soundEnabled=0;
	speed=10000000000.0;
	duty=-1;
};

class LadderUpStart : LadderUpBase
{
	file="upstart2.rtm";
	looped=0;
	soundEnabled=0;
	speed=-0.75;
	duty=-0.5;
	connectFrom[]={"Stand",1};
	connectTo[]={"LadderStatic",1};
};

class LadderUpLoop : LadderUpBase
{
	file="uploop2.rtm";
	looped=1;
	soundEnabled=0;
	speed=-0.6;
	duty=-0.5;
	interpolateWith[]={"LadderStatic",1};
};

class LadderUpEnd : LadderBase
{
	actions="StandActions";
	file="upend2.rtm";
	looped=0;
	soundEnabled=0;
	speed=-1;
	duty=-0.5;
	onLadder=0;
	connectFrom[]={"LadderStatic",1};
	connectTo[]={"Stand",1};
};

class LadderDownStart : LadderDownBase
{
	file="downstart2.rtm";
	looped=0;
	soundEnabled=0;
	speed=-1;
	duty=-0.5;
	connectFrom[]={"Stand",1};
	connectTo[]={"LadderStatic",1};
};

class LadderDownLoop : LadderDownBase
{
	file="downloop3.rtm";
	looped=1;
	soundEnabled=0;
	speed=-0.6;
	duty=-0.5;
	interpolateWith[]={"LadderStatic",1};
};

class LadderDownEnd : LadderDownBase
{
	actions="StandActions";
	file="downend2.rtm";
	looped=0;
	soundEnabled=0;
	speed=-1;
	duty=-0.5;
	onLadder=0;
	connectFrom[]={"LadderStatic",1};
	connectTo[]={"Stand",0.9};
};

class EffectWeaponPanic : Default
{
	file="szmaten.rtm";
	speed=-9.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandEngageAtWill : Default
{
	file="sengageatwill.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandFireAtWill : Default
{
	file="sengageatwill.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandFormation : Default
{
	file="sformace.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandHoldFire : Default
{
	file="sholdfire.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandStop : Default
{
	file="sstop.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class CommandForward : Default
{
	file="svpred.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class EffectCombatStand : Default
{
	file="sstani.rtm";
	speed=-3.0;
	looped=1;
	soundEnabled=0;
	duty=-1;
};

class StandGetInCar : StandBase
{
	actions="StandActions";
	file="bezosobak.rtm";
	speed=-2.25;
	looped=0;
	soundEnabled=0;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandGetInTank : StandBase
{
	actions="StandActions";
	file="nastupbez.rtm";
	speed=-1.3;
	looped=0;
	soundEnabled=0;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class StandGetOutTank : StandBase
{
	actions="StandActions";
	file="bezseskok.rtm";
	speed=-3.0650001;
	looped=0;
	soundEnabled=0;
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class CombatGetInCar : Default
{
	actions="CombatActions";
	file="sosobak.rtm";
	speed=-1.23;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	enableOptics=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatGetInTank : Default
{
	actions="CombatActions";
	file="snastup.rtm";
	speed=-2.3800001;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	enableOptics=0;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CombatGetOutTank : Default
{
	actions="CombatActions";
	file="sdoskok.rtm";
	speed=-0.915;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class CivilGetInCar : Default
{
	actions="CivilActions";
	file="civilosobak.rtm";
	speed=-1.23;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	enableOptics=0;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilGetInTank : Default
{
	actions="CivilActions";
	file="civilnastup.rtm";
	speed=-2.3800001;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	enableOptics=0;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CivilGetOutTank : Default
{
	actions="CivilActions";
	file="civilseskok.rtm";
	speed=-0.915;
	looped=0;
	soundEnabled=0;
	disableWeapons=1;
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

//Resistance
class CrouchToTakeFlag : Default
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchpoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Crouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchTakeFlag : Default
{
	actions="CrouchTakeFlagActions";
	file="\sjc_anims\std\crouchpolozstat.rtm";
	speed=-2.5;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CrouchToTakeFlag",2};
	connectTo[]={"TakeFlagToCrouch",2};
	interpolateTo[]={"CrouchDying",0.1};
};

class TakeFlagToCrouch : Default
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchpoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Crouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchToPutDown : Default
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchpoloz1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Crouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class PutDownCrouch : Default
{
	actions="PutDownCrouchActions";
	file="\sjc_anims\std\crouchpolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"CrouchToPutDown",2};
	connectTo[]={"PutDownToCrouch",2};
	interpolateTo[]={"CrouchDying",0.1};
};

class PutDownToCrouch : Default
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchpoloz2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Crouch",1};
	interpolateTo[]={"CrouchDying",0.1};
};

class CombatRelaxedPlayer : Combat
{
	actions="CombatActions";
	file=AISTANCE;
	speed=-0.8;
	looped=0;
	disableWeapons=1;
	duty=-0.7;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Combat",1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
	interpolateFrom[]={"Combat",1};
};

class CrouchRelaxedPlayer : Crouch
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchrelax.rtm";
	speed=-0.8;
	looped=0;
	disableWeapons=1;
	duty=-0.7;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Crouch",1,"CrouchDying",0.1};
	interpolateFrom[]={"Crouch",1};
};

class LyingRelaxedPlayer : Lying
{
	actions="LyingActions";
	file="\sjc_anims\std\lyingrelax.rtm";
	speed=-0.8;
	looped=0;
	disableWeapons=1;
	duty=-0.7;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Lying",1,"LyingDying",0.1};
	interpolateFrom[]={"Lying",1};
};

class CrouchThrowGrenadeStart : Crouch
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchgren1.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CrouchDying",0.1};
};

class CrouchThrowGrenadeEnd : Crouch
{
	actions="CrouchActions";
	file="\sjc_anims\std\crouchgren2.rtm";
	speed=-0.97;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	interpolateTo[]={"CrouchDying",0.1};
};


class ah64Pilot : Driver
{
	file="\apac\ah64pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ah64PilotV1",0.7,"ah64Pilot"};
	interpolateWith[]={"ah64PilotV1",0.5};
	equivalentTo="ah64Pilot";
	interpolationSpeed=1;
	connectTo[]={"ah64PilotDying",1};
};

class ah64PilotV1 : ah64Pilot
{
	file="\apac\ah64pilot.rtm";
	speed="- 4";
	looped=1;
};

class ah64PilotDying : DefaultDie
{
	actions="NoActions";
	file="\apac\ah64pilotsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ah64Pilot",1};
};

class ah64PilotDead : ah64PilotDying
{
	actions="DeadActions";
	file="\apac\ah64pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ah64PilotDying",1};
	connectTo[]={"DeadState",1};
};

class ah64Gunner : Driver
{
	file="\apac\ah64gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"ah64GunnerV1",0.7,"ah64Gunner"};
	interpolateWith[]={"ah64GunnerV1",0.5};
	equivalentTo="ah64Gunner";
	interpolationSpeed=1;
	connectTo[]={"ah64GunnerDying",1};
};

class ah64GunnerV1 : ah64Gunner
{
	file="\apac\ah64gunner.rtm";
	speed="- 4";
	looped=1;
};

class ah64GunnerDying : DefaultDie
{
	actions="NoActions";
	file="\apac\ah64gunnersmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"ah64Gunner",1};
};

class ah64GunnerDead : ah64GunnerDying
{
	actions="DeadActions";
	file="\apac\ah64gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"ah64GunnerDying",1};
	connectTo[]={"DeadState",1};
};

class koloDriver : Driver
{
	file="\kolo\kolo.rtm";
	speed=2;
	looped=1;
};
class M2A2Driver : Driver
{
	file="\m2a2\m2a2driverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2A2DriverV1",0.7,"M2A2Driver"};
	interpolateWith[]={"M2A2DriverV1",0.5};
	equivalentTo="M2A2Driver";
	interpolationSpeed=1;
};

class M2A2DriverV1 : M2A2Driver
{
	file="\m2a2\m2a2driver.rtm";
	speed="- 4";
	looped=1;
};

class M2A2Gunner : Driver
{
	file="\m2a2\m2a2gunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2A2GunnerV1",0.7,"M2A2Gunner"};
	interpolateWith[]={"M2A2GunnerV1",0.5};
	equivalentTo="M2A2Gunner";
	interpolationSpeed=1;
};

class M2A2GunnerV1 : M2A2Gunner
{
	file="\m2a2\m2a2gunner.rtm";
	speed="- 4";
	looped=1;
};

class M2A2GunnerOut : Driver
{
	file="\m2a2\m2a2gunneroutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2A2GunnerOutV1",0.7,"M2A2GunnerOut"};
	interpolateWith[]={"M2A2GunnerOutV1",0.5};
	equivalentTo="M2A2GunnerOut";
	interpolationSpeed=1;
	connectTo[]={"M2A2GunnerOutDying",1};
};

class M2A2GunnerOutV1 : M2A2GunnerOut
{
	file="\m2a2\m2a2gunnerout.rtm";
	speed="- 4";
	looped=1;
};

class M2A2GunnerOutDying : DefaultDie
{
	actions="NoActions";
	file="\m2a2\m2a2gunneroutsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M2A2GunnerOut",1};
};

class M2A2GunnerOutDead : M2A2GunnerOutDying
{
	actions="DeadActions";
	file="\m2a2\m2a2gunneroutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M2A2GunnerOutDying",1};
	connectTo[]={"DeadState",1};
};

class M2A2Commander : Driver
{
	file="\m2a2\m2a2commanderstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2A2CommanderV1",0.7,"M2A2Commander"};
	interpolateWith[]={"M2A2CommanderV1",0.5};
	equivalentTo="M2A2Commander";
	interpolationSpeed=1;
};

class M2A2CommanderV1 : M2A2Commander
{
	file="\m2a2\m2a2commander.rtm";
	speed="- 4";
	looped=1;
};

class M2A2CommanderOut : Driver
{
	file="\m2a2\m2a2commanderoutstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"M2A2CommanderOutV1",0.7,"M2A2CommanderOut"};
	interpolateWith[]={"M2A2CommanderOutV1",0.5};
	equivalentTo="M2A2CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"M2A2CommanderOutDying",1};
};

class M2A2CommanderOutV1 : M2A2CommanderOut
{
	file="\m2a2\m2a2commanderout.rtm";
	speed="- 4";
	looped=1;
};

class M2A2CommanderOutDying : DefaultDie
{
	actions="NoActions";
	file="\m2a2\m2a2commanderoutsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"M2A2CommanderOut",1};
};

class M2A2CommanderOutDead : M2A2CommanderOutDying
{
	actions="DeadActions";
	file="\m2a2\m2a2commanderoutsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"M2A2CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};
class MiniDriver : Driver
{
	file="\mini\minidriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"MiniDriverV1",0.7,"MiniDriver"};
	interpolateWith[]={"MiniDriverV1",0.5};
	equivalentTo="MiniDriver";
	connectTo[]={"MiniDriverDying",1};
	interpolateTo[]={"MiniDriverDying",0.1};
};

class MiniDriverV1 : MiniDriver
{
	file="\mini\minidriver.rtm";
	speed=-4;
	looped=1;
};

class MiniDriverDying : DefaultDie
{
	actions="NoActions";
	file="\mini\minidriversmrt.rtm";
	speed=-1;
	looped="flase";
	soundEnabled=0;
	connectFrom[]={"MiniDriver",1};
};

class MiniDriverDead : MiniDriverDying
{
	actions="DeadActions";
	file="\mini\minidriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"MiniDriverDying",1};
	connectTo[]={"DeadState",1};
};
class busDriver : Driver
{
	file="\O\Anim\BusDriverstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"busDriverV1",0.7,"busDriver"};
	interpolateWith[]={"busDriverV1",0.5};
	equivalentTo="busDriver";
	interpolationSpeed=1;
	connectTo[]={"busDriverDying",1};
};

class busDriverV1 : busDriver
{
	file="\O\Anim\BusDriver.rtm";
	speed="- 4";
	looped=1;
};

class busDriverDying : DefaultDie
{
	actions="NoActions";
	file="\O\Anim\BusDriversmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"busDriver",1};
};

class busDriverDead : busDriverDying
{
	actions="DeadActions";
	file="\O\Anim\BusDriversmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"busDriverDying",1};
	connectTo[]={"DeadState",1};
};

class busCargo : Driver
{
	file="\O\Anim\BusPassangerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"busCargoV1",0.7,"busCargo"};
	interpolateWith[]={"busCargoV1",0.5};
	equivalentTo="busCargo";
	interpolationSpeed=1;
	connectTo[]={"busCargoDying",1};
};

class busCargoV1 : busCargo
{
	file="\O\Anim\BusPassanger.rtm";
	speed="- 4";
	looped=1;
};

class busCargoDying : DefaultDie
{
	actions="NoActions";
	file="\O\Anim\BusPassangersmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"busCargo",1};
};

class busCargoDead : busCargoDying
{
	actions="DeadActions";
	file="\O\Anim\BusPassangersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"busCargoDying",1};
	connectTo[]={"DeadState",1};
};

class jawaCoDriver : Driver
{
	file="\O\Anim\motorkaspolujezdecstat.rtm";
	speed=10000000000.0;
	looped=1;
};

class jawaDriver : Driver
{
	file="\O\Anim\motorkastat.rtm";
	speed=10000000000.0;
	looped=1;
};

class HandGunCrouch : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pklekstat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	variantAfter[]={1,3,6};
	variantsAI[]={"HandGunCrouchVar2",0.7,"HandGunCrouch",0.3};
	equivalentTo="HandGunCrouch";
};

class HandGunCrouchBase : HandGunCrouch
{
	variantsAI[]={};
	equivalentTo="";
};

class HandGunCrouchVar2 : HandGunCrouch
{
	file="\o\Anim\pklek.rtm";
	speed=-1;
	interpolateWith[]={"HandGunCrouch",0.5};
	interpolateTo[]={"HandGunCrouchDying",0.1};
};

class HandGunCrouchToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pklek2pstani.rtm";
	speed=-0.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",1};
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunCrouchToHandGunLying : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pklek2pistleh.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",1};
	connectTo[]={"HandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunCrouchReloadMagazine : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pkleknabit.rtm";
	speed=-1.5;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",2};
	connectTo[]={"HandGunCrouch",2};
	interpolateTo[]={"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
};

class HandGunCrouchToBinocHandGunCrouch : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pklekdalek1.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",2};
	interpolateTo[]={"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
};

class BinocHandGunCrouch : HandGunDefault
{
	actions="BinocHandGunCrouchActions";
	file="\o\Anim\pklekdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	connectFrom[]={"HandGunCrouchToBinocHandGunCrouch",1};
	connectTo[]={"BinocHandGunCrouchToHandGunCrouch",1};
	interpolateTo[]={"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
};

class BinocHandGunCrouchToHandGunCrouch : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pklekdalek2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectTo[]={"HandGunCrouch",2};
	interpolateTo[]={"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
};

class HandGunCrouchDying : HandGunDie
{
	actions="NoActions";
	file="\o\Anim\pkleksmrtA.rtm";
	speed=-1;
	looped=0;
	connectFrom[]={"HandGunCrouch",1};
	connectTo[]={"HandGunCrouchDead",1};
};

class HandGunCrouchDyingVer2 : HandGunCrouchDying
{
	file="\o\Anim\pkleksmrtB.rtm";
	connectFrom[]={"HandGunCrouch",1};
	connectTo[]={"HandGunCrouchDeadVer2",1};
};

class HandGunCrouchDead : HandGunDie
{
	actions="DeadActions";
	file="\o\Anim\pkleksmrtA2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	variantsPlayer[]={"HandGunCrouchDead",0.5,"HandGunCrouchDeadVer2"};
	equivalentTo="HandGunCrouchDead";
	variantAfter[]={0,0,0};
	terminal=1;
	connectTo[]={"DeadState",10};
};

class HandGunCrouchDeadVer2 : HandGunCrouchDead
{
	file="\o\Anim\pkleksmrtB2.rtm";
};

class HandGunLying : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehstat.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	onLandEnd=1;
	soundEnabled=0;
	duty=-1;
	variantAfter[]={1,3,6};
	variantsAI[]={"HandGunLyingVar2",0.7,"HandGunLying",0.3};
	equivalentTo="HandGunLying";
};

class HandGunLyingVar2 : HandGunLying
{
	file="\o\Anim\pistleh.rtm";
	speed=-1;
	interpolateWith[]={"HandGunLying",0.5};
	interpolateTo[]={"HandGunLyingDying",0.01};
};

class HandGunLyingToHandGunCrouch : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pistleh2pklek.rtm";
	speed=-1.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",1};
	connectTo[]={"HandGunCrouch",1};
	interpolateTo[]={"HandGunCrouchDying",0.01};
};

class HandGunLyingReloadMagazine : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehnabit.rtm";
	speed=-2;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",2};
	connectTo[]={"HandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingThrowGrenade1 : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehgranat1.rtm";
	speed=-1.6;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	connectFrom[]={"HandGunLying",2};
	connectTo[]={"HandGunLyingThrowGrenade2",2};
	interpolateTo[]={"HandGunLyingDying",0.5};
};

class HandGunLyingThrowGrenade2 : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehgranat2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	connectTo[]={"HandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.5};
};

class HandGunLyingNoAim : HandGunLying
{
	limitGunMovement=0;
	aiming="aimingNo";
	legs="legsNo";
	variantsAI[]={};
	equivalentTo="";
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingCrawlF : HandGunLyingNoAim
{
	file="\o\Anim\pplazeni0.rtm";
	speed=-1.0;
	disableWeapons=1;
	enableOptics=0;
	soundEnabled=1;
	soundOverride="crawl";
	duty=0.0;
	interpolateWith[]={"HandGunLying",1,"HandGunLyingFastCrawlF",1,"HandGunLyingCrawlF",1,"HandGunLyingCrawlLF",1,"HandGunLyingCrawlRF",1,"HandGunLyingCrawlL",1,"HandGunLyingCrawlR",1};
};

class HandGunLyingFastCrawlF : HandGunLyingCrawlF
{
	file="\o\Anim\pultraplaz.rtm";
	speed=-0.8;
	duty=0.6;
};

class HandGunLyingCrawlLF : HandGunLyingCrawlF
{
	file="\o\Anim\pplazeni-45.rtm";
	speed=-1.0;
};

class HandGunLyingCrawlRF : HandGunLyingCrawlF
{
	file="\o\Anim\pplazeni45.rtm";
	speed=-1.0;
};

class HandGunLyingCrawlL : HandGunLyingCrawlF
{
	file="\o\Anim\pplazeni-90.rtm";
	speed=-1.0;
};

class HandGunLyingCrawlR : HandGunLyingCrawlF
{
	file="\o\Anim\pplazeni90.rtm";
	speed=-1.0;
};

class HandGunLyingCrawlB : HandGunLyingNoAim
{
	file="\o\Anim\pplazeni180.rtm";
	speed=-1.1;
	duty=0.0;
	disableWeapons=1;
	enableOptics=0;
	soundEnabled=1;
	soundOverride="crawl";
	interpolateWith[]={"HandGunLying",1,"HandGunLyingCrawlB",1,"HandGunLyingCrawlLB",1,"HandGunLyingCrawlRB",1,"HandGunLyingCrawlL",1,"HandGunLyingCrawlR",1};
};

class HandGunLyingCrawlLB : HandGunLyingCrawlB
{
	file="\o\Anim\pplazeni-135.rtm";
	speed=-1.1;
};

class HandGunLyingCrawlRB : HandGunLyingCrawlB
{
	file="\o\Anim\pplazeni135.rtm";
	speed=-1.1;
};

class HandGunLyingTurnL : HandGunLyingNoAim
{
	preload=0;
	file="\o\Anim\pplazenidoleva.rtm";
	speed=-4;
	duty=0.0;
	interpolationSpeed=5;
	interpolateWith[]={"HandGunLying",1,"HandGunLyingTurnR",1};
};

class HandGunLyingTurnR : HandGunLyingNoAim
{
	preload=0;
	file="\o\Anim\pplazenidoprava.rtm";
	speed=-4;
	duty=0.0;
	interpolationSpeed=5;
	interpolateWith[]={"HandGunLying",1,"HandGunLyingTurnL",1};
};

class HandGunLyingToBinocHandGunLying : Default
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehdalek1.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	onLandBeg=1;
	onLandEnd=1;
	connectFrom[]={"HandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class BinocHandGunLying : Default
{
	actions="BinocHandGunLyingActions";
	file="\o\Anim\pistlehdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	connectFrom[]={"HandGunLyingToBinocHandGunLying",1};
	connectTo[]={"BinocHandGunLyingToHandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class BinocHandGunLyingToHandGunLying : Default
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehdalek2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectTo[]={"HandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingDying : HandGunDie
{
	actions="NoActions";
	file="\o\Anim\pistlehsmrt.rtm";
	speed=-1;
	looped=0;
	connectFrom[]={"HandGunLying",1};
	connectTo[]={"HandGunLyingDead",1};
};

class HandGunLyingDead : HandGunDie
{
	actions="DeadActions";
	file="\o\Anim\pistlehsmrt2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	terminal=1;
	connectTo[]={"DeadState",10};
};

class HandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanistat.rtm";
	speed=10000000000.0;
	looped=1;
	soundEnabled=0;
	variantAfter[]={1,3,6};
	variantsAI[]={"HandGunStandVar2",0.7,"HandGunStand",0.3};
	equivalentTo="HandGunStand";
};

class HandGunStandBase : HandGunStand
{
	variantsAI[]={};
	equivalentTo="";
};

class HandGunStandVar2 : HandGunStand
{
	file="\o\Anim\pstani.rtm";
	speed=-1;
	interpolateWith[]={"HandGunStand",0.5};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunStandToHandGunCrouch : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\pstani2pklek.rtm";
	speed=-0.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunCrouch",1};
	interpolateTo[]={"HandGunCrouchDying",0.5,"HandGunCrouchDyingVer2",0.5};
};

class HandGunStandReloadMagazine : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstaninabit.rtm";
	speed=-1.6;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",2};
	connectTo[]={"HandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class HandGunStandThrowGrenade1 : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanigranat1.rtm";
	speed=-1.8;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	connectFrom[]={"HandGunStand",2};
	connectTo[]={"HandGunStandThrowGrenade2",2};
	interpolateTo[]={"HandGunStandDyingVer2",0.7};
};

class HandGunStandThrowGrenade2 : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanigranat2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	duty=0.6;
	connectTo[]={"HandGunStand",2};
	interpolateTo[]={"HandGunStandDyingVer2",0.7};
};

class HandGunStandWalkF : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pchuze0.rtm";
	speed=-1;
	looped=1;
	duty=-0.7;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolateWith[]={"HandGunStand",1,"HandGunStandWalkF",1,"HandGunStandWalkLF",1,"HandGunStandWalkRF",1,"HandGunStandWalkL",1,"HandGunStandWalkR",1,"HandGunStandRunF",1,"HandGunStandRunLF",1,"HandGunStandRunRF",1,"HandGunStandRunL",1,"HandGunStandRunR",1};
};

class HandGunStandWalkLF : HandGunStandWalkF
{
	file="\o\Anim\pchuze-45.rtm";
};

class HandGunStandWalkRF : HandGunStandWalkF
{
	file="\o\Anim\pchuze45.rtm";
};

class HandGunStandWalkL : HandGunStandWalkF
{
	file="\o\Anim\pchuze-90.rtm";
};

class HandGunStandWalkR : HandGunStandWalkF
{
	file="\o\Anim\pchuze90.rtm";
};

class HandGunStandWalkB : HandGunStandWalkF
{
	file="\o\Anim\pchuze180.rtm";
	interpolateWith[]={"HandGunStand",1,"HandGunStandWalkB",1,"HandGunStandWalkLB",1,"HandGunStandWalkRB",1,"HandGunStandWalkL",1,"HandGunStandWalkR",1,"HandGunStandRunB",1,"HandGunStandRunLB",1,"HandGunStandRunRB",1,"HandGunStandRunL",1,"HandGunStandRunR",1};
};

class HandGunStandWalkLB : HandGunStandWalkB
{
	file="\o\Anim\pchuze-135.rtm";
};

class HandGunStandWalkRB : HandGunStandWalkB
{
	file="\o\Anim\pchuze135.rtm";
};

class HandGunStandRunF : HandGunStandWalkF
{
	file="civilbeh0l.rtm";
	speed=-0.45;
	looped=1;
	duty=-0.5;
	showWeaponAim=0;
	enableOptics=0;
};

class HandGunStandRunLF : HandGunStandRunF
{
	file="civilbeh-45l.rtm";
};

class HandGunStandRunRF : HandGunStandRunF
{
	file="civilbeh45l.rtm";
};

class HandGunStandRunL : HandGunStandRunF
{
	file="civilbeh-90l.rtm";
};

class HandGunStandRunR : HandGunStandRunF
{
	file="civilbeh90l.rtm";
};

class HandGunStandRunB : HandGunStandRunF
{
	file="civilbeh180l.rtm";
	interpolateWith[]={"HandGunStand",1,"HandGunStandWalkB",1,"HandGunStandWalkLB",1,"HandGunStandWalkRB",1,"HandGunStandWalkL",1,"HandGunStandWalkR",1,"HandGunStandRunB",1,"HandGunStandRunLB",1,"HandGunStandRunRB",1,"HandGunStandRunL",1,"HandGunStandRunR",1};
};

class HandGunStandRunLB : HandGunStandRunB
{
	file="civilbeh-135l.rtm";
};

class HandGunStandRunRB : HandGunStandRunB
{
	file="civilbeh135l.rtm";
};

class HandGunStandTurnL : HandGunStandBase
{
	file="\o\Anim\pvlevo.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	equivalentTo="";
	variantsAI[]={};
	interpolationSpeed=5;
	interpolateWith[]={"HandGunStand",1,"HandGunStandTurnR",1};
};

class HandGunStandTurnR : HandGunStandBase
{
	file="\o\Anim\pvpravo.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
	interpolateWith[]={"HandGunStand",1,"HandGunStandTurnL",1};
};

class HandGunStandRelaxed : HandGunStand
{
	file="\o\Anim\pawarestat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	variantsAI[]={"HandGunStandRelaxedStill",0.8,"HandGunStandRelaxed"};
	interpolateWith[]={"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunStandRelaxedStill : HandGunStandRelaxed
{
	file="\o\Anim\paware.rtm";
	speed=-5;
	looped=1;
	disableWeapons=0;
	equivalentTo="HandGunStandRelaxed";
};

class HandGunStandTurnLRelaxed : HandGunStandTurnL
{
	file="\o\Anim\pawarevlevo.rtm";
	speed=-2.5999999;
	interpolateWith[]={"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
};

class HandGunStandTurnRRelaxed : HandGunStandTurnR
{
	file="\o\Anim\pawarevpravo.rtm";
	speed=-2.5999999;
	interpolateWith[]={"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
};

class HandGunStandToBinocHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pdalek1.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class BinocHandGunStand : HandGunDefault
{
	actions="BinocHandGunStandActions";
	file="\o\Anim\pdalekstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=0;
	showItemInHand=1;
	soundEnabled=0;
	enableBinocular=1;
	connectFrom[]={"HandGunStandToBinocHandGunStand",1};
	connectTo[]={"BinocHandGunStandToHandGunStand",1};
};

class BinocHandGunStandToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pdalek2.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	showItemInHand=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class HandGunStandDying : HandGunDie
{
	actions="NoActions";
	file="\o\Anim\pstanismrtA.rtm";
	speed=-1;
	looped=0;
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunStandDead",1};
};

class HandGunStandDyingVer2 : HandGunStandDying
{
	file="\o\Anim\pstanismrtB.rtm";
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunStandDeadVer2",1};
};

class HandGunStandDead : HandGunDie
{
	actions="DeadActions";
	file="\o\Anim\pstanismrtA2.rtm";
	speed=10000000000.0;
	looped=1;
	onLandBeg=1;
	variantsPlayer[]={"HandGunStandDead",0.5,"HandGunStandDeadVer2"};
	equivalentTo="HandGunStandDead";
	variantAfter[]={0,0,0};
	terminal=1;
	connectTo[]={"DeadState",10};
};

class HandGunStandDeadVer2 : HandGunStandDead
{
	file="\o\Anim\pstanismrtB2.rtm";
};

class HandGunCrouchWalkF : HandGunStandWalkF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkLF : HandGunStandWalkLF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkLF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkRF : HandGunStandWalkRF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkRF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkL : HandGunStandWalkL
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkL";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkR : HandGunStandWalkR
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkR";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkB : HandGunStandWalkB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkLB : HandGunStandWalkLB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkLB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchWalkRB : HandGunStandWalkRB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandWalkRB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunF : HandGunStandRunF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunLF : HandGunStandRunLF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunLF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunRF : HandGunStandRunRF
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunRF";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunL : HandGunStandRunL
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunL";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunR : HandGunStandRunR
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunR";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkF",0.5,"HandGunCrouchWalkLF",0.5,"HandGunCrouchWalkRF",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunB : HandGunStandRunB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunLB : HandGunStandRunLB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunLB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchRunRB : HandGunStandRunRB
{
	actions="HandGunCrouchActions";
	connectAs="HandGunStandRunRB";
	enableOptics=0;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5};
};

class HandGunCrouchTurnL : HandGunCrouchBase
{
	file="\o\Anim\pvlevo.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchTurnR",1};
};

class HandGunCrouchTurnR : HandGunCrouchBase
{
	file="\o\Anim\pvpravo.rtm";
	speed=-1.6;
	looped=1;
	soundEnabled=0;
	relSpeedMin=0.5;
	relSpeedMax=1.0;
	duty=-1;
	interpolationSpeed=5;
	interpolateWith[]={"HandGunCrouch",1,"HandGunCrouchTurnL",1};
};

class CombatToHandGunStand1 : Default
{
	actions="HandGunStandActions";
	file="\o\Anim\sstani2pstani1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Combat",0.5};
	connectTo[]={"CombatToHandGunStand2",0.5};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class CombatToHandGunStand2 : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\sstani2pstani2.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",0.5};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunStandToCombat1 : HandGunDefault
{
	actions="CombatActions";
	file="\o\Anim\pstani2sstani1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",0.5};
	connectTo[]={"HandGunStandToCombat2",0.5};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class HandGunStandToCombat2 : Default
{
	actions="CombatActions";
	file="\o\Anim\pstani2sstani2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Combat",0.5};
	interpolateTo[]={"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
};

class StandToHandGunStand1 : Default
{
	actions="HandGunStandActions";
	file="\o\Anim\bezstani2pstani1.rtm";
	speed=-0.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Stand",0.5};
	connectTo[]={"StandToHandGunStand2",0.5};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class StandToHandGunStand2 : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\bezstani2pstani2.rtm";
	speed=-0.4;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",0.5};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class HandGunStandToStand1 : HandGunDefault
{
	actions="StandActions";
	file="\o\Anim\pstani2bezstani1.rtm";
	speed=-0.5;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",0.5};
	connectTo[]={"HandGunStandToStand2",0.5};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class HandGunStandToStand2 : Default
{
	actions="StandActions";
	file="\o\Anim\pstani2bezstani2.rtm";
	speed=-0.5;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Stand",0.5};
	interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};

class CivilToHandGunStand1 : Default
{
	actions="HandGunStandActions";
	file="\o\Anim\civilstani2pstani1.rtm";
	speed=-0.32;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Civil",0.5};
	connectTo[]={"CivilToHandGunStand2",0.5};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class CivilToHandGunStand2 : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\civilstani2pstani2.rtm";
	speed=-0.32;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",0.5};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class HandGunStandToCivil1 : HandGunDefault
{
	actions="CivilActions";
	file="\o\Anim\pstani2civilstani1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",0.5};
	connectTo[]={"HandGunStandToCivil2",0.5};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class HandGunStandToCivil2 : Default
{
	actions="CivilActions";
	file="\o\Anim\pstani2civilstani2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Civil",0.5};
	interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
};

class CrouchToHandGunCrouch1 : Default
{
	actions="HandGunCrouchActions";
	file="\o\Anim\sklek2pklek1.rtm";
	speed=-1.2;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Crouch",0.5};
	connectTo[]={"CrouchToHandGunCrouch2",0.5};
	interpolateTo[]={"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
};

class CrouchToHandGunCrouch2 : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\sklek2pklek2.rtm";
	speed=-0.5;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunCrouch",0.5};
	interpolateTo[]={"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
};

class HandGunCrouchToCrouch1 : HandGunDefault
{
	actions="CrouchActions";
	file="\o\Anim\pklek2sklek1.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",0.5};
	connectTo[]={"HandGunCrouchToCrouch2",0.5};
	interpolateTo[]={"CrouchDying",0.1};
};

class HandGunCrouchToCrouch2 : Default
{
	actions="CrouchActions";
	file="\o\Anim\pklek2sklek2.rtm";
	speed=-0.7;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Crouch",0.5};
	interpolateTo[]={"CrouchDying",0.1};
};

class LyingToHandGunLying1 : Default
{
	actions="HandGunLyingActions";
	file="\o\Anim\sleh2pleh1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Lying",0.5};
	connectTo[]={"LyingToHandGunLying2",0.5};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class LyingToHandGunLying2 : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\sleh2pleh2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunLying",0.5};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingToLying1 : HandGunDefault
{
	actions="LyingActions";
	file="\o\Anim\pleh2sleh1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",0.5};
	connectTo[]={"HandGunLyingToLying2",0.5};
	interpolateTo[]={"LyingDying",0.1};
};

class HandGunLyingToLying2 : Default
{
	actions="LyingActions";
	file="\o\Anim\pleh2sleh2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Lying",0.5};
	interpolateTo[]={"LyingDying",0.1};
};

class CivilLyingToHandGunLying1 : Default
{
	actions="HandGunLyingActions";
	file="\o\Anim\civilleh2pistleh1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"CivilLying",0.5};
	connectTo[]={"CivilLyingToHandGunLying2",0.5};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class CivilLyingToHandGunLying2 : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\civilleh2pistleh2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunLying",0.5};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingToCivilLying1 : HandGunDefault
{
	actions="CivilLyingActions";
	file="\o\Anim\pistleh2civilleh1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",0.5};
	connectTo[]={"HandGunLyingToCivilLying2",0.5};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class HandGunLyingToCivilLying2 : Default
{
	actions="CivilLyingActions";
	file="\o\Anim\pistleh2civilleh2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"CivilLying",0.5};
	interpolateTo[]={"CivilLyingDying",0.1};
};

class WeaponToHandGunCrouch1 : Default
{
	actions="HandGunCrouchActions";
	file="\o\Anim\at2pklek1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"Weapon",0.5};
	connectTo[]={"WeaponToHandGunCrouch2",0.5};
	interpolateTo[]={"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
};

class WeaponToHandGunCrouch2 : HandGunDefault
{
	actions="HandGunCrouchActions";
	file="\o\Anim\at2pklek2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunCrouch",0.5};
	interpolateTo[]={"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
};

class HandGunCrouchToWeapon1 : HandGunDefault
{
	actions="WeaponActions";
	file="\o\Anim\pklek2at1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunCrouch",0.5};
	connectTo[]={"HandGunCrouchToWeapon2",0.5};
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class HandGunCrouchToWeapon2 : Default
{
	actions="WeaponActions";
	file="\o\Anim\pklek2at2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"Weapon",0.5};
	interpolateTo[]={"WeaponDying",0.1,"WeaponDyingVer2",0.1};
};

class HandGunGetInCar : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\posobak.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunStand",1};
};

class HandGunGetInTank : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pnastup.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunStand",1};
};

class HandGunGetOutTank : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pseskok.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
};

class HandGunStandToHandGunMedic : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pmedicstart.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunMedic : HandGunDefault
{
	actions="HandGunMedicActions";
	file="\o\Anim\pmedicloop.rtm";
	speed=-3;
	looped=0;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunStandToHandGunMedic",2};
	connectTo[]={"HandGunMedicToHandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunMedicToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pmedicend.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunStandToHandGunPutDown : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanipoloz1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunPutDown : HandGunDefault
{
	actions="HandGunPutDownActions";
	file="\o\Anim\pstanipolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunStandToHandGunPutDown",2};
	connectTo[]={"HandGunPutDownToHandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunPutDownToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanipoloz2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunStandToHandGunTakeFlag : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanipoloz1.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunTakeFlag : HandGunDefault
{
	actions="HandGunTakeFlagActions";
	file="\o\Anim\pstanipolozstat.rtm";
	speed=-2.5;
	looped=1;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunStandToHandGunTakeFlag",2};
	connectTo[]={"HandGunTakeFlagToHandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunTakeFlagToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pstanipoloz2.rtm";
	speed=-1;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunStandToHandGunTreated : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pistosetrovanstart.rtm";
	speed=-3;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunTreated : HandGunDefault
{
	actions="HandGunTreatedActions";
	file="\o\Anim\pistosetrovanloop.rtm";
	speed=-3;
	looped=0;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunStandToHandGunTreated",2};
	connectTo[]={"HandGunTreatedToHandGunStand",2};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunTreatedToHandGunStand : HandGunDefault
{
	actions="HandGunStandActions";
	file="\o\Anim\pistosetrovanend.rtm";
	speed=-1.0;
	looped=0;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunStand",1};
	interpolateTo[]={"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
};

class HandGunLyingToHandGunLyingPutDown : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehpoloz1.rtm";
	speed=-1;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingPutDown : HandGunDefault
{
	actions="HandGunLyingPutDownActions";
	file="\o\Anim\pistlehpolozstat.rtm";
	speed=10000000000.0;
	looped=1;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunLyingToHandGunLyingPutDown",2};
	connectTo[]={"HandGunLyingPutDownToHandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingPutDownToHandGunLying : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehpoloz2.rtm";
	speed=-1;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingToHandGunLyingTreated : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehosetrovanstart.rtm";
	speed=-2;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectFrom[]={"HandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingTreated : HandGunDefault
{
	actions="HandGunLyingTreatedActions";
	file="\o\Anim\pistlehosetrovanloop.rtm";
	speed=-3;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	disableWeaponsLong=1;
	soundEnabled=0;
	aiming="aimingNo";
	connectFrom[]={"HandGunLyingToHandGunLyingTreated",2};
	connectTo[]={"HandGunLyingTreatedToHandGunLying",2};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class HandGunLyingTreatedToHandGunLying : HandGunDefault
{
	actions="HandGunLyingActions";
	file="\o\Anim\pistlehosetrovanend.rtm";
	speed=-1.0;
	looped=0;
	visibleSize=0.28;
	disableWeapons=1;
	soundEnabled=0;
	connectTo[]={"HandGunLying",1};
	interpolateTo[]={"HandGunLyingDying",0.1};
};

class FXBase0 : StandBase
{
	actions="StandActions";
	looped=0;
	soundEnabled=0;
	duty=-1;
	interpolationSpeed=1;
};

class FXexecution : FXBase0
{
	file="\o\Anim\poprava.rtm";
	speed=-3.0;
	connectTo[]={"Stand",1};
};

class FXexecutionDead : FXBase0
{
	file="\o\Anim\poprava2.rtm";
	speed=-1.0;
	connectTo[]={"Stand",1};
};

class FXdismay : FXBase0
{
	file="\o\Anim\ulek.rtm";
	speed=-2.0;
	connectTo[]={"Stand",1};
};

class FXToKneel : FXBase0
{
	file="\o\Anim\dobobku.rtm";
	speed=-1.5;
	connectFrom[]={"Civil",1};
	connectTo[]={"FXInKneel",1};
};

class FXInKneel : FXBase0
{
	actions="noactions";
	file="\o\Anim\bobek.rtm";
	speed=-6.0;
	looped=1;
};

class FXFromKneel : FXBase0
{
	file="\o\Anim\zbobku.rtm";
	speed=-2;
	connectFrom[]={"FXInKneel",1};
	connectTo[]={"Civil",1};
};

class FXshow1 : FXBase0
{
	file="\o\Anim\ukazovani1.rtm";
	speed=-4;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXshow2 : FXBase0
{
	file="\o\Anim\ukazovani2.rtm";
	speed=-6;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXshow3 : FXBase0
{
	file="\o\Anim\ukazovani3.rtm";
	speed=-3;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXshow4 : FXBase0
{
	file="\o\Anim\ukazovani4.rtm";
	speed=-3;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXshow5 : FXBase0
{
	file="\o\Anim\ukazovani5.rtm";
	speed=-3;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilLookaround : FXBase0
{
	file="\o\Anim\stanirozhlizi.rtm";
	speed=-4;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilLookaround2 : FXBase0
{
	file="\o\Anim\stanirozhlizi2.rtm";
	speed=-3;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilLookback : FXBase0
{
	file="\o\Anim\staniohlidnese.rtm";
	speed=-4;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilHandMouth : FXBase0
{
	file="\o\Anim\stanimluvisrukouupusy.rtm";
	speed=-6;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilFoldOnesArms : FXBase0
{
	file="\o\Anim\stanizaloziruce.rtm";
	speed=-6;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilArmsAkimboR : FXBase0
{
	file="\o\Anim\stanipravavbok.rtm";
	speed=-6;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXCivilArmsAkimboL : FXBase0
{
	file="\o\Anim\stanilevavavbok.rtm";
	speed=-5;
	connectFrom[]={"Civil",1};
	connectTo[]={"Civil",1};
};

class FXFromTable : FXBase0
{
	file="\o\Anim\odstolu.rtm";
	speed=-5;
	connectTo[]={"Civil",1};
};

class FXToTable : FXBase0
{
	actions="noactions";
	file="\o\Anim\kestolu.rtm";
	speed=-3;
	connectFrom[]={"Civil",1};
};

class FXSitLeftHandDown : FXBase0
{
	file="\o\Anim\sedilevackadolu.rtm";
	speed=-10;
};

class FXSitRightHandDown : FXBase0
{
	file="\o\Anim\sedipravackadolu.rtm";
	speed=-6;
};

class FXSitHandsOnTable : FXBase0
{
	file="\o\Anim\sediopirasihlavu.rtm";
	speed=-6;
};

class FXToHand : FXBase0
{
	file="\o\Anim\stanizaloziruce1.rtm";
	speed=-1.5;
	connectFrom[]={"Civil",1};
	connectTo[]={"FXInHand",1};
};

class FXInHand : FXBase0
{
	actions="noactions";
	file="\o\Anim\stanizaloziruce2.rtm";
	speed=-6.0;
	looped=1;
};

class FXInHandStat : FXBase0
{
	file="\o\Anim\stanizalozirucestat.rtm";
	speed=10000000000.0;
	looped=1;
	connectFrom[]={"FXInHand",1};
	connectTo[]={"Civil",1};
};

class FXFromHand : FXBase0
{
	file="\o\Anim\stanizaloziruce3.rtm";
	speed=-2;
	connectFrom[]={"FXInHand",1};
	connectTo[]={"Civil",1};
};

class FXNewcivil : FXBase0
{
	file="\o\Anim\pokusnystanistat.rtm";
	speed=-2;
};

class FXWomanSur : FXBase0
{
	file="\o\Anim\zenskarucevzhuru.rtm";
	speed=-2;
};
class oh58pilot : Driver
{
	file="uh60pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"oh58pilotV1",0.7,"oh58pilot"};
	interpolateWith[]={"oh58pilotV1",0.5};
	equivalentTo="oh58pilot";
	interpolationSpeed=1;
	connectTo[]={"oh58pilotDying",1};
};

class oh58pilotV1 : oh58pilot
{
	file="uh60pilot.rtm";
	speed="- 4";
	looped=1;
};

class oh58pilotDying : DefaultDie
{
	actions="NoActions";
	file="uh60pilotsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"oh58pilot",1};
};

class oh58pilotDead : oh58pilotDying
{
	actions="DeadActions";
	file="uh60pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"oh58pilotDying",1};
	connectTo[]={"DeadState",1};
};

class oh58gunner : Driver
{
	file="uh60pilotstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"oh58gunnerV1",0.7,"oh58gunner"};
	interpolateWith[]={"oh58gunnerV1",0.5};
	equivalentTo="oh58gunner";
	interpolationSpeed=1;
	connectTo[]={"oh58gunnerDying",1};
};

class oh58gunnerV1 : oh58gunner
{
	file="uh60pilot.rtm";
	speed="- 4";
	looped=1;
};

class oh58gunnerDying : DefaultDie
{
	actions="NoActions";
	file="uh60pilotsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"oh58gunner",1};
};

class oh58gunnerDead : oh58gunnerDying
{
	actions="DeadActions";
	file="uh60pilotsmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"oh58gunnerDying",1};
	connectTo[]={"DeadState",1};
};
//trabant - TODO
//			class TrabiDriverDying :  DefaultDie
//			{
//				actions = NoActions;
//				file=\trab\trabidriversmrt.rtm;
//				speed=-1;
//				looped=0;
//				soundEnabled=0;
//				connectFrom[]={TrabiDriver,1};
//			};
//			class TrabiDriverDead :  TrabiDriverDying
//			{
//				actions = DeadActions;
//				file=\trab\trabidriversmrt.rtm;
//				speed=SPEED_STATIC;
//				terminal = 1;
//				connectFrom[]={TrabiDriverDying,1};
//				connectTo[]={DeadState,1};
//			}
//		#define VEHIN_MOVES_VAR(Name,anim,vartime) \
//			class Name :  Driver \
//			{ \
//				file=anim##stat.rtm; \
//				speed=SPEED_STATIC; \
//				looped=1; \
//				variantsAI[]= {Name##V1,0.7,Name};\
//				interpolateWith[]={Name##V1,0.5};\
//				equivalentTo=Name; \
//				interpolationSpeed=1; \
//				connectTo[]={Name##Dying,1}; \
//			} \
//			class Name##V1 :  Name \
//			{ \
//				file=anim.rtm; \
//				speed=-vartime; \
//				looped=1; \
//			}
//		#define VEH_MOVES_VAR(Name,anim,time,vartime) \
//			VEHIN_MOVES_VAR(Name,anim,vartime); \
//			VEH_DIE_CONN(Name,anim,time)
//
//		VEH_MOVES_VAR(, , 1, 4);
//
class VulcanGunner : Driver
{
	file="\vulcan\vulcangunnerstat.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"VulcanGunnerV1",0.7,"VulcanGunner"};
	interpolateWith[]={"VulcanGunnerV1",0.5};
	equivalentTo="VulcanGunner";
	interpolationSpeed=1;
	connectTo[]={"VulcanGunnerDying",1};
};

class VulcanGunnerV1 : VulcanGunner
{
	file="\vulcan\vulcangunner.rtm";
	speed="- 4";
	looped=1;
};

class VulcanGunnerDying : DefaultDie
{
	actions="NoActions";
	file="\vulcan\vulcangunnersmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"VulcanGunner",1};
};

class VulcanGunnerDead : VulcanGunnerDying
{
	actions="DeadActions";
	file="\vulcan\vulcangunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"VulcanGunnerDying",1};
	connectTo[]={"DeadState",1};
};
class Ch47GunnerDying : DefaultDie
{
	actions = NoActions;
	file=\ch47\ch47gunnersmrt.rtm;
	speed=-1;
	looped=false;
	soundEnabled=false;
	connectFrom[]={Ch47Gunner,1};
};
class Ch47GunnerDead : Ch47GunnerDying
{
	actions = DeadActions;
	file=\ch47\ch47gunnersmrt2.rtm;
	speed=1e10;
	terminal = true;
	connectFrom[]={Ch47GunnerDying,1};
	connectTo[]={DeadState,1};
};
class Ch47Gunner : Driver
{
	file=\ch47\ch47gunnerstat.rtm;
	speed=1e10;
	looped=true;
	variantsAI[]= {Ch47GunnerV1,0.7,Ch47Gunner};
	interpolateWith[]={Ch47GunnerV1,0.5};
	equivalentTo=Ch47Gunner;
	interpolationSpeed=1;
	connectTo[]={Ch47GunnerDying,1};
};
class Ch47GunnerV1 : Ch47Gunner
{
	file=\ch47\ch47gunner.rtm;
	speed=-4;
	looped=true;
};

//CWA
class CamelDriver : Driver
{
	file = "\BIScamel\camelpilotstat.rtm";
	speed = 1e+010;
	looped = 1;
	variantsAI[] = {"CamelDriverV1", 0.7, "CamelDriver"};
	interpolateWith[] = {"CamelDriverV1", 0.5};
	equivalentTo = "CamelDriver";
	interpolationSpeed = 1;
	connectTo[] = {"CamelDriverDying", 1};
	interpolateTo[] = {"CamelDriverDying", 0.1};
};

class CamelDriverV1 : CamelDriver
{
	file = "\BIScamel\camelpilot.rtm";
	speed = "- 4";
	looped = 1;
	interpolateTo[] = {"CamelDriverDying", 0.1};
};

class CamelDriverDying : DefaultDie
{
	actions = "NoActions";
	file = "\BIScamel\camelpilotsmrt.rtm";
	speed = "- 1";
	looped = 0;
	soundEnabled = 0;
	connectFrom[] = {"CamelDriver", 1};
};

class CamelDriverDead : CamelDriverDying
{
	actions = "DeadActions";
	file = "\BIScamel\camelpilotsmrt2.rtm";
	speed = 1e+010;
	terminal = 1;
	connectFrom[] = {"CamelDriverDying", 1};
	connectTo[] = {"DeadState", 1};
};

class Camelcargo : Driver
{
	file = "\BISCamel\camelcargo.rtm";
	speed = 1e+010;
	looped = 1;
};

class Camelcargo2 : Driver
{
	file = "\BISCamel\camelcargo2.rtm";
	speed = 1e+010;
	looped = 1;
};

class CamelGrenadeThrow : Driver
{
	file = "\BISCamel\camelgranat.rtm";
	speed = 1e+010;
	looped = 0;
};

//SJC
class SANCPRLeanRight : Default
{
	preload=1;
	actions="LyingActions";
	file="\sjc_anims\std\snrollright.rtm";
	aimprecision=7;
	duty=15;
	speed=-1.1;
	enableOptics=0;
	connectFrom[]={"Lying",1};
	connectTo[]={"Lying",1};
	soundEdge1=0.1;
	soundEdge2=0.6;
	soundEnabled=1;
	soundOverride="crawl";
	looped=1;
};

class SANCPRLeanLeft : SANCPRLeanRight
{
	file="\sjc_anims\std\snrolleft.rtm";
};

class SANCSTLeanLeft : CombatWalkF
{
	preload=1;
	actions="CombatActions";
	file="\sjc_anims\std\snctleanleft.rtm";
	speed=-0.8;
	looped=0;
	duty=-0.7;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Combat",1};
	interpolateFrom[]={"Combat",1};
};

class SANCSTLeanRight : SANCSTLeanLeft
{
	file="\sjc_anims\std\snctleanright.rtm";
	interpolationSpeed=3;
};

class SANCCRLeanLeft : CrouchWalkF
{
	actions="CrouchActions";
	preload=1;
	file="\sjc_anims\std\snccrleanleft.rtm";
	speed=-0.8;
	looped=0;
	duty=-1;
	soundEnabled=0;
	soundOverride="halt";
	soundEdge1=0.1;
	soundEdge2=0.2;
	enableOptics=1;
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=1.2;
	interpolateTo[]={"Crouch",1};
	interpolateFrom[]={"Crouch",1};
};

class SANCCRLeanRight : SANCCRLeanLeft
{
	file="\sjc_anims\std\snccrleanright.rtm";
	interpolationSpeed=2;
};

class SANCATStand : Default
{
	preload=1;
	actions="WeaponActions";
	file="\sjc_anims\std\standAT.rtm";
	speed=-0.8;
	looped=0;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	enableMissile=1;
	duty=-1;
	visibleSize=0.6;
	aimPrecision=0.5;
	recoilSuffix="halffixed";
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Weapon",1};
	interpolateFrom[]={"Weapon,",1};
};

class SANCATLying : WeaponWalkB
{
	actions="WeaponActions";
	file="\sjc_anims\std\lyingAT.rtm";
	speed=-0.8;
	looped=0;
	soundOverride="halt";
	soundEnabled=0;
	soundEdge1=0.1;
	soundEdge2=0.15;
	enableMissile=1;
	duty=-1;
	visibleSize=0.6;
	aimPrecision=0.3;
	recoilSuffix="halffixed";
	relSpeedMin=0.7;
	relSpeedMax=1.0;
	interpolationSpeed=2;
	interpolateTo[]={"Weapon",1};
	interpolateFrom[]={"Weapon,",1};
};

class fz_ah64gunner: Driver
{
	file="\sjc_anims\ah64\fz_ah64gunnerst.rtm";
	speed=-4.2;
	looped=1;
	variantsAI[]={"fz_ah64gunnerV1",0.700000,"fz_ah64gunner"};
	interpolateWith[]={"fz_ah64gunnerV1",0.500000};
	equivalentTo="fz_ah64gunner";
	interpolationSpeed=1;
	connectTo[]={"fz_ah64gunner_d",1};
	interpolateTo[]={"fz_ah64gunner_d",0.100000};
};
class fz_ah64gunnerV1: fz_ah64gunner 
{ 
	file="\sjc_anims\ah64\fz_ah64gunner.rtm"; 
	speed="-4.2"; 
	looped=true; 
	soundEnabled=true; 
	connectFrom[]={"fz_ah64gunner",1}; 
}; 
class fz_ah64gunner_d: DefaultDie 
{ 
	actions = NoActions; 
	file="\sjc_anims\ah64\fz_ah64gunner_d.rtm"; 
	speed="-2.2"; 
	looped=false; 
	soundEnabled=false; 
	connectFrom[]={"fz_ah64gunner",1}; 
}; 
class fz_ah64gunner_ds : fz_ah64gunner_d 
{ 
	actions = DeadActions; 
	file="\sjc_anims\ah64\fz_ah64gunner_ds.rtm"; 
	speed=10000000000.000000; 
	terminal = true; 
	connectFrom[]={"fz_ah64gunner_d",1}; 
	connectTo[]={"DeadState",1}; 
};
class fz_ah64pilot: Driver
{
	file="\sjc_anims\ah64\fz_ah64pilotst.rtm";
	speed=-4.2;
	looped=1;
	variantsAI[]={"fz_ah64pilotV1",0.700000,"fz_ah64pilot"};
	interpolateWith[]={"fz_ah64pilotV1",0.500000};
	equivalentTo="fz_ah64pilot";
	interpolationSpeed=1;
	connectTo[]={"fz_ah64pilot_d",1};
	interpolateTo[]={"fz_ah64pilot_d",0.100000};
};
class fz_ah64pilotV1: fz_ah64gunner 
{ 
	file="\sjc_anims\ah64\fz_ah64pilot.rtm"; 
	speed="-4.2"; 
	looped=true; 
	soundEnabled=true; 
	connectFrom[]={"fz_ah64pilot",1}; 
}; 
class fz_ah64pilot_d: DefaultDie 
{ 
	actions = NoActions; 
	file="\sjc_anims\ah64\fz_ah64pilot_d.rtm"; 
	speed="-2.2"; 
	looped=false; 
	soundEnabled=false; 
	connectFrom[]={"fz_ah64pilot",1}; 
}; 
class fz_ah64pilot_ds : fz_ah64pilot_d 
{ 
	actions = DeadActions; 
	file="\sjc_anims\ah64\fz_ah64pilot_ds.rtm"; 
	speed=10000000000.000000; 
	terminal = true; 
	connectFrom[]={"fz_ah64pilot_d",1}; 
	connectTo[]={"DeadState",1}; 
};

class fz_oh58plt: Driver
{
	file="\sjc_anims\oh58\fz_oh58pltst.rtm";
	speed=-4.2;
	looped=1;
	variantsAI[]={"fz_oh58pltV1",0.700000,"fz_oh58plt"};
	interpolateWith[]={"fz_oh58pltV1",0.500000};
	equivalentTo="fz_oh58plt";
	interpolationSpeed=1;
	connectTo[]={"fz_oh58plt_d",1};
	interpolateTo[]={"fz_oh58plt_d",0.100000};
};
class fz_oh58pltV1: fz_oh58plt
{ 
	file="\sjc_anims\oh58\fz_oh58plt.rtm"; 
	speed="-4.2"; 
	looped=true; 
	soundEnabled=true; 
	connectFrom[]={"fz_oh58plt",1}; 
}; 
class fz_oh58plt_d: DefaultDie 
{ 
	actions = NoActions; 
	file="\sjc_anims\oh58\fz_oh58plt_d.rtm"; 
	speed="-1.2"; 
	looped=false; 
	soundEnabled=false; 
	connectFrom[]={"fz_oh58plt",1}; 
}; 
class fz_oh58plt_ds : fz_oh58plt_d
{ 
	actions = DeadActions; 
	file="\sjc_anims\oh58\fz_oh58plt_ds.rtm"; 
	speed=10000000000.000000; 
	terminal = true; 
	connectFrom[]={"fz_oh58plt_d",1}; 
	connectTo[]={"DeadState",1}; 
};
class fz_oh58gunner: Driver
{
	file="\sjc_anims\oh58\fz_oh58gunnerst.rtm";
	speed=-4.2;
	looped=1;
	variantsAI[]={"fz_oh58gunnerV1",0.700000,"fz_oh58gunner"};
	interpolateWith[]={"fz_oh58gunnerV1",0.500000};
	equivalentTo="fz_oh58gunner";
	interpolationSpeed=1;
	connectTo[]={"fz_oh58gunner_d",1};
	interpolateTo[]={"fz_oh58gunner_d",0.100000};
};
class fz_oh58gunnerV1: fz_oh58gunner
{ 
	file="\sjc_anims\oh58\fz_oh58gunner.rtm"; 
	speed="-4.2"; 
	looped=true; 
	soundEnabled=true; 
	connectFrom[]={"fz_oh58gunner",1}; 
}; 
class fz_oh58gunner_d: DefaultDie 
{ 
	actions = NoActions; 
	file="\sjc_anims\oh58\fz_oh58gunner_d.rtm"; 
	speed="-1.2"; 
	looped=false; 
	soundEnabled=false; 
	connectFrom[]={"fz_oh58gunner",1}; 
}; 
class fz_oh58gunner_ds : fz_oh58plt_d
{ 
	actions = DeadActions; 
	file="sjc_anims\oh58\fz_oh58gunner_ds.rtm"; 
	speed=10000000000.000000; 
	terminal = true; 
	connectFrom[]={"fz_oh58gunner_d",1}; 
	connectTo[]={"DeadState",1}; 
};

//BAS Blackhawks
class bas_mh60gunner : Driver
{
	file = "\sjc_anims\mh60\bas_mh60gunnerstat.rtm";
	speed = 1e10;
	looped = true;
	variantsAI[]= {bas_mh60gunnerV1,0.7,bas_mh60gunner};
	interpolateWith[]={bas_mh60gunnerV1,0.5};
	equivalentTo=bas_mh60gunner;
	interpolationSpeed=1;
	connectTo[]={bas_mh60gunnerDying,1};
};

class bas_mh60gunnerV1 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60gunner.rtm";
	speed = -12;
};

class bas_mh60gunnerDying : DefaultDie
{
	actions = NoActions;
	file = "\sjc_anims\mh60\bas_mh60gunnersmrt.rtm";
	speed = -0.5;
	looped=false;
	soundEnabled=false;
	connectFrom[]={bas_mh60gunner,1};
};

class bas_mh60gunnerDead : bas_mh60gunnerDying
{
	actions = DeadActions;
	file = "\sjc_anims\mh60\bas_mh60gunnersmrt2.rtm";
	speed = 1e10;
	terminal = true;
	connectFrom[]={bas_mh60gunnerDying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo2 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargostat.rtm";
	variantsAI[]= {bas_mh60cargo2V1,0.7,bas_mh60cargo2};
	interpolateWith[]={bas_mh60cargo2V1,0.5};
	equivalentTo=bas_mh60cargo2;
	connectTo[]={bas_mh60cargo2Dying,1};
};

class bas_mh60cargo2V1 : bas_mh60cargo2
{
	file="\sjc_anims\mh60\bas_mh60cargo.rtm";
	speed=-3;
}

class bas_mh60cargo2Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargosmrt.rtm";
	speed=-0.7;
	connectFrom[]={bas_mh60cargo2,1};
};

class bas_mh60cargo2Dead : bas_mh60cargo2Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargosmrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo2Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo3 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargostat.rtm";
	variantsAI[]= {bas_mh60cargo3V1,0.7,bas_mh60cargo3};
	interpolateWith[]={bas_mh60cargo3V1,0.5};
	equivalentTo=bas_mh60cargo3;
	connectTo[]={bas_mh60cargo3Dying,1};
};

class bas_mh60cargo3V1 : bas_mh60cargo3
{
	file="\sjc_anims\mh60\bas_mh60cargo.rtm";
	speed=-5.5;
};

class bas_mh60cargo3Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargosmrt.rtm";
	speed=-0.8;
	connectFrom[]={bas_mh60cargo3,1};
};

class bas_mh60cargo3Dead : bas_mh60cargo3Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargosmrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo3Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo4 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargostat.rtm";
	variantsAI[]= {bas_mh60cargo4V1,0.7,bas_mh60cargo4};
	interpolateWith[]={bas_mh60cargo4V1,0.5};
	equivalentTo=bas_mh60cargo4;
	connectTo[]={bas_mh60cargo4Dying,1};
};

class bas_mh60cargo4V1 : bas_mh60cargo4
{
	file="\sjc_anims\mh60\bas_mh60cargo.rtm";
	speed=-3.9;
};

class bas_mh60cargo4Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargosmrt.rtm";
	speed=-0.9;
	connectFrom[]={bas_mh60cargo4,1};
};

class bas_mh60cargo4Dead : bas_mh60cargo4Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargosmrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo4Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo5 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargostat.rtm";
	variantsAI[]= {bas_mh60cargo5V1,0.7,bas_mh60cargo5};
	interpolateWith[]={bas_mh60cargo5V1,0.5};
	equivalentTo=bas_mh60cargo5;
	connectTo[]={bas_mh60cargo5Dying,1};
};

class bas_mh60cargo5V1 : bas_mh60cargo5
{
	file="\sjc_anims\mh60\bas_mh60cargo.rtm";
	speed=-7;
};

class bas_mh60cargo5Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargosmrt.rtm";
	speed=-1;
	connectFrom[]={bas_mh60cargo5,1};
};

class bas_mh60cargo5Dead : bas_mh60cargo5Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargosmrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo5Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo6 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargostat.rtm";
	variantsAI[]= {bas_mh60cargo6V1,0.7,bas_mh60cargo6};
	interpolateWith[]={bas_mh60cargo6V1,0.5};
	equivalentTo=bas_mh60cargo6;
	connectTo[]={bas_mh60cargo6Dying,1};
};

class bas_mh60cargo6V1 : bas_mh60cargo6
{
	file="\sjc_anims\mh60\bas_mh60cargo.rtm";
	speed=-4.5;
};

class bas_mh60cargo6Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargosmrt.rtm";
	speed=-1.1;
	connectFrom[]={bas_mh60cargo6,1};
};

class bas_mh60cargo6Dead : bas_mh60cargo6Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargosmrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo6Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo7 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo7V1,0.7,bas_mh60cargo7};
	interpolateWith[]={bas_mh60cargo7V1,0.5};
	equivalentTo=bas_mh60cargo7;
	connectTo[]={bas_mh60cargo7Dying,1};
};

class bas_mh60cargo7V1 : bas_mh60cargo7
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-8;
};

class bas_mh60cargo7Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-0.9;
	connectFrom[]={bas_mh60cargo7,1};
};

class bas_mh60cargo7Dead : bas_mh60cargo7Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo7Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo8 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo8V1,0.7,bas_mh60cargo8};
	interpolateWith[]={bas_mh60cargo8V1,0.5};
	equivalentTo=bas_mh60cargo8;
	connectTo[]={bas_mh60cargo8Dying,1};
};

class bas_mh60cargo8V1 : bas_mh60cargo8
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-6.3;
};

class bas_mh60cargo8Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-0.8;
	connectFrom[]={bas_mh60cargo8,1};
};

class bas_mh60cargo8Dead : bas_mh60cargo8Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo8Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo9 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo9V1,0.7,bas_mh60cargo9};
	interpolateWith[]={bas_mh60cargo9V1,0.5};
	equivalentTo=bas_mh60cargo9;
	connectTo[]={bas_mh60cargo9Dying,1};
};

class bas_mh60cargo9V1 : bas_mh60cargo9
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-8;
};

class bas_mh60cargo9Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-0.7;
	connectFrom[]={bas_mh60cargo9,1};
};

class bas_mh60cargo9Dead : bas_mh60cargo9Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo9Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo10 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo10V1,0.7,bas_mh60cargo10};
	interpolateWith[]={bas_mh60cargo10V1,0.5};
	equivalentTo=bas_mh60cargo10;
	connectTo[]={bas_mh60cargo10Dying,1};
};

class bas_mh60cargo10V1 : bas_mh60cargo10
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-6.2;
};

class bas_mh60cargo10Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-1.1;
	connectFrom[]={bas_mh60cargo10,1};
};

class bas_mh60cargo10Dead : bas_mh60cargo10Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo10Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo11 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo11V1,0.7,bas_mh60cargo11};
	interpolateWith[]={bas_mh60cargo11V1,0.5};
	equivalentTo=bas_mh60cargo11;
	connectTo[]={bas_mh60cargo11Dying,1};
};

class bas_mh60cargo11V1 : bas_mh60cargo11
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-8.9;
};

class bas_mh60cargo11Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-1;
	connectFrom[]={bas_mh60cargo11,1};
};

class bas_mh60cargo11Dead : bas_mh60cargo11Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo11Dying,1};
	connectTo[]={DeadState,1};
};

class bas_mh60cargo12 : bas_mh60gunner
{
	file = "\sjc_anims\mh60\bas_mh60cargo7stat.rtm";
	variantsAI[]= {bas_mh60cargo12V1,0.7,bas_mh60cargo12};
	interpolateWith[]={bas_mh60cargo12V1,0.5};
	equivalentTo=bas_mh60cargo12;
	connectTo[]={bas_mh60cargo12Dying,1};
};

class bas_mh60cargo12V1 : bas_mh60cargo12
{
	file="\sjc_anims\mh60\bas_mh60cargo7.rtm";
	speed=-6;
};

class bas_mh60cargo12Dying : bas_mh60gunnerDying
{
	file = "\sjc_anims\mh60\bas_mh60cargo7smrt.rtm";
	speed=-1;
	connectFrom[]={bas_mh60cargo12,1};
};

class bas_mh60cargo12Dead : bas_mh60cargo12Dying
{
	actions = DeadActions;
	file="\sjc_anims\mh60\bas_mh60cargo7smrt2.rtm";
	speed=1e10;
	terminal = true;
	connectFrom[]={bas_mh60cargo12Dying,1};
	connectTo[]={DeadState,1};
};

class BAS_MH60fastrope : StandBase
{
	actions = StandTalkActions;
	file="\sjc_anims\mh60\bas_mh60fastrope.rtm";
	speed = -4.0;
	looped=false;
	soundEnabled=false;
	duty = RestDuty;
	interpolationSpeed=2;
	connectFrom[]={Stand, 1, StandVar2, 1, StandVar3, 1};
	connectTo[]={Stand, 1, StandVar2, 1, StandVar3, 1};
	interpolateTo[]={StandDying,0.1,StandDyingVer2,0.1};
};

class CBT_M2Driver: Driver
{
	file="\sjc_anims\bradley\CBT_M2driverstat.rtm";
	speed=10000000000.000000;
	looped=1;
	variantsAI[]={"CBT_M2DriverV1",0.700000,"CBT_M2Driver"};
	interpolateWith[]={"CBT_M2DriverV1",0.500000};
	equivalentTo="CBT_M2Driver";
	interpolationSpeed=1;
};
class CBT_M2DriverV1: CBT_M2Driver
{
	file="\sjc_anims\bradley\CBT_M2driver.rtm";
	speed="- 4";
	looped=1;
};
class CBT_M2Gunner: Driver
{
	file="\sjc_anims\bradley\CBT_M2gunnerstat.rtm";
	speed=10000000000.000000;
	looped=1;
	variantsAI[]={"CBT_M2GunnerV1",0.700000,"CBT_M2Gunner"};
	interpolateWith[]={"CBT_M2GunnerV1",0.500000};
	equivalentTo="CBT_M2Gunner";
	interpolationSpeed=1;
};
class CBT_M2GunnerV1: CBT_M2Gunner
{
	file="\sjc_anims\bradley\CBT_M2gunner.rtm";
	speed="- 4";
	looped=1;
};
class CBT_M2GunnerOut: Driver
{
	file="\sjc_anims\bradley\CBT_M2gunneroutstat.rtm";
	speed=10000000000.000000;
	looped=1;
	variantsAI[]={"CBT_M2GunnerOutV1",0.700000,"CBT_M2GunnerOut"};
	interpolateWith[]={"CBT_M2GunnerOutV1",0.500000};
	equivalentTo="CBT_M2GunnerOut";
	interpolationSpeed=1;
	connectTo[]={"CBT_M2GunnerOutDying",1};
};
class CBT_M2GunnerOutV1: CBT_M2GunnerOut
{
	file="\sjc_anims\bradley\CBT_M2gunnerout.rtm";
	speed="- 4";
	looped=1;
};
class CBT_M2GunnerOutDying: DefaultDie
{
	actions="NoActions";
	file="\sjc_anims\bradley\CBT_M2gunneroutsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"CBT_M2GunnerOut",1};
};
class CBT_M2GunnerOutDead: CBT_M2GunnerOutDying
{
	actions="DeadActions";
	file="\sjc_anims\bradley\CBT_M2gunneroutsmrt2.rtm";
	speed=10000000000.000000;
	terminal=1;
	connectFrom[]={"CBT_M2GunnerOutDying",1};
	connectTo[]={"DeadState",1};
};
class CBT_M2Commander: Driver
{
	file="\sjc_anims\bradley\CBT_M2commanderstat.rtm";
	speed=10000000000.000000;
	looped=1;
	variantsAI[]={"CBT_M2CommanderV1",0.700000,"CBT_M2Commander"};
	interpolateWith[]={"CBT_M2CommanderV1",0.500000};
	equivalentTo="CBT_M2Commander";
	interpolationSpeed=1;
};
class CBT_M2CommanderV1: CBT_M2Commander
{
	file="\sjc_anims\bradley\CBT_M2commander.rtm";
	speed="- 4";
	looped=1;
};
class CBT_M2CommanderOut: Driver
{
	file="\sjc_anims\bradley\CBT_M2commanderoutstat.rtm";
	speed=10000000000.000000;
	looped=1;
	variantsAI[]={"CBT_M2CommanderOutV1",0.700000,"CBT_M2CommanderOut"};
	interpolateWith[]={"CBT_M2CommanderOutV1",0.500000};
	equivalentTo="CBT_M2CommanderOut";
	interpolationSpeed=1;
	connectTo[]={"CBT_M2CommanderOutDying",1};
};
class CBT_M2CommanderOutV1: CBT_M2CommanderOut
{
	file="\sjc_anims\bradley\CBT_M2commanderout.rtm";
	speed="- 4";
	looped=1;
};
class CBT_M2CommanderOutDying: DefaultDie
{
	actions="NoActions";
	file="\sjc_anims\bradley\CBT_M2commanderoutsmrt.rtm";
	speed="- 1";
	looped=0;
	soundEnabled=0;
	connectFrom[]={"CBT_M2CommanderOut",1};
};
class CBT_M2CommanderOutDead: CBT_M2CommanderOutDying
{
	actions="DeadActions";
	file="\sjc_anims\bradley\CBT_M2commanderoutsmrt2.rtm";
	speed=10000000000.000000;
	terminal=1;
	connectFrom[]={"CBT_M2CommanderOutDying",1};
	connectTo[]={"DeadState",1};
};

class CBT_HMMWVTOWGunner : Driver
{
	file="\sjc_anims\hmmwv\CBT_HMMWVTOWGunner.rtm";
	speed=10000000000.0;
	looped=1;
	variantsAI[]={"CBT_HMMWVTOWGunnerV1",0.7,"CBT_HMMWVTOWGunner"};
	interpolateWith[]={"CBT_HMMWVTOWGunnerV1",0.5};
	equivalentTo="CBT_HMMWVTOWGunner";
	interpolationSpeed=1;
	connectTo[]={"CBT_HMMWVTOWGunnerDying",1};
};

class CBT_HMMWVTOWGunnerV1 : CBT_HMMWVTOWGunner
{
	file="\sjc_anims\hmmwv\CBT_HMMWVTOWGunner.rtm";
	speed=-4;
	looped=1;
};

class CBT_HMMWVTOWGunnerDying : DefaultDie
{
	actions="NoActions";
	file="M113Gunnersmrt.rtm";
	speed=-1;
	looped=0;
	soundEnabled=0;
	connectFrom[]={"CBT_HMMWVTOWGunner",1};
};

class CBT_HMMWVTOWGunnerDead : CBT_HMMWVTOWGunnerDying
{
	actions="DeadActions";
	file="M113Gunnersmrt2.rtm";
	speed=10000000000.0;
	terminal=1;
	connectFrom[]={"CBT_HMMWVTOWGunnerDying",1};
	connectTo[]={"DeadState",1};
};

class DLEMural375Driver : Driver
{
	actions=StandActions;
	file = "\sjc_anims\ural\DLEMural375Driver.rtm";
	speed = SPEED_STATIC;
	looped=1;
	soundEnabled=0;
	variantAfter[]={1,3,6};
	variantsAI[]={HandGunStandVar2,.700000,HandGunStand,.300000};
	equivalentTo=HandGunStand;
};

class DLEMural375CARGO: DLEMural375Driver
{
	file = "\sjc_anims\ural\DLEMural375CARGO.rtm";
};

class DLEMural375CARGO1 : DLEMural375Driver
{
	file = "\sjc_anims\ural\DLEMural375CARGO1.rtm";
};

class DLEMural375CARGO2 : DLEMural375Driver
{
	file = "\sjc_anims\ural\DLEMural375CARGO2.rtm";
};

class DLEMural375CARGO3: DLEMural375Driver
{
	file = "\sjc_anims\ural\DLEMural375CARGO3.rtm";
};

class DLEMural375CARGO4: DLEMural375Driver
{
	file = "\sjc_anims\ural\DLEMural375CARGO4.rtm";
};

class OWPMi8pilot : Driver
{
	file = "\sjc_anims\mi8\OWPMi8pilotstat.rtm";
	speed=SPEED_STATIC;
	looped=true;
	variantsAI[]= {"OWPMi8pilotV1",0.7,"OWPMi8pilot"};
	interpolateWith[]={"OWPMi8pilotV1",0.5};
	equivalentTo = "OWPMi8pilot";
	interpolationSpeed=1;
	connectTo[]={"OWPMi8pilotDying",1};
};

class OWPMi8pilotV1 : OWPMi8pilot
{
	file = "\sjc_anims\mi8\OWPMi8pilot.rtm";
	speed = -5;
	looped=true;
};

class OWPMi8pilotDying : DefaultDie
{
	actions = NoActions;
	file = "\sjc_anims\mi8\OWPMi8pilotsmrt2.rtm";
	speed = -1;
	looped=false;
	soundEnabled=false;
	connectFrom[]={"OWPMi8pilot",1};
};

class OWPMi8pilotDead: OWPMi8pilotDying
{
	actions = DeadActions;
	file = "\sjc_anims\mi8\OWPMi8pilotsmrt.rtm";
	speed=SPEED_STATIC;
	terminal = true;
	connectFrom[]={"OWPMi8pilotDying",1};
	connectTo[]={DeadState,1};
};

class OWPMi8copilot : Driver
{
	file = "\sjc_anims\mi8\OWPMi8copilotstat.rtm";
	speed=SPEED_STATIC;
	looped=true;
	variantsAI[]= {"OWPMi8copilotV1",0.7,"OWPMi8copilot"};
	interpolateWith[]={"OWPMi8copilotV1",0.5};
	equivalentTo = "OWPMi8copilot";
	interpolationSpeed=1;
	connectTo[]={"OWPMi8copilotDying",1};
};

class OWPMi8copilotV1 : OWPMi8copilot
{
	file = "\sjc_anims\mi8\OWPMi8copilot.rtm";
	speed = -5;
	looped=true;
};

class OWPMi8copilotDying : DefaultDie
{
	actions = NoActions;
	file = "\sjc_anims\mi8\OWPMi8copilotsmrt2.rtm";
	speed = -1;
	looped=false;
	soundEnabled=false;
	connectFrom[]={"OWPMi8copilot",1};
};

class OWPMi8copilotDead : OWPMi8copilotDying
{
	actions = DeadActions;
	file = "\sjc_anims\mi8\OWPMi8copilotsmrt.rtm";
	speed=SPEED_STATIC;
	terminal = true;
	connectFrom[]={"OWPMi8copilotDying",1};
	connectTo[]={DeadState,1};
};

class OWPMi8GunnerFront : Driver
{
	file = "\sjc_anims\mi8\OWPMi8GunnerFrontstat.rtm";
	speed=SPEED_STATIC;
	looped=true;
	variantsAI[]= {"OWPMi8GunnerFrontV1",0.7,"OWPMi8GunnerFront"};
	interpolateWith[]={"OWPMi8GunnerFrontV1",0.5};
	equivalentTo = "OWPMi8GunnerFront";
	interpolationSpeed=1;
	connectTo[]={"OWPMi8GunnerFrontDying",1};
};

class OWPMi8GunnerFrontV1 : OWPMi8GunnerFront
{
	file = "\sjc_anims\mi8\OWPMi8GunnerFront.rtm";
	speed = -5;
	looped=true;
};

class OWPMi8GunnerFrontDying : DefaultDie
{
	actions = NoActions;
	file = "\sjc_anims\mi8\OWPMi8GunnerFrontsmrt2.rtm";
	speed = -1;
	looped=false;
	soundEnabled=false;
	connectFrom[]={"OWPMi8GunnerFront",1};
};

class OWPMi8GunnerFrontDead : OWPMi8GunnerFrontDying
{
	actions = DeadActions;
	file = "\sjc_anims\mi8\OWPMi8GunnerFrontsmrt.rtm";
	speed=SPEED_STATIC;
	terminal = true;
	connectFrom[]={"OWPMi8GunnerFrontDying",1};
	connectTo[]={DeadState,1};
};

class CSLA2_BMP_driverout : StandBase
{
	actions = "NoActions";
	file = "\sjc_anims\bmp\bmp_driverout.rtm";
	speed = SPEED_STATIC;
	looped = 1;
	soundEnabled = 0;
	duty = -1;
	interpolationSpeed = 2;
	connectFrom[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	connectTo[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
};

class CSLA2_BMP_gunnerout : StandBase
{
	actions = "NoActions";
	file = "\sjc_anims\bmp\bmp_gunnerout.rtm";
	speed = SPEED_STATIC;
	looped = 1;
	soundEnabled = 0;
	duty = -1;
	interpolationSpeed = 2;
	connectFrom[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	connectTo[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
};
class CSLA2_BMP_commanderout : StandBase
{
	actions = "NoActions";
	file = "\sjc_anims\bmp\bmp_commanderout.rtm";
	speed = SPEED_STATIC;
	looped = 1;
	soundEnabled = 0;
	duty = -1;
	interpolationSpeed = 2;
	connectFrom[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	connectTo[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
	interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
};