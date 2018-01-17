class CfgNonAIVehicles
{
	access=1;

	class EmptyDetector
	{
		displayName="$STR_DN_EMPTY";
		simulation="detector";
		model="empty.p3d";
		scope=2;
	};

	class Track
	{
		model="";
		simulation="track";
	};

	class Mark
	{
		model="";
		simulation="mark";
	};

	class SmokeSource
	{
		model="";
		simulation="SmokeSource";
	};

	class ObjectDestructed
	{
		model="";
		simulation="ObjectDestructed";
	};

	class Explosion
	{
		model="";
		simulation="Explosion";
	};

	class Crater
	{
		model="";
		simulation="Crater";
	};

	class CraterOnVehicle
	{
		//model="";
		model="\sjc_models\fx\CraterOnVehicle.p3d";
		simulation="CraterOnVehicle";
	};

	class Slop
	{
		model="";
		simulation="Slop";
	};

	class Smoke
	{
		model="";
		simulation="Smoke";
	};

	class DynamicSound
	{
		model="";
		simulation="DynamicSound";
	};

	class StreetLamp
	{
		model="";
		destrType=DESTRUCT_TREE;
		simulation="StreetLamp";
		colorDiffuse[]={0.9,0.8,0.6};
		colorAmbient[]={0.1,0.1,0.1};
		brightness=1;
		armorBulb=1;
	};

	class StreetLampWood : StreetLamp
	{
		scope=1;
		model="lampadrevo";
	};

	class StreetLampMetal : StreetLamp
	{
		scope=1;
		model="lampazel";
	};

	class SoundOnVehicle
	{
		model="";
		simulation="SoundOnVehicle";
	};

	class ThunderBolt
	{
		model="";
		simulation="ThunderBolt";
	};

	class EditCursor
	{
		model="";
		simulation="EditCursor";
	};

	class ObjView
	{
		scope=2;
		model="";
		simulation="ObjView";
	};

	class Temp
	{
		scope=2;
		model="";
		simulation="Temp";
	};

	class SeaGull
	{
		scope=2;
		model="racekT";
		simulation="SeaGull";
		reversed=0;
	};

	class Camera
	{
		scope=2;
		model="camera";
		simulation="Camera";
	};

	class ProxyWeapon
	{
		autocenter=0;
		scope=2;
		reversed=0;
		model="m16_proxy";
		simulation="ProxyWeapon";
	};

	class ProxySecWeapon
	{
		autocenter=0;
		scope=2;
		model="law_proxy";
		simulation="ProxySecWeapon";
	};

	class ProxyAK_47_Proxy : ProxyWeapon
	{
	};

	class ProxyAK_47_v58_Proxy : ProxyWeapon
	{
	};

	class ProxyAK_47_granatomet_Proxy : ProxyWeapon
	{
	};

	class ProxyRPG7_Proxy:ProxySecWeapon
	{
	};

	class ProxyLAW_Proxy:ProxySecWeapon
	{
	};

	class ProxyStinger_Proxy:ProxySecWeapon
	{
	};

	class ProxyAT1_Proxy:ProxyWeapon
	{
		model="AT1_Proxy";
		simulation="alwaysshow";
	};

	class ProxyMaverik_Proxy:ProxyWeapon
	{
		model="Maverik_Proxy";
		simulation="maverickweapon";
	};

	class ProxyScud_Strela_Proxy:ProxyWeapon
	{
		model="Scud_Strela_Proxy";
		simulation="scud";
	};

	class ProxyCrew
	{
		autocenter=0;
		scope=1;
		model="kursor";
		simulation="proxycrew";
		crewPosition = CREWPOS_DRIVER;
	};

	class ProxyCommander:ProxyCrew
	{
		crewPosition = CREWPOS_COMMANDER;
	};

	class ProxyDriver:ProxyCrew
	{
		crewPosition = CREWPOS_DRIVER;
	};

	class ProxyGunner:ProxyCrew
	{
		crewPosition = CREWPOS_GUNNER;
	};

	class ProxyCargo:ProxyCrew
	{
		crewPosition = CREWPOS_CARGO;
	};

	class ProxyM60Commander:ProxyCommander
	{
	};

	class ProxyM60Driver:ProxyDriver
	{
	};

	class ProxyM60Gunner:ProxyGunner
	{
	};

	class ProxyM60CommanderOut:ProxyCommander
	{
	};

	class ProxyM60DriverOut:ProxyDriver
	{
	};

	class ProxyM60GunnerOut:ProxyGunner
	{
	};

	class ProxyM1A1Commander:ProxyCommander
	{
	};

	class ProxyM1A1Driver:ProxyDriver
	{
	};

	class ProxyM1A1Gunner:ProxyGunner
	{
	};

	class ProxyM1A1CommanderOut:ProxyCommander
	{
	};

	class ProxyM1A1DriverOut:ProxyDriver
	{
	};

	class ProxyM1A1GunnerOut:ProxyGunner
	{
	};

	class ProxyM113Commander:ProxyCommander
	{
	};

	class ProxyM113Driver:ProxyDriver
	{
	};

	class ProxyM113Gunner:ProxyGunner
	{
	};

	class ProxyM113CommanderOut:ProxyCommander
	{
	};

	class ProxyM113DriverOut:ProxyDriver
	{
	};

	class ProxyM113GunnerOut:ProxyGunner
	{
	};

	class ProxyBMPCommander:ProxyCommander
	{
	};

	class ProxyBMPDriver:ProxyDriver
	{
	};

	class ProxyBMPGunner:ProxyGunner
	{
	};

	class ProxyBMPCommanderOut:ProxyCommander
	{
	};

	class ProxyBMPDriverOut:ProxyDriver
	{
	};

	class ProxyBMPGunnerOut:ProxyGunner
	{
	};

	class ProxyT72Commander:ProxyCommander
	{
	};

	class ProxyT72Driver:ProxyDriver
	{
	};

	class ProxyT72Gunner:ProxyGunner
	{
	};

	class ProxyT72CommanderOut:ProxyCommander
	{
	};

	class ProxyT72DriverOut:ProxyDriver
	{
	};

	class ProxyT72GunnerOut:ProxyGunner
	{
	};

	class ProxyT80Commander:ProxyCommander
	{
	};

	class ProxyT80Driver:ProxyDriver
	{
	};

	class ProxyT80Gunner:ProxyGunner
	{
	};

	class ProxyT80CommanderOut:ProxyCommander
	{
	};

	class ProxyT80DriverOut:ProxyDriver
	{
	};

	class ProxyT80GunnerOut:ProxyGunner
	{
	};

	class ProxyZSUCommander:ProxyCommander
	{
	};

	class ProxyZSUDriver:ProxyDriver
	{
	};

	class ProxyZSUGunner:ProxyGunner
	{
	};

	class ProxyZSUCommanderOut:ProxyCommander
	{
	};

	class ProxyZSUDriverOut:ProxyDriver
	{
	};

	class ProxyZSUGunnerOut:ProxyGunner
	{
	};

	class ProxyT55Commander:ProxyCommander
	{
	};

	class ProxyT55Driver:ProxyDriver
	{
	};

	class ProxyT55Gunner:ProxyGunner
	{
	};

	class ProxyT55CommanderOut:ProxyCommander
	{
	};

	class ProxyT55DriverOut:ProxyDriver
	{
	};

	class ProxyT55GunnerOut:ProxyGunner
	{
	};

	class ProxyMedic:ProxyCargo
	{
	};

	class ProxyNemocnej:ProxyCargo
	{
	};

	class ProxyUH60Pilot:ProxyDriver
	{
	};

	class ProxyUH60CoPilot:ProxyGunner
	{
	};

	class ProxyUH60Gunner:ProxyGunner
	{
	};

	class ProxyMi17Pilot:ProxyDriver
	{
	};

	class ProxyMi17CoPilot:ProxyGunner
	{
	};

	class ProxyMi24Pilot:ProxyDriver
	{
	};

	class ProxyMi24Gunner:ProxyGunner
	{
	};

	class ProxyAH1Pilot:ProxyDriver
	{
	};

	class ProxyAH1Gunner:ProxyGunner
	{
	};

	class ProxyAH1GunnerStat:ProxyGunner
	{
	};

	class ProxyA10Pilot:ProxyDriver
	{
	};

	class ProxyCesnaPilot:ProxyDriver
	{
	};

	class ProxyCesnaCoPilot:ProxyCargo
	{
	};

	class ProxyCesnaCargo:ProxyCargo
	{
	};

	class ProxyTraktorDriver:ProxyDriver
	{
	};

	class ProxyJeepDriver:ProxyDriver
	{
	};

	class ProxyJeepGunner:ProxyGunner
	{
	};

	class ProxyJeepCoDriver:ProxyCargo
	{
	};

	class ProxyJeepCoDriverBack:ProxyCargo
	{
	};

	class Proxy5tDriver:ProxyDriver
	{
	};

	class Proxy5tCoDriver:ProxyCargo
	{
	};

	class ProxyUazDriver:ProxyDriver
	{
	};

	class ProxyUazCoDriver:ProxyCargo
	{
	};

	class ProxyUralDriver:ProxyDriver
	{
	};

	class ProxyUralCoDriver:ProxyCargo
	{
	};

	class ProxySkodaDriver:ProxyDriver
	{
	};

	class ProxySkodaCoDriver:ProxyCargo
	{
	};

	class ProxySkodaCoDriverBack:ProxyCargo
	{
	};

	class ProxyV3SDriver:ProxyDriver
	{
	};

	class ProxyV3SCoDriver:ProxyCargo
	{
	};

	class ProxyPBRDriver:ProxyDriver
	{
	};

	class ProxyPBRGunner:ProxyGunner
	{
	};

	class ProxyHRLDriver:ProxyDriver
	{
	};

	class ProxyHRLGunner:ProxyGunner
	{
	};

	class ProxySCUDDriver:ProxyDriver
	{
	};

	class ProxySCUDCoDriver:ProxyCargo
	{
	};

	class ProxyParasutista:ProxyDriver
	{
	};

	class ProxyM2Gunner:ProxyGunner
	{
	};

	class ProxyPKGunner:ProxyGunner
	{
	};

	class ProxyFlag
	{
		autocenter=0;
		scope=2;
		reversed=0;
		model="";
		simulation="flag";
	};

	class ProxyFlag_Auto:ProxyFlag
	{
		model="flag_auto";
	};

	class ProxyFlag_Alone:ProxyFlag
	{
		model="flag_alone";
	};

	class ProxyFlag_Alone_Big:ProxyFlag
	{
		model="flag_alone_big";
	};

	class ProxyFlag_Vojak:ProxyFlag
	{
		model="flag_vojak";
	};

	class ProxyFlag_Stozar:ProxyFlag
	{
		model="flag_stozar";
	};

	class ProxyFlag_Plane:ProxyFlag
	{
		model="flag_plane";
	};

	class ProxyFlag_Plane_Big:ProxyFlag
	{
		model="flag_plane_big";
	};

	class ProxyAmmoInTruck
	{
		autocenter=0;
		scope=2;
		reversed=0;
		model="";
		simulation="alwaysshow";
	};

	class ProxyAmmo_Bedna_In:ProxyAmmoInTruck
	{
		model="ammo_bedna_in";
	};

	class ProxyAmmo_Bedna2:ProxyAmmoInTruck
	{
		model="ammo_bedna2";
	};
	
	//Resistance
	class Proxyah64pilot : ProxyDriver
	{
	};

	class Proxyah64gunner : ProxyGunner
	{
	};

	class ProxyHellfire_proxy:ProxyWeapon
	{
		model="\Apac\hellfire_proxy";
		simulation="maverickweapon";
	};

	class ProxyBizon:ProxyWeapon
	{
	};

	class ProxyKoloDriver:ProxyDriver
	{
	};

	class ProxyKozlice: ProxyWeapon {};

	class ProxyM2A2Driver:ProxyDriver
	{
	};

	class ProxyM2A2Gunner:ProxyGunner
	{
	};

	class ProxyM2A2GunnerOutStat:ProxyGunner
	{
	};

	class ProxyM2A2Commander:ProxyCommander
	{
	};

	class ProxyM2A2CommanderOutStat:ProxyCommander
	{
	};
	class ProxyMiniDriver:ProxyDriver
	{
	};
	class StreetLampPanel:StreetLamp
	{
		scope=1;
		model="\O\Misc\vo_seda";
		colorDiffuse[]={0.9,0.8,0.6};
		colorAmbient[]={0.1,0.1,0.1};
		brightness=1;
		armorBulb=1;
	};

	class StreetLampPanelAmpl:StreetLampPanel
	{
		scope=1;
		model="\O\Misc\tlampac_vo_seda";
	};

	class StreetLampYellow:StreetLamp
	{
		scope=1;
		model="\O\Misc\vo_zlut";
		colorDiffuse[]={0.9,0.8,0.6};
		colorAmbient[]={0.1,0.1,0.1};
		brightness=1;
		armorBulb=1;
	};

	class StreetLampCut:StreetLamp
	{
		scope=1;
		model="\O\Hous\lampa_cut";
		colorDiffuse[]={0.9,0.8,0.6};
		colorAmbient[]={0.1,0.1,0.1};
		brightness=1;
		armorBulb=1;
	};
	class ProxyJAWADriver:ProxyDriver
	{
	};

	class ProxyJAWACoDriver:ProxyCargo
	{
	};

	class ProxyBusDriver:ProxyDriver
	{
	};
	class ProxyHandGun:ProxyWeapon
	{
		simulation="ProxyHandGun";
	};

	class ProxyBeretta:ProxyHandGun
	{
	};

	class ProxyGlock17:ProxyHandGun
	{
	};
	class Proxypostel_panelak1
	{
		model="\o\misc\postel_panelak1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxypostel_panelak3
	{
		model="\o\misc\postel_panelak3.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxykytka3
	{
		model="\o\misc\kytka3.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxylustr_kuch1
	{
		model="\o\misc\lustr_kuch1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxysporak02
	{
		model="\o\misc\sporak02.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxystul_kuch1
	{
		model="\o\misc\stul_kuch1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyhrabe
	{
		model="\o\misc\hrabe.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyalmara
	{
		model="\o\misc\almara.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxybedna_modr
	{
		model="\o\misc\bedna_modr.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxybedna_zel
	{
		model="\o\misc\bedna_zel.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxykachlaky
	{
		model="\o\misc\kachlaky.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxykfietina_mensi
	{
		model="\o\misc\kfietina_mensi.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxykfietina1
	{
		model="\o\misc\kfietina1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxykybl
	{
		model="\o\misc\kybl.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxylustr_zarov1
	{
		model="\o\misc\lustr_zarov1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl1
	{
		model="\o\misc\obraz_kancl1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl2
	{
		model="\o\misc\obraz_kancl2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl3
	{
		model="\o\misc\obraz_kancl3.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl4
	{
		model="\o\misc\obraz_kancl4.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl5
	{
		model="\o\misc\obraz_kancl5.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyobraz_kancl6
	{
		model="\o\misc\obraz_kancl6.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxypostel_panelak2
	{
		model="\o\misc\postel_panelak2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyradio2
	{
		model="\o\misc\radio2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxysekyra02
	{
		model="\o\misc\sekyra02.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyseno_balik
	{
		model="\o\misc\seno_balik.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyseno_stoh
	{
		model="\o\misc\seno_stoh.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrin_s1
	{
		model="\o\misc\skrin_s1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrinka_kuch1
	{
		model="\o\misc\skrinka_kuch1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrinka_kuch2
	{
		model="\o\misc\skrinka_kuch2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxysrinka_kancl1
	{
		model="\o\misc\srinka_kancl1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxystul_kancl1
	{
		model="\o\misc\stul_kancl1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxystul_kancl2
	{
		model="\o\misc\stul_kancl2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxytelevizka
	{
		model="\o\misc\televizka.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyvana
	{
		model="\o\misc\vana.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyzachod2
	{
		model="\o\misc\zachod2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyzidle_dvojsedlo
	{
		model="\o\misc\zidle_dvojsedlo.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyzidle_kancl1
	{
		model="\o\misc\zidle_kancl1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyzidle_mala1
	{
		model="\o\misc\zidle_mala1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_brownskrin
	{
		model="\o\misc\Dhangar_brownskrin.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_psacistul
	{
		model="\o\misc\Dhangar_psacistul.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_whiteskrin
	{
		model="\o\misc\Dhangar_whiteskrin.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_zidle
	{
		model="\o\misc\Dhangar_zidle.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_knihovna
	{
		model="\o\misc\Dhangar_knihovna.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDkamna_bila
	{
		model="\o\misc\Dkamna_bila.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDkamna_uhli
	{
		model="\o\misc\Dkamna_uhli.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDskrin_trojdvera
	{
		model="\o\misc\Dskrin_trojdvera.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDtelevize
	{
		model="\o\misc\Dtelevize.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDtopeni
	{
		model="\o\misc\Dtopeni.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDstul_konferenc
	{
		model="\o\misc\Dstul_konferenc.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxylustr_koule
	{
		model="\o\misc\lustr_koule.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrinka_loznice1
	{
		model="\o\misc\skrinka_loznice1.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrinka_loznice2
	{
		model="\o\misc\skrinka_loznice2.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyskrinka_drez
	{
		model="\o\misc\skrinka_drez.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxystolni_lampa1a
	{
		model="\o\misc\stolni_lampa1a.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class ProxyDhangar_radio
	{
		model="\o\misc\Dhangar_radio.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};

	class Proxyrucniky
	{
		model="\o\misc\rucniky.p3d";
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
	};
	class ProxySteyr:ProxyWeapon {};
	class ProxyCh_29T : ProxyWeapon {
		model = \Su25\Ch_29T; simulation = "maverickweapon";
	};
	class ProxyTrabiDriver: ProxyDriver {};
	class Proxyvulcangunner:Proxygunner {};
	class ProxyXMS:ProxyWeapon {};
	class ProxyCh47Gunner: ProxyGunner {};

	//CWA
	class ProxyBISCamelpilot : ProxyDriver
	{
	};

	class ProxyBISCamelCargo : ProxyCargo
	{
	};

	class ProxyBISCamelCargo2 : ProxyCargo
	{
	};

	//AC
	class Proxyat6a : ProxyWeapon
	{
		proxyShape = "\sjc_models\russia\objects\at6a_proxy.p3d";
		simulation = "maverickweapon";
	};

	class Proxycbt_hvstow : ProxyAmmoInTruck
	{
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
		model="\sjc_models\USA\objects\tow1.p3d";
	};
	
	class Proxycbt_hvstow2 : ProxyAmmoInTruck
	{
		autocenter=0;
		scope=2;
		reversed=0;
		simulation="alwaysshow";
		model="\sjc_models\USA\objects\tow2.p3d";
	};
};