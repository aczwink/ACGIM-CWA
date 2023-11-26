class RscTitles
{

	class Default
	{
		idd=-1;
		movingEnable=0;
		duration=4;
	};

	class DefPic:Default
	{
		type=0;
		idc=-1;
		style=48;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		font="tahomaB24";
		sizeEx=0;
	};

	class CWA {
		idd = -1;
		movingEnable = 0;
		duration = 4;
		name = "CWA";
		controls[] = {"Background","CWA"};
		class Background: RscText {
			text = "";
			colorBackground[] = {0,0,0,1};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			colorText[] = {0,0,0,0};
		};
		class CWA: RscPicture {
			text = "startup_logo_CWA_ca.paa";
			x = 0.2;
			y = 0.23;
			w = 0.6;
			h = 0.4;
		};
	};

	class BIS
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="BI Studio";
		controls[]={"Background","BI_NEW","WWW"};

		class BIS1:RscPicture
		{
			text="BI1fit.pac";
			x=0.2;
			y=0.23;
			w=0.3;
			h=0.4;
		};

		class BIS2:RscPicture
		{
			text="BI2fit.pac";
			x=0.5;
			y=0.23;
			w=0.3;
			h=0.4;
		};

		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.2;
			y = 0.23;
			w = 0.6;
			h = 0.4;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class WWW:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_TIT_PRESENTS";
			x=0.05;
			y=0.67;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="tahomaB36";
			sizeEx=0.03;
		};
	};

	class LegalScreen
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Copyrights";
		controls[]={"Background","BI_NEW","CopText","InfoText"};

		class CopText:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.5;
			text = "� 2011 Bohemia Interactive. \nAll rights reserved. \nDeveloped by Bohemia Interactive. Published by Bohemia Interactive. \nAll other copyrights or trademarks are the property of their respective owners.";
			x=0.05;
			y=0.3;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="tahomaB36";
			sizeEx="0.8 * 0.03";
		};

		class InfoText:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.5;
			text = "Counterfeit copying or trading in counterfeit copies is illegal.\nArma: Cold War Assault is protected from unauthorized copying by a unique system. In counterfeit copies, the gameplay will degrade after a period of time to a point where the game is no longer playable. This does not happen to genuine software. if you are any doubt about the authenticity of your Arma: Cold War Assault disc, make sure you have original packaging and a printed silver disc. \nCOUNTERFEIT SOFTWARE IS NOT WORTH PURCHASING.";
			x=0.05;
			y=0.6;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,0.5,1};
			font="tahomaB36";
			sizeEx="0.8 * 0.03";
		};

		class CM1:RscPicture
		{
			text="CM1fit.paa";
			x=0.35;
			y=0.1;
			w=0.1;
			h=0.13333;
		};

		class CM2:RscPicture
		{
			text="CM2fit.paa";
			x=0.45;
			y=0.1;
			w=0.1;
			h=0.13333;
		};

		class CM3:RscPicture
		{
			text="CM3fit.paa";
			x=0.55;
			y=0.1;
			w=0.1;
			h=0.13333;
		};

		class CM4:RscPicture
		{
			text="CMsign.paa";
			x=0.55;
			y=0.1;
			w=0.1;
			h=0.13333;
		};

		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.4;
			y = 0.1;
			w = 0.2;
			h = 0.13333;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class Features1
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Features";
		controls[]={"Background","Back","FP1","FP2","FP3","Text1","Text2"};

		class Text1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="� The best of cold war military equipment: battling on foot, in armor and in the sky\n\n� 30+ playable vehicles, 20+ different infantry weapons: guns, missiles, explosives\n\n� Leadership of up to 12 units in the squad: simple point and click interface \n\n� Over 50 missions on 3 huge islands: featuring a campaign with exciting storyline\n\n� Intuitive mission editor: players can create own missions and campaigns \n\n� Multiplayer combat over LAN or Internet: including Voice Over Net";
			x=0.0;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64";
			sizeEx="0.8 * 0.05";
		};

		class Back:RscText
		{
			x=0.0;
			y=0.24;
			w=1.0;
			h=0.6;
			text="";
			colorBackground[]={0.12,0.15,0.04,1};
		};

		class Text2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="OUT NOW!";
			x=0.05;
			y=0.89;
			w=0.9;
			h=0.5;
			colorText[]={0.23,0.3,0.08,0.5};
			font="SteelfishB64";
			sizeEx=0.05;
		};

		class FP1:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text="OFPlogo1.paa";
			x=0.32;
			y=0.07;
			w=0.12;
			h=0.133;
		};

		class FP2:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text="OFPlogo2.paa";
			x=0.44;
			y=0.07;
			w=0.12;
			h=0.133;
		};

		class FP3:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.5};
			text="OFPlogo3.paa";
			x=0.56;
			y=0.07;
			w=0.12;
			h=0.133;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class Features
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Features";
		controls[]={"CGW1","CGW2","CGW3","CGW4"};

		class CGW1:RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW1.jpg";
			x=0;
			y=0;
			w=0.5;
			h=0.666;
		};

		class CGW2:RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW2.jpg";
			x=0.5;
			y=0;
			w=0.5;
			h=0.666;
		};

		class CGW3:RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW3.jpg";
			x=0;
			y=0.666;
			w=0.5;
			h=0.333;
		};

		class CGW4:RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW4.jpg";
			x=0.5;
			y=0.666;
			w=0.5;
			h=0.333;
		};
	};

	class Arma_Cold_War_Assault
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Arma: Cold War Assault";
		controls[]={"Background","FP1","FP2","FP3"};

		class FP1:RscPicture
		{
			text="OFPlogo1.paa";
			x=0.05;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class FP2:RscPicture
		{
			text="OFPlogo2.paa";
			x=0.35;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class FP3:RscPicture
		{
			text="OFPlogo3.paa";
			x=0.65;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class resistance
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Resistance logo";
		controls[] = {"Background","CWA_RES"};

		class RE1:RscPicture
		{
			text="\o\misc\OFPRlogo01.paa";
			x=0.05;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class RE2:RscPicture
		{
			text="\o\misc\OFPRlogo02.paa";
			x=0.35;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class RE3:RscPicture
		{
			text="\o\misc\OFPRlogo03.paa";
			x=0.65;
			y=0.32;
			w=0.3;
			h=0.33;
		};

		class CWA_RES: RscPicture {
			text = "\o\misc\startup_logo_CWA_res_ca.paa";
			x = 0.2;
			y = 0.23;
			w = 0.6;
			h = 0.4;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class creditsback
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Creditsback";
		controls[]={"Back","background"};

		class Back:RscText
		{
			x=0.72;
			y=0.0;
			w=0.5;
			h=1.0;
			text="";
			colorBackground[]={0.0,0.0,0.0,1};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class creditsbackBIS
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="CreditsbackBIS";
		controls[] = {"Back","background","web","BI_NEW","dev"};

		class Back:RscText
		{
			x=0.72;
			y=0.0;
			w=0.5;
			h=1.0;
			text="";
			colorBackground[]={0.0,0.0,0.0,1};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class BIS1:RscPicture
		{
			text="BI1fit.pac";
			x=0.76;
			y=0.04;
			w=0.1;
			h=0.12;
		};

		class BIS2:RscPicture
		{
			text="BI2fit.pac";
			x=0.86;
			y=0.04;
			w=0.1;
			h=0.12;
		};

		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.76;
			y = 0.04;
			w = 0.2;
			h = 0.12;
		};

		class web:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="www.bistudio.com";
			x=0.41;
			y=0.95;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.7 * 0.03";
		};

		class dev:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS12a";
			x=0.41;
			y=0.02;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.6 * 0.03";
		};
	};

	class BISleader:creditsbackBIS
	{
		name="BISleader";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS01";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN01";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="1.1 * 0.05";
		};
	};

	class BISprogram:creditsbackBIS
	{
		name="BISprogrammer";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS02";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN02";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};
	};

	class BISart:creditsbackBIS
	{
		name="BISart";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS03";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN03";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};
	};

	class BISdesign:creditsbackBIS
	{
		name="BISdesign";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS04";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN04";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};
	};

	class BISother1:creditsbackBIS
	{
		name="BISother1";
		controls[] = {"Back","background","web","BI_NEW","work1","work2","work3","name1","name2","name3","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS05";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN05";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS06";
			x=0.36;
			y=0.45;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN06";
			x=0.36;
			y=0.5;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};

		class work3:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS07";
			x=0.36;
			y=0.6;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name3:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN07";
			x=0.36;
			y=0.65;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};
	};

	class BISmusic:creditsbackBIS
	{
		name="BISmusic";
		controls[] = {"Back","background","web","BI_NEW","work1","name1","name2","name3","name4","dev"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS09";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN09";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN09a";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.5 * 0.05";
		};

		class name3:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN09b";
			x=0.36;
			y=0.6;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.5 * 0.05";
		};

		class name4:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN09c";
			x=0.36;
			y=0.63;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};
	};

	class BISsfx:creditsbackBIS
	{
		name="BISsfx";
		controls[] = {"Back","background","web","BI_NEW","work1","work2","name1","name2","dev","copy"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS10";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.98;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN10";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.98;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.8 * 0.05";
		};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS08";
			x=0.36;
			y=0.55;
			w=1.0;
			h=0.98;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN08";
			x=0.36;
			y=0.6;
			w=1.0;
			h=0.98;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.9 * 0.05";
		};

		class copy:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_COPY";
			x=0.36;
			y=0.7;
			w=1.0;
			h=0.98;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};
	};

	class BISthx:creditsbackBIS
	{
		name="BISthx";
		controls[] = {"Back","background","web","BI_NEW","work2","name2","dev"};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS11";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN11";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="SteelfishB64CE";
			sizeEx="0.8 * 0.05";
		};
	};

	class creditsbackCM
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="CreditsbackCM";
		controls[] = {"Back","background","web","BI_NEW","pub"};

		class Back:RscText
		{
			x=0.72;
			y=0.0;
			w=0.5;
			h=1.0;
			text="";
			colorBackground[]={0.0,0.0,0.0,1};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class CM1:RscPicture
		{
			text="CM1fit.paa";
			x=0.74;
			y=0.03;
			w=0.08;
			h=0.1;
		};

		class CM2:RscPicture
		{
			text="CM2fit.paa";
			x=0.82;
			y=0.03;
			w=0.08;
			h=0.1;
		};

		class CM3:RscPicture
		{
			text="CM3fit.paa";
			x=0.9;
			y=0.03;
			w=0.08;
			h=0.1;
		};

		class CM4:RscPicture
		{
			text="CMsign.paa";
			x=0.9;
			y=0.03;
			w=0.08;
			h=0.1;
		};

		class BI_NEW: RscPicture {
			text = "startup_logo_bi_ca.paa";
			x = 0.76;
			y = 0.04;
			w = 0.2;
			h = 0.12;
		};

		class pub:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS12";
			x=0.41;
			y=0.015;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.6 * 0.03";
		};

		class web:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text = "www.bistudio.com";
			x=0.41;
			y=0.95;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.7 * 0.03";
		};
	};

	class CMProducer:creditsbackCM
	{
		name="CMproducer";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS13";
			x=0.36;
			y=0.4;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN13";
			x=0.36;
			y=0.45;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class CMdesign:creditsbackCM
	{
		name="CMdesign";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS14";
			x=0.36;
			y=0.3;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN14";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class CMQA:creditsbackCM
	{
		name="CMQA";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS15";
			x=0.36;
			y=0.2;
			w=1.0;
			h=0.93;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN15";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.93;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class CMMrkev:creditsbackCM
	{
		name="CMMrkev";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS16";
			x=0.36;
			y=0.2;
			w=1.0;
			h=0.93;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN16";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.93;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.8 * 0.05";
		};
	};

	class CMVoice:creditsbackCM
	{
		name="CMVoice";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS17";
			x=0.36;
			y=0.2;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN17";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS18";
			x=0.36;
			y=0.45;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN18";
			x=0.36;
			y=0.5;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class CMlocal:creditsbackCM
	{
		name="CMlocal";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS19";
			x=0.36;
			y=0.2;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN19";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS20";
			x=0.36;
			y=0.35;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN20";
			x=0.36;
			y=0.4;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class CMlegal:creditsbackCM
	{
		name="CMlegal";
		controls[] = {"Back","background","web","BI_NEW","pub","work1","work2","name2","name1"};

		class work1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS21";
			x=0.36;
			y=0.2;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN21";
			x=0.36;
			y=0.25;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};

		class work2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS22";
			x=0.36;
			y=0.45;
			w=1.0;
			h=0.73;
			colorText[]={0.75,0.75,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.6 * 0.05";
		};

		class name2:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITSN22";
			x=0.36;
			y=0.5;
			w=1.0;
			h=0.53;
			colorText[]={1.0,1.0,1.0,1};
			font="\fonts\SteelfishB64";
			sizeEx="0.9 * 0.05";
		};
	};

	class Endof
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Endof";
		controls[]={"Back2","background","copy"};

		class Back2:RscText
		{
			x=0.0;
			y=0.95;
			w=1.0;
			h=1.0;
			text="";
			colorBackground[]={0.0,0.0,0.0,0.5};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class copy:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS23";
			x=0.03;
			y=0.96;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.7 * 0.03";
		};
	};

	class foto
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="foto";
		fadein=0;
		controls[]={"background","copy","up","down","right","left"};

		class up:RscText
		{
			x=0.0;
			y=0.0;
			w=1.0;
			h=0.02;
			text="";
			colorBackground[]={0.9,0.9,0.9,1.0};
		};

		class down:RscText
		{
			x=0.0;
			y=0.98;
			w=1.0;
			h=1.0;
			text="";
			colorBackground[]={0.9,0.9,0.9,1.0};
		};

		class left:RscText
		{
			x=0.0;
			y=0.0;
			w=0.02;
			h=1.0;
			text="";
			colorBackground[]={0.9,0.9,0.9,1.0};
		};

		class right:RscText
		{
			x=0.98;
			y=0.0;
			w=1.0;
			h=1.0;
			text="";
			colorBackground[]={0.9,0.9,0.9,1.0};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class copy:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS23";
			x=0.03;
			y=0.9;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="\fonts\tahomaB36";
			sizeEx="0.7 * 0.03";
		};
	};

	class Endof2
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Endof2";
		controls[]={"Back2","background","copy"};

		class Back2:RscText
		{
			x=0.0;
			y=0.0;
			w=1.0;
			h=1.0;
			text="";
			colorBackground[]={0.0,0.0,0.0,0.7};
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class copy:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_CREDITS24";
			x=0.03;
			y=0.5;
			w=0.9;
			h=0.7;
			colorText[]={1,1,1,1};
			font="SteelfishB64CE";
			sizeEx="0.7 * 0.05";
		};
	};

	class maintitles1
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="maintitles1";
		controls[]={"Background","maintitles_01","maintitles_02"};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class maintitles_01:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_01";
			x=-0.02;
			y=0.487;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx=0.098;
		};

		class maintitles_02:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_02";
			x=0.23;
			y=0.52;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx="0.6 * 0.098";
		};
	};

	class maintitles2
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="maintitles2";
		controls[]={"Background","maintitles_03","maintitles_04","maintitles_05"};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class maintitles_03:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_03";
			x=-0.19;
			y=0.52;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx="0.6 * 0.098";
		};

		class maintitles_04:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_04";
			x=0.01;
			y=0.487;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx="1.0 * 0.098";
		};

		class maintitles_05:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_05";
			x=0.26;
			y=0.52;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx="0.6 * 0.098";
		};
	};

	class maintitles3
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="maintitles3";
		controls[]={"Background","maintitles_06"};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};

		class maintitles_06:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1.0;
			text="$STR_MAINTITLES_06";
			x=0.045;
			y=0.47;
			w=0.9;
			h=0.5;
			colorText[]={1,1,1,1};
			font="\fonts\SteelfishB128";
			sizeEx="1.4 * 0.098";
		};
	};

	class binocular
	{
		idd=-1;
		movingEnable=0;
		duration=1000;
		name="binocular";
		objects[]={"binocular"};

		class binocular:RscObject
		{
			model="optika_dalekohled.p3d";
			idc=-1;
			position[]={0,0,0.063};
			direction[]={"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
			up[]={0,"cos 180","-sin 180"};
		};
	};

	class reslogo
	{
		idd=-1;
		movingEnable=0;
		duration=1000;
		name="reslogo";
		objects[]={"binocular"};

		class binocular:RscObject
		{
			model="\o\misc\Resistance_logo.p3d";
			idc=-1;
			position[]={0,0,3.5};
			direction[]={"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
			up[]={0,"cos 0","-sin 180"};
		};
	};

	class Demo1
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Demo 1";
		controls[]={"Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="Your transport is down. \nYou're about to ditch in hostile territory.";
			x=0.05;
			y=0.4;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx="0.6 * 0.098";
		};
	};

	class Demo2
	{
		idd=-1;
		movingEnable=0;
		duration=2;
		name="Demo 2 - Think fast";
		controls[]={"Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="Think fast, what are your options?";
			x=0.05;
			y=0.4;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx="0.6 * 0.098";
		};
	};

	class Demo3
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 3 - Hide";
		controls[]={"Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="Hide?";
			x=0.05;
			y=0.4;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx=0.098;
		};
	};

	class Demo4
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 4 - Fight";
		controls[]={"Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="Fight?";
			x=0.05;
			y=0.4;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx="1.0 * 0.098";
		};
	};

	class Demo5
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 5 - Surrender";
		controls[]={"Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="Surrender?";
			x=0.05;
			y=0.4;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx=0.098;
		};
	};

	class Demo6
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 6 - OFP your call";
		controls[]={"Background","FP1","FP2","FP3","Text"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="YOUR CALL.";
			x=0.05;
			y=0.5;
			w=0.9;
			h=0.3;
			colorText[]={1.0,1.0,1.0,0.5};
			font="SteelfishB128";
			sizeEx=0.098;
		};

		class FP1:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text="OFPlogo1.paa";
			x=0.05;
			y=0.2;
			w=0.3;
			h=0.33;
		};

		class FP2:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text="OFPlogo2.paa";
			x=0.35;
			y=0.2;
			w=0.3;
			h=0.33;
		};

		class FP3:RscPicture
		{
			colorText[]={0.23,0.3,0.08,0.3};
			text="OFPlogo3.paa";
			x=0.65;
			y=0.2;
			w=0.3;
			h=0.33;
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};

	class Demo7
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 7 TBC";
		controls[]={"Background","Text","Text1"};

		class Text:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="JOIN NOW!";
			x=0.05;
			y=0.45;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB128";
			sizeEx="0.6 * 0.098";
		};

		class Text1:RscText
		{
			style="16 + 					2 + 				512";
			lineSpacing=1;
			text="The ultimate test of your combat skills on PC CD-ROM.";
			x=0.05;
			y=0.55;
			w=0.9;
			h=0.5;
			colorText[]={1.0,1.0,1.0,1.0};
			font="SteelfishB64";
			sizeEx="0.8 * 0.05";
		};

		class Background:RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
};