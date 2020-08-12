#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0xB57F88F0123F4C38();
	if (unk_0xB3260A60545D3F11() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_161())
	{
		Global_4268489 = 99;
		Global_4268490 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4268489 = 0;
		Global_4268490 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_160();
	if (func_159(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_158();
	iLocal_63 = unk_0xD68EA767274B7444();
	if (Global_19431 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_21838 = 0;
	Global_21839 = 0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xC41A92C76262185C(unk_0x16F2683693E537C9()))
		{
			Global_21838 = 1;
		}
		if (unk_0xB541E437375DFA3D())
		{
			Global_21838 = 1;
		}
		if (unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0))
		{
			Global_21838 = 1;
		}
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			Global_21838 = 1;
		}
		if (unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
		{
			Global_21838 = 1;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_21838 = 1;
			}
			iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if ((((unk_0x134B62B726CEC8E6(iLocal_99) == joaat("rhino") || unk_0x134B62B726CEC8E6(iLocal_99) == joaat("cutter")) || unk_0x134B62B726CEC8E6(iLocal_99) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iLocal_99) == -1435527158) || (unk_0x134B62B726CEC8E6(iLocal_99) == -212993243 && unk_0x137240CA2BADB0D2(iLocal_99, func_157(unk_0x16F2683693E537C9(), 1))))
			{
				Global_21838 = 1;
			}
			else if (unk_0xA30B8362589C124A(iLocal_99, -1, 0) == unk_0x16F2683693E537C9())
			{
				if (unk_0x30C0A7C378403357(iLocal_99) > 0f)
				{
					if (!Global_76622)
					{
						if (!func_156())
						{
							unk_0xD1F0F33C375B8446(unk_0x16F2683693E537C9(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76622)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0);
		}
	}
	unk_0x0674E58A79778E99(&Global_7356, 21);
	func_155(0);
	unk_0x5D96D8530B3D0904(&Global_7356, 17);
	if (Global_19428 == 0)
	{
		func_154();
	}
	else
	{
		uLocal_91 = unk_0xB01F55A0FD1CFD49("camera_gallery");
		uLocal_92 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		while (!unk_0x83D8570832F172A7(uLocal_91) || !unk_0x83D8570832F172A7(uLocal_92))
		{
			wait(0);
			unk_0xC2127C0F64D6A3B9();
			unk_0x38C3A68D7861DCFD(0, 25, 1);
		}
		if (Global_76622)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_153())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_152(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_151(uLocal_91, "CLOSE_SHUTTER");
		unk_0x7E60C62A7CE58FC8(Global_19467, "DISPLAY_VIEW");
		unk_0x3CAEA85DA607305E(16);
		unk_0x7E60D21B163E9D56();
	}
	vLocal_41 = { Global_19446 };
	vLocal_42 = { Global_19439[Global_19431 /*3*/] };
	Global_21839 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0x0674E58A79778E99(&Global_7358, 3);
	}
	func_149();
	unk_0xD9ACBBA59FD5A09E(4);
	if (unk_0xF026D357757F5F6A())
	{
	}
	if (Global_4456448.f_227352)
	{
	}
	if (Global_4456448.f_227354 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		wait(0);
		unk_0x558EC149EB2BC0A2(0, Global_19455);
		unk_0x558EC149EB2BC0A2(0, 186);
		unk_0xC2127C0F64D6A3B9();
		unk_0x38C3A68D7861DCFD(0, 25, 1);
		unk_0x38C3A68D7861DCFD(0, 0, 1);
		if (func_148())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
			{
				unk_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_111638.f_14046.f_81)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 13))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_148())
						{
							unk_0x5D96D8530B3D0904(&Global_4269765, 13);
							Global_111638.f_14046.f_81 = 1;
							func_147("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x798A3F1296751F46())
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
			}
			unk_0x3584F71E5CA29322(7);
			func_146();
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 200, 1);
			}
			unk_0x38C3A68D7861DCFD(0, 44, 1);
			unk_0x38C3A68D7861DCFD(0, 47, 1);
			unk_0x38C3A68D7861DCFD(0, 91, 1);
			unk_0x38C3A68D7861DCFD(0, 92, 1);
			unk_0x38C3A68D7861DCFD(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0x558EC149EB2BC0A2(0, Global_19459);
			}
			unk_0x558EC149EB2BC0A2(0, Global_19456);
			if ((unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37()) && !func_148())
			{
				iLocal_81 = 1;
				Global_19486.f_1 = 3;
				unk_0x21387C9EECC2B220(0);
			}
			if (unk_0x1C53FD812DB1E31C())
			{
				Global_19486.f_1 = 3;
				unk_0x21387C9EECC2B220(0);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
			{
				Global_19486.f_1 = 3;
				unk_0x21387C9EECC2B220(0);
			}
			if (unk_0x8CD06866876216F2())
			{
				if (func_135())
				{
					Global_19486.f_1 = 3;
					unk_0x21387C9EECC2B220(0);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
				{
					Global_19486.f_1 = 3;
					unk_0x21387C9EECC2B220(0);
				}
				if ((unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
				{
					if (func_134())
					{
					}
					else
					{
						Global_19486.f_1 = 3;
						unk_0x21387C9EECC2B220(0);
					}
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					if (Global_76622 == 1)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xFC0E4F7E386C43F8(unk_0x16F2683693E537C9()) > 0.3f)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					func_133();
					iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0x30C0A7C378403357(iLocal_99) < 0f)
					{
						func_130(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0xCD5FC883CEFE0289())
							{
								func_130(0);
							}
						}
						else if (!unk_0xCD5FC883CEFE0289())
						{
							iLocal_67 = 1;
							wait(0);
							unk_0xC2127C0F64D6A3B9();
						}
					}
				}
				else if (Global_76622 == 0)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_7356, 18))
					{
						func_129();
						if ((Global_19486 == 0 || Global_19486 == 1) || Global_19486 == 2)
						{
							if (!unk_0xFBF1556B75C783FC(unk_0x16F2683693E537C9()))
							{
								if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
								{
								}
								else
								{
									Global_19486.f_1 = 3;
									unk_0x21387C9EECC2B220(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_128();
			}
			if (Global_19486.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_126();
									if (Global_21843 == 0 && Global_21840 == 6)
									{
										unk_0x2CBCC7DC0EEFF804(0, 1);
										unk_0xBBCE9616B024A2BF();
										iLocal_100 = 0;
										func_125();
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
										{
											vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
										}
										func_124();
										iLocal_60++;
										if (func_161())
										{
											func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_118();
									}
									if (Global_21840 == 0)
									{
										iLocal_100 = 0;
										unk_0xBBCE9616B024A2BF();
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
										{
											vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
										}
										func_117();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_118();
										if (func_161())
										{
											if (Global_4268490 == 0)
											{
												if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
												{
													func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
										{
											func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_116();
										func_115(1);
									}
								}
								else if (Global_19486.f_1 != 9)
								{
									if (Global_21839 == 1)
									{
										if (Global_21838 == 0)
										{
											func_114();
										}
									}
									else if ((Global_7964 - Global_7963) > Global_7965)
									{
										if (unk_0x757EF87A33649210() && func_113())
										{
											if (func_112() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x21387C9EECC2B220(0);
												unk_0x55D0A2DB35045A35(iLocal_63);
												iLocal_94 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													unk_0x2CBCC7DC0EEFF804(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_111(0, 0);
													func_115(0);
													iLocal_66 = 0;
													func_106(1);
													iLocal_93 = 0;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_102(1);
												}
											}
										}
										if (func_101(2, Global_19454, 0))
										{
											if (func_148())
											{
												if (((Global_1662006 || Global_1312791) || Global_21841) || unk_0xEAE0D21A50E6C7F4(Global_7356, 21))
												{
												}
												else if (func_112() && iLocal_78)
												{
												}
												else if (!func_113())
												{
													if (iLocal_78 == 0)
													{
														unk_0x53491B90E4FD0E56(500);
														iLocal_94 = 0;
														func_104(1, 1);
														func_100(1);
													}
												}
											}
											else if (func_112() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x21387C9EECC2B220(0);
												unk_0x55D0A2DB35045A35(iLocal_63);
												iLocal_94 = 0;
												if (Global_21838 == 0)
												{
													func_124();
													Global_21838 = 1;
													unk_0x2CBCC7DC0EEFF804(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_111(0, 0);
													func_115(0);
													iLocal_66 = 0;
													func_106(1);
													iLocal_93 = 0;
													func_104(0, 1);
													func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0xFEBC1E4EC9E001F0())
										{
											func_99();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_99();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
										{
											func_99();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
									{
										func_99();
										iLocal_53 = 0;
									}
									if (Global_21838 == 1)
									{
										func_88();
									}
									else if (Global_19486.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_84();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_117();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
												{
													if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
													{
														func_151(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x1C0640BA9A7327B3();
														while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_88) && Global_19486.f_1 > 3)
														{
															func_146();
															func_128();
															func_83();
															unk_0xC2127C0F64D6A3B9();
															wait(0);
														}
													}
												}
												if (func_161())
												{
													if (Global_4268490 == 0)
													{
														if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
														{
															func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
												{
													func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_128();
												func_146();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_118();
												iLocal_87 = 0;
												func_151(uLocal_91, "OPEN_SHUTTER");
											}
											func_116();
											func_115(1);
											func_82();
										}
									}
									if (iLocal_94 == 1)
									{
										func_79();
									}
									if (iLocal_80)
									{
										if (timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0x5D96D8530B3D0904(&Global_7356, 18);
											if (Global_21838 == 0)
											{
												func_104(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_21838 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_21841 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19486.f_1 > 3)
					{
						if (Global_21839 == 1)
						{
							if (Global_21838 == 0)
							{
								func_114();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0x26F0988F7719D17A();
					switch (iVar0)
					{
						case -1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0xBFC0798A6E3417F9(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_104(0, 1);
					}
					if (unk_0xBFC0798A6E3417F9(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0xB9132A06AE472728(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_104(0, 1);
							iLocal_104 = 0;
							unk_0xFCA5A13B82D72982("Gallery");
							unk_0xAD1F66EB453E6BCC();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0x33A494591F2C1975())
					{
						if (unk_0xBFC0798A6E3417F9(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_104(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0xBFC0798A6E3417F9(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_104(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0x33A494591F2C1975())
					{
						if (unk_0xBFC0798A6E3417F9(2, Global_19458))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_104(0, 1);
							if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x1C0640BA9A7327B3();
							unk_0xB0A3CB46BE5B746A(1);
						}
					}
				}
				else if (unk_0xBFC0798A6E3417F9(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_104(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x1C0640BA9A7327B3();
		if (func_148())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
			{
				unk_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_111(0, 0);
			func_115(0);
			iLocal_66 = 0;
			func_106(1);
			Global_21838 = 0;
			Global_21839 = 0;
			Global_21841 = 0;
			unk_0xE17FDF9E3068281B(&uLocal_91);
			unk_0xE17FDF9E3068281B(&uLocal_92);
			unk_0x21387C9EECC2B220(0);
			if (Global_19666 == 1)
			{
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			else
			{
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			unk_0x2CBCC7DC0EEFF804(0, 1);
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 1);
			unk_0x0674E58A79778E99(&Global_7358, 3);
			unk_0x0674E58A79778E99(&Global_4269765, 3);
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_21842 = 1;
			unk_0x55D0A2DB35045A35(iLocal_63);
			unk_0x43A06902454A1172(iLocal_63);
			unk_0xBBCE9616B024A2BF();
			func_106(1);
			unk_0xA6CB86BCFE04B70C(0);
			unk_0x40861FC5E44959D6(0);
			unk_0x902FD904CBCE9316(1f);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0);
				unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				unk_0xF5A41F3D3B38EFE3(sLocal_20[Global_4268490]);
			}
			unk_0x0674E58A79778E99(&Global_7356, 18);
			if (func_148())
			{
				func_104(1, 1);
			}
			else
			{
				func_104(0, 1);
			}
			if (func_159(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x6470351B03D8DD60(1);
		}
		else if (Global_19486.f_1 > 3)
		{
			unk_0x6470351B03D8DD60(0);
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = unk_0x57AA1C471AF0568D(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0xDD995CB5829FBD05();
			iLocal_61 = unk_0x1B872EA843C90348();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0x83D8570832F172A7(uLocal_91))
					{
						if (func_161())
						{
							if (Global_4268490 == 0)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
								{
									func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
							{
								func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x83D8570832F172A7(uLocal_91))
				{
					func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0xBBCE9616B024A2BF();
			break;
		
		case 1:
			if (!unk_0x3BBE4BCFD1B36E4B())
			{
				unk_0xFCC7D1ED80D1900C("CELL_SPINNER2");
				unk_0x9A681BEC95A1B92E(1);
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_19486.f_1 = 3;
				Global_21842 = 1;
			}
			unk_0xBBCE9616B024A2BF();
			break;
	}
}

void func_5()
{
	if (func_101(2, Global_19455, 0))
	{
		func_1(0);
		if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
			unk_0x21387C9EECC2B220(0);
			settimerb(0);
			func_125();
			iLocal_78 = 0;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			}
			func_124();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7357, 14))
			{
				func_147("CELL_299", -1);
			}
			else
			{
				func_124();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_104(1, 1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_146();
			unk_0xC2127C0F64D6A3B9();
			func_83();
			func_133();
			func_128();
		}
		unk_0x21387C9EECC2B220(0);
		func_125();
		settimerb(0);
		iLocal_78 = 0;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
		func_118();
		func_124();
	}
	if (func_101(2, Global_19459, 0))
	{
		func_1(0);
		if (func_112() || unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
		}
		else
		{
			unk_0x21387C9EECC2B220(0);
			settimerb(0);
			iLocal_87 = 1;
			func_125();
			iLocal_78 = 0;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			}
			func_124();
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			func_1(0);
			unk_0x21387C9EECC2B220(0);
			unk_0x918CFFD78ECE297E(0, 0);
			wait(0);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			wait(0);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			unk_0xFBFE41B3E19EA531();
			unk_0xAA23F71817ABF488();
			Global_21842 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_104(0, 1);
			Global_21838 = 1;
			unk_0x2CBCC7DC0EEFF804(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_66 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				unk_0x5D96D8530B3D0904(&Global_7356, 9);
			}
			iLocal_93 = 0;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Accept", &Global_19475, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_21843 = 1;
	unk_0x2CBCC7DC0EEFF804(0, 1);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_19486.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_74();
		func_70();
		func_69();
		fLocal_36 = unk_0xB2F0F5DA9031A63E();
		fLocal_37 = unk_0x21E534C9D41C0779();
		if (iLocal_84 == 0)
		{
			if (unk_0x06F8112AA79C53D9(2, iVar0) && !unk_0x06F8112AA79C53D9(2, iVar1))
			{
				iLocal_84 = 1;
				func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 179, true), func_65());
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_64();
				unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
				unk_0x7C19E5E4784BD7CF(fLocal_40);
				unk_0x7E60D21B163E9D56();
				func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x06F8112AA79C53D9(2, iVar0) || unk_0x06F8112AA79C53D9(2, iVar1))
		{
			iLocal_84 = 0;
			func_118();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0x06F8112AA79C53D9(2, iVar1) && !unk_0x06F8112AA79C53D9(2, iVar0))
			{
				iLocal_85 = 1;
				func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
					func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 179, true), func_65());
				}
				else if (!func_148())
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
				}
				else
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
					func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
				}
				func_63();
				unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
				unk_0x7C19E5E4784BD7CF(fLocal_40);
				unk_0x7E60D21B163E9D56();
				func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x06F8112AA79C53D9(2, iVar1) || unk_0x06F8112AA79C53D9(2, iVar0))
		{
			iLocal_85 = 0;
			func_118();
		}
	}
	else
	{
		unk_0xEAB026E686C0D991(0, 2, 1);
		unk_0xEAB026E686C0D991(0, 1, 1);
	}
	if (unk_0xB8E3620B82AD47D7(2))
	{
		func_118();
	}
	func_133();
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 200, 1);
	}
	if (func_148())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
		{
			unk_0x5D96D8530B3D0904(&Global_4269765, 2);
			func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((unk_0xBFC0798A6E3417F9(2, 183) && iLocal_106 == 0) && !func_148())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					unk_0x0674E58A79778E99(&Global_4269765, 2);
					if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
					{
						func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&Global_4269765, 2);
					func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0x7E60C62A7CE58FC8(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(false);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(true);
			unk_0x7E60D21B163E9D56();
		}
		if (!func_61(14))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_4269765, 10))
			{
				if ((Global_76622 == 0 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0) && func_60())
				{
					unk_0x7E60C62A7CE58FC8(uLocal_91, "SET_FOCUS_LOCK");
					unk_0x1200CC973A2399C8(true);
					unk_0x7ACC3006A87F8B39("CELL_ACTTL");
					unk_0xD06AC7C87A34A6AD(unk_0x19C9F30A7697B43C(&Global_4270750));
					unk_0x779B34565F4D71B1();
					unk_0x1200CC973A2399C8(false);
					unk_0x7E60D21B163E9D56();
					unk_0x0674E58A79778E99(&Global_4269765, 10);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_4269765, 10))
		{
			unk_0x0674E58A79778E99(&Global_4269765, 10);
		}
		iLocal_33 = unk_0x1C0640BA9A7327B3();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vLocal_35 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				if (unk_0x0EB28750412C3A5A(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_19486.f_1 = 3;
					unk_0x21387C9EECC2B220(0);
				}
				iLocal_32 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x06F8112AA79C53D9(0, 182) && !func_148())
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			iLocal_83 = 0;
			unk_0x7E60C62A7CE58FC8(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(false);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(true);
			unk_0x7E60D21B163E9D56();
		}
	}
	else if (unk_0x06F8112AA79C53D9(0, 182) && !func_148())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		iLocal_83 = 1;
		if (!func_61(14))
		{
			unk_0x7E60C62A7CE58FC8(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(true);
			func_62("CELL_FOCUS");
			unk_0x1200CC973A2399C8(true);
			unk_0x7E60D21B163E9D56();
		}
	}
	if (func_161())
	{
		if ((unk_0xBFC0798A6E3417F9(2, 186) && iLocal_106 == 0) && !func_148())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
						unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0);
						unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
						if (Global_19486 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0);
						unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
						unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
					}
				}
			}
		}
		if ((unk_0xBFC0798A6E3417F9(2, 185) && iLocal_106 == 0) && !func_148())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x7F8A39872A07D2CE(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xA6CB86BCFE04B70C(1);
							unk_0x40861FC5E44959D6(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0xA6CB86BCFE04B70C(0);
						unk_0x40861FC5E44959D6(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0xA6CB86BCFE04B70C(1);
					unk_0x40861FC5E44959D6(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0xA6CB86BCFE04B70C(0);
					unk_0x40861FC5E44959D6(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_148())
	{
		if (unk_0xBFC0798A6E3417F9(0, 172) && iLocal_106 == 0)
		{
			if (func_161())
			{
				Global_4268490++;
				unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
			}
			if (Global_4268490 == 13)
			{
				func_115(0);
				unk_0x902FD904CBCE9316(1f);
				unk_0xF5A41F3D3B38EFE3(sLocal_20[(Global_4268490 - 1)]);
				Global_4268490 = 0;
				func_59();
				if (iLocal_21 == 1)
				{
					unk_0x0674E58A79778E99(&Global_4269765, 2);
					iLocal_21 = 0;
					func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4268490 > 0 && Global_4268490 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0x0D3BE1DE0262A012(sLocal_20[Global_4268490], 0);
			}
		}
	}
	if (Global_4268490 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0x27117E2CDD4D67C3(sLocal_20[Global_4268490]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xEB2424501D38FCE7())
				{
					func_115(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0x5D96D8530B3D0904(&Global_4269765, 2);
				func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x902FD904CBCE9316(0.25f);
				unk_0x1D86FFCD165BF465(sLocal_20[Global_4268490], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4268490 == 1 || Global_4268490 == 3)
			{
			}
			if (Global_4268490 == 2 || Global_4268490 == 4)
			{
			}
		}
	}
	if ((unk_0xBFC0798A6E3417F9(0, 173) && iLocal_106 == 0) && !func_148())
	{
		if (func_161())
		{
			func_106(0);
			Global_4268489++;
			unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
		}
		if (Global_4268489 == 13)
		{
			Global_4268489 = 0;
		}
		if (Global_4268489 == 0)
		{
			if (func_161())
			{
				func_106(0);
			}
		}
		else
		{
			func_116();
		}
		func_58();
	}
	if ((unk_0xD245978525608929(0, 184) && iLocal_106 == 0) && !func_148())
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Navigate", &Global_19475, 1);
				func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_151(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x1C0640BA9A7327B3();
				while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_90) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					unk_0xC2127C0F64D6A3B9();
					wait(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0x55D0A2DB35045A35(iLocal_63);
					iLocal_82 = 1;
					func_57(1);
					func_56();
					unk_0x5D96D8530B3D0904(&Global_7358, 3);
					iLocal_32 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_57(0);
					iLocal_82 = 0;
					unk_0x0674E58A79778E99(&Global_7358, 3);
				}
				iLocal_86 = unk_0x1C0640BA9A7327B3();
				while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_88) && Global_19486.f_1 > 3)
				{
					func_146();
					func_128();
					func_83();
					unk_0xC2127C0F64D6A3B9();
					wait(0);
				}
				func_151(uLocal_91, "OPEN_SHUTTER");
				if (func_161())
				{
					if (Global_4268490 == 0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
						{
							func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_128();
				func_146();
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0xBFC0798A6E3417F9(0, 40) || unk_0xBFC0798A6E3417F9(0, 41))
			{
				fLocal_65 = unk_0x28DD0038B63F8DB5();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x8AA6DC470ABA63A2(iLocal_63))
					{
						unk_0x4D7F4CC43D4D0DE3(iLocal_63, "Camera_Zoom", &Global_19475, 1);
					}
				}
				else
				{
					unk_0x55D0A2DB35045A35(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0x06F8112AA79C53D9(0, 40) || unk_0x06F8112AA79C53D9(0, 41))
		{
			fLocal_65 = unk_0x28DD0038B63F8DB5();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x8AA6DC470ABA63A2(iLocal_63))
				{
					unk_0x4D7F4CC43D4D0DE3(iLocal_63, "Camera_Zoom", &Global_19475, 1);
				}
			}
			else
			{
				unk_0x55D0A2DB35045A35(iLocal_63);
			}
		}
		else
		{
			unk_0x55D0A2DB35045A35(iLocal_63);
		}
	}
	if ((func_101(2, Global_19455, 0) && !func_113()) && !func_101(2, Global_19454, 0))
	{
		fLocal_38 = unk_0xB2F0F5DA9031A63E();
		fLocal_39 = unk_0x21E534C9D41C0779();
		unk_0x918CFFD78ECE297E(0, 0);
		unk_0x5D96D8530B3D0904(&Global_7356, 21);
		unk_0x55D0A2DB35045A35(iLocal_63);
		iLocal_78 = 1;
		func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_152(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x4D7F4CC43D4D0DE3(-1, "Camera_Shoot", &Global_19475, 1);
		func_151(uLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		unk_0x44FE29702110D5C6(vLocal_43, 0);
		if (!func_161())
		{
			func_106(1);
		}
		Global_21841 = 1;
		unk_0x2CBCC7DC0EEFF804(0, 1);
		while (Global_21840 < 6 && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			func_133();
			unk_0xC2127C0F64D6A3B9();
			wait(0);
		}
		unk_0x130EC2FF22A1FA80(0, 0);
		if (Global_19428)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x1C0640BA9A7327B3();
		while (unk_0x1C0640BA9A7327B3() < (iLocal_86 + iLocal_89) && Global_19486.f_1 > 3)
		{
			func_146();
			func_128();
			func_83();
			unk_0xC2127C0F64D6A3B9();
			wait(0);
		}
		settimera(0);
		func_151(uLocal_91, "OPEN_SHUTTER");
		unk_0x0674E58A79778E99(&Global_7356, 21);
		func_118();
		if (Global_19486.f_1 > 3)
		{
			if (Global_76622)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x9505C13496579D28(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x9505C13496579D28(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x9505C13496579D28(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_115(0);
		}
		func_128();
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
	{
		if (func_101(2, Global_19458, 0))
		{
			unk_0x918CFFD78ECE297E(0, 0);
			wait(0);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			wait(0);
			unk_0xC2127C0F64D6A3B9();
			func_146();
			unk_0xFBFE41B3E19EA531();
			unk_0xAA23F71817ABF488();
			Global_21842 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_21838 = 1;
			unk_0x2CBCC7DC0EEFF804(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
			}
			func_111(0, 0);
			func_115(0);
			iLocal_66 = 0;
			func_106(1);
			if (!Global_2537071.f_6522)
			{
				unk_0x5D96D8530B3D0904(&Global_7356, 9);
			}
			unk_0x21387C9EECC2B220(0);
			iLocal_93 = 0;
			func_152(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_15(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_14(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_61(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_18()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_19(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_19423 = { Global_19439[Global_19431 /*3*/] };
	func_104(0, 1);
	func_111(0, 0);
	func_115(0);
	iLocal_66 = 0;
	func_106(1);
	if (!unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		if (unk_0xF026D357757F5F6A() == 0)
		{
			if (unk_0xA3F916BCE430ED26())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_26(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_26(uParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_26(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_26(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_26(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_26(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_26(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_26(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_26(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_26(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_26(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_26(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_26(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_26(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_26(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_26(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_26(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_26(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_26(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_26(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_26(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_26(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_25(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_26(uParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

var func_27()
{
	return Global_1312745;
}

void func_28()
{
	if (iLocal_106 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_148())
		{
			func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
			func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
		}
		else
		{
			func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
			func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76622 == 0 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
			{
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
				{
					if (!func_148())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
						func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						if (!unk_0x91E3F625EF57450D(0))
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE32F7AC5E6DF304A(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
							}
							func_67(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_148())
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
				{
					if (!func_148())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
						func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
						if (!unk_0x91E3F625EF57450D(0))
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xE32F7AC5E6DF304A(0, 29, true), "CELL_284");
						}
					}
					if (!func_148())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
					}
					if (!func_148())
					{
						if (func_161())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
							}
							func_67(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fLocal_40);
		unk_0x7E60D21B163E9D56();
		func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_67(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0, 174, true), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(unk_0x16F2683693E537C9(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 6;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_39(iParam0);
			if (!iVar3 == -1)
			{
				if (func_38(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_37(iParam0);
			if (!iVar4 == -1)
			{
				if (func_35(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x8CD06866876216F2())
		{
			iVar5 = func_34(iParam0);
			if (!iVar5 == 0)
			{
				if (func_33(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36C584991B4C183F(iParam0, 1);
	return iVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, 0);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 52:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 53:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 54:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 55:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_40(2, 52, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 53, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x0674E58A79778E99(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_67(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0, 172, true), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1672021)
	{
		fParam0 = -1f;
	}
	func_67(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0, 173, true), "CELL_FILTER");
}

void func_51()
{
	if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 183, true), "CELL_GRID");
	func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76622 == 0 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0) && func_60())
		{
			unk_0x7E60C62A7CE58FC8(uLocal_91, "SET_FOCUS_LOCK");
			unk_0x1200CC973A2399C8(true);
			unk_0x7ACC3006A87F8B39("CELL_ACTTL");
			unk_0xD06AC7C87A34A6AD(unk_0x19C9F30A7697B43C(&Global_4270750));
			unk_0x779B34565F4D71B1();
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_52(float fParam0)
{
	func_67(uLocal_92, "SET_DATA_SLOT", fParam0, unk_0xF59058FCB716F903(0, 175, true), "CELL_ACCYC");
}

void func_53()
{
	func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
	func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
	func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_280");
	unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
		func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 179, true), func_65());
		if (iLocal_82)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76622 == 0 && unk_0x8A22C4C08282BF26(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 7f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
			{
				if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
					func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
					if (func_161())
					{
						func_50(6f);
						func_49(7f);
						func_67(uLocal_92, "SET_DATA_SLOT", 8f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						func_50(3f);
						func_49(4f);
						func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
			{
				if (!func_148())
				{
					if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xF59058FCB716F903(2, 183, true), "CELL_GRID");
				func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
				func_67(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
				if (func_161())
				{
					if (!func_148())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 182, true), "CELL_FOCUS");
						}
						func_67(uLocal_92, "SET_DATA_SLOT", 9f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_148())
					{
						if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
					if (func_161())
					{
						if (!func_148())
						{
							func_50(4f);
							func_49(5f);
							func_67(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fLocal_40);
		unk_0x7E60D21B163E9D56();
		func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 39, true), "CELL_284");
	func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_285");
	func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 179, true), func_65());
	func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 177, true), "CELL_281");
	unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_82)
	{
		unk_0xEF6276132B396452(fLocal_36, 1065353216);
		unk_0x2FB9A57162E54BAB(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		unk_0xBBAE59AC07ACB676(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 1)
	{
		if (unk_0x7F8A39872A07D2CE(sLocal_19[Global_4268489], "phone_cam12DUMMY"))
		{
			unk_0xA6CB86BCFE04B70C(0);
			unk_0x40861FC5E44959D6(0);
		}
		else
		{
			unk_0xA6CB86BCFE04B70C(1);
			unk_0x40861FC5E44959D6(1);
		}
	}
}

void func_59()
{
	func_152(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_161())
	{
		if (!Global_1672021)
		{
			unk_0x63D6BFA449464BBF("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if ((unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/] || unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/]) || unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_61(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_62(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_63()
{
	if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 30, true), "CELL_RT_RSTICK");
		func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 1, true), "CELL_RT_RSTICK");
		func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (unk_0x91E3F625EF57450D(2) || unk_0x33A494591F2C1975())
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 3f, unk_0xF59058FCB716F903(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(uLocal_92, "SET_DATA_SLOT", 4f, unk_0xE32F7AC5E6DF304A(0, 1, true), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 5f, unk_0xF59058FCB716F903(0, 39, true), "CELL_LT_LSTICKZ");
		func_67(uLocal_92, "SET_DATA_SLOT", 6f, unk_0xF59058FCB716F903(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

int func_66()
{
	switch (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_33)
	{
		case 233:
			switch (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_181)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1702974)
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_68(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_62(sParam4);
	}
	unk_0x7E60D21B163E9D56();
}

void func_68(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_69()
{
	if (Global_76622)
	{
		switch (Global_21922)
		{
			case 0:
				if (unk_0x91E3F625EF57450D(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21922++;
				break;
			
			case 1:
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (unk_0x91E3F625EF57450D(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21922++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_21921)
		{
			case 0:
				if (unk_0x91E3F625EF57450D(2))
				{
					func_147("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_147("CELL_CAM_SELFIE_0", -1);
				}
				Global_21921++;
				break;
			
			case 1:
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (unk_0x91E3F625EF57450D(2))
					{
						func_147("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_147("CELL_CAM_SELFIE_1", -1);
					}
					Global_21921++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x06F8112AA79C53D9(2, iVar10) && !unk_0x06F8112AA79C53D9(2, iVar9))
	{
		unk_0x38C3A68D7861DCFD(0, 2, 1);
		unk_0x38C3A68D7861DCFD(0, 1, 1);
		iVar0 = floor(unk_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		iVar1 = floor(unk_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		iVar2 = floor(unk_0x8A6BC5D9CAEACD0F(0, 1)) * 127;
		iVar3 = floor(unk_0x8A6BC5D9CAEACD0F(0, 2)) * 127;
		if (unk_0x91E3F625EF57450D(2))
		{
			if (unk_0x51D1D19912234EA0(iVar0) > 28 || unk_0x51D1D19912234EA0(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0x51D1D19912234EA0(iVar2) > 28 || unk_0x51D1D19912234EA0(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x91E3F625EF57450D(2))
		{
			fVar7 = unk_0x8A6BC5D9CAEACD0F(0, 290);
			fVar8 = unk_0x8A6BC5D9CAEACD0F(0, 291);
			if (unk_0x8EB1E94243F14479())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x51D1D19912234EA0(iVar0) > 28 || unk_0x51D1D19912234EA0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!unk_0x06F8112AA79C53D9(2, iVar9))
	{
		unk_0xEAB026E686C0D991(0, 2, 1);
		unk_0xEAB026E686C0D991(0, 1, 1);
	}
}

void func_71(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0xA9D96D93AE7ECD65(fLocal_111);
}

void func_72(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0x0CF455992CB3D99D(fLocal_112);
}

void func_73(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x4F72224D596AEDAC(fLocal_113);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x06F8112AA79C53D9(2, iVar10))
		{
			if (unk_0xBFC0798A6E3417F9(2, 178) && !func_148())
			{
				unk_0xC4F8A794F3E0516C(0.5f);
				unk_0x19267A54C731A20C(0.85f);
				unk_0x9A8FC75B4D08A382(0.5f);
				unk_0x4B5CA41D3DA44D82(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x06F8112AA79C53D9(2, iVar10) && !unk_0x06F8112AA79C53D9(2, iVar11))
	{
		if (unk_0xBFC0798A6E3417F9(2, 178) && !func_148())
		{
			unk_0xC4F8A794F3E0516C(0.5f);
			unk_0x19267A54C731A20C(0.85f);
			unk_0x9A8FC75B4D08A382(0.5f);
			unk_0x4B5CA41D3DA44D82(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0x38C3A68D7861DCFD(0, 2, 1);
		unk_0x38C3A68D7861DCFD(0, 1, 1);
		iVar0 = floor(unk_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		iVar1 = floor(unk_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		iVar2 = floor(unk_0x8A6BC5D9CAEACD0F(0, 1)) * 127;
		iVar3 = floor(unk_0x8A6BC5D9CAEACD0F(0, 2)) * 127;
		if (unk_0x91E3F625EF57450D(2))
		{
			iVar1 = floor(unk_0x8A6BC5D9CAEACD0F(0, 39)) * 127;
			fVar8 = unk_0x8A6BC5D9CAEACD0F(0, 290);
			fVar9 = unk_0x8A6BC5D9CAEACD0F(0, 291);
			if (unk_0x8EB1E94243F14479())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x51D1D19912234EA0(iVar2) > 15 || unk_0x51D1D19912234EA0(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x51D1D19912234EA0(iVar0) > 28 || unk_0x51D1D19912234EA0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
	else if (!unk_0x7FEE810EE9E768EB(2, iVar11))
	{
		unk_0xEAB026E686C0D991(0, 2, 1);
		unk_0xEAB026E686C0D991(0, 1, 1);
	}
	if (!unk_0x7FEE810EE9E768EB(2, iVar10) && !unk_0x7FEE810EE9E768EB(2, iVar11))
	{
		iVar0 = floor(unk_0x8A6BC5D9CAEACD0F(0, 30)) * 127;
		iVar1 = floor(unk_0x8A6BC5D9CAEACD0F(0, 31)) * 127;
		iVar2 = floor(unk_0x8A6BC5D9CAEACD0F(0, 290)) * 127;
		iVar3 = floor(unk_0x8A6BC5D9CAEACD0F(0, 291)) * 127;
		iVar2 = floor(unk_0x8A6BC5D9CAEACD0F(0, 294)) * 127;
		iVar2 = floor(unk_0x8A6BC5D9CAEACD0F(0, 295)) * 127;
		iVar3 = floor(unk_0x8A6BC5D9CAEACD0F(0, 292)) * 127;
		iVar3 = floor(unk_0x8A6BC5D9CAEACD0F(0, 293)) * 127;
		if (unk_0x51D1D19912234EA0(iVar2) > 28 || unk_0x51D1D19912234EA0(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0x51D1D19912234EA0(iVar0) > 28 || unk_0x51D1D19912234EA0(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0x9A8FC75B4D08A382(fLocal_109);
}

void func_76(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x4B5CA41D3DA44D82(fLocal_110);
}

void func_77(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x19267A54C731A20C(fLocal_108);
}

void func_78(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0xC4F8A794F3E0516C(fLocal_107);
}

void func_79()
{
	if (Global_76882 || Global_76883)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0)
			{
				unk_0x6567AE843FADBA94(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_19428)
		{
			if (Global_19664)
			{
				if (iLocal_100 == 0)
				{
					if (Global_19486.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_81(255, 255, 255, 255);
			func_80(0.059f, 0.644f, "CELL_284", 0);
			func_81(255, 255, 255, 255);
			func_80(0.165f, 0.644f, "CELL_285", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.75f, "CELL_280", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19428)
	{
	}
	else
	{
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.75f, func_65(), 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.79f, "CELL_286", 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xD3539A877EC25E86(0.4f, 0.4f);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(1, 0, 0, 0, 205);
	unk_0x57614350887C2EAD(1);
	unk_0x7BBAC160090910C3(0);
	unk_0x7178F32F6742C936(iParam0, iParam1, iParam2, iParam3);
}

void func_82()
{
	unk_0xEF6276132B396452(fLocal_38, 1065353216);
	unk_0x2FB9A57162E54BAB(fLocal_39);
}

void func_83()
{
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 44, 1);
	unk_0x38C3A68D7861DCFD(0, 3, 1);
	unk_0x38C3A68D7861DCFD(0, 4, 1);
	unk_0x38C3A68D7861DCFD(0, 5, 1);
	unk_0x38C3A68D7861DCFD(0, 6, 1);
	unk_0x38C3A68D7861DCFD(0, 1, 1);
	unk_0x38C3A68D7861DCFD(0, 2, 1);
	unk_0x38C3A68D7861DCFD(0, 39, 1);
	unk_0x38C3A68D7861DCFD(0, 47, 1);
	unk_0x38C3A68D7861DCFD(0, 56, 1);
}

void func_84()
{
	vLocal_44 = { Global_19439[Global_19431 /*3*/] };
	if (Global_19428)
	{
		if (func_87())
		{
			unk_0x1CFAC524932A967E(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_7358, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_87() == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7358, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_19432[Global_19431 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x39F06A2B18483C68(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90.3f, 0f, 90f };
			unk_0x44FE29702110D5C6(vLocal_43, 0);
			if (!unk_0xEAE0D21A50E6C7F4(Global_7356, 22))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_85()
{
	func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 178, true), "CELL_277");
		func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_86()
{
	func_152(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_152(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 179, true), func_65());
		func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(uLocal_92, "SET_DATA_SLOT", 2f, unk_0xF59058FCB716F903(2, 179, true), func_65());
		func_67(uLocal_92, "SET_DATA_SLOT", 1f, unk_0xF59058FCB716F903(2, 178, true), "CELL_277");
		func_67(uLocal_92, "SET_DATA_SLOT", 0f, unk_0xF59058FCB716F903(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x7E60C62A7CE58FC8(uLocal_92, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(fLocal_40);
	unk_0x7E60D21B163E9D56();
	func_152(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_61(14))
		{
			return 0;
		}
		if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x00295B14470935CE())
			{
				if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5EB102898326C705(unk_0x16F2683693E537C9()) || unk_0xBADF5264209B7544(unk_0x16F2683693E537C9())) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x00295B14470935CE()))
	{
		iVar2 = 1;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if ((((((((unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar3)) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar3))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar3))) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("rhino")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0 || Global_111638.f_14046.f_89)
		{
			if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	unk_0x38C3A68D7861DCFD(0, 47, 1);
	unk_0x558EC149EB2BC0A2(0, Global_19456);
	vLocal_43 = { Global_19446 };
	vLocal_44 = { Global_19439[Global_19431 /*3*/] };
	if (func_87())
	{
		unk_0xED76A908847D23B4(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		unk_0x1CFAC524932A967E(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_19428)
	{
		func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_82 = 0;
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_89();
		}
		if (iLocal_72)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_87() == 0)
			{
				unk_0x44FE29702110D5C6(vLocal_41, 0);
				unk_0x39F06A2B18483C68(vLocal_42);
			}
			func_104(0, 1);
		}
		else if (func_87() == 0)
		{
			unk_0x44FE29702110D5C6(vLocal_41, 0);
			unk_0x39F06A2B18483C68(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_89();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_89();
		}
	}
	unk_0x44FE29702110D5C6(vLocal_41, 0);
}

void func_89()
{
	func_1(0);
	if (func_87() == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 30))
		{
			unk_0x39F06A2B18483C68(Global_19432[Global_19431 /*3*/]);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19439[Global_19431 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		unk_0x44FE29702110D5C6(vLocal_41, 0);
	}
	Global_21838 = 0;
	func_111(0, 0);
	func_115(0);
	iLocal_66 = 0;
	func_106(1);
	Global_19473 = 1;
	Global_21841 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		Global_19464 = 1;
		func_90();
	}
	if (unk_0x83D8570832F172A7(uLocal_91))
	{
		func_151(uLocal_91, "SHUTDOWN_MOVIE");
	}
	wait(0);
	unk_0xC2127C0F64D6A3B9();
	unk_0xE17FDF9E3068281B(&uLocal_92);
	unk_0xE17FDF9E3068281B(&uLocal_91);
	if (Global_19666 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 17);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 17);
	}
	unk_0x0674E58A79778E99(&Global_7356, 18);
	unk_0x0674E58A79778E99(&Global_7356, 21);
	unk_0x2CBCC7DC0EEFF804(0, 1);
	unk_0x0674E58A79778E99(&Global_7358, 3);
	unk_0x0674E58A79778E99(&Global_4269765, 3);
	unk_0x21387C9EECC2B220(0);
	unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 1);
	unk_0xA5E3ADAAA4CD5D6C(15);
	Global_21842 = 1;
	unk_0x55D0A2DB35045A35(iLocal_63);
	unk_0x43A06902454A1172(iLocal_63);
	unk_0xBBCE9616B024A2BF();
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xDCDFC17557D5706C(unk_0x16F2683693E537C9(), "Mood_Normal_1", 0);
		unk_0x16BEAC335EC5109B(unk_0x16F2683693E537C9());
	}
	func_106(1);
	unk_0xA6CB86BCFE04B70C(0);
	unk_0x40861FC5E44959D6(0);
	unk_0x902FD904CBCE9316(1f);
	if (Global_4268490 > 0 && Global_4268490 < 13)
	{
		unk_0xF5A41F3D3B38EFE3(sLocal_20[Global_4268490]);
	}
	func_104(0, 1);
	if (func_159(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_90()
{
	vector3 vVar0[24];
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!unk_0x83D8570832F172A7(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_98(Global_7961);
			if (Global_7961 == 1)
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_152(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_95();
				unk_0x0674E58A79778E99(&Global_7358, 9);
				func_152(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_94();
				func_152(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_93(Global_6671, Global_19486) == 0)
				{
					func_97(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_97(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_152(Global_19467, "SET_THEME", to_float(Global_111638.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_94();
				if (Global_20818)
				{
					unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_20820);
					unk_0x779B34565F4D71B1();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_93(Global_6671, Global_19486) == 0)
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_97(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_152(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_97(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_152(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_91();
			break;
		
		default:
			break;
	}
}

void func_91()
{
	if (unk_0x83D8570832F172A7(Global_19467))
	{
		func_92();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
		}
		else
		{
			func_97(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_7356, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 20))
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_97(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_92()
{
	if (Global_76622)
	{
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_7356, 17);
	}
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_94()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_95()
{
	if (Global_76622)
	{
		if (func_96() == 0)
		{
			return;
		}
		func_97(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_7356, 17);
	}
}

int func_96()
{
	return 0;
}

void func_97(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_62(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_62(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_62(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_62(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_62(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_61(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_97(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_99()
{
	switch (iLocal_51)
	{
		case 1:
			unk_0x2CBCC7DC0EEFF804(0, 1);
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Global_7356, 22))
			{
				unk_0x2CBCC7DC0EEFF804(0, 1);
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!func_113())
		{
			unk_0x5D96D8530B3D0904(&Global_1687687, 17);
		}
	}
	else if (func_113())
	{
		unk_0x0674E58A79778E99(&Global_1687687, 17);
	}
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(2)))
			{
				return 0;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		if (!func_103())
		{
			unk_0x5D96D8530B3D0904(&Global_1687687, 18);
		}
	}
	else if (func_103())
	{
		unk_0x0674E58A79778E99(&Global_1687687, 18);
	}
}

bool func_103()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 18);
}

void func_104(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_105(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
}

int func_105(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	if ((Global_4456448.f_227351 == 0 && Global_4456448.f_227352 == 0) && !Global_1672021)
	{
		if (func_107(unk_0xD803B885F5E47A62()) && iParam0)
		{
			Global_1703107 = 1;
		}
		else
		{
			unk_0x225CFE81EA219E44();
		}
	}
}

int func_107(int iParam0)
{
	if (iParam0 != func_110())
	{
		if (func_109(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_108(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	return -1;
}

void func_111(int iParam0, int iParam1)
{
	if (Global_4456448.f_227351 == 1)
	{
	}
	else if (Global_4456448.f_227352 == 1)
	{
	}
	else
	{
		unk_0x130EC2FF22A1FA80(iParam0, iParam1);
	}
}

int func_112()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 15))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 17);
}

void func_114()
{
	if (Global_19428)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			unk_0xED76A908847D23B4(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			unk_0x1CFAC524932A967E(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_87() == 0)
		{
			unk_0x44FE29702110D5C6(vLocal_41, 0);
			unk_0x39F06A2B18483C68(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		unk_0x44FE29702110D5C6(vLocal_41, 0);
	}
	if (Global_19428)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_87())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				unk_0x44FE29702110D5C6(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				unk_0x39F06A2B18483C68(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_21839 = 0;
				func_111(1, 1);
				iLocal_66 = 1;
				func_115(1);
				func_59();
				func_116();
				func_57(0);
				settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_128();
				func_152(uLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
				{
					func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_154();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		unk_0x44FE29702110D5C6(vLocal_41, 0);
		Global_21839 = 0;
	}
}

void func_115(bool bParam0)
{
	if (func_161())
	{
		if (bParam0)
		{
			if (!unk_0xEB2424501D38FCE7())
			{
				unk_0xED7EF6862C46961F(1);
				if (Global_4268490 > 0 && Global_4268490 < 99)
				{
					unk_0x1D86FFCD165BF465(sLocal_20[Global_4268490], 0);
					unk_0x902FD904CBCE9316(0.25f);
				}
			}
		}
		else if (unk_0xEB2424501D38FCE7())
		{
			unk_0xED7EF6862C46961F(0);
		}
	}
}

void func_116()
{
	if (Global_4268489 > 0 && Global_4268489 < 99)
	{
		if (!Global_1672021)
		{
			unk_0x63D6BFA449464BBF(sLocal_19[Global_4268489]);
		}
	}
}

void func_117()
{
	if (Global_19428)
	{
		iLocal_76 = 0;
		func_59();
		func_104(1, 1);
		func_111(1, 1);
		iLocal_66 = 1;
		Global_21842 = 1;
	}
}

void func_118()
{
	if (Global_4456448.f_227351 == 1 && func_119())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (unk_0x7F8A39872A07D2CE(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_119()
{
	if (((func_123() || func_122()) || func_121()) || func_120())
	{
		return 1;
	}
	return 0;
}

var func_120()
{
	return Global_2450632.f_19;
}

var func_121()
{
	return Global_2450632.f_17;
}

var func_122()
{
	return Global_2450632.f_16;
}

var func_123()
{
	return Global_2450632.f_15;
}

void func_124()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_125()
{
	unk_0x918CFFD78ECE297E(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_126()
{
	func_127();
}

void func_127()
{
	if (iLocal_101)
	{
		if (timera() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_128()
{
	if (Global_19486.f_1 > 3)
	{
		if (!unk_0x798A3F1296751F46())
		{
			unk_0xEF45C43067063F18(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_129()
{
	if (func_61(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_11();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_130(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_148())
		{
			func_104(1, 1);
		}
		else
		{
			func_104(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_131())
	{
		Global_19486.f_1 = 3;
	}
}

int func_131()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_133()
{
	unk_0x38C3A68D7861DCFD(0, 0, 1);
	unk_0x38C3A68D7861DCFD(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0x558EC149EB2BC0A2(0, Global_19459);
		unk_0x558EC149EB2BC0A2(0, Global_19456);
		unk_0x38C3A68D7861DCFD(0, 278, 1);
		unk_0x38C3A68D7861DCFD(0, 279, 1);
		unk_0x38C3A68D7861DCFD(0, 280, 1);
		unk_0x38C3A68D7861DCFD(0, 281, 1);
		unk_0x38C3A68D7861DCFD(0, 282, 1);
		unk_0x38C3A68D7861DCFD(0, 282, 1);
		unk_0x38C3A68D7861DCFD(0, 284, 1);
		unk_0x38C3A68D7861DCFD(0, 285, 1);
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 114, 1);
		unk_0x38C3A68D7861DCFD(0, 71, 1);
		unk_0x38C3A68D7861DCFD(0, 72, 1);
		unk_0x38C3A68D7861DCFD(0, 74, 1);
		unk_0x38C3A68D7861DCFD(0, 75, 1);
		unk_0x38C3A68D7861DCFD(0, 76, 1);
		unk_0x38C3A68D7861DCFD(0, 73, 1);
		unk_0x38C3A68D7861DCFD(0, 77, 1);
		unk_0x38C3A68D7861DCFD(0, 78, 1);
		unk_0x38C3A68D7861DCFD(0, 286, 1);
		unk_0x38C3A68D7861DCFD(0, 287, 1);
		unk_0x38C3A68D7861DCFD(0, 79, 1);
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		unk_0x38C3A68D7861DCFD(0, 81, 1);
		unk_0x38C3A68D7861DCFD(0, 82, 1);
		unk_0x38C3A68D7861DCFD(0, 86, 1);
		unk_0x38C3A68D7861DCFD(0, 59, 1);
		unk_0x38C3A68D7861DCFD(0, 60, 1);
		unk_0x38C3A68D7861DCFD(0, 61, 1);
		unk_0x38C3A68D7861DCFD(0, 62, 1);
		unk_0x38C3A68D7861DCFD(0, 63, 1);
		unk_0x38C3A68D7861DCFD(0, 64, 1);
		unk_0x38C3A68D7861DCFD(0, 87, 1);
		unk_0x38C3A68D7861DCFD(0, 88, 1);
		unk_0x38C3A68D7861DCFD(0, 89, 1);
		unk_0x38C3A68D7861DCFD(0, 90, 1);
		unk_0x38C3A68D7861DCFD(0, 107, 1);
		unk_0x38C3A68D7861DCFD(0, 108, 1);
		unk_0x38C3A68D7861DCFD(0, 109, 1);
		unk_0x38C3A68D7861DCFD(0, 110, 1);
		unk_0x38C3A68D7861DCFD(0, 111, 1);
		unk_0x38C3A68D7861DCFD(0, 112, 1);
		unk_0x38C3A68D7861DCFD(0, 113, 1);
		unk_0x38C3A68D7861DCFD(0, 114, 1);
		unk_0x38C3A68D7861DCFD(0, 91, 1);
		unk_0x38C3A68D7861DCFD(0, 92, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
		unk_0x38C3A68D7861DCFD(0, 102, 1);
		unk_0x38C3A68D7861DCFD(0, 136, 1);
		unk_0x38C3A68D7861DCFD(0, 137, 1);
		unk_0x38C3A68D7861DCFD(0, 138, 1);
		unk_0x38C3A68D7861DCFD(0, 139, 1);
		unk_0x38C3A68D7861DCFD(0, 102, 1);
	}
}

int func_134()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xBBA8A868118C90ED(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135()
{
	var uVar0;
	
	func_143(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_142())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_141())
	{
		return 1;
	}
	if (func_140(159))
	{
		if (!func_139())
		{
			return 1;
		}
	}
	if (func_140(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_136() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_136()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	switch (func_138())
	{
		case 0:
			return func_137();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_137()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_138()
{
	return Global_30768;
}

bool func_139()
{
	return Global_2450632.f_598;
}

int func_140(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	return Global_2460680;
}

bool func_142()
{
	return Global_2450632.f_593;
}

void func_143(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_144(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar3, 4);
					if (vVar3.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_144(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_109(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_145(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_145(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_146()
{
	if (iLocal_106 == 1)
	{
		unk_0x3584F71E5CA29322(7);
		unk_0x3584F71E5CA29322(1);
		unk_0x3584F71E5CA29322(3);
		unk_0x3584F71E5CA29322(4);
		unk_0x3584F71E5CA29322(6);
		unk_0x3584F71E5CA29322(8);
		unk_0x3584F71E5CA29322(9);
		unk_0x3584F71E5CA29322(2);
	}
	else
	{
		unk_0x3FC8DBCC154CA56B();
	}
}

void func_147(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

void func_149()
{
	if (func_150())
	{
		unk_0x9F830D3499A5773E();
		if (unk_0x1ED2F074FDAB6B19(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			unk_0xBBCE9616B024A2BF();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0x83D8570832F172A7(uLocal_91))
				{
					if (func_161())
					{
						if (Global_4268490 == 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
							{
								func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_4269765, 2))
						{
							func_152(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x83D8570832F172A7(uLocal_91))
			{
				func_152(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_152(uLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0xBBCE9616B024A2BF();
	}
}

int func_150()
{
	if (Global_4456448.f_227351 == 1)
	{
		if (Global_76622)
		{
			return 0;
		}
	}
	if (Global_4456448.f_227352 == 1)
	{
		if (Global_76622)
		{
			return 0;
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xBA301E03A078FA59())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7357, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_151(var uParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_152(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

int func_153()
{
	if (Global_76622)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_11();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111638.f_14046[Global_19486 /*20*/].f_7;
}

void func_154()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	Global_21841 = 0;
	iLocal_78 = 0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vLocal_34 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	}
	if (Global_19428)
	{
		while (timera() < iLocal_88)
		{
			wait(0);
			func_128();
			func_83();
			unk_0xC2127C0F64D6A3B9();
		}
		func_151(uLocal_91, "OPEN_SHUTTER");
		func_146();
		func_118();
		iLocal_80 = 1;
		settimerb(0);
	}
	else
	{
		func_111(1, 1);
		func_115(1);
		func_59();
		func_116();
		func_57(0);
		iLocal_66 = 1;
	}
}

void func_155(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 15);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 15);
	}
}

bool func_156()
{
	return Global_1312854;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_158()
{
}

int func_159(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && bParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_160()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
		{
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
			unk_0xC4F8A794F3E0516C(fLocal_107);
			unk_0x19267A54C731A20C(fLocal_108);
			unk_0x9A8FC75B4D08A382(fLocal_109);
		}
		else
		{
			unk_0xC4F8A794F3E0516C(fLocal_107);
			unk_0x19267A54C731A20C(fLocal_108);
			unk_0x9A8FC75B4D08A382(fLocal_109);
		}
	}
	unk_0x4B5CA41D3DA44D82(fLocal_110);
	unk_0xA9D96D93AE7ECD65(fLocal_111);
	unk_0x0CF455992CB3D99D(fLocal_112);
	unk_0x4F72224D596AEDAC(fLocal_113);
	func_56();
}

int func_161()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

