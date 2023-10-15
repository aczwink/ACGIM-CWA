private ["_r1","_r2","_r3","_time"];
_r1 = -0.4 + random 0.8;
_r2 = -0.4 + random 0.8;
_r3 = -0.4 + random 0.8;
_time = 1 + random 1.2;
drop ["cl_fire","","Billboard",1,_time,[(_this select 0)+_r1,(_this select 1)+_r2,(_this select 2)+_r3],[0,0,0],1,1.275,1,0,[0.25],[[1,0.6,0.25,0.5],[1,0.6,0.25,0]],[0,1,0],0,0,"","",""];
drop ["halfLight","","Billboard",1,_time,[(_this select 0)+_r1,(_this select 1)+_r2,(_this select 2)+_r3],[0,0,0],1,1.275,1,0,[0.25],[[1,1,0,1],[1,1,0,0]],[0,1,0],0,0,"","",""];
drop ["cl_basic","","Billboard",1,_time,[(_this select 0)+(_r1/3),(_this select 1)+(_r2/3),(_this select 2)+(_r3/3)],[0,0,0],1,1.275,1,0,[0.25,1.25],[[0.3,0.3,0.3,0.1],[0.3,0.3,0.3,0.4],[0.3,0.3,0.3,0]],[0,1,0],0,0,"","",""];
exit;





