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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	struct<4> Local_73 = { 0, 0, 0, 0 } ;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 32;
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
	var uLocal_113 = 32;
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
	int iLocal_149 = 0;
	vector3 vLocal_150[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 16;
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
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	bool bLocal_321 = 0;
	bool bLocal_322 = 0;
	int iLocal_323 = 0;
	char* sLocal_324 = NULL;
	int iLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	struct<21> Local_335 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	bLocal_322 = true;
	sLocal_324 = "MP_INTRO_MCS_13";
	func_232(ScriptParam_335);
	while (true)
	{
		func_231();
		if (func_221())
		{
			func_217();
		}
		func_212(&Global_1661963);
		switch (func_211(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_210() == 2)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 2;
				}
				else if (func_210() == 6)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_210() == 2)
				{
					if (!func_209(unk_0xD803B885F5E47A62()))
					{
						func_19();
					}
					else if (unk_0xE4EDC4B0E92C078B(Global_1661963))
					{
						func_12();
						unk_0x661342B9651D16E2(Global_1661963, 0);
						unk_0x142CC44DB769B57E(&Global_1661963);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 3))
						{
							unk_0x5C8D148FC238F38A();
						}
						unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
					}
					if (func_8(unk_0xD803B885F5E47A62()))
					{
						vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 3;
						Global_2537071.f_1717 = 0;
					}
				}
				else if (func_210() == 6)
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_73.f_3));
				if (func_5(&(Local_73.f_3)))
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_150[unk_0x57270EE11514DC67() /*3*/] = 6;
			
			case 6:
				func_217();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_210())
			{
				case 0:
					Local_73.f_2 = -1;
					Local_73 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_73 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (unk_0xBFF81ED3B99522C7())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_149 == 0)
		{
			unk_0x0674E58A79778E99(&iLocal_323, 0);
			unk_0x5D96D8530B3D0904(&iLocal_323, 1);
			if (Local_73.f_2 != -1)
			{
				if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_2)))
				{
					Local_73.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_149;
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[iLocal_149 /*3*/].f_2, 0))
			{
				unk_0x0674E58A79778E99(&iLocal_323, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_150[iLocal_149 /*3*/].f_2, 1))
				{
					unk_0x5D96D8530B3D0904(&iLocal_323, 12);
					if (Local_73.f_2 == -1)
					{
						if (Local_73.f_2 != iLocal_149)
						{
							Local_73.f_2 = iLocal_149;
						}
					}
				}
				else if (Local_73.f_2 == iLocal_149)
				{
					Local_73.f_2 = -1;
				}
			}
		}
		iLocal_149++;
		if (iLocal_149 == 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 1))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 12))
			{
				if (Local_73.f_2 != -1)
				{
					Local_73.f_2 = -1;
				}
			}
			unk_0x5D96D8530B3D0904(&iLocal_323, 0);
			iLocal_149 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
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

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

int func_8(int iParam0)
{
	if (func_11(iParam0))
	{
		return 1;
	}
	if (func_9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_12()
{
	if (!func_18())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_13();
}

void func_13()
{
	func_15();
	func_14(0);
}

void func_14(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_15()
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_16();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_16()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_1312585.f_52);
			unk_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_57);
			unk_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			unk_0x3A820E495A7BA3E5(Global_1312585.f_56);
			unk_0x6B012227B3921E18(&(Global_1312585.f_48));
			unk_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_17()
{
	if (!func_18())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_16();
	return unk_0xB165082A56EE6E7F();
}

int func_18()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	int iVar0;
	
	switch (vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 5))
				{
					if (!func_208())
					{
						if (!func_207())
						{
							if (!func_205())
							{
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
								{
									if (!func_204(0))
									{
										if (!func_201(unk_0xD803B885F5E47A62(), 1, 0))
										{
											if (!func_200())
											{
												if (func_199() == 0)
												{
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
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 5))
			{
				if (((((func_201(unk_0xD803B885F5E47A62(), 1, 0) || func_200()) || func_199() > 0) || func_198()) || func_196()) || func_195())
				{
					unk_0x5D96D8530B3D0904(&iLocal_323, 5);
					func_12();
					if (unk_0xE4EDC4B0E92C078B(Global_1661963))
					{
						unk_0x661342B9651D16E2(Global_1661963, 0);
						unk_0x142CC44DB769B57E(&Global_1661963);
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(Global_1661963))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 14))
						{
							if (Local_73.f_2 != -1)
							{
								if (Local_73.f_2 != unk_0x57270EE11514DC67())
								{
									unk_0x61755AC17D8F538E(Global_1661963, 39);
									unk_0x516E63E474722206(Global_1661963, 0.7f);
									unk_0x5D96D8530B3D0904(&iLocal_323, 14);
								}
							}
						}
						else if (Local_73.f_2 == -1 || Local_73.f_2 == unk_0x57270EE11514DC67())
						{
							unk_0x61755AC17D8F538E(Global_1661963, 0);
							unk_0x516E63E474722206(Global_1661963, 1f);
							unk_0x0674E58A79778E99(&iLocal_323, 14);
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 8))
					{
						unk_0x0674E58A79778E99(&iLocal_323, 8);
					}
					if (func_194())
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if ((bLocal_321 && unk_0x62A1F4500E8F07E0()) || !bLocal_321)
							{
								if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 1))
								{
									unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
								}
								if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 1))
								{
									if (Local_73.f_2 == unk_0x57270EE11514DC67())
									{
										func_12();
										if (unk_0xE4EDC4B0E92C078B(Global_1661963))
										{
											unk_0x661342B9651D16E2(Global_1661963, 0);
											unk_0x142CC44DB769B57E(&Global_1661963);
										}
										unk_0xA37A90C62806D848(1);
										func_193(12, 1);
										func_191();
										unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
										unk_0x5D96D8530B3D0904(&iLocal_323, 25);
										unk_0x536F1BE96C726C4B(1274.854f, -1721.154f, 53.6808f, 2f, 1, 0, 0, true);
										if (bLocal_322)
										{
											func_190();
											uLocal_331 = unk_0xB01F55A0FD1CFD49("SECURITY_CAM");
										}
										vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 1;
									}
									else if (Local_73.f_2 != -1)
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 13))
										{
											if (func_184(1, 1, 1, 1))
											{
												func_183("FM_LCUT_LRB", -1);
												unk_0x5D96D8530B3D0904(&iLocal_323, 13);
											}
										}
									}
								}
							}
						}
						else if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (!func_182("FM_LCUT_LCP"))
							{
								func_183("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 9))
						{
							if (func_184(0, 1, 1, 1))
							{
								if (!func_198())
								{
									func_183("FM_LCUT_LBLP", -1);
									if (!unk_0xE4EDC4B0E92C078B(Global_1661963))
									{
										Global_1661963 = unk_0x6CC513A908911CF0(Global_1661964);
										unk_0xBC8E0A7390523199(Global_1661963, 77);
										unk_0xF412DD40DE84CE72(Global_1661963, 1);
										unk_0x0EC848EFF66DF45A(Global_1661963, 7000);
									}
									unk_0x5D96D8530B3D0904(&iLocal_323, 2);
									unk_0x5D96D8530B3D0904(&iLocal_323, 9);
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 1))
						{
							unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 13))
						{
							unk_0x0674E58A79778E99(&iLocal_323, 13);
						}
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x0F1CCD77290EE12F())
					{
						if ((((!func_201(unk_0xD803B885F5E47A62(), 1, 0) && !func_200()) && func_199() == 0) && !func_198()) && !func_196())
						{
							if (!func_181(&uLocal_326))
							{
								func_7(&uLocal_326, 0, 0);
							}
							else if (func_180(&uLocal_326, 10, 0))
							{
								unk_0x0674E58A79778E99(&iLocal_323, 5);
								unk_0x0674E58A79778E99(&iLocal_323, 2);
								unk_0x0674E58A79778E99(&iLocal_323, 3);
								unk_0x0674E58A79778E99(&iLocal_323, 8);
								func_179(&uLocal_326);
								if (!unk_0xE4EDC4B0E92C078B(Global_1661963))
								{
									Global_1661963 = unk_0x6CC513A908911CF0(Global_1661964);
									unk_0xBC8E0A7390523199(Global_1661963, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_321)
			{
			}
			break;
		
		case 1:
			if (bLocal_321)
			{
				if (func_178())
				{
					vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 2;
				}
			}
			else if (func_138())
			{
				vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_83())
			{
				vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
			}
			break;
	}
	if (func_82())
	{
		if (unk_0xE4EDC4B0E92C078B(Global_1661963))
		{
			unk_0x142CC44DB769B57E(&Global_1661963);
		}
		func_12();
		iVar0 = Global_1388048[func_81(-1)];
		unk_0x5D96D8530B3D0904(&iVar0, 2);
		unk_0x5D96D8530B3D0904(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
		func_80(1303, iVar0, -1, 1);
		func_193(12, 0);
		if (bLocal_321)
		{
			unk_0x5C8D148FC238F38A();
		}
		func_71();
		func_20(1);
	}
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312448)
	{
		if (!func_70())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574637[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_67(unk_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_65(iVar1, bParam0);
	if (!func_64(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574637[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574637[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_63(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_61(iVar4))
			{
				func_53(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_47(func_48(59, 0, 0), 0);
	func_42(func_48(135, 0, 0), 1);
	func_40(func_48(22, 0, 0), func_48(73, 0, 0));
	if (func_70())
	{
		if (func_39(77, -1))
		{
			func_38(1);
			func_37(1);
		}
	}
	if (func_36() || func_35())
	{
		func_33(77, 1, -1, 1);
		if (unk_0x8CD06866876216F2())
		{
			func_21(28, 1, 0);
			func_21(29, 1, 0);
			func_21(30, 1, 0);
			func_21(31, 1, 0);
			func_21(32, 1, 0);
			func_21(33, 1, 0);
			func_21(34, 1, 0);
			func_21(35, 1, 0);
			func_21(36, 1, 0);
			func_21(37, 1, 0);
			func_21(38, 1, 0);
		}
	}
	if (func_48(21, 0, 0))
	{
		unk_0x0F30FBDF741A7E3E(0);
	}
	Global_968399 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0, 0);
				func_23(iParam0, 1, 0);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 1, 0);
			func_22(iParam0);
		}
	}
	else if (func_32(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_23(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_81(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_27()
{
	return Global_30768;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_29(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_28(iParam0, 10, 1);
		func_28(iParam0, 19, 1);
	}
}

bool func_30(int iParam0)
{
	return func_32(iParam0, 5, 1);
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_27() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_25(func_26(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_81(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_34()
{
	return 1;
	return 0;
}

bool func_35()
{
	return Global_1312865;
}

bool func_36()
{
	return Global_1312867;
}

void func_37(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
}

void func_38(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_21(29, bParam0, 0);
	func_21(32, bParam0, 0);
	func_21(36, bParam0, 0);
	func_21(35, bParam0, 0);
	func_21(37, bParam0, 0);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2583656[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_21(0, bParam0, 1);
	func_21(1, bParam0, 1);
	func_21(2, bParam0, 1);
	func_21(3, bParam0, 1);
	func_21(4, bParam0, 1);
	func_21(5, bParam0, 1);
	func_21(6, bParam0, 1);
	func_21(7, bParam0, bVar0);
	func_21(8, bParam0, 1);
	func_21(9, bParam0, 1);
	func_21(10, bParam0, 1);
	func_21(11, bParam0, 1);
	func_21(12, bParam0, bVar0);
	func_21(13, bParam0, 1);
	func_21(21, bParam0, 1);
	func_21(14, bParam0, 1);
	func_21(15, bParam0, 1);
	func_21(16, bParam0, 1);
	func_21(17, bParam0, 1);
	func_21(18, bParam0, 1);
	func_21(19, bParam0, 1);
	func_21(20, bParam0, 1);
	func_21(22, bParam0, 1);
	func_21(23, bParam0, 1);
	func_21(24, bParam0, 1);
	func_21(25, bParam0, 1);
	func_21(26, bParam0, 1);
	func_21(27, bParam0, 1);
	func_41(1, !bParam1);
	if (!bVar0)
	{
		func_29(12);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98796.f_9[iParam0] = 1;
	}
	else
	{
		Global_98796.f_9[iParam0] = 0;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_46(0);
	if (Global_262145.f_63 == 1 && func_48(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(44))
		{
			func_29(44);
		}
	}
	if (bParam0)
	{
		if (func_43(0) > 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_1735), 10);
		}
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (Global_1671743[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_45(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_44(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0 /*8*/] = iVar0;
	}
	return Global_1671743[iParam0 /*8*/];
}

void func_44(int iParam0, int iParam1)
{
	Global_1671743[iParam0 /*8*/] = iParam1;
	func_24(func_45(iParam0), iParam1, -1, 1, 0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

int func_46(bool bParam0)
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1726, 26))
		{
			iVar0 = func_25(1191, -1, 0);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_39(122, -1);
}

void func_47(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_46(0);
	func_21(39, bParam0, 0);
	func_21(40, bParam0, 0);
	func_21(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(43, bParam0, 0);
		func_21(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(39))
		{
			func_29(39);
		}
		if (!func_30(40))
		{
			func_29(40);
		}
		if (!func_30(41))
		{
			func_29(41);
		}
		if (!func_30(42))
		{
			func_29(42);
		}
		if (!func_30(43))
		{
			func_29(43);
		}
	}
}

bool func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_50(unk_0xD803B885F5E47A62(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_49())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1574637[iVar1], iVar0);
}

int func_49()
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 23))
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_81(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_70())
	{
		return 0;
	}
	if (func_52())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_730, iVar1);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_52()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_60(-1))
			{
				if (!func_70())
				{
					return;
				}
			}
			if (!func_60(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_59() && !func_58())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_57())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_60(-1))
				{
					if (!func_54())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		unk_0x5D96D8530B3D0904(&(Global_1574637[iVar1]), iVar0);
	}
}

int func_54()
{
	int iVar0;
	
	if (func_209(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_81(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 2))
	{
		func_55(1);
		return 1;
	}
	return 0;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 25))
		{
			func_56(unk_0xD803B885F5E47A62(), 12);
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 25);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 25))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 25);
	}
}

void func_56(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_51(iParam1);
	iVar1 = uVar0;
	unk_0x5D96D8530B3D0904(&(Global_1590535[iParam0 /*876*/].f_730), iVar1);
}

int func_57()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_81(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 6);
		}
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_146, 7);
}

int func_59()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(121, -1);
}

bool func_60(int iParam0)
{
	return func_39(123, iParam0);
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_25(func_62(iParam0), -1, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_63(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_60(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_64(int iParam0)
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(119, iParam0);
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0, 0);
}

int func_66(int iParam0, int iParam1)
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

int func_67(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_68(iParam0);
}

int func_68(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_81(-1)];
			}
			else if (func_69(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_81(-1)];
	}
	return 0;
}

int func_69(int iParam0)
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

int func_70()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(120, -1);
}

void func_71()
{
	if (!func_79(1, -1))
	{
		func_77(1, -1);
	}
	if (func_198() && func_27() == 0)
	{
	}
	else
	{
		unk_0x45019D71A0DF8B62(0);
	}
	if (func_76(1))
	{
		unk_0xED41266DE64A57FD(1);
	}
	else
	{
		unk_0xED41266DE64A57FD(0);
	}
	Global_2450632.f_643 = 0;
	if (func_72())
	{
		if (!func_39(133, -1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_72()
{
	if (func_74() && func_73(0))
	{
		return 1;
	}
	return 0;
}

var func_73(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_74()
{
	return func_73(func_75() + 1);
}

int func_75()
{
	return Global_1312745;
}

bool func_76(int iParam0)
{
	return Global_1662155.f_16[iParam0 /*44*/].f_3;
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	Global_1387909 = 0;
	if (unk_0xE0DC536BD2AC0301() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD5F10CECBB7D51B6(0, iParam1);
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			break;
		
		default:
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			func_33(121, 0, iParam1, 1);
			func_33(122, 0, iParam1, 1);
			func_33(125, 0, iParam1, 1);
			func_24(1303, 0, iParam1, 1, 0);
			func_24(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_75();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	iVar0 = func_78(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_81(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_81(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_81(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_81(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_81(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_81(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_81(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_81(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_81(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_81(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_81(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_81(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_81(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_81(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_81(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_81(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_81(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_81(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_81(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_81(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_81(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_81(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_81(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_75();
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

int func_82()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	switch (iLocal_151)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 18))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
				{
					iLocal_325 = unk_0x5C3B41825F6AC5A0(iLocal_152);
					unk_0x321E019A46034F39(iLocal_325, true);
					unk_0xDC5B2F9D0CCE3A10(iLocal_325, "FM_LEST_BLP");
					func_132("FM_LEST_GTL", 0);
					unk_0x5D96D8530B3D0904(&iLocal_323, 18);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 20))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1272.747f, -1715.223f, 53.45897f, 1273.732f, -1717.427f, 55.70897f, 2f, 0, 1, 0))
						{
							iLocal_155 = unk_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							unk_0x915804B434753CBD(iLocal_152, iLocal_155, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1148846080, 0);
							unk_0xE14EC663EED44AD5(iLocal_154, iLocal_155, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1148846080);
							unk_0x5D96D8530B3D0904(&iLocal_323, 20);
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 3))
			{
				unk_0xAE1670DD12E839C3(sLocal_324, 8);
				unk_0x5D96D8530B3D0904(&iLocal_323, 3);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 10))
			{
				if (unk_0x75EECC9B0572F772())
				{
					unk_0xCB667BE6562FEBD1("MP_1", 0, 1);
					unk_0x5D96D8530B3D0904(&iLocal_323, 10);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1275.095f, -1715.769f, 53.70897f, 1274.382f, -1714.219f, 56.02147f, 1.375f, 0, 1, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 10))
					{
						iLocal_151++;
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x62A1F4500E8F07E0())
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == joaat("mp_f_freemode_01"))
					{
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0, 0, 64);
					}
					else
					{
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0, 0, 64);
					}
				}
				func_131(1);
				unk_0x4C902758BEA97C68(0);
				unk_0x7F2C3F971FA7A9EA(0);
				func_122(unk_0xD803B885F5E47A62(), 0, 32772, 0);
				func_118(0);
				iLocal_151++;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				func_114();
				iLocal_151++;
			}
			break;
		
		case 3:
			if (unk_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_151++;
			}
			break;
		
		case 4:
			if (iLocal_329)
			{
				if (!unk_0x39B7A3CCD2467CAB())
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(500);
					}
					iLocal_329 = 0;
				}
			}
			else if (unk_0x154B5473FBFD0156())
			{
				func_86(1, 1, 0, 1);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x7F2C3F971FA7A9EA(1);
				if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 25))
				{
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
				}
				if (iLocal_328 != 0)
				{
					unk_0x25BB71BA267FE042(iLocal_328);
				}
				unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
				func_84();
				iLocal_151++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 11))
	{
		if (unk_0x3148AE92ED70DC30("MP_1", 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 228.4235f);
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), false, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x5D96D8530B3D0904(&iLocal_323, 11);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 26))
	{
		if (iLocal_151 > 2)
		{
			if (unk_0xEABED1927EFB48CA(0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x5D96D8530B3D0904(&iLocal_323, 26);
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 19))
	{
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		unk_0x38C3A68D7861DCFD(0, 14, 1);
		unk_0x38C3A68D7861DCFD(0, 15, 1);
	}
	return 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = func_85(53);
	Global_2414418[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_86(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_111();
	if (bParam0)
	{
		func_109(1);
		unk_0xA37A90C62806D848(1);
	}
	unk_0x790015DC92C918E2();
	func_106();
	unk_0x4DC7B72197441408(0);
	func_102(0, 1, 1, 0, 0, bParam2);
	func_101();
	func_100(12, 0, -1);
	func_99(1);
	unk_0x5413873D3F67BF93(0, -1);
	unk_0xBFE31971E49FA500(1);
	unk_0x8BCB70EB440DED83(1);
	func_98();
	unk_0xBEF52C1D400C0A44(1);
	if (unk_0x8CD06866876216F2())
	{
		if (bParam3)
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0xF601BB024C8F11A7(0, 0);
			}
		}
	}
	func_131(0);
	if (((((func_198() == 0 && func_97() == 0) && iParam1) && !func_95(unk_0xD803B885F5E47A62())) && !unk_0xEB880D98B5988D0C()) && func_93())
	{
		func_122(unk_0xD803B885F5E47A62(), 1, 0, 0);
	}
	Global_2439138.f_3747 = 0;
	func_87();
}

void func_87()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8CD06866876216F2() && func_181(&Global_2546022))
	{
		if (!func_180(&Global_2546022, 3500, 1) || unk_0xFD59EF2472AF72AF(unk_0xD803B885F5E47A62()))
		{
			if (!func_92())
			{
				if (unk_0x757EF87A33649210())
				{
					func_91(&Global_2546022, 1, 0);
				}
				else if (!func_89(unk_0xD803B885F5E47A62(), 0))
				{
					if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1992968846) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 1992968846) != 0)
					{
						unk_0x946CEAB3EE0FE12A(1);
						unk_0x0ADC5FFEF2329036(unk_0xD803B885F5E47A62(), 1);
					}
					unk_0x4FB9A846E72E2F23(unk_0x16F2683693E537C9(), 255, 0);
				}
			}
			else
			{
				func_91(&Global_2546022, 1, 0);
			}
		}
		else
		{
			if (unk_0x8CD06866876216F2())
			{
				unk_0x672BED15BAF1B335(unk_0x16F2683693E537C9());
			}
			func_179(&Global_2546022);
		}
	}
	if (Global_2546026 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2546026, iVar0))
			{
				iVar1 = unk_0x117658E336116132(iVar0);
				if (func_4(iVar1, 1, 1))
				{
					func_88(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_88(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2546026, iParam0) && unk_0x8CD06866876216F2())
	{
		if (!func_180(&(Global_2546027[iParam0 /*2*/]), 3500, 1) || unk_0xFD59EF2472AF72AF(iParam0))
		{
			if (!func_92())
			{
				if (unk_0x757EF87A33649210())
				{
					func_91(&(Global_2546027[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_89(iParam0, 0))
				{
					unk_0x0ADC5FFEF2329036(iParam0, 1);
					if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
					{
						unk_0x4FB9A846E72E2F23(unk_0x9539D44F3E4492F6(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_91(&(Global_2546027[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				unk_0x672BED15BAF1B335(unk_0x9539D44F3E4492F6(iParam0));
			}
			func_179(&(Global_2546027[iParam0 /*2*/]));
			unk_0x0674E58A79778E99(&Global_2546026, iParam0);
		}
	}
}

bool func_89(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_90(-1, 0) == 8;
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_75();
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

void func_91(var uParam0, bool bParam1, bool bParam2)
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

int func_92()
{
	if (unk_0x22A8E52414415B76() || unk_0xF929B1A0A409FF93())
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_1312467.f_18;
}

int func_95(int iParam0)
{
	if (func_89(iParam0, 0))
	{
		return 1;
	}
	if (func_96())
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

bool func_96()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_97()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 7);
}

void func_98()
{
	Global_22211.f_5 = 0;
}

void func_99(int iParam0)
{
	Global_2537071.f_4531 = iParam0;
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377170.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1377170.f_1046), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1377170.f_1046), iParam0);
			}
			break;
	}
}

void func_101()
{
	func_99(1);
	func_100(4, 0, -1);
	func_100(6, 0, -1);
	func_100(7, 0, -1);
	func_100(3, 0, -1);
	func_100(1, 0, -1);
	func_100(2, 0, -1);
	func_100(11, 0, -1);
	func_100(13, 0, -1);
	func_100(14, 0, -1);
	func_100(16, 0, -1);
}

void func_102(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_131(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_105())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_104(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_131(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_104(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_95(unk_0xD803B885F5E47A62())) && !func_89(unk_0xD803B885F5E47A62(), 0)) && !func_103()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_95(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_103()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_104(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_105()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	func_107(0);
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		func_108();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_204(0))
		{
			func_118(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_108()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110290)
	{
		unk_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_110(iVar0);
		iVar0++;
	}
}

void func_110(int iParam0)
{
	Global_110290[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110290[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110290[iParam0 /*28*/].f_4), "", 64);
	Global_110290[iParam0 /*28*/].f_23 = 0;
	Global_110290[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110290[iParam0 /*28*/].f_27 = 0;
	Global_110290[iParam0 /*28*/].f_20 = 0;
	Global_110290[iParam0 /*28*/].f_22 = 0;
}

void func_111()
{
	if (!Global_1312575)
	{
		return;
	}
	func_112();
}

void func_112()
{
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
}

void func_113()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 346, 1);
		if (unk_0x5B99ACBBF316951B(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
			{
			}
		}
	}
}

void func_114()
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_325))
	{
		unk_0x142CC44DB769B57E(&iLocal_325);
	}
	if (unk_0xC844350D5D58C99A(iLocal_152))
	{
		iVar0 = iLocal_152;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	if (unk_0xC844350D5D58C99A(iLocal_154))
	{
		iVar0 = iLocal_154;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	func_12();
	unk_0x71199B01895C6202(func_115(12));
	unk_0x71199B01895C6202(joaat("prop_wheelchair_01_s"));
	unk_0x8D17794CE3273D70("missfinale_c2leadinoutfin_c_int");
}

int func_115(int iParam0)
{
	if (!func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_116(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_117(int iParam0)
{
	return iParam0 < 3;
}

void func_118(int iParam0)
{
	if (func_121())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_120())
		{
			func_119(1, 1);
		}
		else
		{
			func_119(0, 0);
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
	if (!func_105())
	{
		Global_19486.f_1 = 3;
	}
}

void func_119(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_204(0))
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

bool func_120()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_121()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_122(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_130())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_93())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_89(unk_0xD803B885F5E47A62(), 0) && !func_96()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_2425662[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_127(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_126(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_125();
					func_124();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_2425662[iParam0 /*421*/].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_126(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 1);
						}
					}
					if (func_123(Global_4456448.f_232883))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_123(int iParam0)
{
	return iParam0 == 17;
}

void func_124()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_125()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_129();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 1);
			}
		}
		if (func_89(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_128(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_129()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 2);
			unk_0x5D96D8530B3D0904(&(Global_2359302.f_67), 0);
		}
	}
}

int func_130()
{
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_132(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_136(sParam0))
	{
		return;
	}
	func_13();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_135();
	func_134(bParam1);
	func_133();
}

void func_133()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_135()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

bool func_136(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_137(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_137(char* sParam0)
{
	if (!func_18())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

int func_138()
{
	switch (iLocal_330)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 25))
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), true);
				unk_0x5D96D8530B3D0904(&iLocal_323, 25);
			}
			if (unk_0x83D8570832F172A7(uLocal_331) && func_190())
			{
				func_171();
				func_170();
				func_167(0, 0, 1, 0, 1, 1, 0);
				func_122(unk_0xD803B885F5E47A62(), 0, 8196, 0);
				unk_0xB5EB44E161D3DCB8(0, true);
				unk_0x4AE2D6991D4E4082(unk_0x16F2683693E537C9(), 1, 1);
				func_164(1, 1);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
				{
					unk_0x536F1BE96C726C4B(1273.885f, -1718.004f, 53.7715f, 3f, 1, 0, 0, false);
					unk_0x327AAEE25F323797(iLocal_153);
					unk_0xA47B46945FF6DE74(iLocal_153, 1275.256f, -1722.368f, 53.655f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_153, 12.6638f);
					unk_0xBD453909DC26A85D(iLocal_153, -668482597, 0, 0, 0);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					unk_0x5745EA6329A91E29(iLocal_153, joaat("weapon_unarmed"), true);
				}
				iLocal_332 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0);
				unk_0xE3BB8E05FCEB3FBE(iLocal_332, true);
				unk_0x86F44313DFA8F00C(iLocal_332, 1276.409f, -1719.918f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
				unk_0x7E60C62A7CE58FC8(uLocal_331, "SET_DETAILS");
				func_163("FM_LEST_CAM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uLocal_331, "SET_LOCATION");
				func_163("FM_LEST_CAM2");
				unk_0x7E60D21B163E9D56();
				if (unk_0xE0FCC099E413CCBA() == -1)
				{
					unk_0x63D6BFA449464BBF("scanline_cam");
				}
				unk_0x5D96D8530B3D0904(&iLocal_323, 15);
				func_7(&uLocal_333, 0, 0);
				unk_0x523BCC9DC80CD82F(func_115(12));
				unk_0x523BCC9DC80CD82F(joaat("prop_wheelchair_01_s"));
				unk_0x3F423BF5B8125A50("MissLester1ALeadInOut");
				unk_0x5D96D8530B3D0904(&iLocal_323, 23);
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 17))
				{
					if (unk_0x76395FF5E8D5E643(208246292))
					{
						unk_0x1BA7FCEAFCE8D46E(208246292, 0, 0, 0);
						unk_0x5D96D8530B3D0904(&iLocal_323, 17);
					}
				}
				iLocal_330 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 21))
				{
					if (func_180(&uLocal_333, 1000, 0))
					{
						unk_0xDBE4EC9C88839074(iLocal_153, 1276.409f, -1719.918f, 56.1054f, -1, 0, 2);
						unk_0x5D96D8530B3D0904(&iLocal_323, 21);
					}
				}
			}
			if (func_180(&uLocal_333, 1500, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 17))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
						{
							if (func_144(&uLocal_156, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_179(&uLocal_333);
								func_7(&uLocal_333, 0, 0);
								iLocal_330++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (!func_208())
				{
					unk_0x4E885A246A9D983A(iLocal_153, 104, true);
					unk_0x5D96D8530B3D0904(&iLocal_323, 22);
					unk_0xBC43ED9FE28DB191(iLocal_153);
					unk_0x96167B03C5A77156(iLocal_153, 1273.576f, -1718.459f, 53.7715f, 1f, 20000, 1048576000, 0, 1193033728);
					func_179(&uLocal_333);
					func_7(&uLocal_333, 0, 0);
					iLocal_330++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
			{
				if (func_180(&uLocal_333, 5000, 0) || unk_0x3D1053F9EB43B7AD(iLocal_153, 1275.138f, -1718.426f, 53.72994f, 1272.451f, -1719.627f, 55.45897f, 1.5625f, 0, 1, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1273.885f, -1718.004f, 53.7715f, 1, 0, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 21.8709f);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
						if (unk_0xA4FD7964FEE91ED8(0) == 4)
						{
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 1063765679, 0, 0, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						}
					}
					func_143();
					func_86(1, 1, 0, 1);
					unk_0x0674E58A79778E99(&iLocal_323, 22);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 1065353216);
					func_122(unk_0xD803B885F5E47A62(), 1, 0, 0);
					unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
					unk_0x5D96D8530B3D0904(&iLocal_323, 25);
					unk_0x5F30A037D837553E(0);
					unk_0x5D96D8530B3D0904(&iLocal_323, 24);
					iLocal_330 = 99;
				}
			}
			break;
		
		case 99:
			if (unk_0x76395FF5E8D5E643(208246292))
			{
				unk_0x1BA7FCEAFCE8D46E(208246292, 4, 0, 0);
				unk_0x5D96D8530B3D0904(&iLocal_323, 19);
				iLocal_330 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 15))
	{
		if (unk_0x83D8570832F172A7(uLocal_331))
		{
			unk_0x7E60C62A7CE58FC8(uLocal_331, "SET_TIME");
			if (unk_0xD8A54335F18763BA() >= 0 && unk_0xD8A54335F18763BA() <= 12)
			{
				unk_0x3CAEA85DA607305E(unk_0xD8A54335F18763BA());
			}
			else
			{
				unk_0x3CAEA85DA607305E((unk_0xD8A54335F18763BA() - 12));
			}
			unk_0x3CAEA85DA607305E(unk_0x8D199E381D262EEF());
			unk_0x3CAEA85DA607305E(0);
			if (unk_0xD8A54335F18763BA() >= 0 && unk_0xD8A54335F18763BA() < 12)
			{
				func_163("FM_LEST_AM");
			}
			else
			{
				func_163("FM_LEST_PM");
			}
			unk_0x7E60D21B163E9D56();
			unk_0x6567AE843FADBA94(uLocal_331, 255, 255, 255, 255, 0);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 22))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
		{
			unk_0x4E885A246A9D983A(iLocal_153, 104, true);
			unk_0x9DD8618CA5BF832D(iLocal_153, 60, 1);
			unk_0x9DD8618CA5BF832D(iLocal_153, 342, 1);
			unk_0x9DD8618CA5BF832D(iLocal_153, 348, 1);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 23))
	{
		if (func_139())
		{
			unk_0x0674E58A79778E99(&iLocal_323, 23);
		}
	}
	return 0;
}

int func_139()
{
	bool bVar0;
	
	unk_0x523BCC9DC80CD82F(func_115(12));
	unk_0x523BCC9DC80CD82F(joaat("prop_wheelchair_01_s"));
	unk_0x3F423BF5B8125A50("missfinale_c2leadinoutfin_c_int");
	if (!unk_0xC844350D5D58C99A(iLocal_152))
	{
		if (unk_0xB87F6CF6E5628C67(func_115(12)))
		{
			if (func_141(&iLocal_152, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				unk_0x11AD11297DC58CC7(iLocal_152, 1);
				unk_0xE121AE1BBF90E186(iLocal_152, true);
				func_140(&uLocal_156, 8, iLocal_152, "Lester", 0, 1);
				unk_0x9A28E8CB86CD4694(iLocal_152, 1, 0, 0, false);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_154))
	{
		if (unk_0xB87F6CF6E5628C67(joaat("prop_wheelchair_01_s")))
		{
			iLocal_154 = unk_0x7707E48765093646(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, 0, false, 0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_152))
	{
		return 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
	{
		if (!unk_0x8A83E339B374E53A(iLocal_152))
		{
			return 0;
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_154))
	{
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_152))
	{
		iLocal_155 = unk_0xE9744DB7B8CA6965(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		unk_0x915804B434753CBD(iLocal_152, iLocal_155, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1148846080, 0);
		unk_0xE14EC663EED44AD5(iLocal_154, iLocal_155, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1148846080);
		unk_0xC90224D9E95E5E3A(iLocal_155, 1);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_140(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_141(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_117(iParam1))
	{
		iVar0 = func_115(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam3, 0, false);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x36C584991B4C183F(*iParam0, 3) == 0)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 5, 2, 0, 0);
				}
			}
			func_142(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_142(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_143()
{
	int iVar0;
	
	if (unk_0x9F4FE516EAACCFC5(iLocal_332))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_332, false);
		unk_0x9A8DDC7C522F5BF5(iLocal_332, 0);
	}
	unk_0x0674E58A79778E99(&iLocal_323, 15);
	unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
	if (unk_0xC844350D5D58C99A(iLocal_153))
	{
		iVar0 = iLocal_153;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	unk_0xE17FDF9E3068281B(&uLocal_331);
	unk_0x225CFE81EA219E44();
}

bool func_144(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_145(sParam2, iParam3, 0);
}

int func_145(char* sParam0, int iParam1, bool bParam2)
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
					func_161();
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
		if (func_160(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_159();
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
				func_153();
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
				if (func_152())
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
			if (func_105())
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
			func_151();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_150();
		func_146();
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
		func_161();
	}
	return 0;
}

void func_146()
{
	if (!func_147())
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

int func_147()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_149())
	{
		return 0;
	}
	if (func_148(unk_0xD803B885F5E47A62()))
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

bool func_148(int iParam0)
{
	return func_10(iParam0, 20);
}

int func_149()
{
	return -1;
}

void func_150()
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

void func_151()
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

int func_152()
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

void func_153()
{
	if (func_158(14))
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
		Global_19486 = func_154();
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

var func_154()
{
	func_155();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_155()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_157(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_156(unk_0x16F2683693E537C9());
			if (func_117(iVar0) && (!func_158(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_117(Global_111638.f_2358.f_539.f_4321))
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

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_157(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_157(int iParam0)
{
	if (func_117(iParam0))
	{
		return func_116(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_158(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_159()
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

bool func_160(int iParam0, int iParam1)
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

void func_161()
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

void func_162(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_163(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_164(bool bParam0, int iParam1)
{
	func_166();
	func_109(1);
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_102(1, 1, 1, 0, 0, 0);
	func_165();
	func_100(12, 1, -1);
	func_99(0);
	unk_0x5413873D3F67BF93(1, -1);
	unk_0xBFE31971E49FA500(0);
	unk_0x8BCB70EB440DED83(0);
	func_109(1);
	func_131(1);
	Global_2439138.f_3747 = 1;
	if (bParam0)
	{
		if (!unk_0xF929B1A0A409FF93())
		{
			unk_0xF601BB024C8F11A7(1, iParam1);
		}
	}
}

void func_165()
{
	func_99(0);
	func_100(4, 1, -1);
	func_100(6, 1, -1);
	func_100(7, 1, -1);
	func_100(3, 1, -1);
	func_100(1, 1, -1);
	func_100(2, 1, -1);
	func_100(11, 1, -1);
	func_100(13, 1, -1);
	func_100(14, 1, -1);
	func_100(16, 1, -1);
}

void func_166()
{
	Global_1312575 = 1;
	StringCopy(&(Global_1312575.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312575.f_9 = unk_0x12AB0310C2281427(&(Global_1312575.f_1));
}

void func_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_169();
	func_107(1);
	func_99(1);
	func_100(12, 1, -1);
	func_168();
	unk_0xBEF52C1D400C0A44(0);
	if (bParam0)
	{
		unk_0x225FD7B8E8464E9E(unk_0xD803B885F5E47A62(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_122(unk_0xD803B885F5E47A62(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()))
		{
			unk_0xDB4B1656BA06B94E(unk_0x16F2683693E537C9(), 0);
		}
	}
}

void func_168()
{
	Global_22211.f_5 = 1;
}

void func_169()
{
	func_118(0);
	func_107(1);
}

void func_170()
{
	Global_2439138.f_1156.f_9 = 1;
}

void func_171()
{
	if (func_177() || func_176())
	{
		func_175();
		func_172();
	}
}

void func_172()
{
	if ((!func_174() && !func_173()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_173()
{
	return Global_2450632.f_591;
}

bool func_174()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_175()
{
	Global_2450632.f_656 = 1;
}

var func_176()
{
	return Global_2450632.f_635;
}

bool func_177()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_178()
{
	switch (iLocal_151)
	{
		case 0:
			if (unk_0x22A8E52414415B76())
			{
				iLocal_151++;
			}
			break;
		
		case 1:
			if (unk_0x22A8E52414415B76())
			{
				func_113();
			}
			else
			{
				iLocal_151++;
			}
			break;
		
		case 2:
			if (iLocal_329)
			{
				if (!unk_0x39B7A3CCD2467CAB())
				{
					if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
					{
						unk_0x82E51BCA72537B6C(500);
					}
					iLocal_329 = 0;
				}
			}
			else if (unk_0x154B5473FBFD0156())
			{
				func_86(1, 1, 0, 1);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x7F2C3F971FA7A9EA(1);
				if (iLocal_328 != 0)
				{
					unk_0x25BB71BA267FE042(iLocal_328);
				}
				unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
				iLocal_151++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_323, 11))
	{
		if (unk_0x3148AE92ED70DC30("MP_1", 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1275.219f, -1722.503f, 53.655f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 228.4235f);
				unk_0x5D96D8530B3D0904(&iLocal_323, 11);
			}
		}
	}
	return 0;
}

void func_179(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_180(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

bool func_181(var uParam0)
{
	return uParam0->f_1;
}

int func_182(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_183(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

int func_184(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_208())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_189())
	{
		return 0;
	}
	if (func_200())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_201(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_188(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_187())
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_186())
	{
		return 0;
	}
	if (func_173())
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_2547056)
	{
		return 0;
	}
	if (func_185(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_185(int iParam0)
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

bool func_186()
{
	return Global_2450632.f_744;
}

bool func_187()
{
	return Global_2439138.f_3047.f_578;
}

int func_188(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_189()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_190()
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iLocal_153))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
			iLocal_153 = unk_0x36F2404464202779(4, iVar0, 1273.827f, -1717.873f, 53.7715f, 19.2225f, 0, false);
			unk_0xE121AE1BBF90E186(iLocal_153, true);
			unk_0x11AD11297DC58CC7(iLocal_153, 1);
			unk_0x7237EE202FA06DBA(unk_0x16F2683693E537C9(), iLocal_153);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_153))
	{
		return 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_153))
	{
		if (!unk_0x8A83E339B374E53A(iLocal_153))
		{
			return 0;
		}
	}
	return 1;
}

void func_191()
{
	unk_0x45019D71A0DF8B62(1);
	func_192(1, -1);
	unk_0xED41266DE64A57FD(1);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2450632.f_643 = 1;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_75();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD5F10CECBB7D51B6(0, iParam1);
			break;
		
		default:
			iVar1 = func_78(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_208), iParam0);
	}
}

int func_194()
{
	int iVar0;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (bLocal_322)
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 1274.547f, -1720.694f, 53.6807f) > 500f)
		{
			if (unk_0xC844350D5D58C99A(iLocal_153))
			{
				iVar0 = iLocal_153;
				unk_0x2ABAFAE29D459CE5(&iVar0);
			}
			return 0;
		}
		func_190();
	}
	if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1273.804f, -1722.466f, 53.21749f, 1277.147f, -1720.779f, 56.09249f, 3.4375f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

var func_195()
{
	return Global_1674354;
}

int func_196()
{
	int iVar0;
	
	return 0;
	if (func_197(0))
	{
		iVar0 = 1;
	}
	if (func_197(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_197(int iParam0)
{
	int iVar0;
	
	if (Global_2460714)
	{
		return 1;
	}
	iVar0 = func_25(2479, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

bool func_198()
{
	return Global_1312877;
}

int func_199()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_197;
}

bool func_200()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_202(iParam0))
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

bool func_202(int iParam0)
{
	return func_203(iParam0);
}

bool func_203(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

int func_204(int iParam0)
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

bool func_205()
{
	return func_206();
}

bool func_206()
{
	return Global_1370527.f_40 == 3;
}

int func_207()
{
	if (Global_20805 == 4)
	{
		if (unk_0x1EE04CEA36EF313B())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_208()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0)
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 25);
}

int func_210()
{
	return Local_73;
}

int func_211(int iParam0)
{
	return vLocal_150[iParam0 /*3*/];
}

void func_212(var uParam0)
{
	if (func_214(1))
	{
		if (unk_0xE4EDC4B0E92C078B(*uParam0) && !unk_0x0BB13030F24E9E05(*uParam0))
		{
			unk_0x6ABCCE651368DB93(*uParam0, 1);
			unk_0x4F505BE81426535E(*uParam0, 0);
			unk_0x2A065371C9D96655(*uParam0, 5);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(*uParam0) && (unk_0x0BB13030F24E9E05(*uParam0) && !func_213()))
	{
		unk_0x6ABCCE651368DB93(*uParam0, 0);
		unk_0x4F505BE81426535E(*uParam0, 1);
	}
}

int func_213()
{
	return 0;
}

bool func_214(bool bParam0)
{
	return func_215(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_215(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_216(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_149();
}

int func_216(int iParam0)
{
	if (iParam0 != func_149())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_149())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_217()
{
	int iVar0;
	
	func_12();
	func_193(12, 0);
	func_71();
	if (iLocal_328 != 0)
	{
		unk_0x25BB71BA267FE042(iLocal_328);
	}
	if (unk_0xC844350D5D58C99A(iLocal_153))
	{
		iVar0 = iLocal_153;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_1661963))
	{
		unk_0x661342B9651D16E2(Global_1661963, 0);
		unk_0x142CC44DB769B57E(&Global_1661963);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 17))
	{
		if (unk_0x76395FF5E8D5E643(208246292))
		{
			unk_0x1BA7FCEAFCE8D46E(208246292, 4, 0, 0);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 19))
	{
		unk_0xEAB026E686C0D991(0, 37, 1);
		unk_0xEAB026E686C0D991(0, 14, 1);
		unk_0xEAB026E686C0D991(0, 15, 1);
	}
	if (func_220())
	{
		func_219();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0674E58A79778E99(&(vLocal_150[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 25))
	{
		unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_323, 24))
	{
		unk_0x5F30A037D837553E(1);
	}
	func_114();
	unk_0x5C8D148FC238F38A();
	func_218();
}

void func_218()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_219()
{
	Global_2439138.f_1156.f_9 = 0;
}

bool func_220()
{
	return Global_2439138.f_1156.f_9;
}

int func_221()
{
	var uVar0;
	
	func_228(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_227())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	if (func_225(159))
	{
		if (!func_224())
		{
			return 1;
		}
	}
	if (func_225(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_222() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_222()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()
{
	switch (func_27())
	{
		case 0:
			return func_223();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_223()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_224()
{
	return Global_2450632.f_598;
}

int func_225(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_226()
{
	return Global_2460680;
}

bool func_227()
{
	return Global_2450632.f_593;
}

void func_228(var uParam0)
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
					func_229(iVar0);
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

void func_229(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_230(iVar2, &bVar3))
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

int func_230(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
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

void func_231()
{
	wait(0);
}

void func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	func_234(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_73, 79);
	unk_0x35B62793EAE9ADDF(&vLocal_150, 97);
	unk_0x256D93AFAE851A7A(0);
	if (!func_233())
	{
		func_217();
	}
}

int func_233()
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
		if (func_227())
		{
			return 0;
		}
		if (func_225(157))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(157))
				{
					if (!bParam2)
					{
						func_218();
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
					func_218();
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
				func_218();
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
			func_218();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1312854;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_218();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
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

