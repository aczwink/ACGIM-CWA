private["_pr","_pos","_vel","_x","_y","_z","_a","_b","_n"];
_pr=nearestobject [_this select 0,_this select 4];
_pos=getpos _pr;
_vel=[(velocity _pr select 0)/6,(velocity _pr select 1)/6,(velocity _pr select 2)/6];
_x = (_pos select 0)+(1.4*sin (getDir _pr));
_y = (_pos select 1)+(1.4*cos (getDir _pr));
_z = ([_pr,_x,_y] call RHS_AmmoHeight)+(1.4*sin (_pr call RHS_AmmoPitch));
drop ["halfLight", "", "Billboard", 0.1, 0.7, [_x+(-.05+random .1),_y+(-.05+random .1),_z], [0,0,0], 1, 1.275, 1, 0, [5+random 1], [[1,0.6,0.25,1],[1,0.6,0.25,0]], [0,1,0], 0, 0, "", "", ""];
_a = [0.49,0.49,0.49];
_b = [_a + [0.75],_a + [0.5],_a + [0.5],_a + [0]];
_n = 0;
While{_n < 7}Do{_n = _n + 1;drop["cl_basic","","Billboard",100,1+random 1,[(_x+(-1 + random 2)),(_y+(-1 + random 2)),(_z+(-1 + random 2))],[(_vel select 0)+(-3 + random 6),(_vel select 1)+(-3 + random 6),(_vel select 2)+(-3 + random 6)],0,1.275,1,0,[1.5+random 0.5,2+random 0.5],_b,[0,0],0,0,"","",""]};
_vel=[(_vel select 0)*1.5,(_vel select 1)*1.5,(_vel select 2)*1.5];
_n = 0;
While{_n < 7}Do{_s = random 0.3; _n = _n + 1;drop["cl_fire", "", "SpaceObject", 1, 0.2, [_x+(random .5 - random .5),_y+(random .5 - random .5),_z+(random .5 - random .5)], [(_vel select 0)+(random 10 - random 10),(_vel select 1)+(random 10 - random 10),(_vel select 2)+(random 10 - random 10)], 2, 1.265, 1, 0.05, [_s,_s],[[.5,.9,0,.2],[.5,.8,0,.01],[0.51,0.75,0,0]], [0], 0.1, 0.1, "", "",""]};