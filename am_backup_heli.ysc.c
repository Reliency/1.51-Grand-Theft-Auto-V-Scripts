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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
	var uLocal_62 = 16;
	var uLocal_63 = 0;
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
	struct<2> Local_227 = { 0, 0 } ;
	var uLocal_228 = 745926877;
	var uLocal_229 = 0;
	var uLocal_230 = 3;
	var uLocal_231 = 0;
	var uLocal_232 = -839953400;
	var uLocal_233 = 0;
	var uLocal_234 = -839953400;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
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
	int iLocal_248[2] = { 0, 0 };
	struct<21> Local_249 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (unk_0x8CD06866876216F2())
	{
		func_112(ScriptParam_249);
	}
	while (true)
	{
		func_111();
		if (func_100())
		{
			func_96();
		}
		if (unk_0x8CD06866876216F2())
		{
			func_95();
			func_93();
			switch (func_92(unk_0x57270EE11514DC67()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_248[unk_0x57270EE11514DC67()] = 2;
					}
					break;
				
				case 2:
					func_59();
					if (func_91() == 3)
					{
						iLocal_248[unk_0x57270EE11514DC67()] = 3;
					}
					break;
				
				case 3:
					func_96();
					break;
			}
			if (unk_0xBFF81ED3B99522C7())
			{
				switch (func_91())
				{
					case 0:
						Local_227 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_227.f_1.f_2 == 5)
	{
		Local_227 = 3;
	}
	if (func_6(&(Local_227.f_1.f_19)))
	{
		if (func_4(&(Local_227.f_1.f_19), 20000, 0))
		{
			Local_227 = 3;
		}
	}
	if (func_3())
	{
		Local_227 = 3;
	}
	if (bLocal_48)
	{
		if (!unk_0x09BE1E6DF7B80B43())
		{
			Local_227 = 3;
		}
	}
	else if (unk_0x09BE1E6DF7B80B43())
	{
		Local_227 = 3;
	}
	if (func_2())
	{
		Local_227 = 3;
	}
}

bool func_2()
{
	return Global_1653538.f_3;
}

bool func_3()
{
	return Global_1312418;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_58(1);
			break;
		
		case 1:
			if (func_38())
			{
				if (func_25())
				{
					func_5(&(Local_227.f_1.f_17), 0, 0);
					func_58(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
			{
				func_58(3);
			}
			else
			{
				if (func_6(&(Local_227.f_1.f_17)))
				{
					if (func_4(&(Local_227.f_1.f_17), 120000, 0))
					{
						func_58(3);
					}
				}
				if (func_10(unk_0xD803B885F5E47A62(), 0))
				{
					func_58(3);
				}
				if (bLocal_52)
				{
					func_58(3);
				}
				if (func_8(unk_0xD803B885F5E47A62(), 136))
				{
					func_58(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_227.f_1))
			{
				if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					func_58(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_13(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_13(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14()
{
	if (Global_2439138.f_4008)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2439138.f_4007 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2439138.f_3891[iParam0] < iParam1)
	{
		Global_2439138.f_3891[iParam0] = iParam1;
	}
	unk_0x5D96D8530B3D0904(&(Global_2439138.f_3890), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_227.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0xC844350D5D58C99A(unk_0xB177666FAB6F4417(Local_227.f_1)))
	{
		func_24(&(Local_227.f_1));
		iLocal_56++;
	}
	if (func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (unk_0xE5DBF9B6126856CA(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (unk_0xE5DBF9B6126856CA(Local_227.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (unk_0xE5DBF9B6126856CA(Local_227.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_227.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x11225ACFD0C1477E(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x28E5F00F131890E3(iLocal_56);
		}
	}
	if (unk_0x9BFC2168CB5FCF68(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x0BEC04ECA8485A3A(iLocal_57);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)
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

int func_20(int iParam0)
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

int func_21(int iParam0, bool bParam1)
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

int func_22(int iParam0)
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

bool func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

int func_25()
{
	if (func_37(Local_227.f_1.f_1))
	{
		if (func_37(Local_227.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_227.f_1))
			{
				if (func_34(&(Local_227.f_1), Local_227.f_1.f_1, Local_227.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					unk_0x873BCADC75FF6D20(unk_0xB177666FAB6F4417(Local_227.f_1));
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_227.f_1), 1, 1, 0);
					unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_227.f_1));
					unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_227.f_1), 1);
					func_33(unk_0xB177666FAB6F4417(Local_227.f_1), 4);
					Global_2439138.f_4002 = unk_0xB177666FAB6F4417(Local_227.f_1);
					if (func_32(&(Local_227.f_1.f_3[0 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_227.f_1.f_3[0 /*2*/]);
						func_26(unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x6EBC49900DEAF9B9(unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]), unk_0xD803B885F5E47A62());
						func_33(unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]), 4);
						Global_2439138.f_4003[0] = unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_227.f_1.f_3[1 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_227.f_1.f_3[1 /*2*/]);
							func_26(unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x6EBC49900DEAF9B9(unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]), unk_0xD803B885F5E47A62());
							func_33(unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]), 4);
							Global_2439138.f_4003[1] = unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_227.f_1.f_3[2 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_227.f_1.f_3[2 /*2*/]);
								func_26(unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x6EBC49900DEAF9B9(unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]), unk_0xD803B885F5E47A62());
								func_33(unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]), 4);
								Global_2439138.f_4003[2] = unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x8B25B8DC6068152D(iParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xAFF39FB306F8E232(iParam0, 5, 1);
	unk_0xAFF39FB306F8E232(iParam0, 3, 0);
	unk_0x3CC33E4E9CE523F4(iParam0, 2);
	unk_0x083F03A847B640E9(iParam0, 1);
	unk_0xB35CCEC0D4946813(iParam0, 2);
	unk_0x26A6B1686E33113F(iParam0, 1);
	unk_0xB8AFFA077E15E999(iParam0, 1);
	unk_0x25C5402CC10F76CD(iParam0, true);
	unk_0x9FA191B317572861(iParam0, (fLocal_61[iParam1] + 100f));
	unk_0xB21189153A095FA1(iParam0, 400f);
	unk_0x67415F01577A142E(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x722454E43E496678(iParam0, 250);
			unk_0xD458AC1C1D29C3B4(iParam0, 250, 0);
			unk_0x0B42C743EF171FF5(iParam0, 250);
		}
	}
	else
	{
		unk_0xE121AE1BBF90E186(iParam0, 1);
	}
}

void func_27(var uParam0)
{
	int iVar0;
	
	if (!func_29(unk_0xD803B885F5E47A62(), 0, 0) && !func_28())
	{
		iVar0 = Global_1575015[5];
	}
	else
	{
		iVar0 = unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9());
	}
	unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(uParam0), iVar0);
}

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_30(iParam0))
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

bool func_30(int iParam0)
{
	return func_31(iParam0);
}

bool func_31(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
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

void func_33(int iParam0, int iParam1)
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

int func_34(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0;
	}
	if (!unk_0xE75B31D140F2F10B(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 1);
			}
			unk_0x120A395B0ECB8EA5(iVar1, iParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 1);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 1);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 1);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 5, 5, 1f);
			}
			func_35(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_36(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
	{
		if ((Global_2405072.f_2912[1 /*6*/].f_5 == iParam3 && Global_2405072.f_2912[1 /*6*/].f_4 == iParam2) && vdist(Global_2405072.f_2912[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0 /*6*/] = { Global_2405072.f_2912[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1 /*6*/] = { vParam0 };
		Global_2405072.f_2912[1 /*6*/].f_3 = fParam1;
		Global_2405072.f_2912[1 /*6*/].f_4 = iParam2;
		Global_2405072.f_2912[1 /*6*/].f_5 = iParam3;
	}
}

int func_36(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_38()
{
	vector3 vVar0;
	
	if (func_57(Local_227.f_1.f_10))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { func_55(func_56(unk_0xD803B885F5E47A62()), 0f, (-200f * sin((to_float(Local_227.f_1.f_15) * 30f))), (200f * cos((to_float(Local_227.f_1.f_15) * 30f))), 0f) };
				vVar0.z = unk_0x44488BFC08C50559(vVar0.x, vVar0.y);
				vVar0.z = (vVar0.z + 30f);
				if (func_39(vVar0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_227.f_1.f_10 = { vVar0 };
					return 1;
				}
				else
				{
					Local_227.f_1.f_15++;
					if (Local_227.f_1.f_15 >= 12)
					{
						Local_227.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_39(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_48(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_40(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_40(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_47(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_45(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_47(iVar1, 1, 1))
		{
			if (!func_42(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_41(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_45(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_41(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
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

int func_44()
{
	return Global_1312745;
}

Vector3 func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_46() && Global_1590535[iVar0 /*876*/].f_847) && !func_57(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_56(iParam0);
}

var func_46()
{
	return Global_2450632.f_17;
}

int func_47(int iParam0, bool bParam1, bool bParam2)
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

int func_48(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_47(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_41(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam7) && bParam4) && func_49(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_56(iVar1), vParam0, 1) < fParam1)
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

int func_49(int iParam0)
{
	if (func_54(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_53(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_50(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (!iVar0 == func_51())
	{
		if (iVar0 == func_52(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_51()
{
	return -1;
}

int func_52(int iParam0)
{
	if (iParam0 != func_51())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_51();
}

struct<13> func_53(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_54(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_53(iParam0) };
		Global_2513231 = { func_53(iParam1) };
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

Vector3 func_55(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

Vector3 func_56(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_57(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	Local_227.f_1.f_2 = iParam0;
}

void func_59()
{
	func_89();
	func_60();
}

void func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_227.f_1.f_2)
	{
		case 0:
			func_88();
			break;
		
		case 1:
			func_88();
			break;
		
		case 2:
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xB177666FAB6F4417(Local_227.f_1);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_47))
				{
					iLocal_47 = unk_0x5C3B41825F6AC5A0(iVar1);
					unk_0xBC8E0A7390523199(iLocal_47, 422);
					unk_0xF2D30B8ACAF12A39(iLocal_47, 0);
					unk_0xDC5B2F9D0CCE3A10(iLocal_47, "MPCT_MERRY3");
					func_86(&iLocal_47, 1);
				}
				if (func_85(Local_227.f_1))
				{
					if (unk_0x526BC32A660C89E6(Local_227.f_1))
					{
						if (func_84())
						{
							if (!unk_0x4FB7C089B48C0E76(iVar1))
							{
								unk_0xC6730DF337EA7449(iVar1, 1, 0);
							}
						}
						else if (unk_0x4FB7C089B48C0E76(iVar1))
						{
							unk_0xC6730DF337EA7449(iVar1, 0, 0);
						}
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						iVar2 = unk_0x8CB4A13C7BDA2B13(iVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_85(Local_227.f_1))
							{
								if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x11AD11297DC58CC7(iVar0, 1);
									func_26(iVar0, 0, 0, 0);
									unk_0x873BCADC75FF6D20(iVar1);
									unk_0x56FDC9ADE35F7DB0(iVar1, 1, 1, 0);
									if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
									{
										if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
										{
											unk_0x9AFA0796FDCABCD5(iVar0, iVar1, 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 23, 20f, 40f, -1f, ceil(fLocal_61[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (vdist(func_56(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_227.f_1), 1)) <= 50f)
							{
								func_62(&uLocal_62, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_227.f_1.f_3[1 /*2*/]))
				{
					iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0x4734A6196B611C3B(iVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_85(Local_227.f_1))
							{
								if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x11AD11297DC58CC7(iVar0, 0);
									func_26(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_227.f_1.f_3[2 /*2*/]))
				{
					iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0x4734A6196B611C3B(iVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_85(Local_227.f_1))
							{
								if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x11AD11297DC58CC7(iVar0, 0);
									func_26(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		
		case 3:
			func_88();
			if (!func_6(&(Local_227.f_1.f_19)))
			{
				func_5(&(Local_227.f_1.f_19), 0, 0);
			}
			if (func_12(Local_227.f_1))
			{
				iVar1 = unk_0xB177666FAB6F4417(Local_227.f_1);
				if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_85(Local_227.f_1))
						{
							if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[0 /*2*/]))
							{
								unk_0x11AD11297DC58CC7(iVar0, 0);
								unk_0xA3BF0AA5A2608191(iVar0);
								unk_0x6DF7BF67E86AAE86(iVar0, Global_1575000);
								if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
								{
									if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
									{
										unk_0x9AFA0796FDCABCD5(iVar0, iVar1, 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										unk_0xFADC0A217229F6B5(iVar0, 1);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]);
						if (func_85(Local_227.f_1))
						{
							if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[1 /*2*/]))
							{
								unk_0xA3BF0AA5A2608191(iVar0);
								unk_0x11AD11297DC58CC7(iVar0, 1);
								unk_0xFADC0A217229F6B5(iVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (vdist(func_56(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_227.f_1), 1)) <= 50f)
						{
							func_62(&uLocal_62, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]);
						if (func_85(Local_227.f_1))
						{
							if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[2 /*2*/]))
							{
								unk_0xA3BF0AA5A2608191(iVar0);
								unk_0x11AD11297DC58CC7(iVar0, 1);
								unk_0xFADC0A217229F6B5(iVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
			{
				func_61();
			}
			break;
		
		case 5:
			func_88();
			break;
	}
}

void func_61()
{
	int iVar0;
	
	if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
	{
		if (func_85(Local_227.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[0 /*2*/]))
			{
				iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]);
				unk_0xD458AC1C1D29C3B4(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
	{
		if (func_85(Local_227.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[1 /*2*/]))
			{
				iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[1 /*2*/]);
				unk_0xD458AC1C1D29C3B4(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
	{
		if (func_85(Local_227.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x526BC32A660C89E6(Local_227.f_1.f_3[2 /*2*/]))
			{
				iVar0 = unk_0x1B50683925F00106(Local_227.f_1.f_3[2 /*2*/]);
				unk_0xD458AC1C1D29C3B4(iVar0, 0, 0);
			}
		}
	}
}

int func_62(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_63(sParam2, iParam3, 0);
}

int func_63(char* sParam0, int iParam1, bool bParam2)
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
					func_82();
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
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_80();
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
				func_72();
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
				if (func_71())
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
			if (func_70())
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
			func_69();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_68();
		func_64();
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
		func_82();
	}
	return 0;
}

void func_64()
{
	if (!func_65())
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

int func_65()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_51())
	{
		return 0;
	}
	if (func_66(unk_0xD803B885F5E47A62()))
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

bool func_66(int iParam0)
{
	return func_67(iParam0, 20);
}

bool func_67(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

void func_68()
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

void func_69()
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

int func_70()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()
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

void func_72()
{
	if (func_79(14))
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
		Global_19486 = func_73();
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

var func_73()
{
	func_74();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_74()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_77(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_76(unk_0x16F2683693E537C9());
			if (func_75(iVar0) && (!func_79(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_75(Global_111638.f_2358.f_539.f_4321))
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

bool func_75(int iParam0)
{
	return iParam0 < 3;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_78(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_79(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_80()
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

bool func_81(int iParam0, int iParam1)
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

void func_82()
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

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_84()
{
	if (unk_0xD8A54335F18763BA() >= 22)
	{
		return 1;
	}
	if (unk_0xD8A54335F18763BA() <= 6 && unk_0xD8A54335F18763BA() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_85(var uParam0)
{
	if (unk_0x83F012E6200426DB(uParam0))
	{
		return 1;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0x8D30F6387EE75385(uParam0);
	}
	return 0;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_87(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_88()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_47))
	{
		unk_0x142CC44DB769B57E(&iLocal_47);
	}
}

void func_89()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
		{
			func_90(&uLocal_62, 3, unk_0x1B50683925F00106(Local_227.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_91()
{
	return Local_227;
}

int func_92(int iParam0)
{
	return iLocal_248[iParam0];
}

void func_93()
{
	bool bVar0;
	vector3 vVar1;
	
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_59))
	{
		func_5(&uLocal_59, 0, 0);
	}
	else if (func_4(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		vVar1 = { func_56(unk_0xD803B885F5E47A62()) };
		fLocal_58 = unk_0x44488BFC08C50559(vVar1.x, vVar1.y);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_94(&uLocal_59);
	}
}

void func_94(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_95()
{
}

void func_96()
{
	var uVar0;
	var uVar1;
	
	Global_2439138.f_4002 = uVar0;
	Global_2439138.f_4003[0] = uVar1;
	Global_2439138.f_4003[1] = uVar1;
	Global_2439138.f_4003[2] = uVar1;
	Global_2439138.f_4007 = 0f;
	Global_2439138.f_4008 = 0;
	func_98(func_99(1, 1), 10, func_51());
	func_97();
}

void func_97()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_98(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -770184899;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 6, iParam0);
	}
}

int func_99(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_47(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_42(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_100()
{
	var uVar0;
	
	func_108(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_107())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	if (func_105(159))
	{
		if (!func_104())
		{
			return 1;
		}
	}
	if (func_105(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_101() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_101()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	switch (func_103())
	{
		case 0:
			return func_102();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_102()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_103()
{
	return Global_30768;
}

bool func_104()
{
	return Global_2450632.f_598;
}

int func_105(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_2460680;
}

bool func_107()
{
	return Global_2450632.f_593;
}

void func_108(var uParam0)
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
					func_109(iVar0);
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

void func_109(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_47(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_110(iVar2, &bVar3))
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

int func_110(int iParam0, var uParam1)
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

void func_111()
{
	wait(0);
}

void func_112(struct<21> Param0)
{
	func_118(func_119(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(3);
	unk_0x28E5F00F131890E3(1);
	func_116(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_227, 22);
	unk_0x35B62793EAE9ADDF(&iLocal_248, 3);
	unk_0x256D93AFAE851A7A(0);
	if (!func_115())
	{
		func_96();
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		bLocal_48 = true;
	}
	func_113(62, 1);
	iLocal_248[unk_0x57270EE11514DC67()] = 0;
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_114() /*10930*/].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_114() /*10930*/].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_114() /*10930*/].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_114() /*10930*/].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_114() /*10930*/].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_114() /*10930*/].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_114() /*10930*/].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_114() /*10930*/].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_114() /*10930*/].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_114() /*10930*/].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_114() /*10930*/].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_114() /*10930*/].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_114() /*10930*/].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_114() /*10930*/].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_114() /*10930*/].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_114() /*10930*/].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_114() /*10930*/].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_114() /*10930*/].f_6174.f_30 = iVar0;
			break;
	}
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_115()
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
		if (func_107())
		{
			return 0;
		}
		if (func_105(157))
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

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
		if (!func_117())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_107())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_105(157))
				{
					if (!bParam2)
					{
						func_97();
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
					func_97();
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
				func_97();
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
			func_97();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_117()
{
	return Global_1312854;
}

void func_118(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_97();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

