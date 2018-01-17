class RadioProtocol
{
	access=3;

	class Default
	{
		priority=0;
		timeout=1000.0;
	};

	class Report
	{
		priority=100;
		timeout=30.0;
	};

	class PriorityReport
	{
		priority=200;
		timeout=60.0;
	};

	class Confirmation
	{
		priority=300;
		timeout=3.0;
	};

	class Completition
	{
		priority=400;
		timeout=5.0;
	};

	class JoinCompleted
	{
		priority=400;
		timeout=30.0;
	};

	class Failure
	{
		priority=500;
		timeout=30.0;
	};

	class Notify
	{
		priority=600;
		timeout=5.0;
	};

	class Detected
	{
		priority=700;
		timeout=5.0;
	};

	class NormalCommand
	{
		priority=800;
		timeout=1000.0;
	};

	class CriticalReport
	{
		priority=850;
		timeout=60.0;
	};

	class UrgentCommand
	{
		priority=900;
		timeout=1000.0;
	};

	class UICommand
	{
		priority=1000;
		timeout=1000.0;
	};

	class Design
	{
		priority=950;
		timeout=1000.0;
	};

	class SentUnitKilled:CriticalReport
	{
		versions[]={"Version1",0.5,"Version2",0.3,"Version3",0.2};

		class Version1
		{
			text="$STR_SENT_UNIT_KILLED_1";
			Speech9[]={"%1.1","IsDown"};
			Speech5[]={"%1.1","IsDown"};
		};

		class Version2
		{
			text="$STR_SENT_UNIT_KILLED_2";
			Speech9[]={"Damned","%1.1","IsDown"};
			Speech5[]={"Damned","%1.1","IsDown"};
		};

		class Version3
		{
			text="$STR_SENT_UNIT_KILLED_3";
			Speech9[]={"OhNo","%1.1","IsDown"};
			Speech5[]={"OhNo","%1.1","IsDown"};
		};
	};

	class SentSupportAskHeal:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_ASK_HEAL_1";
			Speech9[]={"needMedic","Position","%1"};
			Speech5[]={"needMedic","Position","%1"};
		};
	};

	class SentSupportAskRepair:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_ASK_REPAIR_1";
			Speech9[]={"needRepairs","Position","%1"};
			Speech5[]={"needRepairs","Position","%1"};
		};
	};

	class SentSupportAskRefuel:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_ASK_REFUEL_1";
			Speech9[]={"needFuel","Position","%1"};
			Speech5[]={"needFuel","Position","%1"};
		};
	};

	class SentSupportAskRearm:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_ASK_REARM_1";
			Speech9[]={"needAmmo","Position","%1"};
			Speech5[]={"needAmmo","Position","%1"};
		};
	};

	class SentSupportConfirm:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_CONFIRM_1";
			Speech9[]={"supporting","Position","%2"};
			Speech5[]={"supporting","Position","%2"};
		};
	};

	class SentSupportReady:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_READY_1";
			Speech9[]={"Position","%2","Supporting","%1"};
			Speech5[]={"Position","%2","Supporting","%1"};
		};
	};

	class SentSupportDone:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_SUPPORT_DONE_1";
			Speech9[]={"Ready"};
			Speech5[]={"Ready"};
		};
	};

	class SentHealthCritical:CriticalReport
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_HEALTH_CRITICAL_1";
			Speech9[]={"%1.1","Injured"};
			Speech5[]={"%1.1","Injured"};
		};
	};

	class SentDammageCritical:CriticalReport
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_DAMMAGE_CRITICAL_1";
			Speech9[]={"%1.1","statusRed"};
			Speech5[]={"%1.1","statusRed"};
		};
	};

	class SentFuelCritical:CriticalReport
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FUEL_CRITICAL_1";
			Speech9[]={"%1.1","outOfFuel"};
			Speech5[]={"%1.1","outOfFuel"};
		};
	};

	class SentFuelLow:Report
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FUEL_LOW_1";
			Speech9[]={"%1.1","FuelLow"};
			Speech5[]={"%1.1","FuelLow"};
		};
	};

	class SentAmmoCritical:CriticalReport
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_AMMO_CRITICAL_1";
			Speech9[]={"%1.1","outOfAmmo"};
			Speech5[]={"%1.1","outOfAmmo"};
		};
	};

	class SentAmmoLow:Report
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_AMMO_LOW_1";
			Speech9[]={"%1.1","ammoLow"};
			Speech5[]={"%1.1","ammoLow"};
		};
	};

	class SentReportPosition:Report
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_REPORT_POSITION_1";
			Speech9[]={"%1","Position","%2"};
			Speech5[]={"%1","Position","%2"};
		};
	};

	class SentIsLeader:CriticalReport
	{
		versions[]={"Version1",0.5,"Version2",0.5};

		class Version1
		{
			text="$STR_SENT_IS_LEADER_1";
			Speech9[]={"%1","TakingCommand"};
			Speech5[]={"%1","TakingCommand"};
		};

		class Version2
		{
			text="$STR_SENT_IS_LEADER_2";
			Speech9[]={"ThisIs","%1","TakingCommand","ISayAgain","%1","TakingCommand","Out"};
			Speech5[]={"ThisIs","%1","TakingCommand","ISayAgain","%1","TakingCommand","Out"};
		};
	};

	class SentCommandCompleted:Completition
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_COMMAND_COMPLETED_1";
			Speech9[]={"%1","Ready"};
			Speech5[]={"%1","Ready"};
		};

		class Version2
		{
			text="$STR_SENT_COMMAND_COMPLETED_2";
			Speech9[]={"%1","Waiting"};
			Speech5[]={"%1","Waiting"};
		};
	};

	class SentJoinCompleted:JoinCompleted
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_COMMAND_COMPLETED_1";
			Speech9[]={"%1","Ready"};
			Speech5[]={"%1","Ready"};
		};
	};

	class SentFireReady:Completition
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FIRE_READY_1";
			Speech9[]={"%1","ReadyToFire"};
			Speech5[]={"%1","ReadyToFire"};
		};
	};

	class SentFireNegative:Completition
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FIRE_NEGATIVE_1";
			Speech9[]={"%1","CannotFire"};
			Speech5[]={"%1","CannotFire"};
		};
	};

	class SentCommandFailed:Failure
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_COMMAND_FAILED_1";
			Speech9[]={"%1","Negative"};
			Speech5[]={"%1","Negative"};
		};
	};

	class SentDestinationUnreacheable:Failure
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_DESTINATION_UNREACHEABLE_1";
			Speech9[]={"%1","canNotGetThere"};
			Speech5[]={"%1","canNotGetThere"};
		};
	};

	class SentEnemyDetected:Detected
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_ENEMY_DETECTED_1";
			Speech9[]={"%3","%4","%2","%5"};
			Speech5[]={"%3","%4","%2","%5"};
		};

		class Version2
		{
			text="$STR_SENT_ENEMY_DETECTED_2";
			Speech9[]={"%3","%2","%5"};
			Speech5[]={"%3","%2","%5"};
		};
	};

	class SentEnemyDetectedFar:Detected
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_ENEMY_DETECTED_FAR_1";
			Speech9[]={"%1","%3","%4","%2","%5"};
			Speech5[]={"%1","%3","%4","%2","%5"};
		};

		class Version2
		{
			text="$STR_SENT_ENEMY_DETECTED_FAR_2";
			Speech9[]={"%1","%3","%2","%5"};
			Speech5[]={"%1","%3","%2","%5"};
		};
	};

	class SentEnemyDetectedSimple:Detected
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_ENEMY_DETECTED_SIMPLE_1";
			Speech9[]={"%3","%2","%5"};
			Speech5[]={"%3","%2","%5"};
		};
	};

	class SentEnemyDetectedSimpleFar:Detected
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_ENEMY_DETECTED_SIMPLE_FAR_1";
			Speech9[]={"%1","%3","%2"};
			Speech5[]={"%1","%3","%2"};
		};
	};

	class SentObjectDestroyed:Completition
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_OBJECT_DESTROYED_1";
			Speech9[]={"iVeGotHim"};
			Speech5[]={"iVeGotHim"};
		};

		class Version2
		{
			text="$STR_SENT_OBJECT_DESTROYED_2";
			Speech9[]={"%2","isHistory"};
			Speech5[]={"%2","isHistory"};
		};
	};

	class SentObjectDestroyedUnknown:Completition
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_OBJECT_DESTROYED_UNKNOWN_1";
			Speech9[]={"iVeGotHim"};
			Speech5[]={"iVeGotHim"};
		};
	};

	class SentContact:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CONTACT_1";
			Speech9[]={"contact"};
			Speech5[]={"contact"};
		};
	};

	class SentUnderFire:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_UNDER_FIRE_1";
			Speech9[]={"underFire"};
			Speech5[]={"underFire"};
		};
	};

	class SentClear:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CLEAR_1";
			Speech9[]={"clear"};
			Speech5[]={"clear"};
		};
	};

	class SentRepeatCommand:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_REPEAT_COMMAND_1";
			Speech9[]={"repeat"};
			Speech5[]={"repeat"};
		};
	};

	class SentWhereAreYou:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_WHERE_ARE_YOU_1";
			Speech9[]={"whereAreYou"};
			Speech5[]={"whereAreYou"};
		};
	};

	class SentReturnToFormation:NormalCommand
	{
		versions[]={"Version1",0.4,"Version2",0.6};

		class Version1
		{
			text="$STR_SENT_RETURN_TO_FORMATION_1";
			Speech9[]={"%1","returnToFormation"};
			Speech5[]={"%1","returnToFormation"};
		};

		class Version2
		{
			text="$STR_SENT_RETURN_TO_FORMATION_2";
			Speech9[]={"%1","fallBackIntoFormation"};
			Speech5[]={"%1","fallBackIntoFormation"};
		};
	};

	class SentFormColumn:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_COLUMN_1";
			Speech9[]={"FormColumn"};
			Speech5[]={"FormColumn"};
		};
	};

	class SentFormStaggeredColumn:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_STAGGERED_COLUMN_1";
			Speech9[]={"FormStageredColumn"};
			Speech5[]={"FormStageredColumn"};
		};
	};

	class SentFormWedge:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_WEDGE_1";
			Speech9[]={"FormWedge"};
			Speech5[]={"FormWedge"};
		};
	};

	class SentFormEcholonLeft:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_ECHOLON_LEFT_1";
			Speech9[]={"FormEchelonLeft"};
			Speech5[]={"FormEchelonLeft"};
		};
	};

	class SentFormEcholonRight:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_ECHOLON_RIGHT_1";
			Speech9[]={"FormEchelonRight"};
			Speech5[]={"FormEchelonRight"};
		};
	};

	class SentFormVee:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_VEE_1";
			Speech9[]={"FormVee"};
			Speech5[]={"FormVee"};
		};
	};

	class SentFormLine:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_LINE_1";
			Speech9[]={"FormLine"};
			Speech5[]={"FormLine"};
		};
	};

	class SentBehaviourCareless:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_BEHAVIOUR_CARELESS_1";
			Speech9[]={"%1.1","Careless"};
			Speech5[]={"%1.1","Careless"};
		};
	};

	class SentBehaviourSafe:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_BEHAVIOUR_SAFE_1";
			Speech9[]={"%1.1","AtEase"};
			Speech5[]={"%1.1","AtEase"};
		};
	};

	class SentBehaviourAware:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_BEHAVIOUR_AWARE_1";
			Speech9[]={"%1.1","StayAlert"};
			Speech5[]={"%1.1","StayAlert"};
		};
	};

	class SentBehaviourCombat:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_BEHAVIOUR_COMBAT_1";
			Speech9[]={"%1.1","Danger"};
			Speech5[]={"%1.1","Danger"};
		};
	};

	class SentBehaviourStealth:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_BEHAVIOUR_STEALTH_1";
			Speech9[]={"%1.1","stealth"};
			Speech5[]={"%1.1","stealth"};
		};
	};

	class SentOpenFire:NormalCommand
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_OPEN_FIRE_1";
			Speech9[]={"%1.1","FireAtWill"};
			Speech5[]={"%1.1","FireAtWill"};
		};

		class Version2
		{
			text="$STR_SENT_OPEN_FIRE_2";
			Speech9[]={"%1.1","WeaponsFree"};
			Speech5[]={"%1.1","WeaponsFree"};
		};
	};

	class SentOpenFireInCombat:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_OPEN_FIRE_IN_COMBAT_1";
			Speech9[]={"%1.1","GoGoGo"};
			Speech5[]={"%1.1","GoGoGo"};
		};
	};

	class SentHoldFire:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_HOLD_FIRE_1";
			Speech9[]={"%1.1","HoldFire"};
			Speech5[]={"%1.1","HoldFire"};
		};
	};

	class SentHoldFireInCombat:UrgentCommand
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_HOLD_FIRE_IN_COMBAT_1";
			Speech9[]={"%1.1","CeaseFire"};
			Speech5[]={"%1.1","CeaseFire"};
		};

		class Version2
		{
			text="$STR_SENT_HOLD_FIRE_IN_COMBAT_2";
			Speech9[]={"%1.1","DontFire"};
			Speech5[]={"%1.1","DontFire"};
		};
	};

	class SentCeaseFireInsideGroup:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CEASE_FIRE_INSIDE_GROUP_1";
			Speech9[]={"%1.1","CeaseFire"};
			Speech5[]={"%1.1","CeaseFire"};
		};
	};

	class SentCeaseFire:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CEASE_FIRE_1";
			Speech9[]={"%2.1","CeaseFire"};
			Speech5[]={"%2.1","CeaseFire"};
		};
	};

	class SentLooseFormation:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_LOOSE_FORMATION_1";
			Speech9[]={"%1.1","engageAtWill"};
			Speech5[]={"%1.1","engageAtWill"};
		};
	};

	class SentKeepFormation:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_KEEP_FORMATION_1";
			Speech9[]={"%1.1","disengage"};
			Speech5[]={"%1.1","disengage"};
		};
	};

	class SentUnitPosDown:NormalCommand
	{
		versions[]={"Version1",0.3,"Version2",0.3,"Version3",0.4};

		class Version1
		{
			text="$STR_SENT_UNIT_POS_DOWN_1";
			Speech9[]={"%1.1","goProne"};
			Speech5[]={"%1.1","goProne"};
		};

		class Version2
		{
			text="$STR_SENT_UNIT_POS_DOWN_2";
			Speech9[]={"%1.1","hitTheDirt"};
			Speech5[]={"%1.1","hitTheDirt"};
		};

		class Version3
		{
			text="$STR_SENT_UNIT_POS_DOWN_3";
			Speech9[]={"%1.1","getDown"};
			Speech5[]={"%1.1","getDown"};
		};
	};

	class SentUnitPosUp:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_UNIT_POS_UP_1";
			Speech9[]={"%1.1","StandUp"};
			Speech5[]={"%1.1","StandUp"};
		};
	};

	class SentUnitPosAuto:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_UNIT_POS_AUTO_1";
			Speech9[]={"%1.1","KeepLow"};
			Speech5[]={"%1.1","KeepLow"};
		};
	};

	class SentFormPosAdvance:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_POS_ADVANCE_1";
			Speech9[]={"%1.1","Advance"};
			Speech5[]={"%1.1","Advance"};
		};
	};

	class SentFormPosStayBack:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_POS_STAY_BACK_1";
			Speech9[]={"%1.1","StayBack"};
			Speech5[]={"%1.1","StayBack"};
		};
	};

	class SentFormPosFlankLeft:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_POS_FLANK_LEFT_1";
			Speech9[]={"%1.1","FlankLeft"};
			Speech5[]={"%1.1","FlankLeft"};
		};
	};

	class SentFormPosFlankRight:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FORM_POS_FLANK_RIGHT_1";
			Speech9[]={"%1.1","FlankRight"};
			Speech5[]={"%1.1","FlankRight"};
		};
	};

	class SentReportStatus:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_REPORT_STATUS_1";
			Speech9[]={"%1.1","ReportStatus"};
			Speech5[]={"%1.1","ReportStatus"};
		};
	};

	class SentTeam:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_TEAM_1";
			Speech9[]={"%1.1","Are","%2"};
			Speech5[]={"%1.1","Are","%2"};
		};
	};

	class SentWatchTgt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_WATCH_TGT_1";
			Speech9[]={"%1.1","Watch","%2"};
			Speech5[]={"%1.1","Watch","%2"};
		};
	};

	class SentWatchDir:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_WATCH_DIR_1";
			Speech9[]={"%1.1","Watch","%2"};
			Speech5[]={"%1.1","Watch","%2"};
		};
	};

	class SentWatchPos:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_WATCH_POS_1";
			Speech9[]={"%1.1","Watch","%2"};
			Speech5[]={"%1.1","Watch","%2"};
		};
	};

	class SentWatchAround:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_WATCH_AROUND_1";
			Speech9[]={"%1.1","scanHorizon"};
			Speech5[]={"%1.1","scanHorizon"};
		};
	};

	class SentNoTarget:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_NO_TARGET_1";
			Speech9[]={"%1.1","NoTarget"};
			Speech5[]={"%1.1","NoTarget"};
		};
	};

	class SentTarget:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_TARGET_1";
			Speech9[]={"%1","Target","%2"};
			Speech5[]={"%1","Target","%2"};
		};
	};

	class SentEngage:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_ENGAGE_1";
			Speech9[]={"%1","Engage","%2"};
			Speech5[]={"%1","Engage","%2"};
		};
	};

	class SentFire:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FIRE_1";
			Speech9[]={"%1","FireAt","%2"};
			Speech5[]={"%1","FireAt","%2"};
		};
	};

	class SentEngageNoTarget:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_ENGAGE_NO_TARGET_1";
			Speech9[]={"%1","Engage"};
			Speech5[]={"%1","Engage"};
		};
	};

	class SentFireNoTarget:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_FIRE_NO_TARGET_1";
			Speech9[]={"%1","Fire"};
			Speech5[]={"%1","Fire"};
		};
	};

	class SentCmdMove:NormalCommand
	{
		versions[]={"Version1",0.5,"Version2",0.5};

		class Version1
		{
			text="$STR_SENT_CMD_MOVE_1";
			Speech9[]={"%1.1","MoveTo","%2","XMIT","%3"};
			Speech5[]={"%1.1","MoveTo","%2","XMIT","%3"};
		};

		class Version2
		{
			text="$STR_SENT_CMD_MOVE_2";
			Speech9[]={"%1.1","GoTo","%2","XMIT","%3"};
			Speech5[]={"%1.1","GoTo","%2","XMIT","%3"};
		};
	};

	class SentCmdMoveFar:NormalCommand
	{
		versions[]={"Version1",0.5,"Version2",0.5};

		class Version1
		{
			text="$STR_SENT_CMD_MOVE_FAR_1";
			Speech9[]={"%1.1","MoveTo","%2"};
			Speech5[]={"%1.1","MoveTo","%2"};
		};

		class Version2
		{
			text="$STR_SENT_CMD_MOVE_FAR_2";
			Speech9[]={"%1.1","GoTo","%2"};
			Speech5[]={"%1.1","GoTo","%2"};
		};
	};

	class SentCmdMoveTo:NormalCommand
	{
		versions[]={"Version1",0.5,"Version2",0.5};

		class Version1
		{
			text="$STR_SENT_CMD_MOVE_TO_1";
			Speech9[]={"%1.1","MoveTo","%2","%3"};
			Speech5[]={"%1.1","MoveTo","%2","%3"};
		};

		class Version2
		{
			text="$STR_SENT_CMD_MOVE_TO_2";
			Speech9[]={"%1.1","GoTo","%2","%3"};
			Speech5[]={"%1.1","GoTo","%2","%3"};
		};
	};

	class SentCmdMoveNear:NormalCommand
	{
		versions[]={"Version1",1.0};

		class Version1
		{
			text="$STR_SENT_CMD_MOVE_NEAR_1";
			Speech9[]={"%1.1","moveTo","%2","%3"};
			Speech5[]={"%1.1","moveTo","%2","%3"};
		};
	};

	class SentCmdHeal:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_HEAL_1";
			Speech9[]={"%1.1","HealAt","%2","%3"};
			Speech5[]={"%1.1","HealAt","%2","%3"};
		};
	};

	class SentCmdHealFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_HEAL_FAR_1";
			Speech9[]={"%1.1","HealAt","%2"};
			Speech5[]={"%1.1","HealAt","%2"};
		};
	};

	class SentCmdHealAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_HEAL_AT_1";
			Speech9[]={"%1.1","GoTo","%2","%3"};
			Speech5[]={"%1.1","GoTo","%2","%3"};
		};
	};

	class SentCmdRepair:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REPAIR_1";
			Speech9[]={"%1.1","RepairAt","%2","%3"};
			Speech5[]={"%1.1","RepairAt","%2","%3"};
		};
	};

	class SentCmdRepairFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REPAIR_FAR_1";
			Speech9[]={"%1.1","RepairAt","%2"};
			Speech5[]={"%1.1","RepairAt","%2"};
		};
	};

	class SentCmdRepairAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REPAIR_AT_1";
			Speech9[]={"%1.1","RepairAt","%2","%3"};
			Speech5[]={"%1.1","RepairAt","%2","%3"};
		};
	};

	class SentCmdRefuel:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REFUEL_1";
			Speech9[]={"%1.1","RefuelAt","%2","%3"};
			Speech5[]={"%1.1","RefuelAt","%2","%3"};
		};
	};

	class SentCmdRefuelFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REFUEL_FAR_1";
			Speech9[]={"%1.1","RefuelAt","%2"};
			Speech5[]={"%1.1","RefuelAt","%2"};
		};
	};

	class SentCmdRefuelAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REFUEL_AT_1";
			Speech9[]={"%1.1","RefuelAt","%2","%3"};
			Speech5[]={"%1.1","RefuelAt","%2","%3"};
		};
	};

	class SentCmdRearm:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REARM_1";
			Speech9[]={"%1.1","RearmAt","%2","%3"};
			Speech5[]={"%1.1","RearmAt","%2","%3"};
		};
	};

	class SentCmdRearmFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REARM_FAR_1";
			Speech9[]={"%1.1","RearmAt","%2"};
			Speech5[]={"%1.1","RearmAt","%2"};
		};
	};

	class SentCmdRearmAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_REARM_AT_1";
			Speech9[]={"%1.1","RearmAt","%3"};
			Speech5[]={"%1.1","RearmAt","%3"};
		};
	};

	class SentCmdSupport:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_SUPPORT_1";
			Speech9[]={"%1.1","supporting","%2","%3"};
			Speech5[]={"%1.1","supporting","%2","%3"};
		};
	};

	class SentCmdSupportFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_SUPPORT_FAR_1";
			Speech9[]={"%1.1","supporting","%2"};
			Speech5[]={"%1.1","supporting","%2"};
		};
	};

	class SentCmdSupportAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_SUPPORT_AT_1";
			Speech9[]={"%1.1","supporting","%2","%3"};
			Speech5[]={"%1.1","supporting","%2","%3"};
		};
	};

	class SentCmdTakeWeapon:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_WEAPON_1";
			Speech9[]={"%1.1","TakeWeaponFrom","%2","%3"};
			Speech5[]={"%1.1","TakeWeaponFrom","%2","%3"};
		};
	};

	class SentCmdTakeWeaponFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_WEAPON_FAR_1";
			Speech9[]={"%1.1","TakeWeaponFrom","%2"};
			Speech5[]={"%1.1","TakeWeaponFrom","%2"};
		};
	};

	class SentCmdTakeWeaponAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_WEAPON_AT_1";
			Speech9[]={"%1.1","TakeWeaponFrom","%2","%3"};
			Speech5[]={"%1.1","TakeWeaponFrom","%2","%3"};
		};
	};

	class SentCmdTakeMagazine:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_MAGAZINE_1";
			Speech9[]={"%1.1","TakeMagazineFrom","%2","%3"};
			Speech5[]={"%1.1","TakeMagazineFrom","%2","%3"};
		};
	};

	class SentCmdTakeMagazineFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_MAGAZINE_FAR_1";
			Speech9[]={"%1.1","TakeMagazineFrom","%2"};
			Speech5[]={"%1.1","TakeMagazineFrom","%2"};
		};
	};

	class SentCmdTakeMagazineAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_TAKE_MAGAZINE_AT_1";
			Speech9[]={"%1.1","TakeMagazineFrom","%2","%3"};
			Speech5[]={"%1.1","TakeMagazineFrom","%2","%3"};
		};
	};

	class SentCmdAction:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_ACTION_1";
			Speech9[]={};
			Speech5[]={};
		};
	};

	class SentCmdActionFar:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_ACTION_FAR_1";
			Speech9[]={};
			Speech5[]={};
		};
	};

	class SentCmdActionAt:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_ACTION_AT_1";
			Speech9[]={};
			Speech5[]={};
		};
	};

	class SentCmdFollowMe:UrgentCommand
	{
		versions[]={"Version1",0.4,"Version2",0.6};

		class Version1
		{
			text="$STR_SENT_CMD_FOLLOW_ME_1";
			Speech9[]={"%1.1","returnToFormation"};
			Speech5[]={"%1.1","returnToFormation"};
		};

		class Version2
		{
			text="$STR_SENT_CMD_FOLLOW_ME_2";
			Speech9[]={"%1.1","fallBackIntoFormation"};
			Speech5[]={"%1.1","fallBackIntoFormation"};
		};
	};

	class SentCmdFollow:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_FOLLOW_1";
			Speech9[]={"%1.1","Follow","%2.1"};
			Speech5[]={"%1.1","Follow","%2.1"};
		};
	};

	class SentCmdAttack:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_ATTACK_1";
			Speech9[]={"%1.1","Attack","%2"};
			Speech5[]={"%1.1","Attack","%2"};
		};
	};

	class SentAttackNoTarget:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_ATTACK_NO_TARGET_1";
			Speech9[]={"%1.1","Attack"};
			Speech5[]={"%1.1","Attack"};
		};
	};

	class SentCmdFire:UrgentCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_FIRE_1";
			Speech9[]={"%1.1","FireAt","%2"};
			Speech5[]={"%1.1","FireAt","%2"};
		};
	};

	class SentCmdGetIn:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_1";
			Speech9[]={"%1.1","GetIn","%2"};
			Speech5[]={"%1.1","GetIn","%2"};
		};
	};

	class SentCmdGetInCommander:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_COMMANDER_1";
			Speech9[]={"%1.1","Commander","GetIn","%2"};
			Speech5[]={"%1.1","Commander","GetIn","%2"};
		};
	};

	class SentCmdGetInDriver:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_DRIVER_1";
			Speech9[]={"%1.1","Driver","GetIn","%2"};
			Speech5[]={"%1.1","Driver","GetIn","%2"};
		};
	};

	class SentCmdGetInPilot:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_PILOT_1";
			Speech9[]={"%1.1","Pilot","GetIn","%2"};
			Speech5[]={"%1.1","Pilot","GetIn","%2"};
		};
	};

	class SentCmdGetInGunner:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_GUNNER_1";
			Speech9[]={"%1.1","Gunner","GetIn","%2"};
			Speech5[]={"%1.1","Gunner","GetIn","%2"};
		};
	};

	class SentCmdGetInCargo:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETIN_CARGO_1";
			Speech9[]={"%1.1","Board","%2"};
			Speech5[]={"%1.1","Board","%2"};
		};
	};

	class SentCmdGetOut:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_GETOUT_1";
			Speech9[]={"%1.1","Disembark"};
			Speech5[]={"%1.1","Disembark"};
		};
	};

	class SentCmdStop:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_STOP_1";
			Speech9[]={"%1.1","halt"};
			Speech5[]={"%1.1","halt"};
		};
	};

	class SentCmdExpect:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_EXPECT_1";
			Speech9[]={"%1.1","WaitForMe"};
			Speech5[]={"%1.1","WaitForMe"};
		};
	};

	class SentCmdHide:NormalCommand
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CMD_HIDE_1";
			Speech9[]={"%1.1","TakeCover"};
			Speech5[]={"%1.1","TakeCover"};
		};
	};

	class SentNotifyAttack:Notify
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_NOTIFY_ATTACK_1";
			Speech9[]={"%1.1","Engaging"};
			Speech5[]={"%1.1","Engaging"};
		};
	};

	class SentNotifySupport:Notify
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_NOTIFY_SUPPORT_1";
			Speech9[]={"%1.1","supporting"};
			Speech5[]={"%1.1","supporting"};
		};
	};

	class SentConfirmPrivate:Confirmation
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CONFIRM_PRIVATE_1";
			Speech9[]={"Roger"};
			Speech5[]={"Roger"};
		};
	};

	class SentConfirmMove:Confirmation
	{
		versions[]={"Version1",0.6,"Version2",0.2,"Version3",0.2};

		class Version1
		{
			text="$STR_SENT_CONFIRM_MOVE_1";
			Speech9[]={"Roger"};
			Speech5[]={"Roger"};
		};

		class Version2
		{
			text="$STR_SENT_CONFIRM_MOVE_2";
			Speech9[]={"movingOn"};
			Speech5[]={"movingOn"};
		};

		class Version3
		{
			text="$STR_SENT_CONFIRM_MOVE_3";
			Speech9[]={"OnTheWay"};
			Speech5[]={"OnTheWay"};
		};
	};

	class SentConfirmAttack:Confirmation
	{
		versions[]={"Version1",0.5,"Version2",0.25,"Version3"};

		class Version1
		{
			text="$STR_SENT_CONFIRM_ATTACK_1";
			Speech9[]={"IAmOnHim"};
			Speech5[]={"IAmOnHim"};
		};

		class Version2
		{
			text="$STR_SENT_CONFIRM_ATTACK_2";
			Speech9[]={"Roger"};
			Speech5[]={"Roger"};
		};

		class Version3
		{
			text="$STR_SENT_CONFIRM_ATTACK_3";
			Speech9[]={"OnTheWay"};
			Speech5[]={"OnTheWay"};
		};
	};

	class SentConfirmOther:Confirmation
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_CONFIRM_OTHER_1";
			Speech9[]={"Roger"};
			Speech5[]={"Roger"};
		};
	};

	class VehicleMove
	{
		versions[]={"Version1",0.5,"Version2"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_MOVE_1";
			Speech9[]={"MoveTo","%1","XMIT","%2"};
			Speech5[]={"MoveTo","%1","XMIT","%2"};
		};

		class Version2
		{
			text="$STR_SENT_VEHICLE_MOVE_2";
			Speech9[]={"GoTo","%1","XMIT","%2"};
			Speech5[]={"GoTo","%1","XMIT","%2"};
		};
	};

	class VehicleJoin
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_JOIN_1";
			Speech9[]={"KeepFormation"};
			Speech5[]={"KeepFormation"};
		};
	};

	class VehicleFire
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_FIRE_1";
			Speech9[]={"FireAt","%1"};
			Speech5[]={"FireAt","%1"};
		};
	};

	class VehicleTarget
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_TARGET_1";
			Speech9[]={"Target","%1","XMIT","%2"};
			Speech5[]={"Target","%1","XMIT","%2"};
		};
	};

	class VehicleNoTarget
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_NO_TARGET_1";
			Speech9[]={"NoTarget"};
			Speech5[]={"NoTarget"};
		};
	};

	class VehicleCeaseFire
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_CEASE_FIRE_1";
			Speech9[]={"CeaseFire"};
			Speech5[]={"CeaseFire"};
		};
	};

	class VehicleForward
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_FORWARD_1";
			Speech9[]={"XMIT","Forward"};
			Speech5[]={"XMIT","Forward"};
		};
	};

	class VehicleStop
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_STOP_1";
			Speech9[]={"XMIT","Halt"};
			Speech5[]={"XMIT","Halt"};
		};
	};

	class VehicleBackward
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_BACKWARD_1";
			Speech9[]={"XMIT","reverse"};
			Speech5[]={"XMIT","reverse"};
		};
	};

	class VehicleFaster
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_FASTER_1";
			Speech9[]={"XMIT","Fast"};
			Speech5[]={"XMIT","Fast"};
		};
	};

	class VehicleSlower
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_SLOWER_1";
			Speech9[]={"XMIT","Slow"};
			Speech5[]={"XMIT","Slow"};
		};
	};

	class VehicleLeft
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_LEFT_1";
			Speech9[]={"XMIT","Left"};
			Speech5[]={"XMIT","Left"};
		};
	};

	class VehicleRight
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_RIGHT_1";
			Speech9[]={"XMIT","Right"};
			Speech5[]={"XMIT","Right"};
		};
	};

	class VehicleDirectFire
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_DIRECT_FIRE_1";
			Speech9[]={"Fire"};
			Speech5[]={"Fire"};
		};
	};

	class VehicleLoad
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_LOAD_1";
			Speech9[]={"%1"};
			Speech5[]={"%1"};
		};
	};

	class VehicleAzimut
	{
		versions[]={"Version1"};

		class Version1
		{
			text="$STR_SENT_VEHICLE_AZIMUT_1";
			Speech9[]={"%1"};
			Speech5[]={"%1"};
		};
	};

	class VehicleFireFailed
	{
		versions[]={"Version1",0.5,"Version2",0.5};

		class Version1
		{
			text="$STR_SENT_VEHICLE_FIRE_FAILED_1";
			Speech9[]={"Negative"};
			Speech5[]={"Negative"};
		};

		class Version2
		{
			text="$STR_SENT_VEHICLE_FIRE_FAILED_2";
			Speech9[]={"CannotFire"};
			Speech5[]={"CannotFire"};
		};
	};
};