class Kamov : Helicopter
{
    access=2;
    scope=2;
    crew="SoldierEPilot";
    picture="\ffur_rua\hok\icon";
    maxSpeed=350;
    ejectSpeed[]={0,80,0};
    gearRetracting="true";
    soundEngine[]={"\ffur_rua\hok\sound\e_nrm_ot.ogg","db+2",1};
    side=0;
    displayName="Ka-52";
    nameSound="chopper";
    accuracy=0.5;
    cost=4000000;
    armor=150;
    model="\ffur_rua\hok\KA52.p3d";
    rotorBig="hip_vrt_v";
    rotorBigBlend="hip_vrtblur_v";
    rotorSmall="vrthind_m";
    rotorSmallBlend="vrthind_m_bl";
    //weapons[]={"EV_Ka2A4230mm","EV_RakVikhr","EVKa52Igla","Ev80mmrocket"};
    //magazines[]={"EV_Ka2A4230mm_AP","EV_Ka2A4230mm_HE","EV_RakVikhr","EVKa52Igla","Ev80mmrocket"};
    transportSoldier=0;
    transportAmmo=0;
    type=3;
    extCameraPosition[]={0,3,-20};
    driverAction="ManActEvKa52Pilot";
    gunnerAction="ManActEvKa52Pilot";
    gunnerOpticsModel="\ffur_rua\hok\optika_ka52";
    driverOpticsModel="\ffur_rua\hok\optika_ka52_Pl";
    hiddenselections[]={"n1","n2","n3","n4","igla1","igla2","igla3","igla4","DvigL","dvigP","fireL","fireP","maslo","rotor","Topliv","lamp_gearDW","lamp_gearUP","ARL","NS","obluch","OPS","PA","Radio","Schassi","Tormoz","Uderg","VCU","threat_1","threat_2","threat_3","INDIK_dvig","INDIK_toplivo","INDIK_Weapon","INDIK_elektronik","ILS_OFF","st"};
    threat[]={0.6,1,0.8};
    typicalCargo[]={"Soldier"};
    hasGunner=1;
    hideWeaponsCargo=1;
    mainRotorSpeed=5;
    backRotorSpeed=5;
    steerAheadSimul=2;
    steerAheadPlan=2;
    minMainRotorDive=-5;
    maxMainRotorDive="+5";
    neutralMainRotorDive=0;
    minBackRotorDive=-5;
    maxBackRotorDive="+5";
    neutralBackRotorDive=0;
    armorAvionics=0.7;
    armorVRotor=1.0;
    armorHRotor=1.0;
    armorMissiles=0.6;
    armorGlass=0.7;
    dammageHalf[]={"\ffur_rua\hok\Steclo\S1.paa","\ffur_rua\hok\Steclo\S2.paa","\ffur_rua\hok\Steclo\S3.paa"};
    dammageFull[]={"\ffur_rua\hok\Steclo\S1.paa","\ffur_rua\hok\Steclo\S3.paa"};
    animated=1;
    vehicleClass="Russia Air";

    class ViewOpticsBase
        {
        };

    class ViewOptics:ViewOpticsBase
        {
        initAngleX=0;
        minAngleX=-15;
        maxAngleX=0;
        initAngleY=0;
        minAngleY=-45;
        maxAngleY=10;
        initFov=0.5;
        minFov=0.01;
        maxFov=0.5;
        };

    class Reflectors
        {

        class Left
            {
            color[]={0.9,0.8,0.8,1.0};
            ambient[]={0.1,0.1,0.1,1.0};
            position="L svetlo";
            direction="konec L svetla";
            hitpoint="L svetlo";
            selection="L svetlo";
            size=0.5;
            brightness=1;
            };

        class Right
            {
            color[]={0.9,0.8,0.8,1.0};
            ambient[]={0.1,0.1,0.1,1.0};
            position="P svetlo";
            direction="konec P svetla";
            hitpoint="P svetlo";
            selection="P svetlo";
            size=0.5;
            brightness=1;
            };
        };

    class IndicatorWatch
        {
        hour="hour";
        minute="minute";
        axis="osa_time";
        reversed="true";
        };

    class IndicatorAltBaro
        {
        selection="alt";
        axis="osa_alt";
        angle=-350;
        min=0;
        max=200;
        };

    class IndicatorAltRadar
        {
        selection="nm_alt";
        axis="osa_nm_alt";
        angle=-360;
        min=0;
        max=304;
        };

    class IndicatorSpeed
        {
        selection="mph";
        axis="osa_mph";
        angle=350;
        min=0;
        max="400 / 3.6";
        };

    class IndicatorVertSpeed
        {
        selection="vs";
        axis="osa_vs";
        angle=-360;
        min=30;
        max=-30;
        };

    class IndicatorCompass
        {
        selection="kompas";
        axis="osa_kompas";
        angle=360;
        min=-3.141593;
        max=3.141593;
        };

    class IndicatorCompass2
        {
        selection="kompas2";
        axis="osa_kompas2";
        angle=360;
        min=-3.141593;
        max=3.141593;
        };

    class indicatorHorizont2
        {
        selection="horizont2";
        axis="osa_horizont2";
        angle=-360;
        min=-3.141593;
        max=3.141593;
        };

    class TurretBase
        {
        };

    class Turret:TurretBase
        {
        gunAxis="osahlavne";
        turretAxis="osaveze";
        gunBeg="usti hlavne";
        gunEnd="konec hlavne";
        soundServo[]={};
        minElev=-45;
        maxElev=2;
        minTurn=-15;
        maxTurn=0;
        initTurn=0;
        body="otocvez";
        gun="otochlaven";
        };

    class Animations
        {

        class missilewarner
            {
            type="rotation";
            animperiod=0.001;
            selection="threat";
            axis="osa_threat";
            angle0=-1.5700001;
            angle1=-7.8499999;
            };

        class RightDoor
            {
            type="rotation";
            animPeriod=2;
            selection="P_door";
            axis="osa_P_door";
            angle0=0;
            angle1=-1;
            };

        class LeftDoor
            {
            type="rotation";
            animPeriod=2;
            selection="L_door";
            axis="osa_L_door";
            angle0=0;
            angle1=1;
            };

        class NoseGear
            {
            type="rotation";
            animPeriod=2;
            selection="nosewheel";
            axis="axisnosewheel";
            angle0=0;
            angle1=1;
            };

        class RightGear
            {
            type="rotation";
            animPeriod=2;
            selection="rightwheel";
            axis="osa GearP";
            angle0=0;
            angle1=1.5;
            };

        class LeftGear
            {
            type="rotation";
            animPeriod=2;
            selection="leftwheel";
            axis="osa GearL";
            angle0=0;
            angle1=-1.5;
            };

        class GearP
            {
            type="rotation";
            animPeriod=2;
            selection="GearP";
            axis="osa stoikaP";
            angle0=0;
            angle1=-1.5;
            };

        class GearL
            {
            type="rotation";
            animPeriod=2;
            selection="GearL";
            axis="osa stoikaL";
            angle0=0;
            angle1=1.5;
            };

        class zgd_P
            {
            type="rotation";
            animPeriod=2;
            selection="zgd_P";
            axis="osa_zgd_P";
            angle0=0;
            angle1=1.2;
            };

        class zgd_L
            {
            type="rotation";
            animPeriod=2;
            selection="zgd_L";
            axis="osa_zgd_L";
            angle0=0;
            angle1=-1.2;
            };

        class zgd2_P
            {
            type="rotation";
            animPeriod=2;
            selection="zgd2_P";
            axis="osa_zgd2_P";
            angle0=0;
            angle1=1;
            };

        class zgd2_L
            {
            type="rotation";
            animPeriod=2;
            selection="zgd2_L";
            axis="osa_zgd2_L";
            angle0=0;
            angle1=-1;
            };

        class Flir
            {
            type="rotation";
            animPeriod=3;
            selection="flir";
            axis="osa flir";
            angle1=3;
            angle0=-3;
            };

        class Flir2
            {
            type="rotation";
            animPeriod=3;
            selection="flir2";
            axis="osa_flir2";
            angle1=-1;
            angle0=1;
            };

        class Radar
            {
            type="rotation";
            animPeriod=3;
            selection="radar";
            axis="osa_radar";
            angle1=0.8;
            angle0=-0.8;
            };

        class IndicatorRPM
            {
            type="rotation";
            animPeriod=4;
            selection="rpm";
            axis="osa_rpm";
            angle0=0;
            angle1=-0.16;
            };

        class IndicatorRPM2
            {
            type="rotation";
            animPeriod=4;
            selection="rpm2";
            axis="osa_rpm2";
            angle0=0;
            angle1=-0.16;
            };

        class GearTumbler
            {
            type="rotation";
            animPeriod=2;
            selection="gear_tumbl";
            axis="osa_gear_tumbl";
            angle0=0;
            angle1=1;
            };

        class tumbler_AFL
            {
            type="rotation";
            animPeriod=1;
            selection="tumb_AFL";
            axis="osa_tumb_AFL";
            angle0=0;
            angle1=1;
            };

        class tumbler_AFR
            {
            type="rotation";
            animPeriod=1;
            selection="tumb_AFR";
            axis="osa_tumb_AFR";
            angle0=0;
            angle1=1;
            };
        };
};