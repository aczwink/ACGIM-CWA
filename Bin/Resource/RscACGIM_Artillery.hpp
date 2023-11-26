class RscACGIM_Artillery
{
    idd = -1;
    movingEnable = true;
    controlsBackground[] = {BGRD,FRAME};
    
    class BGRD : RscText
    {
        type = 0;
        colorBackground[] = {0.4,0.4,0.4,0.6};
        text="";
		x = 0.29;
		y = 0.24;
		w = 0.42;
		h = 0.52;
    };
    
    class FRAME : RscFrame
    {
        colorBackground[] = {0,0,0,0};
		text = "Artillery";
		x = 0.3;
		y = 0.25;
		w = 0.4;
		h = 0.5;
    };

	objects[] = {};
	controls[] = {UnitSelectorStaticText, UnitSelector, UnitCounterStaticText, ScatteringStaticText, AmmoStaticText, CONFIRM, EXIT};

	class UnitSelectorStaticText :  RscText
    {
        style = 0;
		idc = 100;
		x = 0.33;
		y = 0.3;
		w = 0.2;
		h = 0.05;
		text = "Artillery unit";
		size = 0.75;
		lineSpacing = 0.75;
    };

	class UnitSelector :  RscCombo
    {
		idc = 101;
		x = 0.325;
		y = 0.35;
		w = 0.35;
		h = 0.05;
		text = ;
		size = 0.75;
    };

	class UnitCounterStaticText :  RscText
    {
		style = 2;
		idc = 102;
		x = 0.325;
		y = 0.4;
		w = 0.35;
		h = 0.05;
		text = "";
		size = 0.75;
		lineSpacing = 0.75;
    };

	class ScatteringStaticText :  RscText
    {
		style = 2;
		idc = 103;
		x = 0.325;
		y = 0.5;
		w = 0.35;
		h = 0.05;
		text = "";
		size = 0.75;
		lineSpacing = 0.75;
    };

	class AmmoStaticText :  RscText
    {
		style = 2;
		idc = 104;
		x = 0.325;
		y = 0.6;
		w = 0.35;
		h = 0.05;
		text = "";
		size = 0.75;
		lineSpacing = 0.75;
    };

	class CONFIRM :  RscActiveText
    {
		style = 2;
		idc = 105;
		x = 0.5;
		y = 0.7;
		w = 0.2;
		h = 0.05;
		text = "OK";
		size = 0.75;
		action = "ACGIM_ARTfire = true"
    };

	class EXIT :  RscActiveText
    {
        style = 2;
		idc = 106;
		x = 0.3;
		y = 0.7;
		w = 0.2;
		h = 0.05;
		text = "Cancel";
		size = 0.75;
		action = "closeDialog 0"
    };
};
