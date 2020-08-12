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
	int iLocal_20 = 0;
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
	unk_0xB57F88F0123F4C38();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		settimera(0);
	}
	while (true)
	{
		wait(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && timera() > 1500)
					{
						func_6();
						settimera(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_19454, 0))
					{
						func_4();
						Global_19464 = 1;
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
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

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_19467, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(24);
	unk_0x3CAEA85DA607305E(0);
	if (unk_0xEAE0D21A50E6C7F4(Global_4269765, 23))
	{
		unk_0x1200CC973A2399C8(false);
		func_8("CELL_EXTBYOU");
		unk_0x3CAEA85DA607305E(Global_4269766);
		unk_0x3CAEA85DA607305E(floor(Global_4270046));
		unk_0x3CAEA85DA607305E(Global_4269767);
		unk_0x3CAEA85DA607305E(floor(Global_4270046.f_1));
		unk_0x3CAEA85DA607305E(Global_4269768);
		unk_0x3CAEA85DA607305E(floor(Global_4270046.f_2));
		func_8("CELL_BODYG");
		unk_0x3CAEA85DA607305E(Global_4269769);
		unk_0x3CAEA85DA607305E(floor(Global_4270049));
		unk_0x3CAEA85DA607305E(Global_4269770);
		unk_0x3CAEA85DA607305E(floor(Global_4270049.f_1));
		unk_0x3CAEA85DA607305E(Global_4269771);
		unk_0x3CAEA85DA607305E(floor(Global_4270049.f_2));
	}
	else
	{
		unk_0x1200CC973A2399C8(false);
		func_8("CELL_EXTBYOU");
		unk_0x3CAEA85DA607305E(Global_4269769);
		unk_0x3CAEA85DA607305E(floor(Global_4270049));
		unk_0x3CAEA85DA607305E(Global_4269770);
		unk_0x3CAEA85DA607305E(floor(Global_4270049.f_1));
		unk_0x3CAEA85DA607305E(Global_4269771);
		unk_0x3CAEA85DA607305E(floor(Global_4270049.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x3CAEA85DA607305E(Global_4269766);
		unk_0x3CAEA85DA607305E(floor(Global_4270046));
		unk_0x3CAEA85DA607305E(Global_4269767);
		unk_0x3CAEA85DA607305E(floor(Global_4270046.f_1));
		unk_0x3CAEA85DA607305E(Global_4269768);
		unk_0x3CAEA85DA607305E(floor(Global_4270046.f_2));
	}
	unk_0x7E60D21B163E9D56();
	func_9(Global_19467, "DISPLAY_VIEW", 24f, to_float(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_19474)
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_7356, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_8(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_8(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_8(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_8(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_8(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

