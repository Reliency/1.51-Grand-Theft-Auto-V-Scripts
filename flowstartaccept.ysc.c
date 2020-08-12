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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x2EBF608FFE6CA406(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x0EFF6B4415DAF4A1()) && unk_0xE7E2C8B4B9C58AE9())
	{
		unk_0x31A33F7BCB08CB80(true);
		if (!unk_0x757EF87A33649210())
		{
			if (!unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(800);
			}
		}
		iLocal_20 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xB01F55A0FD1CFD49("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x83D8570832F172A7(iLocal_20) || !unk_0x83D8570832F172A7(iLocal_21))
		{
			wait(0);
		}
		unk_0x7E60C62A7CE58FC8(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0);
		func_4(unk_0xF59058FCB716F903(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		unk_0x9CCCC7CF60F2D30F();
		while (!iLocal_22)
		{
			unk_0xBD706C594F6DCD4A();
			unk_0xD9ACBBA59FD5A09E(7);
			unk_0x6567AE843FADBA94(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x6567AE843FADBA94(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x06F8112AA79C53D9(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		unk_0x31A33F7BCB08CB80(false);
		func_3(1, 1);
		func_1();
	}
	Global_76891.f_1 = 0;
	unk_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_5(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xE17FDF9E3068281B(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xE17FDF9E3068281B(&iLocal_21);
	}
	unk_0xD9ACBBA59FD5A09E(4);
	unk_0x31A33F7BCB08CB80(false);
	unk_0x10FAF14A60A0DBE1();
}

