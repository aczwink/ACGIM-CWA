private["_pr","_x","_y","_pos","_o","_z"];
_pr = _this select 0;
_x = _this select 1;
_y = _this select 2;
_pos = (getpos _pr);
_o = "Logic" createvehicle [0,0,0];
_o setpos [_x,_y,0];
_z = sqrt((_o distance _pr)^2 - ((_pos select 0)-(getpos _o select 0))^2 - ((_pos select 1)-(getpos _o select 1))^2);
deletevehicle _o;
_z