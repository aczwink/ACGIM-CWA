private["_path", "_tank", "_no", "_type", "_var", "_varA", "_alph1", "_alphA", "_num1", "_divA", "_emb", "_MPalph", "_MPemb", "_MPdiv", "_rnd", "_net1", "_net2", "_rnd", "_numA", "_name1"];
_path = "\d4t_files\FX\scripts\vehicles\hmmwv\";
_pathNum = "\d4t_tex\hmw\numbers\";
_tank = _this select 0;
_type = _this select 1;
_divA = _this select 2;
_emb = _this select 3;
_name1 = "ch_";

if (_type == "random") then
	{
	_type = "normal";
	_alph1 = random 3;
	if (_alph1 < 1) then 
		{
		_alphA = "a"
		};
	if (_alph1 >= 1) then 
		{
		_alphA = "b"
		};
	if (_alph1 >= 2) then 
		{
		_alphA = "c"
		};
	if (_alph1 >= 3) then 
		{
		_alphA = "d"
		};
	_num1 = random 11;
	_var = _num1 mod 1;
	if (_var >= 0.5) then 
		{
		_num1 = (_num1 - _var) + 1
		} else 
		{
		_num1 = _num1 - _var
		};
	if (_num1 < 1) then 
		{
		_numA = "11"
		};
	if (_num1 >= 1) then 
		{
		_numA = "12"
		};
	if (_num1 >= 2) then 
		{
		_numA = "13"
		};
	if (_num1 >= 3) then 
		{
		_numA = "14"
		};
	if (_num1 >= 4) then 
		{
		_numA = "21"
		};	
	if (_num1 >= 5) then 
		{
		_numA = "22"
		};
	if (_num1 >= 6) then 
		{
		_numA = "23"
		};
	if (_num1 >= 7) then 
		{
		_numA = "24"
		};
	if (_num1 >= 8) then 
		{
		_numA = "31"
		};
	if (_num1 >= 9) then 
		{
		_numA = "32"
		};
	if (_num1 >= 10) then 
		{
		_numA = "33"
		};
	if (_num1 >= 11) then 
		{
		_numA = "34"
		};
	};
if (_type == "none") then
	{
	_alphA = "a"
	_numA = "11"
	};

if (_alphA == "a") then 
	{
	_MPalph = 1
	} else
	{
	if (_alphA == "b") then 
		{
		_MPalph = 2
		} else
		{
		if (_alphA == "c") then 
			{
			_MPalph = 3
			} else
			{
			if (_alphA == "d") then 
				{
				_MPalph = 4
				} else
				{
				_MPalph = 0
				}
			}
		}
	};
if (_divA == "random") then 
	{
	if (typeOf _tank in CBT_HMMWVsCAV) then
		{
		_rnd = random 4;
		if (_rnd < 1) then 
			{
			_divA = "1i14cav"
			};
		if (_rnd >= 1) then
			{
		 	_divA = "247cav"
			};
		if (_rnd >= 2) then
			{
		 	_divA = "1i14cav"
			};
		if (_rnd >= 3) then
			{
		 	_divA = "1a3cav5"
			};
		if (_rnd >= 4) then
			{
			_divA = "1i14cav"
			}
		} else
		{
		if (typeOf _tank in CBT_HMMWVsADA) then
			{
			_rnd = random 4;
			if (_rnd < 1) then 
				{
				_divA = "1a14ada"
				};
			if (_rnd >= 1) then
				{
		 		_divA = "1a14ada"
				};
			if (_rnd >= 2) then
				{
		 		_divA = "1a14ada"
				};
			if (_rnd >= 3) then
				{
		 		_divA = "1a14ada"
				};
			if (_rnd >= 4) then
				{
				_divA = "1a14ada"
				}
			} else
			{
			_rnd = random 4;
			if (_rnd < 1) then 
				{
				_divA = "2418i"
				};
			if (_rnd >= 1) then
				{
		 		_divA = "3i221"
				};
			if (_rnd >= 2) then
				{
		 		_divA = "1a16i"
				};
			if (_rnd >= 3) then
				{
		 		_divA = "1i22i"
				};
			if (_rnd >= 4) then
				{
				_divA = "2418i"
				}
			};
		};
	};
if (_divA == "none") then
	{
	_divA = "ch_no"
	};
if (_emb == "random") then 
	{
	_rnd = random 3;
	if (_rnd < 1) then 
		{
		_emb = "alpha"
		};
	if (_rnd >= 1) then
		{
		 _emb = "bravo"
		};
	if (_rnd >= 2) then
		{
		 _emb = "char"
		};
	if (_rnd >= 3) then
		{
		 _emb = "delta"
		};
	};
if (_emb == "none") then
	{
	_emb = "no"
	};	
if (_emb == "alpha") then 
	{
	_MPemb = 1
	} else
	{
	if (_emb == "bravo") then 
		{
		_MPemb = 2
		} else
		{
		if (_emb == "char") then
			{
			_MPemb = 3
			} else
			{
			if (_emb == "delta") then
				{
				_MPemb = 4
				} else
				{
				_MPemb = 0
				};
			};
		};
	};
if (_divA == "2418i") then 
	{
	_MPdiv = 1
	} else
	{
	if (_divA == "1i22i") then 
		{
		_MPdiv = 2
		} else
		{
		if (_divA == "1a16i") then 
			{
			_MPdiv = 3
			} else
			{
			if (_divA == "3i221") then 
				{
				_MPdiv = 4
				} else
				{
				if (_divA == "1a14ada") then 
					{
					_MPdiv = 5
					} else
					{
					if (_divA == "1i14cav") then 
						{
						_MPdiv = 6
						} else
						{
						if (_divA == "247cav") then 
							{
							_MPdiv = 7
							} else
							{
							if (_divA == "1a3cav5") then 
								{
								_MPdiv = 8
								} else			
								{
								_MPdiv = 0
								};
							};
						};
					};
				};
			};
		};
	};
		
if (format ["%1", CBT_HMMWV_No] == "scalar bool array string 0xfcffffef") then {CBT_HMMWV_No = 0};
CBT_HMMWV_No = CBT_HMMWV_No + 1;
publicVariable "CBT_HMMWV_No";
_no = CBT_HMMWV_No;

call format ["CBT_HMMWV_Object_%1 = _tank", _no];
call format ["CBT_HMMWV_Alpha_%1 = %2", _no, _MPalph];
call format ["CBT_HMMWV_Number1_%1 = %2", _no, _numA];
call format ["CBT_HMMWV_Emblem_%1 = %2", _no, _MPemb];
call format ["CBT_HMMWV_div_%1 = %2", _no, _MPdiv];
if (_type == "normal") then {call format ["CBT_HMMWV_Type_%1 = 0", _no]};
if (! thisIsServer) then {} else
	{
	call format [{publicVariable "CBT_HMMWV_Object_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Alpha_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Number1_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Emblem_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_div_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Net1_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Net2_%1"}, _no];
	call format [{publicVariable "CBT_HMMWV_Type_%1"}, _no];
	};