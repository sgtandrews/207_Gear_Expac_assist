class B_Soldier_F;
// gloves ///
class tfb_g3_base_v: B_Soldier_F
{
	scope = 0;
	camouflage = 1;
	scopeArsenal = 0;
	author = "TFB";
	model = "\tfb_uniforms\mesh\tfb_g3_g.p3d";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	uniformClass = "tfb_g3_mc_g_w";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
};
class tfb_g3_mc_r1_g_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r1_g_s.p3d";
	uniformClass = "tfb_g3_mc_r1_g_s_w";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs",  
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\gunglove_grey_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
class tfb_g3_mc_r2_g_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r2_g_s.p3d";
	uniformClass = "tfb_g3_mc_r2_g_s_w";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\gunglove_grey_co.paa",
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
/// hands ///
class tfb_g3_mc_r1_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r1_s.p3d";
	uniformClass = "tfb_g3_mc_r1_g_s_w";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
class tfb_g3_mc_r2_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r2_s.p3d";
	uniformClass = "tfb_g3_mc_r3_g_s_w";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
/////////////////////////////////////////////
/////////////////NP//////////////////////////
/////////////////////////////////////////////
// gloves ///
class tfb_g3_mc_r1_np_g_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r1_g_s.p3d";
	uniformClass = "tfb_g3_mc_r1_g_s_w";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\gunglove_grey_co.paa", 
		"", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
class tfb_g3_mc_r2_np_g_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r2_g_s.p3d";
	uniformClass = "tfb_g3_mc_r2_g_s_w";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_gloves", 
		"_pads", 
		"cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa", 
		"tfb_uniforms\tex\gunglove_grey_co.paa", 
		"", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
/// hands ///
class tfb_g3_mc_r1_np_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r1_s.p3d";
	uniformClass = "tfb_g3_mc_r1_np_s_w";
	picture = "\tfb_uniforms\ui\g3_mc_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa",  
		"", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};
class tfb_g3_mc_r2_np_s_v: tfb_g3_base_v
{
	scope = 2;
	scopeArsenal = 2;
	model = "\tfb_uniforms_sleeve\mesh\tfb_g3_r2_s.p3d";
	uniformClass = "tfb_g3_mc_r2_np_s_w";
	picture = "\tfb_uniforms\ui\uni1_ca.paa";
	hiddenSelections[] = 
	{
		"_top", 
		"_bottom", 
		"_pads", 
		"_cuffs", 
		"_boots", 
		"_sleeves",
		"_patchR", 
		"_patchL"
	};
	hiddenSelectionsTextures[] = 
	{
		"tfb_uniforms\tex\g3_top_mc_co.paa", 
		"tfb_uniforms\tex\g3_bottom_mc_co.paa",  
		"", 
		"tfb_uniforms\tex\cuffs_mc_co.paa", 
		"tfb_uniforms\tex\salomon_brown_co.paa", 
		"tfb_uniforms_sleeve\tex\sleeve_blk_co.paa",
		"tfb_uniforms\tex\patch\207_CO.paa",
		"tfb_uniforms\tex\patch\207_CO.paa"
	};
};