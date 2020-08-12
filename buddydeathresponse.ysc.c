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
	if (unk_0x2EBF608FFE6CA406(2) || unk_0x28CDCD4EC82F21C0())
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_9(&iLocal_20))
	{
		wait(0);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_20))
	{
		if (!Global_95239)
		{
			unk_0x73270B3C9CC833FD(iLocal_20, true, 1);
			if (unk_0xD1960163A3042274(iLocal_20, 1435919172) != 7)
			{
				unk_0xA3BF0AA5A2608191(iLocal_20);
			}
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
			unk_0x11AD11297DC58CC7(iLocal_20, 1);
			unk_0xDD353D0E9C789D0E(&uVar1);
			if (!unk_0x405E212DDE472467(iLocal_20, 0))
			{
				if (!unk_0x4734A6196B611C3B(iLocal_20, 0) && !unk_0x405E212DDE472467(iLocal_20, 0))
				{
					unk_0x796BDF31572BB055(0, vVar0, 6000);
				}
			}
			unk_0xDBE4EC9C88839074(0, vVar0, 6000, 0, 2);
			unk_0x75ABDC5F81978924(uVar1);
			unk_0x78ADC381772E3D54(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x757EF87A33649210())
	{
		wait(0);
	}
	if (unk_0xC844350D5D58C99A(iLocal_20))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_20))
		{
			unk_0xFADC0A217229F6B5(iLocal_20, 1);
		}
		unk_0x6DAD7906B73F064D(&iLocal_20);
	}
	Global_95239 = 0;
	unk_0x10FAF14A60A0DBE1();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 1000;
	while (unk_0x1C0640BA9A7327B3() < iVar0 && !unk_0x757EF87A33649210())
	{
		wait(0);
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96113[iLocal_18]) && !unk_0xEB6A8945D1AC98A1(Global_96113[iLocal_18]))
		{
			if (Global_96113[iLocal_18] != unk_0x16F2683693E537C9())
			{
				if (!unk_0xAF6690C489CC6203(Global_96113[iLocal_18]))
				{
					if (unk_0x405E212DDE472467(Global_96113[iLocal_18], 0) || !unk_0xD59B17D2DFF98E26(Global_96113[iLocal_18]))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Global_96113[iLocal_18], 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_96113[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xF649DD3BF44195C7(Global_96113[iLocal_18], unk_0x16F2683693E537C9(), 17))
									{
										if (unk_0x405E212DDE472467(Global_96113[iLocal_18], 0))
										{
											iVar0 = unk_0x6937EA2286828455(Global_96113[iLocal_18], 0);
										}
										if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0)) || !unk_0xC844350D5D58C99A(iVar0))
										{
											*uParam0 = Global_96113[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x757EF87A33649210())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_6(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_5(unk_0x16F2683693E537C9());
			if (func_8(iVar0) && (!func_12(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_8(Global_111638.f_2358.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41431 == iParam0;
}

