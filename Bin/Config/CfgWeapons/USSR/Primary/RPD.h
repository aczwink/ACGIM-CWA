/*
Sources:
	http://en.wikipedia.org/wiki/RPD
Rate of fire: 650-750 rpm -> 700 rpm
*/
class RPD : AK47
{
	displayName = "RPD";
	displayNameMagazine = "100rd 7.62x39mm Drum";
	shortNameMagazine = "7.62x39mm Drum";
	scopeWeapon= 2;
	scopeMagazine = SCOPE_PUBLIC;
	model = "\sjc_models\USSR\Weapons\RPD.p3d";
	modelOptics="\Bizon\optika_Bizon";//lame
	optics=true;
	opticsZoomMin=0.35;
	opticsZoomMax=0.35;
	reloadMagazineSound[]={"\sjc_sounds\weapons\handheld\RPDReload.wss",0.05,1};
	drySound[]={"\sjc_sounds\weapons\handheld\Dry.wav",0.010000,1};
	initSpeed = 735;
	dexterity=0.945;
	magazineReloadTime=5.0;
	magazineType = 2 * 256;
	count = 100;
	modes[] = {"FullAuto"};

	class FullAuto
	{
		displayName = "RPD";
		ammo = "RPD";
		multiplier=1;
		burst=1;
		dispersion=0.022;
		maxLeadSpeed=300;
		sound[]={"\sjc_sounds\weapons\handheld\RPDFire.wss",1.000000,1};
		soundContinuous=0;
		reloadTime = 0.085714;
		ffCount=6;
		aiDispersionCoefX=5;
		ffMagnitude=0.500000;
		ffFrequency=11;
		recoil = "RPD";
		autoFire=1;
		aiRateOfFire=0.300000;
		aiRateOfFireDistance=300;
		useAction=0;
		useActionTitle="";
	};
};