comment "
©raedor2005
contact: raedor@mapfact.net
www.mapfact.net
www.dkm-mod.mkdi.net
www.redhammerstudios.com
scripting questions? 
post here: www.mapfact.net/forum/
";
private["_t","_n","_ty","_var","_num1","_num2","_num3","_embl","_embl1","_gvard","_gvard1"];
_t=_this select 0;
_ty=_this select 1;
_embl=[];

if!(_ty in ["resi","normal","arabic","red"])then
	{
	[_t,_ty]exec format["%1DKMM_Numbers.sqs",RHS_PathT80];
	}else
	{
	_num1=_this select 2 select 0;
	_num2=_this select 2 select 1;
	if(count _this select 2==3)then
		{
		_num3=_this select 2 select 2;
		}else{_num3=""};
_n="";
if(_ty=="normal")then{_n="n"};
if(_ty=="resi")then{_n="g"};
if(_ty=="red")then{_n="r"};
if(_ty=="arabic")then{_n="a"};
_t setObjectTexture[0,format["%1%2%3.paa",RHS_PathSigns,_n,_num1]];
_t setObjectTexture[1,format["%1%2%3.paa",RHS_PathSigns,_n,_num2]];
_t setObjectTexture[2,format["%1%2%3.paa",RHS_PathSigns,_n,_num3]];};
if(typeOf _t=="RHS_T80BM1")then{_t setObjectTexture[4,format["%1%2.paa",RHS_PathSigns,RHS_T80s_Possible_Embs select random 7]];};
if(typeOf _t in["RHS_T80B","RHS_T80BV"])then{_t setObjectTexture[7,format["%1%2.paa",RHS_PathSigns,RHS_T80s_Possible_Embs select random 7]];if(random 1<.333)then{_t setObjectTexture[6,format["%1%2.paa",RHS_PathSigns,"russ"]];};};
if(typeOf _t in["RHS_T80U","RHS_T80UD"]&&(random 1<.333))then{_t setObjectTexture[6,format["%1%2.paa",RHS_PathSigns,"russ"]];};