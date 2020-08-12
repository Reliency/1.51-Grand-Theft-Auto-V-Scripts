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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0x6CC513A908911CF0(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(500);
	}
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_2();
	}
	iLocal_18 = unk_0xB01F55A0FD1CFD49("p_bubblegum");
	while (!unk_0x83D8570832F172A7(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0x9F4FE516EAACCFC5(iLocal_19))
			{
				unk_0x86F44313DFA8F00C(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xDC3CC6D1845B0567(iLocal_19, 0.01f);
				unk_0x1EC4A41E2AED1EE1(iLocal_19, 0.02f);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			unk_0xBC8E0A7390523199(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0xEF45C43067063F18(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_19465 == 0)
	{
		if (unk_0x06F8112AA79C53D9(2, 189) || unk_0x06F8112AA79C53D9(2, 190))
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
		if (unk_0xBFC0798A6E3417F9(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(10);
			unk_0x7C19E5E4784BD7CF(fLocal_25);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(11);
			unk_0x7C19E5E4784BD7CF(fLocal_28);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7C19E5E4784BD7CF(fLocal_31);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7C19E5E4784BD7CF(fLocal_34);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(17);
			unk_0x7C19E5E4784BD7CF(fLocal_37);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(15);
			unk_0x7C19E5E4784BD7CF(fLocal_40);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(16);
			unk_0x7C19E5E4784BD7CF(fLocal_43);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0xBFC0798A6E3417F9(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x06F8112AA79C53D9(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x06F8112AA79C53D9(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(14);
			unk_0x7C19E5E4784BD7CF(fLocal_46);
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_2()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_19))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_19, 0);
	}
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	func_3(0);
	unk_0x21387C9EECC2B220(0);
	unk_0xA37A90C62806D848(1);
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

