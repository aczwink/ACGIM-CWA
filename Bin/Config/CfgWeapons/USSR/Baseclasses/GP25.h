/*
Sources:
	http://en.wikipedia.org/wiki/GP-25
*/
class GP25 : M203
{
	displayName="GP-25 Grenade Launcher";
	modelOptics="\d4t_files\optics\optic_gp25.p3d";
	magazines[]={"VOG25", "Flare"};
	sound[]={"\d4t_files\sounds\weapons\handheld\RHS_GP25_grenadeLaunch.wss",0.0316,1};
	reloadSound[]={"\d4t_files\sounds\weapons\handheld\RHS_GP25_grenadeReload.wss",0.0316,1};
	reloadMagazineSound[]={"\d4t_files\sounds\weapons\handheld\RHS_GP25_grenadeReload.wss",0.0316,1};
	initSpeed = 76;
};