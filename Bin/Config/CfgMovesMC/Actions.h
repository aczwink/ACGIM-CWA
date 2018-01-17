class NoActionsAll : CfgManActions
{
	access = ACCESS_FORBIDDENVERIFIED;
};

class NoActions : NoActionsAll
{
	ladderOnDown="LadderDownStart";
	ladderOnUp="LadderUpStart";
	turnSpeed=1;
	upDegree=-1;
	limitFast=5;
};

class DeadActions : NoActions
{
	upDegree = MANPOS_DEAD;
};

class CargoActions : NoActions
{
	die="DeadState";
};

class WeaponActions : NoActions
{
	stop="Weapon";
	upDegree=MANPOS_WEAPON;
	weaponOn="Weapon";
	weaponOff="Crouch";
	handGunOn="HandGunCrouch";
	down="Lying";
	up="Combat";
	lying="Lying";
	combat="Combat";
	crouch="Crouch";
	stand="Stand";
	die="WeaponDead";
	civilLying="CivilLying";
	civil="Civil";
	walkF="WeaponWalkF";
	walkLF="WeaponWalkLF";
	walkRF="WeaponWalkRF";
	walkL="WeaponWalkL";
	walkR="WeaponWalkR";
	walkLB="WeaponWalkLB";
	walkRB="WeaponWalkRB";
	walkB="SANCATStand";
	slowF="WeaponWalkF";
	slowLF="WeaponWalkLF";
	slowRF="WeaponWalkRF";
	slowL="WeaponWalkL";
	slowR="WeaponWalkR";
	slowLB="WeaponWalkLB";
	slowRB="WeaponWalkRB";
	slowB="SANCATStand";
	fastF="WeaponRunF";
	fastLF="WeaponRunLF";
	fastRF="WeaponRunRF";
	fastL="WeaponRunL";
	fastR="WeaponRunR";
	fastLB="WeaponWalkLB";
	fastRB="WeaponWalkRB";
	fastB="WeaponWalkB";
	turnL="WeaponTurnL";
	turnR="WeaponTurnR";
	default="Combat";
	getInCar="CombatGetInCar";
	getOutCar="Combat";
	getInTank="CombatGetInTank";
	getOutTank="CombatGetOutTank";
	reloadAT="WeaponReloadAT";
};

class StandActions : NoActions
{
	stop="Stand";
	default="Stand";
	walkF="StandWalkF";
	walkLF="StandWalkLF";
	walkRF="StandWalkRF";
	walkL="StandWalkL";
	walkR="StandWalkR";
	walkLB="StandWalkLB";
	walkRB="StandWalkRB";
	walkB="StandWalkB";
	slowF="StandWalkF";
	slowLF="StandWalkLF";
	slowRF="StandWalkRF";
	slowL="StandWalkL";
	slowR="StandWalkR";
	slowLB="StandWalkLB";
	slowRB="StandWalkRB";
	slowB="StandWalkB";
	fastF="StandRunF";
	fastLF="StandWalkLF";
	fastRF="StandWalkRF";
	fastL="StandWalkL";
	fastR="StandWalkR";
	fastLB="StandWalkLB";
	fastRB="StandWalkRB";
	fastB="StandWalkB";
	down="Combat";
	up="Combat";
	weaponOn="Weapon";
	weaponOff="Stand";
	binocOn="BinocStand";
	binocOff="Stand";
	handGunOn="HandGunStand";
	strokeFist="StandStrokeFist";
	strokeGun="";
	lying="Lying";
	combat="Combat";
	crouch="Crouch";
	stand="Stand";
	civil="Civil";
	civilLying="CivilLying";
	fireNotPossible="Combat";
	throwGrenade="StandThrowGrenadeStart";
	turnL="StandTurnL";
	turnR="StandTurnR";
	getInCar="StandGetInCar";
	getOutCar="Stand";
	getInTank="StandGetInTank";
	getOutTank="StandGetOutTank";
	sitDown="StandToSitDown";
	salute="EffectStandSaluteStart";
	turnSpeed=4;
	limitFast=2.5;
	die="StandDead";
	takeFlag="StandToStandTakeFlag";
	putDown="StandPutDown";
	upDegree=MANPOS_STAND;
};

class StandStillActions : StandActions
{
	stop="EffectStandStill";
	default="EffectStandStill";
};

class StandStandActions : StandActions
{
	stop="EffectStand";
	default="EffectStand";
};

class StandSaluteActions : StandActions
{
	stop="EffectStandSalute";
	default="EffectStandSalute";
	salute="";
};

class StandTalkActions : StandActions
{
	stop="EffectStandTalk";
	default="EffectStandTalk";
};

class SitActions : StandActions
{
	turnL="";
	turnR="";
	stop="EffectStandSitDown";
	default="EffectStandSitDown";
	strokeFist="";
	sitDown="";
	die="SitDownDead";
};

class CivilActions : StandActions
{
	stop="Civil";
	default="Civil";
	walkF="CivilWalkF";
	walkLF="CivilWalkLF";
	walkRF="CivilWalkRF";
	walkL="CivilWalkL";
	walkR="CivilWalkR";
	walkLB="CivilWalkLB";
	walkRB="CivilWalkRB";
	walkB="CivilWalkB";
	slowF="CivilWalkF";
	slowLF="CivilWalkLF";
	slowRF="CivilWalkRF";
	slowL="CivilWalkL";
	slowR="CivilWalkR";
	slowLB="CivilWalkLB";
	slowRB="CivilWalkRB";
	slowB="CivilWalkB";
	fastF="CivilRunF";
	fastLF="CivilRunLF";
	fastRF="CivilRunRF";
	fastL="CivilRunL";
	fastR="CivilRunR";
	fastLB="CivilRunLB";
	fastRB="CivilRunRB";
	fastB="CivilRunB";
	down="CivilLying";
	up="CivilLying";
	lying="Lying";
	combat="Combat";
	crouch="Crouch";
	stand="Stand";
	civil="Civil";
	civilLying="CivilLying";
	throwGrenade="CivilThrowGrenadeStart";
	turnL="CivilTurnL";
	turnR="CivilTurnR";
	handGunOn="HandGunStand";
	die="CivilDead";
	getInCar="CivilGetInCar";
	getOutCar="Civil";
	getInTank="CivilGetInTank";
	getOutTank="CivilGetOutTank";
	takeFlag="CivilToCivilTakeFlag";
	putDown="CivilPutDown";
	limitFast=4;
	upDegree=MANPOS_NOWEAPON;
};

class CombatActions : NoActions
{
	stop="Combat";
	default="Combat";
	stopRelaxed="CombatRelaxed";
	reloadMagazine="CombatReloadMagazine";
	reloadMGun="CombatReloadMGun";
	reloadMortar="CombatReloadMortarStart";
	throwGrenade="CombatThrowGrenadeStart";
	walkF="CombatWalkF";
	walkLF="CombatWalkLF";
	walkRF="CombatWalkRF";
	walkL="CombatWalkL";
	walkR="CombatWalkR";
	walkLB="CombatWalkLB";
	walkRB="CombatWalkRB";
	walkB="CombatWalkB";
	slowF="CombatRunF";
	slowLF="CombatRunLF";
	slowRF="CombatRunRF";
	slowL="CombatRunL";
	slowR="CombatRunR";
	slowLB="CombatRunLB";
	slowRB="CombatRunRB";
	slowB="CombatRunB";
	fastF="CombatSprintF";
	fastLF="CombatSprintLF";
	fastRF="CombatSprintRF";
	fastL="SANCSTLeanLeft";
	fastR="SANCSTLeanRight";
	fastLB="CombatRunLB";
	fastRB="CombatRunRB";
	fastB="CombatRelaxedPlayer";
	down="Lying";
	up="Crouch";
	lying="Lying";
	combat="Combat";
	crouch="Crouch";
	stand="Stand";
	civil="Civil";
	civilLying="CivilLying";
	die="CombatDead";
	weaponOn="Weapon";
	binocOn="Binoc";
	binocOff="Combat";
	handGunOn="HandGunStand";
	takeFlag="CombatToTakeFlag";
	putDown="PutDown";
	medic="Medic";
	treated="Treated";
	strokeFist="";
	strokeGun="CombatStrokeGun";
	turnL="CombatTurnL";
	turnR="CombatTurnR";
	turnLRelaxed="CombatTurnLRelaxed";
	turnRRelaxed="CombatTurnRRelaxed";
	getInCar="CombatGetInCar";
	getOutCar="Combat";
	getInTank="CombatGetInTank";
	getOutTank="CombatGetOutTank";
	turnSpeed=8;
	limitFast=5.5;
	upDegree=MANPOS_COMBAT;
};

class CrouchActions : CombatActions
{
	stop="Crouch";
	default="Crouch";
	up="Combat";
	reloadMagazine="CrouchReloadMagazine";
	reloadMG="CrouchReloadMagazine";
	throwGrenade="CrouchThrowGrenadeStart";
	die="CrouchDead";
	weaponOn="Weapon";
	walkF="CrouchWalkF";
	walkLF="CrouchWalkLF";
	walkRF="CrouchWalkRF";
	walkL="CrouchWalkL";
	walkR="CrouchWalkR";
	walkLB="CrouchWalkLB";
	walkRB="CrouchWalkRB";
	walkB="CrouchWalkB";
	slowF="CrouchRunF";
	slowLF="CrouchRunLF";
	slowRF="CrouchRunRF";
	slowL="CrouchRunL";
	slowR="CrouchRunR";
	slowLB="CrouchRunLB";
	slowRB="CrouchRunRB";
	slowB="CrouchRunB";
	fastF="CrouchSprintF";
	fastLF="CrouchSprintLF";
	fastRF="CrouchSprintRF";
	fastL="SANCCRLeanLeft";
	fastR="SANCCRLeanRight";
	fastLB="CrouchRunLB";
	fastRB="CrouchRunRB";
	fastB="CrouchRelaxedPlayer";
	binocOn="BinocCrouch";
	binocOff="Crouch";
	handGunOn="HandGunCrouch";
	turnL="CrouchTurnL";
	turnR="CrouchTurnR";
	takeFlag="CrouchToTakeFlag";
	putDown="PutDownCrouch";
};

class CombatStandingUpActions : CombatActions
{
	die="LyingDead";
};

class CombatRunFActions : CombatActions
{
	throwGrenade="CombatRunThrowGrenadeStart";
	die="CombatRunDead";
};

class CombatRunBActions : CombatActions
{
	die="CombatRunBDead";
};

class CivilRunFActions : CivilActions
{
	throwGrenade="CivilRunThrowGrenadeStart";
};

class CrouchRunFActions : CrouchActions
{
	throwGrenade="CombatRunThrowGrenadeStart";
	die="CombatRunDead";
};

class CrouchRunBActions : CrouchActions
{
	die="CombatRunBDead";
};

class CombatRelaxedActions : CombatActions
{
	die="CombatRelaxedDead";
};

class LyingActions : NoActions
{
	stop="Lying";
	default="Lying";
	reloadMagazine="LyingReloadMagazine";
	reloadMGun="LyingReloadMagazine";
	throwGrenade="LyingThrowGrenadeStart";
	walkF="LyingCrawlF";
	walkLF="LyingCrawlLF";
	walkRF="LyingCrawlRF";
	walkL="LyingCrawlL";
	walkR="LyingCrawlR";
	walkLB="LyingCrawlLB";
	walkRB="LyingCrawlRB";
	walkB="LyingCrawlB";
	slowF="LyingCrawlF";
	slowLF="LyingCrawlLF";
	slowRF="LyingCrawlRF";
	slowL="LyingCrawlL";
	slowR="LyingCrawlR";
	slowLB="LyingCrawlLB";
	slowRB="LyingCrawlRB";
	slowB="LyingCrawlB";
	fastF="LyingFastCrawlF";
	fastLF="LyingCrawlLF";
	fastRF="LyingCrawlRF";
	fastL="SANCPRLeanLeft";
	fastR="SANCPRLeanRight";
	fastLB="LyingCrawlLB";
	fastRB="LyingCrawlRB";
	fastB="LyingRelaxedPlayer";
	down="Combat";
	up="Crouch";
	lying="Lying";
	combat="Combat";
	crouch="Crouch";
	stand="Stand";
	civil="Civil";
	civilLying="CivilLying";
	die="LyingDead";
	weaponOn="Weapon";
	weaponOff="Lying";
	binocOn="BinocLying";
	binocOff="Lying";
	handGunOn="HandGunLying";
	turnL="LyingTurnL";
	turnR="LyingTurnR";
	getInCar="CombatGetInCar";
	getOutCar="Combat";
	getInTank="CombatGetInTank";
	getOutTank="CombatGetOutTank";
	takeFlag="CombatToTakeFlag";
	putDown="PutDownLying";
	medic="Medic";
	treated="TreatedLying";
	turnSpeed=3;
	upDegree=MANPOS_LYING;
};

class CrawlingActions : LyingActions
{
	up="CombatRunF";
	combat="CombatRunF";
};

class CivilLyingActions : LyingActions
{
	stop="CivilLying";
	down="Civil";
	up="Civil";
	walkF="CivilLyingCrawlF";
	walkLF="CivilLyingCrawlLF";
	walkRF="CivilLyingCrawlRF";
	walkL="CivilLyingCrawlL";
	walkR="CivilLyingCrawlR";
	walkLB="CivilLyingCrawlLB";
	walkRB="CivilLyingCrawlRB";
	walkB="CivilLyingCrawlB";
	slowF="CivilLyingCrawlF";
	slowLF="CivilLyingCrawlLF";
	slowRF="CivilLyingCrawlRF";
	slowL="CivilLyingCrawlL";
	slowR="CivilLyingCrawlR";
	slowLB="CivilLyingCrawlLB";
	slowRB="CivilLyingCrawlRB";
	slowB="CivilLyingCrawlB";
	fastF="CivilLyingFastCrawlF";
	fastLF="CivilLyingCrawlLF";
	fastRF="CivilLyingCrawlRF";
	fastL="CivilLyingCrawlL";
	fastR="CivilLyingCrawlR";
	fastLB="CivilLyingCrawlLB";
	fastRB="CivilLyingCrawlRB";
	fastB="CivilLyingCrawlB";
	die="CivilLyingDead";
	takeFlag="CivilLyingToCivilLyingTakeFlag";
	putDown="CivilLyingPutDown";
	upDegree=MANPOS_LYINGNOWEAPON;
};

class CivilCrawlingActions : CivilLyingActions
{
};

class LadderActions : NoActions
{
	stop="LadderStatic";
	default="LadderStatic";
	upDegree=MANPOS_STAND;
	turnSpeed=0.1;
	ladderOff="LadderDownEnd";
	ladderOffTop="LadderUpEnd";
	ladderOffBottom="LadderDownEnd";
	down="LadderDownLoop";
	up="LadderUpLoop";
	die="StandDead";
};

class LadderUpActions : LadderActions
{
	ladderOff="LadderUpEnd";
};

class LadderDownActions : LadderActions
{
	ladderOff="LadderDownEnd";
};

class CombatNoMoveActions : CombatActions
{
	stopRelaxed="";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	turnSpeed=2;
};

class PutDownActions : CombatActions
{
	stop="PutDown";
	default="PutDown";
	down="Lying";
	up="Combat";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Combat";
	fireNotPossible="Combat";
};

class TakeFlagActions : CombatActions
{
	stop="Combat";
	default="Combat";
	down="Lying";
	up="Combat";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Combat";
	fireNotPossible="Combat";
};

class CrouchTakeFlagActions : CrouchActions
{
	stop="Crouch";
	default="Crouch";
	down="Lying";
	up="Combat";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Crouch";
	fireNotPossible="Crouch";
};

class MedicActions : CombatActions
{
	stop="Medic";
	default="Medic";
	down="Lying";
	up="Combat";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Combat";
	fireNotPossible="Combat";
};

class TreatedActions : CombatActions
{
	stop="Treated";
	default="Treated";
	down="Lying";
	up="Combat";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Combat";
	fireNotPossible="Combat";
};

class StandPutDownActions : StandActions
{
	stop="StandPutDown";
	default="StandPutDown";
	down="Stand";
	up="Stand";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Stand";
	fireNotPossible="Stand";
};

class StandTakeFlagActions : StandActions
{
	stop="Stand";
	default="Stand";
		down="Stand";
		up="Stand";
		turnL="";
		turnR="";
		turnLRelaxed="";
		turnRRelaxed="";
		putDownEnd="Stand";
		fireNotPossible="Stand";
};

class CivilPutDownActions : CivilActions
{
	stop="CivilPutDown";
	default="CivilPutDown";
	down="CivilLying";
	up="Civil";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Civil";
	fireNotPossible="Civil";
};

class CivilTakeFlagActions : CivilActions
{
	stop="Civil";
	default="Civil";
	down="CivilLying";
	up="Civil";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Civil";
	fireNotPossible="Civil";
};

class PutDownCrouchActions : CrouchActions
{
	stop="PutDownCrouch";
	default="PutDownCrouch";
	down="Crouch";
	up="Crouch";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Crouch";
	fireNotPossible="Crouch";
};

class PutDownLyingActions : LyingActions
{
	stop="PutDownLying";
	default="PutDownLying";
	down="Lying";
	up="Lying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Lying";
	fireNotPossible="Lying";
};

class TreatedLyingActions : LyingActions
{
	stop="TreatedLying";
	default="TreatedLying";
	down="Lying";
	up="Lying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="Lying";
	fireNotPossible="Lying";
};

class CivilLyingPutDownActions : CivilLyingActions
{
	stop="CivilLyingPutDown";
	default="CivilLyingPutDown";
	down="CivilLying";
	up="CivilLying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="CivilLying";
	fireNotPossible="CivilLying";
};

class CivilLyingTakeFlagActions : CivilLyingActions
{
	stop="CivilLying";
	default="CivilLying";
	down="CivilLying";
	up="CivilLying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="CivilLying";
	fireNotPossible="CivilLying";
};

class BinocActions : CombatNoMoveActions
{
	stop="Binoc";
	default="Binoc";
	binocOff="Combat";
	upDegree=MANPOS_BINOC;
};

class BinocLyingActions : LyingActions
{
	stop="BinocLying";
	default="BinocLying";
	binocOff="Lying";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOCLYING;
	turnSpeed=1;
};

class BinocStandActions : StandActions
{
	stop="BinocStand";
	default="BinocStand";
	binocOff="Stand";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOCSTAND;
	turnSpeed=2;
};

class BinocCrouchActions : CrouchActions
{
	stop="BinocCrouch";
	default="BinocCrouch";
	binocOff="Crouch";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOC;
	turnSpeed=2;
};

//Resistance
class HandGunCrouchActions : NoActions
{
	turnspeed=5;
	stop="HandGunCrouch";
	down="HandGunLying";
	up="HandGunStand";
	reloadMagazine="HandGunCrouchReloadMagazine";
	throwGrenade="HandGunStandThrowGrenade1";
	lying="Lying";
	civilLying="CivilLying";
	crouch="Crouch";
	combat="Combat";
	stand="Stand";
	civil="Civil";
	die="HandGunCrouchDead";
	handGunOn="HandGunCrouch";
	weaponOn="Weapon";
	binocOn="BinocHandGunCrouch";
	binocOff="HandGunCrouch";
	medic="HandGunMedic";
	putDown="HandGunPutDown";
	takeFlag="HandGunStandToHandGunTakeFlag";
	treated="HandGunTreated";
	walkF="HandGunCrouchWalkF";
	walkLF="HandGunCrouchWalkLF";
	walkRF="HandGunCrouchWalkRF";
	walkL="HandGunCrouchWalkL";
	walkR="HandGunCrouchWalkR";
	walkLB="HandGunCrouchWalkLB";
	walkRB="HandGunCrouchWalkRB";
	walkB="HandGunCrouchWalkB";
	slowF="HandGunCrouchWalkF";
	slowLF="HandGunCrouchWalkLF";
	slowRF="HandGunCrouchWalkRF";
	slowL="HandGunCrouchWalkL";
	slowR="HandGunCrouchWalkR";
	slowLB="HandGunCrouchWalkLB";
	slowRB="HandGunCrouchWalkRB";
	slowB="HandGunCrouchWalkB";
	fastF="HandGunCrouchRunF";
	fastLF="HandGunCrouchRunLF";
	fastRF="HandGunCrouchRunRF";
	fastL="HandGunCrouchRunL";
	fastR="HandGunCrouchRunR";
	fastLB="HandGunCrouchRunLB";
	fastRB="HandGunCrouchRunRB";
	fastB="HandGunCrouchRunB";
	turnL="HandGunCrouchTurnL";
	turnR="HandGunCrouchTurnR";
	getInCar="HandGunGetInCar";
	getOutCar="HandGunStand";
	getInTank="HandGunGetInTank";
	getOutTank="HandGunGetOutTank";
	default="HandGunCrouch";
	upDegree = MANPOS_HANDGUNCROUCH;
};

class HandGunLyingActions : NoActions
{
	turnspeed=3;
	stop="HandGunLying";
	down="HandGunStand";
	up="HandGunCrouch";
	reloadMagazine="HandGunLyingReloadMagazine";
	throwGrenade="HandGunLyingThrowGrenade1";
	lying="Lying";
	civilLying="CivilLying";
	crouch="Crouch";
	combat="Combat";
	stand="Stand";
	civil="Civil";
	die="HandGunLyingDead";
	handGunOn="HandGunLying";
	weaponOn="Weapon";
	binocOn="BinocHandGunLying";
	binocOff="HandGunLying";
	medic="HandGunMedic";
	putDown="HandGunLyingPutDown";
	takeFlag="HandGunStandToHandGunTakeFlag";
	treated="HandGunLyingTreated";
	walkF="HandGunLyingCrawlF";
	walkLF="HandGunLyingCrawlLF";
	walkRF="HandGunLyingCrawlRF";
	walkL="HandGunLyingCrawlL";
	walkR="HandGunLyingCrawlR";
	walkLB="HandGunLyingCrawlLB";
	walkRB="HandGunLyingCrawlRB";
	walkB="HandGunLyingCrawlB";
	slowF="HandGunLyingCrawlF";
	slowLF="HandGunLyingCrawlLF";
	slowRF="HandGunLyingCrawlRF";
	slowL="HandGunLyingCrawlL";
	slowR="HandGunLyingCrawlR";
	slowLB="HandGunLyingCrawlLB";
	slowRB="HandGunLyingCrawlRB";
	slowB="HandGunLyingCrawlB";
	fastF="HandGunLyingFastCrawlF";
	fastLF="HandGunLyingCrawlLF";
	fastRF="HandGunLyingCrawlRF";
	fastL="HandGunLyingCrawlL";
	fastR="HandGunLyingCrawlR";
	fastLB="HandGunLyingCrawlLB";
	fastRB="HandGunLyingCrawlRB";
	fastB="HandGunLyingCrawlB";
	turnL="HandGunLyingTurnL";
	turnR="HandGunLyingTurnR";
	getInCar="HandGunGetInCar";
	getOutCar="HandGunStand";
	getInTank="HandGunGetInTank";
	getOutTank="HandGunGetOutTank";
	default="HandGunLying";
	upDegree = MANPOS_HANDGUNLYING;
};

class HandGunStandActions : NoActions
{
	turnspeed=5;
	stop="HandGunStand";
	stopRelaxed="HandGunStandRelaxed";
	down="HandGunLying";
	up="HandGunCrouch";
	reloadMagazine="HandGunStandReloadMagazine";
	throwGrenade="HandGunStandThrowGrenade1";
	lying="Lying";
	civilLying="CivilLying";
	crouch="Crouch";
	combat="Combat";
	stand="Stand";
	civil="Civil";
	die="HandGunStandDead";
	handGunOn="HandGunStand";
	weaponOn="Weapon";
	binocOn="BinocHandGunStand";
	binocOff="HandGunStand";
	medic="HandGunMedic";
	putDown="HandGunPutDown";
	takeFlag="HandGunStandToHandGunTakeFlag";
	treated="HandGunTreated";
	walkF="HandGunStandWalkF";
	walkLF="HandGunStandWalkLF";
	walkRF="HandGunStandWalkRF";
	walkL="HandGunStandWalkL";
	walkR="HandGunStandWalkR";
	walkLB="HandGunStandWalkLB";
	walkRB="HandGunStandWalkRB";
	walkB="HandGunStandWalkB";
	slowF="HandGunStandWalkF";
	slowLF="HandGunStandWalkLF";
	slowRF="HandGunStandWalkRF";
	slowL="HandGunStandWalkL";
	slowR="HandGunStandWalkR";
	slowLB="HandGunStandWalkLB";
	slowRB="HandGunStandWalkRB";
	slowB="HandGunStandWalkB";
	fastF="HandGunStandRunF";
	fastLF="HandGunStandRunLF";
	fastRF="HandGunStandRunRF";
	fastL="HandGunStandRunL";
	fastR="HandGunStandRunR";
	fastLB="HandGunStandRunLB";
	fastRB="HandGunStandRunRB";
	fastB="HandGunStandRunB";
	turnL="HandGunStandTurnL";
	turnR="HandGunStandTurnR";
	turnLRelaxed="HandGunStandTurnLRelaxed";
	turnRRelaxed="HandGunStandTurnRRelaxed";
	getInCar="HandGunGetInCar";
	getOutCar="HandGunStand";
	getInTank="HandGunGetInTank";
	getOutTank="HandGunGetOutTank";
	default="HandGunStand";
	upDegree = MANPOS_HANDGUNSTAND;
};

class BinocHandGunLyingActions : HandGunLyingActions
{
	stop="BinocHandGunLying";
	default="BinocHandGunLying";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOCLYING;
	turnSpeed=1;
};

class BinocHandGunStandActions : HandGunStandActions
{
	stop="BinocHandGunStand";
	default="BinocHandGunStand";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOCSTAND;
	turnSpeed=2;
};

class BinocHandGunCrouchActions : HandGunCrouchActions
{
	stop="BinocHandGunCrouch";
	default="BinocHandGunCrouch";
	walkF="";
	walkLF="";
	walkRF="";
	walkL="";
	walkR="";
	walkLB="";
	walkRB="";
	walkB="";
	slowF="";
	slowLF="";
	slowRF="";
	slowL="";
	slowR="";
	slowLB="";
	slowRB="";
	slowB="";
	fastF="";
	fastLF="";
	fastRF="";
	fastL="";
	fastR="";
	fastLB="";
	fastRB="";
	fastB="";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	upDegree = MANPOS_BINOC;
	turnSpeed=2;
};

class HandGunMedicActions : HandGunStandActions
{
	stop="HandGunMedic";
	default="HandGunMedic";
	down="HandGunLying";
	up="HandGunStand";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunStand";
	fireNotPossible="HandGunStand";
};

class HandGunPutDownActions : HandGunStandActions
{
	stop="HandGunPutDown";
	default="HandGunPutDown";
	down="HandGunLying";
	up="HandGunStand";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunStand";
	fireNotPossible="HandGunStand";
};

class HandGunTakeFlagActions : HandGunStandActions
{
	stop="HandGunTakeFlag";
	default="HandGunTakeFlag";
	down="HandGunLying";
	up="HandGunStand";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunStand";
	fireNotPossible="HandGunStand";
};

class HandGunTreatedActions : HandGunStandActions
{
	stop="HandGunTreated";
	default="HandGunTreated";
	down="HandGunLying";
	up="HandGunStand";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunStand";
	fireNotPossible="HandGunStand";
};

class HandGunLyingPutDownActions : HandGunLyingActions
{
	stop="HandGunLyingPutDown";
	default="HandGunLyingPutDown";
	down="HandGunLying";
	up="HandGunLying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunLying";
	fireNotPossible="HandGunLying";
};

class HandGunLyingTreatedActions : HandGunLyingActions
{
	stop="HandGunLyingTreated";
	default="HandGunLyingTreated";
	down="HandGunLying";
	up="HandGunLying";
	turnL="";
	turnR="";
	turnLRelaxed="";
	turnRRelaxed="";
	putDownEnd="HandGunLying";
	fireNotPossible="HandGunLying";
};