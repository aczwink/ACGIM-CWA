class USSR_ScudLauncher : USSR_Ural4320
{
	picture="iscud";
	nameSound="scudLauncher";
	displayName="$STR_DN_SCUD";
	accuracy = ACCURACY_SCUDLAUNCHER;
	armor = ARMOR_SCUDLAUNCHER;
	maxSpeed=55;
	driverAction="ManActSCUDDriver";
	cargoAction[]={"ManActSCUDCoDriver"};
	cargoIsCoDriver[]={1};
	transportSoldier=3;
	transportAmmo=0;
	turnCoef=8.0;
	model="scud";
	hiddenSelections[]={};
	weapons[]={};
	magazines[]={};
	type=0;
	threat[]={0.0,0.0,0.0};
	scudLaunch="scudlunch.rtm";
	scudStart="scudstart.rtm";
	scudSoundElevate[]={"vehicles\gun_elevate",0.01,1};
	scudSound[]={"weapons\rocketflying",316.2277832,0.2};
	scudModel="scud_strela_proxy";
	scudModelFire="scud_strela_ohen";
};