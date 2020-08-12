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
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1389296, 1))
		{
			func_18();
		}
		else
		{
			unk_0x37AD2AB54480FA6A(32, 0, -1);
			func_15(0, -1, 0);
			unk_0x256D93AFAE851A7A(0);
			iLocal_20 = 1;
		}
	}
	else if (unk_0x2EBF608FFE6CA406(2))
	{
		func_18();
	}
	while (true)
	{
		wait(0);
		if (iLocal_20 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (unk_0xC844350D5D58C99A(iScriptParam_21))
		{
			if (unk_0x63D2C15453688621(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_21))
						{
							vLocal_19 = { unk_0x68F4C0EC296D3901(iScriptParam_21, true) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x713261485D0F1B6C(iScriptParam_21, 0) && unk_0x4FC40AB0ECCE6E18(iScriptParam_21)) && !unk_0xAF6690C489CC6203(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_18();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x09AC81E49EA267F7(70, 121);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x09AC81E49EA267F7(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x5D96D8530B3D0904(&iVar2, 3);
	unk_0x5D96D8530B3D0904(&iVar2, 4);
	unk_0x523BCC9DC80CD82F(iVar0);
	while (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		wait(0);
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0xB8D1BBEFD1257857(iVar1, unk_0x550B1459B4642A86(vLocal_19, 1.2f, 1.5f), iVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0xA6FF0828D17CF374(iVar1, unk_0x550B1459B4642A86(vLocal_19, 1.2f, 1.5f), iVar2, iVar3, 0, iVar0);
	}
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()
{
	var uVar0;
	
	func_11(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(159))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_30768;
}

bool func_7()
{
	return Global_2450632.f_598;
}

int func_8(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2460680;
}

bool func_10()
{
	return Global_2450632.f_593;
}

void func_11(var uParam0)
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
					func_12(iVar0);
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

void func_12(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_14(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_13(iVar2, &bVar3))
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

int func_13(int iParam0, var uParam1)
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

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(157))
				{
					if (!bParam2)
					{
						func_17();
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
					func_17();
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
				func_17();
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
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312854;
}

void func_17()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_18()
{
	unk_0x10FAF14A60A0DBE1();
}

