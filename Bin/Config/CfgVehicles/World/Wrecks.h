class JeepWreck1 : Camp
{
	mapSize=0.7;
	model="JeepT.p3d";
	displayName="$STR_DN_JEEP_WRECK_1";
	vehicleClass="Objects (Wrecks)";
	accuracy=0.3;
	destrType=DESTRUCT_ENGINE;
};

class JeepWreck2 : JeepWreck1
{
	model="JeepT_horeznacky.p3d";
	displayName="$STR_DN_JEEP_WRECK_2";
};

class JeepWreck3 : JeepWreck1
{
	model="JeepT_Tanker.p3d";
	displayName="$STR_DN_JEEP_WRECK_3";
};

class M113Wreck : JeepWreck1
{
	model="M113T.p3d";
	displayName="$STR_DN_M113_WRECK";
};