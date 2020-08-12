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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&iLocal_46))
	{
		while (!func_76())
		{
			func_64(&iLocal_46);
			if (func_54(&iLocal_46))
			{
			}
			else
			{
				func_14(&iLocal_46);
				wait(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_13();
	if (func_10())
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	unk_0x34D79252800B23FF(5);
	func_3();
	unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 0);
	func_2();
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852), 3);
}

void func_4(int iParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0x1727A44C562FBED2(Global_2416079.f_1579) || Global_2416079.f_1579 == unk_0x0D0A574C76D769AC()) || bParam2)
	{
		if (bParam0)
		{
			Global_2416079.f_1579 = unk_0x0D0A574C76D769AC();
			Global_2416079.f_1580 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			Global_2416079.f_1579 = -1;
		}
		Global_2416079.f_1582 = iParam1;
		Global_2416079.f_1584 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0x1727A44C562FBED2(Global_2416079.f_1595) || Global_2416079.f_1595 == unk_0x0D0A574C76D769AC()) || bParam1)
	{
		if (bParam0)
		{
			Global_2416079.f_1595 = unk_0x0D0A574C76D769AC();
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_68.f_2), 23);
		}
		else
		{
			Global_2416079.f_1595 = -1;
			unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_68.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int iParam0)
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
}

bool func_10()
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

bool func_12(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_13()
{
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852), 1);
}

void func_14(int iParam0)
{
	func_51(iParam0);
	func_50(iParam0);
	if (func_49(iParam0))
	{
		if (((func_48(iParam0) && !func_47(iParam0)) && unk_0xAFE0D3608EDA7039(iParam0->f_1)) && !func_46())
		{
			func_45(iParam0, 1, 0);
			func_44(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_47(iParam0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0->f_1) && !func_46())
			{
				func_45(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_43(iParam0))
	{
		unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 1);
		func_42();
		func_41(iParam0);
	}
	else if (func_40(iParam0))
	{
		unk_0x7126AEBCB4199143(unk_0xD803B885F5E47A62(), 0);
		func_13();
		func_41(iParam0);
		func_39(iParam0, 5);
	}
	if (func_47(iParam0) && !func_48(iParam0))
	{
		func_37(iParam0);
		func_36();
		func_39(iParam0, 2);
		if (func_33(iParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(iParam0);
	}
	func_3();
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852), 4);
}

void func_15(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !unk_0xFEBC1E4EC9E001F0()) && func_31(iParam0)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iParam0->f_1, -1, 0)))
	{
		func_21(iParam0, 1);
		func_20(&(iParam0->f_6), 3);
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_18(iParam0), iVar0);
		func_16(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

void func_16(int iParam0)
{
	func_20(&(iParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_18(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	iVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)
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

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
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

bool func_27()
{
	return (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852, 4) && !func_28());
}

bool func_28()
{
	return ((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) && Global_4456448.f_2 == 20);
}

bool func_29()
{
	return Global_73825;
}

int func_30(int iParam0)
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

int func_31(int iParam0)
{
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()
{
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0xD245978525608929(0, 114) || unk_0xD245978525608929(0, 99)) || unk_0xD245978525608929(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0xD245978525608929(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xD245978525608929(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xD245978525608929(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case 1181327175:
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(int iParam0)
{
	return (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0));
}

void func_36()
{
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 66, 1);
	unk_0x38C3A68D7861DCFD(0, 67, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 91, 1);
	unk_0x38C3A68D7861DCFD(0, 92, 1);
	unk_0x38C3A68D7861DCFD(0, 99, 1);
	unk_0x38C3A68D7861DCFD(0, 100, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
}

void func_37(int iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !unk_0xFEBC1E4EC9E001F0()) && func_9(&(iParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iParam0->f_1, -1, 0)))
	{
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_38(iParam0), iVar0);
		func_44(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

char* func_38(int iParam0)
{
	if (func_49(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)
{
	if (func_48(iParam0))
	{
		return;
	}
	if (unk_0x02A813E6E0380440() != iParam1)
	{
		unk_0x34D79252800B23FF(iParam1);
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > iParam1)
	{
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iParam1, 0);
	}
}

bool func_40(int iParam0)
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_41(int iParam0)
{
	func_5(&(iParam0->f_6), 0);
	if (func_10())
	{
		unk_0xA37A90C62806D848(1);
	}
	if (!func_49(iParam0))
	{
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_42()
{
	unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852), 1);
}

bool func_43(int iParam0)
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_44(int iParam0)
{
	func_20(&(iParam0->f_6), 1);
}

void func_45(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0->f_2)
	{
		case 1181327175:
			unk_0x14F219E1B81AE5CE(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852, 3);
}

bool func_47(int iParam0)
{
	return func_9(iParam0, 0);
}

bool func_48(int iParam0)
{
	return func_9(iParam0, 2);
}

bool func_49(int iParam0)
{
	return ((func_35(iParam0) && iParam0->f_3 == unk_0x16F2683693E537C9()) || unk_0xA30B8362589C124A(iParam0->f_1, -1, 0) == unk_0x16F2683693E537C9());
}

void func_50(int iParam0)
{
	if (func_10() && (func_30(0) || func_29()))
	{
		iParam0->f_6.f_2 = 1;
		unk_0xA37A90C62806D848(1);
		func_5(&(iParam0->f_6), 0);
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_49(iParam0))
			{
				func_21(iParam0, -1);
			}
		}
	}
}

void func_51(int iParam0)
{
	if (func_47(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_53())
			{
				func_4(iParam0);
			}
		}
		else if (!func_53())
		{
			func_52(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852), 2);
}

void func_52(int iParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(iParam0->f_6), 5);
}

bool func_53()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852, 2);
}

int func_54(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 1;
	}
	if (!func_63(iParam0))
	{
		return 1;
	}
	if (!func_62(iParam0->f_2))
	{
		return 1;
	}
	if (func_61(unk_0xD803B885F5E47A62(), 1, 1))
	{
		return 1;
	}
	if (func_60(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_57(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_55(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2425662[iParam0 /*421*/].f_236 > -1)
		{
			if (func_56(Global_2425662[iParam0 /*421*/].f_236) == 4)
			{
				return 1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_57(int iParam0)
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)
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

int func_59()
{
	return -1;
}

int func_60(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_59())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(int iParam0)
{
	return (unk_0xC844350D5D58C99A(iParam0->f_1) && unk_0xDF1306B443CD3D15(iParam0->f_1, 0));
}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_75(iParam0);
	if (bVar0)
	{
		func_20(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_20(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_35(iParam0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iParam0->f_1 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (func_63(iParam0))
			{
				iParam0->f_2 = unk_0x134B62B726CEC8E6(iParam0->f_1);
				if (unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					func_20(iParam0, 2);
				}
			}
		}
	}
	if (func_63(iParam0))
	{
		if (!unk_0xBBA8A868118C90ED(iParam0->f_1, -1, 0))
		{
			iVar2 = unk_0xA30B8362589C124A(iParam0->f_1, -1, 0);
			if ((unk_0xC844350D5D58C99A(iVar2) && !unk_0x437347B10A200C4B(iVar2, 0)) && unk_0x34BFC6F0CB887BC2(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == unk_0x16F2683693E537C9())
				{
					func_20(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_20(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(iParam0))
		{
			iParam0->f_4 = func_74(unk_0x16F2683693E537C9(), 0);
		}
		if (func_49(iParam0))
		{
			if (func_73() && func_67(iParam0))
			{
				func_20(iParam0, 0);
			}
		}
		else
		{
			func_65(iParam0);
		}
	}
	if (func_43(iParam0))
	{
		iParam0->f_6.f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_65(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_3) && func_66(unk_0x83FACCC48B68F9D1(iParam0->f_3)))
	{
		func_20(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_66(int iParam0)
{
	return (iParam0 != -1 && unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_852, 1));
}

bool func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_72();
	if (unk_0xAFE0D3608EDA7039(iParam0->f_1))
	{
		func_71(iParam0);
		switch (iParam0->f_2)
		{
			case 1181327175:
				bVar0 = !unk_0xDE85FD29C72C3AA2(iParam0->f_1);
				break;
		}
	}
	else if (func_70(iParam0))
	{
		if (func_69(iParam0))
		{
			unk_0x0C8A454B494DAA0D(iParam0->f_1);
		}
	}
	else
	{
		func_68(iParam0);
	}
	return bVar0;
}

void func_68(var uParam0)
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x1C0640BA9A7327B3();
}

bool func_69(var uParam0)
{
	return (unk_0x1C0640BA9A7327B3() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

bool func_72()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_852, 1);
}

bool func_73()
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	var uVar0;
	
	func_85(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_84())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_83())
	{
		return 1;
	}
	if (func_82(159))
	{
		if (!func_81())
		{
			return 1;
		}
	}
	if (func_82(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()
{
	switch (func_80())
	{
		case 0:
			return func_79();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()
{
	return Global_30768;
}

bool func_81()
{
	return Global_2450632.f_598;
}

int func_82(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_83()
{
	return Global_2460680;
}

bool func_84()
{
	return Global_2450632.f_593;
}

void func_85(var uParam0)
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
					func_86(iVar0);
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

void func_86(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_87(iVar2, &bVar3))
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

int func_87(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
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

int func_88(int iParam0)
{
	func_64(iParam0);
	if (func_63(iParam0))
	{
		if (func_49(iParam0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0->f_1))
			{
				if (!func_46())
				{
					func_45(iParam0, 0, 0);
				}
				else
				{
					func_20(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

