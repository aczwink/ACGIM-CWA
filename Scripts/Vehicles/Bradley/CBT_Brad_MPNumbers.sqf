comment "
©2003raedor
contact: raedor@mapfact.net
visit: www.mapfact.net 
www.dkm-mod.mkdi.net 
www.redhammerstudios.com
scripting questions?
post here: www.mapfact.net/forum/
";

private ["_pathNum", "_name1", "_line", "_tank", "_i", "_alph", "_div1"];
_pathNum = "\d4t_tex\bradley\m\";
_name1 = "ch_";
_line = "Brad";
_tank = _this select 0;
_i = _this select 1;
_alph = "a";
_div1 = "2418i";

if (call format ["CBT_%1_Alpha_%2", _line, _i] == 1) then 
	{
	_alph = "a"
	} else
	{
	if (call format ["CBT_%1_Alpha_%2", _line, _i] == 2) then 
		{
		_alph = "b"
		} else
		{
		if (call format ["CBT_%1_Alpha_%2", _line, _i] == 3) then 
			{
			_alph = "c"
			} else
			{
			if (call format ["CBT_%1_Alpha_%2", _line, _i] == 4) then 
				{
				_alph = "d"
				} else
				{
				_alph = ""
				}
			}
		}
	};
if (call format ["CBT_%1_div_%2", _line, _i] == 0) then 
	{
	_div1 = "2418i";
	_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
	} else
	{
	if (call format ["CBT_%1_div_%2", _line, _i] == 1) then
		{
		_div1 = "2418i";
		_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
		} else
		{
		if (call format ["CBT_%1_div_%2", _line, _i] == 2) then
			{
			_div1 = "1i22i";
			_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
			} else
			{
			if (call format ["CBT_%1_div_%2", _line, _i] == 3) then
				{
				_div1 = "1a16i";
				_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
				} else
				{
				if (call format ["CBT_%1_div_%2", _line, _i] == 4) then
					{
					_div1 = "3i221";
					_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
					} else
					{
					if (call format ["CBT_%1_div_%2", _line, _i] == 5) then
						{
						_div1 = "1a14ada";
						_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
						} else
						{
						if (call format ["CBT_%1_div_%2", _line, _i] == 6) then
							{
							_div1 = "1i14cav";
							_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
							} else
							{
							if (call format ["CBT_%1_div_%2", _line, _i] == 7) then
								{
								_div1 = "247cav";
								_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
								} else
								{
								if (call format ["CBT_%1_div_%2", _line, _i] == 8) then
									{
									_div1 = "1a3cav5";
									_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _div1]]
									} else
									{
									_tank setObjectTexture [0, format "%1%2.paa", _pathNum, _div1]]
									};
								};
							};
						};
					};
				};
			};
		};
	};
if (call format ["CBT_%1_Type_%2", _line, _i] == 0) then
	{
	_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _alph, call format ["CBT_%1_Number1_%2", _line, _i] ]];
	} else
	{
	if (call format ["CBT_%1_Type_%2", _line, _i] == 1) then 
		{
		_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _alph, call format ["CBT_%1_Number1_%2", _line, _i] ]];
		} else
		{
		if (call format ["CBT_%1_Type_%2", _line, _i] == 2) then
			{
			_tank setObjectTexture [1, format ["%1%2%3.paa", _pathNum, _alph, call format ["CBT_%1_Number1_%2", _line, _i] ]];
			}
		}
	};
	
if (typeOf _tank in CBT_BradsWithChevrons) then
	{	
	if (call format ["CBT_%1_Emblem_%2", _line, _i] == 0) then
		{
		_tank setObjectTexture [2, format ["%1ch_no.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
		} else 
		{
		if (call format ["CBT_%1_Emblem_%2", _line, _i] == 1) then
			{
			_tank setObjectTexture [2, format ["%1ch_alpha.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
			} else
			{
			if (call format ["CBT_%1_Emblem_%2", _line, _i] == 2) then
				{
				_tank setObjectTexture [2, format ["%1ch_bravo.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
				} else
				{
				if (call format ["CBT_%1_Emblem_%2", _line, _i] == 3) then
					{
					_tank setObjectTexture [2, format ["%1ch_alpha.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
					} else
					{
					if (call format ["CBT_%1_Emblem_%2", _line, _i] == 4) then
						{
						_tank setObjectTexture [2, format ["%1ch_alpha.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
						} else
						{
						_tank setObjectTexture [2, format ["%1ch_no.paa", _pathNum, call format ["CBT_%1_Emblem_%2", _line, _i]]]
						}
					}
				}
			}
		}	
	};
