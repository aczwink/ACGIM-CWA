private["_projectile","_size","_interval","_ammo","_color","_count","_pos","_vel","_x","_y","_z","_s","_m","_n","_r","_l","_max","_c","_cc","_c0","_c1","_c2"];
_projectile=nearestobject [_this select 0,_this select 4];
_size=_this select 5;
_interval = _this select 6;
_ammo = (_this select 0) ammo (_this select 1);
_color=_this select 7;
_count = count _color;
_pos=(getpos _projectile);
_vel=[(velocity _projectile select 0)/1,(velocity _projectile select 1)/1,(velocity _projectile select 2)/1];
if(_this select 9)then{
	_x = (_pos select 0)+(0.02*sin (getDir _projectile));
	_y = (_pos select 1)+(0.02*cos (getDir _projectile));
	_z = (_pos select 2)+(0.02*sin (_projectile call RHS_AmmoPitch));
	_s = _size+0.35;
	drop ["halfLight", "", "Billboard", 0.05, 0.1, [_x+(-0.025 + random 0.05),_y+(-0.025 + random 0.05),_z+(-0.025 + random 0.05)],[0,0,0], 1, 1.275, 1, 0, [_s+random(_s/2)], [[1,0.6,0.25,1],[1,0.6,0.25,0]], [0,1,0], 0, 0, "", "", ""];
};
_m = sqrt((_vel select 0)^2 + (_vel select 1)^2);
_vel = [_m*sin (0),_m*cos (0),(_vel select 2)*sin (0)];
if(((_ammo+1)/_interval) mod 1 == 0)then{
	[_projectile,_size,(_this select 8)] exec format ["%1WeapFX\tracer_ricochet.sqs",RHS_PathM];
	_n = 0;
	_r = random 11;
	_r = _r - (_r mod 1);
	_l = 20 - _r;
	_max = _l * 0.05;
	while{_n<_max}do{
		_c = 0;
		while{_c<_count}do{
			_cc = _color select _c;
			_c0 = _cc select 0;
			_c1 = _cc select 1;
			_c2 = _cc select 2;
			_cc = [_c0,_c1,_c2,1-(_n*(20/_l))];
			_color set [_c,_cc];
			_c = _c + 1;
		};
		drop["halfLight","","Billboard",1,(4-_n),[0,-_n*(_size/0.15),0],_vel,1,35,1,0,[_size],_color,[0,1,0,1],0,0,"","",_projectile];
		_n=_n+0.05;
	};
};