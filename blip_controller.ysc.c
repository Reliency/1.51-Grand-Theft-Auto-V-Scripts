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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_25 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	fLocal_35 = 80f;
	fLocal_36 = 140f;
	fLocal_37 = 180f;
	bLocal_46 = true;
	iLocal_49 = -1;
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_51();
	}
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		iVar1 = func_50(iVar0);
		func_47(iVar1, func_48(iVar0));
		iVar0++;
	}
	func_46(91, 1);
	func_46(92, 1);
	Global_31143 = 1;
	while (Global_31145)
	{
		if ((unk_0x1C0640BA9A7327B3() % 250) == 0)
		{
		}
		wait(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_51[iVar2] = -1;
		iVar2++;
	}
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_60 = Global_37197;
	bVar3 = false;
	func_45();
	func_43();
	while (true)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_31143 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_31143)
		{
			func_45();
			func_43();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_37197)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 13))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 7))
						{
							if (!func_32(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 16))
						{
							if (!func_30(Global_31146[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 14))
						{
							if (func_32(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 8))
						{
							if (Global_31146[iVar2 /*23*/].f_16 != 4 && Global_31146[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_53)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_41)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_31146[iVar2 /*23*/].f_16 == 1)
						{
							func_23();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							unk_0x0674E58A79778E99(&(Global_31146[iVar2 /*23*/].f_11), 0);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 15))
						{
							unk_0x5D96D8530B3D0904(&(Global_31146[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 15))
					{
						unk_0x5D96D8530B3D0904(&(Global_31146[iVar2 /*23*/].f_11), 0);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 0) && unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!unk_0xE4EDC4B0E92C078B(Global_31146[iVar2 /*23*/].f_19))
						{
							while (!unk_0xB7B9B7C245ECD0D7() < 150)
							{
								wait(2000);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 28))
										{
											Global_31146[iVar2 /*23*/].f_19 = unk_0x3F3860E60C44719E(Global_31146[iVar2 /*23*/][0 /*3*/], Global_31146[iVar2 /*23*/].f_10);
											unk_0x7F010F50CE03A8AF(Global_31146[iVar2 /*23*/].f_19, 128);
											unk_0xF2D30B8ACAF12A39(Global_31146[iVar2 /*23*/].f_19, 0);
										}
										else
										{
											Global_31146[iVar2 /*23*/].f_19 = unk_0x6CC513A908911CF0(Global_31146[iVar2 /*23*/][iLocal_53 /*3*/]);
											unk_0xBC8E0A7390523199(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/].f_12[iLocal_53]);
										}
										break;
									
									default:
										Global_31146[iVar2 /*23*/].f_19 = unk_0x6CC513A908911CF0(1f, 2f, 3f);
										break;
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 28))
							{
								Global_31146[iVar2 /*23*/].f_19 = unk_0x3F3860E60C44719E(Global_31146[iVar2 /*23*/][0 /*3*/], Global_31146[iVar2 /*23*/].f_10);
								unk_0x7F010F50CE03A8AF(Global_31146[iVar2 /*23*/].f_19, 128);
								unk_0xF2D30B8ACAF12A39(Global_31146[iVar2 /*23*/].f_19, 0);
							}
							else
							{
								Global_31146[iVar2 /*23*/].f_19 = unk_0x6CC513A908911CF0(Global_31146[iVar2 /*23*/][0 /*3*/]);
								unk_0xBC8E0A7390523199(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/].f_12[0]);
							}
							if (Global_31146[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										unk_0x2F9282246F89FFD1(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/][iLocal_53 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								unk_0x2F9282246F89FFD1(Global_31146[iVar2 /*23*/].f_19, Global_31146[iVar2 /*23*/][0 /*3*/]);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_31146[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_43)
								{
									unk_0xF412DD40DE84CE72(Global_31146[iVar2 /*23*/].f_19, 1);
									iLocal_43 = 0;
								}
								else
								{
									unk_0xC96D4E16FF8C8592(Global_31146[iVar2 /*23*/].f_19, 1);
									iLocal_43 = 1;
								}
								unk_0x0EC848EFF66DF45A(Global_31146[iVar2 /*23*/].f_19, 10000);
								unk_0x0674E58A79778E99(&(Global_31146[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								unk_0xF412DD40DE84CE72(Global_31146[iVar2 /*23*/].f_19, 0);
							}
						}
						func_20(Global_31146[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar2 /*23*/].f_19))
						{
							unk_0x142CC44DB769B57E(&(Global_31146[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_31146[iVar2 /*23*/].f_16 == 1)
							{
								func_18(iVar2);
							}
						}
						Global_31146[iVar2 /*23*/].f_19 = 0;
					}
				}
				unk_0x0674E58A79778E99(&(Global_31146[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (unk_0x757EF87A33649210())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					wait(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					wait(0);
				}
				iVar2++;
			}
		}
		Global_31143 = Global_31144;
		Global_31144 = 0;
		if (iVar4 == 0)
		{
			func_11();
			func_7();
			wait(500);
			iLocal_53 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_2()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_5(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_4(unk_0x16F2683693E537C9());
			if (func_3(iVar0) && (!func_32(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_3(Global_111638.f_2358.f_539.f_4321))
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

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_6(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_6(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_7()
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_10(126))
				{
					if (func_9(138))
					{
						func_8(138, 0, 0);
					}
					if (!func_9(139))
					{
						if (unk_0x8A22C4C08282BF26(joaat("chop")) == 0)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 19.3f, 528.24f, 169.63f, true) > 50f)
							{
								func_8(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_9(139))
					{
						func_8(139, 0, 0);
					}
					if (!func_9(138))
					{
						if (unk_0x8A22C4C08282BF26(joaat("chop")) == 0)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), -11.15f, -1425.56f, 29.67f, true) > 50f)
							{
								func_8(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2)
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

bool func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19);
}

int func_10(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_11()
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
	{
		return;
	}
	vVar0 = { func_17(unk_0xA30EC016B12C03E4()) };
	iVar1 = -1;
	fVar2 = 1000000f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (unk_0xE4EDC4B0E92C078B(Global_31146[iLocal_51[iVar3] /*23*/].f_19))
			{
				fVar4 = unk_0x0EB28750412C3A5A(vVar0, unk_0xAC14F6E4B17D7835(Global_31146[iLocal_51[iVar3] /*23*/].f_19), true);
				if (fVar4 < fVar2)
				{
					fVar2 = fVar4;
					iVar1 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (iLocal_49 == iVar1)
	{
		return;
	}
	iLocal_49 = iVar1;
	if (iVar1 == -1)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (iVar3 == iVar1)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_31146[iLocal_51[iVar3] /*23*/].f_19))
				{
					func_16(iLocal_51[iVar3]);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(Global_31146[iLocal_51[iVar3] /*23*/].f_19))
			{
				func_12(iLocal_51[iVar3]);
			}
		}
		iVar3++;
	}
}

void func_12(int iParam0)
{
	func_15(iParam0, 0, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 4);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_14(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 5);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 11);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_16(int iParam0)
{
	func_15(iParam0, 1, 0);
	func_14(iParam0, 1);
	func_13(iParam0, 1);
}

Vector3 func_17(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (iLocal_50 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			iLocal_50 = (iLocal_50 - 1);
			iLocal_51[iVar0] = -1;
			if (iParam0 == iLocal_49)
			{
				iLocal_49 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_50 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_51[iVar1] = iParam0;
	iLocal_50++;
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = func_1();
	unk_0xA6B0C9C2D8FC9744(iParam0, 1);
	unk_0x2A065371C9D96655(iParam0, 2);
	unk_0x61755AC17D8F538E(iParam0, func_22(iParam1));
	if (Global_31146[iParam1 /*23*/].f_16 == 4 || Global_31146[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				unk_0x61755AC17D8F538E(iParam0, 42);
				break;
			
			case 1:
				unk_0x61755AC17D8F538E(iParam0, 43);
				break;
			
			case 2:
				unk_0x61755AC17D8F538E(iParam0, 44);
				break;
			}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 28))
	{
		unk_0x516E63E474722206(iParam0, 1f);
	}
	if (!unk_0xEA6BC48857E0AC4C(&(Global_31146[iParam1 /*23*/].f_20)))
	{
		if (unk_0xEF07223F00EBE9C9(&(Global_31146[iParam1 /*23*/].f_20)))
		{
			unk_0xDC5B2F9D0CCE3A10(iParam0, &(Global_31146[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 4);
	bVar2 = unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 5);
	bVar3 = unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (func_21(0))
	{
		bVar4 = unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 11);
	}
	if (bVar3 && !bVar4)
	{
		unk_0x6ABCCE651368DB93(iParam0, false);
	}
	else
	{
		unk_0x6ABCCE651368DB93(iParam0, true);
	}
	if (bVar2 && bVar1)
	{
		unk_0x9D7CDDB4B55142AF(iParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			unk_0x9D7CDDB4B55142AF(iParam0, 5);
		}
		if (bVar1)
		{
			unk_0x9D7CDDB4B55142AF(iParam0, 3);
		}
	}
	switch (Global_31146[iParam1 /*23*/].f_16)
	{
		case 7:
			unk_0x2A065371C9D96655(iParam0, 2);
			unk_0xDBA4FB345B87DECC(iParam0, 0);
			break;
		
		case 6:
		case 5:
			unk_0x2A065371C9D96655(iParam0, 2);
			unk_0xDBA4FB345B87DECC(iParam0, 0);
			break;
		
		case 1:
			unk_0x2A065371C9D96655(iParam0, 3);
			unk_0xDBA4FB345B87DECC(iParam0, 1);
			break;
		
		case 9:
			unk_0x2A065371C9D96655(iParam0, 1);
			unk_0x5C75F8C0E612F520(iParam0, 10);
			unk_0xDBA4FB345B87DECC(iParam0, 0);
			break;
		
		case 4:
		case 8:
			unk_0xDBA4FB345B87DECC(iParam0, 1);
			if (Global_31146[iParam1 /*23*/].f_16 == 4)
			{
				unk_0x2A065371C9D96655(iParam0, 7);
			}
			else
			{
				unk_0x2A065371C9D96655(iParam0, 5);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 28))
					{
						unk_0x7F010F50CE03A8AF(iParam0, 0);
					}
					else
					{
						if (Global_31146[iParam1 /*23*/].f_17 == 0)
						{
							unk_0x61755AC17D8F538E(iParam0, 42);
						}
						if (Global_31146[iParam1 /*23*/].f_17 == 1)
						{
							unk_0x61755AC17D8F538E(iParam0, 43);
						}
						if (Global_31146[iParam1 /*23*/].f_17 == 2)
						{
							unk_0x61755AC17D8F538E(iParam0, 44);
						}
						if (Global_31146[iParam1 /*23*/].f_16 == 8)
						{
							unk_0x6ABCCE651368DB93(iParam0, unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 5));
							unk_0x2A065371C9D96655(iParam0, 3);
							unk_0x6ABCCE651368DB93(iParam0, true);
							unk_0x54B31D18C3F36EB7(iParam0, 1);
							unk_0x516E63E474722206(iParam0, 0.77f);
						}
						else
						{
							unk_0x516E63E474722206(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 28))
					{
						unk_0x7F010F50CE03A8AF(iParam0, 128);
					}
					if (Global_31146[iParam1 /*23*/].f_16 == 8)
					{
						unk_0x54B31D18C3F36EB7(iParam0, 0);
					}
				}
			}
			break;
		
		default:
			unk_0x2A065371C9D96655(iParam0, 5);
			break;
	}
	switch (iParam1)
	{
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
			unk_0xDBA4FB345B87DECC(iParam0, 1);
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				unk_0x2F9282246F89FFD1(Global_31146[iParam1 /*23*/].f_19, Global_31146[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 17))
	{
		unk_0x81232862B3277CAA(iParam0, 1);
	}
	else
	{
		unk_0x81232862B3277CAA(iParam0, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 20))
	{
		unk_0xE20923FF0A82B068(iParam0, 1);
	}
	else
	{
		unk_0xE20923FF0A82B068(iParam0, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam1 /*23*/].f_11, 29))
	{
		unk_0x61755AC17D8F538E(iParam0, 39);
	}
}

int func_21(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	uVar1 = unk_0xDC4DD3980107166C(Global_31146[iVar0 /*23*/].f_11, 21, 26);
	return uVar1;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_93782[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0))
	{
		if (Global_93782[iParam0 /*10*/].f_9 != func_28())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_25(6))
		{
			bVar0 = false;
		}
	}
	if (func_21(14))
	{
		bVar0 = false;
	}
	func_8(Global_93782[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_25(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], 0);
}

int func_26(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_98796.f_343 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_27(iParam0, &sVar1);
		iVar2 = unk_0x0D1736C2E221BCEA(Global_93782[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_98796.f_343 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xBCFF5481C5F58C19("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x7F8A39872A07D2CE(sParam1, "");
}

int func_28()
{
	func_2();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_31146[iVar0 /*23*/].f_17 == func_1())
	{
		return 1;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_31146[iVar0 /*23*/].f_18 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, Global_41431);
}

int func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_33()
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iLocal_57 && unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 13))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_58 && ((unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 7) || unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 11)) || unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 16)))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_59 && unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 14))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_54 && ((unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 10) || unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 8)) || unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 19)))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_55)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_61 && unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 27))
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_62 && (unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 1) || unk_0xEAE0D21A50E6C7F4(Global_31146[iParam0 /*23*/].f_11, 2))) || Global_31146[iParam0 /*23*/].f_16 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_41())
	{
		if (!iLocal_56)
		{
			iLocal_56 = 1;
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		if (!iLocal_57)
		{
			iLocal_57 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_58)
		{
			iLocal_58 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_59)
		{
			iLocal_59 = 1;
			iVar0 = 1;
		}
	}
	bLocal_55 = false;
	if (Global_37197 != iLocal_60)
	{
		iLocal_60 = Global_37197;
		if (!bLocal_55)
		{
			bLocal_55 = true;
			iVar0 = 1;
		}
	}
	if (func_36())
	{
		if (!iLocal_62)
		{
			iLocal_62 = 1;
			iVar0 = 1;
		}
	}
	iLocal_53 = func_1();
	if (iLocal_53 != iLocal_52)
	{
		iLocal_52 = iLocal_53;
		iLocal_54 = 1;
		iVar0 = 1;
	}
	iLocal_42 = bLocal_41;
	if (func_10(130))
	{
		bLocal_41 = true;
	}
	if (func_10(131))
	{
		bLocal_41 = false;
	}
	if (bLocal_41 != iLocal_42)
	{
		if (!iLocal_61)
		{
			iVar0 = 1;
		}
		iLocal_61 = 1;
	}
	return iVar0;
}

int func_36()
{
	int iVar0;
	
	if (unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0))
	{
		return 0;
	}
	iVar0 = unk_0x4D570FEF9D230CE7(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()));
	if (iLocal_47 != iVar0)
	{
		iLocal_47 = iVar0;
		if (iVar0 == 0 || func_37(iVar0))
		{
			bLocal_46 = true;
		}
		else
		{
			bLocal_46 = false;
		}
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38()
{
	if (iLocal_48 != func_21(0))
	{
		iLocal_48 = func_21(0);
		return 1;
	}
	return 0;
}

bool func_39()
{
	bool bVar0;
	
	bVar0 = Global_37198;
	Global_37198 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_40()
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) != iLocal_45)
	{
		iLocal_45 = unk_0x179932739160BA96(unk_0xA30EC016B12C03E4());
		return 1;
	}
	return 0;
}

int func_41()
{
	if (Global_41431 != 15)
	{
		return 0;
	}
	if (unk_0xD8A54335F18763BA() != iLocal_44)
	{
		iLocal_44 = unk_0xD8A54335F18763BA();
		return 1;
	}
	return 0;
}

void func_42()
{
	iLocal_54 = 0;
	bLocal_55 = false;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
}

void func_43()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, 1, 0);
		func_8(113, 1, 0);
		func_8(114, 1, 0);
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_45()
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, 0);
		func_8(157, 1, 0);
		func_8(161, 1, 0);
		func_8(160, 1, 0);
		func_8(158, 1, 0);
		func_12(158);
		func_8(159, 1, 0);
		func_12(159);
	}
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_31146[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_31146[iVar0 /*23*/].f_11), 2);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	unk_0x5D96D8530B3D0904(&(Global_31146[iVar0 /*23*/].f_11), 18);
}

void func_47(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_31146[iVar0 /*23*/].f_20), sParam1, 8);
	if (unk_0xE4EDC4B0E92C078B(Global_31146[iVar0 /*23*/].f_19))
	{
		unk_0xDC5B2F9D0CCE3A10(Global_31146[iVar0 /*23*/].f_19, sParam1);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_49(iParam0, 0);
			break;
		
		case 8:
			return func_49(iParam0, 0);
			break;
		
		case 9:
			return func_49(iParam0, 0);
			break;
		
		case 10:
			return func_49(iParam0, 0);
			break;
		
		case 11:
			return func_49(iParam0, 0);
			break;
		
		case 12:
			return func_49(iParam0, 0);
			break;
		
		case 13:
			return func_49(iParam0, 0);
			break;
		
		case 14:
			return func_49(iParam0, 0);
			break;
		
		case 15:
			return func_49(iParam0, 0);
			break;
		
		case 16:
			return func_49(iParam0, 0);
			break;
		
		case 17:
			return func_49(iParam0, 0);
			break;
		
		case 18:
			return func_49(iParam0, 0);
			break;
		
		case 19:
			return func_49(iParam0, 0);
			break;
		
		case 20:
			return func_49(iParam0, 0);
			break;
		
		case 21:
			return func_49(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_49(iParam0, 0);
			break;
		
		case 40:
			return func_49(iParam0, 0);
			break;
		
		case 41:
			return func_49(iParam0, 0);
			break;
		
		case 42:
			return func_49(iParam0, 0);
			break;
		
		case 43:
			return func_49(iParam0, 0);
			break;
		
		case 44:
			return func_49(iParam0, 0);
			break;
		
		case 45:
			return func_49(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_51()
{
	unk_0x10FAF14A60A0DBE1();
}

