comment "
©raedor2004
contact: raedor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private["_result", "_x", "_tank", "_c", "_d", "_g", "_l"];
_tank = _this;
_result = [];
if (format ["%1", typeOf (commander _tank)] == "CBTLogic") then
{
	_result = [commander _tank]	
};
if (format ["%1", typeOf (driver _tank)] == "CBTLogic") then 
{
	_result = _result + [driver _tank]
};
if (format ["%1", typeOf (gunner _tank)] == "CBTLogic") then 
{
	_result = _result + [gunner _tank]	
};
_result