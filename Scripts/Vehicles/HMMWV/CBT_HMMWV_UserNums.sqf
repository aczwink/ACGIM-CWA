comment "
©2003CBTdor
contact: CBTdor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private ["_pathNum", "_name1", "_name2", "_name3", "_line", "_tank", "_i"];
_pathNum = "\d4t_tex\hmw\numbers\";
_name1 = "n";
_name2 = "in_";
_name3 = "g";
_line = "HMMWV";
_tank = _this select 0;
_i = _this select 1;

_this call CBT_HMMWV_MPNumberFct;

if (call format ["CBT_%1_Type_%2", _line, _i] == 0) then
	{
	_tank setObjectTexture [0, format ["%1%2%3.paa", _pathNum, _name1, call format ["CBT_%1_Number1_%2", _line, _i] ]];
	_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _name1, call format ["CBT_%1_Number2_%2", _line, _i] ]];
	_tank setObjectTexture [2, format ["%1%2%3.paa", _pathNum, _name1, call format ["CBT_%1_Number3_%2", _line, _i] ]]
	} else
	{
	if (call format ["CBT_%1_Type_%2", _line, _i] == 1) then 
		{
		_tank setObjectTexture [0, format ["%1%2%3.paa", _pathNum, _name2, call format ["CBT_%1_Number1_%2", _line, _i] ]];
		_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _name2, call format ["CBT_%1_Number2_%2", _line, _i] ]];
		_tank setObjectTexture [2, format ["%1%2%3.paa", _pathNum, _name2, call format ["CBT_%1_Number3_%2", _line, _i] ]]
		} else
		{
		if (call format ["CBT_%1_Type_%2", _line, _i] == 2) then
			{
			_tank setObjectTexture [0, format ["%1%2%3.paa", _pathNum, _name3, call format ["CBT_%1_Number1_%2", _line, _i] ]];
			_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _name3, call format ["CBT_%1_Number2_%2", _line, _i] ]]
			}
		}
	};
