class CfgMovesMCWoman : CfgMovesMC
{
	class StatesExt
	{
		class CivilBase : Default
		{
			aiming="aimingNo";
			actions="CivilActions";
			duty=-1;
			disableWeapons=1;
			interpolateTo[]={"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolationSpeed=3;
		};

		class Civil : CivilBase
		{
			file="\o\anim\zenskastojistat.rtm";
			speed=10000000000.0;
			looped=1;
			soundEnabled=0;
			variantAfter[]={1,3,6};
			variantsAI[]={"Civil",0.2,"CivilStillV1",0.8};
			equivalentTo="Civil";
			interpolateTo[]={"CombatThrowGrenadeStart",1,"CombatRunThrowGrenadeStart",1,"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolateFrom[]={"CombatThrowGrenadeEnd",1};
		};

		class CivilStillV1 : Civil
		{
			actions="CivilActions";
			file="\o\anim\zenskastoji.rtm";
			speed=-10;
			looped=1;
			soundEnabled=0;
			duty=-1;
		};

		class CivilWalkF : CivilBase
		{
			file="\o\anim\zenskachuze0.rtm";
			speed=-1.0;
			looped=1;
			duty=-0.7;
			relSpeedMin=0.7;
			relSpeedMax=1.0;
		};

		class CivilWalkLF : CivilWalkF
		{
			file="\o\anim\zenskachuze-45.rtm";
		};

		class CivilWalkRF : CivilWalkF
		{
			file="\o\anim\zenskachuze45.rtm";
		};

		class CivilWalkL : CivilWalkF
		{
			file="\o\anim\zenskachuze-90.rtm";
		};

		class CivilWalkR : CivilWalkF
		{
			file="\o\anim\zenskachuze90.rtm";
		};

		class CivilWalkLB : CivilWalkF
		{
			file="\o\anim\zenskachuze-135.rtm";
		};

		class CivilWalkRB : CivilWalkF
		{
			file="\o\anim\zenskachuze135.rtm";
		};

		class CivilWalkB : CivilWalkF
		{
			file="\o\anim\zenskachuze180.rtm";
		};

		class CivilRunF : CivilWalkF
		{
			file="\o\anim\zenskabeh0.rtm";
			speed=-0.55;
			looped=1;
			duty=-0.5;
		};

		class CivilRunLF : CivilRunF
		{
			file="\o\anim\zenskabeh-45.rtm";
		};

		class CivilRunRF : CivilRunF
		{
			file="\o\anim\zenskabeh45.rtm";
		};

		class CivilRunL : CivilRunF
		{
			file="\o\anim\zenskabeh-90.rtm";
		};

		class CivilRunR : CivilRunF
		{
			file="\o\anim\zenskabeh90.rtm";
		};

		class CivilRunLB : CivilRunF
		{
			file="\o\anim\zenskabeh-135.rtm";
		};

		class CivilRunRB : CivilRunF
		{
			file="\o\anim\zenskabeh135.rtm";
		};

		class CivilRunB : CivilRunF
		{
			file="\o\anim\zenskabeh180.rtm";
		};
	};
};