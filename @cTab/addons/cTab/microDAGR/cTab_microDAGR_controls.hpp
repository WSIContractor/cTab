// Background definition
#define GUI_GRID_PX_W 2048 // width in pixels
#define GUI_GRID_PX_H 2048 // hight in pixels

// Base bacros to convert pixel space to screen space
#define pxToScreen_X(PIXEL) (PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X;
#define pxToScreen_Y(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y;
#define pxToScreen_W(PIXEL) (PIXEL) / GUI_GRID_PX_W * GUI_GRID_W;
#define pxToScreen_H(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H;

// Map position within background, pixel based
#define cTab_GUI_microDAGR_MAP_X (574)
#define cTab_GUI_microDAGR_MAP_Y (316)
#define cTab_GUI_microDAGR_MAP_W (940)
#define cTab_GUI_microDAGR_MAP_H (1296)

// On-screen edge positions (left, right, top, bottom)
#define cTab_GUI_microDAGR_OSD_MARGIN (24)
#define cTab_GUI_microDAGR_OSD_EDGE_L (cTab_GUI_microDAGR_OSD_MARGIN + cTab_GUI_microDAGR_MAP_X)
#define cTab_GUI_microDAGR_OSD_EDGE_R (-cTab_GUI_microDAGR_OSD_MARGIN + cTab_GUI_microDAGR_MAP_X + cTab_GUI_microDAGR_MAP_W)
#define cTab_GUI_microDAGR_OSD_EDGE_T (cTab_GUI_microDAGR_OSD_MARGIN + cTab_GUI_microDAGR_MAP_Y)
#define cTab_GUI_microDAGR_OSD_EDGE_B (-cTab_GUI_microDAGR_OSD_MARGIN + cTab_GUI_microDAGR_MAP_Y + cTab_GUI_microDAGR_MAP_H)

// On-screen element base width and height
#define cTab_GUI_microDAGR_OSD_ELEMENT_STD_W (25)
#define cTab_GUI_microDAGR_OSD_ELEMENT_STD_H (53)

// On-screen text sizes, hight in pixels
// Standard text elements
#define cTab_GUI_microDAGR_OSD_TEXT_STD_SIZE (42)

/*
// On-screen map centre cursor
#define cTab_GUI_microDAGR_CURSOR (48)
*/
// define colours
#define COLOR_NEON_GREEN {57/255,255/255,20/255,1}
#define COLOR_BLACK {0,0,0,1}
#define COLOR_WHITE {1,1,1,1}

class cTab_RscButton_microDAGR_LeftUp: cTab_RscButtonInv
{
	x = pxToScreen_X(373);
	y = pxToScreen_Y(400);
	w = pxToScreen_W(26);
	h = pxToScreen_H(171);
};
class cTab_RscButton_microDAGR_LeftDown: cTab_RscButton_microDAGR_LeftUp
{
	y = pxToScreen_Y(571);
};
class cTab_RscButton_microDAGR_LeftBtn: cTab_RscButtonInv
{
	x = pxToScreen_X(368);
	y = pxToScreen_Y(829);
	w = pxToScreen_W(31);
	h = pxToScreen_H(184);
};
class cTab_RscButton_microDAGR_RightUp: cTab_RscButton_microDAGR_LeftUp
{
	x = pxToScreen_X(1689);
};
class cTab_RscButton_microDAGR_RightDown: cTab_RscButton_microDAGR_LeftDown
{
	x = pxToScreen_X(1689);
};
class cTab_RscButton_microDAGR_RightBtn: cTab_RscButton_microDAGR_LeftBtn
{
	x = pxToScreen_X(1689);
};

class cTab_RscText_microDAGR: cTab_RscText
{
	style = ST_CENTER;
	w = pxToScreen_W(cTab_GUI_microDAGR_OSD_ELEMENT_STD_W);
	h = pxToScreen_H(cTab_GUI_microDAGR_OSD_ELEMENT_STD_H);
	font = GUI_FONT_MONO;
	colorText[] = COLOR_NEON_GREEN;
	sizeEx = pxToScreen_H(cTab_GUI_microDAGR_OSD_TEXT_STD_SIZE);
	colorBackground[] = COLOR_BLACK;
	shadow = 0;
};
class cTab_microDAGR_RscMapControl: cTab_RscMapControl
{
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = pxToScreen_X(cTab_GUI_microDAGR_MAP_X);
	y = pxToScreen_Y(cTab_GUI_microDAGR_MAP_Y);
	w = pxToScreen_W(cTab_GUI_microDAGR_MAP_W);
	h = pxToScreen_H(cTab_GUI_microDAGR_MAP_H);
	//type = CT_MAP;
	// allow to zoom out further (defines the maximum map scale, usually 1)
	scaleMax = 1000;
	// turn on satellite map information (defines the map scale of when to switch to topographical)
	maxSatelliteAlpha = 10000;
	alphaFadeStartScale = 10;
	alphaFadeEndScale = 10;
	colorBackground[] = {0.969,0.957,0.949,1.0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorForest[] = {0.4,1,0.4,0.5};
	colorForestBorder[] = {0.2,1,0.2,1};
	colorRocks[] = {0.0,0.0,0.0,0.3};
	colorRocksBorder[] = {0.0,0.0,0.0,0.0};
	colorLevels[] = {0,0,0,1};
	colorMainCountlines[] = {0.78,0.44,0.22,1};
	colorCountlines[] = {0.9,0,0,1};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.0};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.0};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorNames[] = {0,0,0,1};
	colorInactive[] = {1.0,1.0,1.0,0.5};
	colorOutside[] = {0.0,0.0,0.0,1.0};
	colorTracks[] = {0.84,0.76,0.65,1.0};
	colorTracksFill[] = {0.84,0.76,0.65,1.0};
	colorRoads[] = {1.0,0.8,0.0,1.0};
	colorRoadsFill[] = {1.0,0.8,0.0,1.0};
	colorMainRoads[] = {1.0,0.6,0.4,1.0};
	colorMainRoadsFill[] = {1.0,0.6,0.4,1.0};

	// Rendering density coefficients
	ptsPerSquareSea = 8 / cTab_microDAGR_DLGtoDSP_fctr;		// seas
	ptsPerSquareTxt = 8 / cTab_microDAGR_DLGtoDSP_fctr;		// textures
	ptsPerSquareCLn = 8 / cTab_microDAGR_DLGtoDSP_fctr;		// count-lines
	ptsPerSquareExp = 8 / cTab_microDAGR_DLGtoDSP_fctr;		// exposure
	ptsPerSquareCost = 8 / cTab_microDAGR_DLGtoDSP_fctr;		// cost

	// Rendering thresholds
	ptsPerSquareFor = 2 / cTab_microDAGR_DLGtoDSP_fctr;		// forests
	ptsPerSquareForEdge = 4 / cTab_microDAGR_DLGtoDSP_fctr;	// forest edges
	ptsPerSquareRoad = 2 / cTab_microDAGR_DLGtoDSP_fctr;		// roads
	ptsPerSquareObj = 4 / cTab_microDAGR_DLGtoDSP_fctr;		// other objects

	/*
	// replace CustomMark with wedding cake icon
	class CustomMark
	{
		icon = "\cTab\img\icon_wedding_cake_ca.paa";
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
		color[] = {1,1,1,1};
		shadow = 1;
	};
	*/
};
