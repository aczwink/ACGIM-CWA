class JetRanger : Helicopter
{
    scope = 1;
    access = 2;
    picture = "\OH58\iKiowa";
    crew = "Civilian";
    side = 3;
    displayName = "$STR_DN_OUT_HELI";
    nameSound = "chopper";
    accuracy = 0.3;
    gunnerUsesPilotView = 1;
    driverAction = "ManActUH60Pilot";
    gunnerAction = "ManActUH60Pilot";
    maxSpeed = 235;
    soundEngine[] = {"\oh58\oh58", 1.77828, 1};
    armor = 30;
    cost = 10000000;
    model = "\O\Vehl\JetRanger.p3d";
    rotorBig = "vrtule_velka";
    rotorBigBlend = "vrtule_velka_bl_";
    rotorSmall = "vrtule_mala";
    rotorSmallBlend = "vrtule_mala_bl";
    weapons[] = {};
    magazines[] = {};
    type = "VAir";
    threat[] = {0.6, 0.6, 0.3};
    dammageHalf[] = {"\OH58\OH58_sklotest.paa", "\OH58\OH58_sklotest_B.paa", "\OH58\OH58_sklotestL.paa", "\OH58\OH58_sklotestL_B.paa"};
    dammageFull[] = {"\OH58\OH58_sklotest.paa", "\OH58\OH58_sklotest_C.paa", "\OH58\OH58_sklotestL.paa", "\OH58\OH58_sklotestL_C.paa"};

    class ViewOptics
    {
        initAngleX = 0;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -86;
        maxAngleY = 86;
        initFov = 0.1;
        minFov = 0.03;
        maxFov = 1.2;
    };
};

class JetRangerSilent : JetRanger
{
    access = 2;
    nameSound = "chopper";
    accuracy = 0.3;
    maxSpeed = 235;
    soundEngine[] = {"\oh58\oh58", 0.0001, 1};
    displayName = "$STR_DN_OUT_HELI_SIL";
    armor = 30;
    cost = 10000000;
    model = "\O\Vehl\JR_RC.p3d";
};