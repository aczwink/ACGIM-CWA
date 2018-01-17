/*
Sources:
	http://www.russianwarrior.com/STMMain.htm?1947weapon_RPG2.htm&1
*/
class PG2 : LAW
{
	thrustTime = 0.2;
	thrust = 1;
	maxSpeed = 84;
	airlock=1;
	model="\sjc_models\fia\objects\rpg2rocket_fired.p3d";
	hit = HIT_PG2;
	indirectHit = INDIRECTHIT_PG2;
	indirectHitRange = INDIRECTHITRANGE_PG2;
	SoundHitArmor1[]={"\sjc_sounds\weapons\handheld\arm1.wss",db+25,1};
	SoundHitArmor2[]={"\sjc_sounds\weapons\handheld\arm2.wss",db+25,1};
	SoundHitArmor3[]={"\sjc_sounds\weapons\handheld\arm3.wss",db+25,1};
	hitArmor[]={soundHitArmor1,0.33, soundHitArmor2,0.33, soundHitArmor3,0.33};
	soundHit[]={"\sjc_sounds\weapons\handheld\boom.wav",31.622778,1.0};
	soundFly[]={"\sjc_sounds\weapons\handheld\fly.ogg",db+0,1.0};
};

/*
Sources:
	http://en.wikipedia.org/wiki/RPG-16
*/
class PG16 : LAW
{
	model="\sjc_models\fia\objects\rpg18rocket_fired.p3d";
	thrustTime = 0.2;
	thrust = 44;
	maxSpeed = 350;
	initTime = 0.1;
	cost = COST_GRENADE_PG16;
	hit = HIT_PG16;
	indirectHit = INDIRECTHIT_PG16;
	indirectHitRange = INDIRECTHITRANGE_PG16;
	simulation = shotRocket;
	simulationStep=0.05;
	soundHit[]={"\sjc_sounds\weapons\handheld\ground.wss",db+25,1.0};
	SoundHitArmor1[]={"\sjc_sounds\weapons\handheld\arm1.wss",db+25,1};
	SoundHitArmor2[]={"\sjc_sounds\weapons\handheld\arm2.wss",db+25,1};
	SoundHitArmor3[]={"\sjc_sounds\weapons\handheld\arm3.wss",db+25,1};
	hitArmor[]={soundHitArmor1,0.33, soundHitArmor2,0.33, soundHitArmor3,0.33};
	soundFly[]={"\sjc_sounds\weapons\handheld\fly.ogg",db+0,1.0};
};