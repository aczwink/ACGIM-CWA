class CfgTextureToMaterial
{
	class CarGlass
	{
		textures[]={"data\jeep4x4_glass.paa","data\jeep_kab_sklo1.paa","data\jeep_kab_sklo2.paa","data\jepp4x4_glass.paa","data\jepp_kab_sklo1.paa","data\jepp_kab_sklo2.paa","data\scud_sklo.paa","data\scud_sklo2.paa","data\scud_sklo3.paa","data\scud_sklo4.paa"};
		material="#SpecularGlass";
	};
	
	class AirborneGlass
	{
		textures[]={"data\jeep_kab_sklo1.paa","data\uh60_kab_sklo2.paa","data\uh30_cargo_pilotdoors.paa","data\uh60_cargo_dvereokno.paa","data\uh60_gunner_okna.paa","data\ah-1_kabina_predokno.paa","data\ah-1_kabina_zadokno.paa","data\ah-1_kabina_topokno.paa"};
		material="#SpecularGlass";
	};

	class Metal
	{
		textures[]=
		{
			"data\mutt_frontg.pac",
			"data\mutt_kapotag.pac",
			"data\mutt_sklog.pac",
			"data\mutt_sideg.pac"
		};
		material="#Metal";
	};

	class AirBorneMetal
	{
		textures[]=
		{
			"data\ah-1_1_pokus.pac",
			"data\ah-1_2_pokus.pac",
			"data\ah-1_opak_pokus.pac",
			"data\ah-1_kabina_predo.paa",
			"data\ah-1_kabina_topokno.paa",
			"data\ah-1_kabina_zadokno.paa",
			"data\cobra_rotor_top.pac",
			"data\cobra_rotor_top.pac",
			"data\cobra2_kridlo_predni.pac",
			"data\cobra2_kanon_front_b.pac",
			"data\cobra2_kulas_front.paa",
			"data\cobra2_kanon_side.pac",
			"data\cobra2_vejfuk.paa",
			"data\cobra3_cumak.pac",
			"data\ah-1_bottom1.pac",
			"data\ah-1_bottom2.pac"
		};
		material="#Metal";
	};

	class RifleMetal
	{
		textures[]=
		{
			"data\m16_pmp_1s.pac",
			"data\m16_pmp_ph.pac",
			"data\m16_pmp_lod.paa",
			"data\m16_pmp_lod_gif.pac",
			"data\m4_1.pac",
			"data\m4_2.pac",
			"data\m4_miridla.pac",
			"data\xm177_1s.pac",
			"data\xm177_ph.pac",
			"data\xm177_details.pac"
		};
		material="#RifleMetal";
	};

	//Resistance
	class KamovGlass
	{
		textures[]={"o\vehl\V-80_frontsklo.paa"};
		material="#SpecularGlass";
	};

	class KamovMetal
	{
		textures[]={"\o\vehl\v-80_backwing.pac","\o\vehl\v-80_blade.pac","\o\vehl\v-80_misc1.pac","\o\vehl\v-80_misc2.pac","\o\vehl\v-80_rotor.pac","\o\vehl\v-80_rotor2.pac","\o\vehl\v-80_test4a.pac","\o\vehl\v-80_test4b2.pac","\o\vehl\v-80_testbott4a.pac","\o\vehl\v-80_testbott4b.pac","\o\vehl\v-80_testtop4a.pac","\o\vehl\v-80_testtop4b.pac","\o\vehl\v-80_testwing.pac","\o\vehl\v-80_undergun.pac","\o\vehl\v-80_unguided.pac"};
		material="#Metal";
	};

	class JawaMetal
	{
		textures[]={"\o\vehl\moto01.pac","\o\vehl\moto02.pac","\o\vehl\moto03.pac"};
		material="#Metal";
	};

	class WPMetal
	{
		textures[]={"\civsnip\cs_kov.pac","SaW.pac"};
		material="#Metal";
	};

	//SJC	
	class GoggleGlass
	{
		textures[]=
		{
			"\sjc_textures\g_glass.paa"
		};
		material="#SpecularGlass";
	};
	
	class fz_oh58dglass
	{
		textures[]=
		{
			"d4t_tex\oh58\wndow3.paa",
			"d4t_tex\oh58\wndow.paa",
			"d4t_tex\oh58\broke_glass.paa"
		};
		material="#SpecularGlass";
	};
	class fz_oh58d
	{
		textures[]=
		{
			"d4t_tex\oh58\agm114_2.paa",
			"d4t_tex\oh58\fuse1.paa",
			"d4t_tex\oh58\body1.paa",
			"d4t_tex\oh58\body2.paa",
			"d4t_tex\oh58\cutr1.paa",
			"d4t_tex\oh58\door1.paa",
			"d4t_tex\oh58\dscearly.paa",
			"d4t_tex\oh58\fin.paa",
			"d4t_tex\oh58\frm1.paa",
			"d4t_tex\oh58\frnt1-2.paa",
			"d4t_tex\oh58\frnt2.paa",
			"d4t_tex\oh58\frnt3.paa",
			"d4t_tex\oh58\frnt4.paa",
			"d4t_tex\oh58\M296.paa",
			"d4t_tex\oh58\mainrtr.paa",
			"d4t_tex\oh58\MMS1.paa",
			"d4t_tex\oh58\MMS2.paa",
			"d4t_tex\oh58\nose.paa",
			"d4t_tex\oh58\rocketpod.paa",
			"d4t_tex\oh58\tail.paa",
			"d4t_tex\oh58\tailrtr.paa",
			"d4t_tex\oh58\top.paa",
			"d4t_tex\oh58\top2.paa",
			"d4t_tex\oh58\top3.paa",
			"d4t_tex\oh58\top4.paa"

		};
		material="#Metal";
	};

#include "Config\CfgTextureToMaterial\US_Aircraft.h"
#include "Config\CfgTextureToMaterial\US_Helicopters.h"
#include "Config\CfgTextureToMaterial\US_Ships.h"

#include "Config\CfgTextureToMaterial\Russia_Tracked.h"
};