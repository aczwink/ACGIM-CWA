//d4t note: all the classes which aren't used in the game
class AmmoBoxOUTW : HeavyReammoBox
{
	scope=1;
};

class Jeep : HMMWV	//scoped out, links to humvee
{
	scope=1;
};

class JeepMG : HMMWV_M2
{
	scope=1;
};

class SoldierWNOG : SoldierWB //dunno what this is.. but scoped out
{
	scope=1;
};

class SoldierW : SoldierWG //kinda base class for soldiers...
{
	scope=1;
};

class SoldierWLAWSniper : SoldierWSniper //doesn't appear in game -> scoped out
{
	scope=1;
};

class SoldierWSaboteur : SoldierWB //kinda base class for the black ops
{
	scope=1;
};

class SoldierWMortar : d4t_USA_Grenadier //no need of this, it links to grenadier... becomes protected
{
	scope=1;
};

class AmmoBoxAddW : ReammoBox //scoped out 'cause useless
{
	scope=1;
};

class M1AbramsAuto : M1Abrams //shit -.- links to m1a2 sep abrams
{
	scope=1;
};

class T80Auto:T80 //shit, scoped out
{
	scope=1;
};

class SoldierESaboteur:SoldierEB //dunno what this is but scoped out
{
	scope=1;
};

class SoldierEFakeW:SoldierWB //shit -.- -> scoped out, links to rifleman
{
	scope=1;
};
	
class SoldierWFakeE:SoldierEB //shit -.- -> scoped out, links to rifleman
{
	scope=1;
};

class OfficerENight:OfficerE //useless, so scoped out
{
	scope=1;
};

class AmmoBoxAddE:ReammoBoxEast //scoped out 'cause useless
{
	scope=1;
};

class HeavyGrenadier:SoldierEG //useless, scoped out, links to grenadier
{
	scope=1;
};

class OfficerEHG:OfficerE //not needed, scoped out
{
	scope=1;
};

class OfficerWHG:OfficerW //useless, links to officer
{
	scope=1;
};

class SoldierWCaptive:SoldierWB // useless, links to rifleman
{
	scope=1;
};

class SoldierWG36a:SoldierWB //useless, so it links to rifleman
{
	scope=1;
};

class SoldierWSteyr:SoldierWB //useless, so it links to rifleman
{
	scope=1;
};

class SoldierWXMS:SoldierWB //useless, links to rifleman
{
	scope=1;
};

class AmmoBoxOUTE:ReammoBoxEast //useless, links to reammobox
{
	scope=1;
};

class SoldierGNOG:SoldierGB
{
	scope=1;
};

class SoldierG:SoldierGG
{
	scope=1;
};

class OfficerGNight:SoldierGB
{
	scope=1;
};

class SoldierGFakeE:SoldierEB
{
	scope=1;
};

class SoldierGFakeC:SoldierGFakeE
{
	scope=1;
};

class SoldierGFakeC2:SoldierGFakeE
{
	scope=1;
};

class OfficerGHG:OfficerG
{
	scope=1;
};

class Civilian8:Civilian
{
	scope=1;
	//policeman 1
};

class GJeep:Car
{
	scope=1;
};

class HeavyReammoBoxRes:HeavyReammoBox
{
	scope=1;
};

class ReammoBoxOUTGuer:ReammoBox
{
	scope=1;
};

class HeavyGW:SoldierWG //useless, so it links to grenadier
{
	scope=1;
};

class A10LGB:A10 //isn't needed anymore so links to a10
{
	scope=1;
};

class Ch47D: UH60MG //useless, so it links to blackhawk
{
	scope=1;
};

class BoatWAuto:BoatW //shit -.- links to pbr
{
	scope=1;
};

class HeavyReammoBoxWest : ReammoBoxWest //useless
{
	scope=protected;
};