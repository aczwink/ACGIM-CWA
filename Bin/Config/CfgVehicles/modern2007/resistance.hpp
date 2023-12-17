//---Infantry
	class SoldierGB:Soldier
		{
		vehicleClass="Infantry (Rebels)";
		scope=2;
		model = "\ffur_res\EUR_unit09";
		wounds[] = {"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\ffur_res\bl_arm.pac","\ffur_res\bl_arm_d.pac","\ffur_res\bl_arm2.pac","\ffur_res\bl_arm2_d.pac","\ffur_res\bl_body.pac","\ffur_res\bl_body_d.pac","\ffur_res\bl_boonie.pac","\ffur_res\bl_boonie_d.pac","\ffur_res\bl_legs.pac","\ffur_res\bl_legs_d.pac","\ffur_res\bl_shirt.pac","\ffur_res\bl_shirt_d.pac","\ffur_res\bl_shirt2.pac","\ffur_res\bl_shirt2_d.pac","\ffur_res\bl_shirt3.pac","\ffur_res\bl_shirt3_d.pac","\ffur_res\bl_shirt4.pac","\ffur_res\bl_shirt4_d.pac","\ffur_res\fl_arm.pac","\ffur_res\fl_arm_d.pac","\ffur_res\fl_boonie.pac","\ffur_res\fl_boonie_d.pac","\ffur_res\fl_legs.pac","\ffur_res\fl_legs_d.pac","\ffur_res\fl_vest.pac","\ffur_res\fl_vest_d.pac","\ffur_res\g_legs.pac","\ffur_res\g_legs_d.pac","\ffur_res\jeans.pac","\ffur_res\jeans_d.pac","\ffur_res\jogpants.pac","\ffur_res\jogpants_d.pac","\ffur_res\st_mask.pac","\ffur_res\st_mask_d.pac","\ffur_res\st_maskg.pac","\ffur_res\st_maskg_d.pac","\ffur_res\tgr_legs.pac","\ffur_res\tgr_legs_d.pac","\ffur_res\tgr_vest.pac","\ffur_res\tgr_vest_d.pac","\ffur_res\ukr_vest.pac","\ffur_res\ukr_vest_d.pac","\ffur_res\yug_arm1.pac","\ffur_res\yug_arm1_d.pac","\ffur_res\yug_boonie.pac","\ffur_res\yug_boonie_d.pac","\ffur_res\yug_cap.pac","\ffur_res\yug_cap_d.pac","\ffur_res\yug_coat.pac","\ffur_res\yug_coat_d.pac","\ffur_res\yug_coatarm.pac","\ffur_res\yug_coatarm_d.pac","\ffur_res\yug_legs.pac","\ffur_res\yug_legs_d.pac","\ffur_res\yug_shirt1.pac","\ffur_res\yug_shirt1_d.pac","\ffur_res\yug_shirt2.pac","\ffur_res\yug_shirt2_d.pac","\ffur_res\yug_shirt2.pac","\ffur_res\yug_shirt3_d.pac"};
		hiddenSelections[]={"medic"};
		moves="CfgMovesMC";
		displayName="Rebel";
		side=D4T_GUERILLA_SIDE;
		cost=10000;
		accuracy=0.7;
		weapons[]={"AK47CZ","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
		};

	class SoldierGMedic:SoldierGB
		{
		accuracy=1000;
		picture="\misc\medik.paa";
		cost=60000;
		displayName="Medic";
		model = "\ffur_res\EUR_unit04";
		weaponSlots="1	 + 4 * 		256	 + 	4096	 + 	2	 + 4*	32";
		attendant=1;
		weapons[]={"AK47CZ","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47"};
		nameSound="medic";
		hiddenSelections[]={};
		};

	class SoldierGCrew:SoldierGB
		{
		nameSound="crew";
		accuracy=1000;
		model="\ffur_res\EUR_crew.p3d";
		weapons[]={"AK47CZ","NVGoggles","Throw","Put"};
		displayName="Crew";
		};

	class SoldierGG:SoldierGB
		{
		displayName="Grenadier";
		model = "\ffur_res\EUR_unit23";
		cost=15000;
		accuracy=1000;
		weapons[]={"AK47GrenadeLauncher","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","GrenadeLauncher","GrenadeLauncher","GrenadeLauncher"};
		};

	class SoldierGMG:SoldierGB
		{
		nameSound="machineGunner";
		displayName="Machine Gunner";
		cost=15000;
		model = "\ffur_res\EUR_unit11";
		accuracy=1.5;
		weapons[]={"PK","Throw","Put"};
		magazines[]={"PK","PK","PK","PK","PK"};
		threat[]={1,0.1,0.8};
		/*class UserActions
		{
            class setcamo
			{
		    displayName="Establish MG Position";
			position="renzhong";
			radius=0.500000;
			condition="alive this";
			statement="[this]exec""\ffur_misc\scripts\Setcamo.sqs""";
			};
			
		};*/
		};

	class SoldierGLAW:SoldierGB
		{
		nameSound="missileSoldier";
		displayName="AT Rebel";
		model = "\ffur_res\EUR_unit09";
		cost=30000;
		accuracy=1.5;
		weapons[]={"AK47CZ","RPGLauncher","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","RPGLauncher","RPGLauncher","RPGLauncher"};
		nightVision=1;
		threat[]={1,0.9,0.1};
		};

	class SoldierGAT:SoldierGLAW
		{
		nameSound="missileSoldier";
		displayName="Heavy AT Rebel";
		model = "\ffur_res\EUR_unit18";
		cost=30000;
		accuracy=1.5;
		weapons[]={"AK47CZ","AT4Launcher","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","AT4Launcher"};
		nightVision=1;
		threat[]={1,0.9,0.1};
		};

	class SoldierGAA:SoldierGLAW
		{
		displayName="AA Rebel";
		nameSound="missileSoldier";
		accuracy=1.5;
		model = "\ffur_res\EUR_unit22";
		weapons[]={"AK47CZ","9K32Launcher","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","9K32Launcher"};
		threat[]={1,0.5,0.9};
		};

	class OfficerG:SoldierGB
		{
		nameSound="officer";
		scope=2;
		model = "\ffur_res\EUR_unit02";
		picture="\misc\frcky.paa";
		displayName="Rebel Leader";
		accuracy=2.0;
		cost=500000;
		nightVision=1;
		weapons[]={"AK47","Binocular","Throw","Put"};
		magazines[]={"AK47","AK47","AK47","AK47","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		};

	class Hunter:SoldierGB
		{
		displayName="Rebel (Shotgun)";
		model="\ffur_res\EUR_unit16";
		weapons[]={"Kozlice","Binocular","Throw","Put"};
		magazines[]={"KozliceShell","KozliceShell","KozliceShell","KozliceShell","KozliceShell","KozliceBall","KozliceBall","KozliceBall","KozliceBall","KozliceBall"};
		wounds[]={"xicht_a.paa","xicht_a_zranen","xicht_b.paa","xicht_a_zranen","xicht_c.paa","xicht_a_zranen","xicht_d.paa","xicht_a_zranen","xicht_e.paa","xicht_e_zranen","xicht_f.paa","xicht_a_zranen","xicht_g.paa","xicht_a_zranen","xicht_h.paa","xicht_a_zranen","xicht_i.paa","xicht_a_zranen","xicht_j.paa","xicht_a_zranen","xicht_k.paa","xicht_a_zranen","xicht_l.paa","xicht_a_zranen","xicht_m.paa","xicht_a_zranen","xicht_n.paa","xicht_a_zranen","xicht_o.paa","xicht_o_zranen","xicht_p.paa","xicht_a_zranen","xicht_q.paa","xicht_a_zranen","xicht_r.paa","xicht_a_zranen","xicht_s.paa","xicht_a_zranen","xicht_t.paa","xicht_a_zranen","xicht_u.paa","xicht_a_zranen","xicht_v.paa","xicht_v_zranen","xicht_w.paa","xicht_w_zranen","xicht_x.paa","xicht_a_zranen","xicht_y.paa","xicht_a_zranen","xicht_z.paa","xicht_a_zranen","xicht_2a.paa","xicht_a_zranen","xicht_2b.paa","xicht_w_zranen","xicht_2c.paa","xicht_a_zranen","xicht_2d.paa","xicht_v_zranen","xicht_2e.paa","xicht_a_zranen","xicht_2f.paa","xicht_a_zranen","xicht_2g.paa","xicht_w_zranen","xicht_2h.paa","xicht_a_zranen","xicht_2i.paa","xicht_a_zranen","xicht_2j.paa","xicht_a_zranen","xicht_2k.paa","xicht_a_zranen","xicht_2l.paa","xicht_a_zranen","xicht_2m.paa","xicht_a_zranen","xicht_2n.paa","xicht_a_zranen","xicht_2o.paa","xicht_a_zranen","xicht_2p.paa","xicht_2p_zranen","xicht_2q.paa","xicht_a_zranen","xicht_2r.paa","xicht_e_zranen","xicht_2s.paa","xicht_a_zranen","xicht_2t.paa","xicht_a_zranen","xicht_2u.paa","xicht_a_zranen","xicht_2v.paa","xicht_a_zranen","xicht_2w.paa","xicht_w_zranen","xicht_2x.paa","xicht_a_zranen","xicht_2y.paa","xicht_a_zranen","xicht_2z.paa","xicht_a_zranen","\ffur_res\bl_arm.pac","\ffur_res\bl_arm_d.pac","\ffur_res\bl_arm2.pac","\ffur_res\bl_arm2_d.pac","\ffur_res\bl_body.pac","\ffur_res\bl_body_d.pac","\ffur_res\bl_boonie.pac","\ffur_res\bl_boonie_d.pac","\ffur_res\bl_legs.pac","\ffur_res\bl_legs_d.pac","\ffur_res\bl_shirt.pac","\ffur_res\bl_shirt_d.pac","\ffur_res\bl_shirt2.pac","\ffur_res\bl_shirt2_d.pac","\ffur_res\bl_shirt3.pac","\ffur_res\bl_shirt3_d.pac","\ffur_res\bl_shirt4.pac","\ffur_res\bl_shirt4_d.pac","\ffur_res\fl_arm.pac","\ffur_res\fl_arm_d.pac","\ffur_res\fl_boonie.pac","\ffur_res\fl_boonie_d.pac","\ffur_res\fl_legs.pac","\ffur_res\fl_legs_d.pac","\ffur_res\fl_vest.pac","\ffur_res\fl_vest_d.pac","\ffur_res\g_legs.pac","\ffur_res\g_legs_d.pac","\ffur_res\bjeans.pac","\ffur_res\bjeans_d.pac","\ffur_res\jogpants.pac","\ffur_res\jogpants_d.pac","\ffur_res\st_mask.pac","\ffur_res\st_mask_d.pac","\ffur_res\st_maskg.pac","\ffur_res\st_maskg_d.pac","\ffur_res\tgr_legs.pac","\ffur_res\tgr_legs_d.pac","\ffur_res\tgr_vest.pac","\ffur_res\tgr_vest_d.pac","\ffur_res\ukr_vest.pac","\ffur_res\ukr_vest_d.pac","\ffur_res\yug_arm1.pac","\ffur_res\yug_arm1_d.pac","\ffur_res\yug_boonie.pac","\ffur_res\yug_boonie_d.pac","\ffur_res\yug_cap.pac","\ffur_res\yug_cap_d.pac","\ffur_res\yug_coat.pac","\ffur_res\yug_coat_d.pac","\ffur_res\yug_coatarm.pac","\ffur_res\yug_coatarm_d.pac","\ffur_res\yug_legs.pac","\ffur_res\yug_legs_d.pac","\ffur_res\yug_shirt1.pac","\ffur_res\yug_shirt1_d.pac","\ffur_res\yug_shirt2.pac","\ffur_res\yug_shirt2_d.pac","\ffur_res\yug_shirt2.pac","\ffur_res\yug_shirt3_d.pac"};
		};

	class SoldierGSniper:SoldierGB
		{
		displayName="Sniper";
		model = "\ffur_res\EUR_unit08";
		weapons[]={"HuntingRifle","Ingram","Binocular","Throw","Put"};
		magazines[]={"HuntingRifleMag","HuntingRifleMag","HuntingRifleMag","HuntingRifleMag","HuntingRifleMag","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","IngramMag","IngramMag","IngramMag","IngramMag"};
		};
//////////////////////////////Air////////////////////////////////////////////////
	class ParachuteG:ParachuteBase //protected, because FIA hasn't got any air vehicles
		{
		scope=1;
		accuracy=0.5;
		side=D4T_GUERILLA_SIDE;
		crew="SoldierGB";
		};
//////////////////////////////Armored////////////////////////////////////////////
	class BMPRes:BMP
		{
		access=2;
		displayName="BMP-3 (FIA)";
		side=D4T_GUERILLA_SIDE;
		hiddenSelections[]={};
		vehicleClass="Rebel Armored";
		};

	class T72Res:T72
		{
		access=2;
		displayName="T-80UM (FIA)";
		side=D4T_GUERILLA_SIDE;
		hiddenSelections[]={};
		vehicleClass="Rebel Armored";
		};

	class T80Res:T80
		{
		access=2;
		displayName="T-90 (FIA)";
		side=D4T_GUERILLA_SIDE;
		hiddenSelections[]={};
		vehicleClass="Rebel Armored";
		};
//////////////////////////////Cars///////////////////////////////////////////////
	class TruckV3SG:Truck
		{
		scope=2;
		crew="SoldierGB";
		picture="iv3s";
		icon="truck";
		side=2;
		displayName="$STR_DN_PV3S";
		accuracy=0.3;
		maxSpeed=75;
		transportSoldier=11;
		transportAmmo=0;
		transportRepair=0;
		turnCoef=6.0;
		cost=20000;
		armor=30;
		model="v3s";
		hiddenSelections[]={"ammo"};
		initCargoAngleY=185;
		soundEngine[]={"vehicles\dieseltruckloop1",0.0562341,1};
		weapons[]={};
		magazines[]={};
		driverAction="ManActV3SDriver";
		cargoAction[]={"ManActV3SCoDriver","ManActCargo"};
		cargoIsCoDriver[]={1,0};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		threat[]={1,1,0.3};
		vehicleClass="Rebel Cars";

		class TransportMagazines
			{

			class _xx_AK47
				{
				magazine="AK47";
				count="30*1";
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count="10*1";
				};

			class _xx_PK
				{
				magazine="PK";
				count="5*1";
				};

			class _xx_LAWLauncher
				{
				magazine="LAWLauncher";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};

		class IndicatorSpeed
			{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-275;
			min=0;
			max="80 / 3.6";
			};

		class IndicatorRPM
			{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-275;
			min=0;
			max=1;
			};
		};

	class TruckV3SGRefuel:TruckV3SG
		{
		picture="iv3sfuel";
		vehicleClass="Rebel Support";
		icon="Fuel_move";
		displayName="$STR_DN_PV3S_FUEL";
		model="v3sfuel";
		transportSoldier=1;
		hiddenSelections[]={};
		typicalCargo[]={};
		};

	class TruckV3SGRepair:TruckV3SG
		{
		picture="iv3srepair";
		vehicleClass="Rebel Support";
		icon="Repair_move";
		displayName="$STR_DN_PV3S_REPAIR";
		model="v3srepair";
		transportSoldier=1;
		hiddenSelections[]={};
		typicalCargo[]={};
		};

	class TruckV3SGReammo:TruckV3SG
		{
		vehicleClass="Rebel Support";
		icon="Ammo_move";
		displayName="$STR_DN_PV3S_AMMO";
		transportSoldier=1;
		hiddenSelections[]={};
		typicalCargo[]={};
		};

	class UAZG:Car
		{
		scope=2;
		crew="SoldierGB";
		side=2;
		displayName="UAZG";
		nameSound="UAZ";
		accuracy=0.5;
		transportSoldier=3;
		transportAmmo=0;
		cost=25000;
		armor=20;
		model="guaz";
		picture="iuaz";
		weapons[]={};
		magazines[]={};
		typicalCargo[]={"Soldier","SoldierLAW"};
		threat[]={0.7,0.7,0.2};
		soundEngine[]={"Vehicles\uazloop",0.0316228,1.25};
		driverAction="ManActUAZDriver";
		cargoAction[]={"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[]={1,0};
		vehicleClass="Rebel Cars";

		class ViewPilot:ViewPilotBase
			{
			initAngleX=10;
			};
		};

	class SGUAZG:UAZG
		{
		vehicleClass="Rebel Support";
		displayName="UAZG Ambulance";
		model="sguaz";
		transportSoldier=2;
		attendant=1;
		cargoAction[]={"ManActM113Injured","ManActCargo"};
		cargoIsCoDriver[]={0,0};
		};
//////////////////////////////Support////////////////////////////////////////////
	class ReammoBoxGuer:ReammoBox
		{
		scope=2;
		accuracy=1000;
		displayName="$STR_DN_AMMO_CRATES_RES";

		class TransportMagazines
			{

			class _xx_AK47
				{
				magazine="AK47";
				count="30*1";
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count="10*1";
				};

			class _xx_PK
				{
				magazine="PK";
				count="5*1";
				};

			class _xx_LAWLauncher
				{
				magazine="LAWLauncher";
				count="3*1";
				};

			class _xx_GrenadeLauncher
				{
				magazine="GrenadeLauncher";
				count="3*1";
				};
			};
		};

	class AmmoBoxOUTGW:ReammoBoxGuer
		{
		model="hromada_beden";
		scope=2;
		accuracy=1000;
		displayName="$STR_DN_OUT_AMMO_CRATES_WP_RES";

		class TransportMagazines
			{

			class _xx_ak47
				{
				magazine="ak47";
				count=100;
				};

			class _xx_skorpionmag
				{
				magazine="skorpionmag";
				count=100;
				};

			class _xx_cz75mag
				{
				magazine="cz75mag";
				count=200;
				};

			class _xx_HandGrenade
				{
				magazine="HandGrenade";
				count=30;
				};
			};

		class TransportWeapons
			{

			class _xx_AK47
				{
				weapon="AK47";
				count=50;
				};

			class _xx_skorpion
				{
				weapon="skorpion";
				count=10;
				};

			class _xx_cz75
				{
				weapon="cz75";
				count=10;
				};
			};
		};