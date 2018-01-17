class CfgMimics
{
	access=1;
	combat[]={"Sad",0.1,"Surprised",0.1,"Cynic",0.3,"Angry",0.1,"Normal"};
	aware[]={"Angry",0.2,"Normal"};
	safe[]={"Smile",0.1,"Surprised",0.1,"Normal"};
	neutral[]={"Surprised",0.1,"Sad",0.1,"Normal"};
	danger[]={"Surprised",0.4,"Sad"};
	dead[]={"Hurt"};
	hurt[]={"Hurt"};

	class HeadPreview
	{
		microMimics="Micro";
	};

	class Micro
	{
		lBrow[]={0.002,0.002,0.001,0.6,3.0};
		mBrow[]={0.002,0.002,0.001,0.6,2.5};
		rBrow[]={0.002,0.002,0.001,0.6,3.0};
		lMouth[]={0.001,0.002,0.001,0.6,2.0};
		mMouth[]={0.0,0.0,0.0,0.6,3.0};
		rMouth[]={0.001,0.002,0.001,0.6,2.0};
	};

	class NoMicro
	{
		lBrow[]={0.0,0.0,0.0,0.6,3.0};
		mBrow[]={0.0,0.0,0.0,0.6,2.5};
		rBrow[]={0.0,0.0,0.0,0.6,3.0};
		lMouth[]={0.0,0.0,0.0,0.6,2.0};
		mMouth[]={0.0,0.0,0.0,0.6,3.0};
		rMouth[]={0.0,0.0,0.0,0.6,2.0};
	};

	class States
	{

		class Default
		{
			lBrow[]={0,0};
			mBrow[]={0,0};
			rBrow[]={0,0};
			lMouth[]={0,0};
			mMouth[]={0,0};
			rMouth[]={0,0};
		};

		class Normal
		{
			lBrow[]={0,0};
			mBrow[]={0,0};
			rBrow[]={0,0};
			lMouth[]={0,0};
			mMouth[]={0,0};
			rMouth[]={0,0};
		};

		class Smile
		{
			lBrow[]={0,0.25};
			mBrow[]={0,0.25};
			rBrow[]={0,0.25};
			lMouth[]={-0.5,0.6};
			mMouth[]={0,0.0};
			rMouth[]={0.5,0.6};
		};

		class Hurt
		{
			lBrow[]={0,-0.35};
			mBrow[]={0,-0.5};
			rBrow[]={0,-0.6};
			lMouth[]={0.5,-0.3};
			mMouth[]={0,0.3};
			rMouth[]={-0.5,-0.6};
		};

		class Ironic
		{
			lBrow[]={0,-0.35};
			mBrow[]={0,-0.35};
			rBrow[]={0,-0.35};
			lMouth[]={0.1,0.3};
			mMouth[]={0,0.9};
			rMouth[]={-0.1,0.3};
		};

		class Sad
		{
			lBrow[]={0,0.2};
			mBrow[]={0,0.2};
			rBrow[]={0,0.2};
			lMouth[]={0.1,-0.5};
			mMouth[]={0,-0.5};
			rMouth[]={-0.1,-0.5};
		};

		class Cynic
		{
			lBrow[]={0,-0.35};
			mBrow[]={0,0.0};
			rBrow[]={0,0.05};
			lMouth[]={0.2,-0.9};
			mMouth[]={0,-0.2};
			rMouth[]={0.0,0};
		};

		class Surprised
		{
			lBrow[]={0,0.5};
			mBrow[]={0,0.5};
			rBrow[]={0,0.5};
			lMouth[]={0.0,-0.3};
			mMouth[]={0,0.3};
			rMouth[]={0.0,-0.2};
		};

		class Agresive
		{
			lBrow[]={0,-0.25};
			mBrow[]={0,-0.4};
			rBrow[]={0,-0.3};
			lMouth[]={0.4,0.5};
			mMouth[]={0,0.5};
			rMouth[]={-0.4,-0.5};
		};

		class Angry
		{
			lBrow[]={0.4,-0.5};
			mBrow[]={0.1,-0.4};
			rBrow[]={-0.4,-0.5};
			lMouth[]={0.4,-0.9};
			mMouth[]={0,-0.2};
			rMouth[]={-0.4,-0.8};
		};
	};
};