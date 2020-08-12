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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<2> Local_54 = { 0, 5 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_47 = { ScriptParam_54.f_1[0 /*3*/] };
	iLocal_44 = unk_0x09AC81E49EA267F7(0, 2);
	func_28();
	if (unk_0x2EBF608FFE6CA406(11))
	{
		func_28();
	}
	while (true)
	{
		wait(0);
		if (unk_0x338D6FF72D84D90F())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!unk_0x437347B10A200C4B(iLocal_50, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_50, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_52 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_28();
			}
		}
		else
		{
			func_28();
		}
	}
}

void func_1()
{
	if (timerb() > 10000)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_47, 10f, 10f, 10f, false, true, 0) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			settimerb(0);
			if (!unk_0x437347B10A200C4B(iLocal_50, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0xDD353D0E9C789D0E(&iLocal_53);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0xC6EB89C59F2AF6B8(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_53);
					unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
					unk_0xF82EA857DA10E0CD(&iLocal_53);
				}
				else if (!unk_0x437347B10A200C4B(iLocal_51, 0))
				{
					unk_0xF96A174EE26D7588(iLocal_50, iLocal_51, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0x01E4BB5190DF7317(iLocal_51, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

int func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(int iParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	
	if (fParam3 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam3 + 0.5f);
	}
	vVar1 = { (fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 };
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if ((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iParam0, vParam1), vVar1, false, true, 0) && unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iParam0, true), fParam2)) && func_5(bParam4)) && !unk_0x869EFD0BC0868856(iParam0)) && !unk_0xA48EBBEA418ADC94(iParam0))
		{
			func_4(iParam0, 1);
			return 1;
		}
		else
		{
			func_4(iParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
	}
}

int func_5(bool bParam0)
{
	if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		if (bParam0)
		{
			if (unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 1f || unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0x504A57ECC0B1E81C(unk_0x16F2683693E537C9()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return vVar0;
}

void func_7()
{
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_47, 50f, 50f, 50f, false, true, 0))
	{
		unk_0x523BCC9DC80CD82F(joaat("a_m_o_tramp_01"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_strpunk_01"));
		unk_0x3F423BF5B8125A50("amb@drug_dealer");
		while ((!unk_0xB87F6CF6E5628C67(joaat("a_m_o_tramp_01")) || !unk_0xB87F6CF6E5628C67(joaat("g_m_y_strpunk_01"))) || !unk_0xB4AE0788C1587752("amb@drug_dealer"))
		{
			wait(0);
		}
		unk_0xF63400DBE3303D26("homeless", &iLocal_49);
		vLocal_48.z = (vLocal_47.z - 1f);
		iLocal_50 = unk_0x36F2404464202779(19, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_48.z, 0f, 1, true);
		unk_0x6DF7BF67E86AAE86(iLocal_50, iLocal_49);
		if (iLocal_44 == 1)
		{
			vLocal_48 = { unk_0x68E4ADDDDCD7BDDE(iLocal_50, 0.8f, 0.8f, -1f) };
			iLocal_51 = unk_0x36F2404464202779(5, joaat("g_m_y_strpunk_01"), vLocal_48, 0f, 1, true);
			unk_0xF63400DBE3303D26("homeless", &iLocal_49);
			unk_0x6DF7BF67E86AAE86(iLocal_51, iLocal_49);
			if (!unk_0x437347B10A200C4B(iLocal_50, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_53);
				unk_0x796BDF31572BB055(0, vLocal_48, 0);
				unk_0xC6EB89C59F2AF6B8(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_53);
				unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
				unk_0xF82EA857DA10E0CD(&iLocal_53);
			}
			if (!unk_0x437347B10A200C4B(iLocal_51, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_53);
				unk_0x796BDF31572BB055(0, vLocal_47, 0);
				unk_0xC6EB89C59F2AF6B8(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_53);
				unk_0x78ADC381772E3D54(iLocal_51, iLocal_53);
				unk_0xF82EA857DA10E0CD(&iLocal_53);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_27(6) || func_27(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_25(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_18()) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_18()) || Global_30770) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_18()) || func_14()) || Global_110685) || Global_30770) || func_17()) || Global_42596) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_18()) || Global_110685) || Global_30770) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_10()
{
	return Global_98783.f_1;
}

int func_11()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_12()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
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

bool func_14()
{
	return Global_98796.f_346 > 0;
}

bool func_15()
{
	return Global_98796.f_345 > 0;
}

bool func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

var func_17()
{
	return Global_1312877;
}

int func_18()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

var func_20()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_23(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_22(unk_0x16F2683693E537C9());
			if (func_19(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_19(Global_111638.f_2358.f_539.f_4321))
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

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return func_26(iParam0, Global_41431);
}

int func_26(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_28()
{
	unk_0x10FAF14A60A0DBE1();
}

