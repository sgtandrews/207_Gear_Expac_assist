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
	picture = "tfb_uniforms\ui\g3_mc_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
		top = "mc";
		bottom = "mc";
		sleeves = "full";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_g_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, Full (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_g_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "full";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_r1_g_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, quarter Roll (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_g_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "quarter";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_r2_g_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, quarter Roll (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_g_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "half";
		gloves = "on";
		pads = "on";
		arms = "off";
	};
};
/// hands ///
class tfb_g3_mc_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, Full (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "full";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_r1_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, quarter Roll (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r1_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "quarter";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};
class tfb_g3_mc_r2_w: tfb_g3_base_w
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "Crye G3, half Roll (MC)";
	class ItemInfo: ItemInfo
	{
		uniformClass = "tfb_g3_mc_r2_v";
	};
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots",
		"_patchR", 
		"_patchL"
	};
	class XtdGearInfo
	{
		model = "tfb_g3_u";
		top = "mc";
		bottom = "mc";
		sleeves = "half";
		gloves = "off";
		pads = "on";
		arms = "off";
	};
};