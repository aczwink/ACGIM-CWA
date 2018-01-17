class CfgGroups //TODO
{
	class West
	{
		name="$STR_WEST";

		class Armored
		{
			name="$STR_CFG_GRP_ARMORED";

			class M1Platoon
			{ 
				name="M1A2 SEP Abrams Platoon";

				class Unit0
				{
					side=1;
					vehicle="M1Abrams";
					rank="CAPTAIN";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=1;
					vehicle="M1Abrams";
					rank="Lieutnant";
					position[]={-20,0,0};
				};

				class Unit2
				{
					side=1;
					vehicle="M1Abrams";
					rank="Lieutnant";
					position[]={20,0,0};
				};

				class Unit3
				{
					side=1;
					vehicle="M1Abrams";
					rank="Corporal";
					position[]={40,0,0};
				};
			};

			class M60Platoon
			{
				name="M1A1 Abrams Platoon";

				class Unit0
				{
					side=1;
					vehicle="M60";
					rank="CAPTAIN";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=1;
					vehicle="M60";
					rank="Lieutnant";
					position[]={-20,0,0};
				};

				class Unit2
				{
					side=1;
					vehicle="M60";
					rank="Lieutnant";
					position[]={20,0,0};
				};

				class Unit3
				{
					side=1;
					vehicle="M60";
					rank="Corporal";
					position[]={40,0,0};
				};
			};
		};

		class Infantry
		{
			name="Army Infantry";

			class BasicInfantry
			{
				name="Basic Squad";

				class Unit0
				{
					side=1;
					vehicle="OfficerW";
					rank="Sergeant";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=1;
					vehicle="SoldierWB";
					rank="CORPORAL";
					position[]={3,0,0};
				};

				class Unit2
				{
					side=1;
					vehicle="SoldierWB";
					rank="CORPORAL";
					position[]={5,0,0};
				};

				class Unit3
				{
					side=1;
					vehicle="SoldierWG";
					rank="CORPORAL";
					position[]={7,0,0};
				};

				class Unit4
				{
					side=1;
					vehicle="SoldierWG";
					rank="CORPORAL";
					position[]={9,0,0};
				};

				class Unit5
				{
					side=1;
					vehicle="SoldierWMG";
					rank="CORPORAL";
					position[]={11,0,0};
				};

				class Unit6
				{
					side=1;
					vehicle="SoldierWMG";
					rank="CORPORAL";
					position[]={13,0,0};
				};

				class Unit7
				{
					side=1;
					vehicle="SoldierWMortar";
					rank="CORPORAL";
					position[]={15,0,0};
				};

				class Unit8
				{
					side=1;
					vehicle="SoldierWLAW";
					rank="CORPORAL";
					position[]={17,0,0};
				};

				class Unit9
				{
					side=1;
					vehicle="SoldierWLAW";
					rank="CORPORAL";
					position[]={19,0,0};
				};

				class Unit10
				{
					side=1;
					vehicle="SoldierWMedic";
					rank="Private";
					position[]={21,0,0};
				};

				class Unit11
				{
					side=1;
					vehicle="d4t_soldier_radioop";
					rank="Private";
					position[]={23,0,0};
				};
			};
		};
	};

	class East
	{
		name="$STR_EAST";

		class Armored
		{
			name="$STR_CFG_GRP_ARMORED";

			class T80Platoon
			{
				name="$STR_CFG_GRP_T80PLATOON";

				class Unit0
				{
					side=0;
					vehicle="T80";
					rank="CAPTAIN";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=0;
					vehicle="T80";
					rank="Lieutnant";
					position[]={-20,0,0};
				};

				class Unit2
				{
					side=0;
					vehicle="T80";
					rank="Lieutnant";
					position[]={20,0,0};
				};

				class Unit3
				{
					side=0;
					vehicle="T80";
					rank="Corporal";
					position[]={40,0,0};
				};
			};

			class T72Platoon
			{
				name="$STR_CFG_GRP_T72PLATOON";

				class Unit0
				{
					side=0;
					vehicle="T72";
					rank="CAPTAIN";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=0;
					vehicle="T72";
					rank="Lieutnant";
					position[]={-20,0,0};
				};

				class Unit2
				{
					side=0;
					vehicle="T72";
					rank="Lieutnant";
					position[]={20,0,0};
				};

				class Unit3
				{
					side=0;
					vehicle="T72";
					rank="Corporal";
					position[]={40,0,0};
				};
			};
		};

		class Infantry
		{
			name="$STR_CFG_GRP_INFANTRY";

			class BasicInfantry
			{
				name="$STR_CFG_GRP_INFANTRY_BASIC";

				class Unit0
				{
					side=0;
					vehicle="OfficerE";
					rank="Sergeant";
					position[]={0,5,0};
				};

				class Unit1
				{
					side=0;
					vehicle="SoldierEMG";
					rank="CORPORAL";
					position[]={3,0,0};
				};

				class Unit2
				{
					side=0;
					vehicle="SoldierEG";
					rank="CORPORAL";
					position[]={5,0,0};
				};

				class Unit3
				{
					side=0;
					vehicle="SoldierEB";
					rank="CORPORAL";
					position[]={7,0,0};
				};

				class Unit4
				{
					side=0;
					vehicle="SoldierELAW";
					rank="CORPORAL";
					position[]={9,0,0};
				};

				class Unit5
				{
					side=0;
					vehicle="SoldierEMG";
					rank="Private";
					position[]={11,0,0};
				};

				class Unit6
				{
					side=0;
					vehicle="SoldierEB";
					rank="Private";
					position[]={13,0,0};
				};

				class Unit7
				{
					side=0;
					vehicle="SoldierEB";
					rank="Private";
					position[]={15,0,0};
				};

				class Unit8
				{
					side=0;
					vehicle="SoldierEB";
					rank="Private";
					position[]={17,0,0};
				};
			};
		};
	};
};