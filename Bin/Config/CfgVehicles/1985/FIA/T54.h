/*
Sources:
	http://en.wikipedia.org/wiki/T-54
*/
class FIA_T54 : Tank
{
	accuracy = ACCURACY_T54;
	maxspeed = 56;
	//weapons[]={"RHS_D10b","RHS_DShKT","RHS_PKT"};//TODO
	//magazines[]={"RHS_BR412","RHS_BK17","RHS_PKT","RHS_PKT","RHS_PKT","RHS_PKT","RHS_PKT","RHS_PKT","RHS_PKT","RHS_PKT","RHS_DShKT","RHS_DShKT","RHS_DShKT","RHS_DShKT"};//TODO
	side = SIDE_FIA;
	crew = "FIA_Crew";
	displayName="T-54";
	model = "\sjc_models\fia\t54.p3d";
	hiddenSelections[]={"w1","w2","w3"};
	scope=2;
	picture = "\sjc_images\vehicles\t54.paa";
	nameSound="t55";
	irscanner=1;
	laserscanner=0;
	laserscanrange=5000;
	armorStructural=2.0;
	transportSoldier=9;
	ejectdeadcargo=1;
	armor = 203;
	armorTurret=1;
	armorHull=0.75;
	cost = COST_T54;
	irScanRangeMax=800;
	gunnercansee=31;
	driverCanSee=31;
	//cargoAction[]={"ManActrhs_t55Cargo1","ManActrhs_t55Cargo2","ManActrhs_t55Cargo3","ManActrhs_t55Cargo4","ManActrhs_t55Cargo5","ManActrhs_t55Cargo6","ManActrhs_t55Cargo7","ManActrhs_t55Cargo8","ManActrhs_t55Cargo9"};//TODO
	gunnerOpticsModel="\sjc_optics\fia\t55.p3d";
	commanderOpticsModel="\sjc_optics\fia\t55.p3d";
	soundEnviron[]={"\sjc_sounds\vehicles\T55_treads.wss",1,1};
	soundEngine[]={"\sjc_sounds\vehicles\T55_engine.wss",1,1};
	soundGear[]={"\sjc_sounds\vehicles\tank_gear.wss",0.07,1};
	soundGetIn[]={"\sjc_sounds\vehicles\in.wss",0.05,1};
	soundGetOut[]={"\sjc_sounds\vehicles\out.wss",0.05,1};
	type=1;
	threat[]={THREAT_T54};
	
	class TurretBase
	{
		gunAxis="OsaHlavne";
		turretAxis="OsaVeze";
		soundServo[]={"\sjc_sounds\vehicles\turret_old.wss",0.1,1};
		gunBeg="usti hlavne";
		gunEnd="konec hlavne";
		minElev=-4;
		maxElev="+20";
		minTurn=-360;
		maxTurn="+360";
		body="OtocVez";
		gun="OtocHlaven";
	};
	
	class Turret : TurretBase
	{
	};
	
	class Animations
	{
		class recoil
		{
			animperiod=0.1;
			selection="rec";
			axis="osa_rec";
			angle0=0;
			angle1=0.01;
			type="rotation";
		};
		
		class suspension
		{
			animperiod=0.5;
			selection="RHS_Sus";
			axis="RHS_Sus_osa";
			angle0="-0.1";
			angle1=0.1;
			type="rotation";
		};
		
		class suspension2
		{
			animperiod=0.5;
			selection="RHS_Sus2";
			axis="RHS_Sus2_osa";
			angle0="-0.07";
			angle1=0.07;
			type="rotation";
		};
	};
	
	class EventHandlers
	{
		Init = "[_this select 0, 48] exec {\SJC_Scripts\vehicleTODO.sqs}";
	};

	/*class RHS_T55_StdEH//TODO
	{
		init="_this exec ""\RHS_T55Pack_Scripts\RAE_T55_Init.sqs""";
		hit="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T55Pack_Scripts\RAE_T55_throwOff.sqs""}; If(RHS_FctLoad)Then{_this exec ""\RHS_Misc\ArmorHit.sqs""}";
		incomingMissile="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T55Pack_Scripts\RAE_T55_throwOff.sqs""}";
		engine="if (_this select 1) then {(_this select 0) exec {\RHS_Misc\DKMM_RSC_Tank_Accel.sqs}}";
		fired="if (_this select 0 call RHS_countedCargo > 0) then {_this select 0 exec ""\RHS_T55Pack_Scripts\RAE_T55_throwOff.sqs""};_this exec ""\RHS_T55Pack_Scripts\RAE_T55_Shockdust.sqs""; If(RHS_FctLoad && RHS_T55_FctLoad)Then{_this call RHS_TankFired; (_this + [_this call RHS_Noid]) call RHS_T55_Fired}";			
		killed="If(RHS_FctLoad)Then{(_this+[250]) exec {\RHS_Misc\RAE_fire.sqs}}";
	};
	class RHS_T55_NoCargoEH
	{
		init="_this exec ""\RHS_T55Pack_Scripts\RAE_T55_Init.sqs""";
		hit="If(RHS_FctLoad)Then{_this exec ""\RHS_Misc\ArmorHit.sqs""}";
		fired="_this exec ""\RHS_T55Pack_Scripts\RAE_T55_Shockdust.sqs""; If(RHS_FctLoad && RHS_T55_FctLoad)Then{_this call RHS_TankFired; (_this + [_this call RHS_Noid]) call RHS_T55_Fired}";			
		engine="if (_this select 1) then {(_this select 0) exec {\RHS_Misc\DKMM_RSC_Tank_Accel.sqs}}";
		killed="If(RHS_FctLoad)Then{(_this+[250]) exec {\RHS_Misc\RAE_fire.sqs}}";
	};
	class EventHandlers:RHS_T55_StdEH
	{
	};*/
};