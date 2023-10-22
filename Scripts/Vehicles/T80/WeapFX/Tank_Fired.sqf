private["_ammo","_round"];
_ammo = _this select 4;
_round = nearestobject [_this select 0,_this select 4];
_col = [[0.2,1,0.2],[0,1,0]];

If((!RHS_NoTracers)&&(_ammo in RHS_MGAmmo))Then{(_this+[0.15,3,[[0.2,1,0.2],[0,1,0]],[[0.2,1,0.2],[0,1,0]],true]) call RHS_MGtracer};
If((!RHS_NoTracers)&&(_ammo in RHS_hvyMGAmmo))Then{(_this+[0.2,4,[[0.2,1,0.2],[0,1,0]],[[0.2,1,0.2],[0,1,0]],true]) call RHS_MGtracer};
If(_ammo in RHS_CannonAmmo)Then{_this+[0.5] call RHS_TankMuzzle};
If(_ammo in RHS_TankMissiles)Then{_this call RHS_MissileMuzzle; _round exec format ["%1WeapFX\rocket2.sqs",RHS_PathM]; _round exec format ["%1WeapFX\rocket3.sqs",RHS_PathM]};

