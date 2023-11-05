class rhs_t55cargo1:StandBase
{
    actions="NoActions";
    file="\animations\rhs_t55cargo1.rtm";
    speed="SPEED_STATIC";
    looped=true;
    soundEnabled=false;
    duty="RestDuty";
    interpolationSpeed=2;
    connectFrom[]={"Stand",1,"StandVar2",1,"StandVar3",1};
    connectTo[]={"Stand",1,"StandVar2",1,"StandVar3",1};
    interpolateTo[]={"StandDying",0.1,"StandDyingVer2",0.1};
};
class rhs_t55cargo2:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo2.rtm";
};
class rhs_t55cargo3:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo3.rtm";
};
class rhs_t55cargo4:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo4.rtm";
};
class rhs_t55cargo5:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo5.rtm";
};
class rhs_t55cargo6:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo6.rtm";
};
class rhs_t55cargo7:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo7.rtm";
};
class rhs_t55cargo8:rhs_t55cargo1
{
    file="\animations\rhs_t55cargo8.rtm";
};
class rhs_t55cargo9:rhs_t55cargo1
{
    file="\RHS_Misc\Anim\rhs_t55cargo9.rtm";
};