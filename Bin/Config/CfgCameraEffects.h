class CfgCameraEffects
{
	access=1;

	class Interpolated
	{
		type=0;
		scale=0.1;
		duration=5;
		spline=1;
		show=2;
	};

	class Exact:Interpolated
	{
		scale=-1;
	};

	class Chain
	{
		type=3;
		show=2;
	};

	class Array
	{

		class Terminate
		{
			name="$STR_CFG_CAMEFFECTS_TERMINATE";
			type=4;
			show=0;
		};

		class Internal
		{
			name="$STR_CFG_CAMEFFECTS_INTERNAL";
			type=5;
			show=2;
		};

		class ZoomIn:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_ZOOMIN";
			file="\anim\cam_zoom_in_front";
			scale=0.1;
			duration=5;
		};

		class ZoomInSlow:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_ZOOMINSLOW";
			file="\anim\cam_zoom_in_front";
			scale=0.1;
			duration=15;
		};

		class Around:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_AROUND";
			file="\anim\cam_360";
			duration=10;
			scale=0.3;
		};

		class AroundSlow:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_AROUNDSLOW";
			file="\anim\cam_360";
			duration=20;
			scale=0.3;
		};

		class ZoomAndAround:Chain
		{
			name="$STR_CFG_CAMEFFECTS_ZOOMAROUND";
			chain[]={"ZoomIn","Around"};
		};

		class AroundAndZoomINSlow:Chain
		{
			name="$STR_CFG_CAMEFFECTS_AROUNDZOOMSLOW";
			chain[]={"AroundSlow","ZoomInSlow"};
		};

		class ZoomInS:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_ZOOMINS";
			file="cam_s_zoom_in";
			duration=5;
			scale=1;
			show=0;
		};

		class Fixed:Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_FIXED";
			type=1;
			duration=10;
		};

		class FixedWithZoom:Fixed
		{
			name="$STR_CFG_CAMEFFECTS_FIXEDZOOM";
			type=2;
			duration=10;
		};

		class External:Fixed
		{
			name="$STR_CFG_CAMEFFECTS_EXTERNAL";
			type=0;
			duration=5;
			file="";
		};
	};
};