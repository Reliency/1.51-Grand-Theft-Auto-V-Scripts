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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_68();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		wait(0);
		func_67();
		if (unk_0xC844350D5D58C99A(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0x713261485D0F1B6C(iScriptParam_69, 0))
			{
				func_68();
			}
			if (unk_0x63D2C15453688621(iScriptParam_69))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					func_62();
					if (unk_0x7F6DC62EA9922664(iScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_39 = unk_0x57651D42225429CC(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xB39672D8C1F6BB48(uLocal_39))
									{
										unk_0xCADC8175C61F28E5(uLocal_39, 9);
									}
									unk_0x10FAF14A60A0DBE1();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0xE98E714BAA9A8D42("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x9CBC55A05A07FC47(0);
								Global_30828[iLocal_41 /*11*/].f_2 = 0;
								Global_30828[iLocal_41 /*11*/].f_6 = 1;
								Global_30828[iLocal_41 /*11*/] = unk_0x09AC81E49EA267F7(0, 2);
								Global_30828[iLocal_41 /*11*/].f_1 = 0;
								Global_30828[iLocal_41 /*11*/].f_4 = 0;
								Global_30828[iLocal_41 /*11*/].f_7 = 0;
								Global_30828[iLocal_41 /*11*/].f_8 = 0;
								Global_30828[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&iLocal_26);
								func_53();
								func_52();
								wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
							{
								wait(0);
							}
							else if (unk_0xC57D0A75AFA332A3(iLocal_35) && unk_0x10BA239D3B8FDC7F(iLocal_35, 90f))
							{
								if (func_44() || Global_30828[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									unk_0xA37A90C62806D848(1);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_35))
							{
								if (!unk_0x4FC40AB0ECCE6E18(iLocal_35))
								{
									unk_0x4A4806F9D471E491(iLocal_35, true, 0);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_37))
							{
								if (!unk_0x4FC40AB0ECCE6E18(iLocal_37))
								{
									unk_0x4A4806F9D471E491(iLocal_37, true, 0);
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_36))
							{
								if (unk_0x4FC40AB0ECCE6E18(iLocal_36))
								{
									unk_0x4A4806F9D471E491(iLocal_36, false, 0);
								}
							}
							if (!unk_0x7F8A39872A07D2CE(&cLocal_44, "NULL"))
							{
								unk_0x837C600ECEE8ABA2(&cLocal_44, false);
							}
							unk_0x187EF8E398A98A81(0);
							wait(0);
							if (unk_0xC844350D5D58C99A(iLocal_38))
							{
								unk_0x2CD9DD012B079672(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_30828[iLocal_41 /*11*/] == 3 || Global_30828[iLocal_41 /*11*/] == 2) || Global_30828[iLocal_41 /*11*/] == -1)
								{
									Global_30828[iLocal_41 /*11*/] = unk_0x09AC81E49EA267F7(0, 2);
								}
								unk_0x188BA9B758DB0D5E(Global_30828[iLocal_41 /*11*/]);
								unk_0x2DF5312E3DA3CB39(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_30828[iLocal_41 /*11*/];
								iLocal_43 = Global_30828[iLocal_41 /*11*/].f_1;
								unk_0xACBA63CD73292795(iLocal_42, func_41(iLocal_43), Global_30828[iLocal_41 /*11*/].f_9);
								unk_0x188BA9B758DB0D5E(iLocal_42);
								if (Global_30828[iLocal_41 /*11*/].f_7)
								{
									Global_30828[iLocal_41 /*11*/].f_5 = 0;
									Global_30828[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_30828[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_30828[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_30828[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_30828[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0x04639A879AC88653() == -1)
								{
									unk_0x188BA9B758DB0D5E(Global_30828[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_30828[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_43(&iLocal_40);
							}
							Global_30828[iLocal_41 /*11*/].f_5 = 0;
							Global_30828[iLocal_41 /*11*/].f_4 = 0;
							Global_30828[iLocal_41 /*11*/].f_1 = 0;
							Global_30828[iLocal_41 /*11*/].f_2 = 0;
							Global_30828[iLocal_41 /*11*/].f_7 = 0;
							Global_30828[iLocal_41 /*11*/].f_8 = 0;
							Global_30828[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x10FAF14A60A0DBE1();
		}
	}
	func_68();
	unk_0x10FAF14A60A0DBE1();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_30828[iLocal_41 /*11*/] = unk_0x04639A879AC88653();
	}
	fLocal_30 = unk_0x16EA32E2BE4AB9D3();
	unk_0x188BA9B758DB0D5E(-1);
	func_4();
	if (unk_0x8A22C4C08282BF26(joaat("family5")) == 0)
	{
		if (!unk_0x7F8A39872A07D2CE(&cLocal_44, "NULL"))
		{
			unk_0x837C600ECEE8ABA2(&cLocal_44, true);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(1);
	}
	func_3();
	func_52();
	if (unk_0xC844350D5D58C99A(iLocal_36))
	{
		if (!unk_0x4FC40AB0ECCE6E18(iLocal_36))
		{
			unk_0x4A4806F9D471E491(iLocal_36, true, 0);
		}
	}
	unk_0xD251FFCFFF3A13CC(0);
	func_2();
}

void func_2()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_67 == 1)
		{
			unk_0xA68C4874B560B1C0();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		unk_0x3039591AD3E735CE(iLocal_33);
		if (unk_0xC844350D5D58C99A(iLocal_35))
		{
			if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4A4806F9D471E491(iLocal_35, false, 0);
				if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_37))
	{
		unk_0x4A4806F9D471E491(iLocal_37, false, 0);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		if (unk_0xFBB4F23D534EB790(iLocal_62))
		{
			unk_0xE3BB8E05FCEB3FBE(iLocal_62, false);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_62, 0);
		unk_0x2FB9A57162E54BAB(0f);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vLocal_31, 1, 0, 2);
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				}
			}
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
		}
		if (!unk_0x7F8A39872A07D2CE(&cLocal_53, "NULL"))
		{
			if (unk_0x562F77A7F33D2E46(&cLocal_53))
			{
				unk_0x8910D3D58E0132B8(&cLocal_53);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0x4A4806F9D471E491(iLocal_37, true, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		unk_0xD251FFCFFF3A13CC(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_14(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_13())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_14(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_10(unk_0xD803B885F5E47A62())) && !func_7(unk_0xD803B885F5E47A62(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_10(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_6()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&iLocal_26) >= 1f && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_68, 1f, 1f, 1.5f, false, true, 0)) && unk_0x4D570FEF9D230CE7(iLocal_35) == unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())) && !func_30(8, -1)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_31, 90f)) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x991B1F0980C62628())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				func_28(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_40, 1))
			{
				func_43(&iLocal_40);
				func_55(&iLocal_26);
				Global_30828[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0xA37A90C62806D848(1);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_65 == 0)
	{
		unk_0x558EC149EB2BC0A2(2, 222);
		if (unk_0xBFC0798A6E3417F9(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x38C3A68D7861DCFD(2, 200, 1);
		if (unk_0x4FC40AB0ECCE6E18(unk_0x16F2683693E537C9()))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
		}
		if (bLocal_34)
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			}
		}
		unk_0x3FC8DBCC154CA56B();
		unk_0x47C6DEE1E7231AC3(unk_0x16F2683693E537C9());
		func_23(1, 1);
		unk_0x558EC149EB2BC0A2(2, 222);
		func_17(0);
		if (unk_0xBFC0798A6E3417F9(2, 222) || (unk_0x91E3F625EF57450D(2) && unk_0x9A01369A10646AFE(2, 200)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (unk_0x04639A879AC88653() == 0)
				{
					unk_0x188BA9B758DB0D5E(1);
				}
				else
				{
					unk_0x188BA9B758DB0D5E(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0DED1C1B8250FA57(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = unk_0x1C0640BA9A7327B3();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x16EA32E2BE4AB9D3();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2DF5312E3DA3CB39(fVar2);
				iLocal_24 = unk_0x1C0640BA9A7327B3();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x1C0640BA9A7327B3() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x0DED1C1B8250FA57(2, 218) - 127);
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vLocal_63, vLocal_64, fVar0, 0, 2);
		unk_0x1EC4A41E2AED1EE1(iLocal_62, 100f);
		unk_0xE3BB8E05FCEB3FBE(iLocal_62, true);
		unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0x4A4806F9D471E491(iLocal_37, false, 0);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				bLocal_34 = true;
			}
			unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vLocal_31, -1, 0, 2);
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
		}
		if (!unk_0x7F8A39872A07D2CE(&cLocal_53, "NULL"))
		{
			if (!unk_0x562F77A7F33D2E46(&cLocal_53))
			{
				unk_0x8BC9595FD2792B5D(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		unk_0xD251FFCFFF3A13CC(1);
		iLocal_65 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (iLocal_67 == 0)
		{
			unk_0x6787351639998696("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

float func_31(int iParam0)
{
	if (func_34(iParam0))
	{
		if (func_33(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_32(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_32(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_33(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x3039591AD3E735CE(iLocal_33);
	unk_0xD9ACBBA59FD5A09E(4);
	unk_0x5DD950F92F816F03(1);
	unk_0xAD77DDB686D4F8D3(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x33D480CCE15C991A(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_30828[iLocal_41 /*11*/].f_7 = 0;
	Global_30828[iLocal_41 /*11*/] = unk_0x04639A879AC88653();
	fLocal_30 = unk_0x16EA32E2BE4AB9D3();
	if (unk_0x562F77A7F33D2E46(&cLocal_53))
	{
		unk_0x8910D3D58E0132B8(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(1);
	}
	func_43(&iLocal_40);
	unk_0x188BA9B758DB0D5E(-1);
	wait(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_39(unk_0xD803B885F5E47A62()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()
{
	if (func_31(&iLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if ((!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_68, 1f, 1f, 1.5f, false, true, 0) || !unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), vLocal_31, 90f)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0x4D570FEF9D230CE7(iLocal_35) != unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_95672)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_30828[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_28(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_40, 1))
	{
		func_43(&iLocal_40);
		func_55(&iLocal_26);
		Global_30828[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0x64F604CF561734A9("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x4D7F4CC43D4D0DE3(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_111374, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_111357, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_111375, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_111358, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_111376, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_111359, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_111377, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_111360, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_111364, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_111381, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_111382, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_50(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_49() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_49()
{
	return Global_30768;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_52()
{
	wait(0);
	if (unk_0xE6CD5C6925050049("tvscreen"))
	{
		unk_0x683413D9B7010687("tvscreen");
		iLocal_33 = -1;
		unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (unk_0xE6CD5C6925050049("tvscreen"))
	{
		unk_0x683413D9B7010687("tvscreen");
	}
	wait(0);
	if (!unk_0xC844350D5D58C99A(iLocal_35))
	{
		func_68();
	}
	iVar0 = unk_0x134B62B726CEC8E6(iLocal_35);
	unk_0x268029E44B2B3E36("tvscreen", 0);
	unk_0x064E7408AD6E15E5(iVar0);
	wait(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0x55CB69E8157C5B54(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_35))
			{
				func_68();
			}
			if (!unk_0x63D2C15453688621(iLocal_35))
			{
				func_68();
			}
			if (!unk_0xE6CD5C6925050049("tvscreen"))
			{
				unk_0x268029E44B2B3E36("tvscreen", 0);
			}
			if (!unk_0x55CB69E8157C5B54(iVar0))
			{
				unk_0x064E7408AD6E15E5(iVar0);
			}
			wait(0);
		}
	}
	iLocal_33 = unk_0x3FF702268B97B673("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0xC844350D5D58C99A(iLocal_35))
	{
		if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = unk_0xB0BE3DFBBB59A620(joaat("v_ilev_mm_screen2"), vLocal_31, true, true, false);
	unk_0xD8F6A53F4799FAFE(iLocal_35, fLocal_32);
	unk_0x1E9649458B15960F(iLocal_35, true);
	unk_0x4A4806F9D471E491(iLocal_35, false, 0);
	iLocal_37 = 0;
	iLocal_37 = unk_0xB0BE3DFBBB59A620(joaat("v_ilev_mm_screen2_vl"), vLocal_31, true, true, false);
	unk_0xD8F6A53F4799FAFE(iLocal_37, fLocal_32);
	unk_0x1E9649458B15960F(iLocal_37, true);
	unk_0x4A4806F9D471E491(iLocal_37, false, 0);
}

void func_55(int iParam0)
{
	func_56(iParam0, 0f);
}

void func_56(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_32(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_59()
{
	vLocal_31 = { unk_0x68F4C0EC296D3901(iLocal_35, true) };
	fLocal_32 = unk_0xD9522BA9E27E1349(iLocal_35);
	func_61();
	if (unk_0x134B62B726CEC8E6(iLocal_35) == -897601557)
	{
		if (vdist(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			vLocal_63 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_64 = { 0f, 0f, -134.3211f };
			vLocal_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (vdist(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			vLocal_63 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_64 = { 0f, 0f, -105.15f };
			vLocal_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (vdist(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			vLocal_63 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_64 = { 0f, 0f, -29.9488f };
			vLocal_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == 1340914825)
	{
		if (vdist(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			vLocal_63 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_64 = { 0f, 0f, 60.061f };
			vLocal_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (vdist(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			vLocal_63 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_64 = { 0f, 0f, -69.0273f };
			vLocal_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (vdist(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			vLocal_63 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_64 = { 1.8886f, 0f, 110.9232f };
			vLocal_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_36 = unk_0xB0BE3DFBBB59A620(joaat("prop_tt_screenstatic"), vLocal_31, true, true, false);
	unk_0xD8F6A53F4799FAFE(iLocal_36, fLocal_32);
	unk_0x4A4806F9D471E491(iLocal_36, true, 0);
	unk_0x1E9649458B15960F(iLocal_36, true);
}

void func_61()
{
	unk_0xACBA63CD73292795(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0xACBA63CD73292795(1, func_41(12), 0);
	}
	else
	{
		unk_0xACBA63CD73292795(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_30828[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_38))
			{
				unk_0xE121AE1BBF90E186(iLocal_38, false);
			}
			if (unk_0xC844350D5D58C99A(iLocal_35))
			{
				unk_0xE121AE1BBF90E186(iLocal_35, false);
			}
			if (unk_0xC844350D5D58C99A(iLocal_37))
			{
				unk_0xE121AE1BBF90E186(iLocal_37, false);
			}
			if (unk_0xC844350D5D58C99A(iLocal_36))
			{
				unk_0xE121AE1BBF90E186(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_38))
		{
			unk_0xE121AE1BBF90E186(iLocal_38, true);
		}
		if (unk_0xC844350D5D58C99A(iLocal_35))
		{
			unk_0xE121AE1BBF90E186(iLocal_35, true);
		}
		if (unk_0xC844350D5D58C99A(iLocal_37))
		{
			unk_0xE121AE1BBF90E186(iLocal_37, true);
		}
		if (unk_0xC844350D5D58C99A(iLocal_36))
		{
			unk_0xE121AE1BBF90E186(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_41 == -1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_30828[iLocal_41 /*11*/].f_6 = 0;
		Global_30828[iLocal_41 /*11*/].f_7 = 0;
		Global_30828[iLocal_41 /*11*/].f_8 = 0;
		Global_30828[iLocal_41 /*11*/].f_4 = 0;
		Global_30828[iLocal_41 /*11*/].f_5 = 0;
		Global_30828[iLocal_41 /*11*/].f_2 = 0;
		Global_30828[iLocal_41 /*11*/] = -1;
		Global_30828[iLocal_41 /*11*/].f_1 = 0;
		Global_30828[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0xA37A90C62806D848(1);
	}
	wait(0);
	func_69();
	if (unk_0x562F77A7F33D2E46(&cLocal_53))
	{
		unk_0x8910D3D58E0132B8(&cLocal_53);
	}
	unk_0xB3EE19CC0D64759A();
	func_2();
	unk_0x10FAF14A60A0DBE1();
}

void func_69()
{
	func_52();
	if (unk_0xC844350D5D58C99A(iLocal_35))
	{
		if (unk_0x134B62B726CEC8E6(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xF690C84DADBB3551(&iLocal_35);
			unk_0x71199B01895C6202(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_37))
	{
		unk_0xF690C84DADBB3551(&iLocal_37);
		unk_0x71199B01895C6202(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xC844350D5D58C99A(iLocal_36))
	{
		unk_0xF690C84DADBB3551(&iLocal_36);
		unk_0x71199B01895C6202(joaat("prop_tt_screenstatic"));
	}
}

