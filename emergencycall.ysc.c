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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	if (unk_0x2EBF608FFE6CA406(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if (unk_0x67FCD2DB807B4E58(7, unk_0x16F2683693E537C9(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(7, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if ((func_7(unk_0xD803B885F5E47A62(), 0) && func_4(unk_0xD803B885F5E47A62()) == 5) && Global_1694085)
						{
							if (Global_1694086 == 0)
							{
								Global_1694086 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x67FCD2DB807B4E58(5, unk_0x16F2683693E537C9(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(5, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x8CD06866876216F2())
					{
						if (unk_0x67FCD2DB807B4E58(3, unk_0x16F2683693E537C9(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x1C0640BA9A7327B3();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x58C79C59A23B279F(3, vLocal_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_95241.f_358 == unk_0x12AB0310C2281427("AGENCY_PREP_1") || (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95241.f_358 = unk_0x12AB0310C2281427("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95171 = 1;
						}
						iLocal_46 = unk_0x1C0640BA9A7327B3();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x1C0640BA9A7327B3() > (iLocal_46 + 60000) || !unk_0xC77B2658E98CC4E5(uLocal_47))
					{
						func_1();
					}
					else if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
						{
							if (unk_0xC77B2658E98CC4E5(uLocal_47))
							{
								unk_0x201044F0E8495AF6(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x10FAF14A60A0DBE1();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x1C0640BA9A7327B3() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x1C0640BA9A7327B3() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x1C0640BA9A7327B3();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				func_10(unk_0x16F2683693E537C9(), &vLocal_45, &uVar0);
			}
			iLocal_46 = unk_0x1C0640BA9A7327B3();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	vector3 vVar17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x4A13F7D4B1E239A0(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0xC05DA9D35DAF88FD(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(iParam0, true) };
				fVar8 = unk_0xE7D606C557C86100(vVar6.x, vVar6.y);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0x5B33870CBB8B6AC1(unk_0xDEC4A70C9F250662(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 294f, -895f, 28f, true) < 25f || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0x8A5E176FF719A014(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > vdist(unk_0x8A5E176FF719A014(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x8A5E176FF719A014(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0x6D4C9F7CF124AE37(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0x1EC301670B54C6DE(iVar14, &iVar15, &vVar17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (vVar17.z > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_18()
{
	return Global_21822;
}

int func_19()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

