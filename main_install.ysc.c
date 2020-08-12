#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0xB57F88F0123F4C38();
	unk_0x2404539258C5376B("prologue06_int");
	unk_0x2404539258C5376B("prologue01");
	unk_0x2404539258C5376B("prologue02");
	unk_0x2404539258C5376B("prologue03");
	unk_0x2404539258C5376B("prologue04");
	unk_0x2404539258C5376B("prologue05");
	unk_0x2404539258C5376B("prologue06");
	unk_0x2404539258C5376B("prologuerd");
	unk_0x2404539258C5376B("Prologue01c");
	unk_0x2404539258C5376B("Prologue01d");
	unk_0x2404539258C5376B("Prologue01e");
	unk_0x2404539258C5376B("Prologue01f");
	unk_0x2404539258C5376B("Prologue01g");
	unk_0x2404539258C5376B("prologue01h");
	unk_0x2404539258C5376B("prologue01i");
	unk_0x2404539258C5376B("prologue01j");
	unk_0x2404539258C5376B("prologue01k");
	unk_0x2404539258C5376B("prologue01z");
	unk_0x2404539258C5376B("prologue03b");
	unk_0x2404539258C5376B("prologue04b");
	unk_0x2404539258C5376B("prologue05b");
	unk_0x2404539258C5376B("prologue06b");
	unk_0x2404539258C5376B("prologuerdb");
	unk_0x2404539258C5376B("prologue_occl");
	unk_0x2404539258C5376B("DES_ProTree_start");
	unk_0x2404539258C5376B("DES_ProTree_start_lod");
	unk_0x2404539258C5376B("prologue04_cover");
	unk_0x2404539258C5376B("prologue03_grv_fun");
	unk_0x81CF20E10AAD5FD5("prologue03_grv_dug");
	unk_0x81CF20E10AAD5FD5("prologue_grv_torch");
	unk_0x666B67209D7AA5DD("prologue", 1);
	unk_0x523BCC9DC80CD82F(joaat("csb_prolsec"));
	while (!unk_0xB87F6CF6E5628C67(joaat("csb_prolsec")))
	{
		wait(0);
	}
	unk_0xC634196566A6962B(unk_0xD803B885F5E47A62(), joaat("csb_prolsec"));
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 169.2f);
	}
	unk_0xBFE31971E49FA500(false);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
	unk_0x9E632F16E887F781(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0x1C0640BA9A7327B3() + 10000;
	while (!unk_0x68367101660E33F0() && unk_0x1C0640BA9A7327B3() < iVar0)
	{
		wait(0);
	}
	unk_0x9CCCC7CF60F2D30F();
	unk_0x8BC9595FD2792B5D("MISSION_FAILED_SCENE");
	unk_0x82E51BCA72537B6C(2500);
	unk_0x486B4ADE317F0689();
	unk_0xD7992BEF7A9D109E("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0);
		}
		unk_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0xC1032CAC14DE468A(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0xD3539A877EC25E86(0.5f, 0.5f);
		unk_0xAAE406A7DA443B93(1);
		if (timera() > 10000 && unk_0x67C1D9E5B91B2E37(0))
		{
			iLocal_0 = unk_0x09AC81E49EA267F7(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x857E3CE01DEA2D26();
		if (unk_0xA1F6F2E566B60C4B())
		{
			unk_0x0922D0C0FDC7C49E();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

