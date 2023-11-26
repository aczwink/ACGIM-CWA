#define VEH_DIE_CONN(Name,anim,time) \
			class Name##Dying: DefaultDie \
			{ \
				actions = NoActions; \
				file=anim##smrt.rtm; \
				speed=-time; \
				looped=false; \
				soundEnabled=false; \
				connectFrom[]={Name,1}; \
			}; \
			class Name##Dead: Name##Dying \
			{ \
				actions = DeadActions; \
				file=anim##smrt2.rtm; \
				speed=SPEED_STATIC; \
				terminal = true; \
				connectFrom[]={Name##Dying,1}; \
				connectTo[]={DeadState,1}; \
			}
		#define VEHIN_MOVES_VAR(Name,anim,vartime) \
			class Name: Driver \
			{ \
				file=anim##stat.rtm; \
				speed=SPEED_STATIC; \
				looped=true; \
				variantsAI[]= {Name##V1,0.7,Name};\
				interpolateWith[]={Name##V1,0.5};\
				equivalentTo=Name; \
				interpolationSpeed=1; \
				connectTo[]={Name##Dying,1}; \
			} \
			class Name##V1: Name \
			{ \
				file=anim.rtm; \
				speed=-vartime; \
				looped=true; \
			}
		#define VEH_MOVES_VAR(Name,anim,time,vartime) \
			VEHIN_MOVES_VAR(Name,anim,vartime); \
			VEH_DIE_CONN(Name,anim,time)

		VEH_MOVES_VAR(TrabiDriver, \trab\trabidriver, 1, 4);