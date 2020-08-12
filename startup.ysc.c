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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_51 = { 8.79494f, 0.59893f, 154.8464f };
	unk_0xB57F88F0123F4C38();
	unk_0xF2AB6A0C1D20580A(0);
	unk_0xE4890938121C8523(0);
	unk_0x81CF20E10AAD5FD5("prologue_DistantLights");
	unk_0x81CF20E10AAD5FD5("prologue_LODLights");
	iLocal_52 = 0;
	bVar0 = func_40();
	if (unk_0x2177B4E966225E9C() || unk_0x7C00BB1751A3B24A())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		unk_0x1F47A7881AF72C38();
	}
	unk_0xFBEB71734BE56B66(0);
	func_39(joaat("mp_registration"), 1424);
	unk_0xB60B60856BF98DCE(joaat("mp_registration"));
	func_39(joaat("mp_fm_registration"), 1424);
	unk_0xB60B60856BF98DCE(joaat("mp_fm_registration"));
	func_39(joaat("tunables_registration"), 1424);
	unk_0xB60B60856BF98DCE(joaat("tunables_registration"));
	func_39(joaat("sc_lb_global_block"), 1424);
	unk_0xB60B60856BF98DCE(joaat("sc_lb_global_block"));
	func_39(joaat("mp_save_game_global_block"), 1424);
	unk_0xB60B60856BF98DCE(joaat("mp_save_game_global_block"));
	func_39(joaat("mp_prop_global_block"), 1424);
	unk_0xB60B60856BF98DCE(joaat("mp_prop_global_block"));
	func_39(joaat("mp_prop_special_global_block"), 1424);
	unk_0xB60B60856BF98DCE(joaat("mp_prop_special_global_block"));
	func_39(joaat("title_update_registration"), 1424);
	unk_0xB60B60856BF98DCE(joaat("title_update_registration"));
	func_39(-556768532, 1424);
	unk_0xB60B60856BF98DCE(-556768532);
	func_39(-1350801275, 1424);
	unk_0xB60B60856BF98DCE(-1350801275);
	Global_4270623 = 0;
	func_39(joaat("sp_dlc_registration"), 1424);
	unk_0xB60B60856BF98DCE(joaat("sp_dlc_registration"));
	func_39(joaat("sp_pilotschool_reg"), 1424);
	unk_0xB60B60856BF98DCE(joaat("sp_pilotschool_reg"));
	func_38();
	switch (iLocal_52)
	{
		case 0:
			func_39(joaat("standard_global_init"), 1424);
			unk_0xB60B60856BF98DCE(joaat("standard_global_init"));
			break;
	}
	wait(0);
	Global_76624 = 1;
	Global_2 = bVar0;
	unk_0x2FB9A57162E54BAB(0f);
	switch (iLocal_52)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_39(joaat("standard_global_reg"), 1424);
			unk_0x5E8C29AE121DF1C7("standard_global_reg");
			while ((!unk_0xEAE0D21A50E6C7F4(Global_4270623, 0) || !unk_0xEAE0D21A50E6C7F4(Global_4270623, 1)) || !unk_0xEAE0D21A50E6C7F4(Global_4270623, 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_4270623, 0))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Global_4270623, 1))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Global_4270623, 2))
				{
				}
				wait(0);
			}
			unk_0x2D5B34B4E4496334(&Global_111638, 1, 1);
			unk_0xCADE461BBB25EE16(&Global_111638, "fSaveVersion");
			unk_0xB5C21415AE6F2DC6();
			if (Global_1)
			{
				Global_0 = Global_111638;
			}
			Global_111638 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_27(Global_0);
				}
			}
			break;
	}
	unk_0x2D5B34B4E4496334(&Global_2097152, 10931, 0);
	unk_0x9C22F8DCFE1B7911(&Global_2097152, 10931, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_21(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_19(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_17(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*10930*/]), iVar1);
		iVar1++;
	}
	unk_0x1FF5A446D37587EA();
	unk_0xB5C21415AE6F2DC6();
	iVar2 = 10931;
	iVar3 = unk_0x34D03390532A3D17(0);
	if (iVar2 != iVar3)
	{
	}
	if (!unk_0x3A270F6180B6DC86() && !unk_0xEA08AA022C698245())
	{
		unk_0xE318A8D017F47028(0);
	}
	unk_0x8C854F449041FA25(0);
	unk_0xE4890938121C8523(0);
	func_2();
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

void func_1()
{
	Global_30[0] = unk_0x0D1736C2E221BCEA(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = unk_0x0D1736C2E221BCEA(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = unk_0x0D1736C2E221BCEA(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = unk_0x0D1736C2E221BCEA(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = unk_0x0D1736C2E221BCEA(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = unk_0x0D1736C2E221BCEA(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = unk_0x0D1736C2E221BCEA(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = unk_0x0D1736C2E221BCEA(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = unk_0x0D1736C2E221BCEA(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = unk_0x0D1736C2E221BCEA(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = unk_0x0D1736C2E221BCEA(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = unk_0x0D1736C2E221BCEA(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = unk_0x0D1736C2E221BCEA(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = unk_0x0D1736C2E221BCEA(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = unk_0x0D1736C2E221BCEA(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = unk_0x0D1736C2E221BCEA(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = unk_0x0D1736C2E221BCEA(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = unk_0x0D1736C2E221BCEA(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = unk_0x0D1736C2E221BCEA(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = unk_0x0D1736C2E221BCEA(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = unk_0x0D1736C2E221BCEA(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = unk_0x0D1736C2E221BCEA(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = unk_0x0D1736C2E221BCEA(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = unk_0x0D1736C2E221BCEA(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = unk_0x0D1736C2E221BCEA(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = unk_0x0D1736C2E221BCEA(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = unk_0x0D1736C2E221BCEA(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = unk_0x0D1736C2E221BCEA(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = unk_0x0D1736C2E221BCEA(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = unk_0x0D1736C2E221BCEA(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = unk_0x0D1736C2E221BCEA(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = unk_0x0D1736C2E221BCEA(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = unk_0x0D1736C2E221BCEA(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = unk_0x0D1736C2E221BCEA(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = unk_0x0D1736C2E221BCEA(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = unk_0x0D1736C2E221BCEA(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = unk_0x0D1736C2E221BCEA(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = unk_0x0D1736C2E221BCEA(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = unk_0x0D1736C2E221BCEA(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = unk_0x0D1736C2E221BCEA(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = unk_0x0D1736C2E221BCEA(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = unk_0x0D1736C2E221BCEA(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = unk_0x0D1736C2E221BCEA(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = unk_0x0D1736C2E221BCEA(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = unk_0x0D1736C2E221BCEA(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = unk_0x0D1736C2E221BCEA(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = unk_0x0D1736C2E221BCEA(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = unk_0x0D1736C2E221BCEA(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = unk_0x0D1736C2E221BCEA(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = unk_0x0D1736C2E221BCEA(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = unk_0x0D1736C2E221BCEA(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = unk_0x0D1736C2E221BCEA(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = unk_0x0D1736C2E221BCEA(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = unk_0x0D1736C2E221BCEA(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = unk_0x0D1736C2E221BCEA(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = unk_0x0D1736C2E221BCEA(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = unk_0x0D1736C2E221BCEA(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = unk_0x0D1736C2E221BCEA(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = unk_0x0D1736C2E221BCEA(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = unk_0x0D1736C2E221BCEA(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = unk_0x0D1736C2E221BCEA(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_150468 = 1;
	Global_150469 = 1;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903.f_19), 8, &cVar0);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_10903.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0x7DA5C9436776820A(&(uParam0->f_10903.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0x1FF5A446D37587EA();
	unk_0xE58124D274DF27EF();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903.f_15), 4, &cVar0);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_10903.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	unk_0xCADE461BBB25EE16(&(uParam0->f_10903.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0xCADE461BBB25EE16(&(uParam0->f_10903.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0xCADE461BBB25EE16(&(uParam0->f_10903.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0x1FF5A446D37587EA();
	unk_0xE58124D274DF27EF();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903.f_6), 9, &cVar0);
	unk_0x3F474BE835ABC04B(&(uParam0->f_10903.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	unk_0xE58124D274DF27EF();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903.f_4), 2, &cVar0);
	unk_0xB736AD3F7362C880(&(uParam0->f_10903.f_4[0]), "TEMPSTAT_BOOL");
	unk_0xE58124D274DF27EF();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903.f_2), 2, &cVar0);
	unk_0xCADE461BBB25EE16(&(uParam0->f_10903.f_2[0]), "TEMPSTAT_FLOAT");
	unk_0xE58124D274DF27EF();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10903), 2, &cVar0);
	unk_0x7DA5C9436776820A(&(uParam0->f_10903[0]), "TEMPSTAT_INT1");
	unk_0xE58124D274DF27EF();
}

void func_10(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_10753), 150, &cVar0);
	unk_0x7DA5C9436776820A(&(uParam0->f_10753), "MPATM_CARET_");
	iVar1 = 0;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10753.f_1), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_10753.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10753.f_18), 97, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		unk_0x2C8B66756F8D326F(&(uParam0->f_10753.f_18[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10753.f_115), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		unk_0xAC53D61F7455A6D0(&(uParam0->f_10753.f_115[iVar1]), &cVar5);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10753.f_132), 17, &Var2);
	iVar1 = 0;
	while (iVar1 < 16)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_10753.f_132[iVar1]), &cVar6);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_10753.f_149), "mpAnyVecBought");
	unk_0x1FF5A446D37587EA();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_10512), 241, &Var0);
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512), "BOUNTY_GAMERH64_1");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_1), "BOUNTY_GAMERH64_2");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_2), "BOUNTY_GAMERH64_3");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_3), "BOUNTY_GAMERH64_4");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_4), "BOUNTY_GAMERH64_5");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_5), "BOUNTY_GAMERH64_6");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_6), "BOUNTY_GAMERH64_7");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_7), "BOUNTY_GAMERH64_8");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_8), "BOUNTY_GAMERH64_9");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_9), "BOUNTY_GAMERH64_10");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_10), "BOUNTY_GAMERH64_11");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_11), "BOUNTY_GAMERH64_12");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_12), "BOUNTY_GAMERH64_13");
	unk_0x7DA5C9436776820A(&(uParam0->f_10512.f_13), "BOUNTY_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_10512.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10512.f_15), 209, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_10), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_11), &cVar1);
		MemCopy(&cVar1, {Var0}, 8);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10512.f_15[iVar2 /*13*/].f_12), &cVar1);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10512.f_224), 17, &Var0);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		MemCopy(&cVar1, {Var0}, 8);
		StringIntConCat(&cVar1, iVar2, 32);
		unk_0x7DA5C9436776820A(&(uParam0->f_10512.f_224[iVar2]), &cVar1);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x1FF5A446D37587EA();
}

void func_12(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_6174), &cVar0);
}

void func_13(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 4338, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "CASH_GIVEN_TOTAL");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0x7DA5C9436776820A(&(uParam0->f_11), "iNewVehPurchased");
	unk_0x7DA5C9436776820A(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0xB736AD3F7362C880(&(uParam0->f_7), "GRAB_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_9), "ilasttimeplayed");
	unk_0x7DA5C9436776820A(&(uParam0->f_10), "iSaveCoupons");
	unk_0x7DA5C9436776820A(&(uParam0->f_12), "iLastBruciePillReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "iLastSecVanReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_14), "iLastBountyReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_15), "iLastParaReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_16), "iLastCrateDropReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_17), "iLastGangAttackReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_18), "iLastImpExpReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "iLastInsuranceReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "iLastSurvivalReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_21), "iLastBikerBackupReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_22), "iLastVagosBackupReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_23), "iLastLesterVehReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_26), "iLastMerryweatherReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_27), "iLastLesterHelpReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_28), "iLastLesterReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_31), "iLastMartinReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_32), "iLastRonReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	unk_0x7DA5C9436776820A(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_35), "iLastImportExportDelTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_36), "iLastImportExportListTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_37), "iMyLastImportExportListDay");
	unk_0x7DA5C9436776820A(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	unk_0xB736AD3F7362C880(&(uParam0->f_39), "bDefaultClothesSet");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_40), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_46), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_46[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_1271), "iLastCrewCharWasIn");
	unk_0x7DA5C9436776820A(&(uParam0->f_1272), "iStripperUnlockedBS");
	unk_0x7DA5C9436776820A(&(uParam0->f_1273), "iGeneralBS");
	unk_0x7DA5C9436776820A(&(uParam0->f_1274), "iCarsModifiedTimeStamp");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1275), 10, "GOLF_fLongestDriveHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1275)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xCADE461BBB25EE16(&(uParam0->f_1275[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1285), 10, "GOLF_fLongestPuttHole");
	iVar2 = 0;
	while (iVar2 < uParam0->f_1285)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xCADE461BBB25EE16(&(uParam0->f_1285[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_1295), "GOLF_iBestRound");
	unk_0xCADE461BBB25EE16(&(uParam0->f_1296), "GOLF_fLongestDrive");
	unk_0xCADE461BBB25EE16(&(uParam0->f_1297), "GOLF_fLongestPutt");
	unk_0x7DA5C9436776820A(&(uParam0->f_1298), "iShareLJCashTotal");
	unk_0x7DA5C9436776820A(&(uParam0->f_1299), "iShareLJCashTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_1300), "iReceiveLJCashTotal");
	unk_0x7DA5C9436776820A(&(uParam0->f_1301), "iReceiveLJCashTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_1302), "LAST_ACC_PROP");
	unk_0x7DA5C9436776820A(&(uParam0->f_1303), "MULTI1_PROP_VAL");
	unk_0x7DA5C9436776820A(&(uParam0->f_1328), "LAST_ACC_SMPLINT");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1304), 24, "PROP_ARY_VAL");
	iVar4 = 0;
	while (iVar4 < uParam0->f_1304)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_1304[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_1329), "KR_PATCH_UPDATE");
	iVar4 = 0;
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2685), 919, "DLC_MODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_2685)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_2685[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	iVar4 = 0;
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_3604), 502, "DLC_SUPERMODS");
	iVar4 = 0;
	while (iVar4 < uParam0->f_3604)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_3604[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1330), 274, "OUTFIT_CompDraw");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_1330[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_1330[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1604), 274, "OUTFIT_CompTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_1604[iVar4 /*13*/]), 13, &Var1);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_1604[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1878), 211, "OUTFIT_PropID");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_1878[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_1878[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2089), 211, "OUTFIT_PropTex");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_2089[iVar4 /*10*/]), 10, &Var1);
		iVar5 = 0;
		while (iVar5 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_2089[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2300), 22, "OUTFIT_Stored");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2300[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2322), 22, "OUTFIT_CrewTatA");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2322[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2344), 22, "OUTFIT_CrewTatB");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2344[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2366), 22, "OUTFIT_CrewTatC");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2366[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2388), 22, "OUTFIT_CrewTatD");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2388[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2410), 22, "OUTFIT_CrewTatE");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2410[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2432), 22, "OUTFIT_CrewTatF");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_2432[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2623), 22, "OUTFIT_Shirt");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_2623[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2454), 169, "OUTFIT_Name");
	iVar4 = 0;
	while (iVar4 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x3F474BE835ABC04B(&(uParam0->f_2454[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2645), 40, "LAST_JobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_10), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_11), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2645[iVar4 /*13*/].f_12), &cVar6);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_4106), "DO_CompletedObjectives");
	unk_0xB736AD3F7362C880(&(uParam0->f_4107), "DO_LoggedInToday");
	unk_0x7DA5C9436776820A(&(uParam0->f_4108), "DO_xValue");
	unk_0x7DA5C9436776820A(&(uParam0->f_4109), "DO_LastHistoryLength");
	unk_0x7DA5C9436776820A(&(uParam0->f_4110), "DO_LastResetTime");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4111), 10, "DO_Objectives");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4111[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_4111[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4111[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4121), 25, "DO_History");
	iVar4 = 0;
	while (iVar4 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4121[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4146), 49, "LAST_JobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_4146[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4195), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4195[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4206), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4206)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4206[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4209), 40, "LAST_GOGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_10), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_11), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4209[iVar4 /*13*/].f_12), &cVar8);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4249), 40, "LAST_GOJobGamer");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_10), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_11), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4249[iVar4 /*13*/].f_12), &cVar9);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4289), 49, "LAST_GOJobGamer_TL");
	iVar4 = 0;
	while (iVar4 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_4289[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_14(var uParam0, int iParam1)
{
	func_15(&(uParam0->f_6086), iParam1);
}

void func_15(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar1;
	
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_41), 11, "CAR_HIDDEN");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0xB736AD3F7362C880(&(uParam0->f_41[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	func_16(uParam0, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bUpdateMods", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_52), &cVar0);
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_53), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_55), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_54), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_60), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xDDECB5D51226D22E(&(uParam0->f_56), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_61), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_62), &cVar0);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_63), 11, "SAVED_VEH_SLOT");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0x7DA5C9436776820A(&(uParam0->f_63[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_74), 11, "SAVED_VEH_PRIO");
	iVar1 = 0;
	while (iVar1 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0x7DA5C9436776820A(&(uParam0->f_74[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_85), "LAST_USED");
	unk_0x7DA5C9436776820A(&(uParam0->f_86), "NEW_SAVED");
	unk_0xB736AD3F7362C880(&(uParam0->f_87), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 41, sParam1);
	unk_0xAC53D61F7455A6D0(uParam0, "Model");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "iColourID1");
	unk_0x7DA5C9436776820A(&(uParam0->f_2), "iColourID2");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "iColour1Group");
	unk_0x7DA5C9436776820A(&(uParam0->f_4), "iColour2Group");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "iWindowTint");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "iTyreSmokeR");
	unk_0x7DA5C9436776820A(&(uParam0->f_7), "iTyreSmokeG");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iTyreSmokeB");
	unk_0x7DA5C9436776820A(&(uParam0->f_9), "iEngine");
	unk_0x7DA5C9436776820A(&(uParam0->f_10), "iBrakes");
	unk_0x7DA5C9436776820A(&(uParam0->f_11), "iWheels");
	unk_0x7DA5C9436776820A(&(uParam0->f_12), "iWheelType");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "iExhaust");
	unk_0x7DA5C9436776820A(&(uParam0->f_14), "iSuspension");
	unk_0x7DA5C9436776820A(&(uParam0->f_15), "iArmour");
	unk_0x7DA5C9436776820A(&(uParam0->f_16), "iHorn");
	unk_0x7DA5C9436776820A(&(uParam0->f_17), "iLights");
	unk_0xB736AD3F7362C880(&(uParam0->f_18), "bBulletProofTyres");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "iTurbo");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "iTyreSmoke");
	unk_0xDDECB5D51226D22E(&(uParam0->f_21), "tlPlateText");
	unk_0x7DA5C9436776820A(&(uParam0->f_25), "iPlateBack");
	unk_0x7DA5C9436776820A(&(uParam0->f_26), "UID");
	unk_0x7DA5C9436776820A(&(uParam0->f_27), "Cost");
	unk_0xDDECB5D51226D22E(&(uParam0->f_28), "tlPlateText_pending");
	unk_0x7DA5C9436776820A(&(uParam0->f_32), "iPlateBack_pending");
	unk_0xB736AD3F7362C880(&(uParam0->f_33), "bProcessOrder");
	unk_0xB736AD3F7362C880(&(uParam0->f_36), "bOrderPending");
	unk_0xB736AD3F7362C880(&(uParam0->f_35), "bOrderReceivedOnBoot");
	unk_0xB736AD3F7362C880(&(uParam0->f_34), "bOrderForPlayerVehicle");
	unk_0xB736AD3F7362C880(&(uParam0->f_37), "bCheckPlateProfanity");
	unk_0xB736AD3F7362C880(&(uParam0->f_40), "bOrderPaidFor");
	unk_0xB736AD3F7362C880(&(uParam0->f_38), "bSCProfanityFailed");
	unk_0xB736AD3F7362C880(&(uParam0->f_39), "bOrderFailedFunds");
	unk_0x1FF5A446D37587EA();
}

void func_17(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_18(&(uParam0->f_5506), &cVar0);
}

void func_18(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 580, sParam1);
	unk_0xB736AD3F7362C880(uParam0, "TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_2), "PENTHOUSE_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "PENTHOUSE_TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_4), "MEDIA_ROOM_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "MEDIA_ROOM_TV_CHANNEL_ID");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_6), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_6[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_9), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_12), "GARAGE_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "GARAGE_TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_14), "GARAGE_RADIO_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_15), "GARAGE_RADIO_STATION_ID");
	unk_0x7DA5C9436776820A(&(uParam0->f_16), "NUMBERS_TIMES_SMOKED");
	unk_0x7DA5C9436776820A(&(uParam0->f_17), "NUMBER_TIMES_DRANK");
	unk_0x7DA5C9436776820A(&(uParam0->f_18), "NUMBER_TIMES_STRIPPERS");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "NUMBER_TIMES_DRANK_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_21), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_22), "NUMBERS_TIMES_SMOKED3");
	unk_0x7DA5C9436776820A(&(uParam0->f_23), "NUMBER_TIMES_DRANK3");
	unk_0x7DA5C9436776820A(&(uParam0->f_24), "NUMBER_TIMES_STRIPPERS3");
	unk_0x7DA5C9436776820A(&(uParam0->f_25), "NUMBERS_TIMES_SMOKED4");
	unk_0x7DA5C9436776820A(&(uParam0->f_26), "NUMBER_TIMES_DRANK4");
	unk_0x7DA5C9436776820A(&(uParam0->f_27), "NUMBER_TIMES_STRIPPERS4");
	unk_0x7DA5C9436776820A(&(uParam0->f_28), "NUMBERS_TIMES_SMOKED5");
	unk_0x7DA5C9436776820A(&(uParam0->f_29), "NUMBER_TIMES_DRANK5");
	unk_0x7DA5C9436776820A(&(uParam0->f_30), "NUMBER_TIMES_STRIPPERS5");
	unk_0x7DA5C9436776820A(&(uParam0->f_31), "NUMBERS_TIMES_SMOKEDYacht");
	unk_0x7DA5C9436776820A(&(uParam0->f_32), "NUMBER_TIMES_DRANKYacht");
	unk_0x7DA5C9436776820A(&(uParam0->f_33), "NUMBER_TIMES_STRIPPERSYacht");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_34), "DATE_LAST_CLEANED_APARTMENT");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_35), "SHOWERS_TAKEN");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_36), 21, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_36[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_57), 21, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_57[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_57[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_78), 21, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_78[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_78[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_99), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_99[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_19(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_20(&(uParam0->f_5500), &cVar0);
}

void func_20(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 6, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "BAV_Timestamp");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_21(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_22(uParam0, &vVar0);
}

void func_22(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	unk_0x9C22F8DCFE1B7911(uParam0, 5500, sParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_23(uParam0[iVar0 /*141*/], &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
}

void func_23(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 141, sParam1);
	func_24(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0x7DA5C9436776820A(&(uParam0->f_102), "VEHICLE_BS");
	unk_0x7DA5C9436776820A(&(uParam0->f_104), "PAID_PREMIUM");
	unk_0x9D6C39B9CDAFDE91(&(uParam0->f_105), "PAID_PLAYER");
	unk_0x9D6C39B9CDAFDE91(&(uParam0->f_121), "RADIO_STATION");
	unk_0x7DA5C9436776820A(&(uParam0->f_103), "IMPOUND_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_137), "COLOUR_GROUP1");
	unk_0x7DA5C9436776820A(&(uParam0->f_138), "COLOUR_GROUP2");
	unk_0x7DA5C9436776820A(&(uParam0->f_139), "PRICE_PAID");
	unk_0x7DA5C9436776820A(&(uParam0->f_140), "OBTAIN_TIME");
	unk_0x1FF5A446D37587EA();
}

void func_24(var uParam0, char* sParam1)
{
	func_26(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0x5F1695B3F13A00D3(uParam0, 102, sParam1);
	unk_0x7DA5C9436776820A(&(uParam0->f_78), "iSpawnVehicleHorn");
	unk_0x7DA5C9436776820A(&(uParam0->f_79), "iHornID");
	unk_0xCADE461BBB25EE16(&(uParam0->f_80), "fEnveffScale");
	unk_0x7DA5C9436776820A(&(uParam0->f_97), "iColour5");
	unk_0x7DA5C9436776820A(&(uParam0->f_98), "iLivery2");
	unk_0x7DA5C9436776820A(&(uParam0->f_99), "iColour6");
	func_25(&(uParam0->f_81), "GamerHandleOfCarOwner");
	unk_0x7DA5C9436776820A(&(uParam0->f_94), "OwnerStatus");
	unk_0x7DA5C9436776820A(&(uParam0->f_95), "iFlags");
	unk_0x7DA5C9436776820A(&(uParam0->f_96), "iPVSlot");
	unk_0x7DA5C9436776820A(&(uParam0->f_100), "iPlayerIndex");
	unk_0x7DA5C9436776820A(&(uParam0->f_101), "iIEPlayerVehicle");
	unk_0x1FF5A446D37587EA();
}

void func_25(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 13, sParam1);
	unk_0x0F8F6FD83D9F7A89(uParam0, "Data64_1");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1), "Data64_2");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2), "Data64_3");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_3), "Data64_4");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4), "Data64_5");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_5), "Data64_6");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_6), "Data64_7");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_7), "Data64_8");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_8), "Data64_9");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_9), "Data64_10");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_10), "Data64_11");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_11), "Data64_12");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_12), "Data64_13");
	unk_0x1FF5A446D37587EA();
}

void func_26(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 78, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "iPlateIndex");
	unk_0xDDECB5D51226D22E(&(uParam0->f_1), "tlPlateText");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "iColour1");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "iColour2");
	unk_0x7DA5C9436776820A(&(uParam0->f_7), "iColourExtra1");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iColourExtra2");
	unk_0x7DA5C9436776820A(&(uParam0->f_62), "iTyreR");
	unk_0x7DA5C9436776820A(&(uParam0->f_63), "iTyreG");
	unk_0x7DA5C9436776820A(&(uParam0->f_64), "iTyreB");
	unk_0x7DA5C9436776820A(&(uParam0->f_65), "iWindowTintColour");
	unk_0x7DA5C9436776820A(&(uParam0->f_67), "iLivery");
	unk_0x7DA5C9436776820A(&(uParam0->f_69), "iWheelType");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_68), "eRoofState");
	unk_0x7DA5C9436776820A(&(uParam0->f_77), "iFlags");
	unk_0x7DA5C9436776820A(&(uParam0->f_71), "iCustomR");
	unk_0x7DA5C9436776820A(&(uParam0->f_72), "iCustomG");
	unk_0x7DA5C9436776820A(&(uParam0->f_73), "iCustomB");
	unk_0x7DA5C9436776820A(&(uParam0->f_74), "iNeonR");
	unk_0x7DA5C9436776820A(&(uParam0->f_75), "iNeonG");
	unk_0x7DA5C9436776820A(&(uParam0->f_76), "iNeonB");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_66), "eModel");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xAC53D61F7455A6D0(&(uParam0->f_70), "eLockState");
	unk_0x1FF5A446D37587EA();
}

void func_27(float fParam0)
{
	func_36();
	if (fParam0 == 1f)
	{
		func_34();
	}
	if (fParam0 <= 1.1f)
	{
		func_33();
	}
	if (fParam0 < 1.5f)
	{
		func_31();
	}
	if (fParam0 <= 1.5f)
	{
		func_30();
	}
	if (fParam0 == 1.5f)
	{
		func_29();
	}
	if (fParam0 < 1.7f)
	{
		func_28();
	}
}

void func_28()
{
	Global_111638.f_26429.f_4 = 0;
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x6FB46C25CCB7E6D5(joaat("content_hanger_veh"), &iVar0, -1);
	unk_0x6FB46C25CCB7E6D5(joaat("content_marina_veh"), &iVar1, -1);
	unk_0x6FB46C25CCB7E6D5(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_111638.f_668.f_1307 = (Global_111638.f_668.f_1307 - iVar0);
	}
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_25177[iVar1], iVar0))
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_25177[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				unk_0x5D96D8530B3D0904(&(Global_111638.f_25177[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_31()
{
	if ((((func_32(54) || func_32(55)) || func_32(56)) || func_32(57)) || func_32(58))
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_10011.f_25), 6);
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_33()
{
}

void func_34()
{
	if (Global_111638.f_9080.f_99.f_205[7] != 0)
	{
		if (!Global_111638.f_9080.f_330[86 /*6*/])
		{
			Global_111638.f_9080.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[8] != 0)
	{
		if (!Global_111638.f_9080.f_330[71 /*6*/])
		{
			Global_111638.f_9080.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[9] != 0)
	{
		if (!Global_111638.f_9080.f_330[91 /*6*/])
		{
			Global_111638.f_9080.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[10] != 0)
	{
		if (!Global_111638.f_9080.f_330[67 /*6*/])
		{
			Global_111638.f_9080.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_111638.f_9080.f_99.f_205[11] != 0)
	{
		if (!Global_111638.f_9080.f_330[77 /*6*/])
		{
			Global_111638.f_9080.f_330[77 /*6*/] = 1;
		}
	}
	func_35(195, 198);
	func_35(195, 197);
	func_35(195, 196);
}

void func_35(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_111638.f_10189[iParam0 /*12*/] };
	uVar1 = Global_111638.f_10189[iParam0 /*12*/].f_4;
	uVar2 = Global_111638.f_10189[iParam0 /*12*/].f_5;
	uVar3 = Global_111638.f_10189[iParam0 /*12*/].f_6;
	uVar4 = Global_111638.f_10189[iParam0 /*12*/].f_7;
	uVar5 = Global_111638.f_10189[iParam0 /*12*/].f_8;
	uVar6 = Global_111638.f_10189[iParam0 /*12*/].f_9;
	uVar7 = Global_111638.f_10189[iParam0 /*12*/].f_10;
	uVar8 = Global_111638.f_10189[iParam0 /*12*/].f_11;
	Global_111638.f_10189[iParam0 /*12*/] = { Global_111638.f_10189[iParam1 /*12*/] };
	Global_111638.f_10189[iParam0 /*12*/].f_4 = Global_111638.f_10189[iParam1 /*12*/].f_4;
	Global_111638.f_10189[iParam0 /*12*/].f_5 = Global_111638.f_10189[iParam1 /*12*/].f_5;
	Global_111638.f_10189[iParam0 /*12*/].f_6 = Global_111638.f_10189[iParam1 /*12*/].f_6;
	Global_111638.f_10189[iParam0 /*12*/].f_7 = Global_111638.f_10189[iParam1 /*12*/].f_7;
	Global_111638.f_10189[iParam0 /*12*/].f_8 = Global_111638.f_10189[iParam1 /*12*/].f_8;
	Global_111638.f_10189[iParam0 /*12*/].f_9 = Global_111638.f_10189[iParam1 /*12*/].f_9;
	Global_111638.f_10189[iParam0 /*12*/].f_10 = Global_111638.f_10189[iParam1 /*12*/].f_10;
	Global_111638.f_10189[iParam0 /*12*/].f_11 = Global_111638.f_10189[iParam1 /*12*/].f_11;
	Global_111638.f_10189[iParam1 /*12*/] = { Var0 };
	Global_111638.f_10189[iParam1 /*12*/].f_4 = uVar1;
	Global_111638.f_10189[iParam1 /*12*/].f_5 = uVar2;
	Global_111638.f_10189[iParam1 /*12*/].f_6 = uVar3;
	Global_111638.f_10189[iParam1 /*12*/].f_7 = uVar4;
	Global_111638.f_10189[iParam1 /*12*/].f_8 = uVar5;
	Global_111638.f_10189[iParam1 /*12*/].f_9 = uVar6;
	Global_111638.f_10189[iParam1 /*12*/].f_10 = uVar7;
	Global_111638.f_10189[iParam1 /*12*/].f_11 = uVar8;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_37(Global_111638.f_24899[iVar0 /*4*/]))
		{
			if (Global_111638.f_24899[iVar0 /*4*/] != 145)
			{
				Global_111638.f_24899[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

void func_38()
{
	unk_0xFDC5B11B44C84221("No_Filter", 1);
	unk_0xFDC5B11B44C84221("phone_cam1", 1);
	unk_0xFDC5B11B44C84221("phone_cam2", 1);
	unk_0xFDC5B11B44C84221("phone_cam3", 1);
	unk_0xFDC5B11B44C84221("phone_cam4", 1);
	unk_0xFDC5B11B44C84221("phone_cam5", 1);
	unk_0xFDC5B11B44C84221("phone_cam6", 1);
	unk_0xFDC5B11B44C84221("phone_cam7", 1);
	unk_0xFDC5B11B44C84221("phone_cam9", 1);
	unk_0xFDC5B11B44C84221("phone_cam12", 0);
}

void func_39(int iParam0, int iParam1)
{
	unk_0x8CFFBE74CB5C864A(iParam0);
	while (!unk_0x64EF15C5E09BAD76(iParam0))
	{
		wait(0);
		unk_0x8CFFBE74CB5C864A(iParam0);
	}
	start_new_script_with_name_hash(iParam0, iParam1);
}

int func_40()
{
	if (((unk_0x1F045D4082B1ADB2() || unk_0x82DE105F06629C0B()) || unk_0xE18B5B3CCCFB7FA3()) || unk_0xF024BD99B321A898())
	{
		return 1;
	}
	return 0;
}

