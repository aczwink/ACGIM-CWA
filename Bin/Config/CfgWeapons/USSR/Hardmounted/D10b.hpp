/*
Sources:
    https://en.wikipedia.org/wiki/D-10_tank_gun

Muzzle velocity:
    BR-412 APHE:    895 m/s
    F-412 HE:       900 m/s
                 	
Rate of fire:
    4 rounds/min avg
    5–6 rounds/min max.
*/

class BR412 : Shell105
{
    nameSound="heat";
    model = "\models\Sabot.p3d";
    reloadTime = 13; //~4.5 rounds per min
    sound[]={"\sounds\100mm.wss",50,1};
    reloadSound[]={"\sounds\100mmrl",0.019,1};
    ammo = "D10AP2";
    initSpeed = 895; 
    displayName="BR412 APHE";
    displayNameMagazine="BR412 100mm APHE";
    shortNameMagazine="BR412APHE";
    count=31;
};

class BK17 : Heat105
{
    ammo = "D10HEAT";
    nameSound="shell";
    displayName="3BK17 HEAT";
    displayNameMagazine="3BK17 100mm HEAT";
    shortNameMagazine="3BK17HEAT";
    model="\models\HEAT.p3d";
    count=12;
    initSpeed = 900; 
    reloadTime = 13; //~4.5 rounds per min
    sound[]={"\sounds\100mm.wss",50,1};
    reloadSound[]={"\sounds\100mmrl",0.019,1};
};

class D10b : Gun105
{
    reloadTime = 13; //~4.5 rounds per min
    displayName="100mm Cannon";
    sound[]={"\sounds\100mm.wss",50,1};
    reloadSound[]={"\sounds\100mmrl",0.019,1};
    magazines[]={"BR412", "BK17"};
};