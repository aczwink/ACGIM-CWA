private["_path", "_pathNum", "_tank", "_type", "_divA", "_emb", "_name1", "_num1", "_var", "_numA", "_rnd"];
_path = "\acgim_scripts\Vehicles\Bradley\";
_pathNum = "\d4t_tex\bradley\m\";
_tank = _this select 0;
_type = _this select 1;
_divA = _this select 2;
_emb = _this select 3;
_name1 = "ch_";

if (_type == "normal") then
	{
	_numA = _this select 4;
	};	
if (_type == "random") then
	{
	_type = "normal";
	_num1 = random 48;
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
		_numA = "a11"
		};
	if (_num1 >= 1) then 
		{
		_numA = "a12"
		};
	if (_num1 >= 2) then 
		{
		_numA = "a13"
		};
	if (_num1 >= 3) then 
		{
		_numA = "a14"
		};
	if (_num1 >= 4) then 
		{
		_numA = "a21"
		};	
	if (_num1 >= 5) then 
		{
		_numA = "a22"
		};
	if (_num1 >= 6) then 
		{
		_numA = "a23"
		};
	if (_num1 >= 7) then 
		{
		_numA = "a24"
		};
	if (_num1 >= 8) then 
		{
		_numA = "a31"
		};
	if (_num1 >= 9) then 
		{
		_numA = "a32"
		};
	if (_num1 >= 10) then 
		{
		_numA = "a33"
		};
	if (_num1 >= 11) then 
		{
		_numA = "a34"
		};
	if (_num1 >= 12) then 
		{
		_numA = "b11"
		};
	if (_num1 >= 13) then 
		{
		_numA = "b12"
		};
	if (_num1 >= 14) then 
		{
		_numA = "b13"
		};
	if (_num1 >= 15) then 
		{
		_numA = "b14"
		};
	if (_num1 >= 16) then 
		{
		_numA = "b21"
		};	
	if (_num1 >= 17) then 
		{
		_numA = "b22"
		};
	if (_num1 >= 18) then 
		{
		_numA = "b23"
		};
	if (_num1 >= 19) then 
		{
		_numA = "b24"
		};
	if (_num1 >= 20) then 
		{
		_numA = "b31"
		};
	if (_num1 >= 21) then 
		{
		_numA = "b32"
		};
	if (_num1 >= 22) then 
		{
		_numA = "b33"
		};
	if (_num1 >= 23) then 
		{
		_numA = "b34"
		};
	if (_num1 >= 24) then 
		{
		_numA = "c11"
		};
	if (_num1 >= 25) then 
		{
		_numA = "c12"
		};
	if (_num1 >= 26) then 
		{
		_numA = "c13"
		};
	if (_num1 >= 27) then 
		{
		_numA = "c14"
		};
	if (_num1 >= 28) then 
		{
		_numA = "c21"
		};	
	if (_num1 >= 29) then 
		{
		_numA = "c22"
		};
	if (_num1 >= 30) then 
		{
		_numA = "c23"
		};
	if (_num1 >= 31) then 
		{
		_numA = "c24"
		};
	if (_num1 >= 32) then 
		{
		_numA = "c31"
		};
	if (_num1 >= 33) then 
		{
		_numA = "c32"
		};
	if (_num1 >= 34) then 
		{
		_numA = "c33"
		};
	if (_num1 >= 35) then 
		{
		_numA = "c34"
		};
	if (_num1 >= 36) then 
		{
		_numA = "d11"
		};
	if (_num1 >= 37) then 
		{
		_numA = "d12"
		};
	if (_num1 >= 38) then 
		{
		_numA = "d13"
		};
	if (_num1 >= 39) then 
		{
		_numA = "d14"
		};
	if (_num1 >= 40) then 
		{
		_numA = "d21"
		};	
	if (_num1 >= 41) then 
		{
		_numA = "d22"
		};
	if (_num1 >= 42) then 
		{
		_numA = "d23"
		};
	if (_num1 >= 43) then 
		{
		_numA = "d24"
		};
	if (_num1 >= 44) then 
		{
		_numA = "d31"
		};
	if (_num1 >= 45) then 
		{
		_numA = "d32"
		};
	if (_num1 >= 46) then 
		{
		_numA = "d33"
		};
	if (_num1 >= 47) then 
		{
		_numA = "d34"
		};
	};
if (_type == "none") then
	{
	_numA = "ch_no"
	};
if (_divA == "random") then 
	{
	if (typeOf _tank in CBT_BradsCAV) then
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
		if (typeOf _tank in CBT_BradsADA) then
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
if (_type == "normal") then
	{
	_tank setObjectTexture [0, format ["%1%2.paa", _pathNum, _divA]];
	_tank setObjectTexture [1, format ["%1%2.paa", _pathNum, _numA]];
	};
	
if (typeOf _tank in CBT_BradsWithChevrons) then
	{
	_tank setObjectTexture [2, format ["%1%2%3.paa", _pathNum, _name1, _emb]];
	};
