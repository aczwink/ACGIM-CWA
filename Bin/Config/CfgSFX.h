class CfgSFX
{
	access=1;
	seagull[]={"animals\gulls1",0.0316228,1,1,0.2,1,5};

	class Preview
	{
		effect[]={"sound\weapons\m16burst.wss",1.0,1.0};
		speech[]={"voice\adam\isayagain.wss",1.0,1.0};
		music[]={"music\13.ogg",1.0,1.0};
	};

	class Church
	{
		smallBell[]={"Objects\bell1",0.1,1};
		largeBell[]={"Objects\bell2",0.3162278,1};
	};

	class CA_AK
	{
		sounds[]={"sound1","sound2"};
		name="$STR_CFG_SFX_CA_AK";
		sound1[]={"weapons\AK74single",0.1,1,0.5,0,2,5};
		sound2[]={"weapons\AK74burst",0.1,1,0.4,0,1,10};
		empty[]={"","","","",1,5,20};
	};

	class CA_M16
	{
		sounds[]={"sound1","sound2"};
		name="$STR_CFG_SFX_CA_M16";
		sound1[]={"weapons\M16single",0.1,1,0.5,0,2,5};
		sound2[]={"weapons\M16burst",0.1,1,0.4,0,1,10};
		empty[]={"","","","",1,5,20};
	};

	class CA_Expl1
	{
		sounds[]={"sound1"};
		name="$STR_CFG_SFX_CA_EXPL1";
		sound1[]={"weapons\explosion_large1",0.1,1,0.5,0,2,5};
		empty[]={"","","","",1,5,30};
	};

	class hedgesparrow
	{
		sounds[]={"sing1","sing2","sing3","sing4","sing5"};
		name="$STR_CFG_SFX_HEDGESPARROW";
		sing1[]={"animals\hedspar1",0.0031623,1,0.1,0,0,0};
		sing2[]={"animals\hedspar2",0.0031623,1,0.2,0,0,0};
		sing3[]={"animals\hedspar3",0.0031623,1,0.1,0,0,0};
		sing4[]={"animals\hedspar4",0.0031623,1,0.2,0,0,0};
		sing5[]={"animals\hedspar5",0.0031623,1,0.3,0,0,0};
		empty[]={"","","","",1,5,80};
	};

	class skylark
	{
		sounds[]={"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name="$STR_CFG_SFX_SKYLARK";
		sing1[]={"animals\skylark7",0.01,1,0.1,0.2,0.4,1};
		sing2[]={"animals\skylark6",0.01,1,0.2,0.2,0.3,1};
		sing3[]={"animals\skylark5",0.01,1,0.1,0.1,0.2,1.2};
		sing4[]={"animals\skylark4",0.01,1,0.2,0.1,0.2,1.2};
		sing5[]={"animals\skylark3",0.01,1,0.1,0.3,0.4,0.75};
		sing6[]={"animals\skylark2",0.01,1,0.1,0.2,0.4,0.8};
		sing7[]={"animals\skylark1",0.01,1,0.1,0.1,0.5,0.8};
		empty[]={"","","","",1,5,40};
	};

	class forestlark
	{
		sounds[]={"sing1","sing2","sing3","sing4","sing5","sing6"};
		name="$STR_CFG_SFX_FORESTLARK";
		sing1[]={"animals\f_lark1",0.0031623,1,0.1,0.0,0.1,0.2};
		sing2[]={"animals\f_lark2",0.0031623,1,0.1,0.0,0.1,0.2};
		sing3[]={"animals\f_lark3",0.0031623,1,0.1,0.0,0.1,0.2};
		sing4[]={"animals\f_lark4",0.0031623,1,0.1,0.0,0.1,0.2};
		sing5[]={"animals\f_lark5",0.0031623,1,0.2,0.0,0.1,0.2};
		sing6[]={"animals\f_lark6",0.0031623,1,0.2,0.0,0.1,0.2};
		sing7[]={"animals\f_lark7",0.0031623,1,0.2,0.0,0.1,0.2};
		empty[]={"","","","",1,5,40};
	};

	class nightingale
	{
		sounds[]={"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name="$STR_CFG_SFX_NIGHTINGALE";
		sing1[]={"animals\n_gale1",0.0031623,1,0.2,0.1,0.2,0.3};
		sing2[]={"animals\n_gale2",0.0031623,1,0.1,0.1,0.2,0.3};
		sing3[]={"animals\n_gale3",0.0031623,1,0.2,0.1,0.2,0.3};
		sing4[]={"animals\n_gale4",0.0031623,1,0.1,0.1,0.2,0.3};
		sing5[]={"animals\n_gale5",0.0031623,1,0.1,0.1,0.2,0.3};
		sing6[]={"animals\n_gale6",0.0031623,1,0.2,0.1,0.2,0.3};
		sing7[]={"animals\n_gale7",0.0031623,1,0.1,0.1,0.2,0.3};
		empty[]={"","","","",1,5,40};
	};

	class jay
	{
		sounds[]={"sing1","sing2","sing3","sing4"};
		name="$STR_CFG_SFX_JAY";
		sing1[]={"animals\jay1",0.01,1,0.2,0.2,0.4,1};
		sing2[]={"animals\jay2",0.01,1,0.2,0.2,0.3,1};
		sing3[]={"animals\jay3",0.01,1,0.2,0.1,0.2,1.2};
		sing4[]={"animals\jay4",0.01,1,0.2,0.1,0.2,1.2};
		empty[]={"","","","",8,20,40};
	};

	class owl
	{
		sounds[]={"sing1","sing2"};
		name="$STR_CFG_SFX_OWL";
		sing1[]={"animals\owl2_1",0.0031623,1,0.2,0.0,0.5,1};
		sing2[]={"animals\owl2_2",0.0031623,1,0.2,0.0,0.5,1};
		empty[]={"","","","",1,5,40};
	};

	class crow2
	{
		sounds[]={"sing1","sing2","sing3","sing4","sing5","sing6"};
		name="$STR_CFG_SFX_CROW2";
		sing1[]={"animals\crow2_1",0.01,1,0.1,0.2,0.4,1};
		sing2[]={"animals\crow2_2",0.01,1,0.1,0.2,0.3,1};
		sing3[]={"animals\crow2_3",0.01,1,0.1,0.1,0.2,1.2};
		sing4[]={"animals\crow2_4",0.01,1,0.1,0.1,0.2,1.2};
		sing5[]={"animals\crow2_5",0.01,1,0.1,0.1,0.2,1.2};
		sing6[]={"animals\crow2_6",0.01,1,0.1,0.1,0.2,1.2};
		empty[]={"","","","",1,5,50};
	};

	class frog2
	{
		sounds[]={"sing1","sing2","sing3"};
		name="$STR_CFG_SFX_FROG2";
		sing1[]={"animals\frog2_1",0.01,1,0.3,0.0,0.1,0.2};
		sing2[]={"animals\frog2_2",0.01,1,0.3,0.0,0.1,0.2};
		sing3[]={"animals\frog2_3",0.01,1,0.3,0.0,0.1,0.2};
		empty[]={"","","","",1,5,40};
	};

	class SeagullSfx
	{
		sounds[]={"seagull1","Seagull2","Seagull3","Seagull4","Seagull5"};
		name="$STR_CFG_SFX_SEAGULL";
		seagull1[]={"animals\gulls1",0.0316228,1,0.15,0.1,0.5,5};
		seagull2[]={"animals\gulls2",0.0316228,1,0.2,0.1,0.5,5};
		seagull3[]={"animals\gulls3",0.0316228,1,0.15,0.1,0.5,5};
		seagull4[]={"animals\gulls4",0.0316228,1,0.24,0.1,0.5,5};
		seagull5[]={"animals\gulls5",0.0316228,1,0.2,0.1,0.5,5};
		empty[]={"","","","",0.2,2,20};
	};

	class StreamSfx
	{
		sounds[]={"Stream01"};
		name="$STR_DN_STREAM";
		Stream01[]={"objects\stream",0.00001,1,1,1,1,1};
		empty[]={"","","","",0.0,0.0,0.0};
	};

	class AlarmSfx
	{
		sounds[]={"Alarm"};
		name="$STR_DN_ALARM";
		Alarm[]={"objects\sirena",1.0,1,1,0.0,0.0,0.0};
		empty[]={"","","","",0.0,0.0,0.0};
	};

	class Cricket1Sfx
	{
		sounds[]={"Cricket01"};
		name="$STR_DN_CRICKET1";
		Cricket01[]={"animals\cricket01",0.001,1,0.96,0.0,0.0,0.0};
		empty[]={"","","","",0.0,2,60};
	};

	class Cricket2Sfx
	{
		sounds[]={"Cricket01"};
		name="$STR_DN_CRICKET2";
		Cricket01[]={"animals\cricket02",0.0031623,1,0.97,0.0,0.0,0.0};
		empty[]={"","","","",0.0,3,60};
	};

	class Cricket3Sfx
	{
		sounds[]={"Cricket01"};
		name="$STR_DN_CRICKET3";
		Cricket01[]={"animals\crickets06",0.001,1,0.98,0.0,0.0,0.0};
		empty[]={"","","","",0.0,6,60};
	};

	class CricketSfx
	{
		sounds[]={"Cricket04"};
		name="$STR_DN_CRICKET4";
		Cricket04[]={"animals\crickets04",0.001,1,1,0.0,0.0,0.0};
		empty[]={"","","","",0.0,2,8};
	};

	class FrogSfx
	{
		sounds[]={"Frog01","Frog02"};
		name="$STR_DN_FROG";
		Frog01[]={"animals\frog1_1",0.0009772,1,0.8,0.0,0.0,0.0};
		Frog02[]={"animals\frog1_2",0.001,1,0.1,0.0,0.0,0.0};
		empty[]={"","","","",0.1,0.5,12};
	};

	class FrogsSfx
	{
		sounds[]={"Frog01"};
		name="$STR_DN_FROGS";
		Frog01[]={"animals\frogs",0.001,1,1,0.0,0.0,0.0};
		empty[]={"","","","",0,0,0};
	};

	class OwlSfx
	{
		sounds[]={"Owl1","Owl2"};
		name="$STR_DN_OWL";
		Owl1[]={"animals\owl1_1",0.001,1,0.6,0.1,0.5,5};
		Owl2[]={"animals\owl1_2",0.001,1,0.2,0.1,0.5,5};
		empty[]={"","","","",0.5,2,12};
	};

	class CowSfx
	{
		sounds[]={"moo1","moo2"};
		name="$STR_DN_COW";
		moo1[]={"animals\cow_moo01",0.001,1,0.4,0.1,0.5,5};
		moo2[]={"animals\cow_moo02",0.001,1,0.4,0.1,0.5,5};
		empty[]={"","","","",0.1,0.5,2};
	};

	class WolfSfx
	{
		sounds[]={"wolf1","wolf2","wolf3"};
		name="$STR_DN_WOLF";
		wolf1[]={"animals\wolf1",0.001,1,0.3,0.1,0.5,5};
		wolf2[]={"animals\wolf2",0.001,1,0.3,0.1,0.5,5};
		wolf3[]={"animals\wolf3",0.001,1,0.3,0.1,0.5,5};
		empty[]={"","","","",0.5,4,50};
	};

	class CrowSfx
	{
		sounds[]={"crow1","crow2","crow3"};
		name="$STR_DN_CROW";
		crow1[]={"animals\crow1_1",0.001,1,0.2,0.1,0.5,5};
		crow2[]={"animals\crow1_2",0.001,1,0.2,0.1,0.5,5};
		crow3[]={"animals\crow1_3",0.001,1,0.2,0.1,0.5,5};
		empty[]={"","","","",2,10,30};
	};

	class DogSfx
	{
		sounds[]={"dog1","dog2","dog3"};
		name="$STR_DN_DOG";
		dog1[]={"animals\dog_bark03",0.01,1,0.3,0.1,0.5,5};
		dog2[]={"animals\dog_bark04",0.01,1,0.3,0.1,0.5,5};
		dog3[]={"animals\dog_bark05",0.0056234,1,0.3,0.1,0.5,5};
		empty[]={"","","","",3,15,90};
	};

	class SorrowDogSfx
	{
		sounds[]={"sorrowdog1","sorrowdog2","sorrowdog3","sorrowdog4"};
		name="$STR_DN_SORROW_DOG";
		sorrowdog1[]={"animals\dog_bark04",0.01,1,0.2,0.1,0.5,5};
		sorrowdog2[]={"animals\dog_bark05",0.01,1,0.2,0.1,0.5,5};
		sorrowdog3[]={"animals\dog_yelp02",0.0056234,1,0.2,0.1,0.5,5};
		sorrowdog4[]={"animals\dog_yelp03",0.0031623,1,0.2,0.1,0.5,5};
		empty[]={"","","","",0.2,3,8};
	};

	class BadDogSfx
	{
		sounds[]={"baddog1","baddog2","baddog3"};
		name="$STR_DN_BAD_DOG";
		baddog1[]={"animals\dog_bark04",0.0141254,1,0.3,0.1,0.5,5};
		baddog2[]={"animals\dog_bark05",0.0141254,1,0.3,0.1,0.5,5};
		baddog3[]={"animals\dog_maul01",0.0177828,1,0.3,0.1,0.5,5};
		empty[]={"","","","",0.1,2,5};
	};

	class LittleDogSfx
	{
		sounds[]={"littledog1"};
		name="$STR_DN_LITTLE_DOG";
		littledog1[]={"animals\dog_bark04",0.0017783,1,0.8,0.1,0.5,5};
		empty[]={"","","","",0.2,5,3,8};
	};

	class BirdSingingSfx
	{
		sounds[]={"sing1","sing1a","sing2","sing2a","sing3","sing4","sing5","sing6","sing7","sing8","sing9"};
		name="$STR_DN_BIRDSING";
		sing1[]={"animals\birdsing01",0.0031623,1,0.1,0.2,0.4,1};
		sing1a[]={"animals\birdsing01",0.0017783,1,0.08,0.2,0.3,1};
		sing2[]={"animals\birdsing02",0.001,1,0.1,0.1,0.2,1.2};
		sing2a[]={"animals\birdsing02",0.0056234,1,0.08,0.1,0.2,1.2};
		sing3[]={"animals\birdsing03",0.0031623,1,0.08,0.3,0.4,0.75};
		sing4[]={"animals\birdsing04",0.0031623,1,0.08,0.2,0.4,0.8};
		sing5[]={"animals\birdsing05",0.0031623,1,0.08,0.1,0.5,0.8};
		sing6[]={"animals\birdsing06",0.0031623,1,0.08,0.1,0.3,0.8};
		sing7[]={"animals\birdsing07",0.0031623,1,0.08,0.1,0.6,0.8};
		sing8[]={"animals\birdsing08",0.0017783,1,0.08,0.1,0.6,0.8};
		sing9[]={"animals\birdsing09",0.0017783,1,0.08,0.1,0.6,0.8};
		empty[]={"","","","",1,5,80};
	};

	class CockSfx
	{
		sounds[]={"cock"};
		name="$STR_DN_COCK";
		cock[]={"animals\cock",0.01,1,0.5,0.1,0.5,5};
		empty[]={"","","","","",1,30,90};
	};

	class ChickenSfx
	{
		sounds[]={"chicken1","chicken2"};
		name="$STR_DN_CHICKEN";
		chicken1[]={"animals\chicken01",0.0031623,1,0.3,0.1,0.5,5};
		chicken2[]={"animals\chicken02",0.0031623,1,0.3,0.1,0.5,5};
		empty[]={"","","","","",1,20,60};
	};

	class FunMusicSfx
	{
		sounds[]={"music1"};
		name="'Music'";
		music1[]={"Objects\Fun_music",0.0031623,1,1,0,0,0};
		empty[]={"","","","","",0,0,0};
	};
};