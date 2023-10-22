comment "
©raedor2004
contact: raedor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private["_i", "_obj", "_vel"];
_obj = nearestObject [_this select 0, _this select 4];
_vel = velocity _obj;
_i = [position _obj, _vel, direction _obj, _obj];
_i
