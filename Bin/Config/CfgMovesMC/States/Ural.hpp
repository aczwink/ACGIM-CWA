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

class DLEMuralDEADCARGO1: DLEMural375Driver
{
	file = "\animations\DLEMuralDEADCARGO1.rtm";
};