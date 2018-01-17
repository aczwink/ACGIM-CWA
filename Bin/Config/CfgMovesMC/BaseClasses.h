class Default
{
	access=3;
	actions="StandActions";
	file="";
	looped=1;
	speed=0.5;
	disableWeapons=0;
	enableOptics=1;
	disableWeaponsLong=0;
	showWeaponAim=1;
	enableMissile=0;
	enableBinocular=0;
	showItemInHand=0;
	showItemInRightHand=0;
	showHandGun=0;
	onLandBeg=0;
	onLandEnd=0;
	onLadder=0;
	duty=-0.5;
	visibleSize=1;
	aimPrecision=1;
	recoilSuffix="";
	relSpeedMin=1.0;
	relSpeedMax=1.0;
	soundEnabled=1;
	soundOverride="";
	soundEdge1=0.5;
	soundEdge2=1;
	terminal=0;
	limitGunMovement=1;
	variantsPlayer[]={};
	variantsAI[]={""};
	equivalentTo="";
	connectAs="";
	variantAfter[]={5,10,20};
	connectFrom[]={};
	connectTo[]={};
	interpolateWith[]={};
	interpolateTo[]={};
	interpolateFrom[]={};
	aiming="aimingDefault";
	legs="legsDefault";
	head="headDefault";
	interpolationSpeed=6;
	interpolationRestart=0;
	preload=0;
};

class StandBase : Default
{
	limitGunMovement=0;
	aiming="aimingNo";
	disableWeapons=1;
	disableWeaponsLong=1;
};

class LadderBase : StandBase
{
	actions="LadderActions";
	aiming="aimingNo";
	legs="legsNo";
	onLadder=1;
	disableWeapons=1;
};

class LadderUpBase : LadderBase
{
	actions="LadderUpActions";
};

class LadderDownBase : LadderBase
{
	actions="LadderDownActions";
};

class DefaultDie : Default
{
	limitGunMovement=0;
	aiming="aimingNo";
	legs="legsNo";
	head="headNo";
	disableWeapons=1;
	interpolationRestart=1;
	soundOverride="fallbody";
	soundEdge1=0.45;
	soundEdge2=0.45;
};

//Resistance
class HandGunDefault : Default
{
	showHandGun=1;
};

class HandGunDie : DefaultDie
{
	onLandEnd=1;
	soundEnabled=0;
	disableWeapons=1;
	showHandGun=1;
};