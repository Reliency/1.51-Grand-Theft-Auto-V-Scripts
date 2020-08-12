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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(500);
	}
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_18();
	}
	unk_0x34D79252800B23FF(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x7178F32F6742C936(255, 255, 255, 255);
		unk_0xD3539A877EC25E86(0.75f, 0.9f);
		unk_0xF1F881BAAAFB43B1(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x7178F32F6742C936(255, 255, 255, 255);
		unk_0xD3539A877EC25E86(0.4f, 0.45f);
		unk_0xF1F881BAAAFB43B1(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_40))
	{
		if ((unk_0x437347B10A200C4B(iLocal_40, 0) || unk_0x7F6DC62EA9922664(iLocal_40) <= 0) || unk_0x6EE94F60DA2A2273(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (unk_0x20D6474D5F4B9FC6(iLocal_40))
			{
				unk_0xC55F2A0377488064(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_40, 0) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (unk_0x20D6474D5F4B9FC6(iLocal_40))
		{
			unk_0xA9FBE21EB8701B34(iLocal_40, 0.25f);
		}
	}
}

void func_2(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_4(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		if (func_6(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
			{
				if (func_5(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_5(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_8(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];
	
	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0xDA55CDFB97015579(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xDA55CDFB97015579(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	unk_0x523BCC9DC80CD82F(iLocal_46);
	while (!unk_0xB87F6CF6E5628C67(iLocal_46))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = unk_0x122AAB0B1D6F55AD(iLocal_46, unk_0x68E4ADDDDCD7BDDE(iLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x873BCADC75FF6D20(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(unk_0x16F2683693E537C9()))
		{
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_45, -1);
			unk_0xEF6276132B396452(0f, 1065353216);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 500f, 1, 0, 0, false);
		}
	}
	unk_0x71199B01895C6202(iLocal_46);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(unk_0x68F4C0EC296D3901(iParam0, 1), unk_0x68F4C0EC296D3901(iParam1, 1), 1);
	unk_0xD8F6A53F4799FAFE(iParam0, fVar0);
}

float func_13(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
		unk_0x321E019A46034F39(iVar0, bParam1);
		unk_0x2A065371C9D96655(iVar0, iParam2);
		unk_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x523BCC9DC80CD82F(iLocal_44);
	while (!unk_0xB87F6CF6E5628C67(iLocal_44))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = unk_0x852A19533F896693(iLocal_40, 26, iLocal_44, -1, 1, true);
		if (func_5(iLocal_43))
		{
			unk_0x11AD11297DC58CC7(iLocal_43, 1);
			unk_0x4E885A246A9D983A(iLocal_43, 118, false);
			unk_0x4E885A246A9D983A(iLocal_43, 29, false);
			unk_0x4E885A246A9D983A(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		unk_0x4D3C3C0B0DE2663E(iLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x71199B01895C6202(iLocal_44);
}

void func_17()
{
	vector3 vVar0;
	
	if (func_6(iLocal_40) && unk_0x20D6474D5F4B9FC6(iLocal_40))
	{
		unk_0xC55F2A0377488064(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	unk_0x523BCC9DC80CD82F(iLocal_41);
	unk_0x36187931D29E5BBE(1, "Blimp_City");
	while (!unk_0xB87F6CF6E5628C67(iLocal_41) || !unk_0x3DDA6C6A285628E4(1, "Blimp_City"))
	{
		wait(0);
	}
	vVar0 = { unk_0xCB4DF739E53AB68E(unk_0x1A2511CB22B86C17(1, "Blimp_City"), 0f) };
	iLocal_40 = unk_0x122AAB0B1D6F55AD(iLocal_41, unk_0xAA8A22FF67DFFDCD(unk_0x1A2511CB22B86C17(1, "Blimp_City"), 0f), vVar0.z, 1, 1, 0);
	unk_0x71199B01895C6202(iLocal_41);
}

void func_18()
{
	if (func_6(iLocal_40) && unk_0x20D6474D5F4B9FC6(iLocal_40))
	{
		unk_0xC55F2A0377488064(iLocal_40);
	}
	unk_0xDB8844D4B7C60440(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	unk_0x71199B01895C6202(iLocal_44);
	unk_0x71199B01895C6202(iLocal_41);
	unk_0x71199B01895C6202(iLocal_46);
	unk_0x34D79252800B23FF(6);
	unk_0x10FAF14A60A0DBE1();
}

