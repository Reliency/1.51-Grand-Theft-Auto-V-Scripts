#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xEAE0D21A50E6C7F4(iLocal_2, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_2, 0))
		{
			if (unk_0xC844350D5D58C99A(iLocal_0))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_0, 0))
				{
					unk_0x73270B3C9CC833FD(iLocal_0, false, 1);
					unk_0x1E9649458B15960F(iLocal_0, true);
					unk_0xAA6B3A4292417750(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0xC844350D5D58C99A(iLocal_1))
					{
						unk_0x73270B3C9CC833FD(iLocal_1, false, 1);
						unk_0x1E9649458B15960F(iLocal_1, true);
						unk_0xAA6B3A4292417750(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0x5D96D8530B3D0904(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_0, 0))
			{
				fVar0 = vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0x5D96D8530B3D0904(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x0A059E0DB9253280(iLocal_0))
				{
					unk_0x5D96D8530B3D0904(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	unk_0x046C362CF15F1935(&iLocal_0);
	unk_0x82692E8F6A0D7A22(&iLocal_1);
	unk_0x10FAF14A60A0DBE1();
}

