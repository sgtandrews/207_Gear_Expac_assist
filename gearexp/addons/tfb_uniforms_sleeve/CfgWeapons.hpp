class ItemCore;
class UniformItem;
class Uniform_Base;
/// gloves ///
class tfb_g3_base_w: Uniform_Base
{
	scope = 0;
	scopeArsenal = 0;
	author = "TFB";
	displayName = "Crye G3 Base";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"tfb_uniforms\tex\g3_top_mc_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformClass = "tfb_g3_mc_g_v";
		uniformModel = "-";
		containerClass = "Supply40";
		mass = 40;
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "full";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_r1_g_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G/P/S] (AMC)";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_g_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "on";
		arms = "on";
	};
};
class tfb_g3_mc_r2_g_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G/P/S] (AMC)";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_g_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "on";
		arms = "on";
	};
};
/// hands ///
class tfb_g3_mc_r1_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [P/S] (AMC)";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "on";
		arms = "on";
	};
};
class tfb_g3_mc_r2_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [P/S] (AMC)";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "on";
		arms = "on";
	};
};
/////////////////////////////////////////////
/////////////////NP//////////////////////////
/////////////////////////////////////////////
/// gloves ///
class tfb_g3_mc_r1_np_g_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [G/S] (AMC)";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_np_g_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "quarter";
		gloves = "on";
		pads = "off";
		arms = "on";
	};
};
class tfb_g3_mc_r2_np_g_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [G/S] (AMC)";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_np_g_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "half";
		gloves = "on";
		pads = "off";
		arms = "on";
	};
};
/// hands ///
class tfb_g3_mc_r1_np_s_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/4 Roll [S] (AMC)";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_np_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "quarter";
		gloves = "off";
		pads = "off";
		arms = "on";
	};
};
class tfb_g3_mc_r2_np_s_w: tfb_g3_base_w
{
	scope = 0;
	scopeArsenal = 2;
	displayName = "Crye G3, 1/2 Roll [S] (AMC)";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_np_s_v";
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		sleeves = "half";
		gloves = "off";
		pads = "off";
		arms = "on";
	};
};