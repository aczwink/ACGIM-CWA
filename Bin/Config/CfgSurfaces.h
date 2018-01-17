class CfgSurfaces
{

	class Default
	{
		access=2;
		files="default";
		rough=0.075;
		dust=0.1;
		soundEnviron="normalExt";
	};

	class Roadway
	{
		access=2;
		files="silnice*";
		rough=0.005;
		dust=0.01;
		soundEnviron="road";
	};

	class Asfalt:Roadway
	{
		access=2;
		files="asfalt*";
		rough=0.01;
		dust=0.05;
		soundEnviron="road";
	};

	class Cesta:Roadway
	{
		access=2;
		files="cesta*";
		rough=0.08;
		dust=0.15;
		soundEnviron="gravel";
	};

	class Grass:Default
	{
		access=2;
		files="tn??????";
		rough=0.11;
		dust=0.1;
		soundEnviron="normalExt";
	};

	class GrassAbel:Default
	{
		access=2;
		files="tt??????";
		rough=0.11;
		dust=0.25;
		soundEnviron="grass";
	};

	class SandAbel:Default
	{
		access=2;
		files="pi??????";
		rough=0.15;
		dust=0.6;
		soundEnviron="sand";
	};

	class RockAbel:Default
	{
		access=2;
		files="sh??????";
		rough=0.2;
		dust=0.2;
		soundEnviron="rock";
	};

	class BetonAbel:Default
	{
		access=2;
		files="bt??????";
		rough=0.05;
		dust=0.03;
		soundEnviron="rock";
	};

	class GrassHigh:Default
	{
		access=2;
		files="tv??????";
		rough=0.12;
		dust=0.05;
		soundEnviron="grass";
	};

	class Forest
	{
		access=2;
		files="pl??????";
		rough=0.12;
		dust=0.05;
		soundEnviron="forest";
	};

	class Sand:Default
	{
		access=2;
		files="ps??????";
		rough=0.12;
		dust=0.5;
		soundEnviron="sand";
	};

	class Field:Default
	{
		access=2;
		files="pol";
		rough=0.15;
		dust=0.3;
		soundEnviron="dirt";
	};

	class Village:Default
	{
		access=2;
		files="bah";
		rough=0.08;
		dust=0.2;
		soundEnviron="normalExt";
	};

	class Runway:Roadway
	{
		access=2;
		files="rw*";
		rough=0.001;
		dust=0.006;
		soundEnviron="road";
	};

	class Rock
	{
		access=2;
		files="s???????";
		rough=0.15;
		dust=0.1;
		soundEnviron="rock";
	};

	class Water
	{
		access=2;
		files="more_anim*";
		rough=0.0;
		dust=0.0;
		soundEnviron="water";
	};

	class Wood
	{
		access=2;
		files="podlaha_prkna*";
		rough=0.15;
		dust=0.1;
		soundEnviron="wood";
	};

	class Metal
	{
		access=2;
		files="plechprolis*";
		rough=0.15;
		dust=0.1;
		soundEnviron="metal";
	};

	class Beton
	{
		access=2;
		files="kameny.pac";
		rough=0.15;
		dust=0.1;
		soundEnviron="rock";
	};

	class Carpet
	{
		access=2;
		files="dum_mesto_koberec*";
		rough=0.15;
		dust=0.1;
		soundEnviron="wood";
	};

	class SandBuilding:Default
	{
		access=2;
		files="pisek01*";
		rough=0.12;
		dust=0.5;
		soundEnviron="sand";
	};

	class MudBuilding:Default
	{
		access=2;
		files="hlinasterk*";
		rough=0.12;
		dust=0.5;
		soundEnviron="rock";
	};
	//d4t adding res addons surfaces
	class CubeRoad
	{
		access=2;
		files="sil_kos*";
		rough=0.04;
		dust=0.15;
		soundEnviron="road";
	};

	class Sil_new
	{
		access=2;
		files="sil_new*";
		rough=0.005;
		dust=0.01;
		soundEnviron="road";
	};

	class Asfalt_New
	{
		access=2;
		files="asf_new*";
		rough=0.008;
		dust=0.025;
		soundEnviron="road";
	};

	class Cesta_new
	{
		access=2;
		files="ces_hned*";
		rough=0.04;
		dust=0.14;
		soundEnviron="gravel";
	};

	class RunwayRes:default
	{
		access=2;
		files="run*";
		rough=0.001;
		dust=0.006;
		soundEnviron="gravel";
	};

	class RollwayRes:default
	{
		access=2;
		files="roll*";
		rough=0.005;
		dust=0.009;
		soundEnviron="gravel";
	};

	class GrassGreen:default
	{
		access=2;
		files="t1??????";
		rough=0.09;
		dust=0.2;
		soundEnviron="grass";
	};

	class GrassGre:default
	{
		access=2;
		files="trava2";
		rough=0.09;
		dust=0.19;
		soundEnviron="grass";
	};

	class GrassDry:default
	{
		access=2;
		files="trava3";
		rough=0.1;
		dust=0.18;
		soundEnviron="gravel";
	};

	class GrassGrey:default
	{
		access=2;
		files="b1??????";
		rough=0.11;
		dust=0.18;
		soundEnviron="grass";
	};

	class GrassGreyVar1:default
	{
		access=2;
		files="blita2";
		rough=0.12;
		dust=0.05;
		soundEnviron="grass";
	};

	class GrassGreyVar2:default
	{
		access=2;
		files="blita3";
		rough=0.12;
		dust=0.09;
		soundEnviron="grass";
	};

	class Forest_new
	{
		access=2;
		files="q1??????";
		rough=0.1;
		dust=0.06;
		soundEnviron="forest";
	};

	class SandDark:default
	{
		access=2;
		files="pt??????";
		rough=0.14;
		dust=0.62;
		soundEnviron="sand";
	};

	class Lom
	{
		access=2;
		files="l1??????";
		rough=0.19;
		dust=0.25;
		soundEnviron="rock";
	};

	class LomVariant
	{
		access=2;
		files="lom2";
		rough=0.19;
		dust=0.25;
		soundEnviron="rock";
	};

	class Snih:default
	{
		access=2;
		files="n1*";
		rough=0.16;
		dust=0.001;
		soundEnviron="snow";
	};

	class SnihVar:default
	{
		access=2;
		files="snih*";
		rough=0.16;
		dust=0.001;
		soundEnviron="snow";
	};

	class Hallway:default
	{
		access=2;
		files="podldlzin02*";
		rough=0.12;
		dust=0.1;
		soundEnviron="hallway";
	};
};