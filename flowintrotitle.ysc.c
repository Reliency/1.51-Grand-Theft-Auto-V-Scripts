#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2EBF608FFE6CA406(83))
	{
		func_10();
	}
	unk_0x98AB0CC3E937A146(0);
	unk_0x0674E58A79778E99(&(Global_111638.f_10011.f_25), 1);
	func_7();
	unk_0x31A33F7BCB08CB80(true);
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0);
	}
	iLocal_0 = unk_0xB01F55A0FD1CFD49("OPENING_CREDITS");
	while (!unk_0x83D8570832F172A7(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!unk_0x757EF87A33649210())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x1C0640BA9A7327B3() + 8000 + round((2f * 1000f)));
	while (!unk_0x22A8E52414415B76())
	{
		func_7();
		if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 1))
		{
			unk_0x6567AE843FADBA94(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x1C0640BA9A7327B3() + round((2f * 1000f)));
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 1);
				if (unk_0xE7E2C8B4B9C58AE9() || unk_0x0EFF6B4415DAF4A1())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_98783 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x7E60C62A7CE58FC8(iLocal_0, "HIDE_LOGO");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x7E60C62A7CE58FC8(iLocal_0, "SHOW_LOGO");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7C19E5E4784BD7CF(fParam3);
	unk_0x7C19E5E4784BD7CF(fParam4);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7C19E5E4784BD7CF(fParam6);
	unk_0x7C19E5E4784BD7CF(fParam7);
	unk_0x7E60D21B163E9D56();
}

void func_7()
{
	unk_0xBD706C594F6DCD4A();
	unk_0x38C3A68D7861DCFD(2, 199, 1);
	unk_0xD9ACBBA59FD5A09E(7);
	func_8();
}

void func_8()
{
	unk_0xC2127C0F64D6A3B9();
	func_9();
}

void func_9()
{
	Global_22211.f_134 = 1;
}

void func_10()
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xE17FDF9E3068281B(&iLocal_0);
	}
	unk_0xD9ACBBA59FD5A09E(4);
	unk_0x31A33F7BCB08CB80(false);
	unk_0x98AB0CC3E937A146(1);
	unk_0x10FAF14A60A0DBE1();
}

