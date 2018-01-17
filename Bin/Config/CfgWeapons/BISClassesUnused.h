//Primary
class M16 : M16A2{};
class M16S : M16{};
class M16GrenadeLauncher : M16A2_M203{};

//Secondary
class 9K32Launcher : 9K32{};

//Items
class SmokeShell : ANM8{};
class SmokeShellRed : SmokeShell
{
	ammo="SmokeShellRed";
	displayName="$STR_DN_SMOKE_RED";
	displayNameMagazine="$STR_MN_SMOKE_RED";
	shortNameMagazine="$STR_SN_SMOKE_RED";
};

class SmokeShellGreen:SmokeShell
{
	picture="smokeshell";
	ammo="SmokeShellGreen";
	displayName="$STR_DN_SMOKE_GREEN";
	displayNameMagazine="$STR_MN_SMOKE_GREEN";
	shortNameMagazine="$STR_SN_SMOKE_GREEN";
};