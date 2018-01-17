/*
Sources:
	http://en.wikipedia.org/wiki/M61_Vulcan
*/
class M61Vulcan : MachineGun30W
{
	ammo = "Bullet20x102";
	displayName="M61 Vulcan";
	tracerColor[] = {1,0,0,1};
	tracerColorR[] = {1,0,0,1};
	sound[]={"\sjc_sounds\weapons\hardmounted\gun.ogg",db10,1};
	reloadTime = 0.01;
	count = 675;
	initSpeed = 1050;
	dispersion=0.025;
};

class M61Vulcan_511 : M61Vulcan
{
	count = 511;
};

class M61Vulcan_578 : M61Vulcan
{
	count = 578;
};

class M61Vulcan_640 : M61Vulcan
{
	count = 640;
};

class M61Vulcan_940 : M61Vulcan
{
	count = 940;
};