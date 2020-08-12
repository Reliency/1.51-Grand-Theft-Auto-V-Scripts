#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_4();
	}
	if (unk_0xC844350D5D58C99A(iScriptParam_6))
	{
		unk_0x1E9649458B15960F(iScriptParam_6, true);
		vLocal_4 = { unk_0x68F4C0EC296D3901(iScriptParam_6, true) };
		vLocal_5 = { unk_0x835730A2D89F6093(iScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (unk_0xC844350D5D58C99A(iScriptParam_6))
		{
			if (unk_0x63D2C15453688621(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_6))
						{
							unk_0x523BCC9DC80CD82F(joaat("p_abat_roller_1_col"));
							if (unk_0xB87F6CF6E5628C67(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0x7707E48765093646(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									unk_0xC023D1C4BF532815(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_6))
						{
							if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
							{
								unk_0x3F423BF5B8125A50("map_objects");
								if (unk_0xB4AE0788C1587752("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1A5AE8A9B1D42A10(iScriptParam_6))
						{
							if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
							{
								if (Global_95175)
								{
									if (unk_0xB4AE0788C1587752("map_objects"))
									{
										unk_0xD65E6E13E145467B(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, false, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xC844350D5D58C99A(iLocal_3))
						{
							vVar1 = { unk_0x68F4C0EC296D3901(iLocal_3, true) };
							if (!func_2(vVar1, vVar0, 0.1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								unk_0xA47B46945FF6DE74(iLocal_3, vVar1 + func_1(vVar2) * FtoV(unk_0x6117725E0134737F()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_95176 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
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

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()
{
	if (unk_0xC844350D5D58C99A(iLocal_3))
	{
		unk_0xF690C84DADBB3551(&iLocal_3);
	}
	unk_0x71199B01895C6202(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x10FAF14A60A0DBE1();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

