private ["_tank", "_ammo", "_snar", "_xa","_ya", "_xb", "_yb", "_z", "_posb", "_r", "_i", "_xg", "_yg"];
_tank = _this select 0;
_ammo = _this select 4;
_snar = nearestObject [_tank, _ammo];
_pos = getPos _snar;
_i = 0;
_xa = (_pos select 0);
_ya = (_pos select 1);
_z = (_pos select 2);
_xb = _xa + 0.4*sin(direction _snar);
_yb = _ya + 0.4*cos(direction _snar);
_xg = _xa - 1.4*sin(direction _snar);
_yg = _ya - 1.4*cos(direction _snar);
_posb = [_xb,_yb,_z];
_ds = (direction _snar)+90;

_r = random 0.5; _vel = [(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)];
drop ["halflight","","Billboard",1,0.6,[_xa,_ya,_z-(random 0.1)],_vel,100,1.275,1,0,[0.5],[[1,0.6,0.25,1],[1,0.6,0.25,0]],[1],1,1,"","",""];
_r = 0.5 + random 0.5; _vel = [(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)];
drop ["halflight","","Billboard",1,0.6,[_xa,_ya,_z-(random 0.5)],[(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)],100,1.275,1,0,[0.5],[[1,0.6,0.25,1],[1,0.6,0.25,0]],[1],1,1,"","",""];
_r = 0.5 + random 1; _vel = [(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)];
drop ["halflight","","Billboard",1,0.6,[_xa-(random 0.5*sin _ds),_ya-(random 0.5*cos _ds),_z-(random 0.1)],[(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)],100,1.275,1,0,[0.5],[[1,0.6,0.25,1],[1,0.6,0.25,0]],[1],1,1,"","",""];
_r = 0.5 + random 1.5; _vel = [(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)];
drop ["halflight","","Billboard",1,0.6,[_xa-(random 0.5*sin _ds),_ya-(random 0.5*cos _ds),_z-(random 0.5)],[(velocity _snar select 0)/(7+_r),(velocity _snar select 1)/(7+_r),(velocity _snar select 2)/(7+_r)],100,1.275,1,0,[0.5],[[1,0.6,0.25,1],[1,0.6,0.25,0]],[1],1,1,"","",""];

if (((player distance _tank) < 50) || (player in _tank)) then {
while "_i < 2" do 
	{
	drop ["cl_basic","","Billboard",1,random 2+5,_posb,[(-0.5+random 1),(-0.5+random 1),(-0.5+random 1)],0,1.22,1,0.2,[0.5,3,10],[[0.85, 0.85, 0.85, 0.12],[0.85, 0.85, 0.85, 0]],[0],1,0.6,"","",""];
	drop ["cl_basic","","Billboard",1,random 2+5,_posb,[(-0.5+random 1),(-0.5+random 1),(-0.5+random 1)],0,1.22,1,0.2,[0.5,3,10],[[0.85, 0.85, 0.85, 0.12],[0.85, 0.85, 0.85, 0]],[0],1,0.6,"","",""];
	drop ["halflight","","Billboard",1,0.3,_posb,[(-0.5+random 1),(-0.5+random 1),(-0.5+random 1)],100,1.275,1,0,[5,4,1.2,0.1],[[1,0.6,0.25,0.1],[1,0.6,0.25,0.1],[1,0.6,0.25,0],[1,0.6,0.25,0.3]],[1],1,1,"","",""];
	drop ["\models\zsu234_23mm", "", "SpaceObject", 5, 3,[_xg,_yg,1.8],[4*sin(direction _snar)+(0.5-(random 1)),4*cos(direction _snar)+(0.5-(random 1)),-0.5+random 1], 0, 2.5, 0.7, 0, [0.75], [[0.9,0.6,0.3,1]], [random 5], 2, 0, "", "",""];
	drop ["\models\zsu234_23mm", "", "SpaceObject", 5, 3,[_xg,_yg,2],[4*sin(direction _snar)+(0.5-(random 1)),4*cos(direction _snar)+(0.5-(random 1)),-0.5+random 1], 0, 2.5, 0.7, 0, [0.75], [[0.9,0.6,0.3,1]], [random 5], 2, 0, "", "",""];
	_i = _i + 1;
	};
};

exit
