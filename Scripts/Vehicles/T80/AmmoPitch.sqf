private["_x","_y","_z","_b","_a"];
_x = (velocity _this select 0);
_y = (velocity _this select 1);
_z = (velocity _this select 2);
_b = sqrt(_x^2 + _y^2 + _z^2);
_a = acos(_z/_b);
_a = 90 - _a;
_a