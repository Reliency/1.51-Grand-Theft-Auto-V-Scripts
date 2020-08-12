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
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_73 = 0;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	vLocal_64 = { -1124.392f, -514.7001f, 33.21493f };
	fLocal_65 = 200f;
	vLocal_66 = { 2490f, 3777f, 2402.879f };
	vLocal_67 = { -2052f, 3237f, 1450.078f };
	iLocal_68 = -1;
	iLocal_70 = -1;
	bLocal_73 = true;
	fLocal_74 = 10f;
	fLocal_75 = 90f;
	fLocal_76 = 35f;
	fLocal_77 = 60f;
	fLocal_78 = 275f;
	iLocal_79 = 1500;
	iLocal_80 = -1;
	iLocal_82 = 3000;
	iLocal_83 = 708;
	iLocal_84 = 377;
	iLocal_85 = 1000;
	iLocal_86 = 2093;
	iLocal_89 = -1;
	iLocal_90 = -1;
	bLocal_91 = true;
	bLocal_92 = true;
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_12();
	}
	while (unk_0x757EF87A33649210())
	{
		wait(0);
	}
	if (!unk_0xBCFF5481C5F58C19("ufo"))
	{
		unk_0x2404539258C5376B("ufo");
	}
	vLocal_72[0 /*3*/] = { vLocal_66 };
	vLocal_72[1 /*3*/] = { vLocal_67 };
	while (true)
	{
		func_11(unk_0x16F2683693E537C9());
		if (Global_30772 == 1)
		{
			func_12();
		}
		if (bLocal_73)
		{
			if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[0 /*3*/], (290f + 50f)))
			{
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[1 /*3*/], (290f + 50f)))
				{
					func_12();
				}
			}
			if (iLocal_71 != 0)
			{
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[0 /*3*/], (fLocal_78 + 50f)))
				{
					if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[1 /*3*/], (fLocal_78 + 50f)))
					{
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_71 = 0;
						iLocal_70 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_71)
		{
			case 0:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_72.x)
				{
					if (func_10(unk_0x16F2683693E537C9(), vLocal_72[iVar0 /*3*/], fLocal_78))
					{
						iLocal_70 = iVar0;
						iLocal_71 = 1;
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 1, 1);
						unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 1, 1);
					}
					iVar0++;
				}
				break;
			
			case 1:
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < vLocal_72.x)
				{
					if (func_10(unk_0x16F2683693E537C9(), vLocal_72[iVar0 /*3*/], fLocal_75))
					{
						iLocal_70 = iVar0;
						iLocal_71 = 2;
					}
					iVar0++;
				}
				break;
			
			case 2:
				if (iLocal_70 == -1)
				{
					iLocal_71 = 1;
				}
				else
				{
					iLocal_68 = unk_0x1C0640BA9A7327B3();
					iLocal_69 = 0;
					iLocal_71 = 3;
				}
				break;
			
			case 3:
				if (func_10(unk_0x16F2683693E537C9(), vLocal_72[iLocal_70 /*3*/], fLocal_75))
				{
					iLocal_69 = (unk_0x1C0640BA9A7327B3() - iLocal_68);
					if (iLocal_69 >= iLocal_79)
					{
						iLocal_71 = 4;
						iLocal_80 = unk_0xD68EA767274B7444();
						iLocal_81 = unk_0x1C0640BA9A7327B3();
						if (iLocal_70 == 0)
						{
							unk_0xEB819BD1E585E9CB(iLocal_80, "SPECIAL_EVIL_UFO_DEATH_RAY", vLocal_72[iLocal_70 /*3*/], 0, 0, 0, 0);
						}
						else
						{
							unk_0xEB819BD1E585E9CB(iLocal_80, "SPECIAL_EVIL_UFO_DEATH_RAY_3", vLocal_72[iLocal_70 /*3*/], 0, 0, 0, 0);
						}
						func_7();
						func_6();
					}
				}
				else
				{
					iLocal_71 = 1;
				}
				break;
			
			case 4:
				func_5();
				func_7();
				func_6();
				if (unk_0x1C0640BA9A7327B3() > (iLocal_81 + iLocal_82))
				{
					func_4(&iLocal_80);
				}
				if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[iLocal_70 /*3*/], fLocal_78))
				{
					func_1();
					iLocal_70 = -1;
					iLocal_71 = 0;
					func_4(&iLocal_90);
					func_4(&iLocal_89);
					unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
					unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
				}
				break;
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (func_11(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (func_2(iVar0))
			{
				unk_0x56FDC9ADE35F7DB0(iVar0, 1, 0, 0);
			}
		}
	}
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
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

int func_3(int iParam0)
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

void func_4(int iParam0)
{
	if (*iParam0 != -1)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = -1;
	}
}

void func_5()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_2(iVar0))
		{
			unk_0x56FDC9ADE35F7DB0(iVar0, 0, 0, 0);
			unk_0xDFC6BA855748EB10(iVar0, 2, 0f, 0f, -fLocal_74, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

void func_6()
{
	if (bLocal_92)
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_87)
		{
			if (iLocal_89 != -1)
			{
				func_4(&iLocal_89);
				iLocal_87 = (unk_0x1C0640BA9A7327B3() + iLocal_86);
			}
			else
			{
				iLocal_89 = unk_0xD68EA767274B7444();
				unk_0x22293E611B2408F1(iLocal_89, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_87 = (unk_0x1C0640BA9A7327B3() + iLocal_84);
			}
		}
	}
}

void func_7()
{
	if (bLocal_91)
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_88)
		{
			if (iLocal_90 != -1)
			{
				func_4(&iLocal_90);
				iLocal_88 = (unk_0x1C0640BA9A7327B3() + iLocal_85);
			}
			else
			{
				iLocal_90 = unk_0xD68EA767274B7444();
				unk_0x22293E611B2408F1(iLocal_90, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_88 = (unk_0x1C0640BA9A7327B3() + iLocal_83);
			}
		}
	}
}

void func_8()
{
	vector3 vVar0;
	
	if (iLocal_70 == -1)
	{
		return;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return;
	}
	if (!func_10(unk_0x16F2683693E537C9(), vLocal_72[iLocal_70 /*3*/], fLocal_76))
	{
		return;
	}
	vVar0 = { func_9(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) - vLocal_72[iLocal_70 /*3*/]) * Vector(fLocal_77, fLocal_77, fLocal_77) };
	unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

Vector3 func_9(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_10(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(unk_0x68F4C0EC296D3901(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

bool func_11(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

void func_12()
{
	if (unk_0xBCFF5481C5F58C19("ufo"))
	{
		unk_0x81CF20E10AAD5FD5("ufo");
	}
	func_4(&iLocal_90);
	func_4(&iLocal_89);
	func_4(&iLocal_80);
	unk_0xE108118042391BB3("AZ_SPECIAL_UFO_01", 0, 1);
	unk_0xE108118042391BB3("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

