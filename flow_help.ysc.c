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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x2EBF608FFE6CA406(50))
	{
		func_23();
	}
	while (true)
	{
		if (Global_111638.f_20405.f_145 > 0 || Global_110278)
		{
			if (!Global_110278)
			{
				if ((Global_41431 != 6 && Global_41431 != 15) && !Global_94751)
				{
					func_23();
				}
				if (!Global_110277)
				{
					if (Global_111638.f_20405.f_145 > 0)
					{
						if (func_20(&(Global_111638.f_20405[iLocal_21 /*16*/])))
						{
							if (func_18(func_19()))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iLocal_21 /*16*/].f_11, func_12()))
								{
									if (Global_111638.f_20405[iLocal_21 /*16*/].f_12 == Global_111638.f_20405.f_146[func_12()])
									{
										if (unk_0x1C0640BA9A7327B3() > Global_110280)
										{
											if (unk_0x1C0640BA9A7327B3() > Global_111638.f_20405[iLocal_21 /*16*/].f_8)
											{
												if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iLocal_21 /*16*/].f_4), ""))
												{
													unk_0x1E3A202C24F57DA6(1);
													func_11(&(Global_111638.f_20405[iLocal_21 /*16*/]));
												}
												else
												{
													unk_0x1E3A202C24F57DA6(1);
													func_10(&(Global_111638.f_20405[iLocal_21 /*16*/]), &(Global_111638.f_20405[iLocal_21 /*16*/].f_4));
												}
												if (Global_111638.f_20405[iLocal_21 /*16*/].f_13 != 0)
												{
													func_9(Global_111638.f_20405[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_111638.f_20405[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_111638.f_20405[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_111638.f_20405[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_111638.f_20405[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_111638.f_20405[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_111638.f_20405[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_111638.f_20405[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_111638.f_20405[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_111638.f_20405[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_111638.f_20405[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_110281 = { Global_111638.f_20405[iLocal_21 /*16*/] };
												Global_110279 = unk_0x1C0640BA9A7327B3();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_111638.f_20405.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_111638.f_20405.f_145 - 1));
												Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
												func_6();
												Global_110278 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0xA37A90C62806D848(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0xA37A90C62806D848(0);
				}
				if ((unk_0x1C0640BA9A7327B3() - Global_110279) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_110280 = unk_0x1C0640BA9A7327B3() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_110279 = 0;
				Global_110278 = 0;
			}
			if (!unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iLocal_21 /*16*/]), &Local_20) && !unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iLocal_21 /*16*/]), ""))
			{
				if (Global_111638.f_20405[iLocal_21 /*16*/].f_10 != -1)
				{
					if (unk_0x1C0640BA9A7327B3() > Global_111638.f_20405[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_111638.f_20405.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_111638.f_20405.f_145 - 1));
						Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_111638.f_20405.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_41431 != 6 && Global_41431 != 15) && !Global_94751)
		{
			func_23();
		}
		wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_6();
	}
}

bool func_2(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_3(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_4()
{
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x1C0640BA9A7327B3() - Global_110279) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_110277)
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111638.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0 /*16*/] = { Global_111638.f_20405[iParam1 /*16*/] };
	Global_111638.f_20405[iParam0 /*16*/].f_4 = { Global_111638.f_20405[iParam1 /*16*/].f_4 };
	Global_111638.f_20405[iParam0 /*16*/].f_8 = Global_111638.f_20405[iParam1 /*16*/].f_8;
	Global_111638.f_20405[iParam0 /*16*/].f_10 = Global_111638.f_20405[iParam1 /*16*/].f_10;
	Global_111638.f_20405[iParam0 /*16*/].f_9 = Global_111638.f_20405[iParam1 /*16*/].f_9;
	Global_111638.f_20405[iParam0 /*16*/].f_11 = Global_111638.f_20405[iParam1 /*16*/].f_11;
	Global_111638.f_20405[iParam0 /*16*/].f_12 = Global_111638.f_20405[iParam1 /*16*/].f_12;
	Global_111638.f_20405[iParam0 /*16*/].f_13 = Global_111638.f_20405[iParam1 /*16*/].f_13;
	Global_111638.f_20405[iParam0 /*16*/].f_14 = Global_111638.f_20405[iParam1 /*16*/].f_14;
	Global_111638.f_20405[iParam0 /*16*/].f_15 = Global_111638.f_20405[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_10(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_11(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

int func_12()
{
	func_13();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_16(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_15(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_14(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111638.f_2358.f_539.f_4321))
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

bool func_14(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19()
{
	func_13();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_20(var uParam0)
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_21())
		{
			return 0;
		}
		if (Global_76620)
		{
			return 0;
		}
		if (Global_95664)
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_15, 1))
		{
			if (Global_95672)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_21()
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

int func_22()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

void func_23()
{
	if (Global_110278)
	{
		if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	Global_110279 = 0;
	Global_110278 = 0;
	unk_0x10FAF14A60A0DBE1();
}

