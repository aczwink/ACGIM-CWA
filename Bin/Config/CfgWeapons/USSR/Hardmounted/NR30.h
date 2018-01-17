/*
Sources:
	http://en.wikipedia.org/wiki/Nudelman-Rikhter_NR-30
	http://en.wikipedia.org/wiki/Su-17
Rate of fire: 850–1,000 rpm -> 925 rpm -> 0.064864
*/
class NR30 : MachineGun30
{
	displayName="NR-30";
	displayNameMagazine="NR-30";
	shortNameMagazine="NR-30";
	dispersion=0.025;
	ammo = "BulletUSSR30x155";
	count=160;
	reloadTime = 0.064864;
	initSpeed = 780;
	sound[]={"\sjc_sounds\weapons\hardmounted\30mm.wav",db+1,1};
	soundContinuous=1;
	flashSize=0.004;
	maxLeadSpeed=600;
	optics=1;
};