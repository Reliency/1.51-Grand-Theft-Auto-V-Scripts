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
	int iLocal_18 = 0;
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
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(500);
	}
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_2();
	}
	iLocal_18 = unk_0xB01F55A0FD1CFD49("scaleform_profiling");
	while (!unk_0x83D8570832F172A7(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		unk_0xEF45C43067063F18(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19465 == 0)
	{
		if (((((((unk_0x06F8112AA79C53D9(2, 189) || unk_0x06F8112AA79C53D9(2, 190)) || unk_0x06F8112AA79C53D9(2, 188)) || unk_0x06F8112AA79C53D9(2, 187)) || unk_0x06F8112AA79C53D9(2, 205)) || unk_0x06F8112AA79C53D9(2, 206)) || unk_0x06F8112AA79C53D9(2, 201)) || unk_0x06F8112AA79C53D9(2, 202))
		{
			Global_19465 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_19465 = 0;
	}
	if (Global_19465 == 0)
	{
		if (unk_0x06F8112AA79C53D9(2, 189))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(10);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 190))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(11);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 205))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(4);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 206))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(6);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 188))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 187))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(16);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(2, 202))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(17);
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x21387C9EECC2B220(0);
	unk_0xE17FDF9E3068281B(&iLocal_18);
	unk_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

