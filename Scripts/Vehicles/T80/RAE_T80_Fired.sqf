private["_t","_i","_w","_a","_p","_v","_m","_c","_d","_dt","_ra","_s","_n","_lw","_nw"];_n=6;_lw=100;_nw=16.7;
_t=_this select 0;_w=_this select 1;_m=_this select 3;_s=_this select 5 select 2;_p=_this select 5 select 0;_v=_this select 5 select 1;_a=1;
if(_w=="RHS_smokeDischarger")then{if(typeOf _t=="Russia_T80B")then{_n=7;_lw=100;_nw=14.3;};if(typeOf _t in["RHS_T80BV","RHS_T80BM1","RHS_T80U","RHS_T80UD","RHS_T80UM"])then{_n=8;_lw=120;_nw=15;};[_t,_n,_lw,_nw,40,true,40,false]exec "\RHS_Misc\armour\smoke\MAP_fireSmoke.sqs";}else{
if (RHS_lowSmoke) then {_a=0.5};
if (_m in RHS_CannonAmmo) then {_this exec format ["%1RAE_T80_RecoilBarrel.sqs", RHS_PathT80]; _this exec format ["%1RAE_T80_RecoilTank.sqs", RHS_PathT80]; _this exec format ["%1RAE_T80_Shockdust.sqs", RHS_PathT80];
_d=direction _t;
_dT=_d;_ra=2;
_c=[[.22,.2,.14,.15*_a],[.22,.2,.14,.05*_a],[.22,.2,.14,.025*_a],[.22,.2,.14,.005*_a],[.22,.2,.14,0]];
while"_d<=_dT+360"do{if((_d>_dT+30&&_d<_dT+70)||(_d>_dT+110&&_d<_dT+150)||(_d>_dT+210&&_d<_dT+250)||(_d>_dT+290&&_d<_dT+330))then{_ra=3;};if((_d>_dT+70&&_d<_dT+110)||(_d>_dT+250&&_d<_dT+290))then{_ra=1;};if((_d>_dT+150&&_d<_dT+210)||_d>_dT+330||_d<_dT+30)then{_ra=2;};

drop["cl_basic","","Billboard",1,8,[_ra*sin(_d+7),_ra*cos(_d+7),-1],[0,0,0],0,1.275,1,.005,[4,3],_c,[0],0,.01,"","",_t];
drop["cl_basic","","Billboard",1,8,[_ra*sin(_d+14),_ra*cos(_d+14),-1],[0,0,0],0,1.275,1,.005,[4,3],_c,[0],0,.01,"","",_t];
drop["cl_basic","","Billboard",1,8,[_ra*sin(_d+21),_ra*cos(_d+21),-1],[0,0,0],0,1.275,1,.005,[4,3],_c,[0],0,.01,"","",_t];
_d=_d+28}; _i = 4; while {_i > 0} do {_i = _i - 1;
drop ["cl_fire", "", "Billboard",1, 0.5,_p,[(_v select 0)/100, (_v select 1)/100, (_v select 2)/100],0,1.22,1,0.2,[0.5,3,9],[[0.5, 0.5, 0, 0.5*_a],[0.5, 0.5, 0, 0.5*_a],[0.5, 0.5, 0, 0.5*_a],[0.15, 0.1, 0.1, 0.1*_a],[0.15, 0.1, 0.1, 0],[0.15, 0.1, 0.1, 0]],[0],1,0.6,"","",""]}};};
