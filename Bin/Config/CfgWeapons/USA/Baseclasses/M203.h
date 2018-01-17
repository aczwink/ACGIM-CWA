/*
	Sources:
	http://en.wikipedia.org/wiki/M203_grenade_launcher
*/
class M203 : GrenadeLauncher
{
	displayName="$STR_DN_M203";
	sound[]={"\sjc_sounds\weapons\handheld\m203.wss",0.000316,1};
	reloadSound[]={"Weapons\M16load",0.0003162,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\west_gvest_reload.wss",0.010316,1};
	initSpeed = 76;
	optics=1;
	modelOptics="\sjc_optics\USA\m203.p3d";
	opticsZoomMin=0.500000;
	opticsZoomMax=0.500000;
	recoil = "GrenadeLauncher";
	magazineType = WEAPON_ITEM;
	magazines[]={"M406HEFR", "Flare", "FlareGreen", "FlareRed", "FlareYellow"};
};