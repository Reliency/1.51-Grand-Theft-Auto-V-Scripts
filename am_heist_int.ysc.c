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
	struct<6> Local_73 = { 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	vector3 vLocal_151[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 16;
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
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	bool bLocal_332 = 0;
	char* sLocal_333 = NULL;
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	bool bLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	struct<21> Local_350 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	bLocal_332 = true;
	sLocal_333 = "HEIST_INT";
	bLocal_341 = true;
	func_1142(ScriptParam_350);
	while (true)
	{
		func_1141();
		if (func_1134())
		{
			func_1128();
		}
		switch (func_1127(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_1126() == 2)
				{
					vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 2;
				}
				else if (func_1126() == 6)
				{
					vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_1126() == 2)
				{
					if (!func_1125(unk_0xD803B885F5E47A62()))
					{
						func_24();
					}
					else if (unk_0xE4EDC4B0E92C078B(Global_1661971))
					{
						func_17();
						unk_0x661342B9651D16E2(Global_1661971, 0);
						unk_0x142CC44DB769B57E(&Global_1661971);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 3))
						{
							unk_0x5C8D148FC238F38A();
						}
						unk_0x5D96D8530B3D0904(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
					}
					if (func_13(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 28))
						{
							Global_2537071.f_1721 = 0;
							vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 3;
						}
					}
				}
				else if (func_1126() == 6)
				{
					vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_12(&(Local_73.f_5));
				if (func_11(&(Local_73.f_5)))
				{
					vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_151[unk_0x57270EE11514DC67() /*3*/] = 6;
			
			case 6:
				func_1128();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_1126())
			{
				case 0:
					Local_73.f_2 = -1;
					Local_73 = 2;
					break;
				
				case 2:
					func_10();
					func_8();
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
		func_3();
	}
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 1))
		{
			if (!func_7(&(Local_73.f_3)))
			{
				func_6(&(Local_73.f_3), 0, 0);
			}
			else if (func_5(&(Local_73.f_3), 60000, 0))
			{
				unk_0x28F5E4DA506AC0CA(718.3742f, -977.444f, 23.1256f, 1f, 0, 0, 0, 0, true, 0);
				func_4(&(Local_73.f_3));
			}
		}
		else if (func_7(&(Local_73.f_3)))
		{
			func_4(&(Local_73.f_3));
		}
	}
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
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

void func_6(var uParam0, bool bParam1, bool bParam2)
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

bool func_7(var uParam0)
{
	return uParam0->f_1;
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x0674E58A79778E99(&iLocal_330, 12);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (unk_0x81A93C8315C28F58(iVar1))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(iVar1);
			if (func_9(iVar2, 0, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_151[iVar0 /*3*/].f_2, 1))
				{
					unk_0x5D96D8530B3D0904(&iLocal_330, 12);
					if (Local_73.f_2 == -1)
					{
						if (Local_73.f_2 != iVar0)
						{
						}
					}
				}
				else if (Local_73.f_2 == iVar0)
				{
					Local_73.f_2 = -1;
				}
			}
		}
		iVar0++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 12))
	{
		if (Local_73.f_2 != -1)
		{
			Local_73.f_2 = -1;
		}
	}
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

void func_10()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFF81ED3B99522C7())
	{
		if (iLocal_150 == 0)
		{
			unk_0x0674E58A79778E99(&iLocal_330, 0);
			unk_0x5D96D8530B3D0904(&iLocal_330, 1);
			unk_0x0674E58A79778E99(&(Local_73.f_1), 2);
			if (Local_73.f_2 != -1)
			{
				if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_2)))
				{
					Local_73.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_150;
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_151[iLocal_150 /*3*/].f_2, 0))
			{
				unk_0x0674E58A79778E99(&iLocal_330, 1);
			}
			if (func_9(iVar1, 0, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 2))
				{
					if (unk_0xEAE0D21A50E6C7F4(vLocal_151[iLocal_150 /*3*/].f_2, 2))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_1), 2);
					}
				}
			}
		}
		iLocal_150++;
		if (iLocal_150 == 32)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 2))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 1);
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 2))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 1))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0);
			}
			unk_0x5D96D8530B3D0904(&iLocal_330, 0);
			iLocal_150 = 0;
		}
	}
}

int func_11(var uParam0)
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

void func_12(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_6(uParam0, 0, 0);
		}
	}
}

int func_13(int iParam0)
{
	if (func_16(iParam0))
	{
		return 1;
	}
	if (func_14(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_15(iParam0, 9);
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_16(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_17()
{
	if (!func_23())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_18();
}

void func_18()
{
	func_20();
	func_19(0);
}

void func_19(bool bParam0)
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

void func_20()
{
	if (!func_22())
	{
	}
	if (func_23())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_21();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_21()
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

int func_22()
{
	if (!func_23())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_21();
	return unk_0xB165082A56EE6E7F();
}

int func_23()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	
	switch (vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			func_1123();
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 5))
			{
				if ((((((func_1120(unk_0xD803B885F5E47A62(), 1, 0) || func_1119()) || func_1118() > 0) || func_1117()) || func_1115()) || func_1114()) || func_1113())
				{
					unk_0x5D96D8530B3D0904(&iLocal_330, 5);
					func_17();
					if (unk_0xE4EDC4B0E92C078B(Global_1661971))
					{
						unk_0x661342B9651D16E2(Global_1661971, 0);
						unk_0x142CC44DB769B57E(&Global_1661971);
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(Global_1661971))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 14))
						{
							if (Local_73.f_2 != -1)
							{
								if (Local_73.f_2 != unk_0x57270EE11514DC67())
								{
									unk_0x61755AC17D8F538E(Global_1661971, 39);
									unk_0x516E63E474722206(Global_1661971, 0.7f);
									unk_0x5D96D8530B3D0904(&iLocal_330, 14);
								}
							}
						}
						else if (Local_73.f_2 == -1 || Local_73.f_2 == unk_0x57270EE11514DC67())
						{
							unk_0x61755AC17D8F538E(Global_1661971, 0);
							unk_0x516E63E474722206(Global_1661971, 1f);
							unk_0x0674E58A79778E99(&iLocal_330, 14);
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 8))
					{
						unk_0x0674E58A79778E99(&iLocal_330, 8);
					}
					if (func_1112())
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
						{
							if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
							{
								if (!func_1110(unk_0xD803B885F5E47A62()) && !func_1109(unk_0xD803B885F5E47A62()))
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										if (((((!func_1108() && !func_1107(0)) && func_1105()) && !func_1117()) && !func_1104()) && !Global_2513890.f_226)
										{
											if (!func_1123())
											{
												if (!unk_0xEAE0D21A50E6C7F4(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2, 1))
												{
													unk_0x5D96D8530B3D0904(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
												}
												else
												{
													func_17();
													if (unk_0xE4EDC4B0E92C078B(Global_1661971))
													{
														unk_0x661342B9651D16E2(Global_1661971, 0);
														unk_0x142CC44DB769B57E(&Global_1661971);
													}
													unk_0xA37A90C62806D848(1);
													func_1103(14, 1);
													func_1101();
													unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 1);
													unk_0x5D96D8530B3D0904(&iLocal_330, 25);
													unk_0x5D96D8530B3D0904(&iLocal_330, 28);
													vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_1 = 1;
												}
											}
										}
									}
								}
								else if (func_1110(unk_0xD803B885F5E47A62()))
								{
									if (!func_1100("FM_LCUTBALL"))
									{
										func_1099("FM_LCUTBALL", -1);
									}
								}
							}
						}
						else if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (!func_1100("FM_LCUT_LCP"))
							{
								func_1099("FM_LCUT_LCP", -1);
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 9))
						{
							if (func_1094(0, 1, 1, 1))
							{
								if (!func_1117())
								{
									if (!unk_0xE4EDC4B0E92C078B(Global_1661971))
									{
										Global_1661971 = unk_0x6CC513A908911CF0(Global_1661972);
										unk_0xBC8E0A7390523199(Global_1661971, 77);
										unk_0x6ABCCE651368DB93(Global_1661971, 1);
										unk_0xF412DD40DE84CE72(Global_1661971, 1);
										unk_0x0EC848EFF66DF45A(Global_1661971, 7000);
									}
									unk_0x5D96D8530B3D0904(&iLocal_330, 2);
									unk_0x5D96D8530B3D0904(&iLocal_330, 9);
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2, 1))
						{
							unk_0x0674E58A79778E99(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 13))
						{
							unk_0x0674E58A79778E99(&iLocal_330, 13);
						}
						func_1091();
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (unk_0x0F1CCD77290EE12F())
					{
						if ((((((!func_1120(unk_0xD803B885F5E47A62(), 1, 0) && !func_1119()) && func_1118() == 0) && !func_1117()) && !func_1115()) && !func_1114()) && !func_1113())
						{
							if (!func_7(&uLocal_335))
							{
								func_6(&uLocal_335, 0, 0);
							}
							else if (func_5(&uLocal_335, 10, 0))
							{
								unk_0x0674E58A79778E99(&iLocal_330, 5);
								unk_0x0674E58A79778E99(&iLocal_330, 2);
								unk_0x0674E58A79778E99(&iLocal_330, 3);
								unk_0x0674E58A79778E99(&iLocal_330, 8);
								func_4(&uLocal_335);
								if (!unk_0xE4EDC4B0E92C078B(Global_1661971))
								{
									Global_1661971 = unk_0x6CC513A908911CF0(Global_1661972);
									unk_0xBC8E0A7390523199(Global_1661971, 77);
									unk_0x6ABCCE651368DB93(Global_1661971, 1);
									unk_0xF412DD40DE84CE72(Global_1661971, 1);
									unk_0x0EC848EFF66DF45A(Global_1661971, 7000);
								}
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 5))
			{
				func_1090();
			}
			break;
		
		case 1:
			func_4(&Global_1671134);
			func_1090();
			vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_1 = 2;
			break;
		
		case 2:
			func_1090();
			if (func_7(&uLocal_157))
			{
				if (func_5(&uLocal_157, 0, 0))
				{
					if (unk_0x757EF87A33649210())
					{
						unk_0x82E51BCA72537B6C(800);
					}
					vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_1 = 3;
				}
			}
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
			}
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 28))
	{
		if (func_94())
		{
			unk_0x0674E58A79778E99(&iLocal_330, 28);
			func_6(&uLocal_157, 0, 0);
		}
	}
	func_93();
	if (func_92())
	{
		if (unk_0xE4EDC4B0E92C078B(Global_1661971))
		{
			unk_0x142CC44DB769B57E(&Global_1661971);
		}
		func_17();
		iVar0 = Global_1388048[func_91(-1)];
		unk_0x5D96D8530B3D0904(&iVar0, 9);
		unk_0x5D96D8530B3D0904(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
		func_90(1303, iVar0, -1, 1);
		func_1103(14, 0);
		func_89(1);
		func_81();
		func_29(1);
		if (!func_28(10, -1))
		{
			func_25(10, -1);
		}
		Global_2405062 = 1;
	}
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x25C34E9F657F1C79(0, iParam1);
			break;
		
		default:
			iVar1 = func_26(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x5D96D8530B3D0904(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_27();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_27()
{
	return Global_1312745;
}

bool func_28(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = func_26(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_29(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312448)
	{
		if (!func_80())
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
	iVar1 = func_77(unk_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_75(iVar1, bParam0);
	if (!func_74(-1))
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
		iVar3 = func_73(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_71(iVar4))
			{
				func_62(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_56(func_57(59, 0, 0), 0);
	func_51(func_57(135, 0, 0), 1);
	func_49(func_57(22, 0, 0), func_57(73, 0, 0));
	if (func_80())
	{
		if (func_48(77, -1))
		{
			func_47(1);
			func_46(1);
		}
	}
	if (func_45() || func_44())
	{
		func_42(77, 1, -1, 1);
		if (unk_0x8CD06866876216F2())
		{
			func_30(28, 1, 0);
			func_30(29, 1, 0);
			func_30(30, 1, 0);
			func_30(31, 1, 0);
			func_30(32, 1, 0);
			func_30(33, 1, 0);
			func_30(34, 1, 0);
			func_30(35, 1, 0);
			func_30(36, 1, 0);
			func_30(37, 1, 0);
			func_30(38, 1, 0);
		}
	}
	if (func_57(21, 0, 0))
	{
		unk_0x0F30FBDF741A7E3E(0);
	}
	Global_968399 = 0;
}

void func_30(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_41(iParam0, 0, 0))
		{
			if (iParam2 && Global_98796.f_18[iParam0])
			{
				if (func_40(iParam0) == 3 && !func_39(iParam0))
				{
					func_38(iParam0);
					func_37(iParam0, 0, 0);
					func_32(iParam0, 1, 0);
					func_31(iParam0);
				}
				else
				{
					func_37(iParam0, 1, 0);
					func_31(iParam0);
				}
			}
			else
			{
				func_37(iParam0, 0, 0);
				func_32(iParam0, 1, 0);
				func_31(iParam0);
			}
		}
		else
		{
			func_32(iParam0, 1, 0);
			func_31(iParam0);
		}
	}
	else if (func_41(iParam0, 0, 0))
	{
		func_32(iParam0, 0, 0);
		func_32(iParam0, 1, 0);
		func_31(iParam0);
	}
}

void func_31(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_32(int iParam0, int iParam1, bool bParam2)
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
		if (func_36() == 0)
		{
			iVar0 = func_34(func_35(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_33(func_35(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_35(int iParam0)
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

int func_36()
{
	return Global_30768;
}

void func_37(int iParam0, int iParam1, bool bParam2)
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
		if (func_36() == 0)
		{
			iVar0 = func_34(func_35(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_33(func_35(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_38(int iParam0)
{
	if (Global_98796.f_18[iParam0])
	{
		func_37(iParam0, 10, 1);
		func_37(iParam0, 19, 1);
	}
}

bool func_39(int iParam0)
{
	return func_41(iParam0, 5, 1);
}

int func_40(int iParam0)
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

int func_41(int iParam0, int iParam1, bool bParam2)
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
		if (func_36() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_34(func_35(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = Global_2583656[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, iParam1, iParam3);
		}
	}
}

int func_43()
{
	return 1;
	return 0;
}

bool func_44()
{
	return Global_1312865;
}

bool func_45()
{
	return Global_1312867;
}

void func_46(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_30(28, bParam0, 0);
	func_30(30, bParam0, 0);
	func_30(31, bParam0, 0);
	func_30(33, bParam0, 0);
	func_30(34, bParam0, 0);
	func_30(38, bParam0, 0);
}

void func_47(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_30(29, bParam0, 0);
	func_30(32, bParam0, 0);
	func_30(36, bParam0, 0);
	func_30(35, bParam0, 0);
	func_30(37, bParam0, 0);
}

int func_48(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2583656[iParam0 /*3*/][func_91(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_49(bool bParam0, bool bParam1)
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
	func_30(0, bParam0, 1);
	func_30(1, bParam0, 1);
	func_30(2, bParam0, 1);
	func_30(3, bParam0, 1);
	func_30(4, bParam0, 1);
	func_30(5, bParam0, 1);
	func_30(6, bParam0, 1);
	func_30(7, bParam0, bVar0);
	func_30(8, bParam0, 1);
	func_30(9, bParam0, 1);
	func_30(10, bParam0, 1);
	func_30(11, bParam0, 1);
	func_30(12, bParam0, bVar0);
	func_30(13, bParam0, 1);
	func_30(21, bParam0, 1);
	func_30(14, bParam0, 1);
	func_30(15, bParam0, 1);
	func_30(16, bParam0, 1);
	func_30(17, bParam0, 1);
	func_30(18, bParam0, 1);
	func_30(19, bParam0, 1);
	func_30(20, bParam0, 1);
	func_30(22, bParam0, 1);
	func_30(23, bParam0, 1);
	func_30(24, bParam0, 1);
	func_30(25, bParam0, 1);
	func_30(26, bParam0, 1);
	func_30(27, bParam0, 1);
	func_50(1, !bParam1);
	if (!bVar0)
	{
		func_38(12);
	}
}

void func_50(int iParam0, bool bParam1)
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

void func_51(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_55(0);
	if (Global_262145.f_63 == 1 && func_57(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_30(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_39(44))
		{
			func_38(44);
		}
	}
	if (bParam0)
	{
		if (func_52(0) > 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_1735), 10);
		}
	}
}

int func_52(int iParam0)
{
	int iVar0;
	
	if (Global_1671743[iParam0 /*8*/] == -1)
	{
		iVar0 = func_34(func_54(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_53(iParam0, 0);
			iVar0 = 0;
		}
		Global_1671743[iParam0 /*8*/] = iVar0;
	}
	return Global_1671743[iParam0 /*8*/];
}

void func_53(int iParam0, int iParam1)
{
	Global_1671743[iParam0 /*8*/] = iParam1;
	func_33(func_54(iParam0), iParam1, -1, 1, 0);
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9978;
		
		default:
	}
	return 9978;
}

int func_55(bool bParam0)
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1726, 26))
		{
			iVar0 = func_34(1191, -1, 0);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_48(122, -1);
}

void func_56(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_55(0);
	func_30(39, bParam0, 0);
	func_30(40, bParam0, 0);
	func_30(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_30(43, bParam0, 0);
		func_30(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_39(39))
		{
			func_38(39);
		}
		if (!func_39(40))
		{
			func_38(40);
		}
		if (!func_39(41))
		{
			func_38(41);
		}
		if (!func_39(42))
		{
			func_38(42);
		}
		if (!func_39(43))
		{
			func_38(43);
		}
	}
}

bool func_57(int iParam0, bool bParam1, bool bParam2)
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
		if (func_59(unk_0xD803B885F5E47A62(), 85))
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
	if (func_45() || func_44())
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
			if (func_58())
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

int func_58()
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
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	iVar0 = Global_1388048[func_91(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 7))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_80())
	{
		return 0;
	}
	if (func_61())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_60(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_730, iVar1);
}

int func_60(int iParam0)
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

bool func_61()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_70(-1))
			{
				if (!func_80())
				{
					return;
				}
			}
			if (!func_70(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_69() && !func_68())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_67())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_70(-1))
				{
					if (!func_63())
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

int func_63()
{
	int iVar0;
	
	if (func_66(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_91(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 2))
	{
		func_64(1);
		return 1;
	}
	return 0;
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 25))
		{
			func_65(unk_0xD803B885F5E47A62(), 12);
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 25);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 25))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 25);
	}
}

void func_65(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_60(iParam1);
	iVar1 = uVar0;
	unk_0x5D96D8530B3D0904(&(Global_1590535[iParam0 /*876*/].f_730), iVar1);
}

bool func_66(int iParam0)
{
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_142, 25);
}

int func_67()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_91(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 6))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 6);
		}
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_146, 7);
}

int func_69()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	return func_48(121, -1);
}

bool func_70(int iParam0)
{
	return func_48(123, iParam0);
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_45())
	{
		return 1;
	}
	if (func_44())
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
			iVar0 = func_34(func_72(iParam0), -1, 0);
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

int func_72(int iParam0)
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

int func_73(int iParam0)
{
	if (func_45())
	{
		return 1;
	}
	if (func_44())
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
			if (!func_70(-1))
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

int func_74(int iParam0)
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	return func_48(119, iParam0);
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_78(iParam0);
}

int func_78(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_91(-1)];
			}
			else if (func_79(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_91(-1)];
	}
	return 0;
}

int func_79(int iParam0)
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

int func_80()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	return func_48(120, -1);
}

void func_81()
{
	if (!func_88(1, -1))
	{
		func_86(1, -1);
	}
	if (func_1117() && func_36() == 0)
	{
	}
	else
	{
		unk_0x45019D71A0DF8B62(0);
	}
	if (func_85(1))
	{
		unk_0xED41266DE64A57FD(1);
	}
	else
	{
		unk_0xED41266DE64A57FD(0);
	}
	Global_2450632.f_643 = 0;
	if (func_82())
	{
		if (!func_48(133, -1))
		{
			func_42(133, 1, -1, 1);
		}
	}
}

int func_82()
{
	if (func_84() && func_83(0))
	{
		return 1;
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1312374[iParam0];
}

var func_84()
{
	return func_83(func_27() + 1);
}

bool func_85(int iParam0)
{
	return Global_1662155.f_16[iParam0 /*44*/].f_3;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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
			iVar1 = func_87(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			break;
		
		default:
			iVar1 = func_87(iParam1);
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
			func_42(120, 0, iParam1, 1);
			func_42(124, 0, iParam1, 1);
			func_42(115, 0, iParam1, 1);
			func_42(119, 0, iParam1, 1);
			func_42(121, 0, iParam1, 1);
			func_42(122, 0, iParam1, 1);
			func_42(125, 0, iParam1, 1);
			func_33(1303, 0, iParam1, 1, 0);
			func_33(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_27();
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

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = func_87(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_89(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 21))
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 21);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 21))
	{
		unk_0x0674E58A79778E99(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142), 21);
	}
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_91(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_91(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_91(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_91(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_91(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_91(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_91(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_91(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_91(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_91(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_91(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_91(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_91(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_91(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_91(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_91(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_91(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_91(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_91(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_91(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_91(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_91(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_91(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_91(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_91(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_91(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_91(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_91(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_91(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_91(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_91(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_91(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_91(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_91(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_91(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_91(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_91(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_91(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_91(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_91(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_91(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_91(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_91(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_91(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_91(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_91(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_91(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_91(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_91(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_91(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_91(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_91(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_92()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
	{
		if (!func_7(&uLocal_159))
		{
			func_6(&uLocal_159, 0, 0);
		}
		else if (func_5(&uLocal_159, 5000, 0))
		{
			if (unk_0xF65264B66E133BD8(718.3742f, -977.444f, 23.1256f, 3f, 0, 1, 0, 0, 0, 0, 0))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
			}
			func_4(&uLocal_159);
		}
	}
	else if (!unk_0xF65264B66E133BD8(718.3742f, -977.444f, 23.1256f, 3f, 0, 1, 0, 0, 0, 0, 0))
	{
		unk_0x0674E58A79778E99(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
	}
}

int func_94()
{
	if (bLocal_332)
	{
		if (bLocal_341)
		{
			func_1073();
		}
		else
		{
			func_1072();
		}
	}
	switch (iLocal_152)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 29) || !bLocal_332)
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 3))
				{
					unk_0xAE1670DD12E839C3(sLocal_333, 8);
					unk_0x5D96D8530B3D0904(&iLocal_330, 3);
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 10))
				{
					if (unk_0x75EECC9B0572F772())
					{
						unk_0xCB667BE6562FEBD1("MP_1", 0, 1);
						unk_0x5D96D8530B3D0904(&iLocal_330, 10);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 10))
				{
					iLocal_152++;
				}
			}
			break;
		
		case 1:
			if (unk_0x62A1F4500E8F07E0())
			{
				if (!bLocal_341)
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
				}
				else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_154))
					{
						func_934(iLocal_154, 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						func_934(unk_0x16F2683693E537C9(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						unk_0xE731059548189243(iLocal_154, 1);
						if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == joaat("mp_f_freemode_01"))
						{
							unk_0x29E8331978B73E7F(iLocal_154, "MP_1", 0, 0, 64);
						}
						else
						{
							unk_0x29E8331978B73E7F(iLocal_154, "MP_1", 0, 0, 64);
						}
					}
				}
				func_927();
				unk_0x4C902758BEA97C68(0);
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
				func_924(0, 0, 1, 0, 1, 1, 0);
				if (!bLocal_332)
				{
					unk_0xB5EB44E161D3DCB8(1, false);
				}
				unk_0x7F2C3F971FA7A9EA(0);
				func_921(1, 1);
				func_917(0);
				iLocal_152++;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				func_916();
				iLocal_152++;
			}
			else if (!unk_0x0DEAFC25E78959A1(sLocal_333))
			{
				iLocal_152 = 4;
			}
			break;
		
		case 3:
			if (unk_0x22A8E52414415B76())
			{
			}
			else
			{
				iLocal_152++;
			}
			break;
		
		case 4:
			if (unk_0x154B5473FBFD0156() || !unk_0x0DEAFC25E78959A1(sLocal_333))
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 26))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 30))
					{
						if (unk_0x9F4FE516EAACCFC5(iLocal_345))
						{
							unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
							unk_0x9A8DDC7C522F5BF5(iLocal_345, 0);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
								if (bLocal_341)
								{
									func_915();
									unk_0xBA2CB24C70C8E726(unk_0x16F2683693E537C9(), 1, 1);
									func_913(0);
								}
								unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
								unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xEF6276132B396452(0f, 1065353216);
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 17))
						{
							if (unk_0x76395FF5E8D5E643(-670056199))
							{
								unk_0x1BA7FCEAFCE8D46E(-670056199, 4, 0, 0);
							}
							if (unk_0x76395FF5E8D5E643(917058539))
							{
								unk_0x1BA7FCEAFCE8D46E(917058539, 4, 0, 0);
							}
						}
						func_912(1);
						func_885(1, 1, 0, 1);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						unk_0x7F2C3F971FA7A9EA(1);
						if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 25))
						{
							unk_0x62DE699599F0417E(unk_0xD803B885F5E47A62(), 0);
						}
						if (iLocal_337 != 0)
						{
							unk_0x25BB71BA267FE042(iLocal_337);
						}
						unk_0x0674E58A79778E99(&(vLocal_151[unk_0x57270EE11514DC67() /*3*/].f_2), 1);
						iLocal_152++;
					}
				}
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!bLocal_341)
	{
		func_884();
	}
	else
	{
		func_95();
	}
	unk_0x857E3CE01DEA2D26();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 19))
	{
		unk_0x38C3A68D7861DCFD(0, 37, 1);
		unk_0x38C3A68D7861DCFD(0, 14, 1);
		unk_0x38C3A68D7861DCFD(0, 15, 1);
	}
	return 0;
}

int func_95()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 31))
	{
		func_96();
	}
	switch (iLocal_344)
	{
		case 0:
			if (unk_0x3148AE92ED70DC30("MP_1", 0) || (!unk_0x0DEAFC25E78959A1(sLocal_333) && unk_0xEAE0D21A50E6C7F4(iLocal_330, 29)))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_154))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 11))
					{
						unk_0xA47B46945FF6DE74(iLocal_154, 717.4829f, -972.1786f, 25.1411f, 1, 0, 0, 1);
						unk_0xD8F6A53F4799FAFE(iLocal_154, 182.5413f);
						unk_0x5D96D8530B3D0904(&iLocal_330, 11);
						unk_0x679C321F8CAA2CFA(717.7623f, -977.8769f, 23.1224f, 5f, 1);
					}
				}
			}
			if (unk_0xEABED1927EFB48CA(0) || (!unk_0x0DEAFC25E78959A1(sLocal_333) && unk_0xEAE0D21A50E6C7F4(iLocal_330, 29)))
			{
				if (!unk_0x9F4FE516EAACCFC5(iLocal_345))
				{
					func_916();
					iLocal_345 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0);
					unk_0xE3BB8E05FCEB3FBE(iLocal_345, true);
					unk_0x86F44313DFA8F00C(iLocal_345, 711.9433f, -985.5894f, 24.5366f, 38.7449f, 0f, -40.5193f, 43.0748f, 0, 1, 1, 2);
					unk_0x86F44313DFA8F00C(iLocal_345, 711.9433f, -985.5894f, 24.5366f, 9.2499f, 0f, -40.5193f, 43.0748f, 7000, 1, 1, 2);
					unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
				}
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_345) && unk_0xEAE0D21A50E6C7F4(iLocal_330, 11))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 17))
				{
					if (unk_0x76395FF5E8D5E643(-670056199))
					{
						unk_0x1BA7FCEAFCE8D46E(-670056199, 0, 0, 0);
						unk_0x5D96D8530B3D0904(&iLocal_330, 17);
					}
					if (unk_0x76395FF5E8D5E643(917058539))
					{
						unk_0x5D96D8530B3D0904(&iLocal_330, 17);
						unk_0x1BA7FCEAFCE8D46E(917058539, 0, 0, 0);
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 720.3045f, -974.5632f, 23.9142f, 1, 0, 0, 1);
				}
				func_6(&uLocal_346, 0, 0);
				iLocal_344++;
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 27))
			{
				if (func_5(&uLocal_346, 1000, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_154))
					{
						unk_0x96167B03C5A77156(iLocal_154, 718.0134f, -980.4674f, 23.1217f, 1f, 20000, 1048576000, 0, 1193033728);
						unk_0x5D96D8530B3D0904(&iLocal_330, 22);
					}
					unk_0x5D96D8530B3D0904(&iLocal_330, 27);
				}
			}
			if (func_5(&uLocal_346, 3000, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_330, 31))
				{
					unk_0x5D96D8530B3D0904(&iLocal_330, 31);
				}
			}
			if (func_5(&uLocal_346, 6500, 0))
			{
				unk_0x5D96D8530B3D0904(&iLocal_330, 26);
				unk_0x0674E58A79778E99(&iLocal_330, 22);
				iLocal_344 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 22))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_154))
		{
			unk_0x4E885A246A9D983A(iLocal_154, 104, true);
			unk_0x9DD8618CA5BF832D(iLocal_154, 60, 1);
			unk_0x9DD8618CA5BF832D(iLocal_154, 342, 1);
			unk_0x9DD8618CA5BF832D(iLocal_154, 348, 1);
		}
	}
	return 0;
}

void func_96()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_330, 30))
	{
		return;
	}
	if (!iLocal_348)
	{
		func_874(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		func_873(718.3798f, -981.3898f, 23.125f, 182.231f, 1065353216);
		func_873(721.6624f, -980.0242f, 23.1271f, 182.7342f, 0.5f);
		func_873(714.7198f, -979.3767f, 23.1146f, 172.7043f, 0.5f);
		func_873(712.7794f, -982.4444f, 23.1148f, 169.8146f, 0.5f);
		func_873(721.5182f, -984.2596f, 23.1581f, 167.1816f, 0.5f);
		func_873(725.1901f, -981.3561f, 23.1471f, 243.0385f, 0.1f);
		func_873(711.1748f, -980.7484f, 23.1103f, 131.5259f, 0.1f);
		iLocal_348 = 1;
	}
	else if (func_102(8, 0, 0, 0, 1, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
	{
		func_97();
		func_874(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		unk_0x5D96D8530B3D0904(&iLocal_330, 30);
	}
}

void func_97()
{
	if (func_101() && !func_100())
	{
		func_99();
	}
	func_98();
	Global_2405072.f_706 = 0;
}

void func_98()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_99()
{
	if (func_100())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		unk_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_100()
{
	if ((Global_2405072.f_1744 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if ((Global_2405072.f_1745 && !unk_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && unk_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_872();
	if (func_871(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (((bParam4 && func_9(unk_0xD803B885F5E47A62(), 1, 0)) && unk_0x991B1F0980C62628()) && Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_222 == 1)
		{
		}
		else if (func_870() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 150, 1);
		if (!Global_2405072.f_694 == iParam0)
		{
			if (bParam15 && Global_2405072.f_694 == 37)
			{
			}
			else if (!Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 0)
			{
				if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_695) < func_869(0))
				{
					return 0;
				}
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 0)
		{
			Global_2405072.f_694 = iParam0;
			Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 2;
			if (bParam2)
			{
				if (!func_868())
				{
					bParam2 = false;
				}
			}
			Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 2;
			Global_2405072.f_2470 = 0;
			Global_2405072.f_2471 = 0;
			Global_2405072.f_2469 = 0;
			Global_2405072.f_2869 = 0;
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2405072.f_694 == 11)
			{
				Global_2405072.f_698 = { Global_2413899 };
				Global_2405072.f_701 = Global_2413899.f_5;
				Global_2405072.f_2889 = Global_2413899.f_26;
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 3;
			}
			else if (func_605(&(Global_2405072.f_698), &(Global_2405072.f_701), Global_2405072.f_694, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 3;
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						func_600(&iVar2);
					}
					else
					{
						iVar2 = func_599();
						func_598(&iVar2);
					}
					if (func_868())
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (!unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) == Global_2405072.f_45.f_67)
							{
								iVar4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								if (iVar4 == Global_2405072.f_45.f_172)
								{
									func_596();
								}
								unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							}
						}
					}
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 4;
					}
					else
					{
						iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (unk_0xAFE0D3608EDA7039(iVar2))
						{
							func_577(iVar2);
							func_576(1);
							Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 6;
						}
						else
						{
							unk_0x0C8A454B494DAA0D(iVar2);
						}
					}
				}
				else
				{
					func_576(1);
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 6;
				}
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 4)
		{
			if (func_573())
			{
				if (Global_2405072.f_45.f_65)
				{
					if (func_236(Global_2405072.f_698, Global_2405072.f_698.f_1, func_569(Global_2405072.f_45.f_67), Global_2405072.f_701, 0))
					{
						Global_2405072.f_696 = unk_0x2B6E0A53779D29EA();
						Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 5;
					}
				}
				else if (func_235(Global_2405072.f_45.f_67) || Global_2405072.f_45.f_67 == 0)
				{
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 6;
				}
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 5)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 150, 1);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 6;
				if (Global_2405072.f_45.f_174)
				{
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_227 = 1;
				}
				else
				{
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_227 = 0;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_696) > 5000)
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 4;
			}
			else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) == 7)
			{
				if (unk_0xC844350D5D58C99A(Global_2405072.f_45.f_172) && unk_0xDF1306B443CD3D15(Global_2405072.f_45.f_172, 0))
				{
					func_173(unk_0x16F2683693E537C9(), Global_2405072.f_45.f_172, -1, 0);
				}
				else
				{
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 4;
				}
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 6)
		{
			Global_2405072.f_695 = unk_0x2B6E0A53779D29EA();
			if (Global_2405072.f_704)
			{
				Global_2405072.f_697 = unk_0x2B6E0A53779D29EA();
				Global_2405072.f_704 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_697)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1574410)
			{
				func_167(Global_2405072.f_698);
			}
			if (bParam7 && !Global_2439138.f_1233)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if ((unk_0x437347B10A200C4B(iVar2, 0) || !unk_0xDF1306B443CD3D15(iVar2, 0)) || func_166(iVar2))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_158(Global_2405072.f_698, Global_2405072.f_701, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2405072.f_2889))
				{
					if (bParam15)
					{
						Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 7;
						return 0;
					}
					else
					{
						func_152();
					}
				}
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 7)
		{
			if ((Global_2405072.f_694 == 8 && Global_2405072.f_706.f_507) && Global_2405072.f_2869)
			{
				func_152();
			}
			else if (func_142(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0)) || func_141())
			{
				if (Global_2405072.f_694 == 8 && !Global_2405072.f_2869)
				{
					Global_2405072.f_2869 = 1;
				}
				else
				{
					Global_2405072.f_694 = 37;
				}
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 2;
				Global_2405072.f_2470 = 0;
				Global_2405072.f_2471 = 0;
				Global_2405072.f_2469 = 0;
			}
			else
			{
				func_152();
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 10)
		{
			if (vdist(Global_2413899, Global_2405072.f_698) > 0.1f)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar2)) || unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar2)))
					{
						unk_0xE82754C349C7B581(Global_2405072.f_698, Global_2405072.f_698.f_1, Global_2405072.f_698.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2405072.f_698.f_2 - fVar0) > 1.5f)
						{
							if (vdist(Global_2413899, Global_2405072.f_698) > 15f)
							{
								Global_2405072.f_698 = { Global_2413899 };
								if (unk_0xAFE0D3608EDA7039(iVar2))
								{
									unk_0xA47B46945FF6DE74(iVar2, Global_2405072.f_698, Global_2405072.f_698.f_1, (fVar0 + func_140(unk_0x134B62B726CEC8E6(iVar2))), 1, 0, 0, 1);
									unk_0xB9FD7450C0DAB575(iVar2, 1084227584);
								}
								Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
							}
							else
							{
								Global_2405072.f_698.f_2 = (Global_2405072.f_698.f_2 + 1f);
							}
						}
						else
						{
							if (unk_0xAFE0D3608EDA7039(iVar2))
							{
								unk_0xA47B46945FF6DE74(iVar2, Global_2405072.f_698, Global_2405072.f_698.f_1, (fVar0 + func_140(unk_0x134B62B726CEC8E6(iVar2))), 1, 0, 0, 1);
								unk_0xB9FD7450C0DAB575(iVar2, 1084227584);
							}
							Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
						}
					}
					else
					{
						Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
					}
				}
				else
				{
					Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
				}
			}
			else
			{
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
			}
		}
		if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 11)
		{
			if (!bParam14)
			{
				if (unk_0xC844350D5D58C99A(Global_2405072.f_45.f_172) && unk_0xAFE0D3608EDA7039(Global_2405072.f_45.f_172))
				{
					unk_0x4A4806F9D471E491(Global_2405072.f_45.f_172, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_132(iParam9, 0, 0);
				}
			}
			func_124(func_131(unk_0xD803B885F5E47A62()), 0);
			if (unk_0xC844350D5D58C99A(Global_2405072.f_45.f_172))
			{
				func_596();
			}
			if (!(func_235(Global_2405072.f_45.f_67) || Global_2405072.f_45.f_67 == 0) && !Global_2405072.f_487.f_5)
			{
				func_123(0, 0);
			}
			func_122(0, 0);
			if (bParam10)
			{
				func_121();
			}
			func_120();
			func_105();
			if (bParam13)
			{
				func_104();
			}
			func_103();
			return 1;
		}
	}
	else if (!Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 == 0)
	{
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		func_598(&(Global_2405072.f_45.f_172));
		func_103();
	}
	Global_2405072.f_695 = unk_0x2B6E0A53779D29EA();
	return 0;
}

void func_103()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1727A44C562FBED2(Global_2405072.f_684[iVar0]))
		{
			if (unk_0x0D0A574C76D769AC() == Global_2405072.f_684[iVar0])
			{
				if (!Global_2405072.f_680[iVar0] == -1)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_680[iVar0]))
					{
						unk_0xBD63401BCCEC233B(Global_2405072.f_680[iVar0]);
						Global_2405072.f_680[iVar0] = -1;
					}
					else
					{
						Global_2405072.f_680[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405072.f_680[iVar0] == -1)
		{
			Global_2405072.f_680[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_105()
{
	int iVar0;
	
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_261.f_20 = -1;
	Global_2405072.f_2866 = -1f;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		func_107(iVar0);
		iVar0++;
	}
	if (func_106(unk_0xD803B885F5E47A62(), 0))
	{
		Global_2546219.f_79 = 1;
		Global_2546219.f_80 = unk_0x2B6E0A53779D29EA();
	}
}

int func_106(int iParam0, bool bParam1)
{
	if (func_9(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2425662[iParam0 /*421*/].f_261.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2425662[iParam0 /*421*/].f_261.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_107(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_2425662[iVar0 /*421*/].f_261.f_14 != -1)
	{
		if (func_119(Global_2425662[iVar0 /*421*/].f_261.f_14))
		{
			if (!func_114(unk_0xD803B885F5E47A62(), Global_2425662[iVar0 /*421*/].f_261.f_14, 0, 0))
			{
				Global_2425662[iVar0 /*421*/].f_261.f_14 = -1;
			}
		}
		else
		{
			Global_2425662[iVar0 /*421*/].f_261.f_14 = -1;
		}
	}
	if (Global_2425662[iVar0 /*421*/].f_261.f_16 != -1)
	{
		if (func_119(Global_2425662[iVar0 /*421*/].f_261.f_16))
		{
			if (!func_114(unk_0xD803B885F5E47A62(), Global_2425662[iVar0 /*421*/].f_261.f_16, 0, 1))
			{
				Global_2425662[iVar0 /*421*/].f_261.f_16 = -1;
			}
		}
		else
		{
			Global_2425662[iVar0 /*421*/].f_261.f_16 = -1;
		}
	}
	if (Global_2425662[iVar0 /*421*/].f_261.f_15 != -1)
	{
		if (!func_114(unk_0xD803B885F5E47A62(), Global_2425662[iVar0 /*421*/].f_261.f_15, 0, 0))
		{
			Global_2425662[iVar0 /*421*/].f_261.f_15 = -1;
		}
	}
	if (func_119(iParam0))
	{
		if (func_114(unk_0xD803B885F5E47A62(), iParam0, 0, 0))
		{
			if (!Global_2425662[iVar0 /*421*/].f_261.f_14 == iParam0)
			{
				Global_2425662[iVar0 /*421*/].f_261.f_14 = iParam0;
			}
		}
		if (func_114(unk_0xD803B885F5E47A62(), iParam0, 0, 1))
		{
			if (!Global_2425662[iVar0 /*421*/].f_261.f_16 == iParam0)
			{
				Global_2425662[iVar0 /*421*/].f_261.f_16 = iParam0;
			}
		}
		iVar2 = floor((to_float(iParam0) / 32f));
		if (func_109(unk_0xD803B885F5E47A62(), iParam0, 1120403456))
		{
			unk_0x5D96D8530B3D0904(&(Global_2425662[iVar0 /*421*/].f_261.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_2425662[iVar0 /*421*/].f_261.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = vdist(func_108(iParam0), func_131(unk_0xD803B885F5E47A62()));
		if (iParam0 == Global_2425662[iVar0 /*421*/].f_261.f_20)
		{
			Global_2405072.f_2866 = fVar1;
		}
		else if (fVar1 < Global_2405072.f_2866 || Global_2405072.f_2866 <= 0f)
		{
			Global_2405072.f_2866 = fVar1;
			Global_2425662[iVar0 /*421*/].f_261.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2425662[iVar0 /*421*/].f_261.f_20)
	{
		Global_2425662[iVar0 /*421*/].f_261.f_20 = -1;
		Global_2405072.f_2866 = -1f;
	}
	if (func_114(unk_0xD803B885F5E47A62(), iParam0, 0, 0))
	{
		if (!Global_2425662[iVar0 /*421*/].f_261.f_15 == iParam0)
		{
			Global_2425662[iVar0 /*421*/].f_261.f_15 = iParam0;
		}
	}
}

Vector3 func_108(int iParam0)
{
	return Global_4008564[iParam0 /*45*/].f_4;
}

int func_109(int iParam0, int iParam1, float fParam2)
{
	if (func_112())
	{
		return 1;
	}
	if (func_111(iParam1))
	{
		return func_110(func_131(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_110(vector3 vParam0, int iParam1, float fParam2)
{
	if (func_111(iParam1))
	{
		if (vdist2(vParam0, func_108(iParam1)) < (fParam2 * fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	if (!unk_0xA14BB9332558B949() && !func_113())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_238365[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_1312854;
}

int func_114(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_111(iParam1))
	{
		if (!bParam3)
		{
			return func_115(func_131(iParam0), iParam1, fParam2);
		}
		else if (func_115(func_131(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_115(func_131(iParam0), iParam1, 15f))
		{
			if (func_9(iParam0, 1, 1))
			{
				iVar0 = unk_0x9539D44F3E4492F6(iParam0);
				if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
				{
					if (unk_0x405E212DDE472467(iVar0, 0))
					{
						iVar1 = unk_0x3C66DF04E6EA3587(iVar0);
						if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
						{
							if (unk_0x30F813723591D02E(iVar1, "PYV_Yacht"))
							{
								iVar2 = unk_0x1E2DFB0EF4BB4566(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_115(vector3 vParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_111(iParam1))
	{
		func_116(iParam1, &vVar0, &vVar1, &fVar2, fParam2);
		return unk_0x0399732A9EBC368E(vParam0, vVar0, vVar1, fVar2, 0, 1);
	}
	return 0;
}

void func_116(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { func_108(iParam0) };
	fVar1 = func_118(iParam0);
	vVar2 = { 0f, 1f, 0f };
	func_117(&vVar2, 0f, 0f, fVar1);
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	*uParam1 = { vVar0 + vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar2 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

void func_117(var uParam0, vector3 vParam1)
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

var func_118(int iParam0)
{
	return Global_4008564[iParam0 /*45*/].f_7;
}

int func_119(int iParam0)
{
	if (func_111(iParam0))
	{
		return Global_2546219.f_2[iParam0];
	}
	return 0;
}

void func_120()
{
	Global_1626591 = -1;
	Global_1626597 = 0;
	Global_1626592 = -1;
}

void func_121()
{
	Global_2405072.f_5 = 1;
}

void func_122(float fParam0, int iParam1)
{
	vector3 vVar0;
	
	if (!func_1117() || iParam1)
	{
		if (unk_0x757EF87A33649210() || unk_0x991B1F0980C62628())
		{
			if (!unk_0x00295B14470935CE())
			{
				vVar0 = { func_131(unk_0xD803B885F5E47A62()) };
				if (vVar0.z > -80f)
				{
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(fParam0);
				}
			}
		}
	}
}

void func_123(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		vVar0.z = (vVar0.z + (0.3f * IntToFloat(Global_2405072.f_702)));
		if (unk_0xE82754C349C7B581(vVar0, &fVar1, 0, 0))
		{
			fVar2 = (vVar0.z - (fVar1 + 1f));
			if ((unk_0x755FF954DAE327E1(fVar2) > 0f && unk_0x755FF954DAE327E1(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (unk_0xEB880D98B5988D0C())
					{
						unk_0x486B4ADE317F0689();
					}
				}
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, fVar1, 0, 1, 0, 1);
				Global_2405072.f_702 = 0;
			}
		}
		else if (Global_2405072.f_702 < 3)
		{
			Global_2405072.f_702++;
			func_123(0, 0);
		}
		else
		{
			Global_2405072.f_702 = 0;
		}
	}
}

void func_124(vector3 vParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		fVar1 = func_125(unk_0x134B62B726CEC8E6(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		unk_0x536F1BE96C726C4B(vParam0, fVar1, 1, 0, 0, bParam1);
		unk_0x28F5E4DA506AC0CA(vParam0, fVar1, 1, 0, 1, 1, bParam1, 0);
		unk_0x7800CEC090C01D4D(vParam0, 6f);
	}
	else
	{
		iVar6 = unk_0xBEFB16071735D54D(vParam0.x, vParam0.y, (vParam0.z - 2f), vParam0.x, vParam0.y, (vParam0.z + 1f), 19, 0, 7);
		unk_0x1EC301670B54C6DE(iVar6, &iVar2, &uVar3, &uVar4, &uVar5);
		unk_0x536F1BE96C726C4B(vParam0, 0.7f, 1, 0, 0, bParam1);
		if (!iVar2 == 0)
		{
			unk_0x28F5E4DA506AC0CA(vParam0, 6f, 1, 0, 1, 1, bParam1, 0);
			if (bParam1)
			{
				unk_0x75CFD6AD66ADFDD1(vParam0, 6f, 17);
			}
			else
			{
				unk_0x75CFD6AD66ADFDD1(vParam0, 6f, 16);
			}
		}
		unk_0x7800CEC090C01D4D(vParam0, 2.5f);
	}
}

float func_125(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	func_126(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x755FF954DAE327E1((Var0.f_1 - Var1.f_1));
}

void func_126(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_129(iParam0);
		if (iVar0 != 0)
		{
			func_127(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_127(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_128(iParam0, &Global_1315812);
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

void func_128(int iParam0, var uParam1)
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

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_130(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

Vector3 func_131(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_139())
	{
		iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_137(iVar1, &iVar0))
		{
			func_133(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x046C362CF15F1935(&iVar1);
			}
		}
	}
}

void func_133(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x7D3E8C4CDBD80BDF(iParam0);
	if (unk_0xE9F78D191AD5EDBA(uVar0))
	{
		if (Global_1574404 && unk_0x4906F8A34E9F4814(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x01F5D18733B68F5F(uVar0, 1, 1, func_136());
			return;
		}
		else if (func_135())
		{
			func_134(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x01F5D18733B68F5F(uVar0, iParam2, 1, func_136());
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
			{
				unk_0xC946D7F48EF6851A(iParam2);
			}
		}
		else
		{
			unk_0x01F5D18733B68F5F(uVar0, iParam1, 1, func_136());
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
			{
				unk_0xC946D7F48EF6851A(iParam1);
			}
		}
	}
}

int func_134(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			unk_0xAE11B02DFBAC93C8(iVar1, 1);
			if (iParam1 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
			{
				unk_0xF8FCA0CD5B6B1935(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0xAFE0D3608EDA7039(iParam0))
	{
		unk_0xA0925CF67527FA9F(iParam0, 1);
		return 1;
	}
	else
	{
		unk_0x0C8A454B494DAA0D(iParam0);
	}
	return 0;
}

bool func_135()
{
	return Global_1574422;
}

int func_136()
{
	if (func_36() != 0)
	{
		return 0;
	}
	if (!func_79(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0, int iParam1)
{
	if (func_138(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, var uParam1)
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

int func_139()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_140(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_126(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return unk_0x755FF954DAE327E1((vVar0.z - vVar1.z));
}

int func_141()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar3 = { func_131(unk_0xD803B885F5E47A62()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_9(iVar1, 1, 1))
		{
			if (unk_0xE3614539F8B5C807(unk_0x9539D44F3E4492F6(iVar1)))
			{
				if (!iVar1 == unk_0xD803B885F5E47A62())
				{
					if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
					{
						fVar2 = vmag(func_131(iVar1) - vVar3);
						if (fVar2 < 0.2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	
	iVar0 = unk_0x9ED5EF2B539772F7(&Global_1315847);
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar5 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (!unk_0x437347B10A200C4B(iVar5, 0))
		{
			iVar6 = unk_0x134B62B726CEC8E6(iVar5);
			vVar7 = { unk_0x68F4C0EC296D3901(iVar5, 1) };
			fVar8 = unk_0xD9522BA9E27E1349(iVar5);
		}
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Global_1315847[iVar4]))
		{
			if (!unk_0x437347B10A200C4B(Global_1315847[iVar4], 0) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1315847[iVar4], 0))
			{
			}
			else if (func_151(Global_1315847[iVar4]))
			{
			}
			else if (!func_147(Global_1315847[iVar4]))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(Global_1315847[iVar4], 0) };
				fVar2 = unk_0xD9522BA9E27E1349(Global_1315847[iVar4]);
				iVar3 = unk_0x134B62B726CEC8E6(Global_1315847[iVar4]);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (func_146(vVar1, fVar2, iVar3, vVar7, fVar8, iVar6, 0))
					{
						return 1;
					}
				}
				else if (func_143(vParam0, vVar1, fVar2, iVar3, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar4++;
	}
	return 0;
}

int func_143(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_145(iParam3, 1008981770))
	{
		func_144(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x0399732A9EBC368E(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_144(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_117(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_126(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x755FF954DAE327E1((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x755FF954DAE327E1((vVar2.x - vVar1.x));
}

float func_145(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_126(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_146(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_143(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_126(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_117(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_117(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x755FF954DAE327E1((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_117(&vVar6, 0f, 0f, fParam1);
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
		if (func_143(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_146(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBBA8A868118C90ED(iParam0, -1, 0))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar0))
			{
				iVar1 = unk_0x83FACCC48B68F9D1(iVar0);
				if (func_9(iVar1, 0, 0))
				{
					if (func_148(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (func_150())
	{
		if (func_149(unk_0xE86C2816EDC6CAF0(iParam0), &(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_340.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_150()
{
	if (Global_2405072.f_2870 > -1)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x565509D116400807(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_152()
{
	if (!Global_2405072.f_704)
	{
		Global_2405072.f_704 = 1;
	}
	func_576(0);
	if (Global_2405072.f_2664)
	{
		func_153();
		Global_2405072.f_2664 = 0;
	}
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 11;
}

void func_153()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	vector3 vVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar43;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		if ((!Global_2405072.f_45.f_52 && !Global_2405072.f_45.f_53) && !Global_2405072.f_2665)
		{
			if (unk_0xDE5F9F54005367A1(vVar1, &vVar2, 1, 1077936128, 0))
			{
				vVar2.z = (vVar2.z + 1f);
				bVar3 = true;
				if (!vdist(vVar1, vVar2) < 50f || Global_2405072.f_45.f_52)
				{
					bVar3 = false;
				}
			}
		}
		else if (Global_2405072.f_2665)
		{
			Global_2405072.f_2665 = 0;
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			fVar4 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
		}
		fVar5 = 3f;
		vVar6 = { unk_0x08D89CE2E20AE305(unk_0x16F2683693E537C9()) };
		vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
		vVar6 = { vVar6 * Vector(fVar5, fVar5, fVar5) };
		vVar7 = { vVar6 };
		func_117(&vVar7, 0f, 0f, -45f);
		vVar8 = { vVar6 };
		func_117(&vVar8, 0f, 0f, -90f);
		vVar9 = { vVar6 };
		func_117(&vVar9, 0f, 0f, 45f);
		vVar10 = { vVar6 };
		func_117(&vVar10, 0f, 0f, 90f);
		if (bVar3)
		{
			vVar11 = { vVar2 - vVar1 };
			vVar12 = { func_157(vVar11, 0f, 0f, 1f) };
			vVar12 = { vVar12 / FtoV(vmag(vVar12)) };
			vVar12 = { vVar12 * Vector(0.2f, 0.2f, 0.2f) };
		}
		vVar13 = { vVar1 + vVar6 };
		vVar14 = { vVar1 + vVar7 };
		vVar15 = { vVar1 + vVar8 };
		vVar16 = { vVar1 + vVar9 };
		vVar17 = { vVar1 + vVar10 };
		iVar18 = unk_0x6D4C9F7CF124AE37(vVar1, vVar13, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		iVar19 = unk_0x6D4C9F7CF124AE37(vVar1, vVar14, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		iVar20 = unk_0x6D4C9F7CF124AE37(vVar1, vVar15, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		iVar21 = unk_0x6D4C9F7CF124AE37(vVar1, vVar16, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		iVar22 = unk_0x6D4C9F7CF124AE37(vVar1, vVar17, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		if (bVar3)
		{
			iVar23 = unk_0x6D4C9F7CF124AE37(vVar1, vVar2, 0.2f, 257, unk_0x16F2683693E537C9(), 7);
		}
		iVar33 = unk_0x1EC301670B54C6DE(iVar18, &iVar24, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x1EC301670B54C6DE(iVar19, &iVar25, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x1EC301670B54C6DE(iVar20, &iVar26, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x1EC301670B54C6DE(iVar21, &iVar27, &uVar30, &uVar31, &uVar32);
		iVar33 = unk_0x1EC301670B54C6DE(iVar22, &iVar28, &uVar30, &uVar31, &uVar32);
		if (bVar3)
		{
			iVar33 = unk_0x1EC301670B54C6DE(iVar23, &iVar29, &uVar30, &uVar31, &uVar32);
		}
		if (iVar33 == 0)
		{
		}
		iVar34 = (iVar34 + iVar24);
		iVar35 = (iVar35 + iVar25);
		iVar36 = (iVar36 + iVar26);
		iVar37 = (iVar37 + iVar27);
		iVar38 = (iVar38 + iVar28);
		if (bVar3)
		{
			iVar39 = (iVar39 + iVar29);
		}
		iVar40 = 99;
		iVar41 = -1;
		if (iVar34 < iVar40)
		{
			iVar40 = iVar34;
			iVar41 = 0;
		}
		if (iVar35 < iVar40)
		{
			iVar40 = iVar35;
			iVar41 = 1;
		}
		if (iVar37 < iVar40)
		{
			iVar40 = iVar37;
			iVar41 = 2;
		}
		if (iVar36 < iVar40)
		{
			iVar40 = iVar36;
			iVar41 = 3;
		}
		if (iVar38 < iVar40)
		{
			iVar40 = iVar38;
			iVar41 = 4;
		}
		if (bVar3)
		{
			if (iVar39 < iVar40)
			{
				iVar40 = iVar39;
				iVar41 = 5;
			}
		}
		if (bVar3 && iVar39 == 0)
		{
			fVar4 = unk_0xE7D606C557C86100(vVar11.x, vVar11.y);
			func_156(fVar4);
			return;
		}
		else if (iVar34 == 0)
		{
			return;
		}
		else if (Global_2405072.f_45.f_52)
		{
			vVar42 = { Global_2405072.f_45.f_49 - vVar1 };
			fVar43 = func_155(vVar42, vVar15);
			if (fVar43 <= 0f)
			{
				if (iVar35 == 0)
				{
					fVar4 = (fVar4 + -45f);
					func_156(fVar4);
					return;
				}
				else if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_156(fVar4);
					return;
				}
				else if (iVar37 == 0)
				{
					fVar4 = (fVar4 + 45f);
					func_156(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_156(fVar4);
					return;
				}
				else
				{
					func_154(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar37 == 0)
			{
				fVar4 = (fVar4 + 45f);
				func_156(fVar4);
				return;
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_156(fVar4);
				return;
			}
			else if (iVar35 == 0)
			{
				fVar4 = (fVar4 + -45f);
				func_156(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_156(fVar4);
				return;
			}
			else
			{
				func_154(iVar41, fVar4, vVar11);
			}
		}
		else
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 2);
			if (iVar0 == 0)
			{
				if (iVar36 == 0)
				{
					fVar4 = (fVar4 + -90f);
					func_156(fVar4);
					return;
				}
				else if (iVar38 == 0)
				{
					fVar4 = (fVar4 + 90f);
					func_156(fVar4);
					return;
				}
				else
				{
					func_154(iVar41, fVar4, vVar11);
				}
			}
			else if (iVar38 == 0)
			{
				fVar4 = (fVar4 + 90f);
				func_156(fVar4);
				return;
			}
			else if (iVar36 == 0)
			{
				fVar4 = (fVar4 + -90f);
				func_156(fVar4);
				return;
			}
			else
			{
				func_154(iVar41, fVar4, vVar11);
			}
		}
	}
}

void func_154(int iParam0, float fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_156(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_156(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_156(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_156(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0xE7D606C557C86100(Param2, Param2.f_1);
			func_156(fParam1);
			return;
			break;
	}
}

float func_155(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_156(float fParam0)
{
	if (!unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam0);
	}
	func_122(0f, 1);
}

Vector3 func_157(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

int func_158(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_22211.f_6 = 1;
	if (Global_2439138.f_1233 && Global_2439138.f_1241)
	{
		func_163(0, bParam7);
		return 1;
	}
	if (unk_0x991B1F0980C62628() && !bParam7)
	{
		if (Global_2439138.f_1233)
		{
			func_163(0, bParam7);
		}
		return 0;
	}
	if ((unk_0xEB880D98B5988D0C() && !bParam7) && !unk_0x0C2635BB5127C8FB())
	{
		return 0;
	}
	if (!func_113())
	{
		if (func_871(unk_0xD803B885F5E47A62(), 1, 0) && !(func_162() || func_161()))
		{
			if (((bParam7 && func_9(unk_0xD803B885F5E47A62(), 1, 0)) && unk_0x991B1F0980C62628()) && Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_222 == 1)
			{
			}
			else if (func_870() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2439138.f_1233 && !bParam9)
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
		if ((unk_0x755FF954DAE327E1((vVar1.x - vParam0.x)) < 0.2f && unk_0x755FF954DAE327E1((vVar1.y - vParam0.y)) < 0.2f) && unk_0x755FF954DAE327E1((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x755FF954DAE327E1(fVar2) < 1f)
			{
				Global_2439138.f_1233 = 0;
				Global_2439138.f_1234 = 0;
				if (unk_0x0C2635BB5127C8FB())
				{
					unk_0x5D29A7ED2621B332();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2439138.f_1235 || !vParam0.y == Global_2439138.f_1235.f_1) || !vParam0.z == Global_2439138.f_1235.f_2) || !fParam1 == Global_2439138.f_1238)
	{
		if (Global_2439138.f_1233 == 1)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2439138.f_1239) < func_869(0))
			{
				return 0;
			}
			unk_0x5D29A7ED2621B332();
			Global_2439138.f_1234 = 1;
		}
		else
		{
			Global_2439138.f_1234 = 0;
		}
		Global_2439138.f_1235 = { vParam0 };
		Global_2439138.f_1238 = fParam1;
		Global_2439138.f_1233 = 0;
	}
	if (!Global_2439138.f_1233 && !unk_0x0C2635BB5127C8FB())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_98796.f_1357[44], 16))
			{
				func_160(0);
			}
			if (!unk_0xC4AEA6B98479242E(unk_0x16F2683693E537C9(), &(Global_2405072.f_499)))
			{
				Global_2405072.f_499 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0x6CFEA4CFD9C496C8(iVar0))
				{
					Global_2439138.f_1240 = 0;
				}
			}
		}
		if (Global_2439138.f_1240 > -1)
		{
			Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xAFE0D3608EDA7039(iVar0))
						{
							unk_0xA47B46945FF6DE74(iVar0, vParam0, 0, 1, 1, 1);
							unk_0xD8F6A53F4799FAFE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0x0C8A454B494DAA0D(iVar0);
						}
					}
					else
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, 0, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
					}
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
				}
				func_163(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0x066C43E677C08D5C();
				unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vParam0, fParam1, bParam2, iParam8, 0);
			}
			Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1233 = 1;
		}
	}
	if (Global_2439138.f_1233)
	{
		Global_22211.f_6 = 1;
		Global_2439138.f_1239 = unk_0x2B6E0A53779D29EA();
		if (Global_2439138.f_1240 > -1)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			}
			if (func_159(&(Global_2439138.f_1240), vParam0, fParam1, iVar0))
			{
				func_163(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), Global_2439138.f_1235) < 2f)
				{
					if (unk_0x0C2635BB5127C8FB())
					{
						unk_0x5D29A7ED2621B332();
					}
					func_163(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x0C2635BB5127C8FB())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2439138.f_1241 = 1;
						return 0;
					}
				}
				func_163(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_159(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(Global_2439138.f_1242) && !unk_0x437347B10A200C4B(Global_2439138.f_1242, 0))
	{
		unk_0x0C8A454B494DAA0D(Global_2439138.f_1242);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2439138.f_1242 = iParam3;
			unk_0x0C8A454B494DAA0D(Global_2439138.f_1242);
			if (unk_0xAFE0D3608EDA7039(Global_2439138.f_1242))
			{
				if (!unk_0x437347B10A200C4B(Global_2439138.f_1242, 0))
				{
					unk_0xD8F6A53F4799FAFE(Global_2439138.f_1242, fParam2);
					unk_0xA47B46945FF6DE74(Global_2439138.f_1242, vParam1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405072.f_2682;
	if ((unk_0x7E369B13C7215476() && Global_2405072.f_2680 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405072.f_2679)
	{
		if (!unk_0xEFFB47DC2D8F23F9())
		{
			Global_2405072.f_2679 = iVar0;
		}
	}
}

bool func_161()
{
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 12)) && Global_1695468 == 8);
}

bool func_162()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && unk_0xEAE0D21A50E6C7F4(Global_1695469, 0));
}

void func_163(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
	}
	if (!bParam1)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x0C2635BB5127C8FB())
	{
		unk_0x5D29A7ED2621B332();
	}
	func_165();
	if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 14) && !func_112())
	{
		func_164();
	}
}

void func_164()
{
	Global_2546219.f_82 = 1;
}

void func_165()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

int func_166(int iParam0)
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

void func_167(vector3 vParam0)
{
	Global_2405072.f_45.f_299 = 1;
	Global_2405072.f_45.f_296 = { vParam0 };
	Global_2405072.f_45.f_315 = unk_0x04787588C7E736F8(unk_0x6794171A1021C2D8(), -9999);
	func_168(1);
}

void func_168(bool bParam0)
{
	float fVar0;
	
	if (Global_1574410 || Global_2405072.f_45.f_300)
	{
		if (Global_2405072.f_45.f_299)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (Global_1574414)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())) && ((vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), Global_2405072.f_45.f_296) < fVar0 || func_172(unk_0xD803B885F5E47A62())) || func_871(unk_0xD803B885F5E47A62(), 0, 0)))
				{
					if ((func_171() || func_170()) || func_169())
					{
						if (unk_0x06F8112AA79C53D9(0, 351))
						{
							Global_2405072.f_45.f_315 = unk_0x6794171A1021C2D8();
							func_132(1000, 0, 1);
						}
						else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_2405072.f_45.f_315, unk_0x6794171A1021C2D8())) > 2000)
						{
							func_132(2500, 0, bParam0);
							Global_2405072.f_45.f_315 = unk_0x6794171A1021C2D8();
						}
					}
					else
					{
						Global_2405072.f_45.f_315 = unk_0x6794171A1021C2D8();
						func_132(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2405072.f_45.f_296 = { 0f, 0f, 0f };
					Global_2405072.f_45.f_299 = 0;
				}
			}
		}
	}
}

int func_169()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == 1489874736)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_207 != 0)
	{
		return 1;
	}
	return 0;
}

void func_173(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	bVar0 = false;
	if (unk_0xAFE0D3608EDA7039(iParam1))
	{
		bVar0 = true;
	}
	if (!func_234(iParam0, iParam1, bVar0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
		vVar2 = { unk_0x68F4C0EC296D3901(iParam1, 0) };
		if (!vdist(vVar1, vVar2) < 5f || !iParam2 == -1)
		{
			vVar2.z = (vVar2.z + -4f);
			vVar2.x = (vVar2.x + -4f);
			vVar2.y = (vVar2.y + -4f);
			unk_0xA47B46945FF6DE74(iParam0, vVar2, 0, 0, 0, 1);
		}
		unk_0x327AAEE25F323797(iParam0);
		unk_0x20641932E5104B25(iParam0, true, 0);
		unk_0x1E9649458B15960F(iParam0, false);
		unk_0x46CB381A452EF99D(unk_0x16F2683693E537C9(), 0);
		unk_0x9DD8618CA5BF832D(iParam0, 150, 1);
		unk_0x9DD8618CA5BF832D(iParam0, 151, 1);
		if (bParam3)
		{
			unk_0xF821F915BC24D246(iParam0, iParam1, iParam2);
		}
		else
		{
			unk_0x5B1D360B9C6F0A09(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		unk_0xF895E10BF4C72645(iParam0, 0, 0);
		unk_0x9DD8618CA5BF832D(iParam0, 150, 1);
		if (Global_1574410)
		{
			if (func_232(unk_0x134B62B726CEC8E6(iParam1)))
			{
				func_174(0);
			}
		}
	}
}

void func_174(bool bParam0)
{
	struct<14> Var0;
	int iVar1;
	
	if (!unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
	{
		if (Global_4456448.f_232919 == 0)
		{
			if ((Global_2405072.f_2690 == -99 || Global_2405072.f_2690 == 0) || !func_228(unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 14, Global_2405072.f_2690, -1))
			{
				if (!bParam0)
				{
					iVar1 = func_34(588, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2405072.f_2690;
			}
			Var0 = { func_176(func_227(), 14, iVar1, -1) };
			func_175(unk_0x16F2683693E537C9(), 14, iVar1);
			func_934(unk_0x16F2683693E537C9(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_934(unk_0x16F2683693E537C9(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 380, true);
		}
	}
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam1 == iParam1)
	{
	}
	if (iParam2 == iParam2)
	{
	}
	switch (iVar0)
	{
		case joaat("mp_m_freemode_01"):
			break;
		
		case joaat("mp_f_freemode_01"):
			break;
	}
}

struct<14> func_176(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_226();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_210(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_177(iParam1, iParam2, iParam3);
	}
	return Global_76434[0 /*14*/];
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_209(iParam1, iParam2);
			break;
		
		case 11:
			func_208(iParam1, iParam2);
			break;
		
		case 8:
			func_201(iParam1, iParam2);
			break;
		
		case 9:
			func_200(iParam1, iParam2);
			break;
		
		case 3:
			func_199(iParam1, iParam2);
			break;
		
		case 4:
			func_198(iParam1, iParam2);
			break;
		
		case 6:
			func_197(iParam1, iParam2);
			break;
		
		case 1:
			func_196(iParam1, iParam2);
			break;
		
		case 7:
			func_195(iParam1, iParam2);
			break;
		
		case 10:
			func_194(iParam1, iParam2);
			break;
		
		case 14:
			func_193(iParam1, iParam2);
			break;
		
		case 12:
			func_192(iParam1, iParam2);
			break;
		
		case 5:
			func_191(iParam1, iParam2);
			break;
		
		case 0:
			func_188(iParam1, iParam2);
			break;
		
		case 13:
			func_178(iParam1);
			break;
	}
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_187(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_186(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_184(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_184(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_184(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_184(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_184(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_184(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_183(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_183(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_183(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_186(14))
			{
				return;
			}
			iVar0 = func_34(func_182(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_34(func_181(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_180(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_34(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_180(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_181(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_185(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_34(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

bool func_185(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

bool func_186(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_76434[0 /*14*/].f_5 = 4;
	func_189(iVar0, iParam0, 0, iParam1);
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_179(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_179(&(Global_76434[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_179(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_2621444 = Var11.f_1;
			Global_2621445 = Var11;
			func_179(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_190(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_179(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_191(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_192(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_193(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2044[iVar9]) * Global_291063.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2165[iVar10]) * Global_291063.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2190[iVar11]) * Global_291063.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_2319[iVar12]) * Global_291063.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 327, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_26));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_56));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_28));
			}
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_194(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_195(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 55, iParam1);
			if (Global_76434[0 /*14*/].f_7 > 0)
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_58));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 26, iParam1);
			if (Global_76434[0 /*14*/].f_7 > 0)
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_2017[iVar8]) * Global_291063.f_29));
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1760[iVar8]) * Global_291063.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 256, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_25));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_198(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_1246[iVar8]) * Global_291063.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 256, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_23));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_199(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 16, iParam1);
		return;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 36, iParam1);
		return;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 136, iParam1);
			if (Global_76434[0 /*14*/].f_7 > 0)
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_202(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_202(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_1503[iVar9]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_24));
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

bool func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_205(iParam0) == 11511)
	{
		return 0;
	}
	iVar0 = func_204(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_203(iVar1));
}

int func_203(int iParam0)
{
	return (iParam0 % 32);
}

int func_204(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(func_205(uParam0), iParam1, 0);
	return iVar0;
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_207(iVar0);
	if ((func_36() == 0 || func_206() == 0) || (func_36() == 999 && func_206() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
		}
	}
	return 11511;
}

int func_206()
{
	return Global_30769;
}

int func_207(int iParam0)
{
	return (iParam0 / 32);
}

void func_208(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_202(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[4]) * Global_291063.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_202(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_24));
		}
		else
		{
			iVar1 = round(((to_float(40) * Global_262145.f_1503[9]) * Global_291063.f_24));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1503[iVar8]) * Global_291063.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_76434[0 /*14*/].f_5 = 4;
		func_189(iVar7, iParam0, 256, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_24));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_209(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 4;
			func_189(iVar7, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_225(iParam1, iParam2);
			break;
		
		case 11:
			func_224(iParam1, iParam2);
			break;
		
		case 8:
			func_223(iParam1, iParam2);
			break;
		
		case 9:
			func_222(iParam1, iParam2);
			break;
		
		case 3:
			func_221(iParam1, iParam2);
			break;
		
		case 4:
			func_220(iParam1, iParam2);
			break;
		
		case 6:
			func_219(iParam1, iParam2);
			break;
		
		case 1:
			func_218(iParam1, iParam2);
			break;
		
		case 7:
			func_217(iParam1, iParam2);
			break;
		
		case 10:
			func_216(iParam1, iParam2);
			break;
		
		case 14:
			func_215(iParam1, iParam2);
			break;
		
		case 12:
			func_214(iParam1, iParam2);
			break;
		
		case 5:
			func_213(iParam1, iParam2);
			break;
		
		case 0:
			func_212(iParam1, iParam2);
			break;
		
		case 13:
			func_211(iParam1);
			break;
	}
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_76434[0 /*14*/].f_5 = 3;
	func_189(iVar0, iParam0, 0, iParam1);
}

void func_213(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_214(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_215(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 320;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 245;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 415;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 315;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 265;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 570;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 560;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 260;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 100;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1715;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 3900;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1550;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 4250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 4460;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 4970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 290;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 305;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 4170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 335;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 4940;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 275;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 3620;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 350;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 365;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 380;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 380;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 950;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 630;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 265;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 675;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 4050;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 4060;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 1760;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 1375;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 1440;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 1445;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 530;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 785;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 850;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 4260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 4310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 4130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1885;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 1500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 1565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 4290;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 4150;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 4295;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 6240;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 4955;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 5590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4920;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 4990;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 4780;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 4775;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 4800;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 385;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 3655;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 4055;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 3595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 3605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 3645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 2230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 1690;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 2715;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 2395;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 485;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 695;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = round(((to_float(iVar1) * Global_262145.f_955[iVar9]) * Global_291063.f_18));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1076[iVar10]) * Global_291063.f_19));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1101[iVar11]) * Global_291063.f_20));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 15)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_1230[iVar12]) * Global_291063.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_76434[0 /*14*/].f_5 = 3;
		func_189(iVar7, iParam0, 327, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, -1757550583, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_18));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 97230661, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_20));
			}
			else if (unk_0x1A5A491D253EA7BA(Global_2621444, 1147826474, 1))
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_21));
			}
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_216(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 7, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_217(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 40:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 41:
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 0;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar3 = 12;
			iVar4 = 1;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar3 = 12;
			iVar4 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 90:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 92, iParam1);
			if (Global_76434[0 /*14*/].f_7 > 0)
			{
				Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_57));
			}
			return;
			break;
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_218(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_928[iVar8]) * Global_291063.f_22));
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_219(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 690;
			break;
	}
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_671[iVar8]) * Global_291063.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 >= 256)
	{
		Global_76434[0 /*14*/].f_5 = 3;
		func_189(iVar7, iParam0, 256, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_17));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_220(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = round(((to_float(iVar1) * Global_262145.f_176[iVar8]) * Global_291063.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_76434[0 /*14*/].f_5 = 3;
		func_189(iVar7, iParam0, 256, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_15));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_221(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 16, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_222(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 36:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 37:
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 38:
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 40:
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 41:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 42:
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 43:
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 44:
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 45:
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 46, iParam1);
			return;
			break;
	}
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_223(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_202(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round((to_float(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = round((to_float(45) * Global_262145.f_433[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round((to_float(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_202(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round((to_float(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = round((to_float(55) * Global_262145.f_433[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round((to_float(iVar1) * Global_262145.f_433[iVar11]));
		}
	}
	iVar1 = round((to_float(iVar1) * Global_291063.f_16));
	if (iParam0 >= 241)
	{
		Global_76434[0 /*14*/].f_5 = 3;
		func_189(iVar7, iParam0, 241, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_224(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_202(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(((to_float(1250) * Global_262145.f_2980) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(45) * Global_262145.f_433[23]) * Global_291063.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = round(((to_float(450) * Global_262145.f_2979) * Global_291063.f_16));
	}
	else if (iParam0 == 28)
	{
		if (func_202(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(((to_float(500) * Global_262145.f_2978) * Global_291063.f_16));
		}
		else
		{
			iVar1 = round(((to_float(55) * Global_262145.f_433[28]) * Global_291063.f_16));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = round(((to_float(iVar1) * Global_262145.f_433[iVar8]) * Global_291063.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_76434[0 /*14*/].f_5 = 3;
		func_189(iVar7, iParam0, 237, iParam1);
		if (Global_76434[0 /*14*/].f_7 > 0)
		{
			Global_76434[0 /*14*/].f_7 = round((to_float(Global_76434[0 /*14*/].f_7) * Global_291063.f_16));
		}
	}
	else
	{
		func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_225(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[15]));
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[16]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[17]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[18]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[19]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[20]));
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[21]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[22]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[23]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[24]));
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[25]));
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[26]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[27]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[28]));
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[29]));
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[30]));
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[31]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[32]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[33]));
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[34]));
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[35]));
			break;
		
		case 43:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[36]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[37]));
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[38]));
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[39]));
			break;
		
		case 49:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[40]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[41]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[42]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[43]));
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[44]));
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[45]));
			break;
		
		case 55:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[46]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[47]));
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[48]));
			break;
		
		case 60:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[49]));
			break;
		
		case 61:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[50]));
			break;
		
		case 62:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[51]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[52]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[53]));
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[54]));
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[55]));
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[56]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[57]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[58]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[59]));
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[60]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[61]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[62]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[63]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[64]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[65]));
			break;
		
		case 79:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[66]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[67]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[68]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[69]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[70]));
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = round((to_float(iVar1) * Global_262145.f_2533[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_76434[0 /*14*/].f_5 = 3;
			func_189(iVar7, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_179(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_226()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_227()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_229(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_229(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_231(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_230(iParam0, func_190(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_190(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_76556.f_13[iParam2] = Var5.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_232(int iParam0)
{
	if ((((iParam0 == joaat("blazer") || iParam0 == joaat("sanchez")) || iParam0 == joaat("sanchez2")) || iParam0 == joaat("blazer5")) || func_233(iParam0))
	{
		return 1;
	}
	if (unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 340154634:
		case -1960756985:
		case 1492612435:
		case 1181339704:
			return 1;
		
		default:
	}
	return 0;
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0))
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
		if (!bParam2)
		{
			if (iVar0 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 == joaat("v_res_d_dildo_b") || iParam0 == joaat("prop_cs_dildo_01"))
	{
		return 1;
	}
	return 0;
}

int func_236(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (func_567(unk_0xD803B885F5E47A62()))
	{
	}
	iVar0 = func_599();
	unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
	unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), true, 0);
	unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 150, 1);
	Global_2405072.f_45.f_174 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4456448 == 0 && !Global_1312791)
	{
		if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_99.f_28 < 4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_99.f_28 > -1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_99.f_28 /*15700*/].f_9569, 8))
			{
				bVar4 = true;
				if (!unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_99.f_28 /*15700*/].f_9569, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_565() && !bVar3)
	{
		if (func_564())
		{
			if (func_558(&iVar2))
			{
				if (func_557(iVar2))
				{
					if (!bVar4)
					{
						func_173(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0), 0, 0);
						return 1;
					}
					else if (func_556() != -1 || unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_99.f_28 /*15700*/].f_9569, 10))
					{
						Global_2405072.f_45.f_172 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0);
						iVar5 = func_555(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0), 1, 0, 0, -3);
						if (unk_0xBBA8A868118C90ED(Global_2405072.f_45.f_172, func_556(), 0))
						{
							iVar5 = func_556();
						}
						func_173(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0), iVar5, 0);
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar2), 0), 0))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2405072.f_45.f_68)
	{
		if (func_552(iVar0))
		{
			if ((func_868() && unk_0x134B62B726CEC8E6(iVar0) == Global_2405072.f_45.f_67) || !func_868())
			{
				if (!func_551(unk_0x68F4C0EC296D3901(iVar0, 1), 30f, 1, 1, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						unk_0xA47B46945FF6DE74(iVar0, func_550(Global_2405072.f_45.f_69.f_66, vParam0), 1, 0, 0, 1);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam1);
					}
					func_577(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1574410 || func_548())
	{
		func_598(&iVar0);
	}
	if (func_573())
	{
		func_598(&(Global_2405072.f_45.f_172));
		if (func_547())
		{
			if (func_321(func_550(Global_2405072.f_45.f_69.f_66, vParam0), fParam1, 1, func_546(), 0, 1, 0))
			{
				func_242(func_319());
				return 1;
			}
		}
		else if (func_239(&uVar1, Global_2405072.f_45.f_69.f_66, func_550(Global_2405072.f_45.f_69.f_66, vParam0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2405072.f_45.f_175)
			{
				unk_0xD5A0214B20BCBAD8(unk_0xB177666FAB6F4417(uVar1), 1);
			}
			if (Global_2405072.f_45.f_176)
			{
				unk_0xA22F71BBC8173C39(unk_0xB177666FAB6F4417(uVar1), false);
			}
			if (Global_2405072.f_45.f_177)
			{
				if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
				{
					unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(uVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2405072.f_45.f_178)
			{
				if (unk_0xF1D385D359D58F72("MPBitset", 3))
				{
					if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(uVar1), "MPBitset"))
					{
						iVar6 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(uVar1), "MPBitset");
					}
					unk_0x5D96D8530B3D0904(&iVar6, 11);
					unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(uVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2405072.f_45.f_180 > -1)
			{
				unk_0xC002508A277213DE(unk_0xB177666FAB6F4417(uVar1), Global_2405072.f_45.f_180, Global_2405072.f_45.f_180);
				unk_0x58A0C35FA7CA6162(unk_0xB177666FAB6F4417(uVar1), Global_2405072.f_45.f_180, Global_2405072.f_45.f_180);
			}
			if (Global_2405072.f_45.f_179)
			{
				func_238(unk_0xB177666FAB6F4417(uVar1));
			}
			func_237(unk_0xB177666FAB6F4417(uVar1), Global_2405072.f_45.f_69);
			func_242(unk_0xB177666FAB6F4417(uVar1));
			return 1;
		}
	}
	return 0;
}

void func_237(int iParam0, struct<10> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93)
{
	if (unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		if (Param1.f_9[48] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 48, Param1.f_9[48]);
		}
		if (Param1.f_9[10] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 10, Param1.f_9[10]);
		}
		if (Param1.f_9[4] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 4, Param1.f_9[4]);
		}
		if (Param1.f_9[24] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 24, Param1.f_9[24]);
		}
		if (Param1.f_9[23] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 23, Param1.f_9[23]);
		}
		if (Param1.f_9[1] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 1, Param1.f_9[1]);
		}
		if (Param1.f_9[2] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 2, Param1.f_9[2]);
		}
		if (Param1.f_9[3] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 3, Param1.f_9[3]);
		}
		if (Param1.f_9[5] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 5, Param1.f_9[5]);
		}
		if (Param1.f_9[42] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 42, Param1.f_9[42]);
		}
		if (Param1.f_9[6] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 6, Param1.f_9[6]);
		}
		if (Param1.f_9[7] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 7, Param1.f_9[7]);
		}
		if (Param1.f_9[0] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 0, Param1.f_9[0]);
		}
		if (Param1.f_9[8] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 8, Param1.f_9[8]);
		}
		if (Param1.f_9[9] != 0)
		{
			unk_0x5BD52554D5750EFF(iParam0, 9, Param1.f_9[9]);
		}
	}
}

void func_238(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xAFE0D3608EDA7039(iParam0))
		{
			if (Global_1687545 > -1)
			{
				if (unk_0xF1D385D359D58F72("GBMissionFire", 3))
				{
					if (!unk_0x30F813723591D02E(iParam0, "GBMissionFire"))
					{
						unk_0xB7E567188872123E(iParam0, "GBMissionFire", Global_1687545);
					}
				}
			}
		}
	}
}

int func_239(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_240(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_240(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_241(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
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

int func_241(int iParam0, vector3 vParam1, int iParam2)
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

void func_242(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
	}
	if (!unk_0xAF6690C489CC6203(iParam0))
	{
		if (unk_0x7DDF43006A714856(iParam0))
		{
			unk_0x73270B3C9CC833FD(iParam0, 0, 1);
		}
	}
	unk_0x4A4806F9D471E491(iParam0, false, 0);
	unk_0x1E9649458B15960F(iParam0, true);
	func_577(iParam0);
	Global_2405072.f_45.f_172 = iParam0;
	Global_1322992 = iParam0;
	if (Global_2405072.f_45.f_171)
	{
		func_273(iParam0, 1);
	}
	else
	{
		func_243(iParam0, func_272(unk_0xD803B885F5E47A62()));
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
	}
	Global_2405072.f_45.f_174 = 1;
}

void func_243(int iParam0, struct<13> Param1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			func_244(iParam0, &(Global_2405072.f_45.f_69));
			Global_2405072.f_45.f_171 = 1;
			Global_2405072.f_45.f_69.f_81 = { Param1 };
		}
	}
}

void func_244(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_267(iParam0, uParam1);
		unk_0x0674E58A79778E99(&(uParam1->f_95), 0);
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 11))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (func_265(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (func_263(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0xC34A9D742FC099DC(iParam0);
		uParam1->f_79 = unk_0x56C99E8E9DFE7674(iParam0);
		uParam1->f_80 = unk_0x800653D55FA8A604(iParam0);
		unk_0xD4CBD8C151BEDEBC(iParam0, &(uParam1->f_97));
		unk_0x03049DEEE9D497F3(iParam0, &(uParam1->f_99));
		uParam1->f_98 = unk_0x85A165AC5F83C73A(iParam0);
		iVar0 = func_253(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		unk_0x0674E58A79778E99(&(uParam1->f_95), 3);
		if (!iVar0 == func_252())
		{
			unk_0x379CDB376207BF68(iVar0, &(uParam1->f_81), 13);
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 1);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_95), 1);
		}
		if (iVar0 == unk_0xD803B885F5E47A62())
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_251(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_95), 2);
		}
		if (unk_0x4906F8A34E9F4814(iParam0, -1812949672))
		{
			uParam1->f_99 = func_245(func_248(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

var func_245(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_247(iParam0);
	func_246(iVar1, &uVar0);
	return uVar0;
}

bool func_246(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x8CD06866876216F2() && func_249()) && Global_1314033)
	{
		if ((iParam0 == Global_1314034 && iParam1 == Global_1314035) && iParam2 == Global_1314036)
		{
			return 13;
		}
	}
	return 0;
}

int func_249()
{
	struct<13> Var0;
	
	if (unk_0x1963B11DE70153E0())
	{
		if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xC2F420D189FDB329())
		{
			Var0 = { func_250() };
			if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_250()
{
	struct<13> Var0;
	
	unk_0xB6D2E6F743DD2459(&Var0, 13);
	return Var0;
}

int func_251(int iParam0)
{
	if (Global_2537071.f_296 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	return -1;
}

int func_253(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (func_262(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0xF1D385D359D58F72("PV_Slot", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0x1E2DFB0EF4BB4566(iParam0, "PV_Slot");
				}
			}
			return func_261(iParam0);
		}
		else if (func_260(iParam0, 1))
		{
			return func_259(iParam0, 1, 0);
		}
		else if (func_258(iParam0, 1))
		{
			return func_257(iParam0, 1, 0);
		}
		else if (func_256(iParam0, 1))
		{
			*uParam1 = 2;
			return func_254(iParam0);
		}
		else if (!unk_0xBBA8A868118C90ED(iParam0, -1, 0))
		{
			iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					*uParam1 = 3;
					return unk_0x83FACCC48B68F9D1(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0xD803B885F5E47A62();
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Veh_Modded_By_Player");
	return func_255(iVar0, 0, 1, 0);
}

int func_255(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0x117658E336116132(iVar1);
			if (func_9(iVar0, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iVar0)))
			{
				if (iParam0 == unk_0xE86C2816EDC6CAF0(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_9(iParam3, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iParam3)))
	{
		if (iParam0 == unk_0xE86C2816EDC6CAF0(iParam3))
		{
			return iParam3;
		}
	}
	return func_252();
}

int func_256(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_257(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_258(iParam0, 1))
	{
		return func_252();
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Hacker_Truck");
		return func_255(iVar0, 0, bParam1, iParam2);
	}
	return func_252();
}

int func_258(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_260(iParam0, 1))
	{
		return func_252();
	}
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Truck");
		return func_255(iVar0, 0, bParam1, iParam2);
	}
	return func_252();
}

int func_260(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	if (!func_262(iParam0, 1))
	{
		return func_252();
	}
	iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle");
	return func_255(iVar0, 0, 1, 0);
}

int func_262(int iParam0, bool bParam1)
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

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x990F85C762AD7FB5(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x8CD06866876216F2())
			{
				iVar1 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iVar1 = unk_0x1C0640BA9A7327B3();
			}
			iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(iVar1, Global_1315731));
			iVar3 = 20000;
			if (Global_1574410)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x7AD884DD1BBC40C0(iParam0);
				func_264(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_264(int iParam0)
{
	int iVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 16))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 16);
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

int func_265(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x92C2290AA46758D3(iParam0, 0) || func_266(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				return unk_0xEAE0D21A50E6C7F4(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_267(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_271(uParam1);
		uParam1->f_66 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_67 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_69 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_70 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x812A93B166D97C60(iParam0, 2))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (unk_0x812A93B166D97C60(iParam0, 3))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (unk_0x812A93B166D97C60(iParam0, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_270(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			uParam1->f_68 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 3:
					case 0:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0674E58A79778E99(&(uParam1->f_77), 23);
						unk_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_269(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_269(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_271(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

struct<13> func_272(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_273(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		func_274(iParam0, &(Global_2405072.f_45.f_69), bParam1, 1, 0);
	}
}

void func_274(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if ((unk_0x8CD06866876216F2() && unk_0xAFE0D3608EDA7039(iParam0)) || !unk_0x8CD06866876216F2())
		{
			if (unk_0xD803B885F5E47A62() != func_252())
			{
				uParam1->f_100 = unk_0xD803B885F5E47A62();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_308(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x29B31C96D81CCB42(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x0BB648AB646638F4(iParam0, uParam1->f_79);
			}
			if (func_307(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0x0947AEED9914905B(iParam0, uParam1->f_80);
			unk_0x149017A9F302A237(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x0674D459BB0558AA(iParam0, uParam1->f_99);
			}
			if (func_306(iParam0))
			{
				func_305(iParam0, func_248(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x2BCBD8AFBF4C2021(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x58D0AB20C3845D07(iParam0, uParam1->f_98);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 0))
			{
				func_285(iParam0, &(uParam1->f_81));
			}
			if ((!func_282(4) && !bParam4) && !unk_0xA14BB9332558B949())
			{
				func_277(iParam0);
			}
			if (func_276(unk_0x134B62B726CEC8E6(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						break;
					
					case 1:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 0, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 1, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0x7AFDC9F56E7BB635(iParam0, 16);
						if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
						}
						else
						{
							unk_0xEE6A1776A67F70C1(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0x7AFDC9F56E7BB635(iParam0, 16);
							if ((unk_0x4906F8A34E9F4814(iParam0, -1146969353) || unk_0x4906F8A34E9F4814(iParam0, 1542143200)) || unk_0x4906F8A34E9F4814(iParam0, -579747861))
							{
								unk_0xEE6A1776A67F70C1(iParam0, 16, 2, false);
							}
							else
							{
								unk_0xEE6A1776A67F70C1(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 1) && unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 2))
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0xF1D385D359D58F72("Player_Vehicle", 3))
					{
						unk_0xB7E567188872123E(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 1) && unk_0xEAE0D21A50E6C7F4(uParam1->f_95, 2))
					{
						if (unk_0xF1D385D359D58F72("Veh_Modded_By_Player", 3))
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()));
						}
					}
					else if (unk_0xF1D385D359D58F72("Veh_Modded_By_Player", 3))
					{
						if (func_275(uParam1->f_81) && unk_0x60F025D317CE2512(&(uParam1->f_81)))
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", unk_0xE86C2816EDC6CAF0(unk_0xE7A1FE6C75BB88BA(&(uParam1->f_81))));
						}
						else
						{
							unk_0xB7E567188872123E(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_275(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1653666139:
		case 1945374990:
		case 219613597:
		case 444994115:
		case -27326686:
		case -801550069:
		case 668439077:
		case -688189648:
		case 540101442:
		case 628003514:
		case 1637620610:
		case -1812949672:
		case 679453769:
		case -1694081890:
		case -1375060657:
		case -1106120762:
		case 1537277726:
		case -755532233:
		case -1374500452:
		case 1909700336:
		case -2042350822:
		case -1293924613:
		case -1478704292:
		case 1239571361:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 1721676810:
		case 840387324:
		case -715746948:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 2139203625:
		case -1890996696:
		case 2038858402:
			return 1;
			break;
	}
	return 0;
}

void func_277(int iParam0)
{
	vector3 vVar0;
	
	if (Global_262145.f_19684)
	{
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			if (unk_0xECE0BE5313FD8BDA(iParam0))
			{
				vVar0.x = unk_0x134B62B726CEC8E6(iParam0);
				vVar0.y = unk_0x12AB0310C2281427(unk_0x7888A5D2621AAF2D(iParam0));
				if (unk_0xF1D385D359D58F72("RandomID", 3))
				{
					if (!unk_0x30F813723591D02E(iParam0, "RandomID"))
					{
						vVar0.z = unk_0x09AC81E49EA267F7(0, 65535);
						unk_0xB7E567188872123E(iParam0, "RandomID", vVar0.z);
					}
					else
					{
						vVar0.z = unk_0x1E2DFB0EF4BB4566(iParam0, "RandomID");
					}
				}
				func_278(vVar0);
			}
		}
	}
}

void func_278(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = -582258758;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = vParam0.x;
	vVar0.f_2.f_1 = vParam0.y;
	vVar0.f_2.f_2 = vParam0.z;
	unk_0xFB061A86A7AC749F(1, &vVar0, 5, func_279(1, 1));
}

var func_279(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_280(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_280(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_281(-1, 0) == 8;
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

int func_281(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_282(int iParam0)
{
	int iVar0;
	
	if (func_284())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_40(iVar0) == iParam0)
			{
				if (func_283(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_283(int iParam0)
{
	return func_41(iParam0, 6, 1);
}

bool func_284()
{
	return Global_98796.f_346 > 0;
}

int func_285(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_291(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x990F85C762AD7FB5(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_265(iParam0))
		{
			iVar1 = unk_0xE7A1FE6C75BB88BA(uParam1);
			if (func_286(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_263(iParam0))
	{
	}
	return 0;
}

int func_286(int iParam0, int iParam1)
{
	func_290();
	if (Global_1312467.f_18 != 0 || unk_0x46514FD149D4885F(*iParam0))
	{
		Global_1676268.f_11 = unk_0x5D542E6B2AF6BF09(*iParam0);
		if (Global_1676268.f_11 < 0f)
		{
			Global_1676268.f_11 = 0f;
		}
	}
	func_288(*iParam0, &Global_1676268, &(Global_1676268.f_1), &(Global_1676268.f_4), &(Global_1676268.f_7), &(Global_1676268.f_10));
	Global_1676268.f_1.f_2 = (Global_1676268.f_1.f_2 - Global_1676268.f_11);
	if (Global_1676268.f_4.f_2 < 0f)
	{
		Global_1676268.f_12 = 1;
	}
	Global_1676268.f_13 = 200;
	if (unk_0x134B62B726CEC8E6(*iParam0) == joaat("windsor") || unk_0x134B62B726CEC8E6(*iParam0) == 1561920505)
	{
		Global_1676268.f_13 = 255;
	}
	if (Global_1676268.f_12)
	{
		if (func_287(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13))
		{
			if (unk_0x8CD06866876216F2())
			{
				Global_1315731 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				Global_1315731 = unk_0x1C0640BA9A7327B3();
			}
			return 1;
		}
	}
	else
	{
		Global_1676268.f_14 = { Global_1676268.f_1 };
		Global_1676268.f_14 = (Global_1676268.f_14 * -1f);
		Global_1676268.f_17 = { Global_1676268.f_4 };
		Global_1676268.f_17 = (Global_1676268.f_17 * -1f);
		Global_1676268.f_20 = { Global_1676268.f_7 };
		Global_1676268.f_20.f_1 = (Global_1676268.f_20.f_1 * -1f);
		Global_1676268.f_20.f_2 = (Global_1676268.f_20.f_2 * -1f);
		if (!unk_0x92C2290AA46758D3(*iParam0, 0))
		{
			Global_1676268.f_23 = unk_0x990F85C762AD7FB5(*iParam0, 0);
		}
		else
		{
			Global_1676268.f_23 = 3;
		}
		Global_1676268.f_24 = unk_0x990F85C762AD7FB5(*iParam0, 1);
		if (!unk_0x92C2290AA46758D3(*iParam0, 1))
		{
			Global_1676268.f_24 = unk_0x990F85C762AD7FB5(*iParam0, 1);
		}
		else
		{
			Global_1676268.f_24 = 3;
		}
		if (((Global_1676268.f_23 == 0 && func_287(iParam0, iParam1, Global_1676268, Global_1676268.f_1, Global_1676268.f_4, Global_1676268.f_7, Global_1676268.f_10, 0, Global_1676268.f_13)) || Global_1676268.f_23 != 0) && ((Global_1676268.f_24 == 0 && func_287(iParam0, iParam1, Global_1676268, Global_1676268.f_14, Global_1676268.f_17, Global_1676268.f_20, Global_1676268.f_10, 1, Global_1676268.f_13)) || Global_1676268.f_24 != 0))
		{
			if (unk_0x8CD06866876216F2())
			{
				Global_1315731 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				Global_1315731 = unk_0x1C0640BA9A7327B3();
			}
			return 1;
		}
	}
	return 0;
}

bool func_287(var uParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, var uParam6, int iParam7, var uParam8)
{
	return unk_0xA12D050F82517F80(*uParam0, unk_0x9539D44F3E4492F6(iParam1), uParam2, vParam3, vParam4, vParam5, uParam6, iParam7, uParam8);
}

int func_288(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
	if (((!func_289(Global_1676294, 0f, 0f, 0f, 0) && !func_289(Global_1676297, 0f, 0f, 0f, 0)) && !func_289(Global_1676300, 0f, 0f, 0f, 0)) && !Global_1676303 == 0f)
	{
		*uParam2 = { Global_1676294 };
		*uParam3 = { Global_1676297 };
		*uParam4 = { Global_1676300 };
		*uParam5 = Global_1676303;
		return 1;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0xF653B9B22DA806A9(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case -1405937764:
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case 719660200:
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -982130927:
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 159274291:
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 223240013:
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -32236122:
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 433954513:
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 884483972:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case -1210451983:
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case 1356124575:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case 1504306544:
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1939284556:
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 917809321:
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 177270108:
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 387748548:
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1392481335:
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -998177792:
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case -1242608589:
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case 1841130506:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 2049897956:
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case -2118308144:
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1483171323:
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 886810209:
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -1693015116:
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -692292317:
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case -1435527158:
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -212993243:
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1561920505:
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case -1848994066:
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1741861769:
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1104234922:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1871995513:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1352136073:
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -313185164:
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 600450546:
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -410205223:
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 867799010:
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1529242755:
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 903794909:
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1532697517:
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 15219735:
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 661493923:
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 838982985:
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -391595372:
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case -121446169:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case 1909189272:
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case 1617472902:
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1267543371:
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 931280609:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1046206681:
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1259134696:
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1031562256:
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case -376434238:
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -986944621:
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1134706562:
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2120700196:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -214906006:
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -988501280:
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 1254014755:
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 219613597:
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1945374990:
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1653666139:
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case 500482303:
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 2044532910:
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -638562243:
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -420911112:
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 321186144:
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -54332285:
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 2069146067:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case -1988428699:
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 668439077:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case -1694081890:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case -2042350822:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case 2139203625:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1890996696:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 2038858402:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -801550069:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 679453769:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1909700336:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1566607184:
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1591739866:
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case 1279262537:
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -688189648:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1375060657:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -1293924613:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2096690334:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1009171724:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1924800695:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1744505657:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 444994115:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1637620610:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -755532233:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 628003514:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1537277726:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1239571361:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -331467772:
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 1721676810:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 840387324:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -715746948:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -507495760:
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2061049099:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 373261600:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case 1742022738:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1168952148:
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1456744817:
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -49115651:
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 540101442:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1106120762:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1478704292:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1349095620:
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 686471183:
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 310284501:
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1323778901:
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case 722226637:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case 1934384720:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case -362150785:
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1854776567:
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -208911803:
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -664141241:
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -941272559:
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case -882629065:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1620126302:
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -1829436850:
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -447711397:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1416466158:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case -1804415708:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -324618589:
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case 1044193113:
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1862507111:
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -682108547:
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case 83136452:
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1118611807:
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 987469656:
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -834353991:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 1456336509:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case 872704284:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 409049982:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 394110044:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case 1693751655:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 2031587082:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 960812448:
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1756021720:
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case -1132721664:
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case 1284356689:
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -2122646867:
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case 1717532765:
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case -2098954619:
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case -913589546:
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case 1802742206:
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case 67753863:
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case -1810806490:
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -631322662:
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -838099166:
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1728685474:
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case -1358197432:
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1107404867:
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}
	return 1;
}

bool func_289(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_290()
{
	Global_1676268 = 0;
	Global_1676268.f_1 = { 0f, 0f, 0f };
	Global_1676268.f_4 = { 0f, 0f, 0f };
	Global_1676268.f_7 = { 0f, 0f, 0f };
	Global_1676268.f_10 = 0f;
	Global_1676268.f_11 = 0f;
	Global_1676268.f_12 = 0;
	Global_1676268.f_13 = 0;
	Global_1676268.f_14 = { 0f, 0f, 0f };
	Global_1676268.f_17 = { 0f, 0f, 0f };
	Global_1676268.f_20 = { 0f, 0f, 0f };
	Global_1676268.f_23 = 0;
	Global_1676268.f_24 = 0;
}

int func_291(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x83F946529771616E(uParam1, 13) && unk_0x60F025D317CE2512(uParam1))
	{
		iVar0 = unk_0xE7A1FE6C75BB88BA(uParam1);
	}
	else
	{
		iVar0 = func_252();
	}
	bVar1 = false;
	if (iVar0 == unk_0xD803B885F5E47A62())
	{
		if (func_302(15, 0))
		{
			bVar1 = true;
		}
		else if (func_298(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0)) || !unk_0xAFE0D3608EDA7039(iParam0)) || !unk_0x05449BDA851F5199(0, -1, 1)) || !((unk_0x83F946529771616E(uParam1, 13) && unk_0x080E9D045AEE5605()) && unk_0xF2EC2A39FF9E838D(uParam1))) || iVar0 == func_252()) || !func_9(iVar0, 0, 0)) || !bVar1) || func_292(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_292(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 1;
	}
	if (func_294(unk_0xD803B885F5E47A62()) == 3)
	{
		if (func_293(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1676293)
	{
		return 1;
	}
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case -27326686:
		case -1812949672:
		case -1374500452:
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case 408825843:
		case 740289177:
		case 1492612435:
		case 1181339704:
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x0ECB5CA5140957AD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x0ECB5CA5140957AD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case 1234311532:
			return 1;
			break;
		
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1489874736:
			return 1;
			break;
		
		case -1988428699:
			return 1;
			break;
		
		case -286046740:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 916547552:
		case joaat("blazer2"):
		case joaat("burrito2"):
			return 1;
			break;
		
		case -2098954619:
			if ((unk_0x0ECB5CA5140957AD(iParam0, 7) == 0 || unk_0x0ECB5CA5140957AD(iParam0, 7) == 1) || unk_0x0ECB5CA5140957AD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case 67753863:
			if ((unk_0x0ECB5CA5140957AD(iParam0, 45) == 4 || unk_0x0ECB5CA5140957AD(iParam0, 45) == 5) || unk_0x0ECB5CA5140957AD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_293(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_294(int iParam0)
{
	if (func_297(iParam0) == 233)
	{
		return func_295(iParam0);
	}
	return -1;
}

int func_295(int iParam0)
{
	if (func_296(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_296(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (func_296(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_298(bool bParam0)
{
	return func_299(unk_0xD803B885F5E47A62(), bParam0);
}

int func_299(int iParam0, bool bParam1)
{
	return func_300(iParam0, bParam1, 1);
}

int func_300(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_252())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_301(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_252() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1)
{
	if (iParam0 != func_252())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_252())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_302(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_303(iParam0);
	iVar1 = iParam0;
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_203(iVar1));
}

int func_303(int iParam0)
{
	int iVar0;
	
	iVar0 = func_34(func_304(iParam0), -1, 0);
	return iVar0;
}

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_207(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

void func_305(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_247(iParam1);
	func_246(iVar1, &uVar0);
	unk_0x0674D459BB0558AA(iParam0, uVar0);
}

int func_306(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -1812949672:
			return 1;
			break;
	}
	return 0;
}

bool func_307(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0.2f;
			break;
		
		case -32878452:
			*uParam1 = 0.15f;
			break;
		
		case -1007528109:
			*uParam1 = 0.3f;
			break;
		
		case -42959138:
			*uParam1 = 0.5f;
			break;
		
		case -1763555241:
			*uParam1 = 0.3f;
			break;
		
		case -749299473:
			*uParam1 = 0.4f;
			break;
		
		case 1565978651:
			*uParam1 = 0.3f;
			break;
		
		case 1036591958:
			*uParam1 = 0.4f;
			break;
		
		case -1386191424:
			*uParam1 = 0.4f;
			break;
		
		case -975345305:
			*uParam1 = 0.4f;
			break;
		
		case -392675425:
			*uParam1 = 0.3f;
			break;
		
		case -1700874274:
			*uParam1 = 0.5f;
			break;
		
		case 1043222410:
			*uParam1 = 0.15f;
			break;
		
		case -1435527158:
			*uParam1 = 0.6f;
			break;
		
		case 668439077:
			*uParam1 = 1f;
			break;
		
		case -1694081890:
			*uParam1 = 1f;
			break;
		
		case -2042350822:
			*uParam1 = 1f;
			break;
		
		case 2139203625:
			*uParam1 = 1f;
			break;
		
		case -1890996696:
			*uParam1 = 1f;
			break;
		
		case 2038858402:
			*uParam1 = 1f;
			break;
		
		case -801550069:
			*uParam1 = 1f;
			break;
		
		case 679453769:
			*uParam1 = 1f;
			break;
		
		case 1909700336:
			*uParam1 = 1f;
			break;
		
		case -27326686:
			*uParam1 = 1f;
			break;
		
		case -1812949672:
			*uParam1 = 1f;
			break;
		
		case -1374500452:
			*uParam1 = 1f;
			break;
		
		case -688189648:
			*uParam1 = 1f;
			break;
		
		case -1375060657:
			*uParam1 = 1f;
			break;
		
		case -1293924613:
			*uParam1 = 1f;
			break;
		
		case 1009171724:
			*uParam1 = 1f;
			break;
		
		case -1924800695:
			*uParam1 = 1f;
			break;
		
		case -1744505657:
			*uParam1 = 1f;
			break;
		
		case 444994115:
			*uParam1 = 1f;
			break;
		
		case 1637620610:
			*uParam1 = 1f;
			break;
		
		case -755532233:
			*uParam1 = 1f;
			break;
		
		case 628003514:
			*uParam1 = 1f;
			break;
		
		case 1537277726:
			*uParam1 = 1f;
			break;
		
		case 1239571361:
			*uParam1 = 1f;
			break;
		
		case 1721676810:
			*uParam1 = 1f;
			break;
		
		case 840387324:
			*uParam1 = 1f;
			break;
		
		case -715746948:
			*uParam1 = 1f;
			break;
		
		case -1146969353:
			*uParam1 = 1f;
			break;
		
		case 1542143200:
			*uParam1 = 1f;
			break;
		
		case -579747861:
			*uParam1 = 1f;
			break;
		
		case -2061049099:
			*uParam1 = 1f;
			break;
		
		case 373261600:
			*uParam1 = 1f;
			break;
		
		case 1742022738:
			*uParam1 = 1f;
			break;
		
		case 540101442:
			*uParam1 = 1f;
			break;
		
		case -1106120762:
			*uParam1 = 1f;
			break;
		
		case -1478704292:
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_308(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_317(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 10) != 0)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0);
			if (unk_0x0ECB5CA5140957AD(iParam0, 5) != -1)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 1);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_316(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_315())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_270(uParam1->f_66))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_65);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_70);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x7726E33AC3B60544(iParam0, 2, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		unk_0x7726E33AC3B60544(iParam0, 3, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		unk_0x7726E33AC3B60544(iParam0, 0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		unk_0x7726E33AC3B60544(iParam0, 1, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (unk_0x579935D850368851(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_314(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_314(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x429C172A00A5F89B(iParam0, 1);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_309(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_268(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == joaat("sheava") || unk_0x134B62B726CEC8E6(iParam0) == joaat("omnis")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("le7b"))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0) == -1)
			{
				unk_0xD3421E391490133B(iParam0, 1, false);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_66) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					unk_0xB58CA658A628ED02(iParam0, 2);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 3);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 4);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_309(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xF95FF0A179413A39(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 255);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_313(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_312(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_312(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_311(iParam0);
	if (func_310(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, 1);
	}
	return 1;
}

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_311(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case -1700874274:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 4) == 0)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 13);
			}
			break;
	}
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 38);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B3F576B41FA183(iParam0) > 0)
	{
		unk_0xF95FF0A179413A39(iParam0, 0);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 24);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 24);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("tornado6") || unk_0x134B62B726CEC8E6(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 24);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_315()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_316(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_318(unk_0xD803B885F5E47A62(), -1))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	if (func_294(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_293(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_9(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319()
{
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_320())
	{
		if (unk_0xE9F78D191AD5EDBA(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38) && unk_0xE5DBF9B6126856CA(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38))
		{
			return unk_0xB177666FAB6F4417(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38);
		}
	}
	return Global_2537071.f_296;
}

int func_320()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_321(vector3 vParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<30> Var7;
	struct<30> Var8;
	struct<30> Var9;
	bool bVar10;
	int iVar11;
	
	if (!func_545(8))
	{
		func_543(0, 0, 0, 0, 0, 0, 0);
		func_542(8);
	}
	if (Global_1323615[iParam3 /*141*/].f_66 == 0)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam3 /*141*/].f_102, 6))
	{
		if (!func_545(16))
		{
			func_542(16);
		}
	}
	func_542(31);
	if (!func_541())
	{
		if (!func_545(0))
		{
			if (!unk_0xE9F78D191AD5EDBA(func_539(0)))
			{
				if (unk_0xE75B31D140F2F10B(1))
				{
					if (!func_538())
					{
						if (!func_534())
						{
							func_530(iParam3);
							iVar1 = Global_1323615[iParam3 /*141*/].f_66;
							if (!func_529(iVar1) || !func_522(iVar1, 1))
							{
								if (!func_521(iVar1))
								{
								}
								else
								{
									func_518(iParam3, -1);
								}
								return 1;
							}
							else if (func_517(iVar1))
							{
								iVar3 = 0;
								if ((unk_0xDD0E7998AE8AD485() - Global_2439138.f_502.f_54) < 15)
								{
									iVar3 = 1;
								}
								if (func_516())
								{
									iVar3 = 1;
								}
								if (unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), Global_2405072.f_26.f_3) < 15000)
								{
									Global_2405072.f_26.f_3 = unk_0x6794171A1021C2D8();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2451426.f_2846.f_147)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (func_515(unk_0xD803B885F5E47A62()) || (unk_0x757EF87A33649210() || unk_0x991B1F0980C62628()))
								{
									bVar5 = false;
								}
								if (Global_2451426.f_2846.f_147)
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam3 /*141*/].f_102, 11))
									{
										unk_0x0674E58A79778E99(&(Global_1323615[iParam3 /*141*/].f_102), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam3 /*141*/].f_102, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2439138.f_502.f_65[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2439138.f_502.f_72[iVar2];
										iVar2++;
									}
									if (func_405(-145.7451f, -1167.937f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_405(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam3 /*141*/].f_102, 6))
								{
									if (func_397(&vParam0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (unk_0x31609A585163CBAC(unk_0xFBD08BECC9B87937(vParam0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2439138.f_502.f_65[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2439138.f_502.f_72[iVar2];
											iVar2++;
										}
										if (func_405(vParam0, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2439138.f_502.f_65[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2439138.f_502.f_72[iVar2];
											iVar2++;
										}
										if (func_405(vParam0, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									unk_0x536F1BE96C726C4B(vParam0, 2f, 1, 0, 0, false);
									func_239(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38), iVar1, vParam0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									unk_0x7F379C0A8EB2F4D0(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38, unk_0xD803B885F5E47A62(), 1);
									iVar0 = unk_0xB177666FAB6F4417(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_38);
									unk_0x120A395B0ECB8EA5(iVar0, 1);
									unk_0x8E44A2B22BBBAFE4(iVar0, 1);
									unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
									func_378(&iVar0, iParam3);
									if (func_377())
									{
										unk_0x1E9649458B15960F(iVar0, true);
									}
									func_375(iVar0, iParam3);
									if (!bVar5)
									{
										unk_0xBA2CB24C70C8E726(iVar0, 1, 1);
									}
									if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam3 /*141*/].f_102, 11))
									{
										func_542(34);
									}
									else
									{
										func_374(34);
									}
									if (iParam3 >= 0 && iParam3 < 307)
									{
										unk_0x5D96D8530B3D0904(&(Global_1323615[iParam3 /*141*/].f_102), 0);
										iVar11 = 0;
										while (iVar11 < 307)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar11 /*141*/].f_102, 11))
												{
													unk_0x0674E58A79778E99(&(Global_1323615[iVar11 /*141*/].f_102), 11);
													bVar10 = true;
												}
												if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar11 /*141*/].f_102, 0))
												{
													unk_0x0674E58A79778E99(&(Global_1323615[iVar11 /*141*/].f_102), 0);
													bVar10 = true;
												}
												if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar11 /*141*/].f_102, 6))
												{
													func_357(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													func_336(iVar11, &(Global_1323615[iVar11 /*141*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (unk_0x587993B327460A82(iVar0, 0))
									{
										if (unk_0xEAE0D21A50E6C7F4(Global_2451426.f_5858, 2))
										{
											unk_0x821D9A7077DBCDBC(iVar0, 1);
										}
									}
									func_336(iParam3, &(Global_1323615[iParam3 /*141*/]), 1, -1, 0, 0);
									func_323(iVar0);
									unk_0x71EDC33E5A423750(iVar0, 1);
									if (bParam2)
									{
										unk_0x71199B01895C6202(iVar1);
									}
									func_542(0);
									func_374(10);
									func_374(1);
									func_374(2);
									func_374(9);
									func_374(12);
									func_374(31);
									func_374(32);
									func_374(33);
									func_374(35);
									func_374(37);
									func_374(38);
									func_322();
									Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_118 = 0;
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_322()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_2439138.f_502.f_65[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_2439138.f_502.f_72[iVar0] = 0f;
		iVar0++;
	}
}

void func_323(int iParam0)
{
	unk_0x08FB50D664C536FE(iParam0, 0);
	unk_0x5980AF2A1EC56A46(iParam0, 0);
	unk_0x316958DDB94DF3FC(iParam0, 0);
	unk_0x750A9DEB80D6992C(iParam0, false);
	func_329(iParam0, 0);
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_328())
	{
		if (unk_0xE9F78D191AD5EDBA(func_539(0)))
		{
			if (iParam0 == func_319())
			{
				unk_0xC9FB9DE28AB7B041(func_539(0), 0, 1);
			}
		}
	}
	if (!func_325(unk_0x134B62B726CEC8E6(iParam0), 0) && !func_324(unk_0x134B62B726CEC8E6(iParam0)))
	{
		Global_2537071.f_903 = func_546();
	}
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("blazer5"):
		case 219613597:
		case 1945374990:
		case 1653666139:
		case -1881846085:
			return 1;
		
		case 433954513:
			if (func_327(Global_4456448.f_232883) || func_326(Global_4456448.f_232883))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			break;
		
		case 1356124575:
		case joaat("technical"):
			if (func_327(Global_4456448.f_232883))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_326(int iParam0)
{
	return iParam0 == 50;
}

bool func_327(int iParam0)
{
	return iParam0 == 49;
}

int func_328()
{
	switch (func_36())
	{
		case 0:
			return func_320();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_335(iParam0) || iParam1)
	{
		if (!Global_1574410 || (Global_1574420 && !func_334()))
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == joaat("ruiner2"))
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_19203);
				unk_0x7525DBE216A4074E(iParam0, 0, Global_262145.f_19204);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == joaat("blazer5"))
			{
				unk_0x7525DBE216A4074E(iParam0, 0, Global_262145.f_19205);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 562680400)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21240);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1897744184)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21241);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 884483972)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21242);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -1210451983)
			{
				unk_0x7525DBE216A4074E(iParam0, 0, Global_262145.f_21243);
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21244);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -1881846085)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21245);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -692292317)
			{
				unk_0x7525DBE216A4074E(iParam0, 0, Global_262145.f_23477);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1489874736)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23478);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1483171323)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23479);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 886810209)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23480);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 886810209)
			{
				unk_0x7525DBE216A4074E(iParam0, 2, Global_262145.f_23481);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -212993243)
			{
				unk_0x7525DBE216A4074E(iParam0, 4, Global_262145.f_23482);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -1435527158)
			{
				unk_0x7525DBE216A4074E(iParam0, 3, Global_262145.f_23483);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -1435527158)
			{
				unk_0x7525DBE216A4074E(iParam0, 4, Global_262145.f_23483);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1653666139)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23735);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1653666139)
			{
				unk_0x7525DBE216A4074E(iParam0, 2, Global_262145.f_23736);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1945374990)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23737);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 2069146067)
			{
				unk_0x7525DBE216A4074E(iParam0, 2, Global_262145.f_24176);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == 1692272545)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23739);
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -638562243)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_23740);
			}
			if (unk_0xA14BB9332558B949())
			{
				if ((unk_0x134B62B726CEC8E6(iParam0) == 1721676810 || unk_0x134B62B726CEC8E6(iParam0) == 840387324) || unk_0x134B62B726CEC8E6(iParam0) == -715746948)
				{
					unk_0x7525DBE216A4074E(iParam0, 0, Global_262145.f_25132);
				}
				if ((unk_0x134B62B726CEC8E6(iParam0) == 444994115 || unk_0x134B62B726CEC8E6(iParam0) == 1637620610) || unk_0x134B62B726CEC8E6(iParam0) == -755532233)
				{
					unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_25133);
				}
				if (unk_0x134B62B726CEC8E6(iParam0) == 628003514 || unk_0x134B62B726CEC8E6(iParam0) == 1239571361)
				{
					unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_25134);
				}
				if (unk_0x134B62B726CEC8E6(iParam0) == 1537277726)
				{
					unk_0x7525DBE216A4074E(iParam0, 2, Global_262145.f_25134);
				}
			}
			if (unk_0x134B62B726CEC8E6(iParam0) == -1242608589)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, Global_262145.f_21462);
			}
			if (func_333(iParam0))
			{
				switch (unk_0x0ECB5CA5140957AD(iParam0, 9))
				{
					case 0:
						if (unk_0x4906F8A34E9F4814(iParam0, 447548909))
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_23484);
						}
						else
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_21458);
						}
						break;
					
					case 1:
						if (unk_0x4906F8A34E9F4814(iParam0, 447548909))
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_23484);
						}
						else
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_21459);
						}
						break;
					
					case 2:
						if (unk_0x4906F8A34E9F4814(iParam0, 447548909))
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_23484);
						}
						else
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_21460);
						}
						break;
					
					case 3:
						if (unk_0x4906F8A34E9F4814(iParam0, 447548909))
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_23484);
						}
						else
						{
							unk_0xDFD8018D82C6CBE3(iParam0, Global_262145.f_21461);
						}
						break;
					}
			}
			if (func_330(iParam0))
			{
				if (unk_0x4906F8A34E9F4814(iParam0, 2069146067))
				{
					if (unk_0x0ECB5CA5140957AD(iParam0, 6) == 1)
					{
						unk_0x8F7610E25EC85D98(iParam0, Global_262145.f_21463);
					}
					else if (unk_0x0ECB5CA5140957AD(iParam0, 6) == 0)
					{
						unk_0x8F7610E25EC85D98(iParam0, Global_262145.f_21464);
					}
				}
				else if (unk_0x0ECB5CA5140957AD(iParam0, 1) == 1)
				{
					unk_0x8F7610E25EC85D98(iParam0, Global_262145.f_21463);
				}
				else if (unk_0x0ECB5CA5140957AD(iParam0, 1) == 0)
				{
					unk_0x8F7610E25EC85D98(iParam0, Global_262145.f_21464);
				}
			}
		}
		if (!Global_1574410)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == joaat("voltic2"))
			{
				unk_0xC3B45EE9D8D04D1D(iParam0, Global_262145.f_19202);
				unk_0xB84644F50998E996(iParam0, 1);
			}
		}
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("boxville5"))
		{
			unk_0xD8110893D0BDC749(iParam0, 0);
		}
		if (unk_0xF1D385D359D58F72("MPBitset", 3))
		{
			if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
			}
			unk_0x5D96D8530B3D0904(&iVar0, 24);
			unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
		}
	}
	else if (Global_1574410 && !Global_1574420)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("ruiner2"))
		{
			if (unk_0xDB27027E7B153EDC(iParam0, 0) != 0)
			{
				unk_0x7525DBE216A4074E(iParam0, 0, 0);
			}
			if (unk_0xDB27027E7B153EDC(iParam0, 1) != 0)
			{
				unk_0x7525DBE216A4074E(iParam0, 1, 0);
			}
			if (!unk_0xE50B34B9A5A2C550(50118905, iParam0, unk_0x16F2683693E537C9()))
			{
				unk_0xE793BC58855FBB31(1, 50118905, iParam0, unk_0x16F2683693E537C9());
			}
			if (!unk_0xE50B34B9A5A2C550(84788907, iParam0, unk_0x16F2683693E537C9()))
			{
				unk_0xE793BC58855FBB31(1, 84788907, iParam0, unk_0x16F2683693E537C9());
			}
		}
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("blazer5"))
		{
			if (unk_0xDB27027E7B153EDC(iParam0, 0) != 0)
			{
				unk_0x7525DBE216A4074E(iParam0, 0, 0);
			}
			if (!unk_0xE50B34B9A5A2C550(-335937730, iParam0, unk_0x16F2683693E537C9()))
			{
				unk_0xE793BC58855FBB31(1, -335937730, iParam0, unk_0x16F2683693E537C9());
			}
		}
	}
}

int func_330(int iParam0)
{
	if (func_332(iParam0))
	{
		if (unk_0x0ECB5CA5140957AD(iParam0, 1) == 1)
		{
			return 1;
		}
		if (unk_0x4906F8A34E9F4814(iParam0, 2069146067))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 6) == 1)
			{
				return 1;
			}
		}
	}
	if (func_331(iParam0))
	{
		if (unk_0x0ECB5CA5140957AD(iParam0, 1) == 0)
		{
			return 1;
		}
		if (unk_0x4906F8A34E9F4814(iParam0, 2069146067))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 6) == 0)
			{
				return 1;
			}
		}
	}
	if (func_331(iParam0))
	{
		if (unk_0xB97ED2A4B56844DE(iParam0, 20))
		{
			return 1;
		}
	}
	return 0;
}

int func_331(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case -1386191424:
		case -975345305:
		case -392675425:
		case 1043222410:
		case -749299473:
		case -1700874274:
		case 1036591958:
		case -42959138:
		case 1565978651:
		case -32878452:
		case -1984275979:
		case -1523619738:
		case -1763555241:
		case -1007528109:
		case -2118308144:
		case 1181327175:
		case 1489874736:
		case 447548909:
		case 2069146067:
		case 1692272545:
			return 1;
			break;
	}
	return 0;
}

int func_332(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("cuban800"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case 1043222410:
		case -32878452:
		case -42959138:
		case 1036591958:
		case -1386191424:
		case 1565978651:
		case -1984275979:
		case -1523619738:
		case -1763555241:
		case -1007528109:
		case -2118308144:
		case 1181327175:
		case 1489874736:
		case 447548909:
		case 2069146067:
		case 1692272545:
			return 1;
			break;
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("cuban800"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case 1043222410:
		case -32878452:
		case -42959138:
		case -2118308144:
		case 1181327175:
		case 447548909:
			if (unk_0x0ECB5CA5140957AD(iParam0, 9) > -1)
			{
				return 1;
			}
			break;
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == 1692272545)
	{
		if (unk_0x0ECB5CA5140957AD(iParam0, 9) > -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_334()
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_28, 18) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				if (unk_0xEAE0D21A50E6C7F4(iVar0, 24))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_336(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_356() /*10930*/].f_6174.f_1274 = unk_0xDD0E7998AE8AD485();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_355(1411, iParam0);
	func_354(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_355(1412, iParam0);
	func_354(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_353(iParam0))
	{
	}
	else
	{
		iVar1 = func_355(1413, iParam0);
		func_354(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_355(1414, iParam0) + iVar0);
				func_354(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_352(iParam0) + (iVar0 - 25));
				func_354(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_355(1439, iParam0) + iVar0);
			func_354(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_355(1441, iParam0);
	func_354(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_355(1442, iParam0);
	func_354(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_355(1443, iParam0);
	func_354(iVar1, uParam1->f_64, iParam3, 1);
	if (func_353(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_355(1444, iParam0);
		func_354(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_355(1445, iParam0);
	func_354(iVar1, uParam1->f_67, iParam3, 1);
	if (func_353(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_355(1446, iParam0);
		func_354(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_355(1447, iParam0);
	func_354(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_355(1448, iParam0);
	func_354(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_355(1449, iParam0);
	func_354(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_355(1450, iParam0);
	func_354(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_355(1451, iParam0);
	func_354(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_355(1452, iParam0);
	func_354(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_355(1453, iParam0);
	func_354(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_355(1454, iParam0);
	func_354(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_355(1455, iParam0);
	func_354(iVar1, uParam1->f_8, iParam3, 1);
	if (func_353(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_355(3880, iParam0);
		func_354(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_355(3881, iParam0);
		func_354(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_355(3882, iParam0);
		func_354(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_351(iParam0);
		func_354(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_350(iParam0);
		func_354(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_339(iParam0);
		func_354(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_356() /*10930*/].f_6174.f_1274;
	if (bParam5)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
	}
	func_33(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_33(func_338(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_33(func_338(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_33(func_338(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_33(func_338(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_33(func_338(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_33(func_338(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_353(iParam0))
	{
		if (!unk_0xEA6BC48857E0AC4C(&(uParam1->f_1)))
		{
			func_337(func_338(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_337(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xF345706D5D9F9C04(iVar0, uParam1);
	}
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_339(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_340(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_340(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_349(iParam0);
		return func_348(iVar0);
	}
	return (func_341(iParam0, -1) * iParam0 + 1);
}

int func_341(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_344(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_343(iParam1))
			{
				return 0;
			}
			else if (func_342(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_345(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_345(unk_0xD803B885F5E47A62(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_345(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_252())
	{
		if (!func_347(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_1590373)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_2425662[Global_1590373 /*421*/].f_195, 24) || func_346(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 24);
}

int func_346(int iParam0)
{
	if (iParam0 != func_252())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_347(int iParam0)
{
	if (iParam0 != func_252())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_351, 2);
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_349(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_350(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_340(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_340(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_340(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

var func_354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_355(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_340(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_340(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_340(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_340(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	return iVar0;
}

int func_356()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_357(int iParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 2))
	{
		unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 8);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 6))
	{
		func_372(1913, 1, -1);
		func_371(iParam0);
	}
	if (Global_1323615[iParam0 /*141*/].f_66 == 2069146067)
	{
		func_370(&Global_2514799, 1, 0);
	}
	unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 6);
	unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 3);
	unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 11);
	Global_1323615[iParam0 /*141*/].f_103 = 0;
	if (func_325(Global_1323615[iParam0 /*141*/].f_66, 0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 0))
		{
			func_542(39);
			if (func_369(Global_1323615[iParam0 /*141*/].f_66))
			{
				func_368(53);
			}
			else
			{
				func_370(&(Global_2451426.f_4308.f_197[45 /*2*/]), 1, 0);
				Global_2451426.f_4308.f_328[45] = 0;
			}
			if (func_282(4))
			{
				Global_4264545 = 1;
			}
			else
			{
				func_336(iParam0, &(Global_1323615[iParam0 /*141*/]), 1, -1, 0, 0);
				func_365(-1948815871, 3, 0);
			}
		}
	}
	else if (!func_364(iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 0))
		{
		}
	}
	else if (Global_1676349 && Global_1676351 == iParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 0))
		{
			if (func_282(4))
			{
				Global_4264545 = 1;
			}
			else
			{
				func_336(iParam0, &(Global_1323615[iParam0 /*141*/]), 1, -1, 0, 0);
				func_365(-1948815871, 3, 0);
			}
		}
	}
	else if (func_324(Global_1323615[iParam0 /*141*/].f_66))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 0))
		{
			func_542(39);
			unk_0x5D96D8530B3D0904(&(Global_1323615[iParam0 /*141*/].f_102), 1);
			if (func_282(4))
			{
				Global_4264545 = 1;
			}
			else
			{
				func_336(iParam0, &(Global_1323615[iParam0 /*141*/]), 1, -1, 0, 0);
				func_365(-1948815871, 3, 0);
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 1))
	{
		unk_0x5D96D8530B3D0904(&(Global_1323615[iParam0 /*141*/].f_102), 1);
		if (func_282(4))
		{
			Global_4264545 = 1;
		}
		else
		{
			func_336(iParam0, &(Global_1323615[iParam0 /*141*/]), 1, -1, 0, 0);
			func_365(-1948815871, 3, 0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 2))
		{
			Global_2537071.f_390 = iParam0;
			Global_2537071.f_391 = 0;
			func_363(iParam0, &iVar0);
			if (iVar0 >= 0)
			{
				func_359(iVar0, -1, -1);
			}
			if (!func_358())
			{
				func_518(Global_2537071.f_390, -1);
				Global_2537071.f_390 = -1;
			}
		}
	}
	unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 0);
}

int func_358()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_359(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_360(iParam0, iParam1, iParam2);
	if (iParam0 >= 307)
	{
		return;
	}
	if (iParam2 == func_27() || iParam2 == -1)
	{
		Global_1671199[iParam0] = iParam1;
	}
}

void func_360(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= 255)
	{
		func_354(func_362(iParam0), iParam1, iParam2, 1);
		func_354(func_361(iParam0), 0, iParam2, 1);
	}
	else
	{
		func_354(func_362(iParam0), 255, iParam2, 1);
		func_354(func_361(iParam0), (iParam1 - 255), iParam2, 1);
	}
}

int func_361(int iParam0)
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	return (24625 + iParam0);
}

int func_362(int iParam0)
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	return (4036 + iParam0);
}

void func_363(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 307)
		{
			if (iParam0 == (Global_1671199[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_364(int iParam0)
{
	if (Global_1695406)
	{
		switch (Global_1323615[iParam0 /*141*/].f_66)
		{
			case -2118308144:
			case -1988428699:
				return 0;
				break;
			}
	}
	return 1;
}

void func_365(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_367(iParam1, iParam2))
	{
		iVar0 = func_366();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_366()
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

int func_367(int iParam0, var uParam1)
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

void func_368(int iParam0)
{
	switch (iParam0)
	{
		case 53:
			func_370(&(Global_2451426.f_4308.f_197[53 /*2*/]), 1, 0);
			Global_2451426.f_4308.f_328[53] = Global_262145.f_23968;
			break;
		
		case 54:
			func_370(&(Global_2451426.f_4308.f_197[54 /*2*/]), 1, 0);
			Global_2451426.f_4308.f_328[54] = Global_262145.f_23968;
			break;
		
		case 55:
			func_370(&(Global_2451426.f_4308.f_197[55 /*2*/]), 1, 0);
			Global_2451426.f_4308.f_328[55] = Global_262145.f_23968;
			break;
		
		case 56:
			func_370(&(Global_2451426.f_4308.f_197[56 /*2*/]), 1, 0);
			Global_2451426.f_4308.f_328[56] = Global_262145.f_23968;
			break;
	}
}

int func_369(int iParam0)
{
	if ((iParam0 == 219613597 || iParam0 == 1945374990) || iParam0 == 1653666139)
	{
		return 1;
	}
	return 0;
}

void func_370(var uParam0, bool bParam1, bool bParam2)
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

void func_371(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_1323615[iParam0 /*141*/].f_102), 16);
	Global_1323615[func_546() /*141*/].f_104 = 0;
}

void func_372(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_34(iParam0, func_91(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_373(iParam0))
	{
		func_33(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_90(iParam0, iVar0, iParam2, 1);
	}
}

int func_373(int iParam0)
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

void func_374(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_1, iParam0))
		{
			unk_0x0674E58A79778E99(&(Global_2439138.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2439138.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x0674E58A79778E99(&(Global_2439138.f_502.f_2), (iParam0 - 32));
	}
}

void func_375(int iParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xAFE0D3608EDA7039(iParam0))
	{
		if (unk_0xF1D385D359D58F72("Player_Vehicle", 3))
		{
			if (!unk_0x30F813723591D02E(iParam0, "Player_Vehicle") || (unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") != unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()) && unk_0x1E2DFB0EF4BB4566(iParam0, "Player_Vehicle") != -1))
			{
				unk_0xB7E567188872123E(iParam0, "Player_Vehicle", unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()));
				bVar0 = true;
			}
		}
		if (unk_0xF1D385D359D58F72("PV_Slot", 3))
		{
			if (!unk_0x30F813723591D02E(iParam0, "PV_Slot") || !unk_0x1E2DFB0EF4BB4566(iParam0, "PV_Slot") == iParam1)
			{
				unk_0xB7E567188872123E(iParam0, "PV_Slot", iParam1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_376(iParam1);
		}
	}
}

void func_376(int iParam0)
{
	vector3 vVar0;
	
	vVar0.f_2 = -1;
	vVar0.x = 79204191;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam0;
	unk_0xFB061A86A7AC749F(1, &vVar0, 3, func_279(1, 1));
}

bool func_377()
{
	return Global_1676377.f_4423 != -1;
}

void func_378(int iParam0, int iParam1)
{
	func_274(*iParam0, &(Global_1323615[iParam1 /*141*/]), 1, 1, 0);
	func_379(iParam0, iParam1);
}

void func_379(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_102, 2))
	{
		func_396(*uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam1 /*141*/].f_102, 3))
	{
		func_395();
		unk_0x5D96D8530B3D0904(&(Global_1323615[iParam1 /*141*/].f_102), 3);
		func_394(*uParam0, 1, 0);
		func_380(88, 3, 0);
	}
	unk_0x3CBF2C83A68C1611(*uParam0, &(Global_1323615[iParam1 /*141*/].f_121));
	unk_0x0674E58A79778E99(&(Global_1323615[iParam1 /*141*/].f_102), 14);
}

void func_380(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_387();
		if (iParam1 == 4)
		{
			func_386(iParam0, 0, 1);
			func_386(iParam0, 1, 1);
			func_386(iParam0, 2, 1);
			func_385(iParam0, 0, 1);
			func_385(iParam0, 1, 1);
			func_385(iParam0, 2, 1);
		}
		else
		{
			if (func_384(iParam0, iParam1) == 1 && func_383(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_386(iParam0, iVar0, 1);
			func_385(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_382(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_382(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_381();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_382(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_381();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_382(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_381();
			}
		}
	}
}

void func_381()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_7966[1 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

struct<4> func_382(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_383(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_384(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_386(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_387()
{
	if (func_186(14))
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
		Global_19486 = func_388();
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

var func_388()
{
	func_389();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_389()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_392(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_391(unk_0x16F2683693E537C9());
			if (func_390(iVar0) && (!func_186(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_390(Global_111638.f_2358.f_539.f_4321))
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

bool func_390(int iParam0)
{
	return iParam0 < 3;
}

int func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_392(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_392(int iParam0)
{
	if (func_390(iParam0))
	{
		return func_393(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_393(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_394(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (bParam1)
		{
			if (unk_0xF1D385D359D58F72("bombowner", 3))
			{
				if (unk_0xF1D385D359D58F72("bombdec1", 3))
				{
					if (iParam2 == 0)
					{
						if (!unk_0x30F813723591D02E(iParam0, "bombdec1"))
						{
							unk_0xB7E567188872123E(iParam0, "bombdec1", 1);
						}
					}
				}
				if (unk_0xF1D385D359D58F72("bombdec", 3))
				{
					if (iParam2 == 1)
					{
						if (!unk_0x30F813723591D02E(iParam0, "bombdec"))
						{
							unk_0xB7E567188872123E(iParam0, "bombdec", 1);
						}
					}
				}
				if (!unk_0x30F813723591D02E(iParam0, "bombowner"))
				{
					iVar0 = unk_0x12AB0310C2281427(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
					unk_0xB7E567188872123E(iParam0, "bombowner", iVar0);
					if (iParam2 == 0)
					{
						unk_0xAAAFB13836F8D9E3(iParam0);
					}
				}
				if (unk_0x30F813723591D02E(iParam0, "bombowner"))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x30F813723591D02E(iParam0, "bombdec"))
			{
				unk_0x059C92C065EF869A(iParam0, "bombdec");
			}
			if (unk_0x30F813723591D02E(iParam0, "bombowner"))
			{
				unk_0x059C92C065EF869A(iParam0, "bombowner");
			}
			return 1;
		}
	}
	return 0;
}

void func_395()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 307)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iVar0 /*141*/].f_102, 3))
		{
			unk_0x0674E58A79778E99(&(Global_1323615[iVar0 /*141*/].f_102), 3);
		}
		iVar0++;
	}
}

void func_396(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				unk_0x5D96D8530B3D0904(&iVar0, 3);
				unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

int func_397(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_2425662[iVar0 /*421*/].f_118 = 1;
	if (Global_2417897.f_2[iVar0 /*4*/].f_1)
	{
		if (Global_2417897.f_2[iVar0 /*4*/] > -1)
		{
			func_404(Global_2417897.f_2[iVar0 /*4*/], uParam0, uParam1);
			return 1;
		}
		else if (Global_2417897.f_2[iVar0 /*4*/] == -2)
		{
			Global_2425662[iVar0 /*421*/].f_118 = 0;
			func_398(func_546());
			func_374(17);
			func_374(16);
			func_374(18);
			return 0;
		}
	}
	return 0;
}

void func_398(int iParam0)
{
	func_403();
	if (func_401(iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_1323615[iParam0 /*141*/].f_102), 6);
		Global_1323615[iParam0 /*141*/].f_103 = 0;
		func_399();
	}
}

void func_399()
{
	func_400(10);
}

void func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_1574577.f_3[iVar0]), iVar1);
}

int func_401(int iParam0)
{
	int iVar0;
	
	func_363(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 307) && !func_402(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
			return 1;
			break;
	}
	return 0;
}

void func_403()
{
	Global_2439138.f_502.f_50 = 0;
	func_374(25);
	func_374(24);
}

void func_404(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 396.811f, -1643.665f, 28.2928f };
			*uParam2 = 140.0127f;
			break;
		
		case 1:
			*uParam1 = { 401.2413f, -1648.081f, 28.2928f };
			*uParam2 = 139.3439f;
			break;
		
		case 2:
			*uParam1 = { 411.1246f, -1655.997f, 28.2928f };
			*uParam2 = 139.9064f;
			break;
		
		case 3:
			*uParam1 = { 418.3765f, -1646.284f, 28.294f };
			*uParam2 = 229.6834f;
			break;
		
		case 4:
			*uParam1 = { 419.971f, -1641.743f, 28.2903f };
			*uParam2 = 266.1893f;
			break;
		
		case 5:
			*uParam1 = { 421.0552f, -1635.949f, 28.2928f };
			*uParam2 = 269.4205f;
			break;
		
		case 6:
			*uParam1 = { 419.6233f, -1629.658f, 28.2928f };
			*uParam2 = 319.6136f;
			break;
		
		case 7:
			*uParam1 = { 410.8506f, -1636.768f, 28.2928f };
			*uParam2 = 231.3992f;
			break;
		
		case 8:
			*uParam1 = { 373.3945f, -1623.899f, 28.2928f };
			*uParam2 = 138.3859f;
			break;
		
		case 9:
			*uParam1 = { 373.3945f, -1623.899f, 28.2928f };
			*uParam2 = 138.3859f;
			break;
		
		case 10:
			*uParam1 = { 393.5292f, -1608.745f, 28.2928f };
			*uParam2 = 230.8697f;
			break;
		
		case 11:
			*uParam1 = { 389.3376f, -1613.097f, 28.2928f };
			*uParam2 = 228.0681f;
			break;
		
		case 12:
			*uParam1 = { 402.6421f, -1615.902f, 28.2928f };
			*uParam2 = 228.3702f;
			break;
		
		case 13:
			*uParam1 = { 398.339f, -1620.899f, 28.2928f };
			*uParam2 = 231.9081f;
			break;
		
		case 14:
			*uParam1 = { 394.6593f, -1625.956f, 28.2928f };
			*uParam2 = 231.1938f;
			break;
		
		case 15:
			*uParam1 = { 385.6364f, -1634.18f, 28.2928f };
			*uParam2 = 140.7528f;
			break;
		
		default:
			*uParam1 = { 385.6364f, -1634.18f, 28.2928f };
			*uParam2 = 140.7528f;
			break;
	}
}

int func_405(vector3 vParam0, vector3 vParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<58> Var5;
	struct<58> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!unk_0x00A15D69BCAA5267() > 7 && !unk_0x00A15D69BCAA5267() == 5)
		{
			return 0;
		}
	}
	if (Global_2405072.f_514)
	{
		Global_2405072.f_514 = 0;
		return 0;
	}
	if (!func_79(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!Global_2405072.f_600 == 0 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_605) < func_869(0))
	{
		if (!Global_2405072.f_670 == 0)
		{
			Global_2405072.f_670 = 0;
			func_104();
			func_514();
		}
		return 0;
	}
	if (!unk_0x0D0A574C76D769AC() == Global_2405072.f_669)
	{
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) < func_869(0))
			{
				return 0;
			}
			else
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	else
	{
		if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_671) > 30000)
		{
			Global_2405072.f_670 = 0;
		}
		if (!Global_2405072.f_670 == 0)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_673) > func_869(1))
			{
				Global_2405072.f_670 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_508(vParam0))
		{
			if (func_507(&vParam0, 1))
			{
			}
		}
	}
	if (!Global_2405072.f_670 == 0)
	{
		if (vdist(Global_2405072.f_688, vParam0) > 50f)
		{
			return 0;
		}
	}
	unk_0x10FEEAFF01E32639((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f));
	if (Global_2405072.f_670 == 0)
	{
		Global_2405072.f_675 = 0;
		Global_2405072.f_671 = unk_0x6794171A1021C2D8();
		Global_2405072.f_669 = unk_0x0D0A574C76D769AC();
		Global_2405072.f_673 = unk_0x6794171A1021C2D8();
		Global_2405072.f_688 = { vParam0 };
		Global_2405072.f_674 = unk_0x6794171A1021C2D8();
		Global_2405072.f_670 = 2;
		func_506();
		func_104();
		if (!uParam6->f_27 || (((((func_505(vParam0, 1, 1133903872) && !uParam6->f_28) && !Global_2537071.f_883) && !Global_2537071.f_872) && !Global_2537071.f_880) && !Global_2537071.f_884))
		{
			func_487(vParam0, iParam2);
		}
		if (func_472(vParam0))
		{
			func_487(vParam0, iParam2);
		}
	}
	switch (Global_2405072.f_670)
	{
		case 2:
			if (unk_0xD1B4D22E0BA9B0C8((vParam0.x - 100f), (vParam0.y - 100f), (vParam0.x + 100f), (vParam0.y + 100f)))
			{
				Global_2405072.f_676 = { vParam0 };
				Global_2405072.f_679 = 0f;
				if (Global_2537071.f_883)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_467(vParam0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_465(vParam0, *uParam5, iParam2, unk_0xD803B885F5E47A62(), 0))
				{
					Global_2405072.f_676 = { vParam0 };
					Global_2405072.f_679 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { vParam1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					Var5.f_30 = 1;
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_420(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var5);
				}
				func_418(Global_2405072.f_676, Global_2405072.f_679, iParam2, &(Global_2405072.f_667));
				Global_2405072.f_665 = 0;
				Global_2405072.f_666 = 0;
				Global_2405072.f_675++;
				Global_2405072.f_672 = unk_0x6794171A1021C2D8();
				Global_2405072.f_671 = unk_0x6794171A1021C2D8();
				Global_2405072.f_670 = 3;
			}
			break;
		
		case 3:
			if (Global_2405072.f_665)
			{
				if (Global_2405072.f_667 == Global_2405072.f_668)
				{
					if (Global_2405072.f_666)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_417(Global_2405072.f_676, Global_2405072.f_679, iParam2, 1, 1036831949))
							{
								Global_2405072.f_670 = 4;
								Global_2405072.f_692 = unk_0x6794171A1021C2D8();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_415(Global_2405072.f_676, 0);
						func_414(-1);
					}
				}
				else
				{
					Global_2405072.f_665 = 0;
					Global_2405072.f_666 = 0;
				}
			}
			else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_672) > 3000)
			{
				func_414(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_692) < 10000)
				{
					if (unk_0x23002DD5E7B94FD7(Global_2405072.f_691))
					{
						if (unk_0x9E6C7E283363593B(Global_2405072.f_691))
						{
							if (!unk_0x6FE31D882B028E10(Global_2405072.f_691))
							{
								if (func_413(Global_2405072.f_676, Global_2405072.f_679, iParam2, unk_0xD803B885F5E47A62(), 0) || func_407(Global_2405072.f_676, Global_2405072.f_679, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_415(Global_2405072.f_676, 0);
									func_414(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_415(Global_2405072.f_676, 0);
								func_414(-1);
							}
						}
					}
					else
					{
						func_414(-1);
					}
				}
				else
				{
					func_414(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405072.f_676 = { vParam0 };
			Global_2405072.f_679 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { vParam1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_420(&(Global_2405072.f_676), &(Global_2405072.f_679), &Var6);
			Global_2405072.f_670 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405072.f_688 = { vParam0 };
	Global_2405072.f_673 = unk_0x6794171A1021C2D8();
	if (bVar0)
	{
		Global_2405072.f_513 = 0;
		*uParam4 = { Global_2405072.f_676 };
		*uParam5 = Global_2405072.f_679;
		func_406(1);
		return 1;
	}
	return 0;
}

void func_406(bool bParam0)
{
	Global_2405072.f_670 = 0;
	func_506();
	func_104();
	if (bParam0)
	{
		func_514();
	}
}

int func_407(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (func_9(iVar1, bParam3, bParam4))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam6 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_412(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && iParam8) && bParam5) && func_408(iVar1))
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
										if (func_146(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_143(func_131(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_408(int iParam0)
{
	if (func_411(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_272(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_409(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_410(iParam0);
	if (!iVar0 == func_252())
	{
		if (iVar0 == func_410(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 != func_252())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_252();
}

int func_411(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_272(iParam0) };
		Global_2513231 = { func_272(iParam1) };
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

int func_412(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

int func_413(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_9(iVar1, 0, 1) && func_9(iParam3, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_143(Global_2417897.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_143(func_131(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_143(Global_2417897.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_9(iVar1, 0, 0))
			{
				if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
				{
					if (func_143(func_131(iVar1), vParam0, fParam1, iParam2, 1036831949))
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

void func_414(int iParam0)
{
	if (Global_2405072.f_675 < 20 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2405072.f_674) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405072.f_675 < iParam0))
		{
			Global_2405072.f_670 = 2;
		}
		else
		{
			Global_2405072.f_670 = 5;
		}
	}
	else
	{
		Global_2405072.f_670 = 5;
	}
}

void func_415(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	if (iParam1 == 0 && func_416(vParam0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && vmag(vParam0) > 0f)
	{
		vVar0 = { Global_2405072.f_2728[iParam1 /*3*/] };
		Global_2405072.f_2728[iParam1 /*3*/] = { vParam0 };
		func_415(vVar0, iParam1 + 1);
	}
}

int func_416(vector3 vParam0, float fParam1)
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

int func_417(vector3 vParam0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	else
	{
		func_104();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2405072.f_680[iVar3] == -1 && unk_0xBFF81ED3B99522C7())
			{
				func_144(vParam0, fParam1, iParam2, &vVar0, &vVar1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x755FF954DAE327E1((vVar0.z - vVar1.z));
					vVar0.z = (vVar0.z + ((fVar4 * 0.5f) - 2f));
					vVar1.z = (vVar1.z + (fVar4 * 0.5f));
				}
				Global_2405072.f_680[iVar3] = unk_0x3CED806443E1AA85(vVar0, vVar1, fParam4);
				Global_2405072.f_684[iVar3] = unk_0x0D0A574C76D769AC();
				Global_2405072.f_691 = Global_2405072.f_680[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_418(vector3 vParam0, var uParam1, int iParam2, var uParam3)
{
	struct<8> Var0;
	
	*uParam3 = func_419(&vParam0, &uParam1, &iParam2);
	Var0 = -1768581418;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	unk_0xFB061A86A7AC749F(1, &Var0, 8, func_279(1, 1));
}

int func_419(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, round(*uParam0), 64);
	StringIntConCat(&cVar0, round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	return iVar1;
}

void func_420(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_462(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_421(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_421(var uParam0, var uParam1, var uParam2)
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
		if (func_458(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_454(uParam0, 1))
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
	if (func_129(uParam2->f_34) != 0)
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
					if (!func_447(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_444(vVar1))
									{
										vVar1 = { func_440(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_439(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_435(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_454(&vVar1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_434(vVar1, fVar2, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_458(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_433(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_467(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_467(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_407(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_430(vVar1, uParam2->f_54, &fVar23);
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
																													func_429(vVar1, fVar2, iVar14);
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
																									if (func_435(vVar1, uParam2))
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
							func_427(0, uParam2);
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
						func_426(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_458(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_454(&vVar27, bVar29))
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
				func_422(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_422(var uParam0, var uParam1, var uParam2, vector3 vParam3)
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
			if (!func_423(*(uParam0[iVar2 /*4*/]), 5f, unk_0xD803B885F5E47A62(), 0, 0))
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

int func_423(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_425(vParam0, fParam1, iParam2, iParam3, 0) || func_424(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_424(vector3 vParam0, int iParam1, int iParam2)
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
					if (func_143(vParam0, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam1, 0, 1))
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

int func_425(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
				if (func_9(iVar1, 0, 1) && func_9(iParam2, 0, 1))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_9(iVar1, 0, 1) && func_9(iParam2, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (vdist(Global_2417897.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_131(iVar1), vParam0) < 1f)
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
				else if (func_9(iVar1, 0, 1))
				{
					if (vdist(func_131(iVar1), vParam0) < 1f)
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

void func_426(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x09AC81E49EA267F7((1 + iParam0), (40 + iParam0));
		unk_0x4A13F7D4B1E239A0(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_440(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_444(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_427(int iParam0, var uParam1)
{
	if (!func_435(Global_2412474[iParam0 /*3*/], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_428(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_427(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_427(iParam0 + 1, uParam1);
	}
}

void func_428(int iParam0)
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

void func_429(vector3 vParam0, float fParam1, int iParam2)
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
			func_429(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_430(vector3 vParam0, float fParam1, float fParam2)
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
		if (func_431(iVar3))
		{
			vVar1 = { func_131(iVar3) };
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

int func_431(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (!func_567(iParam0))
		{
			if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (!unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
				{
					if (func_1120(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_432(unk_0x08067D4957B73C02(iParam0), unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()), 0))
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
					if (!func_1120(unk_0xD803B885F5E47A62(), 1, 0))
					{
						if (!func_408(iParam0))
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

int func_432(int iParam0, int iParam1, int iParam2)
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

int func_433(vector3 vParam0, float fParam1, int iParam2)
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
		if (func_146(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
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
		if (func_146(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_434(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_413(vParam0, fParam1, iParam2, iParam3, iParam4) || func_465(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_435(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_438(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_436(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
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

int func_436(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_437(&vParam1, &vParam2);
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

void func_437(var uParam0, var uParam1)
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

bool func_438(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
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

int func_439(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_1120(unk_0xD803B885F5E47A62(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0 /*107*/].f_7 != 0)
				{
					if (func_143(vParam0, Global_4456448.f_91961[iVar0 /*107*/], Global_4456448.f_91961[iVar0 /*107*/].f_6, Global_4456448.f_91961[iVar0 /*107*/].f_7, fParam1))
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
					if (func_143(vParam0, Global_4456448.f_78242[iVar0 /*266*/], Global_4456448.f_78242[iVar0 /*266*/].f_3, Global_4456448.f_78242[iVar0 /*266*/].f_15, 0.5f))
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
					if (func_143(vParam0, Global_4456448.f_124065[iVar0 /*325*/], Global_4456448.f_124065[iVar0 /*325*/].f_3, Global_4456448.f_124065[iVar0 /*325*/].f_12, 0.5f))
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
					if (func_143(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_233[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_233[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_233[iVar0]), 0.5f))
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
					if (func_143(vParam0, unk_0x68F4C0EC296D3901(Global_969031.f_119[iVar0], 1), unk_0xD9522BA9E27E1349(Global_969031.f_119[iVar0]), unk_0x134B62B726CEC8E6(Global_969031.f_119[iVar0]), 0.5f))
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

Vector3 func_440(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
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
			if (!func_443(vParam0, *fParam1, vParam4))
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
			if (unk_0xAFB8495D36825275(iParam7) && func_442(vParam0))
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
					fVar10 = func_441(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_441(iParam7, 1.5f);
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
		if (!func_443(vParam0, *fParam1, vParam4))
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
					fVar10 = func_441(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_441(iParam7, 1.5f);
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

float func_441(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_126(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_442(vector3 vParam0)
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

int func_443(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_117(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_155(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_444(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_446(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_445(vParam0, &(Global_2411478[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_445(vParam0, &(Global_2411478[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_445(vector3 vParam0, var uParam1)
{
	return unk_0x0399732A9EBC368E(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_446(struct<2> Param0, var uParam1)
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

int func_447(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_453(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x79833B02DBD2A244(0.01f, 360f);
			func_452(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar2);
			if (func_448(vVar1, &uVar0) || func_453(vVar1))
			{
				vVar1 = { *uParam0 };
				func_452(&vVar1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_448(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_451())
	{
		return 0;
	}
	iVar1 = func_450();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_449(vParam0, &(Global_2405072.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_449(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_438(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_436(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_450()
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

bool func_451()
{
	return Global_1676377.f_474;
}

void func_452(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_117(&vVar0, 0f, 0f, unk_0x79833B02DBD2A244(0f, 360f));
		}
		else
		{
			func_117(&vVar0, 0f, 0f, fParam5);
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

int func_453(vector3 vParam0)
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

bool func_454(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_438(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_436(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
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
				*uParam0 = { func_455(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_455(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_452(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_457(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_456(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x4490D017C57827E9(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_438(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_436(vVar1, vParam1, vParam2, 0, 0))
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

void func_456(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
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
	vVar2 = { func_157(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_155(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(vVar2, vVar1) >= 0f)
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
		vVar2 = { func_157(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_157(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(unk_0x07AB02F3C4AE2B04(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_155(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_155(vVar2, vVar11) >= 0f)
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

void func_457(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

int func_458(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_508(vParam0))
	{
		if (func_461(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_459(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_416(*uParam1, 1056964608))
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
				func_452(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_459(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_448(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_460(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_448(vVar2, &uVar1) || func_453(vVar2))
			{
				vVar2 = { *uParam0 };
				func_460(&vVar2, &(Global_2405072.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

void func_460(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_455(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_455(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_455(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_452(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_457(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_456(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_461(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_449(*uParam0, &(Global_2409984[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_460(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_461(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_460(&vVar1, &(Global_2409984[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_462(var uParam0, var uParam1, var uParam2)
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
			if (func_458(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_454(uParam0, 1))
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
		func_463(*uParam0);
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
							if ((uParam2->f_12 && !func_434(vVar2, fVar3, uParam2->f_34, unk_0xD803B885F5E47A62(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_458(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_433(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_467(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_467(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_407(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar10 = func_430(vVar2, uParam2->f_54, &fVar11);
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
																		func_429(vVar2, fVar3, iVar4);
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
					func_427(0, uParam2);
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

void func_463(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_464(vParam0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_464(vector3 vParam0, float fParam1, float fParam2)
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

int func_465(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
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
				if (func_466(vParam0, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_146(vParam0, fParam1, iParam2, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417897.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam3, 0, 1))
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

int func_466(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_145(iParam1, 1008981770);
	fVar1 = func_145(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_467(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_551(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_468(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_468(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_9(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_469(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_9(iVar1, 1, 1))
		{
			if (!func_280(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_412(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_469(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_469(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

Vector3 func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_471() && Global_1590535[iVar0 /*876*/].f_847) && !func_470(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_131(iParam0);
}

int func_470(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_471()
{
	return Global_2450632.f_17;
}

int func_472(vector3 vParam0)
{
	int iVar0;
	
	if (Global_2537071.f_883 && func_473(vParam0, &iVar0))
	{
		return 1;
	}
	return 0;
}

int func_473(vector3 vParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam1 = -1;
	iVar2 = func_486(vParam0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_474(iVar1))
			{
				if (func_486(Global_1676377.f_488[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_485(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
	if (iVar1 != func_252())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_5 == iParam0)
	{
		return 1;
	}
	if (func_484(unk_0xD803B885F5E47A62(), 0) || (func_481(unk_0xD803B885F5E47A62()) && func_479(func_480(unk_0xD803B885F5E47A62())) == 12))
	{
		return 1;
	}
	if (func_478(unk_0xD803B885F5E47A62()) || (func_481(unk_0xD803B885F5E47A62()) && func_479(func_480(unk_0xD803B885F5E47A62())) == 8))
	{
		return 1;
	}
	if (func_477(unk_0xD803B885F5E47A62()) || (func_481(unk_0xD803B885F5E47A62()) && func_479(func_480(unk_0xD803B885F5E47A62())) == 5))
	{
		return 1;
	}
	if (func_476(unk_0xD803B885F5E47A62()) || (func_481(unk_0xD803B885F5E47A62()) && func_479(func_480(unk_0xD803B885F5E47A62())) == 10))
	{
		return 1;
	}
	if (func_475(unk_0xD803B885F5E47A62()) || (func_481(unk_0xD803B885F5E47A62()) && func_479(func_480(unk_0xD803B885F5E47A62())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_252())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_479(Global_2425662[iParam0 /*421*/].f_310.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_252())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_479(Global_2425662[iParam0 /*421*/].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 != func_252())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_252())
			{
				return func_479(Global_2425662[iParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 != func_252())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_252())
			{
				return func_479(Global_2425662[iParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
{
	if (iParam0 != func_252() && func_9(iParam0, 1, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_310.f_14;
	}
	return -1;
}

int func_481(int iParam0)
{
	if (iParam0 != func_252() && func_9(iParam0, 1, 1))
	{
		if (func_483(iParam0) && !func_482(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 != func_252() && func_9(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 4);
	}
	return 0;
}

int func_483(int iParam0)
{
	if (iParam0 != func_252() && func_9(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 3);
	}
	return 0;
}

int func_484(int iParam0, bool bParam1)
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
	if (iParam0 != func_252())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_252())
			{
				return func_479(Global_2425662[iParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_486(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_449(vParam0, &(Global_2409984[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_487(vector3 vParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2405072.f_45.f_316)
	{
		return;
	}
	if (!func_504())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_503(vParam0);
		if (iVar1 > -1)
		{
			func_514();
			switch (iVar1)
			{
				case 0:
					func_502(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_502(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_502(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_502(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_502(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_502(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_502(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_502(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_502(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_502(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_502(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_502(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_502(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_502(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_502(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_502(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_502(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_502(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_502(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_502(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_502(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_502(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_502(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_502(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_502(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_502(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_502(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_502(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_502(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_502(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_502(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_502(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_502(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_502(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_502(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_502(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_502(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_502(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_502(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_502(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_502(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_502(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_502(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_502(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_502(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_502(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_502(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_502(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_502(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_502(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_502(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_502(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_502(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_500(78);
					break;
				
				case 11:
					func_500(79);
					break;
				
				case 12:
					func_500(82);
					break;
				
				case 13:
					func_500(81);
					break;
				
				case 14:
					func_500(73);
					break;
				
				case 15:
					func_502(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_502(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_502(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_502(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_500(75);
					break;
				
				case 17:
					func_500(76);
					break;
				
				case 18:
					func_500(77);
					break;
				
				case 19:
					func_502(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_502(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_502(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_502(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_500(80);
					break;
				
				case 21:
				case 25:
					func_500(87);
					break;
				
				case 22:
				case 26:
					func_500(88);
					break;
				
				case 23:
				case 27:
					func_500(89);
					break;
				
				case 24:
				case 28:
					func_500(90);
					break;
				
				case 29:
				case 30:
					if (func_499(iParam1))
					{
						func_500(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_28);
					}
					break;
				
				case 31:
					func_502(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_502(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_502(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_502(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_502(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_502(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_502(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_502(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_502(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_502(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_502(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_502(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_502(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_502(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_502(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_502(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_502(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_502(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_502(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_502(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_502(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_502(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_502(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_502(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_502(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_502(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_502(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_502(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_502(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_502(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_502(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_502(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_502(-194.254f, -2018.756f, 26.62f, 75f);
					func_502(-186.956f, -2031.369f, 26.62f, 338f);
					func_502(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_502(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_502(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_502(-233.372f, -2089.601f, 26.62f, 304f);
					func_502(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_502(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_502(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_502(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_502(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_502(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_502(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_502(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_502(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_502(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_502(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_502(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_502(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_502(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_502(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_502(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_496(vParam0, &iVar2, &iVar3) || (func_473(vParam0, &(iVar2[0])) && (unk_0xC41A9202669A24C4(iParam1) || unk_0xAFB8495D36825275(iParam1))))
		{
			func_514();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405072.f_513 = 1;
				}
				if (!iVar3[iVar0] && func_342(iVar2[iVar0], -1))
				{
					if (func_499(iParam1))
					{
						func_500(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_495(unk_0x16F2683693E537C9()) || func_494(unk_0x16F2683693E537C9())) && unk_0xC41A9202669A24C4(iParam1)) || unk_0xAFB8495D36825275(iParam1))
					{
						if (func_493(iParam1))
						{
							func_492(iVar2[iVar0]);
						}
						else if (func_491(iParam1))
						{
							func_490(iVar2[iVar0]);
							func_492(iVar2[iVar0]);
						}
						else
						{
							func_490(iVar2[iVar0]);
							func_492(iVar2[iVar0]);
						}
					}
					else
					{
						func_488(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_500(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_502(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_502(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_502(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_502(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_502(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_502(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_502(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_502(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_502(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_502(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_502(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_502(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_502(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_502(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_502(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_502(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_502(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_502(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_502(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_502(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_502(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_502(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_502(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_502(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_502(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_502(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_502(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_502(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_502(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_502(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_502(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_502(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_502(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_502(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_502(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_502(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_502(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_502(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_502(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_502(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_502(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_502(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_502(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_502(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_502(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_502(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_502(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_502(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_502(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_502(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_502(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_502(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_502(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_502(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_502(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_502(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_502(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_502(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_502(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_502(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_502(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_502(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_502(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_502(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_502(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_502(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_502(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_502(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_502(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_502(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_502(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_502(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_502(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_502(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_502(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_502(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_502(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_502(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_502(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_502(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_502(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_502(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_502(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_502(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_502(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_502(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_502(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_502(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_502(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_502(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_502(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_502(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_502(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_502(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_502(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_502(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_502(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_502(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_502(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_502(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_502(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_502(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_502(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_502(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_502(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_502(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_502(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_502(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_502(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_502(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_502(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_502(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_502(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_502(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_502(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_502(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_502(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_502(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_502(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_502(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_502(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_502(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_502(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_502(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_502(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_502(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_502(142.7427f, -2536.147f, 5f, 205.0002f);
			func_502(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_502(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_502(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_502(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_502(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_502(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_502(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_502(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_502(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_502(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_502(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_502(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_502(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_502(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_502(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_502(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_502(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_502(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_502(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_502(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_502(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_502(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_502(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_502(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_502(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_502(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_502(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_502(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_502(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_502(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_502(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_502(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_502(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_502(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_502(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_502(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_502(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_502(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_502(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_502(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_502(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_502(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_502(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_502(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_502(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_502(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_502(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_502(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_502(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_502(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_502(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_502(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_502(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_502(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_502(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_502(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_502(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_502(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_502(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_502(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_502(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_502(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_502(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_502(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_502(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_502(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_502(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_502(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_502(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_502(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_502(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_502(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_502(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_502(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_502(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_502(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_502(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_502(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_502(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_502(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_502(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_502(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_502(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_502(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_502(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_502(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_502(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_502(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_502(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_502(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_502(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_502(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_502(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_502(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_502(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_502(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_502(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_502(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_502(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_502(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_502(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_502(-1823.414f, 3092.762f, 31.843f, 330f);
			func_502(-1819.045f, 3100.435f, 31.845f, 330f);
			func_502(-1833.313f, 3075.722f, 31.838f, 330f);
			func_502(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_502(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_502(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_502(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_502(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_502(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_502(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_502(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_502(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_502(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_502(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_502(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_502(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_502(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_502(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_502(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_502(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_502(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_502(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_502(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_502(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_502(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_502(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_502(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_502(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_502(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_502(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_502(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_502(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_502(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_502(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_502(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_502(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_502(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_502(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_502(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_502(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_502(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_502(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_502(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_502(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_502(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_502(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_502(1231.279f, 2910.881f, 43.3085f, 12f);
				func_502(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_502(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_502(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_502(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_502(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_502(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_502(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_502(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_502(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_502(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_502(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_502(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_502(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_502(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_502(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_502(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_502(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_502(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_502(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_502(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_502(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_502(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_502(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_502(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_502(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_502(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_502(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_502(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_502(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_502(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_502(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_502(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_502(3.855f, 2672.388f, 78.437f, 319.2f);
				func_502(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_502(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_502(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_502(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_502(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_502(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_502(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_502(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_502(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_502(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_502(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_502(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_502(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_502(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_502(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_502(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_502(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_502(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_502(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_502(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_502(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_502(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_502(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_502(102.851f, 2688.009f, 51.732f, 224f);
				func_502(109.815f, 2681.012f, 51.112f, 224f);
				func_502(116.355f, 2674.26f, 50.529f, 224f);
				func_502(125.138f, 2665.98f, 49.8f, 224f);
				func_502(132.228f, 2659.865f, 49.26f, 228.4f);
				func_502(139.354f, 2653.536f, 48.737f, 228.4f);
				func_502(88.512f, 2702.995f, 53.042f, 224.199f);
				func_502(81.565f, 2710.357f, 53.67f, 224.199f);
				func_502(75.156f, 2716.981f, 54.223f, 224.199f);
				func_502(68.442f, 2723.806f, 54.775f, 226.199f);
				func_502(61.449f, 2730.606f, 55.308f, 226.199f);
				func_502(53.702f, 2738.167f, 55.855f, 226.199f);
				func_502(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_502(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_502(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_502(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_502(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_502(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_502(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_502(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_502(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_502(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_502(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_502(2714.633f, 3918.283f, 42.938f, 16f);
				func_502(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_502(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_502(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_502(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_502(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_502(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_502(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_502(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_502(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_502(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_502(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_502(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_502(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_502(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_502(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_502(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_502(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_502(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_502(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_502(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_502(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_502(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_502(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_502(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_502(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_502(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_502(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_502(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_502(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_502(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_502(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_502(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_502(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_502(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_502(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_502(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_502(3374.923f, 5520.177f, 20.3207f, 86f);
				func_502(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_502(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_502(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_502(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_502(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_502(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_502(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_502(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_502(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_502(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_502(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_502(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_502(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_502(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_502(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_502(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_502(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_502(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_502(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_502(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_502(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_502(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_502(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_502(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_502(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_502(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(43.848f, 6845.657f, 13.379f, 247.2f);
				func_502(50.379f, 6861.146f, 15.105f, 247.2f);
				func_502(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_502(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_502(55.806f, 6875.081f, 14.824f, 247.2f);
				func_502(11.616f, 6877.079f, 11.466f, 247.2f);
				func_502(18.954f, 6891.633f, 11.37f, 247.2f);
				func_502(26.68f, 6907.587f, 11.869f, 247.2f);
				func_502(7.479f, 6907.895f, 12.024f, 247.2f);
				func_502(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_502(35.591f, 6836.608f, 13.288f, 274.4f);
				func_502(36.028f, 6830.135f, 13.801f, 270.8f);
				func_502(35.114f, 6823.884f, 14.527f, 260.8f);
				func_502(48.779f, 6838.693f, 14.337f, 273.6f);
				func_502(56.738f, 6821.8f, 15.244f, 244.8f);
				func_502(48.377f, 6825.895f, 14.656f, 249.8f);
				func_502(49.11f, 6831.439f, 13.991f, 274.8f);
				func_502(53.544f, 6818.275f, 16.342f, 243f);
				func_502(46.162f, 6821.945f, 15.483f, 249.8f);
				func_502(60.129f, 6836.8f, 15.605f, 269.6f);
				func_502(40.88f, 6802.952f, 20.113f, 242.6f);
				func_502(48.203f, 6799.134f, 20.897f, 244.4f);
				func_502(70.449f, 6809.271f, 16.846f, 243f);
				func_502(61.436f, 6814.266f, 16.71f, 244.2f);
				func_502(56.142f, 6793.458f, 19.806f, 242.6f);
				func_502(65.759f, 6791.12f, 18.433f, 276.4f);
				func_502(77.305f, 6805.391f, 18.558f, 245.6f);
				func_502(85.893f, 6800.243f, 18.535f, 249.8f);
				func_502(56.85f, 6780.582f, 18.822f, 297.999f);
				func_502(65.636f, 6784.669f, 18.789f, 293.799f);
				func_502(74.121f, 6788.498f, 18.739f, 293.799f);
				func_502(97.779f, 6796.32f, 19.02f, 276.799f);
				func_502(106.76f, 6796.983f, 18.914f, 272.599f);
				func_502(112.387f, 6802.858f, 18.994f, 210.599f);
				func_502(117.58f, 6802.644f, 18.663f, 209.399f);
				func_502(122.481f, 6802.693f, 18.468f, 209.399f);
				func_502(127.182f, 6802.686f, 18.218f, 209.399f);
				func_502(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_502(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_502(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_502(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_502(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_502(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_502(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_502(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_502(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_502(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_502(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_502(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_502(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_502(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_502(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_502(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_502(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_502(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_502(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_502(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_502(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_502(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_502(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_502(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_502(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_502(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_502(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_502(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_502(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_502(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_502(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_502(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_502(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_502(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_502(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_502(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_502(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_502(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_502(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_502(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_502(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_502(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_502(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_502(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_502(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_502(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_502(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_502(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_502(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_502(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_502(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_502(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_502(30.027f, 3292.351f, 38.604f, 140.199f);
				func_502(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_502(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_502(23.897f, 3283.152f, 39.381f, 145.399f);
				func_502(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_502(18.723f, 3274.025f, 40.054f, 155.799f);
				func_502(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_502(36.958f, 3298.847f, 38.001f, 127.799f);
				func_502(54.165f, 3311.582f, 36.517f, 303.799f);
				func_502(61.607f, 3317.105f, 35.916f, 306.999f);
				func_502(68.994f, 3323.129f, 35.364f, 308.199f);
				func_502(76.266f, 3329.467f, 34.805f, 311.399f);
				func_502(82.757f, 3335.915f, 34.344f, 316.598f);
				func_502(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_502(14.664f, 3263.688f, 40.931f, 160.398f);
				func_502(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_502(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_502(89.575f, 3343.311f, 33.932f, 318.398f);
				func_502(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_502(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_502(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_502(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_502(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_502(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_502(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_502(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_502(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_502(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_502(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_502(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_502(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_502(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_502(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_502(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_502(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_502(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_502(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_502(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_502(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_502(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_502(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_502(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_502(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_502(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_502(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_502(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_502(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_502(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_502(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_502(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_502(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_502(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_502(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_502(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_502(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_502(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_502(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_502(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_502(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_502(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_58 == 0)
			{
				func_502(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_502(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_502(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_502(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_502(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_502(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_502(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_502(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_502(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_502(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_502(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_502(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_502(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_502(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_502(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_502(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_502(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_502(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_502(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_502(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_502(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_502(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_502(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_502(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_502(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_502(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_502(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_502(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_502(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_502(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_502(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_502(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_502(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_502(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_502(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_502(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_502(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_502(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_489(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_489(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_489(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_489(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_489(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_489(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_489(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_489(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_489(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_489(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_489(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_489(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_489(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_489(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_489(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_489(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_489(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_489(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_489(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_489(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_489(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_489(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_489(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_489(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_489(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_489(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_489(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_489(vector3 vParam0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!iParam2 == 0)
	{
		func_126(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		vVar3 = { 0f, fVar2, 0f };
		vVar4 = { unk_0x8A5E176FF719A014(vParam0, fParam1, vVar3) };
		func_502(vVar4, fParam1);
	}
	else
	{
		func_502(vParam0, fParam1);
	}
}

void func_490(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_502(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_502(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_502(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_502(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_502(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_502(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_502(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_502(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_502(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_502(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_502(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_502(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_502(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_502(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_502(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_502(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_502(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_502(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_502(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_502(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_502(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_502(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_502(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_502(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_502(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_502(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_502(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_502(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_502(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_502(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_502(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_502(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_502(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_502(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_502(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_502(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_502(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_502(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_502(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_502(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_502(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_502(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_502(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_502(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_502(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_502(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_502(-1356.991f, -3242.228f, 12.945f, 330f);
			func_502(-1369.313f, -3234.758f, 12.945f, 330f);
			func_502(-1381.751f, -3227.408f, 12.945f, 330f);
			func_502(-1394.302f, -3220.021f, 12.945f, 330f);
			func_502(-1354.339f, -3223.129f, 12.945f, 330f);
			func_502(-1366.302f, -3215.809f, 12.945f, 330f);
			func_502(-1378.492f, -3208.645f, 12.945f, 330f);
			func_502(-1350.322f, -3203.405f, 12.945f, 330f);
			func_502(-1362.684f, -3196.451f, 12.945f, 330f);
			func_502(-1347.089f, -3182.69f, 12.945f, 330f);
			func_502(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_502(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_502(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_502(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_502(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_502(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_502(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_502(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_502(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_502(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_502(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_502(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_502(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_502(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_502(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_502(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_502(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_502(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_502(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_502(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_502(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_502(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_502(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_502(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_502(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_502(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_502(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_502(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_502(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_502(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_502(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_502(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_502(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_502(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_502(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_502(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_502(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_502(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_502(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_502(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_502(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_502(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_502(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_502(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_502(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_502(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_502(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_502(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_502(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_502(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_502(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_502(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_502(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_502(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_502(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_502(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_502(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_502(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_502(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_502(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_502(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_502(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_502(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_502(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_502(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_502(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_502(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_502(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_502(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_502(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_502(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_502(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_502(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_502(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_502(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_502(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_502(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_502(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_502(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_502(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_502(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_502(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_502(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_502(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_502(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_502(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_502(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_502(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_502(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_502(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_502(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_502(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_502(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_502(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_502(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_502(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_502(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_502(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_502(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_502(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_502(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_502(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_502(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_502(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_502(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_502(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_502(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_502(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_502(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_502(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_502(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_502(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_502(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_502(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_502(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_502(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_502(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_502(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_502(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_502(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_502(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_502(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_502(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_502(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_502(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_502(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_502(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_502(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_502(-2484.323f, 3249.294f, 31.828f, 151f);
			func_502(-2495.313f, 3255.746f, 31.828f, 151f);
			func_502(-2472.644f, 3242.684f, 31.828f, 151f);
			func_502(-2506.313f, 3262.27f, 31.823f, 151f);
			func_502(-2461.494f, 3235.93f, 31.828f, 151f);
			func_502(-2505.602f, 3238.049f, 31.828f, 151f);
			func_502(-2481.937f, 3224.8f, 31.828f, 151f);
			func_502(-2516.813f, 3244.266f, 31.823f, 151f);
			func_502(-2470.03f, 3217.899f, 31.828f, 151f);
			func_502(-2493.933f, 3231.308f, 31.828f, 151f);
			func_502(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_502(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_502(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_502(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_502(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_502(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_502(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_502(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_502(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_502(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_502(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_502(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_502(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_502(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_502(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_502(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_502(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_502(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_502(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_502(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_502(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_502(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_502(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_502(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_502(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_502(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_502(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_502(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_502(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_502(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_502(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_502(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_502(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_502(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_502(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_502(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case -1763555241:
		case -1984275979:
		case -392675425:
		case -975345305:
		case -1386191424:
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case -1523619738:
		case -1007528109:
		case 1565978651:
		case 1036591958:
		case -1700874274:
			return 1;
		
		default:
	}
	return 0;
}

void func_492(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_502(-947.712f, -3367.704f, 12.944f, 60f);
			func_502(-904.692f, -3293.072f, 12.944f, 60f);
			func_502(-863.71f, -3221.978f, 12.944f, 60f);
			func_502(-966.418f, -3162.773f, 12.944f, 60f);
			func_502(-1007.435f, -3233.93f, 12.944f, 60f);
			func_502(-1050.455f, -3308.559f, 12.944f, 60f);
			func_502(-1145.673f, -3253.456f, 12.944f, 60f);
			func_502(-1098.386f, -3181.428f, 12.944f, 60f);
			func_502(-1060.474f, -3108.903f, 12.944f, 60f);
			func_502(-1155.391f, -3053.632f, 12.944f, 60f);
			func_502(-1196.114f, -3125.146f, 12.948f, 60f);
			func_502(-1235.552f, -3201.86f, 12.944f, 60f);
			func_502(-1344.446f, -3139.177f, 12.944f, 60f);
			func_502(-1301.308f, -3064.341f, 12.944f, 60f);
			func_502(-1260.135f, -2992.912f, 12.944f, 60f);
			func_502(-1364.244f, -2932.9f, 12.98f, 60f);
			func_502(-1405.284f, -3004.108f, 12.96f, 60f);
			func_502(-1448.29f, -3078.72f, 12.95f, 60f);
			func_502(-1535.732f, -3028.318f, 12.945f, 60f);
			func_502(-1492.639f, -2953.558f, 12.945f, 60f);
			func_502(-1451.506f, -2882.2f, 12.944f, 60f);
			func_502(-1553.927f, -2823.12f, 13.002f, 60f);
			func_502(-1595.097f, -2894.571f, 12.944f, 60f);
			func_502(-1637.836f, -2968.714f, 12.945f, 60f);
			func_502(-1740.971f, -2911.484f, 12.944f, 330f);
			func_502(-1696.293f, -2833.978f, 12.944f, 330f);
			func_502(-1651.502f, -2756.273f, 12.945f, 330f);
			func_502(-1588.258f, -2647.575f, 12.944f, 330f);
			func_502(-1536.862f, -2681.378f, 12.945f, 330f);
			func_502(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_502(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_502(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_502(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_502(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_502(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_502(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_502(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_502(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_502(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_502(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_502(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_502(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_502(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_502(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_502(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_502(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_502(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_502(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_502(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_502(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_502(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_502(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_502(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_502(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_502(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_502(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_502(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_502(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_502(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_502(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case 1043222410:
		case -42959138:
		case -749299473:
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case -32878452:
		case 447548909:
			return 1;
		
		default:
	}
	return 0;
}

int func_494(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_495(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (vdist(unk_0x68F4C0EC296D3901(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_496(struct<2> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (vdist(Param0, Param0.f_1, 0f, Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049922[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 146)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_474(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_497(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_498(iParam0);
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
	if (iVar1 != func_252())
	{
		if (Global_1590535[iVar1 /*876*/].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_5 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_499(int iParam0)
{
	if ((unk_0x7D8B2A8F9EA82DB7(iParam0) || unk_0xD1CC995EE5EB1EC1(iParam0)) || unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_500(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_502(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_502(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_502(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_502(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_502(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_502(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_502(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_502(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_502(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_502(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_502(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_502(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_502(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_502(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_502(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_502(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_502(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_502(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_502(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_502(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_502(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_502(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_502(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_502(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_502(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_502(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_502(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_502(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_502(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_502(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_502(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_502(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_502(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_502(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_502(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_502(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_501())
			{
				func_502(-1608.297f, -556.875f, 33.406f, 310f);
				func_502(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_502(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_502(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_502(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_502(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_502(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_502(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_502(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_502(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_502(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_502(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_501())
			{
				func_502(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_502(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_502(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_502(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_502(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_502(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_502(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_502(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_502(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_502(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_502(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_502(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_501())
			{
				func_502(-102.737f, -597.379f, 35.053f, 160.999f);
				func_502(-97.793f, -589.568f, 35.082f, 134.799f);
				func_502(-110.357f, -619.402f, 35.055f, 160.599f);
				func_502(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_502(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_502(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_502(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_502(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_502(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_502(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_502(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_502(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_501())
			{
				func_502(-59.349f, -779.238f, 43.134f, 228.398f);
				func_502(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_502(-65.212f, -772.66f, 43.151f, 219.398f);
				func_502(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_502(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_502(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_502(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_502(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_502(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_502(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_502(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_502(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_502(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_502(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_502(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_502(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_502(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_502(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_502(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_502(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_502(-1464.5f, -927.9f, 9f, 296.7991f);
			func_502(-1466f, -926.1f, 9f, 296.7991f);
			func_502(-1467.9f, -924.7f, 9f, 296.7991f);
			func_502(-1469.7f, -923.7f, 9f, 296.7991f);
			func_502(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_502(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_502(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_502(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_502(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_502(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_502(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_502(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_502(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_502(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_502(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_502(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_502(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_502(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_502(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_502(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_502(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_502(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_502(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_502(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_502(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_502(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_502(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_502(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_502(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_502(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_502(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_502(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_502(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_502(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_502(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_502(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_502(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_502(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_502(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_502(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_502(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_502(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_502(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_502(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_502(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_502(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_502(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_502(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_502(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_502(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_502(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_502(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_502(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_502(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_502(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_502(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_502(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_502(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_502(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_502(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_502(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_502(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_502(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_502(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_502(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_502(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_502(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_502(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_502(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_502(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_502(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_502(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_502(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_502(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_502(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_502(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_502(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_502(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_502(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_502(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_502(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_502(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_502(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_502(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_502(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_502(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_502(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_502(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_501()
{
	return Global_2450632.f_15;
}

void func_502(vector3 vParam0, float fParam1)
{
	if (Global_2405072.f_1746 < 101)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/] = { vParam0 };
		Global_2405072.f_1747[Global_2405072.f_1746 /*4*/].f_3 = fParam1;
		Global_2405072.f_1746++;
	}
}

int func_503(vector3 vParam0)
{
	int iVar0;
	
	if (vdist(Global_2405072.f_2895, vParam0) < Global_2405072.f_2903)
	{
		return Global_2405072.f_2898;
	}
	Global_2405072.f_2895 = { vParam0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (vParam0.z <= 0f)
		{
			vParam0.z = ((Global_2412235[iVar0 /*7*/].f_2 + Global_2412235[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_445(vParam0, &(Global_2412235[iVar0 /*7*/])))
		{
			Global_2405072.f_2898 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405072.f_2898 = -1;
	return -1;
}

int func_504()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_13, 0) && !Global_2451426.f_6285)
	{
		return 0;
	}
	return 0;
}

int func_505(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_474(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = vdist(Param0, Param0.f_1, 0f, Global_1676377.f_488[iVar0 /*3*/], Global_1676377.f_488[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_506()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405072.f_2728[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_507(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (vVar1.z <= 0f)
		{
			vVar1.z = ((Global_2412191[iVar0 /*7*/].f_2 + Global_2412191[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_445(vVar1, &(Global_2412191[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_456(&vVar1, Global_2412191[iVar0 /*7*/], Global_2412191[iVar0 /*7*/].f_3, Global_2412191[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_508(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_512(unk_0xD803B885F5E47A62(), 1))
			{
				return 1;
			}
			if (!func_511(vParam0, 1008981770))
			{
				if (!func_461(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_461(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_510(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_509(&(Global_2405072.f_45[iVar0 /*12*/])) };
					if (!func_461(&vVar1, 0, 0, 0, 1))
					{
						if (!func_461(&vParam0, 0, 0, 0, 1))
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

Vector3 func_509(var uParam0)
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

int func_510(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_449(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_511(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0 /*12*/].f_9)
		{
			if (func_449(vParam0, &(Global_2405072.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_512(int iParam0, bool bParam1)
{
	if (func_36() != 0)
	{
		return func_513(iParam0) != 0;
	}
	return func_1120(iParam0, bParam1, 0);
}

int func_513(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

void func_514()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405072.f_1747[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405072.f_1746 = 0;
}

int func_515(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

bool func_516()
{
	return Global_1653538.f_3;
}

bool func_517(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	
	func_363(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_359(iVar0, -1, -1);
	}
	func_519(&(Global_1323615[iParam0 /*141*/]));
	Global_2097152[func_356() /*10930*/].f_6174.f_1274 = unk_0xDD0E7998AE8AD485();
	func_336(iParam0, &(Global_1323615[iParam0 /*141*/]), 0, iParam1, 0, 0);
}

void func_519(var uParam0)
{
	func_520(uParam0);
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	StringCopy(&(uParam0->f_105), "", 64);
	StringCopy(&(uParam0->f_121), "", 64);
	uParam0->f_137 = 0;
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
}

void func_520(var uParam0)
{
	func_271(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

int func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
}