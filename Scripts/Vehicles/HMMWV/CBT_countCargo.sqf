comment "
©2003raedor
contact: raedor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private["_result", "_x", "_tank", "_c", "_d", "_g", "_l"];
_tank = _this;
_result = 0;
{
	_c = false;
	_d = false;
	_g = false;
	_l = false;
	if (! (isNull commander _tank)) then 
	{
		if (_x == (commander _tank)) then
		{
			_c = true
		}	
	};
	if (! isNull (driver _tank)) then 
	{
		if (_x == (driver _tank)) then
		{
			_d = true
		}
	};
	if (! isNull (gunner _tank)) then
	{
		if (_x == (gunner _tank)) then
		{
			_g = true
		}
	};
	if (format ["%1", typeOf _x] == "CBTLogic") then
	{
		_l = true
	};
	if (! _c && ! _d && ! _g && ! _l) then
	{
		_result = _result + 1
	};
}
forEach (crew _tank);
_result

 
