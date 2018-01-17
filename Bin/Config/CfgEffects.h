class CfgEffects
{
	access=1;

	class ThunderboltNorm
	{
		model="blesk1.p3d";
		soundNear[]={"Environmental\thundershort",316.2277832,1};
		soundFar[]={"Environmental\thunderlong",316.2277832,1};
	};

	class ThunderboltHeavy
	{
		model="blesk2.p3d";
		soundNear[]={"Environmental\thunderhard",316.2277832,1};
		soundFar[]={"Environmental\thunder",316.2277832,1};
	};

	class Rain
	{
		texture="desta.01.paa";
	};
};