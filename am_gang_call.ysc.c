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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_47 = 0;
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
	float fLocal_62 = 0f;
	struct<55> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_64 = 0;
	struct<5> Local_65[32];
	int iLocal_66 = 0;
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<21> Local_257 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_69 = -1;
	iLocal_72 = -1;
	if (unk_0x8CD06866876216F2())
	{
		func_554(ScriptParam_257);
	}
	while (true)
	{
		func_553();
		if (func_543())
		{
			func_540();
		}
		iLocal_74 = unk_0x2B6E0A53779D29EA();
		func_531();
		func_528();
		func_523();
		func_522();
		switch (func_521(unk_0x6E61BE9E61434AC1()))
		{
			case 0:
				if (func_520() == 1)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 1;
				}
				else if (func_520() == 4)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_520() == 1)
				{
					func_514();
				}
				else if (func_520() == 0)
				{
					func_508();
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0;
				}
				else if (func_520() == 4)
				{
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_483();
				func_481(&(Local_63.f_54));
				if (func_480(&(Local_63.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_479(iLocal_69))
					{
						func_483();
						iVar0++;
					}
					Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 4;
			
			case 4:
				func_260();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_258();
			func_257();
			func_256();
			switch (func_520())
			{
				case 0:
					func_255();
					if (func_251())
					{
						if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iLocal_71), 0))
						{
							func_249(unk_0x9539D44F3E4492F6(iLocal_71));
						}
						else
						{
							Local_63.f_36 = { vLocal_73 };
						}
						unk_0x0674E58A79778E99(&(Local_63.f_2), 6);
						Local_63 = 1;
					}
					break;
				
				case 1:
					if (func_65())
					{
						func_64();
						func_63();
					}
					func_45();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_520() < 4)
	{
		if (func_22())
		{
			iLocal_75 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_479(iLocal_69) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_63 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_75 /*7*/].f_2, 1) || unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_10[iLocal_75 /*7*/]))
		{
			if (unk_0xC844350D5D58C99A(unk_0x1B50683925F00106(Local_63.f_10[iLocal_75 /*7*/])))
			{
				if (unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_10[iLocal_75 /*7*/]), 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_75 /*7*/].f_2, 6))
					{
						if (iLocal_69 == 0)
						{
							Local_63.f_48++;
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 12))
							{
								if (unk_0x39DDAA68EF6A6BF4(Local_63.f_10[iLocal_75 /*7*/], &uVar0) == iLocal_71)
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 12);
								}
							}
							if ((Local_63.f_42 == iLocal_75 && !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 5)) || Local_63.f_48 == func_479(iLocal_69))
							{
								Var1.f_2 = -764618726;
								Var1.f_10 = iLocal_71;
								Var1.f_11 = iLocal_70;
								if (func_479(iLocal_69) > 1)
								{
									Var1.f_12 = unk_0x117658E336116132(1);
								}
								else
								{
									Var1.f_12 = unk_0x117658E336116132(0);
								}
								Var1.f_3 = Local_63.f_43;
								func_20(Var1, func_21(1));
								if (Local_63.f_42 == iLocal_75)
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 5);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 5))
							{
								Var1.f_2 = -774247272;
								Var1.f_11 = iLocal_70;
								func_20(Var1, func_21(1));
							}
						}
						unk_0x5D96D8530B3D0904(&(Local_63.f_10[iLocal_75 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iLocal_75 /*7*/].f_2, 5))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 2);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 1);
				}
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iLocal_66, 1);
		unk_0x5D96D8530B3D0904(&iLocal_66, 2);
	}
	func_3(iLocal_75);
	iLocal_75++;
	if (iLocal_75 >= func_479(iLocal_69))
	{
		iLocal_75 = 0;
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 1);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 9))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 9);
				}
			}
		}
		unk_0x0674E58A79778E99(&iLocal_66, 1);
		unk_0x0674E58A79778E99(&iLocal_66, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
		{
			iVar0 = unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_63.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x1C97A5F82B15E49A(iVar0) == 2 || (Global_2425662[iLocal_71 /*421*/].f_236 != -1 && func_18(Global_2425662[iLocal_71 /*421*/].f_236) == 4)) || Global_1590535[iLocal_71 /*876*/].f_748) || func_16(iLocal_71, 0)) || func_9(iLocal_71))
								{
									Local_63.f_10[iParam0 /*7*/].f_3 = iLocal_74;
									unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x1C97A5F82B15E49A(iVar0) != 2 && Global_2425662[iLocal_71 /*421*/].f_236 == -1) && !Global_1590535[iLocal_71 /*876*/].f_748) && !func_16(iLocal_71, 0)) && !func_9(iLocal_71))
							{
								unk_0x0674E58A79778E99(&(Local_63.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_10[iParam0 /*7*/].f_3) > 10000 || unk_0x1C97A5F82B15E49A(iVar0) != 2)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_2), 10);
									Local_63.f_39 = { func_8(iLocal_71) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_479(iLocal_69))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x504A57ECC0B1E81C(iVar0) == 3f && !unk_0x24129324CD7C13D0(iVar0, 118, 1))
									{
										unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_71, 1, 1))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1), 25f) || !func_5(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1), 625f))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1)) || (unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_71, 1, 1))
						{
							if (!func_4(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1)) && !(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0x24129324CD7C13D0(iVar0, 118, 1))
								{
									unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x755FF954DAE327E1((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	Local_63.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0x9539D44F3E4492F6(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xDF1306B443CD3D15(iVar1, 0))
				{
					if (unk_0xC42A92762C58E1B9(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xF1D385D359D58F72("MPBitset", 3) && unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2537071.f_5124.f_222[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_13())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0x405E212DDE472467(iVar0, iParam1))
		{
			if (func_17(unk_0x6937EA2286828455(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("AttributeDamage", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "AttributeDamage"))
		{
			if (unk_0xEAE0D21A50E6C7F4(unk_0x1E2DFB0EF4BB4566(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
	{
		if (iLocal_69 == 1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 4))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 1))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 0);
			return 1;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 2))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_3), 1);
		unk_0x5D96D8530B3D0904(&Global_1653535, iLocal_69);
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
	{
		return 1;
	}
	if (iLocal_69 == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 2))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 2);
			return 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 8))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 8);
			return 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 5))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 3);
			return 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 9))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 9);
			return 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 15))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_71, 0, 1))
	{
		if (iLocal_69 != 0 || !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_43(iLocal_71, 129))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 13);
			unk_0x5D96D8530B3D0904(&(Local_63.f_3), 8);
			return 1;
		}
		if (func_43(iLocal_71, 131) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iLocal_71 /*615*/].f_1, 11))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 13);
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_71, 136) || (func_42(unk_0xD803B885F5E47A62(), 24) && func_41(iLocal_71)))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_43(iLocal_71, 146))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_40(unk_0xD803B885F5E47A62()) && ((func_39(unk_0xD803B885F5E47A62()) == 148 || func_39(unk_0xD803B885F5E47A62()) == 142) || func_39(unk_0xD803B885F5E47A62()) == 164))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 153)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 170)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 167)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_39(unk_0xD803B885F5E47A62()) == 168)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 238)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_37(unk_0xD803B885F5E47A62()) && func_39(unk_0xD803B885F5E47A62()) == 249)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		switch (func_34(unk_0xD803B885F5E47A62()))
		{
			case 6:
			case 7:
				if (func_33())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_32(iLocal_71))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (func_31(iLocal_71))
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			return 1;
		}
		if (unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iLocal_71), 0))
		{
			if (iLocal_69 == 1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_69 == 1)
			{
				if (func_43(iLocal_71, 146))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return 1;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 16))
				{
					if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_9) > func_30())
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_71, func_12(iLocal_70), 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_3), 7);
					return 1;
				}
			}
			if (iLocal_72 != unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(iLocal_71)))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0 /*615*/].f_11 != func_13())
		{
			if (iParam1 == Global_1628237[iParam0 /*615*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 != func_13())
			{
				if (Global_1628237[iParam0 /*615*/].f_11 == iParam0)
				{
					if (Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_71, 1, 1) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()
{
	if (Local_63.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_33()
{
	return Global_1573342;
}

int func_34(int iParam0)
{
	if (func_39(iParam0) == 243)
	{
		return func_35(iParam0);
	}
	return -1;
}

int func_35(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_36(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_38(iParam0, 9);
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_39(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_37(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_43(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_44(iParam0);
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_45()
{
	func_56();
	if (iLocal_69 != 1)
	{
		func_2();
	}
	func_46();
}

void func_46()
{
	int iVar0;
	
	if (func_6(unk_0x117658E336116132(iLocal_76), 0, 1))
	{
		if (iLocal_69 == 1)
		{
			if (unk_0x117658E336116132(iLocal_76) == iLocal_71)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 16))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 3))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
			{
				if (func_52(unk_0x117658E336116132(iLocal_76)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_4, iLocal_76))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 11);
						unk_0x5D96D8530B3D0904(&(Local_63.f_4), iLocal_76);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_4, iLocal_76))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 11);
					unk_0x0674E58A79778E99(&(Local_63.f_4), iLocal_76);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 2))
			{
				unk_0x0674E58A79778E99(&(Local_63.f_1), 11);
			}
			if (iLocal_69 == 0)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 0))
				{
					if (Local_65[iLocal_76 /*5*/].f_2 != -1)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_63.f_2), 1);
							Local_63.f_42 = Local_65[iLocal_76 /*5*/].f_2;
							Local_63.f_43 = Local_65[iLocal_76 /*5*/].f_3;
							if (!func_51())
							{
								func_50();
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 9))
					{
						if (!func_51())
						{
							func_49();
						}
						iVar0 = 0;
						while (iVar0 < func_479(iLocal_69))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0x5D96D8530B3D0904(&(Local_63.f_2), 9);
						unk_0x5D96D8530B3D0904(&(Local_63.f_2), 1);
					}
				}
				if (func_51())
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 17))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 5))
						{
							func_50();
							unk_0x5D96D8530B3D0904(&iLocal_66, 17);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 6))
						{
							func_49();
							unk_0x5D96D8530B3D0904(&iLocal_66, 17);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 3))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 3);
					}
				}
				else if (unk_0x117658E336116132(iLocal_76) == iLocal_71)
				{
					if (iLocal_69 == 0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 6))
							{
								unk_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_76++;
	if (iLocal_76 >= 32)
	{
		iLocal_76 = 0;
		if (iLocal_69 == 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 3))
			{
				func_48();
			}
			else
			{
				func_47();
			}
			unk_0x0674E58A79778E99(&iLocal_66, 3);
		}
	}
}

void func_47()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
	{
		unk_0x0674E58A79778E99(&(Local_63.f_2), 3);
	}
}

void func_48()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
	{
		Local_63.f_6 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 3);
	}
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = -1459355092;
	Var0.f_10 = iLocal_71;
	Var0.f_11 = iLocal_70;
	func_20(Var0, func_21(1));
}

void func_50()
{
	struct<14> Var0;
	
	Var0.f_2 = -871580373;
	Var0.f_10 = iLocal_71;
	Var0.f_11 = iLocal_70;
	if (func_479(iLocal_69) > 1)
	{
		Var0.f_12 = unk_0x117658E336116132(1);
	}
	else
	{
		Var0.f_12 = unk_0x117658E336116132(0);
	}
	Var0.f_3 = Local_63.f_43;
	func_20(Var0, func_21(1));
}

int func_51()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_52(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return func_55();
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_54(10) /*33*/][iParam0], func_53(10));
}

int func_53(int iParam0)
{
	return (iParam0 % 32);
}

int func_54(int iParam0)
{
	return (iParam0 / 32);
}

var func_55()
{
	return Global_1312418;
}

void func_56()
{
	int iVar0;
	
	if (iLocal_69 == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 3))
		{
			if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_6) > 10000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 2);
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
			{
				if (func_60())
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
					func_59();
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
		{
			if (func_6(iLocal_71, 1, 1))
			{
				iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
				if (func_58(iVar0))
				{
					func_249(iVar0);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
		{
			if (!func_6(iLocal_71, 1, 1) || func_28(iLocal_71))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_1), 15);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 4))
			{
				if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 600000)
				{
					unk_0x5D96D8530B3D0904(&(Local_63.f_1), 4);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
		{
			if (func_57())
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_3), 12);
			}
		}
	}
}

int func_57()
{
	switch (Local_63.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_738 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_738 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 17))
	{
		if (!unk_0x70EED0761B82965E(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_63.f_36, unk_0x68F4C0EC296D3901(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	func_508();
	Local_63 = 0;
}

int func_60()
{
	if ((((((((unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 6) || unk_0x131F22FE6F47A65D(iLocal_71)) || func_29(iLocal_71, 1, 1)) || func_62(iLocal_71)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)) || Global_2425662[iLocal_71 /*421*/].f_238) || func_61(unk_0x9539D44F3E4492F6(iLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_71 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0x0E0E6175453415CB(iParam0))
			{
				iVar0 = unk_0x6937EA2286828455(iParam0, 0);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0x134B62B726CEC8E6(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
	{
		Local_63.f_5 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 5);
	}
}

void func_64()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
	{
		unk_0x0674E58A79778E99(&(Local_63.f_1), 5);
	}
}

int func_65()
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_251())
		{
			if (iLocal_69 == 1)
			{
				bVar0 = true;
			}
			else if (func_246())
			{
				if (func_243())
				{
					if (func_242())
					{
						bVar0 = true;
					}
					else if (func_240(func_241(iLocal_69)))
					{
						if (func_71())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_63();
			if (func_66())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_69)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_479(iLocal_69))
					{
						if ((!unk_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, 1)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_67(iVar0, func_70(iLocal_69), Local_63.f_32, Local_63.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_69 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_479(iLocal_69))
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_66, 1);
			unk_0x5D96D8530B3D0904(&iLocal_66, 2);
			unk_0x5D96D8530B3D0904(&iLocal_66, 3);
			unk_0x5D96D8530B3D0904(&iLocal_66, 4);
			unk_0x5D96D8530B3D0904(&(Local_63.f_1), 0);
			unk_0x5D96D8530B3D0904(&Global_1653536, iLocal_69);
			return 1;
		}
	}
	return 0;
}

void func_67(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0xA108079788452A90(0) < unk_0x9BFC2168CB5FCF68(false, 0))
			{
				if (unk_0xA3FA8B6D2780D661(1))
				{
					if (func_240(func_241(iLocal_69)))
					{
						if (func_69(&(Local_63.f_10[iParam0 /*7*/]), 7, func_241(iLocal_69), vParam2, fParam3, 1, 1, 1))
						{
							Local_63.f_10[iParam0 /*7*/].f_1 = iLocal_69;
							Local_63.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_68(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_68(int iParam0)
{
	char cVar0[16];
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), Global_1575002);
				unk_0x291398BF0ED6A2E2(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1);
				unk_0x08EAEE08061C1898(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0);
			}
			unk_0xAA6B3A4292417750(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0x083F03A847B640E9(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 13, 1);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 41, 1);
			unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 20, 1);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 132, true);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 118, false);
			unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 311, true);
			unk_0x23CBFFA16CA5CF45(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 300f, 10);
			unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0x5F2AA9E2843E9403(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_63.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0, 0);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2, 0);
					unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2);
					unk_0xB35CCEC0D4946813(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0xD5EF6A937E06E46F(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0, -1, 0);
					unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 32, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 4, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1024, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 128, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 32, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 8, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 64, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 256, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 2, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 16, true);
					if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 0))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 2);
					}
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 512, true);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 17, 0);
					unk_0x262EF6C6306BEA6C(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					unk_0x6D80F1AEBA734886(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 0);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), unk_0x9539D44F3E4492F6(iLocal_71), -1, 0, 2);
					unk_0x32DFF210E11D4B0F(Local_63.f_10[iParam0 /*7*/], 1);
					break;
			}
			unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), round((Global_262145.f_154 * IntToFloat(unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]))))), 0);
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_1), 8);
			}
			unk_0x5D96D8530B3D0904(&(Local_63.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_69(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	iVar0 = unk_0x36F2404464202779(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0xE8C9CB886096272A(iVar0);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(iVar0, iParam7);
		if (unk_0xECE0BE5313FD8BDA(iVar0))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_71()
{
	struct<6> Var0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_69)
		{
			case 0:
				if (unk_0x40B8C182D63932FC(iLocal_71) && func_6(iLocal_71, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1) };
					Var0.f_5 = 20f;
					if (func_72(Local_63.f_36, 40f, &(Local_63.f_32), &(Local_63.f_35), &Var0))
					{
						unk_0x5D96D8530B3D0904(&(Local_63.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xDEED9606C7D093F7();
					unk_0x0FB2CEE58DA4A6EE();
					if (Global_2405072.f_2464)
					{
						unk_0xDA46A23FFDBCF876();
						Global_2405072.f_2464 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_72(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_73(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_73(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (unk_0x1727A44C562FBED2(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == unk_0x0D0A574C76D769AC())
				{
					if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_239(0))
					{
						return 0;
					}
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) < func_239(0))
				{
					return 0;
				}
			}
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_238();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2462) > func_239(0))
	{
		Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
		func_232();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x10FEEAFF01E32639(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405072.f_2456)
	{
		unk_0xDEED9606C7D093F7();
		unk_0x0FB2CEE58DA4A6EE();
		func_238();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_231(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xC79C8A78EC708587())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_230(vVar6.x, vVar6.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2465 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (unk_0xD1B4D22E0BA9B0C8(fVar2, fVar3, fVar4, fVar5) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_229(Global_4456448.f_232883))
					{
						Var14.f_9 = 1;
					}
					func_204(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_203(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((unk_0xF8A3B10A1B8ACCDD(vVar7, vVar8) || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 15000) || unk_0x7D293360C866EB8E(vVar7, vVar8) == 0)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (uParam0->f_5 && !func_200(unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2467) > 7000)
			{
				func_199(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_198() || unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (unk_0xC79C8A78EC708587())
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
			}
			else
			{
				iVar0 = 0;
				func_232();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xAFED075B5A62767B(unk_0xD803B885F5E47A62(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 2:
							if (unk_0xD4B5AAF3676F3DE0(unk_0xD803B885F5E47A62(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_197(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_126(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				unk_0xDEED9606C7D093F7();
				unk_0x0FB2CEE58DA4A6EE();
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_125(uParam0->f_4))
				{
					if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_124(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x5A3997FBBD7FD7C0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_197(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					unk_0x1814612955640FD9(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x1814612955640FD9(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_126(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405072.f_2617[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_203(Global_2405072.f_2617[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_122(Global_2405072.f_2617[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x0399732A9EBC368E(Global_2405072.f_2617[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405072.f_2617[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_76(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_75(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_74(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405072.f_2458 };
				func_76(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405072.f_2463 = unk_0x2B6E0A53779D29EA();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			unk_0xDEED9606C7D093F7();
			unk_0x0FB2CEE58DA4A6EE();
			func_238();
			return 1;
		}
		Global_2405072.f_2462 = unk_0x2B6E0A53779D29EA();
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_125(uParam5->f_4) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_124(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_90(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_88(unk_0xD803B885F5E47A62(), 0))
		{
			Var2.f_9 = 1;
		}
		func_204(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_87(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_90(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_87(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_77(uParam0, 1, 1, 1, 1))
			{
				func_76(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0xE82754C349C7B581(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405072.f_661 = 1;
}

int func_77(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0 /*17*/].f_16))
			{
				if (func_86(*uParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409984[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_78(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_77(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_78(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_83(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_82(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_79(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_79(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_81(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_80(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_81(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_81(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(unk_0x07AB02F3C4AE2B04(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_80(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_80(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (vdist(vVar4, *uParam0, uParam0->f_1, 0f) < vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_80(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_81(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_82(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_83(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_84(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_84(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_84(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_85(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_83(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_82(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_79(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_203(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_122(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x0399732A9EBC368E(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_86(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_203(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_122(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_87(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_122(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_13())
			{
				return func_89(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_90(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_121(vParam0, uParam1))
	{
		if (func_91(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xB885EF0389689E54(vParam0, 0, uParam1, iParam2))
	{
		if (func_91(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_107(Global_2405072.f_509, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_95(*uParam1, 1056964608))
			{
				if (!func_92(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_94(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar2])
	{
		if (func_93(vVar1, &(Global_2410189[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_2410189[iVar2 /*141*/][iVar0 /*7*/], Global_2410189[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410189[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_93(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_79(&vVar1, Global_2410189[8 /*141*/][iVar0 /*7*/], Global_2410189[8 /*141*/][iVar0 /*7*/].f_3, Global_2410189[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_93(vector3 vParam0, var uParam1)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_94(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_95(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_104(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0 /*266*/].f_15 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0 /*325*/].f_12 != 0)
				{
					if (func_96(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_233[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_233[iVar0], 0))
				{
					if (func_96(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_119[iVar0]) && !unk_0x437347B10A200C4B(Global_969031.f_119[iVar0], 0))
				{
					if (func_96(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_96(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_103(iParam3, 1008981770))
	{
		func_97(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_97(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_98(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x755FF954DAE327E1((vVar2.x - vVar1.x));
}

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_101(iParam0);
		if (iVar0 != 0)
		{
			func_99(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_99(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_100(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1315812[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1315812[iVar0], &(Global_1315816[iVar0 /*3*/]), &(Global_1315823[iVar0 /*3*/]));
		}
		if (vmag(Global_1315816[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315823[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315816[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0 /*3*/] - Global_1315816[iVar0 /*3*/]);
		Global_1315833[iVar0] = (Global_1315823[iVar0 /*3*/].f_1 - Global_1315816[iVar0 /*3*/].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0 /*3*/].f_2 - Global_1315816[iVar0 /*3*/].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_102(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_103(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_98(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_104(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_105(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_105(int iParam0)
{
	return func_106(iParam0);
}

bool func_106(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_107(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_114(vParam0))
	{
		if (func_77(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_109(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_108(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_83(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_108(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405072.f_2728[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_111(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_78(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_111(vVar2, &uVar1) || func_110(vVar2))
			{
				vVar2 = { *uParam0 };
				func_78(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_110(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_113())
	{
		return 0;
	}
	iVar1 = func_112();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_86(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_113()
{
	return Global_1676377.f_474;
}

int func_114(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_118(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_117(vParam0, 1008981770))
			{
				if (!func_77(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_77(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_116(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_115(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_77(&vVar1, 0, 0, 0, 1))
					{
						if (!func_77(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_115(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_116(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_117(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_86(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_118(int iParam0, bool bParam1)
{
	if (func_120() != 0)
	{
		return func_119(iParam0) != 0;
	}
	return func_104(iParam0, bParam1, 0);
}

int func_119(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_120()
{
	return Global_30768;
}

int func_121(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = vdist(Global_2405072.f_2255[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405072.f_2255[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_122(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_123(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_123(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_124(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_125(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xB1275034A6871D62(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_195(uParam1, uParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (uParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_75(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_76(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_195(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xC79C8A78EC708587())
		{
			if (!unk_0xFA2A5CC35287E5B8())
			{
				if (unk_0x4FC9A1459CD5C324())
				{
					func_195(uParam1, uParam2);
					Global_2405072.f_2483.f_1 = unk_0xEAD4FBE79458D592();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x0FB2CEE58DA4A6EE();
				func_195(uParam1, uParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_192(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (uParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_134(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || unk_0xC79C8A78EC708587())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405072.f_2483.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405072.f_2483.f_3)
					{
						iVar2 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar2 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar2 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xE0463990929F9949(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0xB2C5D6F8163D4A45(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x00C66A3E05649B75(iVar2);
					}
					else
					{
						unk_0xD38A4489EFBF773A(iVar2, &iVar3);
					}
					func_134(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405072.f_2483.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_128(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_75(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_74(uParam0, &(Global_2405072.f_2483.f_6));
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_74(uParam0, &(Global_2405072.f_2483.f_6));
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x09AC81E49EA267F7(0, Global_2405072.f_2483.f_1);
				unk_0xE0463990929F9949(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_92(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
					func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
					func_127(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
				func_76(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
				func_127(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_75(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_76(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_76(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0x79833B02DBD2A244(0f, 360f);
		func_127(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_127(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0) /*3*/] = { Global_2405072.f_2617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0 /*3*/] = { vParam0 };
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (func_75(Global_2405072.f_486) && func_133() < 4096)
	{
		func_132(uParam0, 0f);
		func_132(uParam1, uParam0->f_2);
		func_132(uParam2, uParam1->f_2);
	}
	else
	{
		func_131(uParam0);
		func_130(uParam2, uParam0->f_4);
		func_129(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_129(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar3 = vdist(Global_2408006[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_130(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408006[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408006[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_1;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_132(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_2 < fVar1 && Global_2408006[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0 /*10*/].f_2;
				Var2 = { Global_2408006[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_133()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408006[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_134(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (unk_0x755FF954DAE327E1((Global_2405072.f_509.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_189(unk_0xD803B885F5E47A62()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_188(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0xE5DF6192D54A65A1(unk_0x16F2683693E537C9(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_187(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x0399732A9EBC368E(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_181(vParam0, fParam1, uParam2->f_15, func_186(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_178(vParam0, 25f, unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_174(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_174(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405072.f_693)
		{
			vVar12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				vVar12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_108(vParam0, 0.5f))
			{
				if (func_114(vVar12))
				{
					if (!func_77(&vParam0, 0, 0, 0, 1) && !func_173(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_173(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_172(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_171(unk_0xD803B885F5E47A62()) && func_170(unk_0xD803B885F5E47A62())))
		{
			if (!func_169(&vParam0, &(Global_2405072.f_2483.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_170(unk_0xD803B885F5E47A62()))
		{
			if (!func_168(vParam0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_167(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_75(Global_2405072.f_486))
			{
				if (func_117(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_166(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_109(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_92(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_116(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_165(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_160(&(Global_2405072.f_45[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_95(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_159(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405072.f_2880 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_151(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_151(vParam0, Global_2405072.f_2458, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_75(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var19.f_2 = func_149(vParam0);
			}
			uVar7 = func_140(vParam0, 1, 0, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_139(Var19);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_151(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_151(vParam0, Global_2405072.f_2458, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_75(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_149(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_138(Var19, iVar18);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar18 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar18 /*10*/] && fVar0 > Global_2405072.f_2483.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_138(Var19, iVar18);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_136(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_140(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_135(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_135(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar18 /*10*/] || (iVar8 == Global_2405072.f_2483.f_6[iVar18 /*10*/] && fVar3 > Global_2405072.f_2483.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_138(Var19, iVar18);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_135(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_136(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
				{
					fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_200(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if (func_137(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam5 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								fVar4 = vdist2(vParam0, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

int func_137(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_138(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam1 /*10*/] };
	Global_2405072.f_2483.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_138(Var0, iParam1 + 1);
	}
}

void func_139(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_133();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] < iVar2)
		{
			Global_2408006[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] == 0)
		{
			Global_2408006[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0 /*10*/] > 0)
		{
			if (Global_2408006[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408006[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408006[iVar4 /*10*/] = { Param0 };
	}
}

float func_140(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1) || (iParam5 == 1 && func_6(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0xD803B885F5E47A62() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_141(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x08067D4957B73C02(iVar7) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0x08067D4957B73C02(iVar7) == -1 || !func_118(unk_0xD803B885F5E47A62(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar7) || !bParam4)
					{
						if (func_137(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == unk_0xD803B885F5E47A62())
							{
								vVar6 = { unk_0x088E3BBDA11FE175(unk_0x9539D44F3E4492F6(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar5, 1);
							fVar2 = unk_0x0EB28750412C3A5A(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_141(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_147(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_104(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_146(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
				{
					if (!func_104(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_142(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	if (func_145(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_144(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_143(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_144(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_145(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_144(iParam0) };
		Global_2513231 = { func_144(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				unk_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (func_200(iParam0, 0))
	{
		return 1;
	}
	if (func_148())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_148()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

float func_149(vector3 vParam0)
{
	var uVar0;
	
	return func_150(vParam0, &(Global_2405072.f_45), &uVar0);
}

float func_150(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405072.f_2726) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_151(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_135(vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_140(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_135(fVar4, 0f, func_158(), func_156(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_154(vParam0);
	fVar0 = func_135(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !func_118(unk_0xD803B885F5E47A62(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_153(vParam0, unk_0xD803B885F5E47A62(), 0);
	fVar0 = func_135(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_152(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_135(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_135(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_135(vdist(Global_2405072.f_509, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_152(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x8529439EA7EEBA65(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x5DD62183BBF151CD(iVar1))
	{
		unk_0x8502D8EBA9E78216(iVar1, &vVar0);
		*uParam1 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x755FF954DAE327E1((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_153(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar3) != unk_0x08067D4957B73C02(iParam1) || (unk_0x08067D4957B73C02(iVar3) == -1 && unk_0x08067D4957B73C02(iParam1) == -1))
					{
						if (Global_2417897.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417897.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_154(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xC844350D5D58C99A(uVar4[iVar2]))
		{
			if (!unk_0x437347B10A200C4B(uVar4[iVar2], 0))
			{
				if (func_155(uVar4[iVar2]))
				{
					vVar3 = { unk_0x68F4C0EC296D3901(uVar4[iVar2], 1) };
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (unk_0xC844350D5D58C99A(Global_969031.f_152[iVar2]))
				{
					if (!unk_0x437347B10A200C4B(Global_969031.f_152[iVar2], 0))
					{
						if (func_155(Global_969031.f_152[iVar2]))
						{
							vVar3 = { unk_0x68F4C0EC296D3901(Global_969031.f_152[iVar2], 1) };
							fVar1 = unk_0x0EB28750412C3A5A(vParam0, vVar3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xD09DF7101876AFB8(iParam0);
	switch (unk_0x256517DE1B6755D4(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x1C43D178459D5730(Global_1574967[unk_0xD803B885F5E47A62()]))
	{
		switch (unk_0x256517DE1B6755D4(iVar0, Global_1574967[unk_0xD803B885F5E47A62()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 0)
	{
		iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x1C43D178459D5730(Global_1574677[iVar1]))
			{
				switch (unk_0x256517DE1B6755D4(iVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_156()
{
	if (func_157())
	{
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_157()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_147(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	return 0;
}

float func_158()
{
	if (func_157())
	{
		if ((unk_0xC41A9202669A24C4(Global_2405072.f_45.f_67) || unk_0xAFB8495D36825275(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_159(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x558ADED8B93EA0F6(vParam0, fParam5)) || (fVar0 > 0f && unk_0xEA19D5D9230DBB67(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x9DD97B5335E52CB9(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_160(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_164(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_163(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_161(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_161(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_162(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_162(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_81(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_163(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_164(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x0399732A9EBC368E(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_165(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_94(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar2])
	{
		if (func_93(vVar1, &(Global_2410189[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410189[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410189[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410189[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_93(vVar1, &(Global_2410189[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410189[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410189[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410189[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_166(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405072.f_45.f_55)
	{
		if (unk_0x31609A585163CBAC(Global_2405072.f_45.f_56))
		{
			if (!unk_0xD1BF3090E1F8300E(vParam0))
			{
				iVar0 = unk_0xFBD08BECC9B87937(vParam0);
				if (unk_0x31609A585163CBAC(iVar0))
				{
					iVar1 = unk_0x7C3DA83DB15FFBEB(iVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
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
		}
	}
	return 1;
}

int func_167(vector3 vParam0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_203(vParam0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
			break;
		
		case 1:
			return func_122(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
			break;
		
		case 2:
			return unk_0x0399732A9EBC368E(vParam0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, 1);
			break;
	}
	return 0;
}

int func_168(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x0399732A9EBC368E(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_169(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (func_120())
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1590535[iParam0 /*876*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	if (func_104(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_172(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405072.f_2617[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_173(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_110(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x79833B02DBD2A244(0.01f, 360f);
			func_83(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar2);
			if (func_111(vVar1, &uVar0) || func_110(vVar1))
			{
				vVar1 = { *uParam0 };
				func_83(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_174(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_175(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_200(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_137(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == -1)
							{
								if (unk_0x0EB28750412C3A5A(func_175(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x0EB28750412C3A5A(func_175(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_177() && Global_1590535[iVar0 /*876*/].f_847) && !func_176(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_8(iParam0);
}

int func_176(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_177()
{
	return Global_2450632.f_17;
}

int func_178(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_180(vParam0, fParam1, iParam2, iParam3, 0) || func_179(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_179(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_96(vParam0, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (vdist(Global_2417897.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405072.f_3 = 0;
	if (!func_178(vParam0, 0.5f, unk_0xD803B885F5E47A62(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam3)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_185(vParam0, fParam10))
				{
					Global_2405072.f_3++;
					if (!func_95(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_231(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_185(vParam0, fParam10))
				{
					Global_2405072.f_3++;
					if (!func_182(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405072.f_3++;
						if (!func_95(vParam0, 1056964608))
						{
							Global_2405072.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_231(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_185(vParam0, fParam10))
			{
				Global_2405072.f_3++;
				if (!func_182(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405072.f_3++;
					if (!func_95(vParam0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return 0;
}

int func_182(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xD803B885F5E47A62() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (!func_184(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
				{
					if (func_183(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_183(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = sin(fParam2);
	vVar0.y = cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x0399732A9EBC368E(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && unk_0x08067D4957B73C02(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_185(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_137(iVar1)) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
		{
			if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && unk_0x08067D4957B73C02(iVar1) == -1) && !func_118(unk_0xD803B885F5E47A62(), 1))
			{
				return 0;
			}
			else if ((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && !unk_0xD803B885F5E47A62() == iVar1) || !func_184(unk_0xD803B885F5E47A62(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_187(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam7) && bParam4) && func_142(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_8(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_188(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_200(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1)) && iVar1 != unk_0xD803B885F5E47A62())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x08067D4957B73C02(iVar1) == -1)
						{
							if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x08067D4957B73C02(iVar1) == iVar3)
					{
						if (unk_0x0EB28750412C3A5A(func_8(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (((func_118(iParam0, 1) || func_191(iParam0)) || func_36(iParam0, 0)) || func_190(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return 0;
}

void func_192(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5999[iVar1 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_194(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_194(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(vVar5, vParam0) < vdist(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_193(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_193(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_193(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_194(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_194(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_195(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_196(Global_2405072.f_2255[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405072.f_2255[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405072.f_2255[iVar0 /*4*/] };
					fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
				}
				func_134(Global_2405072.f_2255[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_128(&(Global_2405072.f_2483.f_6[0 /*10*/]), &(Global_2405072.f_2483.f_6[1 /*10*/]), &(Global_2405072.f_2483.f_6[2 /*10*/]));
	}
}

int func_196(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_87(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_87(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_197(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_123(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_198()
{
	return Global_1310987.f_4;
}

void func_199(var uParam0, var uParam1)
{
	func_238();
	func_230(uParam0, uParam1);
}

bool func_200(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_201(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_201(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_202();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_202()
{
	return Global_1312745;
}

bool func_203(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_226(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_205(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_225(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412474[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_101(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x8529439EA7EEBA65(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x5DD62183BBF151CD(iVar6))
		{
			unk_0x8502D8EBA9E78216(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412474.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412474.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x5B33870CBB8B6AC1(iVar6)) || unk_0xD9DC3EBC8290FF92(iVar6))
			{
				unk_0x968116EE0D84C042(vVar1, &uVar4, &uVar5);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_173(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_224(vVar1))
									{
										vVar1 = { func_220(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_95(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_219(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_225(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_215(vVar1, fVar2, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_107(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_214(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_231(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_231(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_211(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0 /*3*/] = { vVar1 };
																										Global_2412474.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412474.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412474[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_210(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162 /*3*/] = { vVar1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar2;
																									Global_2412474.f_162++;
																									if (func_219(vVar1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_208(0, uParam2);
						}
						iVar24 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412474[0 /*3*/] };
						uVar26 = Global_2412474.f_121[0];
						Global_2412474[0 /*3*/] = { Global_2412474[iVar24 /*3*/] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar24];
						Global_2412474[iVar24 /*3*/] = { vVar25 };
						Global_2412474.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412474[0 /*3*/] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_207(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_107(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_225(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_206(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar6;
	}
	return 0;
}

void func_206(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_178(*(uParam0[iVar2 /*4*/]), 5f, unk_0xD803B885F5E47A62(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_207(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_220(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_224(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_208(int iParam0, var uParam1)
{
	if (!func_219(Global_2412474[iParam0 /*3*/], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_209(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_208(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_208(iParam0 + 1, uParam1);
	}
}

void func_209(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0 /*3*/] = { Global_2412474[iParam0 + 1 /*3*/] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_210(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412474[iParam2 /*3*/] };
	uVar1 = Global_2412474.f_121[iParam2];
	Global_2412474[iParam2 /*3*/] = { vParam0 };
	Global_2412474.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412474.f_162 && iParam2 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_210(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_211(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_141(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_212(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam6 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_137(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam8) && bParam5) && func_142(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar1), 0))
								{
									iVar3 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar1), 0);
									if (unk_0xC844350D5D58C99A(iVar3) && !unk_0x437347B10A200C4B(iVar3, 0))
									{
										iVar4 = unk_0x134B62B726CEC8E6(iVar3);
										vVar5 = { unk_0x68F4C0EC296D3901(iVar3, 0) };
										fVar6 = unk_0xD9522BA9E27E1349(iVar3);
										if (func_213(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_213(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_96(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_98(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_84(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_84(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x755FF954DAE327E1((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_84(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x755FF954DAE327E1((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_96(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_213(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_213(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x83C1D4B63BBD91F6(vParam0, 30f, 0, iVar0);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		vVar3 = { unk_0x68F4C0EC296D3901(iVar1, 0) };
		fVar4 = unk_0xD9522BA9E27E1349(iVar1);
		if (func_213(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_218(vParam0, fParam1, iParam2, iParam3, iParam4) || func_216(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_216(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_217(vParam0, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_213(vParam0, fParam1, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_217(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_103(iParam1, 1008981770);
	fVar1 = func_103(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_218(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_96(Global_2417897.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_96(Global_2417897.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_96(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_219(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_203(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_122(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_220(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (vmag(vParam4) > 0f)
		{
			if (!func_223(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x968116EE0D84C042(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0xC05DA9D35DAF88FD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xAFB8495D36825275(iParam7) && func_222(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_221(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(vParam4) > 0f)
	{
		if (!func_223(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x8A5E176FF719A014(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x2E466A8362971293(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(vmag(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_221(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_221(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_221(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_98(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_222(vector3 vParam0)
{
	float fVar0;
	
	if (unk_0xE82754C349C7B581(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_223(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_84(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_80(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_224(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_93(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_93(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_225(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_203(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_122(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x0399732A9EBC368E(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_226(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_107(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_225(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412474[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_227(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405072.f_1747[iVar1 /*4*/] };
				fVar3 = Global_2405072.f_1747[iVar1 /*4*/].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_215(vVar2, fVar3, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_107(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_214(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_231(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_231(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_212(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_211(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412474.f_162)
															{
																Global_2412474[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0 /*3*/] = { vVar2 };
															Global_2412474.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412474.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412474[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_210(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412474.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162 /*3*/] = { vVar2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar3;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_208(0, uParam2);
				}
				iVar12 = unk_0x09AC81E49EA267F7(0, Global_2412474.f_162);
				vVar13 = { Global_2412474[0 /*3*/] };
				uVar14 = Global_2412474.f_121[0];
				Global_2412474[0 /*3*/] = { Global_2412474[iVar12 /*3*/] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar12];
				Global_2412474[iVar12 /*3*/] = { vVar13 };
				Global_2412474.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412474[0 /*3*/] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_227(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_228(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_228(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = vdist2(vParam0, Global_2405072.f_1747[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_229(int iParam0)
{
	return iParam0 == 50;
}

void func_230(var uParam0, var uParam1)
{
	unk_0x8A1BBF3B7D62C45F(uParam0, uParam1, 0.1f);
	Global_2405072.f_2466 = unk_0x0D0A574C76D769AC();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = unk_0x2B6E0A53779D29EA();
}

int func_231(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405072.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam12 > 0f)
	{
		if (func_187(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_174(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

void func_232()
{
	func_237();
	func_236();
	func_235();
	func_234();
	func_233();
}

void func_233()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408006[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_234()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405072.f_2483.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_235()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405072.f_2483.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_236()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405072.f_2483.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_237()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_238()
{
	if (Global_2405072.f_2464)
	{
		if (unk_0x0D0A574C76D769AC() == Global_2405072.f_2466)
		{
			unk_0xDA46A23FFDBCF876();
		}
		else
		{
			unk_0xDA46A23FFDBCF876();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_239(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_240(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_63.f_49;
			break;
	}
	return 0;
}

int func_242()
{
	if (iLocal_69 == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_243()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 0))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 0);
		if (iLocal_69 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_71, 1, 1))
		{
			if (unk_0x9BFC2168CB5FCF68(false, 0) - unk_0xA108079788452A90(0)) >= func_479(iLocal_69)
			{
				if (unk_0xA3FA8B6D2780D661(func_479(iLocal_69)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0x9539D44F3E4492F6(iLocal_71);
					iVar3 = unk_0x263615A674FCA6E9(iVar2, &uLocal_252, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_479(iLocal_69))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0xE9F78D191AD5EDBA(Local_63.f_10[iVar1 /*7*/]) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, 1)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, 6)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0xC844350D5D58C99A(uLocal_252[iVar0]))
								{
									if (!unk_0x437347B10A200C4B(uLocal_252[iVar0], 0))
									{
										if (!unk_0x34BFC6F0CB887BC2(uLocal_252[iVar0]))
										{
											if (func_245(unk_0x134B62B726CEC8E6(uLocal_252[iVar0])))
											{
												if (!unk_0xAF6690C489CC6203(uLocal_252[iVar0]))
												{
													if (!unk_0x405E212DDE472467(uLocal_252[iVar0], 0))
													{
														if (func_5(unk_0x68F4C0EC296D3901(uLocal_252[iVar0], 1), unk_0x68F4C0EC296D3901(iVar2, 1), 625f))
														{
															unk_0x73270B3C9CC833FD(uLocal_252[iVar0], 1, 0);
															Local_63.f_10[iVar5 /*7*/].f_6 = iVar0;
															unk_0x5D96D8530B3D0904(&(Local_63.f_10[iVar5 /*7*/].f_2), 8);
															if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 12))
															{
																Local_63.f_8 = iLocal_74;
																unk_0x5D96D8530B3D0904(&(Local_63.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_479(iLocal_69))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 1) || unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x437347B10A200C4B(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0xAF6690C489CC6203(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
					{
						if (!unk_0xAFE0D3608EDA7039(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]))
						{
							unk_0x0C8A454B494DAA0D(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0xE3A2D2E900FEFBE7(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6], 1);
							Local_63.f_10[iVar6 /*7*/] = unk_0xE8C9CB886096272A(uLocal_252[Local_63.f_10[iVar6 /*7*/].f_6]);
							unk_0xF4F945BB00F6E31C(Local_63.f_10[iVar6 /*7*/], 1);
							unk_0x5D96D8530B3D0904(&(Local_63.f_10[iVar6 /*7*/].f_2), 0);
							Local_63.f_10[iVar6 /*7*/].f_1 = iLocal_69;
							Local_63.f_10[iVar6 /*7*/].f_4 = func_70(iLocal_69);
							func_68(iVar6);
							unk_0x0674E58A79778E99(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_8) > 5000)
		{
			if (iVar7 >= func_479(iLocal_69))
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_252[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_479(iLocal_69))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_244(&(Local_63.f_10[iVar6 /*7*/]));
					unk_0x0674E58A79778E99(&(Local_63.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x0674E58A79778E99(&(Local_63.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_244(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_245(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 337826907)
	{
		return 0;
	}
	return 1;
}

int func_246()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_69 == 0)
	{
		Local_63.f_49 = func_247(Local_63.f_36, 1);
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 6);
		return 1;
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 6);
		return 1;
	}
	return 0;
}

int func_247(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_248(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_248(vParam0, 1100f, -196f, 300f, 350f, 0) || func_248(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_248(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_248(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_248(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_248(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_248(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_248(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	return unk_0x0EB28750412C3A5A(vParam0, vParam1, iParam3) <= fParam2;
}

void func_249(int iParam0)
{
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
	}
	Local_63.f_36 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	if (func_250(iParam0, 0))
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 17);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Local_63.f_1), 17);
	}
}

int func_250(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_251()
{
	bool bVar0;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_69)
			{
				case 0:
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 11))
					{
						if (func_6(iLocal_71, 1, 1))
						{
							if (vdist2(func_8(iLocal_71), Local_63.f_39) > 625f)
							{
								unk_0x0674E58A79778E99(&(Local_63.f_2), 11);
								unk_0x0674E58A79778E99(&iLocal_66, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_71, 1, 1))
						{
							bVar0 = true;
							if (func_254())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_63();
						}
						else
						{
							func_64();
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
						{
							if (func_253())
							{
								func_64();
								unk_0x5D96D8530B3D0904(&(Local_63.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_71, 1, 1))
					{
						bVar0 = true;
						if (func_252())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_63();
					}
					else
					{
						func_64();
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 5))
					{
						if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 30000)
						{
							func_64();
							unk_0x5D96D8530B3D0904(&(Local_63.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_252()
{
	int iVar0;
	
	iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
	if (((((unk_0xE934758D273C899A(iVar0) || unk_0x70EED0761B82965E(iVar0)) || func_29(iLocal_71, 1, 1)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71))
	{
		return 1;
	}
	if (func_118(iLocal_71, 1))
	{
		if (iLocal_71 > -1)
		{
			if (Global_1590535[iLocal_71 /*876*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 18))
	{
		if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 5000)
		{
			unk_0x5D96D8530B3D0904(&(Local_63.f_1), 18);
			return 1;
		}
	}
	else if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	int iVar0;
	
	iVar0 = unk_0x9539D44F3E4492F6(iLocal_71);
	if (((((((((unk_0x9C66D99E63E8E24C(iVar0) > 10f || unk_0xE934758D273C899A(iVar0)) || unk_0x70EED0761B82965E(iVar0)) || func_29(iLocal_71, 1, 1)) || func_62(iLocal_71)) || func_42(iLocal_71, 0)) || func_42(iLocal_71, 7)) || func_28(iLocal_71)) || Global_2425662[iLocal_71 /*421*/].f_238) || func_61(unk_0x9539D44F3E4492F6(iLocal_71), joaat("titan")))
	{
		return 1;
	}
	if (func_118(iLocal_71, 1))
	{
		if (iLocal_71 > -1)
		{
			if (Global_1590535[iLocal_71 /*876*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_71 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 14))
	{
		Local_63.f_9 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 14);
	}
}

void func_256()
{
	if (Local_63.f_44 != Local_65[iLocal_70 /*5*/].f_4)
	{
		Local_63.f_44 = Local_65[iLocal_70 /*5*/].f_4;
	}
}

void func_257()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 10))
	{
		Local_63.f_45 = func_479(iLocal_69);
		Local_63.f_46 = 0;
		Local_63.f_47 = 0;
		unk_0x5D96D8530B3D0904(&(Local_63.f_1), 10);
	}
}

void func_258()
{
	func_259();
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 7))
		{
			if (unk_0x519D13E6C1911A0B(iLocal_74, Local_63.f_7) > 300000)
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_2), 8);
			}
		}
	}
}

void func_259()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 7))
	{
		Local_63.f_7 = iLocal_74;
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 7);
	}
}

void func_260()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x5D96D8530B3D0904(&iLocal_66, 7);
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 1))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 2))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 3))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 9))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 4))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 5))
	{
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 11))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 7);
			}
			else if (func_374("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 7);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 6))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 7);
			if (Local_63.f_50 || Local_63.f_52)
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 7);
			}
			else if (func_374("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0x5D96D8530B3D0904(&iLocal_66, 7);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 7);
			if (func_339())
			{
				if (!Local_63.f_50)
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_338(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_334(12);
					}
					if (iLocal_253 > 0)
					{
						func_332(iLocal_253, 1, 0, 0f);
						func_317(iLocal_253, 4, 1, 1);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 0))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
			{
				unk_0x0674E58A79778E99(&iLocal_66, 7);
				if (func_374("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
			}
		}
		else if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 12))
				{
					iVar0 = round((IntToFloat(Global_262145.f_6642) * Global_262145.f_4294));
					func_276(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_262(47, 1);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 8))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 7);
			if (func_339())
			{
				if (iLocal_69 == 0)
				{
					iLocal_253 = (func_334(2) * func_479(iLocal_69));
					iVar1 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_338(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_334(12);
					}
					iVar1 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_332(iLocal_253, 1, 0, 0f);
						func_317(iLocal_253, iVar1, 1, 0);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 10))
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 7);
			if (func_339())
			{
				if (iLocal_69 == 0)
				{
					iLocal_253 = (func_334(2) * func_479(iLocal_69));
					iVar2 = 3;
				}
				else
				{
					if (Local_63.f_52)
					{
						iLocal_253 = func_338(Local_63.f_53);
					}
					else
					{
						iLocal_253 = func_334(12);
					}
					iVar2 = 4;
				}
				if (!Local_63.f_50)
				{
					if (iLocal_253 > 0)
					{
						func_332(iLocal_253, 1, 0, 0f);
						func_317(iLocal_253, iVar2, 1, 0);
					}
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 7);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_66, 7))
	{
		func_261();
	}
}

void func_261()
{
	unk_0x0674E58A79778E99(&(Global_1590535[unk_0x6E61BE9E61434AC1() /*876*/].f_143), iLocal_69);
	Global_1590535[unk_0x6E61BE9E61434AC1() /*876*/].f_144 = -1;
	if (iLocal_69 == 1)
	{
		if (unk_0xC77B2658E98CC4E5(uLocal_251))
		{
			unk_0x201044F0E8495AF6(uLocal_251);
		}
	}
	func_508();
	func_540();
}

int func_262(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_263(iParam0, iParam1);
}

int func_263(int iParam0, int iParam1)
{
	if (func_275(14) && !func_274(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_273(&Global_4270065))
	{
		if (func_271(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_264(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_275(14) && !func_274(iParam1))
	{
		return 0;
	}
	if (func_271(uParam0, iParam1))
	{
		return 0;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0);
	}
	func_267(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_265(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_275(14) && !func_274(iParam1))
	{
		return 0;
	}
	if (func_271(uParam0, iParam1))
	{
		return 0;
	}
	if (func_270(uParam0) < 0f)
	{
		func_269(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_266(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_266(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_268(uParam0, iVar0);
		iVar0++;
	}
	func_269(uParam0, (Global_4270064 - 0.5f));
}

void func_268(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_269(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_270(var uParam0)
{
	return uParam0->f_80;
}

bool func_271(var uParam0, int iParam1)
{
	return func_272(uParam0, iParam1) != -1;
}

int func_272(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_273(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_275(int iParam0)
{
	return Global_41431 == iParam0;
}

var func_276(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_277(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_277(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_278(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_278(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_316(unk_0xD803B885F5E47A62()) || func_315(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_313() || func_311(unk_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_310(sParam2))
	{
	}
	if (func_309())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_307(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_306(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_304(0, &iVar1);
					break;
				
				case 3:
					func_304(1, &iVar1);
					break;
				
				case 1:
					func_302(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_299(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_288((func_298(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_299(1165, iVar1, -1);
				}
				func_283(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_279((func_281(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_279((func_281(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_279(int iParam0)
{
	if (func_309())
	{
		Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_5 = iParam0;
		func_280(joaat("mpply_globalxp"), iParam0);
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_281(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_282(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_282(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_283(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_144(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_286(func_287(&Var0));
			if (iVar1 == 0)
			{
				func_285(&Global_1387915, iParam0);
				func_284(joaat("mpply_crew_local_xp_0"), Global_1387915);
			}
			else if (iVar1 == 1)
			{
				func_285(&Global_1387916, iParam0);
				func_284(joaat("mpply_crew_local_xp_1"), Global_1387916);
			}
			else if (iVar1 == 2)
			{
				func_285(&Global_1387917, iParam0);
				func_284(joaat("mpply_crew_local_xp_2"), Global_1387917);
			}
			else if (iVar1 == 3)
			{
				func_285(&Global_1387918, iParam0);
				func_284(joaat("mpply_crew_local_xp_3"), Global_1387918);
			}
			else if (iVar1 == 4)
			{
				func_285(&Global_1387919, iParam0);
				func_284(joaat("mpply_crew_local_xp_4"), Global_1387919);
			}
		}
	}
}

void func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1387910 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1387912 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1387912 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1387913 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1387914 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1387915 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1387916 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1387917 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1387918 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1387919 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1387920 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1387921 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1387922 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1387923 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1387924 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1387925 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_286(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_287(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	if (func_309())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_297(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_297(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_296(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_294(iParam0, 1);
		}
		func_293(639, iParam0, -1, 1);
		func_292(640, func_294(iParam0, 1), -1, 1, 0);
		Global_1388060[func_297(-1)] = iParam0;
		func_289(-1109644434, 7, 0);
	}
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_291(iParam1, iParam2))
	{
		iVar0 = func_290();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_290()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_291(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_297(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_297(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_297(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_297(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_297(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_297(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_297(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_297(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_297(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_297(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_297(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_297(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_297(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_297(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_297(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_297(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_297(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_297(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_297(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_297(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_297(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_297(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_297(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_297(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_297(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_297(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_297(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_297(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_297(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_297(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_297(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_297(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_297(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_297(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_297(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_297(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_297(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_297(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_297(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_297(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_297(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_297(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_297(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_297(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_297(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_297(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_297(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_297(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_297(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_297(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_297(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_297(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_294(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_295(iParam0, 0);
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_296(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_202();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_298(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_297(-1)];
			}
			else if (func_296(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_297(-1)];
	}
	return 0;
}

void func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_301(iParam0, func_297(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_300(iParam0))
	{
		func_292(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_293(iParam0, iVar0, iParam2, 1);
	}
}

int func_300(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_297(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != -1)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_146(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_145(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_303(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_303(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_303(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_304(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_145(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_305(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_145(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_303(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_303(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_305(int iParam0, int iParam1)
{
	return vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_303(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_307(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_298(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_298(unk_0xD803B885F5E47A62());
		}
	}
	if (func_308(8000, 0, 0) > 0)
	{
		if (func_308(8000, 0, 0) < (iParam0 + func_298(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_308(8000, 0, 0) - func_298(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_308(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_309()
{
	return 1;
}

int func_310(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_311(int iParam0)
{
	return func_312(func_39(iParam0));
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_313()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_177();
	}
	return func_314(Global_4456448.f_194990);
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_315(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_316(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_317(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_331(iParam1), 16);
	StringCopy(&Var1, func_330(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_51())
	{
		func_318(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263954[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_318(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_51())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_319(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_319(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_319(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_319(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_319(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_202()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_326(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_325(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_320(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_321(iParam0);
	}
}

void func_321(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_51())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_324(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_322(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_322(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_323(&(uParam0->f_14));
	func_323(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_323(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_324(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_325(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_51())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_327(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_327(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam19;
	iVar1 = func_329(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_328();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_328()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_329(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_332(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_4 = iVar1;
	Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_3 = (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_333(iVar1, 0);
	}
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_337(iParam0) >= 0)
	{
		iVar0 = func_337(iParam0);
	}
	else
	{
		iVar0 = func_335(iParam0);
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return 200;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return 400;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return 600;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return 800;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_336()
{
	return unk_0xEAE0D21A50E6C7F4(func_301(6424, -1, 0), 19);
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7221;
			break;
		
		case 15:
			return Global_262145.f_6646;
			break;
		
		case 17:
			return Global_262145.f_6646;
			break;
		
		case 18:
			return Global_262145.f_6646;
			break;
		
		case 19:
			return Global_262145.f_6646;
			break;
		
		case 21:
			return Global_262145.f_6646;
			break;
		
		case 36:
			return Global_262145.f_7688;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12884;
			break;
		
		case 41:
			return Global_262145.f_12885;
			break;
		
		case 42:
			return Global_262145.f_12886;
			break;
		
		case 43:
			return Global_262145.f_15429;
			break;
		
		case 44:
			return Global_262145.f_15431;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_24998;
			break;
		
		case 62:
			return Global_262145.f_24999;
			break;
		
		case 63:
			return Global_262145.f_28457;
			break;
		
		case 64:
			return Global_262145.f_6646;
			break;
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23456;
		
		case 2:
			return Global_262145.f_23457;
		
		case 3:
			return Global_262145.f_23458;
		
		default:
	}
	return 9999999;
}

int func_339()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_63.f_50 || Local_63.f_52)
	{
		if (!Local_63.f_51)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
			{
				func_340("HS_UNABLE", iLocal_71, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_69)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_374(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_340(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x08067D4957B73C02(iParam1);
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var2))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		if ((iVar1 != -1 && unk_0xA14BB9332558B949()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				unk_0x3A820E495A7BA3E5(func_372(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_348(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_348(iParam1, -2, 1, 0, 0));
		}
		unk_0xD06AC7C87A34A6AD(func_346(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_144(iParam1) };
			if (unk_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar3 = 0;
				if (unk_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_345(&Var2) };
					}
					iVar0 = unk_0x0D020422A92A2236(iVar4, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar3, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = unk_0xDCEBC63DB246F9AE(iVar4, unk_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar3, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = unk_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_341(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_344() || !unk_0xA14BB9332558B949()) || !func_200(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_342(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_343(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_344()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_345(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_346(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_347(&cVar0);
}

var func_347(char[4] cParam0)
{
	return cParam0;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_147(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_147(unk_0xD803B885F5E47A62()) || (func_371() && func_370())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_369();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_6(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_372(iParam1, iParam0, 0);
							}
							else
							{
								return func_360(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_360(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_372(iParam1, iParam0, 0);
				}
				else
				{
					return func_349(0, -1, 0);
				}
			}
			else
			{
				return func_349(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_372(iParam1, iParam0, 0);
		}
		else
		{
			return func_360(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_360(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_349(bool bParam0, int iParam1, bool bParam2)
{
	return func_350(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_350(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_359() || (func_358() && func_356())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_355(iParam2, iVar0);
		}
		else
		{
			return func_355(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_146(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_354(1);
				}
				else
				{
					return func_354(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_351(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_351(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_354(1);
	}
	return func_354(0);
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_353(iParam0, iParam1, iParam3);
	if (func_352(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_352(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_146(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_354(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_353(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_356()
{
	if (func_357())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_357()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_358()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_359()
{
	if (func_357() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_365())
			{
				iVar3 = func_364(iParam0);
				if (!iVar3 == -1)
				{
					return func_362(iVar3);
				}
			}
			if ((func_184(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_146(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_354(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_361(1);
			}
			else
			{
				return func_350(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_354(1);
			}
			else
			{
				return func_350(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_364(iParam0);
	if (!iVar4 == -1)
	{
		return func_362(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_361(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_362(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_363(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_363(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_364(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_365()
{
	if (((func_368() || func_367()) || func_177()) || func_366())
	{
		return 1;
	}
	return 0;
}

var func_366()
{
	return Global_2450632.f_19;
}

var func_367()
{
	return Global_2450632.f_16;
}

var func_368()
{
	return Global_2450632.f_15;
}

var func_369()
{
	return Global_2359302.f_2;
}

bool func_370()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_371()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969031.f_14[iParam0];
	if (func_365())
	{
		iVar2 = func_364(iParam1);
		if (!iVar2 == -1)
		{
			return func_362(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_350(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_373(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_146(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_361(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_373(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_374(char* sParam0, char* sParam1, int iParam2)
{
	if (!unk_0x7F8A39872A07D2CE(sParam0, "NULL"))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_68, 0))
		{
			func_478(&uLocal_86, 3, 0, sParam1, 0, 1);
			if (func_376(&uLocal_86, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0x5D96D8530B3D0904(&iLocal_68, 0);
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_68, 1))
		{
			if (func_375(0))
			{
				unk_0x5D96D8530B3D0904(&iLocal_68, 1);
			}
		}
		else if (!func_375(0))
		{
			iLocal_68 = 0;
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0)
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

int func_376(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_476())
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_377(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_377(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_474(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_473(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_468(iParam6))
	{
		return 0;
	}
	if (func_465(iVar0, iVar1, iVar2))
	{
		if (func_464())
		{
			return 0;
		}
		func_463();
		return func_384(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_383(iParam4))
	{
		return 0;
	}
	func_378(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_378(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = iParam6;
	func_379(iParam4);
	func_463();
	Global_1370527.f_40.f_13 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 7000);
}

void func_379(int iParam0)
{
	if (func_382(iParam0))
	{
		func_381();
		return;
	}
	func_380();
}

void func_380()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_381()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_383(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_384(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_462();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_459(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_456(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_459(uParam0, sParam3, sParam4);
		}
		return func_438(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_437(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_425(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_424(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_385(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_385(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_423();
	bVar0 = true;
	if (func_387(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_386(120000);
		return 1;
	}
	return 0;
}

void func_386(int iParam0)
{
	Global_1370527.f_40.f_11 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_387(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_417(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_416(sParam5, bParam6, &iVar3);
	uVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_413(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_391(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_390();
	}
	func_423();
	func_389();
	func_388();
	return 1;
}

void func_388()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_389()
{
	Global_1370527.f_40 = 3;
}

void func_390()
{
	unk_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_391(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_392(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_392(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_405() == 0)
	{
		func_403();
		return 0;
	}
	func_402(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/]), sParam1, 64);
	Global_4268500[Global_4269749 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749 /*104*/].f_24 = iParam2;
	}
	Global_4268500[Global_4269749 /*104*/].f_25 = iParam7;
	Global_4268500[Global_4269749 /*104*/].f_26 = uParam8;
	Global_4268500[Global_4269749 /*104*/].f_29 = uParam9;
	Global_4268500[Global_4269749 /*104*/].f_30 = uParam12;
	Global_4268500[Global_4269749 /*104*/].f_31 = uParam11;
	Global_4268500[Global_4269749 /*104*/].f_28 = 0;
	Global_4268500[Global_4269749 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_33), sParam4, 64);
	Global_4268500[Global_4269749 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_50), sParam5, 64);
	Global_4268500[Global_4269749 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749 /*104*/].f_83), sParam15, 64);
	func_406();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268500[Global_4269749 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268500[Global_4269749 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268500[Global_4269749 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_401(0);
				break;
			
			case 1:
				func_401(1);
				break;
			
			case 2:
				func_401(2);
				break;
			
			case 3:
				func_401(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			
			case 0:
				Global_4269750 = 1;
				break;
			
			case 2:
				Global_4269750 = 1;
				break;
			
			case 1:
				Global_4269750 = 1;
				break;
			}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_406();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_400())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_399(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_396(1);
			func_399(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_393(uParam0, sParam1);
	return 1;
}

void func_393(var uParam0, char* sParam1)
{
	if (!func_394())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_394()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_13())
	{
		return 0;
	}
	if (func_395(unk_0xD803B885F5E47A62()))
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

bool func_395(int iParam0)
{
	return func_38(iParam0, 20);
}

void func_396(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_275(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268500[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268500[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_7362);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_7357, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_398(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_397(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_397(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_398(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_398(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_398(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_398(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_398(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_398(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_399(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	unk_0x3CAEA85DA607305E(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(round(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

bool func_400()
{
	return Global_1312877;
}

void func_401(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_4268500[iParam0 /*104*/].f_18 = iVar0;
	Global_4268500[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268500[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268500[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268500[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268500[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_403()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_404(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

int func_404(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749 /*104*/].f_18 = -1;
	Global_4268500[Global_4269749 /*104*/].f_18.f_1 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_2 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_3 = 0;
	Global_4268500[Global_4269749 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2 /*104*/].f_24 == 0 || Global_4268500[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_404(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749 /*104*/].f_99[0] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[1] = 0;
	Global_4268500[Global_4269749 /*104*/].f_99[2] = 0;
	return 1;
}

void func_406()
{
	if (func_275(14))
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
		Global_19486 = func_407();
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

var func_407()
{
	func_408();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_408()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_411(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_410(unk_0x16F2683693E537C9());
			if (func_409(iVar0) && (!func_275(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_409(Global_111638.f_2358.f_539.f_4321))
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

bool func_409(int iParam0)
{
	return iParam0 < 3;
}

int func_410(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_411(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_411(int iParam0)
{
	if (func_409(iParam0))
	{
		return func_412(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_412(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_413(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_392(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_414(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_415(2, iParam1);
	return iParam0;
}

void func_415(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_416(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_415(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = func_420(iParam0);
	if (iVar0 == -1)
	{
		func_418(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_418(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_420(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_419(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_419(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_420(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_421(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_421(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389239)
	{
		Global_1389078[iVar2 /*5*/] = { Global_1389078[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_422(&(Global_1389078[iVar2 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_422(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_423()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_424(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_423();
	bVar0 = false;
	return func_387(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_425(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_426(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_426(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_417(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_416(sParam5, bParam6, &iVar3);
	uVar5 = func_414(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_436(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_428(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_390();
	}
	func_427();
	func_389();
	func_388();
	return 1;
}

void func_427()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_428(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_430(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_429(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_429(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_430(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_406();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_435() == 0)
	{
		func_433();
		return 0;
	}
	func_432(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111638.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111638.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111638.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111638.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111638.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_401(0);
		func_401(2);
		func_401(1);
	}
	else
	{
		func_406();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_401(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_401(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_401(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_401(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_7356, 10))
		{
			Global_111638.f_14046[0 /*20*/].f_17 = 1;
			Global_111638.f_14046[1 /*20*/].f_17 = 1;
			Global_111638.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_406();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_400())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_399(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_396(1);
			func_399(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_431(uParam0, sParam1);
	return 1;
}

void func_431(var uParam0, char* sParam1)
{
	if (!func_394())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_111638.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_434(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_434(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111638.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_434(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111638.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_436(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x0674E58A79778E99(&Global_7356, 10);
	iVar0 = 3;
	if (func_430(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_429(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_437(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_427();
	bVar0 = true;
	if (func_426(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_386(120000);
		return 1;
	}
	return 0;
}

int func_438(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 4))
	{
		bVar0 = func_455(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_444(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 3))
		{
			func_443(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 5))
		{
			func_442(1);
		}
		func_441();
		func_389();
		func_440();
		func_439();
		return 1;
	}
	return 0;
}

void func_439()
{
	Global_2546572 = 0;
}

void func_440()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_441()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_442(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7358, 0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7358, 0);
	}
}

void func_443(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 20);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 20);
	}
}

int func_444(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_445(sParam3, iParam4, bParam7);
}

int func_445(char* sParam0, int iParam1, bool bParam2)
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
					func_453();
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
		if (func_452(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_451();
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
				func_406();
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
				if (func_450())
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
			if (func_449())
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
			func_448();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_447();
		func_446();
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
		func_453();
	}
	return 0;
}

void func_446()
{
	if (!func_394())
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

void func_447()
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

void func_448()
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

int func_449()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_450()
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

void func_451()
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

bool func_452(int iParam0, int iParam1)
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

void func_453()
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

void func_454(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_455(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_454(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_445(sParam3, iParam4, bParam7);
}

int func_456(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_458(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_457();
		func_441();
		func_389();
		func_440();
		func_439();
		return 1;
	}
	return 0;
}

void func_457()
{
	Global_21823 = 0;
}

bool func_458(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_454(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_445(sParam3, iParam4, bParam8);
}

int func_459(var uParam0, char* sParam1, char* sParam2)
{
	if (func_461(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_460();
		func_389();
		func_440();
		return 1;
	}
	return 0;
}

void func_460()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_461(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_454(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_445(sParam2, iParam3, 0);
}

void func_462()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_463()
{
	Global_1370527.f_40 = 1;
}

bool func_464()
{
	return Global_1370527.f_40 == 1;
}

int func_465(int iParam0, int iParam1, int iParam2)
{
	if (!func_466(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_466(int iParam0)
{
	if (!func_467())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_467()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_468(int iParam0)
{
	if (func_472())
	{
		return 0;
	}
	if (func_471())
	{
		return 0;
	}
	if (func_375(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_470())
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 6))
	{
		if (func_469())
		{
			return 0;
		}
	}
	return 1;
}

bool func_469()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_470()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_471()
{
	return Global_1370527.f_40 == 3;
}

bool func_472()
{
	return func_449();
}

int func_473(int iParam0, int iParam1, int iParam2)
{
	if (!func_471())
	{
		return 0;
	}
	return func_465(iParam0, iParam1, iParam2);
}

int func_474(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_475()
{
	return Global_2543673.f_1;
}

int func_476()
{
	if (Global_1370715.f_2)
	{
		return 1;
	}
	return func_477();
}

bool func_477()
{
	return func_472();
}

void func_478(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_480(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_481(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_482(uParam0, 0, 0);
		}
	}
}

void func_482(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_483()
{
	if (unk_0xE5DBF9B6126856CA(Local_63.f_10[iLocal_77 /*7*/]) && !unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_10[iLocal_77 /*7*/]), 0))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (func_5(unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(Local_63.f_10[iLocal_77 /*7*/]), 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 50625f))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 4))
				{
					unk_0x5D96D8530B3D0904(&iLocal_66, 4);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 5))
			{
				if (Local_63.f_42 != -1)
				{
					if (iLocal_77 == Local_63.f_42)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 5))
						{
							unk_0x5D96D8530B3D0904(&iLocal_66, 5);
						}
					}
				}
			}
		}
	}
	func_484(iLocal_77);
	iLocal_77++;
	if (iLocal_77 >= func_479(iLocal_69))
	{
		if ((!unk_0xEAE0D21A50E6C7F4(iLocal_66, 4) && unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8)) || unk_0xEAE0D21A50E6C7F4(iLocal_66, 5))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 1))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 1);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 1))
		{
			unk_0x0674E58A79778E99(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 1);
		}
		unk_0x0674E58A79778E99(&iLocal_66, 4);
		unk_0x0674E58A79778E99(&iLocal_66, 5);
		iLocal_77 = 0;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
	{
		iVar0 = unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]);
		if (iLocal_69 == 0)
		{
			if (unk_0xD803B885F5E47A62() == iLocal_71)
			{
				if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_63.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 0))
				{
					unk_0x5D96D8530B3D0904(&Global_1573339, 0);
					unk_0x5D96D8530B3D0904(&(iLocal_67[iParam0]), 0);
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 1))
				{
					unk_0x0674E58A79778E99(&(iLocal_67[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_10[iParam0 /*7*/]))
			{
				if (!unk_0x526BC32A660C89E6(Local_63.f_10[iParam0 /*7*/]))
				{
					unk_0x8D30F6387EE75385(Local_63.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x526BC32A660C89E6(Local_63.f_10[iParam0 /*7*/]))
		{
			if (unk_0xD803B885F5E47A62() == iLocal_70)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 9) && !unk_0xEAE0D21A50E6C7F4(iLocal_67[iParam0], 1))
				{
					if (unk_0x6EBC49900DEAF9B9(iVar0, unk_0xD803B885F5E47A62()))
					{
						switch (Local_63.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_507(iVar0, 3);
								break;
						}
						unk_0x5D96D8530B3D0904(&(iLocal_67[iParam0]), 1);
					}
				}
			}
			if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0xEB6A8945D1AC98A1(iVar0))
			{
				switch (Local_63.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x9DD8618CA5BF832D(iVar0, 187, 1);
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 3))
								{
									unk_0x16F8631A5D4FBCE5(iVar0, 3f);
									unk_0x11AD11297DC58CC7(iVar0, 1);
									unk_0x4E885A246A9D983A(iVar0, 118, false);
								}
							}
						}
						if (unk_0xD803B885F5E47A62() == iLocal_71 && func_5(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1), 25f))
						{
							unk_0x5D96D8530B3D0904(&(Global_2537071.f_4589), 0);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_2537071.f_4589), 0);
						}
						if (!unk_0xE9FDA1035CFEA94F(iVar0))
						{
							if (!unk_0xFEABCECA098C0A91(iVar0, 29))
							{
								if (func_6(iLocal_71, 1, 1))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
									{
										if (func_506(iLocal_71) && !unk_0x4FB00DDF9C0D8114(unk_0x9539D44F3E4492F6(iLocal_71)))
										{
											if (!func_505(iVar0, -1794415470))
											{
												if (func_504(iVar0))
												{
													iVar1 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iLocal_71), 0);
													if (unk_0xC844350D5D58C99A(iVar1))
													{
														if (unk_0xDF1306B443CD3D15(iVar1, 0))
														{
														}
														if (!unk_0x4A43A287EB2A2B60(iVar1, func_503(unk_0x9539D44F3E4492F6(iLocal_71), 0)))
														{
															unk_0x5B1D360B9C6F0A09(iVar0, iVar1, -1, func_502(unk_0x9539D44F3E4492F6(iLocal_71), iVar1), func_501(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)) && !unk_0x405E212DDE472467(iVar0, 1))
										{
											if (func_505(iVar0, -1794415470))
											{
												unk_0xA3BF0AA5A2608191(iVar0);
											}
											if (!func_505(iVar0, 1227113341))
											{
												if (func_504(iVar0))
												{
													unk_0xE185F110925D87DB(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), -1, 0f, func_501(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x9DD8618CA5BF832D(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xD803B885F5E47A62() == iLocal_71 && func_5(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iLocal_71), 1), 25f))
						{
							unk_0x5D96D8530B3D0904(&(Global_2537071.f_4589), 0);
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_2537071.f_4589), 0);
						}
						if (unk_0xD803B885F5E47A62() == iLocal_71)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 0))
							{
								if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
								{
									if ((func_4(unk_0x68F4C0EC296D3901(iVar0, 1), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1)) && (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))) || (unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x16F2683693E537C9()))
									{
										iVar2 = func_499(unk_0xD803B885F5E47A62());
										fVar5 = (to_float(Global_262145.f_6650) / 100f);
										iVar2 = round((to_float(iVar2) * fVar5));
										iVar6 = func_498(unk_0xD803B885F5E47A62());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_6651))
										{
											iVar2 = (iVar6 * Global_262145.f_6651);
										}
										if (iVar2 > 0)
										{
											unk_0x5D96D8530B3D0904(&iLocal_66, 16);
										}
										unk_0xC087319D96BCB2A9(unk_0x16F2683693E537C9(), 5000, 10000, 4);
										if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
										{
											vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) - unk_0x68F4C0EC296D3901(iVar0, 1) };
											vVar3 = { func_497(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											unk_0xDFC6BA855748EB10(unk_0x16F2683693E537C9(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xBAFED2F6486F771A(iVar0, 512, false);
										unk_0xAFF39FB306F8E232(iVar0, 17, 1);
										if (((unk_0x405E212DDE472467(iVar0, 1) || unk_0xE64AC821059A938D(iVar0)) && func_495(iVar0)) && func_503(iVar0, 0) == -1)
										{
											unk_0xBAFED2F6486F771A(iVar0, 2, true);
											unk_0xAFF39FB306F8E232(iVar0, 3, 0);
											unk_0xAFF39FB306F8E232(iVar0, 6, 1);
										}
										else
										{
											unk_0xA3BF0AA5A2608191(iVar0);
											unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 10000f, -1, 1, 0);
										}
										Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = -1;
										}
										unk_0x6DF7BF67E86AAE86(iVar0, Global_1575007);
										unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 0);
										unk_0x5D96D8530B3D0904(&(Global_2537071.f_4589), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x4E3CE49FD6DA2735(iVar0, 187))
						{
							unk_0x9DD8618CA5BF832D(iVar0, 187, 0);
						}
						if (Local_63.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 4))
							{
								unk_0x11AD11297DC58CC7(iVar0, 0);
								unk_0x4E885A246A9D983A(iVar0, 118, true);
							}
						}
						if (!(unk_0xE64AC821059A938D(iVar0) && unk_0x66532B38746E912A(iVar0) == unk_0x9539D44F3E4492F6(iLocal_71)))
						{
							if (!unk_0xE9FDA1035CFEA94F(iVar0))
							{
								if (func_504(iVar0))
								{
									if ((unk_0x405E212DDE472467(iVar0, 1) || unk_0xE64AC821059A938D(iVar0)) && !unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
									{
										if (!func_505(iVar0, -258271821) && !func_505(iVar0, -1273030092))
										{
											if (unk_0x0E0E6175453415CB(iVar0))
											{
												iVar7 = unk_0x6937EA2286828455(iVar0, 1);
												iVar8 = unk_0x134B62B726CEC8E6(iVar7);
												if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
												{
													unk_0xAFF39FB306F8E232(iVar0, 17, 1);
													unk_0xAFF39FB306F8E232(iVar0, 6, 0);
													unk_0xAFF39FB306F8E232(iVar0, 1, 0);
												}
												else if (unk_0xAFB8495D36825275(iVar8))
												{
													unk_0x9AFA0796FDCABCD5(iVar0, iVar7, 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (unk_0xC41A9202669A24C4(iVar8))
												{
													unk_0x0C4243AF9A434F34(iVar0, iVar7, 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x134B62B726CEC8E6(iVar7) == joaat("taxi"))
												{
													unk_0xBAFED2F6486F771A(iVar0, 2, false);
													unk_0xAFF39FB306F8E232(iVar0, 3, 1);
													unk_0xAFF39FB306F8E232(iVar0, 6, 0);
													unk_0xF3268524E9BE6D6E(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0xE072601B4380E9DF(iVar0, unk_0x6937EA2286828455(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_505(iVar0, 1805844857))
									{
										if (func_6(iLocal_71, 1, 1))
										{
											unk_0xF3268524E9BE6D6E(iVar0, unk_0x9539D44F3E4492F6(iLocal_71), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_493(Local_63.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]));
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 17, 1);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 6, 0);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(Local_63.f_10[iParam0 /*7*/]), 1, 0);
				}
				func_485(iVar0);
			}
		}
	}
}

void func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_66, 16))
	{
		iVar0 = Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_3;
		iVar1 = func_486(iVar0);
		if (iVar1 == 1)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 15);
			unk_0x0674E58A79778E99(&iLocal_66, 16);
			if (!func_51())
			{
				unk_0x6BCFB59E6D5AD205(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8064)
			{
				iVar0 = Global_262145.f_8064;
			}
			unk_0x6D80F1AEBA734886(iParam0, iVar0);
			unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x0674E58A79778E99(&iLocal_66, 15);
			unk_0x0674E58A79778E99(&iLocal_66, 16);
			unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_486(int iParam0)
{
	if (func_51())
	{
		if (func_489(iParam0))
		{
			if (func_488(iLocal_254) == 2)
			{
				unk_0x7A87D9FAFCB10ADC(func_487(iLocal_254));
				unk_0x6BCFB59E6D5AD205(iParam0, 0, 0);
				func_321(iLocal_254);
				return 1;
			}
			else
			{
				func_321(iLocal_254);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_487(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_488(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_489(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 15))
	{
		func_319(&iLocal_254, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_492(&uLocal_255, 0, 0);
		unk_0x5D96D8530B3D0904(&iLocal_66, 15);
	}
	else if (func_491(iLocal_254) || func_490(&uLocal_255, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_490(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_482(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_492(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

void func_493(var uParam0, bool bParam1)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		if (unk_0x526BC32A660C89E6(uParam0))
		{
			if (!func_494(uParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 13))
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(uParam0));
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(uParam0), 17, 1);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(uParam0), 6, 0);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(uParam0));
					}
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(uParam0), 6, 1);
					unk_0xAFF39FB306F8E232(unk_0x1B50683925F00106(uParam0), 1, 1);
				}
			}
		}
		func_244(&uParam0);
	}
}

int func_494(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

int func_495(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 1);
	}
	if (unk_0xE64AC821059A938D(iParam0))
	{
		iVar0 = unk_0x8B157DA177FBCF50(iParam0);
	}
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		if (func_506(iLocal_71))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iLocal_71), 1);
		}
	}
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (func_496(iVar0))
		{
			return 0;
		}
		if (unk_0xC8676198F2355F9F(iParam0) || unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar0)))
		{
			if (!unk_0x70EED0761B82965E(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x134B62B726CEC8E6(iVar0) == -1881846085)
		{
			return 0;
		}
	}
	return 1;
}

int func_496(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_497(vector3 vParam0)
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

var func_498(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_499(int iParam0)
{
	var uVar0;
	
	uVar0 = func_500(iParam0);
	return uVar0;
}

int func_500(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_296(iParam0))
		{
			return Global_1590535[iParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_501(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_502(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xA30B8362589C124A(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0xA30B8362589C124A(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_503(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_504(int iParam0)
{
	if ((!unk_0xEB6A8945D1AC98A1(iParam0) && !unk_0x15D0A3E61766C539(iParam0, 0)) && !unk_0x869EFD0BC0868856(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_505(int iParam0, int iParam1)
{
	if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (unk_0xFC697FBCBDCA38C5(iParam0))
	{
		return 0;
	}
	if (unk_0x0E0E6175453415CB(unk_0x9539D44F3E4492F6(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30F813723591D02E(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "AttributeDamage");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(iParam0, "AttributeDamage", iVar0);
}

void func_508()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 6);
	bVar1 = unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 10);
	func_513();
	if (iLocal_69 != 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 12))
		{
			func_510();
		}
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_78))
	{
		func_509(&iLocal_78);
	}
	iVar3 = 0;
	while (iVar3 < func_479(iLocal_69))
	{
		iLocal_67[iVar3] = 0;
		iVar3++;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_63.f_42 = -1;
		Local_63.f_5 = iLocal_74;
		Local_63.f_6 = iLocal_74;
		Local_63.f_7 = iLocal_74;
		Local_63.f_1 = 0;
		Local_63.f_4 = 0;
		Local_63.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_479(iLocal_69))
		{
			bVar2 = unk_0xEAE0D21A50E6C7F4(Local_63.f_10[iVar3 /*7*/].f_2, 6);
			Local_63.f_10[iVar3 /*7*/].f_2 = 0;
			Local_63.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0x5D96D8530B3D0904(&(Local_63.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1 = 0;
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_2 = -1;
	iLocal_66 = 0;
	if (bVar0)
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 6);
	}
	if (bVar1)
	{
		unk_0x5D96D8530B3D0904(&(Local_63.f_2), 11);
		unk_0x5D96D8530B3D0904(&iLocal_66, 8);
	}
	unk_0x5D96D8530B3D0904(&iLocal_66, 4);
	unk_0x5D96D8530B3D0904(&iLocal_66, 11);
}

void func_509(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = true;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_510()
{
	switch (iLocal_69)
	{
		case 0:
			func_512(&(Global_1575015[3]));
			break;
		
		case 1:
			func_511();
			break;
	}
}

void func_511()
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x0E2400AB9174FA81(3, Global_1574967[iVar0], -1467815081);
			unk_0x0E2400AB9174FA81(3, -1467815081, Global_1574967[iVar0]);
			iVar0++;
		}
	}
}

void func_512(var uParam0)
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0x0E2400AB9174FA81(3, Global_1574967[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(3, *uParam0, Global_1574967[iVar0]);
			iVar0++;
		}
	}
}

void func_513()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_479(iLocal_69))
	{
		bVar1 = false;
		if (iLocal_69 == 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_493(Local_63.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_514()
{
	func_515();
	if (iLocal_69 != 1)
	{
		func_483();
	}
}

void func_515()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_479(iLocal_69))
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_10[iVar0 /*7*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_63.f_10[iVar0 /*7*/]))
			{
				iVar1 = unk_0x1B50683925F00106(Local_63.f_10[iVar0 /*7*/]);
				if (!unk_0x437347B10A200C4B(iVar1, 0))
				{
					unk_0x9DD8618CA5BF832D(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_2537071.f_1703)
	{
	}
	if (iLocal_69 == 1)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
			{
				if (!unk_0xC77B2658E98CC4E5(uLocal_251))
				{
					if (func_6(iLocal_71, 1, 1))
					{
						if (Local_63.f_50)
						{
							unk_0x67FCD2DB807B4E58(15, unk_0x9539D44F3E4492F6(iLocal_71), 4, 0f, &uLocal_251, -1467815081, 0);
						}
						else if (Local_63.f_52)
						{
							unk_0x67FCD2DB807B4E58(16, unk_0x9539D44F3E4492F6(iLocal_71), 4, 0f, &uLocal_251, -1467815081, Local_63.f_53);
						}
						else
						{
							unk_0x67FCD2DB807B4E58(14, unk_0x9539D44F3E4492F6(iLocal_71), 4, 0f, &uLocal_251, 0, 0);
						}
					}
				}
				if (Global_2537071.f_1703)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1, 3))
					{
						unk_0x5D96D8530B3D0904(&(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_69 == 0)
	{
		if (Local_63.f_42 != -1)
		{
			if (unk_0xE5DBF9B6126856CA(Local_63.f_10[Local_63.f_42 /*7*/]))
			{
				if (!unk_0x437347B10A200C4B(unk_0x1B50683925F00106(Local_63.f_10[Local_63.f_42 /*7*/]), 0) && !func_519(unk_0x1B50683925F00106(Local_63.f_10[Local_63.f_42 /*7*/])))
				{
					if (Local_63.f_10[Local_63.f_42 /*7*/].f_5 == 3)
					{
						func_516(Local_63.f_10[Local_63.f_42 /*7*/], &iLocal_78, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0xE4EDC4B0E92C078B(iLocal_78))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 6))
							{
								unk_0xDC5B2F9D0CCE3A10(iLocal_78, "FM_MGR_BLP");
								unk_0x5D96D8530B3D0904(&iLocal_66, 6);
							}
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_78))
				{
					func_509(&iLocal_78);
				}
			}
			if (unk_0xD803B885F5E47A62() == iLocal_70)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 14))
				{
					if (func_374("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0x5D96D8530B3D0904(&iLocal_66, 14);
					}
				}
			}
		}
	}
}

void func_516(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		if (func_518())
		{
			Global_2439138 = unk_0xD803B885F5E47A62();
		}
		if (bParam3)
		{
			func_517(unk_0x1B50683925F00106(uParam0), iParam1, 1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_517(unk_0x1B50683925F00106(uParam0), iParam1, -1, Global_2439138, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam1))
	{
		func_509(iParam1);
	}
}

int func_517(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA29E145196B9739D(iParam0, 1);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 7);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_518()
{
	return Global_1312854;
}

int func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(iParam0, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0);
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x1E2DFB0EF4BB4566(iVar0, "MPBitset");
				}
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_520()
{
	return Local_63;
}

int func_521(int iParam0)
{
	return Local_65[iParam0 /*5*/];
}

void func_522()
{
	if (unk_0xD803B885F5E47A62() == iLocal_71)
	{
		if (Global_30918)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_76 /*5*/].f_1, 4))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[iLocal_76 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_65[iLocal_76 /*5*/].f_1), 4);
		}
	}
}

void func_523()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xD803B885F5E47A62() == iLocal_70)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1573339, 0))
		{
			unk_0x0674E58A79778E99(&Global_1573339, 0);
			bVar0 = true;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_65[iLocal_70 /*5*/].f_1, 2))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
			{
				unk_0x5D96D8530B3D0904(&(Local_65[iLocal_70 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 11))
		{
			unk_0x0674E58A79778E99(&(Local_65[iLocal_70 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 = func_527();
			func_524(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4);
		}
	}
	else if (Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 != Local_63.f_44)
	{
		Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4 = Local_63.f_44;
		func_524(Local_65[unk_0x6E61BE9E61434AC1() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_524(int iParam0)
{
	switch (iLocal_69)
	{
		case 0:
			func_526(&(Global_1575015[3]), iParam0);
			break;
		
		case 1:
			func_525(iParam0);
			break;
	}
}

void func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			unk_0x0E2400AB9174FA81(1, Global_1574967[iVar0], -1467815081);
			unk_0x0E2400AB9174FA81(1, -1467815081, Global_1574967[iVar0]);
		}
		else
		{
			unk_0x0E2400AB9174FA81(3, Global_1574967[iVar0], -1467815081);
			unk_0x0E2400AB9174FA81(3, -1467815081, Global_1574967[iVar0]);
		}
		iVar0++;
	}
}

void func_526(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam1, iVar0))
		{
			unk_0x0E2400AB9174FA81(1, Global_1574967[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(1, *uParam0, Global_1574967[iVar0]);
		}
		else
		{
			unk_0x0E2400AB9174FA81(3, Global_1574967[iVar0], *uParam0);
			unk_0x0E2400AB9174FA81(3, *uParam0, Global_1574967[iVar0]);
		}
		iVar0++;
	}
}

int func_527()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_69 == 1 || iLocal_69 == 0)
		{
			if (iLocal_70 == unk_0x117658E336116132(iVar1))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iVar1);
			}
		}
		else if (unk_0xD803B885F5E47A62() == unk_0x117658E336116132(iVar1))
		{
			unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		}
		else if (func_6(unk_0x117658E336116132(iVar1), 0, 1))
		{
			if (func_52(unk_0x117658E336116132(iVar1)))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_528()
{
	switch (iLocal_69)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 11))
			{
				if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
				{
					if (func_6(iLocal_71, 1, 1))
					{
						func_340("GC_TCK_60", iLocal_71, 0, 0, 0, 1, 0);
						unk_0x5D96D8530B3D0904(&iLocal_66, 11);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 12))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
				{
					if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (func_6(iLocal_71, 1, 1))
						{
							func_340("GC_TCK_62", iLocal_71, 0, 0, 0, 1, 0);
							unk_0x5D96D8530B3D0904(&iLocal_66, 12);
						}
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 10))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 8))
				{
					if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (func_6(iLocal_71, 1, 1))
						{
							func_340("GC_TCK_65", iLocal_71, 0, 0, 0, 1, 0);
							unk_0x5D96D8530B3D0904(&iLocal_66, 8);
						}
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 13))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 11))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 8))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_63.f_2, 6))
						{
							if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
							{
								if (func_6(iLocal_71, 1, 1))
								{
									func_340("GC_TCK_63", iLocal_71, 0, 0, 0, 1, 0);
									unk_0x5D96D8530B3D0904(&iLocal_66, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 11))
			{
				if (unk_0xD803B885F5E47A62() == iLocal_70)
				{
					if (func_6(iLocal_71, 1, 1) && unk_0xD803B885F5E47A62() != iLocal_71)
					{
						if (Local_63.f_50)
						{
							func_340("HS_SUCC", iLocal_71, 0, 0, 0, 1, 0);
						}
						else if (Local_63.f_52)
						{
							func_340("GO_ASS_SUCC", iLocal_71, 0, 0, 0, 1, 0);
						}
						else
						{
							func_340("GC_TCK_70", iLocal_71, 0, 0, 0, 1, 0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_66, 11);
					}
				}
				else if (unk_0xD803B885F5E47A62() == iLocal_71)
				{
					if (func_6(iLocal_70, 1, 1))
					{
						if (Local_63.f_50)
						{
							if (Local_63.f_51)
							{
								func_530("HS_A_SUCC");
							}
							else
							{
								func_340("HS_SENT", iLocal_70, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_63.f_52)
						{
							func_340("GO_ASS_SENT", iLocal_70, 0, 0, 0, 1, 0);
						}
						else
						{
							func_340("GC_TCK_71", iLocal_70, 0, 0, 0, 1, 0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_66, 11);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 10))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 6))
					{
						if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
						{
							if (func_6(iLocal_71, 0, 1))
							{
								func_529(-1);
								if (Local_63.f_50)
								{
									if (!Local_63.f_51)
									{
										func_340("HS_KILLED", iLocal_71, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_63.f_52)
								{
									func_340("GO_ASS_KILL", iLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_340("GC_TCK_73", iLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0x5D96D8530B3D0904(&iLocal_66, 10);
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, 9))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_63.f_1, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_63.f_3, 7))
					{
						if (unk_0xD803B885F5E47A62() == iLocal_70 && unk_0xD803B885F5E47A62() != iLocal_71)
						{
							if (func_6(iLocal_71, 0, 1))
							{
								if (Local_63.f_50)
								{
									func_340("HS_ESCAPED", iLocal_71, 0, 0, 0, 1, 0);
								}
								else if (Local_63.f_52)
								{
									func_340("GO_ASS_ESC", iLocal_71, 0, 0, 0, 1, 0);
								}
								else
								{
									func_340("GC_TCK_75", iLocal_71, 0, 0, 0, 1, 0);
								}
								unk_0x5D96D8530B3D0904(&iLocal_66, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_529(int iParam0)
{
	if (Global_1574401)
	{
		if (Global_1574405 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 148)
		{
			if (Global_1573902.f_14 == unk_0x117658E336116132(iParam0))
			{
				Global_1626581++;
			}
		}
		else
		{
			Global_1626581++;
		}
	}
}

int func_530(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x1E64CE678ED5F61E(sParam0);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_341(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_531()
{
	if (unk_0x9BFC2168CB5FCF68(false, 0) != Local_63.f_45)
	{
		if (func_539(Local_63.f_45, 0, 1))
		{
			if (unk_0xA108079788452A90(0) <= Local_63.f_45)
			{
				unk_0x0BEC04ECA8485A3A(Local_63.f_45);
			}
		}
	}
	if (unk_0x11225ACFD0C1477E(false, 0) != Local_63.f_46)
	{
		if (func_538(Local_63.f_45, 0, 1))
		{
			if (unk_0xA0FAF378D1CA33E8(0) <= Local_63.f_46)
			{
				unk_0x28E5F00F131890E3(Local_63.f_46);
			}
		}
	}
	if (unk_0xBF3DE18643F54472(false, 0) != Local_63.f_47)
	{
		if (func_532(Local_63.f_45, 0, 1))
		{
			if (unk_0x479CE2F0004FE5B7(0) <= Local_63.f_47)
			{
				unk_0x3A4967AE7C71F999(Local_63.f_47);
			}
		}
	}
}

bool func_532(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(2, iParam0, 1, bParam1, bParam2);
}

int func_533(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_537(iParam0) - func_536(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_535(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_536(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_537(iParam0) - func_536(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_534(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_536(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_209;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_210;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_2425662[iVar0 /*421*/].f_211;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

bool func_538(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(1, iParam0, 1, bParam1, bParam2);
}

bool func_539(int iParam0, bool bParam1, bool bParam2)
{
	return func_533(0, iParam0, 1, bParam1, bParam2);
}

void func_540()
{
	if (Local_63.f_50)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			func_542(9);
		}
		else if (unk_0xD803B885F5E47A62() == iLocal_71)
		{
			func_542(13);
		}
	}
	else if (Local_63.f_52)
	{
	}
	func_541();
}

void func_541()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_542(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_5), iParam0);
}

int func_543()
{
	var uVar0;
	
	func_550(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_549())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_548())
	{
		return 1;
	}
	if (func_547(159))
	{
		if (!func_546())
		{
			return 1;
		}
	}
	if (func_547(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_544() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_544()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_544()
{
	switch (func_120())
	{
		case 0:
			return func_545();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_545()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_546()
{
	return Global_2450632.f_598;
}

int func_547(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_548()
{
	return Global_2460680;
}

bool func_549()
{
	return Global_2450632.f_593;
}

void func_550(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_551(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar3, 4);
					if (vVar3.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_551(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_552(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_552(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_553()
{
	wait(0);
}

void func_554(struct<21> Param0)
{
	func_560(32, Param0);
	func_559(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_63, 56);
	unk_0x35B62793EAE9ADDF(&Local_65, 161);
	unk_0x256D93AFAE851A7A(0);
	if (!func_558())
	{
		func_261();
	}
	iLocal_69 = Param0.f_16;
	iLocal_70 = unk_0x117658E336116132(Param0.f_17);
	if (unk_0x40B8C182D63932FC(iLocal_70))
	{
	}
	iLocal_71 = unk_0x117658E336116132(Param0.f_18);
	if (unk_0x40B8C182D63932FC(iLocal_71))
	{
		iLocal_72 = unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(iLocal_71));
	}
	if (func_557(iLocal_70, 9) && iLocal_69 == 1)
	{
		Local_63.f_50 = 1;
		if (func_557(iLocal_71, 13))
		{
			Local_63.f_51 = 1;
		}
	}
	if (iLocal_69 == 1)
	{
		if (func_556(iLocal_70))
		{
			Local_63.f_52 = 1;
			Local_63.f_53 = func_555(iLocal_70);
		}
	}
	vLocal_73 = { Param0.f_10 };
	if (iLocal_69 == 1)
	{
		if (unk_0xD803B885F5E47A62() == iLocal_70)
		{
			unk_0x5D96D8530B3D0904(&Global_1573339, 0);
		}
	}
	Global_1653535 = 0;
	Global_1653536 = 0;
	if (iLocal_69 == 1)
	{
		Global_2537071.f_1703 = 0;
	}
	Local_65[unk_0x6E61BE9E61434AC1() /*5*/] = 0;
}

var func_555(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_183.f_4;
}

bool func_556(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_183 != func_13();
}

bool func_557(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_5, iParam1);
}

int func_558()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_549())
		{
			return 0;
		}
		if (func_547(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_559(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_541();
			}
			else
			{
				return 0;
			}
		}
		if (!func_518())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0;
					}
				}
				if (func_549())
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0;
					}
				}
				if (func_547(157))
				{
					if (!bParam2)
					{
						func_541();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_541();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_541();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_541();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_560(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_541();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

