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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	vLocal_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0x38C3A68D7861DCFD(0, 26, 1);
	if (func_25(unk_0x16F2683693E537C9()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
		}
	}
	if (unk_0x2EBF608FFE6CA406(83))
	{
		func_22(0);
	}
	unk_0x3F423BF5B8125A50(sLocal_44);
	unk_0xD7992BEF7A9D109E("BARY1", 7);
	while (!unk_0xB4AE0788C1587752(sLocal_44) || !unk_0x67C1D9E5B91B2E37(7))
	{
		unk_0x38C3A68D7861DCFD(0, 26, 1);
		wait(0);
	}
	unk_0x38C3A68D7861DCFD(0, 26, 1);
	func_25(unk_0x16F2683693E537C9());
	iLocal_46 = unk_0x1C0640BA9A7327B3() + 13000;
	iLocal_47 = unk_0x09AC81E49EA267F7(0, 5);
	func_19();
	while (!func_13(&iLocal_43, 49, vLocal_50, func_18(1.12f), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 26, 1);
		wait(0);
	}
	unk_0x38C3A68D7861DCFD(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
	unk_0x38C3A68D7861DCFD(0, 26, 1);
	while (true)
	{
		func_25(unk_0x16F2683693E537C9());
		if (unk_0x1C0640BA9A7327B3() < iLocal_48)
		{
			unk_0x38C3A68D7861DCFD(0, 26, 1);
		}
		func_11();
		if (!func_25(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x16F2683693E537C9(), vLocal_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_22(0);
		}
		wait(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

float func_2(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x16F2683693E537C9()) && func_10(iLocal_43)) && !func_9()) && unk_0x1C0640BA9A7327B3() > iLocal_46) && func_8(unk_0x16F2683693E537C9(), iLocal_43, 1) < 20f) && !unk_0x2C1AA3A291786CDC())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

float func_8(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

int func_9()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x681F21BF9F7B449B(-1, vLocal_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			unk_0x1E9649458B15960F(iLocal_43, false);
			unk_0xCEE7E5D42799D65A(iLocal_43, 1000, 1, 0);
		}
		if (func_10(iLocal_41))
		{
			unk_0x1E9649458B15960F(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			unk_0x1E9649458B15960F(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!unk_0xAF6690C489CC6203(iLocal_43))
		{
			unk_0x73270B3C9CC833FD(iLocal_43, true, 0);
		}
		unk_0x9A28E8CB86CD4694(iLocal_43, 1, 0, 0, false);
		unk_0x11AD11297DC58CC7(iLocal_43, true);
		unk_0x6D80F1AEBA734886(iLocal_43, 0);
		unk_0x25C5402CC10F76CD(iLocal_43, false);
		unk_0x5F2AA9E2843E9403(iLocal_43, "POSTBARRY");
		unk_0x6DF7BF67E86AAE86(iLocal_43, 1862763509);
		unk_0x20641932E5104B25(iLocal_43, false, 0);
		unk_0x1E9649458B15960F(iLocal_43, true);
		unk_0xA47B46945FF6DE74(iLocal_43, vLocal_50, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(iLocal_43, func_18(1.12f));
		unk_0x1E9649458B15960F(iLocal_43, true);
		unk_0xC6EB89C59F2AF6B8(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x0C8C0C840C2D1AD2(iLocal_43, unk_0x16F2683693E537C9(), -1, 0, 2);
	}
}

int func_13(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam3, 0, false);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x36C584991B4C183F(*iParam0, 3) == 0)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0xBF75E4DF4C367CD9(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = unk_0x4B72871A3BE7B474(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(iLocal_41))
		{
			if (!unk_0xAF6690C489CC6203(iLocal_41))
			{
				unk_0x73270B3C9CC833FD(iLocal_41, true, 0);
			}
			vLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xA47B46945FF6DE74(iLocal_41, vLocal_49, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_41, func_18(-2.01f));
			unk_0x1E9649458B15960F(iLocal_41, true);
		}
	}
	if (unk_0xBF75E4DF4C367CD9(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = unk_0x4B72871A3BE7B474(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(iLocal_40))
		{
			if (!unk_0xAF6690C489CC6203(iLocal_40))
			{
				unk_0x73270B3C9CC833FD(iLocal_40, true, 0);
			}
			vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xA47B46945FF6DE74(iLocal_40, vLocal_49, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_40, func_18(-1.68f));
			unk_0x1E9649458B15960F(iLocal_40, true);
		}
	}
	else
	{
		vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_18(-1.68f));
		unk_0xA47B46945FF6DE74(iLocal_40, vLocal_49, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(iLocal_40, func_18(-1.68f));
		unk_0x1E9649458B15960F(iLocal_40, true);
	}
	vLocal_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xBF75E4DF4C367CD9(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = unk_0x4B72871A3BE7B474(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(iLocal_42))
		{
			if (!unk_0xAF6690C489CC6203(iLocal_42))
			{
				unk_0x73270B3C9CC833FD(iLocal_42, true, 0);
			}
			vLocal_49.z = 29.603f;
			unk_0xA47B46945FF6DE74(iLocal_42, vLocal_49, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		unk_0xA47B46945FF6DE74(iLocal_42, vLocal_49, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(iLocal_42, 23.45f);
	}
}

void func_20(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_21(iParam0);
	*iParam0 = unk_0x7707E48765093646(iParam1, vParam2, true, true, false);
	unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
}

void func_21(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, true);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&iLocal_43);
	}
	else
	{
		func_23(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		unk_0x1E9649458B15960F(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		unk_0x1E9649458B15960F(iLocal_40, false);
	}
	if (bParam0)
	{
		func_21(&iLocal_40);
		func_21(&iLocal_41);
		func_21(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0x8D17794CE3273D70(sLocal_44);
	unk_0x11CCD0ACA866C6C5(7, false);
	unk_0x10FAF14A60A0DBE1();
}

void func_23(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, false);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_24(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, false, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

bool func_25(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

