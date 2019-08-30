class AD_CfgRestarts {
	/*
		Server Messages will be:
		30 minutes
		15 minutes
		10 minutes
		5 minutes
		2 minutes
	*/
    EnanbleRestartMessages  = 1;   // 0 = No / 1 = yes

    ServerRestartTime      	= 14400;// 14400 seconds = 4 hour restart

    Restart_Message 		= "Warning: Server Restart In"; //x minutes will be appear
};

class AD_ServerRestart {
	idd = -1;
	duration = 10;
	movingEnable = 0;
	fadein = 2;
	fadeout = 2;
	name = "AD_ServerRestart";
	onLoad = "uiNamespace setVariable ['AD_ServerRestart',_this select 0]";
	class controls {
		class Background: RscText
		{
			idc = 2200;
			colorbackground[] = {0,0,0,0.7};
			x = -0.000156274 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 1.00031 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Text: RscText
		{
			idc = 2201;
			text = "ERROR#Walker";
			style = 2;
			font = "PuristaMedium";
			sizeEx="4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.85";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};