/*
Sources:
	http://en.wikipedia.org/wiki/SVD_Dragunov
*/
class SVDDragunov : SniperRiffle //Also the BIS Class
{
	scopeWeapon=2;
	scopeMagazine=2;
	count=10;
	initSpeed = 830;
	ammo = "SVDDragunov";
	recoil = "SVDDragunov";
	sound[]={"\d4t_files\sounds\weapons\handheld\rhs_dragunov.wss",1.0,1.00};
	model="\d4t_files\models\russia\weapons\svd.p3d";
	modelOptics="\d4t_files\optics\optic_svd.p3d";
	opticsZoomMin=0.04;
	opticsZoomMax=0.04;
	distanceZoomMin=300;
	distanceZoomMax=300;
	displayName="SVD Dragunov";
	displayNameMagazine="10 round 7.62x54Rmm Magazine";
	shortNameMagazine="SVD Mag";
	aiRateOfFireDistance=900;
};