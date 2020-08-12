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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<6> Local_88 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<2> Local_95 = { 0, 5 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 5;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_68 = -1;
	iLocal_69 = 2050;
	iLocal_70 = -1;
	iLocal_71 = -1;
	sLocal_73 = "CC_SUBSTR";
	fLocal_74 = 125f;
	iLocal_75 = 1;
	iLocal_77 = 263;
	fLocal_85 = 4f;
	iLocal_86 = -1;
	vLocal_64 = { ScriptParam_95.f_1[0 /*3*/] };
	vLocal_64 = { vLocal_64 };
	uLocal_62 = uLocal_62;
	cLocal_52 = { cLocal_52 };
	bVar0 = false;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_89(1);
	}
	iLocal_61 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
	iLocal_67 = 0;
	func_87(&Global_110289, 0);
	func_85();
	if (func_84(uLocal_66, 1))
	{
		iLocal_72 = 10;
	}
	else
	{
		iLocal_72 = 9;
	}
	while (!Global_37199)
	{
		wait(0);
	}
	if (!func_84(uLocal_66, 8))
	{
		if (!func_82(iLocal_72))
		{
			if (func_81(0, iLocal_71))
			{
				func_89(0);
			}
			else
			{
				func_89(1);
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (!func_81(0, iLocal_71))
		{
			func_89(1);
		}
	}
	if (func_84(uLocal_66, 8388608))
	{
		func_89(1);
	}
	if (func_84(uLocal_66, 524288) && (func_80() && !func_79()))
	{
		func_89(1);
	}
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 1 && !func_84(uLocal_66, 4194304))
	{
		if (iLocal_77 != 263)
		{
			func_78(iLocal_77, 1, 0);
			iLocal_77 = 263;
		}
		func_77(10);
	}
	while (true)
	{
		if (!func_84(uLocal_66, 268435456))
		{
			fVar1 = 0f;
			if (unk_0xE82754C349C7B581(ScriptParam_95.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_95.f_1[0 /*3*/].f_2 = fVar1;
					func_76(&uLocal_66, 268435456);
				}
			}
		}
		iLocal_61 = unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62());
		if (func_84(uLocal_66, 1048576))
		{
			if (unk_0x437347B10A200C4B(iLocal_61, 0))
			{
				func_89(1);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_61) && !unk_0x437347B10A200C4B(iLocal_61, 0))
		{
			vLocal_63 = { unk_0x68F4C0EC296D3901(iLocal_61, true) };
			fLocal_65 = vdist2(vLocal_63, ScriptParam_95.f_1[0 /*3*/]);
			fLocal_65 = fLocal_65;
			vLocal_83 = { vLocal_63 };
			vLocal_84 = { ScriptParam_95.f_1[0 /*3*/] };
			vLocal_83.z = 0f;
			vLocal_84.z = 0f;
			fLocal_82 = vdist2(vLocal_83, vLocal_84);
			switch (iLocal_67)
			{
				case 0:
					if (func_82(iLocal_72) || (func_84(uLocal_66, 16) && !func_84(uLocal_66, 524288)))
					{
						iLocal_70 = -1;
						func_75();
						func_77(1);
					}
					else
					{
						if (fLocal_82 > (fLocal_74 * fLocal_74))
						{
							if (iLocal_77 != 263)
							{
								func_78(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
							func_77(10);
						}
						if ((vLocal_63.z - ScriptParam_95.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_74())
					{
						iLocal_75 = iLocal_75;
						func_77(3);
					}
					else
					{
						func_75();
					}
					break;
				
				case 3:
					if (unk_0x8FE4F98FD4BE2689())
					{
						func_89(1);
						return;
					}
					if (!func_82(iLocal_72))
					{
						if (!func_84(uLocal_66, 8))
						{
							bVar2 = true;
							if (unk_0x7F8A39872A07D2CE(&(Global_98744.f_3), &cLocal_52))
							{
								cLocal_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_89(0);
								break;
							}
						}
					}
					if (!func_84(uLocal_66, 4))
					{
						func_73();
						func_76(&uLocal_66, 4);
					}
					if (fLocal_82 > (fLocal_74 * fLocal_74) && !Global_98778)
					{
						if (iLocal_77 != 263)
						{
							if (func_72(6) && !func_71(iLocal_77))
							{
							}
							else
							{
								func_78(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
						}
						func_77(10);
					}
					else
					{
						cLocal_52 = { Local_51 };
						bVar3 = !func_84(uLocal_66, 64);
						func_87(&uLocal_66, 128);
						if (!func_70(3) && !Global_98778)
						{
							if (func_84(uLocal_66, 2097152))
							{
								if ((!func_84(uLocal_66, 1) || !unk_0xC844350D5D58C99A(func_69())) && !Global_98778)
								{
									func_77(10);
									break;
								}
							}
						}
						if (func_84(uLocal_66, 524288) && (func_80() && !func_79()))
						{
							func_89(1);
						}
						if (func_68())
						{
							func_89(1);
						}
						if ((!func_59(6) || Global_110685) || func_58())
						{
							bVar3 = false;
						}
						if (func_84(uLocal_66, 1))
						{
							if (!func_57())
							{
								func_55(&uLocal_66, 128);
								bVar3 = false;
							}
						}
						if (func_54(1))
						{
							bVar3 = false;
						}
						if (Global_76622)
						{
							bVar3 = false;
						}
						if (func_53())
						{
							bVar3 = false;
						}
						if (unk_0x991B1F0980C62628())
						{
							bVar3 = false;
						}
						if (func_52() || func_51(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
						{
							bVar3 = false;
						}
						if (!unk_0x04B2EAD6D5301B36(unk_0xD803B885F5E47A62()))
						{
							bVar3 = false;
						}
						if (func_50(0) || func_49())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!func_43(iLocal_86))
							{
								func_55(&uLocal_66, 128);
								bVar3 = false;
							}
							if (!unk_0x5A91F08DF773C39D(iLocal_61, ScriptParam_95.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
							{
								bVar3 = false;
							}
							if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0x558EC149EB2BC0A2(0, 51);
								if (func_42(uLocal_62))
								{
									if (iLocal_68 == -1)
									{
										func_41(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
										func_55(&uLocal_66, 2048);
									}
									else if (!func_84(uLocal_66, 2048) || !unk_0xFEBC1E4EC9E001F0())
									{
										func_40(&iLocal_68);
										func_87(&uLocal_66, 2048);
									}
									if (func_38(iLocal_68, 1))
									{
										sLocal_73 = sLocal_73;
										func_40(&iLocal_68);
										func_87(&uLocal_66, 2048);
										unk_0x92DCE5C81176D2B4(&cLocal_52);
										unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
										func_77(5);
									}
								}
								else
								{
									sLocal_73 = sLocal_73;
									func_40(&iLocal_68);
									func_87(&uLocal_66, 2048);
									unk_0x92DCE5C81176D2B4(&cLocal_52);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 56);
									func_77(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_68 != -1)
							{
								func_40(&iLocal_68);
								func_87(&uLocal_66, 2048);
								unk_0xA37A90C62806D848(0);
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0x558EC149EB2BC0A2(0, 51);
					if (unk_0x1FBF08B001C4788A(&cLocal_52))
					{
						if (iLocal_68 != -1)
						{
							func_40(&iLocal_68);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_84(uLocal_66, 1))
						{
							if (func_72(6) || func_72(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_70, 6, iLocal_72, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							}
							func_33();
							if (Global_42596)
							{
								func_24(unk_0x16F2683693E537C9());
							}
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 56);
							iLocal_50 = start_new_script(&cLocal_52, iLocal_69);
							unk_0x5E8C29AE121DF1C7(&cLocal_52);
							Local_51 = { cLocal_52 };
							StringCopy(&cLocal_52, "", 64);
							func_87(&uLocal_66, 4);
							func_23();
							func_55(&uLocal_66, 2);
							func_77(6);
							func_19(&iLocal_79);
							if (iLocal_71 != -1)
							{
								func_18(iLocal_71);
								func_15(func_17(iLocal_71), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_77(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (!func_84(uLocal_66, 256))
					{
						if (unk_0xD0BB2359EC70FC37() || unk_0x0F1CCD77290EE12F())
						{
							unk_0x558EC149EB2BC0A2(0, 51);
						}
						else if (unk_0x757EF87A33649210())
						{
							func_55(&uLocal_66, 256);
						}
					}
					if (func_84(Global_110289, 262144))
					{
						func_87(&Global_110289, 262144);
						func_13();
					}
					if (func_84(uLocal_66, 2097152))
					{
						if (!func_70(3) && !unk_0x1727A44C562FBED2(iLocal_50))
						{
							func_77(10);
						}
					}
					if (!unk_0x1727A44C562FBED2(iLocal_50))
					{
						unk_0x11E0F00830F70E15(round((func_9(&iLocal_79) * 1000f)), iLocal_71, 0);
						func_8(&iLocal_79);
						func_87(&uLocal_66, 256);
						func_7();
						if (bVar0)
						{
							func_87(&uLocal_66, 2);
						}
						else if (func_84(uLocal_66, 2))
						{
							if (func_84(Global_110289, 0))
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_87(&uLocal_66, 2);
							}
							else
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_87(&uLocal_66, 2);
							}
						}
						func_77(0);
						if (iLocal_71 != -1)
						{
							if (func_84(Global_110289, 0))
							{
								unk_0x353729B0A07DC11A(func_17(iLocal_71), 0, Global_98781, 0);
								func_5(func_17(iLocal_71), 0, Global_98781, 1, 0);
							}
							else
							{
								unk_0x353729B0A07DC11A(func_17(iLocal_71), 0, Global_98781, 0);
								func_5(func_17(iLocal_71), 0, Global_98781, 0, 0);
							}
						}
						func_4();
						func_87(&Global_110289, 0);
						if (func_84(uLocal_66, 16777216))
						{
							func_89(1);
						}
						if (iLocal_71 != -1)
						{
							if (Global_111638.f_9080)
							{
								if (!func_81(0, iLocal_71))
								{
									func_89(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_77(0);
					break;
				
				case 10:
					func_89(1);
					break;
				
				case 9:
					if (fLocal_82 > (fLocal_74 * fLocal_74))
					{
						if (iLocal_77 != 263)
						{
							func_78(iLocal_77, 1, 0);
							iLocal_77 = 263;
						}
						func_77(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_77 != 263)
					{
						func_78(iLocal_77, 0, 0);
					}
					if (iLocal_68 != -1)
					{
						func_40(&iLocal_68);
					}
					if (!unk_0xEA6BC48857E0AC4C(sLocal_73))
					{
						if (func_1(sLocal_73))
						{
							unk_0xA37A90C62806D848(1);
						}
					}
					func_77(4);
					break;
				
				case 4:
					if ((iLocal_76 % 150) == 0)
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (iLocal_78 == 2)
							{
								if (iLocal_78 == 2)
								{
									if (func_82(iLocal_72) && func_81(0, iLocal_71))
									{
										func_85();
										if (iLocal_77 != 263)
										{
											func_78(iLocal_77, 1, 0);
										}
										func_77(0);
									}
								}
							}
							else if (iLocal_78 == 0)
							{
								if (fLocal_82 > (fLocal_74 * fLocal_74))
								{
									if (iLocal_77 != 263)
									{
										func_78(iLocal_77, 1, 0);
										iLocal_77 = 263;
									}
									func_77(10);
								}
							}
							else if (iLocal_78 == 1)
							{
								if (fLocal_82 > ((80f + 5f) * (80f + 5f)))
								{
									func_85();
									if (iLocal_77 != 263)
									{
										func_78(iLocal_77, 1, 0);
									}
									func_77(0);
								}
							}
						}
						else
						{
							func_78(iLocal_77, 1, 0);
						}
					}
					else
					{
						iLocal_76++;
					}
					break;
				}
		}
		wait(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		return;
	}
	if (unk_0xF166B8FB0B765CF2(sParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	unk_0x73B08BBDEAC9B885(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41393)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_7()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_8(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
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

bool func_11(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_12(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_13()
{
	return 1;
}

void func_14()
{
}

void func_15(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		unk_0x73B08BBDEAC9B885(&Global_95814, 0, 0, 0, 1, 0);
		StringCopy(&Global_95814, "", 64);
	}
	StringCopy(&Global_95814, sParam0, 64);
	unk_0x1AE6E2984A30CB9E(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_18(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(8, &uVar0, 1, 1);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_19(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int iParam0)
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()
{
	unk_0x71199B01895C6202(Local_88.f_1);
	if (unk_0xC844350D5D58C99A(Local_88))
	{
		unk_0xEEEE2E5FA6F78DF0(&Local_88);
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42383[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42357[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42357[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_42594 = 0;
		}
	}
	Global_42357[iParam0 /*5*/] = 13;
	Global_42357[iParam0 /*5*/].f_1 = 0;
	Global_42357[iParam0 /*5*/].f_2 = 0;
	Global_42357[iParam0 /*5*/].f_3 = 0;
	Global_42357[iParam0 /*5*/].f_4 = 0;
	Global_42355 = (Global_42355 - 1);
	if (Global_42355 < 0)
	{
		Global_42355 = 0;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0 /*6*/] = iParam0;
	Global_42464[iVar0 /*6*/].f_1 = iParam1;
	Global_42464[iVar0 /*6*/].f_2 = iParam2;
	Global_42464[iVar0 /*6*/].f_3 = iParam3;
	Global_42464[iVar0 /*6*/].f_4 = iParam4;
	Global_42464[iVar0 /*6*/].f_5 = iParam5;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42464[iVar0 /*6*/])
			{
				if (iParam1 == Global_42464[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42383[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_33()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x0674E58A79778E99(&Global_7356, 25);
	unk_0x5D96D8530B3D0904(&Global_7357, 11);
}

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_36(0))
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *iParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_82(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*iParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_36(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_82(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()
{
	if (iLocal_87 == 1)
	{
		if (unk_0x035491B0E495A4C1("WORLD_MOUNTAIN_LION_WANDER"))
		{
			unk_0xCD7D80FD792F9954("WORLD_MOUNTAIN_LION_WANDER", 0);
			unk_0xC05DBA7D4F88D5E5(joaat("a_c_mtlion"), true);
		}
	}
}

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_50(0))
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

int func_39(int iParam0)
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

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_39(*iParam0);
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

void func_41(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
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

int func_42(var uParam0)
{
	return 1;
}

bool func_43(int iParam0)
{
	func_44();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_46(unk_0x16F2683693E537C9());
			if (func_45(iVar0) && (!func_72(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

var func_49()
{
	return Global_73825;
}

int func_50(int iParam0)
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

bool func_51(int iParam0, int iParam1)
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

bool func_52()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_53()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_54(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_57()
{
	return 1;
}

bool func_58()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return ((((bVar1 && unk_0x06F8112AA79C53D9(0, 69)) || (bVar1 && unk_0x06F8112AA79C53D9(0, 70))) || (bVar1 && unk_0x06F8112AA79C53D9(0, 68))) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
	}
	return (((((bVar1 && unk_0x06F8112AA79C53D9(0, 24)) || (bVar1 && unk_0x06F8112AA79C53D9(0, 25))) || (bVar1 && unk_0x06F8112AA79C53D9(0, 47))) || unk_0x05569C69D7945F99(unk_0x16F2683693E537C9())) || unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()));
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_67();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_64()) || func_63()) || func_62()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_66()) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_64()) || func_63()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_66() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_51(8, -1)) || func_53()) || func_61()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_64()) || func_63()) || func_61()) || func_60())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_66()) || Global_30770) || func_65()) || func_51(8, -1)) || func_63()) || func_62()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_66()) || func_63()) || Global_110685) || Global_30770) || func_65()) || Global_42596) || func_51(8, -1)) || func_62()) || func_61()) || func_53()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_66()) || Global_110685) || Global_30770) || func_65()) || func_51(8, -1)) || func_62()) || func_61()) || func_64()) || func_63()) || func_53())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_60()
{
	return Global_98783.f_1;
}

int func_61()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_62()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_63()
{
	return Global_98796.f_346 > 0;
}

bool func_64()
{
	return Global_98796.f_345 > 0;
}

var func_65()
{
	return Global_1312877;
}

int func_66()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

var func_67()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_68()
{
	if (unk_0x8A22C4C08282BF26(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_69()
{
	return Global_94576;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_72(6) || func_72(7))
			{
				return 1;
			}
			else
			{
				return func_70(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_82(5))
			{
				if (func_59(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

bool func_72(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_73()
{
	if (!unk_0xC844350D5D58C99A(Local_88))
	{
		Local_88 = unk_0x7707E48765093646(Local_88.f_1, Local_88.f_2, true, true, false);
		unk_0x08841CDB215AE18F(Local_88, Local_88.f_2, 0, 0, 1);
		unk_0xC023D1C4BF532815(Local_88, Local_88.f_5, 2, 1);
		unk_0x1E9649458B15960F(Local_88, true);
	}
}

bool func_74()
{
	if (!unk_0x468C1AC3ABF95C57(Local_88.f_1))
	{
		return 0;
	}
	return unk_0xB87F6CF6E5628C67(Local_88.f_1);
}

void func_75()
{
	if (!unk_0x468C1AC3ABF95C57(Local_88.f_1))
	{
		return;
	}
	unk_0x523BCC9DC80CD82F(Local_88.f_1);
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(int iParam0)
{
	iLocal_67 = iParam0;
}

void func_78(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
		if (Global_31143 == 1)
		{
			Global_31144 = 1;
		}
		Global_31143 = 1;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 0);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 15);
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 0);
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
		{
			unk_0xCD816869CA451988(1);
			unk_0x142CC44DB769B57E(&(Global_31146[iVar0 /*23*/].f_19));
			unk_0xCD816869CA451988(0);
		}
	}
}

int func_79()
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

int func_80()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_82(int iParam0)
{
	return func_83(iParam0, Global_41431);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_85()
{
	StringCopy(&Local_51, "Yoga", 64);
	sLocal_73 = "PLAY_YOGA";
	iLocal_71 = 18;
	fLocal_85 = 2.5f;
	fLocal_74 = 20f;
	iLocal_69 = 35000;
	iLocal_87 = func_86();
	if (iLocal_87 == 0)
	{
		iLocal_77 = 110;
		Local_88.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		Local_88.f_5 = { 0f, 0f, -87.1403f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_87 == 1)
	{
		iLocal_77 = 111;
		Local_88.f_2 = { 2861.47f, 5945.9f, 357.06f };
		Local_88.f_5 = { 0f, -0.5f, 70f };
		Local_88.f_1 = joaat("prop_yoga_mat_03");
	}
	iLocal_86 = 0;
}

int func_86()
{
	vector3 vVar0;
	vector3 vVar1[2];
	float fVar2[2];
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), true) };
		vVar1[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		vVar1[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		fVar2[0] = vdist2(vVar0, vVar1[0 /*3*/]);
		fVar2[1] = vdist2(vVar0, vVar1[1 /*3*/]);
		if (fVar2[0] < fVar2[1])
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 2;
}

void func_87(var uParam0, int iParam1)
{
	func_88(uParam0, iParam1);
}

void func_88(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_77 != 263)
		{
			func_78(iLocal_77, 0, 0);
		}
	}
	func_40(&iLocal_68);
	if (func_84(uLocal_66, 2))
	{
		func_4();
		func_87(&uLocal_66, 2);
		func_6(&iLocal_70);
	}
	iLocal_70 = -1;
	func_90();
	unk_0x10FAF14A60A0DBE1();
}

void func_90()
{
	func_87(&uLocal_66, 4);
	func_91();
	if (unk_0x1727A44C562FBED2(iLocal_50))
	{
		unk_0x4000D538E4D54254(iLocal_50, 3);
	}
	if (!unk_0x2EBF5002C6B6A06C(&cLocal_52))
	{
		if (unk_0x4880526EC51D1C27(&cLocal_52) != 0)
		{
			unk_0x5E8C29AE121DF1C7(&cLocal_52);
		}
	}
}

void func_91()
{
	if (!unk_0x035491B0E495A4C1("WORLD_MOUNTAIN_LION_WANDER"))
	{
		unk_0xCD7D80FD792F9954("WORLD_MOUNTAIN_LION_WANDER", 1);
		unk_0xC05DBA7D4F88D5E5(joaat("a_c_mtlion"), false);
	}
}

