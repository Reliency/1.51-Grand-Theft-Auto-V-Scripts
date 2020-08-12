#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(11))
	{
		func_146();
	}
	if (func_104(vLocal_48, -1, 0, 0, 0))
	{
		func_101(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		func_100();
		if (unk_0x338D6FF72D84D90F())
		{
			if (iLocal_55 > unk_0x1C0640BA9A7327B3())
			{
				unk_0x9501364A300048C6();
			}
			if (!func_99())
			{
				if (!func_99())
				{
					if (func_98())
					{
						func_146();
					}
				}
				unk_0x1A6DFFFEEC27BF4F("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_86())
						{
							func_146();
						}
						if (func_85())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_84();
						if (!func_83() || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							if ((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0xEB6A8945D1AC98A1(iLocal_59[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
							{
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = func_80(iLocal_58, 0, 145);
									unk_0x2A065371C9D96655(iLocal_56, 9);
									iLocal_57[0] = func_80(iLocal_59[0], 1, 145);
									iLocal_57[1] = func_80(iLocal_59[1], 1, 145);
									unk_0xF2D30B8ACAF12A39(iLocal_56, false);
									unk_0xF2D30B8ACAF12A39(iLocal_57[0], false);
									unk_0xF2D30B8ACAF12A39(iLocal_57[1], false);
									func_70(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]))
								{
									unk_0xF3268524E9BE6D6E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
							{
								unk_0xF3268524E9BE6D6E(iLocal_58, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				unk_0x51B096AAC60548C1(0f);
				unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
				if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_58, unk_0x16F2683693E537C9(), 1))
					{
						unk_0xF3268524E9BE6D6E(iLocal_58, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
						func_69();
					}
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_45)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !unk_0xEB6A8945D1AC98A1(iLocal_58))
								{
									if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_58, 90f))
									{
										if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_58) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_58))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_56))
					{
						unk_0x142CC44DB769B57E(&iLocal_56);
					}
					if (((!unk_0xEB6A8945D1AC98A1(iLocal_59[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_59[1])) && !unk_0x437347B10A200C4B(iLocal_61[0], 0)) && !unk_0x437347B10A200C4B(iLocal_61[1], 0))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar2]))
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_59[iVar2], unk_0x16F2683693E537C9(), 0, 16);
							unk_0xFADC0A217229F6B5(iLocal_59[iVar2], true);
							if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_59[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (unk_0xE4EDC4B0E92C078B(iLocal_57[iVar2]))
						{
							unk_0x142CC44DB769B57E(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_56))
		{
			unk_0x142CC44DB769B57E(&iLocal_56);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
		{
			unk_0x7980D72D61BEF4D5(iLocal_58, false);
			unk_0x11AD11297DC58CC7(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_57[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_57[iVar0]));
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
					{
						unk_0x89258193691A7600(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x16F2683693E537C9(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xFADC0A217229F6B5(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0xF3268524E9BE6D6E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
				unk_0x11AD11297DC58CC7(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
			{
				unk_0x046C362CF15F1935(&(iLocal_61[iVar0]));
				if (unk_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x51B096AAC60548C1(1f);
		unk_0x842F1AEB2FCC00B7(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xB547E3FFEB27073E();
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (unk_0x0EB28750412C3A5A(func_2(unk_0xD803B885F5E47A62()), vLocal_48, true) > 50f)
	{
		func_146();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	Global_19671 = 0;
	func_5();
}

void func_5()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_6(char* sParam0)
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_8()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (timerb() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]) && !unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = func_80(iLocal_59[iVar0], 1, 145);
							if (unk_0x405E212DDE472467(iLocal_59[iVar0], 0))
							{
								if (!bLocal_51)
								{
									unk_0xFFDDE8CC59EB6D40(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0xDD353D0E9C789D0E(&iLocal_62);
									unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
									unk_0x75ABDC5F81978924(iLocal_62);
									unk_0x78ADC381772E3D54(iLocal_59[iVar0], iLocal_62);
									unk_0xF82EA857DA10E0CD(&iLocal_62);
									unk_0xFADC0A217229F6B5(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar1]))
				{
					if (unk_0x5A91F08DF773C39D(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!unk_0x437347B10A200C4B(iLocal_61[iVar1], 0))
						{
							unk_0x06FF977AA95DCCE3(iLocal_61[iVar1], 0);
						}
						if (unk_0x405E212DDE472467(iLocal_59[iVar1], 0))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_62);
							unk_0x75CDA8644CD3B5F5(0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iLocal_62);
							unk_0x78ADC381772E3D54(iLocal_59[iVar1], iLocal_62);
							unk_0xF82EA857DA10E0CD(&iLocal_62);
							unk_0xFADC0A217229F6B5(iLocal_59[iVar1], true);
						}
					}
					if (!unk_0x405E212DDE472467(iLocal_59[iVar1], 0))
					{
						unk_0x6C3AE6E278DB3D0E(iLocal_59[iVar1], unk_0x16F2683693E537C9(), 0, 16);
						unk_0xFADC0A217229F6B5(iLocal_59[iVar1], true);
					}
					if (!unk_0x437347B10A200C4B(iLocal_61[iVar1], 0))
					{
						if (unk_0xE0058AC511E68F8A(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (unk_0xEB6A8945D1AC98A1(iLocal_59[iVar1]))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_57[iVar1]))
					{
						unk_0x142CC44DB769B57E(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0xEB6A8945D1AC98A1(iLocal_59[2]) && unk_0xEB6A8945D1AC98A1(iLocal_59[3])) && unk_0xEB6A8945D1AC98A1(iLocal_59[4])) && unk_0xEB6A8945D1AC98A1(iLocal_59[5]))
			{
				unk_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_41(1500);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				unk_0xA3BF0AA5A2608191(iLocal_58);
				unk_0xDD353D0E9C789D0E(&iLocal_62);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2056, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), -1);
				unk_0x75ABDC5F81978924(iLocal_62);
				unk_0x78ADC381772E3D54(iLocal_58, iLocal_62);
				unk_0xF82EA857DA10E0CD(&iLocal_62);
			}
			if (!unk_0x437347B10A200C4B(iLocal_60, 0))
			{
				unk_0xE910A68AA670B4AA(iLocal_60);
				if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 5f, 5f, 5f, 0, 1, 0))
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(iLocal_58, unk_0x16F2683693E537C9(), 60f))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (!unk_0x12DE711B1C681E9E(iLocal_58, unk_0x16F2683693E537C9(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x437347B10A200C4B(iLocal_60, 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0x437347B10A200C4B(iLocal_60, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_62);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1500);
				unk_0x5B1D360B9C6F0A09(0, iLocal_60, -1, -1, 2f, 8, 0);
				unk_0x78A77CDD64392938(0, 2000);
				unk_0xC6EB89C59F2AF6B8(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE072601B4380E9DF(0, iLocal_60, 10f, 786603);
				unk_0x75ABDC5F81978924(iLocal_62);
				unk_0x78ADC381772E3D54(iLocal_58, iLocal_62);
				unk_0xF82EA857DA10E0CD(&iLocal_62);
				unk_0xFADC0A217229F6B5(iLocal_58, true);
				unk_0xDC2C59BD0989562B(iLocal_60, 1);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0x405E212DDE472467(iLocal_58, 0))
					{
						unk_0xE3971CAD01180CD0(unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(iLocal_58, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()
{
	while (func_8())
	{
		wait(0);
	}
	while (!func_40())
	{
		wait(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()
{
	func_12();
}

int func_12()
{
	if (func_13(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_13(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_37(iParam0))
	{
		func_36(iParam0, iParam1);
		if (!func_35(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_15(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)
{
	Global_111624 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_17();
	}
}

void func_17()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_111374, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_111357, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_111375, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_111358, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_111376, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_111359, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_111377, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_111360, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_111364, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_111381, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_111382, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_19(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_18() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_30768;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312745;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_27();
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_28()
{
	func_29();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_32(unk_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_36(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_38()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_39(Var0);
	return uVar1;
}

int func_39(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_40()
{
	return 1;
}

void func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x1C0640BA9A7327B3() + iParam0);
	while (unk_0x1C0640BA9A7327B3() <= iVar0)
	{
		wait(0);
		if (iLocal_55 > unk_0x1C0640BA9A7327B3())
		{
			unk_0x9501364A300048C6();
		}
	}
}

bool func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_57();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_55();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_53();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_52())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_51())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_50();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_49();
		func_44();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_57();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_45()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_48())
	{
		return 0;
	}
	if (func_46(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_48()
{
	return -1;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_50()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_51()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_53()
{
	if (func_30(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_54();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_54()
{
	func_29();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_56(int iParam0, int iParam1)
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

void func_57()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

void func_59()
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_58, unk_0x16F2683693E537C9(), -1, 2060, 2);
					func_42(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0x437347B10A200C4B(iLocal_60, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_62);
				unk_0x96167B03C5A77156(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0x75ABDC5F81978924(iLocal_62);
				unk_0x78ADC381772E3D54(iLocal_58, iLocal_62);
				unk_0xF82EA857DA10E0CD(&iLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_58, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_42(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0xF96A174EE26D7588(iLocal_58, unk_0x16F2683693E537C9(), -1);
								if (!unk_0x437347B10A200C4B(iLocal_60, 0))
								{
									unk_0xE910A68AA670B4AA(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!unk_0x437347B10A200C4B(iLocal_60, 0))
						{
							unk_0xE910A68AA670B4AA(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_54() == 0)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) || unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0xEB6A8945D1AC98A1(iLocal_59[2])) && !unk_0x437347B10A200C4B(iLocal_60, 0))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_62);
								unk_0x7B5CD34C8882F120(0, iLocal_60, -1, -1, 1f);
								unk_0x0C8C0C840C2D1AD2(0, iLocal_59[2], 2000, 0, 2);
								unk_0xF96A174EE26D7588(0, iLocal_59[2], 0);
								unk_0x75ABDC5F81978924(iLocal_62);
								unk_0x78ADC381772E3D54(iLocal_58, iLocal_62);
								unk_0xF82EA857DA10E0CD(&iLocal_62);
								func_41(2000);
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0x437347B10A200C4B(iLocal_60, 0)) && unk_0x405E212DDE472467(iLocal_58, 0))
								{
									iLocal_46++;
								}
								else
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0xEB6A8945D1AC98A1(iLocal_59[2]))
									{
										unk_0xDD353D0E9C789D0E(&iLocal_62);
										unk_0x8BE3D040D15AEA1D(0, -1);
										unk_0x75ABDC5F81978924(iLocal_62);
										unk_0x78ADC381772E3D54(iLocal_58, iLocal_62);
										unk_0xF82EA857DA10E0CD(&iLocal_62);
									}
									bLocal_51 = false;
									settimerb(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x437347B10A200C4B(iLocal_60, 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0))
				{
					func_69();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0x437347B10A200C4B(iLocal_60, 0)) && !unk_0xC42A92762C58E1B9(iLocal_58, iLocal_60, 0)) && !unk_0xC379FAA7E9DFE7A4(iLocal_58, 0)) && !unk_0xBC695A145F39D2EF(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]) && !unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
				{
					if (((((unk_0x4A42C22237F5FF76(unk_0x16F2683693E537C9(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_59[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0xB87D13D0C064E9D1(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 1)) || unk_0xB87D13D0C064E9D1(iLocal_61[iVar0], unk_0x16F2683693E537C9(), 1)) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_59[iVar0])) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						settimerb(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0xEB6A8945D1AC98A1(iLocal_59[2]) && unk_0xEB6A8945D1AC98A1(iLocal_59[3])) && unk_0xEB6A8945D1AC98A1(iLocal_59[4])) && unk_0xEB6A8945D1AC98A1(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (unk_0x5A91F08DF773C39D(iLocal_59[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, false, true, 0) || timerb() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]))
					{
						if (!unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_59[iVar0], iLocal_61[iVar0], 0))
							{
								unk_0x89258193691A7600(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x16F2683693E537C9(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
					{
						func_60();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				settimerb(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_60()
{
	Global_19671 = 0;
	func_61();
}

void func_61()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

int func_62()
{
	int iVar0;
	
	if (((((((!unk_0xC844350D5D58C99A(iLocal_61[2]) && !unk_0xC844350D5D58C99A(iLocal_61[3])) && !unk_0xC844350D5D58C99A(iLocal_61[4])) && !unk_0xC844350D5D58C99A(iLocal_61[5])) && !unk_0xC844350D5D58C99A(iLocal_59[2])) && !unk_0xC844350D5D58C99A(iLocal_59[3])) && !unk_0xC844350D5D58C99A(iLocal_59[4])) && !unk_0xC844350D5D58C99A(iLocal_59[5]))
	{
		unk_0x523BCC9DC80CD82F(joaat("hexer"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_lost_01"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_lost_02"));
		unk_0x8BC9595FD2792B5D("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0xB87F6CF6E5628C67(joaat("hexer")))
		{
			iLocal_61[2] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, true, true, false);
			iLocal_61[3] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, true, true, false);
			iLocal_61[4] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, true, true, false);
			iLocal_61[5] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, true, true, false);
			unk_0x71199B01895C6202(joaat("hexer"));
			unk_0x5C73CD40F396DC05(iLocal_61[2], 3);
			unk_0x5C73CD40F396DC05(iLocal_61[4], 3);
			iLocal_55 = unk_0x1C0640BA9A7327B3() + 1500;
		}
		if ((unk_0xB87F6CF6E5628C67(joaat("g_m_y_lost_01")) && unk_0xB87F6CF6E5628C67(joaat("g_m_y_lost_02"))) && unk_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = unk_0x852A19533F896693(iLocal_61[2], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[3] = unk_0x852A19533F896693(iLocal_61[3], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			iLocal_59[4] = unk_0x852A19533F896693(iLocal_61[4], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[5] = unk_0x852A19533F896693(iLocal_61[5], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			func_63(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = unk_0x1C0640BA9A7327B3() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]) && !unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
				{
					unk_0x2E1E5367A885F9B7(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0x4E885A246A9D983A(iLocal_59[iVar0], 137, true);
					unk_0xC743BD39A24D0583(iLocal_59[iVar0], 0);
					unk_0x3CC33E4E9CE523F4(iLocal_59[iVar0], 2);
					unk_0xAFF39FB306F8E232(iLocal_59[iVar0], 50, true);
					unk_0x083F03A847B640E9(iLocal_59[iVar0], 2);
					unk_0x23CBFFA16CA5CF45(iLocal_59[iVar0], 50f, 20);
					unk_0xB35CCEC0D4946813(iLocal_59[iVar0], 1);
					unk_0x298903DD96203C2C(iLocal_59[iVar0], 13);
					unk_0x967762C930C0C5FD(iLocal_59[iVar0], 100f);
					unk_0x9FA191B317572861(iLocal_59[iVar0], 100f);
					unk_0x6DF7BF67E86AAE86(iLocal_59[iVar0], iLocal_228);
					unk_0x11AD11297DC58CC7(iLocal_59[iVar0], true);
					unk_0x545E1397F38D9D5A(iLocal_59[iVar0], 3);
					unk_0xCC095276B3DD380E(iLocal_59[iVar0], 0);
					unk_0x25C5402CC10F76CD(iLocal_59[iVar0], true);
					unk_0xE2F0767314863BD8(iLocal_59[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x262EF6C6306BEA6C(iLocal_59[iVar0], joaat("weapon_pistol"), -1, true, true);
					}
					else
					{
						unk_0x262EF6C6306BEA6C(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), -1, true, true);
					}
					unk_0xDD353D0E9C789D0E(&iLocal_62);
					unk_0xE9362E4D600DD12A(0, iLocal_61[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xDBE4EC9C88839074(0, vLocal_48, 5000, 0, 2);
					unk_0x75ABDC5F81978924(iLocal_62);
					unk_0x78ADC381772E3D54(iLocal_59[2], iLocal_62);
					unk_0xF82EA857DA10E0CD(&iLocal_62);
					unk_0xDD353D0E9C789D0E(&iLocal_62);
					unk_0xE9362E4D600DD12A(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xDBE4EC9C88839074(0, vLocal_48, 5000, 0, 2);
					unk_0x75ABDC5F81978924(iLocal_62);
					unk_0x78ADC381772E3D54(iLocal_59[3], iLocal_62);
					unk_0xF82EA857DA10E0CD(&iLocal_62);
					unk_0xFADC0A217229F6B5(iLocal_59[3], true);
					unk_0xDD353D0E9C789D0E(&iLocal_62);
					unk_0xE9362E4D600DD12A(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xDBE4EC9C88839074(0, vLocal_48, 5000, 0, 2);
					unk_0x75ABDC5F81978924(iLocal_62);
					unk_0x78ADC381772E3D54(iLocal_59[4], iLocal_62);
					unk_0xF82EA857DA10E0CD(&iLocal_62);
					unk_0xDD353D0E9C789D0E(&iLocal_62);
					unk_0xE9362E4D600DD12A(0, iLocal_61[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0xDBE4EC9C88839074(0, vLocal_48, 5000, 0, 2);
					unk_0x75ABDC5F81978924(iLocal_62);
					unk_0x78ADC381772E3D54(iLocal_59[5], iLocal_62);
					unk_0xF82EA857DA10E0CD(&iLocal_62);
				}
				iVar0++;
			}
			unk_0x71199B01895C6202(joaat("hexer"));
			unk_0x71199B01895C6202(joaat("g_m_y_lost_01"));
			unk_0x71199B01895C6202(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_64()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
	{
		unk_0xF3268524E9BE6D6E(iLocal_58, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_58, true);
		if (!unk_0x437347B10A200C4B(iLocal_59[0], 0) && !unk_0x437347B10A200C4B(iLocal_59[1], 0))
		{
			unk_0xD458AC1C1D29C3B4(iLocal_58, 101, 0);
			unk_0x7980D72D61BEF4D5(iLocal_58, false);
			unk_0x2C4A1A0F54A166E8(iLocal_59[0], iLocal_58, 1000, 0);
			unk_0x2C4A1A0F54A166E8(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_41(0);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				func_65(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_65(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_66(iParam2), 1);
}

int func_66(int iParam0)
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

void func_67()
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_54() == 0)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_42(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_42(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_42(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				settimera(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0xEB6A8945D1AC98A1(iLocal_59[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
			{
				if ((timera() > 5000 && !iLocal_52) && !func_8())
				{
					func_42(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (timera() < 28000)
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0xE115347EA59F7B86(iLocal_59[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_59[1], unk_0x16F2683693E537C9())) || unk_0x6AB6A474D29FA7D8(iLocal_59[0], unk_0x16F2683693E537C9())) || unk_0x6AB6A474D29FA7D8(iLocal_59[1], unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_59[0], unk_0x16F2683693E537C9(), 4000, 2056, 4);
							unk_0x0C8C0C840C2D1AD2(iLocal_59[1], unk_0x16F2683693E537C9(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_41(0);
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_42(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!unk_0xB4ECF989E2C1DAC8(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0x7069CC4DE1EA3FAA(iLocal_59[0], iLocal_58, 10f))
						{
							unk_0x9BE7E7B6B488CC55(iLocal_59[0], iLocal_58, -1, 0);
						}
					}
				}
				else if (!unk_0x437347B10A200C4B(iLocal_61[0], 0) && !unk_0x437347B10A200C4B(iLocal_61[1], 0))
				{
					func_4();
					func_41(0);
					func_42(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]))
				{
					unk_0x9DD8618CA5BF832D(iLocal_59[iVar0], 156, true);
					unk_0x6C3AE6E278DB3D0E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 0, 16);
					unk_0xFADC0A217229F6B5(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
			{
				unk_0x8BE3D040D15AEA1D(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_57[iVar0]))
					{
						unk_0x142CC44DB769B57E(&(iLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (unk_0xEB6A8945D1AC98A1(iLocal_59[0]) && unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_68()
{
	if (!unk_0x8E28E832BEAC3DCE(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x728870EB733D12A1(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				unk_0xA47B46945FF6DE74(unk_0x728870EB733D12A1(), 915.6531f, 3595.061f, 32.0774f, 1, false, 0, 1);
			}
		}
	}
}

void func_69()
{
	iLocal_45 = 3;
}

int func_70(int iParam0)
{
	if (func_74())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_23(Global_111627))
		{
			func_71(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_23(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_72(func_73(iParam0), -1);
					Global_111638.f_24990.f_2++;
					unk_0x5D96D8530B3D0904(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 1))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_72(func_73(iParam0), -1);
					Global_111638.f_24990.f_3++;
					unk_0x5D96D8530B3D0904(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Global_111634, 2))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_72(func_73(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_72(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_74()
{
	switch (func_75(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_75(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_79(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_77(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_76(uParam0, iParam4);
		}
	}
	return 2;
}

void func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_77(int iParam0)
{
	return func_78(iParam0, Global_41431);
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_81(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_82(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_82(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_82(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!bLocal_51)
	{
		unk_0x0E2400AB9174FA81(255, iLocal_228, 1862763509);
		if (!unk_0x437347B10A200C4B(iLocal_59[0], 0) && !unk_0x437347B10A200C4B(iLocal_59[1], 0))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_59[0], unk_0x16F2683693E537C9(), 1) || unk_0xB87D13D0C064E9D1(iLocal_59[1], unk_0x16F2683693E537C9(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_59[0], unk_0x728870EB733D12A1(), 1) || unk_0xB87D13D0C064E9D1(iLocal_59[1], unk_0x728870EB733D12A1(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iLocal_61[0], 0) && !unk_0x437347B10A200C4B(iLocal_61[1], 0))
		{
			if (((unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_61[0], 0) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_61[1], 0)) || unk_0xB87D13D0C064E9D1(iLocal_61[0], unk_0x16F2683693E537C9(), 1)) || unk_0xB87D13D0C064E9D1(iLocal_61[1], unk_0x16F2683693E537C9(), 1))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_59[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0xEB6A8945D1AC98A1(iLocal_59[0]) || unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		vVar0 = { 15f, 15f, 15f };
		vVar1 = { -15f, -15f, -15f };
		if (!unk_0xEB6A8945D1AC98A1(iLocal_59[0]))
		{
			if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			vVar0 = { vVar0 + unk_0x64430C979F516F7A(iLocal_59[0], 31086, 0f, 0f, 0f) };
			vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_grenadelauncher"), 1)) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x4A42C22237F5FF76(unk_0x16F2683693E537C9(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0xEB6A8945D1AC98A1(iLocal_58) && !unk_0xEB6A8945D1AC98A1(iLocal_59[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_59[0]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_59[1])) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_59[0])) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0xE115347EA59F7B86(iLocal_59[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_59[1], unk_0x16F2683693E537C9())) || unk_0x6AB6A474D29FA7D8(iLocal_59[0], unk_0x16F2683693E537C9())) || unk_0x6AB6A474D29FA7D8(iLocal_59[1], unk_0x16F2683693E537C9()))
				{
					if (!iLocal_50)
					{
						unk_0x9BE7E7B6B488CC55(iLocal_59[0], unk_0x16F2683693E537C9(), -1, 0);
						iLocal_50 = 1;
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_56))
					{
						unk_0xF2D30B8ACAF12A39(iLocal_56, true);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_57[0]))
					{
						unk_0xF2D30B8ACAF12A39(iLocal_57[0], true);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_57[1]))
					{
						unk_0xF2D30B8ACAF12A39(iLocal_57[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = unk_0x1C0640BA9A7327B3();
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_41(0);
								func_42(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && unk_0x1C0640BA9A7327B3() > iLocal_47 + 10000)
			{
				func_4();
				func_41(0);
				func_42(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0xB87D13D0C064E9D1(iLocal_59[0], unk_0x16F2683693E537C9(), 1) && !unk_0xB87D13D0C064E9D1(iLocal_59[1], unk_0x16F2683693E537C9(), 1))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_58, unk_0x16F2683693E537C9(), 1))
				{
					if (func_99())
					{
						func_4();
						func_41(0);
						func_42(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()
{
	if (unk_0xDF1306B443CD3D15(iLocal_60, 0))
	{
		if ((!unk_0x5A91F08DF773C39D(iLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !unk_0xC42A92762C58E1B9(iLocal_58, iLocal_60, 0)) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_60, 1))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

int func_85()
{
	int iVar0;
	
	if (((((!unk_0xC844350D5D58C99A(iLocal_58) && !unk_0xC844350D5D58C99A(iLocal_59[0])) && !unk_0xC844350D5D58C99A(iLocal_59[1])) && !unk_0xC844350D5D58C99A(iLocal_60)) && !unk_0xC844350D5D58C99A(iLocal_61[0])) && !unk_0xC844350D5D58C99A(iLocal_61[1]))
	{
		unk_0x523BCC9DC80CD82F(joaat("a_m_m_skidrow_01"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_lost_01"));
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_lost_02"));
		unk_0x523BCC9DC80CD82F(joaat("picador"));
		unk_0x523BCC9DC80CD82F(joaat("hexer"));
		unk_0x3F423BF5B8125A50("random@countryside_gang_fight");
		unk_0x3F423BF5B8125A50("veh@drivebystd_ds_grenades");
		unk_0x4942FBD1EF896E39("move_m@gangster@var_i");
		if (((((((unk_0xB87F6CF6E5628C67(joaat("a_m_m_skidrow_01")) && unk_0xB87F6CF6E5628C67(joaat("g_m_y_lost_01"))) && unk_0xB87F6CF6E5628C67(joaat("g_m_y_lost_02"))) && unk_0xB87F6CF6E5628C67(joaat("picador"))) && unk_0xB87F6CF6E5628C67(joaat("hexer"))) && unk_0xB4AE0788C1587752("random@countryside_gang_fight")) && unk_0xB4AE0788C1587752("veh@drivebystd_ds_grenades")) && unk_0xDF3FDDA1EADEDD07("move_m@gangster@var_i"))
		{
			unk_0xAB8E2DDC7AF955E0(joaat("picador"), true);
			unk_0xAB8E2DDC7AF955E0(joaat("hexer"), true);
			unk_0xB5376EA942202450(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, false, 1);
			unk_0x7D6CA5F52B3748BF(vLocal_48 - Vector(20f, 50f, 80f), vLocal_48 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0xF63400DBE3303D26("rghLost", &iLocal_228);
			unk_0x0E2400AB9174FA81(5, iLocal_228, 1862763509);
			iLocal_58 = unk_0x36F2404464202779(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, true);
			unk_0x64F9F278AB9DCA2C(iLocal_58, 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(iLocal_58, 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(iLocal_58, 3, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(iLocal_58, 4, 0, 0, 0);
			unk_0x71199B01895C6202(joaat("a_m_m_skidrow_01"));
			unk_0x11AD11297DC58CC7(iLocal_58, true);
			unk_0xAFF39FB306F8E232(iLocal_58, 17, true);
			unk_0x25C5402CC10F76CD(iLocal_58, false);
			unk_0x7980D72D61BEF4D5(iLocal_58, true);
			unk_0x4E885A246A9D983A(iLocal_58, 185, true);
			unk_0x5E678B691C852774(iLocal_58, 16);
			unk_0x4F39CC3882DD074E(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_63(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			unk_0x33CE5A9E32EA10B2(iLocal_58, true);
			unk_0xC6EB89C59F2AF6B8(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x79C43E2BAC7C696F(iLocal_58, "move_m@gangster@var_i", 1048576000);
			iLocal_60 = unk_0x122AAB0B1D6F55AD(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			unk_0xC002508A277213DE(iLocal_60, 37, 0);
			unk_0x58A0C35FA7CA6162(iLocal_60, 4, 0);
			unk_0xB26AC67EF006D7D4(iLocal_60, 1);
			unk_0x55A3C4ED4728EA42(iLocal_60, "WDU 696");
			iLocal_59[0] = unk_0x36F2404464202779(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, true);
			func_63(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = unk_0x36F2404464202779(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, true);
			func_63(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			unk_0x71199B01895C6202(joaat("g_m_y_lost_01"));
			unk_0x71199B01895C6202(joaat("g_m_y_lost_02"));
			iLocal_61[0] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, true, true, false);
			iLocal_61[1] = unk_0x122AAB0B1D6F55AD(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			unk_0x71199B01895C6202(joaat("hexer"));
			unk_0xC6EB89C59F2AF6B8(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					unk_0xC743BD39A24D0583(iLocal_59[iVar0], 0);
					unk_0x6DF7BF67E86AAE86(iLocal_59[iVar0], iLocal_228);
					unk_0x3CC33E4E9CE523F4(iLocal_59[iVar0], 2);
					unk_0xAFF39FB306F8E232(iLocal_59[iVar0], 50, true);
					unk_0xB35CCEC0D4946813(iLocal_59[iVar0], 0);
					unk_0x262EF6C6306BEA6C(iLocal_59[0], joaat("weapon_pistol"), -1, true, true);
					unk_0x262EF6C6306BEA6C(iLocal_59[1], joaat("weapon_sawnoffshotgun"), -1, true, true);
					unk_0xFADC0A217229F6B5(iLocal_59[iVar0], true);
					unk_0x11AD11297DC58CC7(iLocal_59[iVar0], true);
					unk_0xE8832A9E16A57A1F(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = unk_0x1C0640BA9A7327B3() + 1500;
			if (func_54() == 0)
			{
				func_63(&uLocal_63, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			}
			else if (func_54() == 1)
			{
				func_63(&uLocal_63, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			}
			else if (func_54() == 2)
			{
				func_63(&uLocal_63, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_87(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_31(func_54()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_88(iVar1, &Var0);
					fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_88(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_89(uParam1, "Abigail1", func_91(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 1:
			func_89(uParam1, "Abigail2", func_91(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 2:
			func_89(uParam1, "Barry1", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 3:
			func_89(uParam1, "Barry2", func_91(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 4:
			func_89(uParam1, "Barry3", func_91(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 5:
			func_89(uParam1, "Barry3A", func_91(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 6:
			func_89(uParam1, "Barry3C", func_91(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 7:
			func_89(uParam1, "Barry4", func_91(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_90(iParam0), 0, 0);
			break;
		
		case 8:
			func_89(uParam1, "Dreyfuss1", func_91(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 9:
			func_89(uParam1, "Epsilon1", func_91(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 10:
			func_89(uParam1, "Epsilon2", func_91(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 11:
			func_89(uParam1, "Epsilon3", func_91(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 12:
			func_89(uParam1, "Epsilon4", func_91(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 13:
			func_89(uParam1, "Epsilon5", func_91(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 14:
			func_89(uParam1, "Epsilon6", func_91(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 15:
			func_89(uParam1, "Epsilon7", func_91(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 16:
			func_89(uParam1, "Epsilon8", func_91(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 17:
			func_89(uParam1, "Extreme1", func_91(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 18:
			func_89(uParam1, "Extreme2", func_91(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 19:
			func_89(uParam1, "Extreme3", func_91(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 20:
			func_89(uParam1, "Extreme4", func_91(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 21:
			func_89(uParam1, "Fanatic1", func_91(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 22:
			func_89(uParam1, "Fanatic2", func_91(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_90(iParam0), 1, 0);
			break;
		
		case 23:
			func_89(uParam1, "Fanatic3", func_91(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_90(iParam0), 0, 1);
			break;
		
		case 24:
			func_89(uParam1, "Hao1", func_91(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_90(iParam0), 0, 1);
			break;
		
		case 25:
			func_89(uParam1, "Hunting1", func_91(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 26:
			func_89(uParam1, "Hunting2", func_91(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 27:
			func_89(uParam1, "Josh1", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 28:
			func_89(uParam1, "Josh2", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 29:
			func_89(uParam1, "Josh3", func_91(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 30:
			func_89(uParam1, "Josh4", func_91(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 31:
			func_89(uParam1, "Maude1", func_91(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 32:
			func_89(uParam1, "Minute1", func_91(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 33:
			func_89(uParam1, "Minute2", func_91(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 34:
			func_89(uParam1, "Minute3", func_91(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 35:
			func_89(uParam1, "MrsPhilips1", func_91(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 36:
			func_89(uParam1, "MrsPhilips2", func_91(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 37:
			func_89(uParam1, "Nigel1", func_91(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 38:
			func_89(uParam1, "Nigel1A", func_91(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 39:
			func_89(uParam1, "Nigel1B", func_91(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 40:
			func_89(uParam1, "Nigel1C", func_91(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 41:
			func_89(uParam1, "Nigel1D", func_91(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_90(iParam0), 1, 1);
			break;
		
		case 42:
			func_89(uParam1, "Nigel2", func_91(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 43:
			func_89(uParam1, "Nigel3", func_91(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 1);
			break;
		
		case 44:
			func_89(uParam1, "Omega1", func_91(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 45:
			func_89(uParam1, "Omega2", func_91(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 46:
			func_89(uParam1, "Paparazzo1", func_91(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 47:
			func_89(uParam1, "Paparazzo2", func_91(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 48:
			func_89(uParam1, "Paparazzo3", func_91(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 49:
			func_89(uParam1, "Paparazzo3A", func_91(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 50:
			func_89(uParam1, "Paparazzo3B", func_91(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 51:
			func_89(uParam1, "Paparazzo4", func_91(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 52:
			func_89(uParam1, "Rampage1", func_91(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 54:
			func_89(uParam1, "Rampage3", func_91(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 55:
			func_89(uParam1, "Rampage4", func_91(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 56:
			func_89(uParam1, "Rampage5", func_91(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_90(iParam0), 0, 0);
			break;
		
		case 53:
			func_89(uParam1, "Rampage2", func_91(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_90(iParam0), 1, 0);
			break;
		
		case 57:
			func_89(uParam1, "TheLastOne", func_91(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 58:
			func_89(uParam1, "Tonya1", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 59:
			func_89(uParam1, "Tonya2", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 60:
			func_89(uParam1, "Tonya3", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 61:
			func_89(uParam1, "Tonya4", func_91(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		case 62:
			func_89(uParam1, "Tonya5", func_91(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_90(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_89(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_91(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_92(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_92(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_93()
{
	if (func_96() && !func_97())
	{
		return 1;
	}
	if (func_95() && func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_111356 > 0;
}

int func_95()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_97()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_98()
{
	if (!func_77(5))
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_97())
		{
			return 0;
		}
	}
	if (func_87(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if ((Global_111627 == func_38() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
}

void func_101(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_103(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_102();
}

void func_102()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)), true);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	}
}

void func_103(int iParam0)
{
	Global_111627 = iParam0;
}

int func_104(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_97())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_87(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_143(iParam1))
		{
			return 0;
		}
		if (func_31(func_54()))
		{
			if (func_142(func_54()) == 4 || func_142(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_54()))
		{
			if (!func_141(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_140(Global_111638.f_24990.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_111629) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_139())
		{
			return 0;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0;
		}
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_77(5))
		{
			return 0;
		}
		if (func_129(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_129(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_143(30) && !func_129(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_54()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_128(iVar4))
				{
					if (func_106(iVar2))
					{
						if (!func_105(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar3) < (210f * 210f))
							{
								if (func_54() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_105(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_107(iVar0);
}

int func_107(int iParam0)
{
	return func_108(iParam0, 1);
}

int func_108(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_128(iParam0))
	{
		return 0;
	}
	func_109(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_110(func_121(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_110(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119(iParam1);
		iVar1 = func_117(iParam0);
		iVar2 = (func_117(iParam0) - func_117(iParam1));
		iVar3 = (func_119(iParam0) - func_119(iParam1));
		iVar4 = (func_116(iParam0) - func_116(iParam1));
		iVar5 = (func_115(iParam0) - func_115(iParam1));
		iVar6 = (func_114(iParam0) - func_114(iParam1));
		iVar7 = (func_113(iParam0) - func_113(iParam1));
	}
	else
	{
		iVar0 = func_119(iParam0);
		iVar1 = func_117(iParam1);
		iVar2 = (func_117(iParam1) - func_117(iParam0));
		iVar3 = (func_119(iParam1) - func_119(iParam0));
		iVar4 = (func_116(iParam1) - func_116(iParam0));
		iVar5 = (func_115(iParam1) - func_115(iParam0));
		iVar6 = (func_114(iParam1) - func_114(iParam0));
		iVar7 = (func_113(iParam1) - func_113(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_112(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_111(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_111(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_112(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_113(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_114(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_115(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_116(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_117(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_118(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_119(int iParam0)
{
	return iParam0 & 15;
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_128(iParam1) || !func_128(iParam0))
	{
		return 1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_117(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	iVar1 = func_119(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	iVar1 = func_116(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	iVar1 = func_115(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	iVar1 = func_114(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	var uVar0;
	
	func_127(&uVar0, unk_0x4460E481B9E33ADA());
	func_126(&uVar0, unk_0x8D199E381D262EEF());
	func_125(&uVar0, unk_0xD8A54335F18763BA());
	func_124(&uVar0, unk_0x972A296334C9D57B());
	func_123(&uVar0, unk_0x118229AD063C3C1D());
	func_122(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_122(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_124(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(*uParam0);
	iVar1 = func_117(*uParam0);
	if (iParam1 < 1 || iParam1 > func_112(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_114(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_117(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_119(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_116(iParam0);
	if (iVar5 < 1 || iVar5 > func_112(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_54();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_138()) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_136()) || func_135()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_138() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_56(8, -1)) || func_133()) || func_132()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_138()) || Global_30770) || func_137()) || func_56(8, -1)) || func_135()) || func_134()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_138()) || func_135()) || Global_110685) || Global_30770) || func_137()) || Global_42596) || func_56(8, -1)) || func_134()) || func_132()) || func_133()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_138()) || Global_110685) || Global_30770) || func_137()) || func_56(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
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

var func_131()
{
	return Global_98783.f_1;
}

int func_132()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_133()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()
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

bool func_135()
{
	return Global_98796.f_346 > 0;
}

bool func_136()
{
	return Global_98796.f_345 > 0;
}

var func_137()
{
	return Global_1312877;
}

int func_138()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_139()
{
	func_53();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)
{
	return func_120(func_121(), iParam0);
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_142(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_143(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_145())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_144()
{
	int iVar0;
	
	if (Global_30918)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_25, 2);
				unk_0x5D96D8530B3D0904(&Global_25, 4);
				unk_0x5D96D8530B3D0904(&Global_25, 6);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_56))
		{
			unk_0x142CC44DB769B57E(&iLocal_56);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_58))
		{
			unk_0x4E885A246A9D983A(iLocal_58, 317, true);
			unk_0x7980D72D61BEF4D5(iLocal_58, false);
			unk_0x11AD11297DC58CC7(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_57[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_57[iVar0]));
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_59[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
					{
						unk_0x89258193691A7600(iLocal_59[iVar0], iLocal_61[iVar0], unk_0x16F2683693E537C9(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0xFADC0A217229F6B5(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0xF3268524E9BE6D6E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_59[iVar0], unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
				}
				unk_0x11AD11297DC58CC7(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x437347B10A200C4B(iLocal_61[iVar0], 0))
			{
				unk_0x046C362CF15F1935(&(iLocal_61[iVar0]));
				if (unk_0x562F77A7F33D2E46("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0x8910D3D58E0132B8("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0x51B096AAC60548C1(1f);
		unk_0x842F1AEB2FCC00B7(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xB547E3FFEB27073E();
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_147(-1);
	unk_0x10FAF14A60A0DBE1();
}

void func_147(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_99())
	{
		func_151(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_150(30000);
		StringCopy(&cVar0, func_149(Global_111627, 1), 64);
		if (func_37(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_111624, (unk_0x1C0640BA9A7327B3() - Global_111625), 0);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		unk_0x0674E58A79778E99(&Global_111634, 0);
	}
	func_148(&Global_30827);
	Global_111628 = 0;
	func_103(-1);
}

void func_148(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

char* func_149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_150(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_151(int iParam0)
{
	func_152(iParam0, 0, func_157(iParam0));
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_121();
	func_155(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_154(iParam0, &uVar0);
	Var1 = { func_153(&uVar0) };
}

struct<16> func_153(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_115(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_114(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_116(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_119(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_117(*uParam0), 64);
	return Var0;
}

void func_154(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_119(*uParam0);
	iVar2 = func_116(*uParam0);
	iVar3 = func_115(*uParam0);
	iVar4 = func_114(*uParam0);
	iVar5 = func_113(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_112(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_112(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_156(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_127(uParam0, iParam1);
	func_126(uParam0, iParam2);
	func_125(uParam0, iParam3);
	func_123(uParam0, iParam5);
	func_124(uParam0, iParam4);
	func_122(uParam0, iParam6);
}

int func_157(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

