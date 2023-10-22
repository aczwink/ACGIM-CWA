class ah64a : Helicopter
{
	sectionsInherit="Vehicle";
	sections[]=
	{
		"sklo predni p",
		"sklo predni l",
		"velka vrtule staticka",
		"velka vrtule blur",
		"mala vrtule staticka",
		"mala vrtule blur",
		"pic_usarmy",
		"pic_nation",
		"pic_nation2",
		"pic_nl",
		"mfd_pil_1",
		"mfd_pil_2",
		"mfd_pil_kl",
		"mfd_gun_1",
		"mfd_gun_2",
		"mfd_gun_kl",
		"mfd_gun_mid"
	};
};

class CSLA2_UH60A : Helicopter
{
	sectionsInherit = "Helicopter";
	sections[] = {"cis1", "cis2", "cis3", "cis4", "cis5", "zasleh2", "offline"};
};

class CSLA2_UH60A_M2 : CSLA2_UH60A
{
};