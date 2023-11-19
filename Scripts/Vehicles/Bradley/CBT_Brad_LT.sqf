if (typeOf _this in CBT_BradsWithTOWA) then
	{
	_this removeWeapon "M220_BGM71ETOW"
	};
if (typeOf _this in CBT_BradsWithTOW) then
	{
	_this removeWeapon "M220_BGM71DTOW"
	};
_this animate ["CBT_TOW", 0];
