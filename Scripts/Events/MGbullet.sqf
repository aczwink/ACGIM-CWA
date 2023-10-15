private 
[
	"_soldier",
	"_ammo",
	"_shot",
	"_pos"
];
_soldier = _this select 0;
_ammo = "M2HBBrowning";
_shot = nearestObject [_soldier,_ammo];
_pos = getPos _shot;
_x = _pos select 0;
_y = _pos select 1;
_z = _pos select 2;
_maxPuffs = 1;
_i = 0;

while {_i < _maxPuffs} do
{
drop ["Nabojnice","","SpaceObject",1,1,[0,-0.65,0],[0 + 2 + random 2,(velocity _soldier select 1 / 2) + 0,random 0.8],0,3,1,0,[1,1],[[1,1,1,1]],[0,1,0,1],0,0,"","",_shot];
drop ["cl_basic","","Billboard",1,4,[0,0.55,0],[random 0.5 - random 0.7,random 0.7 - random 0.7,0.25 + random 0.5],0,1,0.8,random 0.1,[0,1.5,2.5,3.5],[[0.85,0.85,0.85,0.1 + random 0.1],[0.85,0.85,0.85,0.1 + random 0.1],[0.85,0.85,0.85,0]],[0,1,0,1],0,0,"","",_shot];
_i = _i + 1
}
