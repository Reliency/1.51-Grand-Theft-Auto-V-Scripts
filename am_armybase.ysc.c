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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	vector3 vLocal_82 = { 0f, 0f, 0f };
	struct<4> Local_83 = { 2, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 2;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 2;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<8> Local_107[32];
	struct<184> Local_108 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<21> Local_122 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	vLocal_82 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_117 = -1;
	if (unk_0x8CD06866876216F2())
	{
		func_187(ScriptParam_122);
	}
	else
	{
		func_184();
	}
	while (true)
	{
		func_183();
		func_175();
		if (func_164() || unk_0x09BE1E6DF7B80B43())
		{
			func_184();
		}
		if (unk_0x8CD06866876216F2())
		{
			if ((func_158() && !Global_262145.f_21467) && !unk_0xA14BB9332558B949())
			{
				func_151();
			}
			if (func_40())
			{
				func_184();
			}
			if (func_37(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 3))
				{
					unk_0x5D96D8530B3D0904(&(Local_108.f_182), 3);
				}
			}
			if ((((((((((!Global_1573980 && !func_36(2)) && !func_33(unk_0xD803B885F5E47A62(), 0)) && !unk_0x991B1F0980C62628()) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_31(unk_0xD803B885F5E47A62())) && !func_29(func_30(unk_0xD803B885F5E47A62()))) && !func_27(unk_0xD803B885F5E47A62(), 146)) && !func_23(unk_0xD803B885F5E47A62())) && !func_22(unk_0xD803B885F5E47A62())) && !func_21())
			{
				if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 1000, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4555, 0))
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							if (!func_158())
							{
								func_18();
								if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
								{
									if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 0, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 0))
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 4)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(4) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (!func_17(&(Local_108.f_3)))
									{
										func_14(&(Local_108.f_3));
									}
									else if (func_11(&(Local_108.f_3)) > 20f || Local_108.f_177)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 4)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(4) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
								}
								else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 4)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(4) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
								}
								else
								{
									unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
								}
							}
							else
							{
								if (Global_2537071.f_6564)
								{
									bLocal_110 = false;
									Global_2537071.f_6564 = 0;
								}
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0 && !iLocal_114)
								{
									iLocal_114 = 1;
								}
								if (Global_262145.f_21456 && !func_9(unk_0xD803B885F5E47A62()))
								{
									if ((!bLocal_110 && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0) && iLocal_114)
									{
										unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
										unk_0x34D79252800B23FF(0);
										iLocal_113 = 1;
									}
									if (func_2() && !bLocal_110)
									{
										bLocal_110 = true;
										unk_0x34D79252800B23FF(5);
									}
								}
								if (func_2() && !bLocal_110)
								{
									bLocal_110 = true;
								}
								if (bLocal_110)
								{
									if (bLocal_111)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 2)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(2) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (bLocal_112)
									{
										if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 3)
										{
											unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(3) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
										}
										else
										{
											unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
										}
									}
									else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < Global_262145.f_21393)
									{
										unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(Global_262145.f_21393) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
									}
									else
									{
										unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_108.f_3)))
							{
								func_1(&(Local_108.f_3));
							}
							if (Local_108.f_177)
							{
								Local_108.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_108.f_177)
						{
							Local_108.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_108.f_177)
					{
						Local_108.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 1000, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1000)) && !func_8()) && !func_22(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_21387)
		{
			return 0;
		}
		if (((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0xD803B885F5E47A62()))
		{
			bLocal_111 = false;
			bLocal_112 = false;
			return 1;
		}
		if (Global_262145.f_21394)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xF566283DA9533594(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_111 = true;
							bLocal_112 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xF566283DA9533594(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				if ((!func_5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1) && !func_4(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))) && !func_3(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					bLocal_111 = true;
					bLocal_112 = false;
					return 1;
				}
			}
		}
		if (Global_2537071.f_6562 || Global_2537071.f_6563)
		{
			if (Global_2537071.f_6563)
			{
				bLocal_111 = false;
				bLocal_112 = true;
			}
			else
			{
				bLocal_111 = true;
				bLocal_112 = false;
			}
			Global_2537071.f_6562 = 0;
			Global_2537071.f_6563 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xF1D385D359D58F72("MPBitset", 3) && unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((unk_0xF1D385D359D58F72("CreatedByPegasus", 2) && unk_0x30F813723591D02E(iParam0, "CreatedByPegasus")) && unk_0xB2C7CF65CF9B897C(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4D570FEF9D230CE7(unk_0x9539D44F3E4492F6(iParam0));
	iVar1 = unk_0x0D1736C2E221BCEA(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0x31609A585163CBAC(iVar0) && unk_0x31609A585163CBAC(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x3D1053F9EB43B7AD(unk_0x9539D44F3E4492F6(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x3D1053F9EB43B7AD(unk_0x9539D44F3E4492F6(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
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

bool func_13(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_18()
{
	if (iLocal_113)
	{
		unk_0x34D79252800B23FF(5);
	}
	Global_2537071.f_6562 = 0;
	Global_2537071.f_6563 = 0;
	iLocal_113 = 0;
	bLocal_110 = false;
	bLocal_111 = false;
	iLocal_114 = 0;
}

int func_19(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_21()
{
	return Global_2537071.f_6565;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_23(int iParam0)
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_28(iParam0);
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_28(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_31(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
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

bool func_32()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312745;
}

bool func_36(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1573979, iParam0);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39() && func_38(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
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

int func_39()
{
	return -1;
}

int func_40()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_41())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_41()
{
	int iVar0;
	
	switch (Local_108.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(unk_0xD803B885F5E47A62(), 1, 0) && func_123()) || func_25(unk_0xD803B885F5E47A62()) == 159) || func_25(unk_0xD803B885F5E47A62()) == 225) || func_25(unk_0xD803B885F5E47A62()) == 233) || func_122(unk_0xD803B885F5E47A62())) || func_21()) || Global_1574410) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 1);
			}
			func_120(&(Local_107[unk_0x57270EE11514DC67() /*8*/]), 1);
			Local_108.f_176 = 1;
			Local_108.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_107[unk_0x57270EE11514DC67() /*8*/]), 2);
				Local_108.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_83.f_20, 1))
			{
				Local_108.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(unk_0xD803B885F5E47A62(), 1, 0) && !func_123()) && !func_158())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (unk_0x8CD06866876216F2())
			{
				if ((((func_110() && !func_124(unk_0xD803B885F5E47A62(), 1, 0)) && !func_123()) && !unk_0xA14BB9332558B949()) && func_108(unk_0xD803B885F5E47A62()) != 6)
				{
					func_49();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_42(iVar0);
				iVar0++;
			}
			if (((((func_25(unk_0xD803B885F5E47A62()) == 225 || func_25(unk_0xD803B885F5E47A62()) == 233) || func_122(unk_0xD803B885F5E47A62())) || Global_1574410) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 1);
			}
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_108.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(unk_0xD803B885F5E47A62(), 1, 0) && func_123()) || func_25(unk_0xD803B885F5E47A62()) == 159) || func_25(unk_0xD803B885F5E47A62()) == 225) || func_25(unk_0xD803B885F5E47A62()) == 233) || func_122(unk_0xD803B885F5E47A62())) || Global_1574410) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				unk_0xAB8E2DDC7AF955E0(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_83.f_3[iParam0 /*5*/].f_2 > 2 && unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		if (unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_108.f_172[iParam0]))
			{
				unk_0x142CC44DB769B57E(&(Local_108.f_172[iParam0]));
			}
		}
		else if (!unk_0xE4EDC4B0E92C078B(Local_108.f_172[iParam0]) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 2)
		{
			Local_108.f_172[iParam0] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]));
			unk_0x61755AC17D8F538E(Local_108.f_172[iParam0], 1);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(Local_108.f_172[iParam0]))
	{
		unk_0x142CC44DB769B57E(&(Local_108.f_172[iParam0]));
	}
	switch (Local_83.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 16))
			{
				Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0] = 0;
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 4)
						{
							if (func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 500, 0))
							{
								func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 2))
			{
				if (func_46(iParam0))
				{
					iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
					if (!unk_0x437347B10A200C4B(iVar2, 0))
					{
						if (unk_0x5EDB8AD1D9CB1AC8(iVar2))
						{
							iVar3 = unk_0x6937EA2286828455(iVar2, 0);
							if ((!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iVar1, 0)) && !unk_0x437347B10A200C4B(iVar3, 0))
							{
								unk_0x0C4243AF9A434F34(iVar0, iVar1, iVar3, iVar2, unk_0x68F4C0EC296D3901(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0x40B4CC38578A6E32(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xE69C5AEBE90D20B1(iVar0, false);
							}
						}
					}
				}
				if (func_45(iParam0))
				{
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x437347B10A200C4B(iVar2, 0))
					{
						if (unk_0x5EDB8AD1D9CB1AC8(iVar2))
						{
							unk_0x2E7E359BC7AA3D39(iVar0, iVar2, unk_0x68F4C0EC296D3901(iVar2, 1));
						}
					}
				}
				if (func_44(iParam0, 6))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 8))
			{
				if (func_46(iParam0))
				{
					iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
					if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iVar1, 0))
					{
						unk_0x0C4243AF9A434F34(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_44(iParam0, 9))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0xE9F78D191AD5EDBA(Local_83.f_3[iParam0 /*5*/]) || unk_0xE9F78D191AD5EDBA(Local_83.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0xE8F26853385214AB(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1) && unk_0x526BC32A660C89E6(Local_83.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/].f_1);
						unk_0x2ABAFAE29D459CE5(&uVar4);
					}
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]) && unk_0x526BC32A660C89E6(Local_83.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0xA5FBBC2F619A4DE2(Local_83.f_3[iParam0 /*5*/]);
						unk_0x2ABAFAE29D459CE5(&uVar5);
					}
				}
			}
			else if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0], 16))
			{
				func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x8CB4A13C7BDA2B13(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_49()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_107();
	func_102();
	vVar2 = { vLocal_82 };
	if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 1000, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1000)) || func_100(unk_0x16F2683693E537C9())) && func_99(unk_0x16F2683693E537C9()))
	{
		bVar0 = true;
	}
	else
	{
		Local_108.f_178 = 0;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_108.f_179 = 0;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_108.f_181 = 1;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_108.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1573348 = 1;
			func_93(&(Local_108.f_7), 2);
			func_92(&(Local_108.f_7), 2);
			func_91(&(Local_108.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_108.f_7), 2, vVar2);
			Global_20094.f_162 = { vVar2 };
			Var3 = { func_89() };
			if (!unk_0xEA6BC48857E0AC4C(&Var3))
			{
				if (func_68(&(Local_108.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_50(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 2))
		{
			Global_1573348 = 0;
			func_93(&(Local_108.f_7), 2);
			func_92(&(Local_108.f_7), 2);
			unk_0x5D96D8530B3D0904(&(Local_108.f_182), 2);
		}
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_65(16000, -1, -1))
		{
			func_64(16000, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_65(16001, -1, -1))
		{
			func_64(16001, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		Local_108.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_65(15999, -1, -1))
		{
			func_64(15999, 1, -1, 1);
			if (Global_2537071.f_6570)
			{
				if (func_58())
				{
					func_56("AB_ENTRY_HT");
					Local_108.f_180 = 1;
				}
			}
			else if (func_58())
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_108.f_181 == 1)
		{
			if (!func_65(16002, -1, -1))
			{
				func_64(16002, 1, -1, 1);
				if (Global_2537071.f_6570)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_108.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_108.f_181 == 2)
		{
			if (func_52(18097, -1, -1) == 0)
			{
				func_51(18097, 1, -1, 1);
				if (Global_2537071.f_6570)
				{
					if (func_58())
					{
						func_56("AB_ENTRY_HT");
						Local_108.f_180 = 1;
					}
				}
				else if (func_58())
				{
					func_55("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_108.f_179 = 1;
		Local_108.f_181 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 2))
	{
		unk_0x0674E58A79778E99(&(Local_108.f_182), 2);
	}
}

var func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_35();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	iVar1 = func_54(iParam0, iParam1);
	uVar2 = func_53(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

void func_55(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

void func_56(char* sParam0)
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
	}
	if (!func_57(sParam0))
	{
		func_55(sParam0, -1);
	}
}

bool func_57(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_58()
{
	if (func_61(unk_0xD803B885F5E47A62()) && !func_59(unk_0xD803B885F5E47A62(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_39();
}

int func_60(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_39())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (func_63(iParam0))
	{
		iVar0 = func_62(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_35();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar1 = func_67(iParam0, iParam1);
	uVar2 = func_66(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_87();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_85();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_77();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_73();
		func_70();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_71()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_39())
	{
		return 0;
	}
	if (func_72(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_10(iParam0, 20);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_74()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_75()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_77()
{
	if (func_84(14))
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
		Global_19486 = func_78();
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

var func_78()
{
	func_79();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_82(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_81(unk_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_84(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_80(Global_111638.f_2358.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
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

void func_87()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_65(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_65(16002, -1, -1) || func_52(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 1000, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1000)) || func_100(unk_0x16F2683693E537C9())) && func_99(unk_0x16F2683693E537C9()))
	{
		if (!func_65(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_65(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_94()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_19671 = 0;
	func_96();
}

void func_96()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_22(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_108.f_178)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 1))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (!func_65(16000, -1, -1) || !func_65(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_108.f_179)
		{
			if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || func_98())
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || !func_65(16002, -1, -1))
						{
							if (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= -25f && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_65(15999, -1, -1) || func_52(18097, -1, -1) == 0)
						{
							if (unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) >= 160f && unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xF566283DA9533594(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (unk_0x5EDB8AD1D9CB1AC8(iParam0) || unk_0x398B22FA3FCBDFA9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && func_101(iParam0))
	{
		if ((unk_0x3D1053F9EB43B7AD(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x3D1053F9EB43B7AD(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102()
{
	if (Local_108.f_180)
	{
		if (!func_106(&(Local_108.f_183)))
		{
			func_105(&(Local_108.f_183), 0, 0);
		}
		else if (!func_104(&(Local_108.f_183), 17000, 0))
		{
			if (!func_57("AB_ENTRY_HT"))
			{
				func_55("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_108.f_183), 17000, 0))
		{
			if (func_57("AB_ENTRY_HT"))
			{
				unk_0xA37A90C62806D848(1);
			}
			func_103(&(Local_108.f_183));
			Local_108.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		if ((func_20(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 3, 1000, 0) || func_19(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 1000)) || func_100(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 0))
			{
				if ((((func_99(unk_0x16F2683693E537C9()) && unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0))) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0) && func_98()) && !Global_1687623)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 1) && !unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 3))
					{
						unk_0x5D96D8530B3D0904(&(Local_108.f_182), 1);
					}
				}
				unk_0x5D96D8530B3D0904(&(Local_108.f_182), 0);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 0))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_182), 0);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 1))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_182), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_108.f_182, 3))
			{
				unk_0x0674E58A79778E99(&(Local_108.f_182), 3);
			}
			if (Global_1687623)
			{
				Global_1687623 = 0;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_25(iParam0) == 233)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (func_38(iVar1, 0, 1))
		{
			if (iVar1 != unk_0xD803B885F5E47A62())
			{
				if (func_111(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), unk_0x9539D44F3E4492F6(iVar1)))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0);
					if (unk_0xA30B8362589C124A(iVar2, -1, 0) == unk_0x9539D44F3E4492F6(iVar1))
					{
						if (func_61(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x405E212DDE472467(iParam0, 0) || !unk_0x405E212DDE472467(iParam1, 0))
	{
		return 0;
	}
	return unk_0x6937EA2286828455(iParam0, 0) == unk_0x6937EA2286828455(iParam1, 0);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return;
	}
	switch (Local_83.f_21[iParam0])
	{
		case 0:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 64))
			{
				Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0] = 0;
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 900f)
					{
						func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 2) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 900f) && !func_22(unk_0xD803B885F5E47A62()))
			{
				func_91(&(Local_108.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_108.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0x9BE7E7B6B488CC55(iVar0, func_115(iParam0), -1, 0);
				}
				if (func_114(iParam0, 1630799643))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 8) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 900f) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 1)
			{
				if (!func_17(&Local_108))
				{
					func_14(&Local_108);
				}
				if (func_11(&Local_108) >= 7f && !func_22(unk_0xD803B885F5E47A62()))
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 8);
					func_117(&(Local_108.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_108))
			{
				func_1(&Local_108);
			}
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 16);
					if (!func_158())
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, unk_0xBC64C2447446D57B(4));
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, unk_0xBC64C2447446D57B(Global_262145.f_21393));
					}
				}
			}
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar0, 1)) > 900f)
					{
						func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 900f)
				{
					func_47(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 16);
					if (!func_158())
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(4) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 36, (unk_0xBC64C2447446D57B(Global_262145.f_21393) - unk_0xBC64C2447446D57B(unk_0x179932739160BA96(unk_0xD803B885F5E47A62()))));
					}
				}
			}
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar0, 1)) > 900f)
					{
						func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, 1630799643))
			{
				if (func_116(iParam0))
				{
					unk_0x9BE7E7B6B488CC55(iVar0, func_115(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_48(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0xA3BF0AA5A2608191(iVar0);
				}
				if (!func_114(iParam0, 1435919172))
				{
					func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 4);
					func_43(&(Local_107[unk_0x57270EE11514DC67() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iVar0))
	{
		return 1;
	}
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iVar0))
	{
		return 1;
	}
	if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xD1960163A3042274(iVar0, iParam1) != 1 && unk_0xD1960163A3042274(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar2 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)));
			if (!unk_0x437347B10A200C4B(iVar2, 0))
			{
				fVar4 = vdist2(unk_0x68F4C0EC296D3901(iVar2, 1), unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_83[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5DBF9B6126856CA(Local_83[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0x1B50683925F00106(Local_83[iParam0]);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 1;
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_30(iParam0) == 236 || func_30(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

bool func_126(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_127()
{
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_marine_01"));
	unk_0x523BCC9DC80CD82F(joaat("lazer"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_83.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_83.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_83.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(unk_0xD803B885F5E47A62(), 1, 0) || func_123()) || func_25(unk_0xD803B885F5E47A62()) == 225) || func_25(unk_0xD803B885F5E47A62()) == 233) || func_122(unk_0xD803B885F5E47A62())) || func_21()) || Global_1574410) || (unk_0xA14BB9332558B949() && func_8()))
			{
				func_120(&(Local_83.f_20), 1);
				Local_83.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_83.f_20), 1);
				Local_83.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(unk_0xD803B885F5E47A62(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(unk_0xD803B885F5E47A62()) == 225 || func_25(unk_0xD803B885F5E47A62()) == 233) || func_122(unk_0xD803B885F5E47A62())) || Global_1574410) || func_21()) || (unk_0xA14BB9332558B949() && func_8()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_83.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (unk_0x0DC0B2DBBD52B0C0() > 1)
	{
		return 0;
	}
	if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83[iVar0]))
		{
			iVar1 = unk_0x1B50683925F00106(Local_83[iVar0]);
			if (!unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0x6DAD7906B73F064D(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x1B50683925F00106(Local_83.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x437347B10A200C4B(iVar1, 0))
			{
				unk_0x6DAD7906B73F064D(&iVar1);
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0xB177666FAB6F4417(Local_83.f_3[iVar0 /*5*/]);
			if (!unk_0x437347B10A200C4B(iVar2, 0))
			{
				unk_0x046C362CF15F1935(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_83.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0x1B50683925F00106(Local_83.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					unk_0x6DAD7906B73F064D(&iVar0);
					if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0xB177666FAB6F4417(Local_83.f_3[iParam0 /*5*/]);
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_83.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_83.f_3[iParam0 /*5*/].f_4 = -1;
				Local_83.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_140(iParam0) };
			if (!func_139(vVar3))
			{
				if (!unk_0xE8F26853385214AB(vVar3, 20f) && !unk_0x8E28E832BEAC3DCE(vVar3, 20f))
				{
					if (func_134(vVar3, unk_0xD9522BA9E27E1349(unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_83.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
			if (!unk_0xC844350D5D58C99A(iVar4))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x437347B10A200C4B(iVar4, 0))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(iVar4) || unk_0x398B22FA3FCBDFA9(iVar4))
			{
				if (func_133(unk_0x6937EA2286828455(iVar4, 0)))
				{
					Local_83.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 6;
				Local_83.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_83.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (func_48(Local_107[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_134(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/]))
	{
		if (!func_136(&(Local_83.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_83.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/]))
	{
		if (!unk_0xE5DBF9B6126856CA(Local_83.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_135(&(Local_83.f_3[iParam2 /*5*/].f_1), Local_83.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x40B4CC38578A6E32(unk_0x1B50683925F00106(Local_83.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xE69C5AEBE90D20B1(unk_0x1B50683925F00106(Local_83.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_136(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 1);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_137(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_138(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam3 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam2) && vdist(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam1;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam2;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam3;
	}
}

int func_138(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_139(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(Local_83.f_3[iParam0 /*5*/].f_4);
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0xD9522BA9E27E1349(iVar0), 0f, -250f, (40f * to_float(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)));
			if (!func_142(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0))))
			{
				if (unk_0x5EDB8AD1D9CB1AC8(iVar1) || unk_0x398B22FA3FCBDFA9(iVar1))
				{
					if (unk_0x179932739160BA96(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0))) >= 4)
					{
						vVar2 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
						if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_83.f_3[iParam0 /*5*/].f_4 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 1;
	}
	if (unk_0x437347B10A200C4B(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0x9539D44F3E4492F6(Local_83.f_3[iVar1 /*5*/].f_4);
		if (unk_0xC844350D5D58C99A(iVar2))
		{
			if (iParam0 == Local_83.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (!func_48(Local_107[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_83.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_83.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_83.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_83.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_83.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_83.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_83.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_83.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_83.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_83.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_83.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (func_48(Local_107[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (!func_48(Local_107[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_83[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE5DBF9B6126856CA(Local_83[0]))
	{
		unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_83[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_148(&(Local_83[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0xE5DBF9B6126856CA(Local_83[1]))
	{
		unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_83[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, iParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			if (!func_118(Local_107[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			if (!func_118(Local_107[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_120) && func_104(&uLocal_120, Global_262145.f_21468, 0))
	{
		func_103(&uLocal_120);
	}
	if (func_106(&uLocal_118) && func_104(&uLocal_118, Global_262145.f_21469, 0))
	{
		func_103(&uLocal_118);
		iLocal_115 = 0;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2537071.f_6571)
			{
				Global_2537071.f_6571 = 1;
				func_55("BASE_EXP_WARN", -1);
			}
			if (!iLocal_115)
			{
				iLocal_115 = 1;
				func_105(&uLocal_120, 0, 0);
				func_105(&uLocal_118, 0, 0);
			}
			else if (!func_106(&uLocal_120))
			{
				unk_0x34D79252800B23FF(5);
				bLocal_110 = true;
				bLocal_111 = true;
				iLocal_115 = 0;
				func_103(&uLocal_120);
				func_103(&uLocal_118);
			}
		}
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&iLocal_116, iVar1);
		iLocal_117 = func_154();
		if (iLocal_117 >= 0)
		{
			iVar0 = func_153(iLocal_117);
			if (unk_0xC844350D5D58C99A(iVar0) && unk_0xEC560E589DF8370E(iVar0))
			{
				if (unk_0x940C1429253D3B1B(iVar0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_153(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0xB2840BBCAFBC1E5D(iLocal_116, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_154()
{
	if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0x6AD0ABEEDDABA1F8(iLocal_116, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	if (func_157(unk_0xD803B885F5E47A62(), 150) == 2)
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (func_30(iParam0) == iParam1)
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_496;
	}
	return -1;
}

int func_158()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_157(unk_0xD803B885F5E47A62(), 150) == 2)
	{
		return 1;
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_163(1))
	{
		iVar0 = func_162();
		if (iVar0 != func_39())
		{
			if (func_61(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_38(iVar2, 0, 1))
		{
			if (iVar2 != unk_0xD803B885F5E47A62())
			{
				if (func_163(1))
				{
					if (func_160(unk_0xD803B885F5E47A62(), iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_159(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), unk_0x9539D44F3E4492F6(iVar2)))
				{
					iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0);
					if (unk_0xA30B8362589C124A(iVar3, -1, 0) == unk_0x9539D44F3E4492F6(iVar2))
					{
						if (func_61(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0x405E212DDE472467(iParam0, 0) && unk_0x405E212DDE472467(iParam1, 0))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0);
				iVar1 = unk_0x6937EA2286828455(iParam1, 0);
				if (unk_0xC844350D5D58C99A(iVar0) && unk_0xC844350D5D58C99A(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_161(iParam0);
	if (!iVar0 == func_39())
	{
		if (iVar0 == func_161(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_39())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_39();
}

var func_162()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_163(bool bParam0)
{
	return func_59(unk_0xD803B885F5E47A62(), bParam0);
}

int func_164()
{
	var uVar0;
	
	func_172(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_30768;
}

bool func_168()
{
	return Global_2450632.f_598;
}

int func_169(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2460680;
}

bool func_171()
{
	return Global_2450632.f_593;
}

void func_172(var uParam0)
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
					func_173(iVar0);
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

void func_173(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_38(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_174(iVar2, &bVar3))
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

int func_174(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
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

void func_175()
{
	if (unk_0x9BFC2168CB5FCF68(false, 0) != 5)
	{
		if (func_182(5, 0, 1))
		{
			if (unk_0xA108079788452A90(0) <= 5)
			{
				unk_0x0BEC04ECA8485A3A(5);
			}
		}
	}
	if (unk_0x11225ACFD0C1477E(false, 0) != 3)
	{
		if (func_176(3, 0, 1))
		{
			if (unk_0xA0FAF378D1CA33E8(0) <= 3)
			{
				unk_0x28E5F00F131890E3(3);
			}
		}
	}
}

bool func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(1, iParam0, 1, bParam1, bParam2);
}

int func_177(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_181(iParam0) - func_180(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_179(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_180(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_181(iParam0) - func_180(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_178(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

bool func_182(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(0, iParam0, 1, bParam1, bParam2);
}

void func_183()
{
	wait(0);
}

void func_184()
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_108.f_172[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_108.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_113)
	{
		unk_0x34D79252800B23FF(5);
		iLocal_113 = 0;
	}
	Global_1687623 = 0;
	func_186();
	func_185();
}

void func_185()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_186()
{
	if (!Local_108.f_176)
	{
		return;
	}
	if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01")))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_marine_01"));
	}
	if (unk_0xB87F6CF6E5628C67(joaat("lazer")))
	{
		unk_0x71199B01895C6202(joaat("lazer"));
	}
	if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_pilot_01")))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_pilot_01"));
	}
}

void func_187(struct<21> Param0)
{
	func_191(func_192(Param0), Param0);
	func_189(0, -1, 0);
	unk_0x0BEC04ECA8485A3A(5);
	unk_0x28E5F00F131890E3(3);
	unk_0x9752E7BAEABA939E(&Local_83, 27);
	unk_0x35B62793EAE9ADDF(&Local_107, 257);
	unk_0x256D93AFAE851A7A(0);
	if (!func_188())
	{
		func_184();
	}
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_184();
	}
	Global_2537071.f_6564 = 0;
}

int func_188()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_189(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0;
			}
		}
		if (!func_190())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_185();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_185();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_185();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_185();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return Global_1312854;
}

void func_191(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_185();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

