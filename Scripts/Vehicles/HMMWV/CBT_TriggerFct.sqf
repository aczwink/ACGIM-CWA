comment "
©2003raedor
contact: raedor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private ["_i", "_scannedObject", "_scannedObjects", "_refPt", "_wert", "_pos", "_veh", "_dist"];
_veh = _this select 0; _pos = position _veh; _i = 0; _scannedObjects = []; _wert = 360/(_this select 1); _dist = _this select 2;
while "_i < 360" do 
	{
	_refPt = [(_pos select 0) + _dist * (sin _i), (_pos select 1) + _dist * (cos _i), 0];
	_scannedObject = nearestObject _refPt;
	if ("MAN" countType [1, _scannedObject] == 1 && _scannedObject != player && ! (_scannedObject in _scannedObjects) && (_scannedObject distance _veh < 5)) then
		{
		_scannedObjects = _scannedObjects + [_scannedObject]
		};
	_i = _i + _wert;
	};
_scannedObjects