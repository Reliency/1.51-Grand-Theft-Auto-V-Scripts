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
	struct<14> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 16;
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
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
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
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313[4] = { 0, 0, 0, 0 };
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_319 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_320 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<4> Local_327[32];
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	char* sLocal_331 = NULL;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	struct<21> Local_336 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_91 = 1;
	bLocal_93 = true;
	bLocal_95 = true;
	iLocal_100 = -1;
	bLocal_278 = true;
	bLocal_279 = true;
	iLocal_282 = -1;
	iLocal_283 = -1;
	iLocal_307 = -1;
	iLocal_310 = -1;
	if (!func_540(ScriptParam_336))
	{
		func_536();
	}
	iLocal_318[0] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-891.3f, 807.9f, 188.1f));
	iLocal_318[1] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-276.5f, -206.3f, 38.4f));
	iLocal_318[2] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1485.5f, -644.5f, 30.1f));
	iLocal_318[3] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1746.3f, -939.5f, 7.7f));
	iLocal_318[4] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-2106.4f, -345.3f, 13f));
	iLocal_318[5] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1520f, 74.4f, 61.3f));
	iLocal_318[6] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1333f, -286f, 40.3f));
	iLocal_318[7] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1178.1f, 54.8f, 53.9f));
	iLocal_318[8] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1298.7f, -359.4f, 36.7f));
	iLocal_318[9] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-355.2f, 147.5f, 75.8f));
	iLocal_318[10] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-982.1f, -1064.7f, 2.2f));
	iLocal_318[11] = unk_0x7C53E3BB32D25CF8(unk_0xF729346F6E169246(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_535();
		bLocal_76 = false;
		bLocal_78 = false;
		bLocal_81 = false;
		bLocal_84 = false;
		bLocal_86 = false;
		Global_2537071.f_1687 = 0;
		if (func_525() || func_524())
		{
			func_536();
		}
		if (func_518())
		{
			if (!func_517())
			{
				if (!func_516())
				{
					if (func_514())
					{
						if (!iLocal_74)
						{
							func_510();
							func_509(&Local_319, 5);
							func_508();
							bLocal_95 = true;
							bLocal_96 = true;
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 1))
							{
								unk_0x0674E58A79778E99(&iLocal_328, 1);
							}
							iLocal_74 = 1;
							iLocal_310 = -999;
						}
					}
				}
			}
			else if (!func_516())
			{
				if (!bLocal_96)
				{
					if (!func_507(&uLocal_273))
					{
						func_506(&uLocal_273, 0, 0);
					}
					else if (func_505(&uLocal_273, 100, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 1))
						{
							if (func_514())
							{
								func_495(&Local_319, 5, Global_2097152[func_504() /*10930*/].f_6174.f_37);
								bLocal_95 = false;
								bLocal_96 = true;
								iLocal_74 = 1;
								iLocal_310 = -999;
							}
						}
					}
				}
			}
			func_398();
			func_394();
			func_380();
			func_373();
			func_264();
			func_176();
		}
		func_172();
		func_142();
		func_76();
		func_73();
		if (!iLocal_98)
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0x3124890FDA752DE4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_98 = 1;
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_93)
	{
	}
	else
	{
		if (iLocal_94 >= Local_327)
		{
			iLocal_94 = 0;
			unk_0x0674E58A79778E99(&iLocal_328, 10);
			unk_0x0674E58A79778E99(&(Local_320.f_23), 7);
			unk_0x0674E58A79778E99(&iLocal_328, 11);
			unk_0x0674E58A79778E99(&iLocal_328, 23);
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_23), 1);
				unk_0x0674E58A79778E99(&(Local_320.f_23), 3);
			}
		}
		iVar0 = iLocal_94;
		if (Local_327[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_320[iVar1] == -1)
				{
					if (!Local_320.f_6[iVar1])
					{
						if (Local_320[iVar1] == Local_327[iVar0 /*4*/])
						{
							if (Local_320[iVar1] == Local_320.f_28)
							{
								func_72();
							}
							Local_320.f_33 = 0;
							Local_320.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 7))
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
				{
					if (Local_327[iVar0 /*4*/].f_3 > 0 || func_71(unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0)), 6))
					{
						if (Local_327[iVar0 /*4*/].f_3 < 3)
						{
							unk_0x5D96D8530B3D0904(&(Local_320.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 11))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_327[iVar0 /*4*/].f_2, 2))
				{
					unk_0x5D96D8530B3D0904(&iLocal_328, 11);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 21))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_327[iVar0 /*4*/].f_2, 3))
						{
							unk_0x5D96D8530B3D0904(&iLocal_328, 21);
						}
					}
				}
			}
		}
		iLocal_94++;
		if (iLocal_94 >= Local_327)
		{
			unk_0x5D96D8530B3D0904(&iLocal_328, 10);
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 7) || unk_0xEAE0D21A50E6C7F4(iLocal_328, 23))
			{
				unk_0x0674E58A79778E99(&(Local_320.f_23), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 11))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_23), 3);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 21))
			{
				unk_0x5D96D8530B3D0904(&(Local_320.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_320.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_320.f_20)
	{
		case 0:
			func_66();
			Local_320.f_32++;
			Local_320.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				iLocal_306 = unk_0x2B6E0A53779D29EA();
				Local_320.f_20 = 2;
			}
			else if (Local_320.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_320.f_17 && unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_306) > Global_262145.f_11469)
			{
				Local_320.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (Local_320.f_26)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
			{
				if (bLocal_278)
				{
					if (bLocal_279)
					{
						if (Global_2537071.f_1660)
						{
							unk_0x0674E58A79778E99(&(Local_320.f_23), 2);
							unk_0x0674E58A79778E99(&(Local_320.f_23), 6);
							unk_0x0674E58A79778E99(&iLocal_328, 21);
							unk_0x28E5F00F131890E3(0);
							Local_320.f_34 = 0;
							unk_0x5D96D8530B3D0904(&(Local_320.f_23), 0);
							Global_2537071.f_1660 = 0;
						}
					}
					else if (Local_320.f_27 == -15)
					{
						unk_0x0674E58A79778E99(&(Local_320.f_23), 2);
						unk_0x0674E58A79778E99(&(Local_320.f_23), 6);
						unk_0x0674E58A79778E99(&iLocal_328, 21);
						unk_0x28E5F00F131890E3(0);
						Local_320.f_34 = 0;
						iVar2 = func_63();
						func_49(&(Local_320.f_27), func_62(iVar2), func_61(iVar2), func_60(iVar2), func_59(iVar2), func_58(iVar2), func_56(iVar2));
						func_48(&(Local_320.f_27), 0, unk_0x09AC81E49EA267F7(0, 60), unk_0x09AC81E49EA267F7(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_507(&uLocal_295))
						{
							func_506(&uLocal_295, 0, 0);
						}
						else if (func_505(&uLocal_295, 10000, 0))
						{
							func_46(&uLocal_295);
							if (func_42(Local_320.f_27))
							{
								unk_0x5D96D8530B3D0904(&(Local_320.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_320.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (unk_0x23002DD5E7B94FD7(Local_320.f_24))
					{
						unk_0xBD63401BCCEC233B(Local_320.f_24);
					}
					Local_320.f_24 = -1;
					iLocal_281 = unk_0x09AC81E49EA267F7(0, 10);
					iVar3 = func_33();
					if (iVar3 != 0)
					{
						Local_320.f_67 = iVar3;
						unk_0x28E5F00F131890E3(1);
						Local_320.f_34 = 1;
					}
				}
			}
			else if (unk_0xE75B31D140F2F10B(1))
			{
				if (func_32(Local_320.f_67))
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_320.f_22))
					{
						if (func_21(&vVar0, &fVar1))
						{
							if (func_18(&(Local_320.f_22), Local_320.f_67, vVar0, fVar1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (unk_0xF1D385D359D58F72("MPBitset", 3))
								{
									if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset"))
									{
										iVar4 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset");
									}
									unk_0x5D96D8530B3D0904(&iVar4, 5);
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset", iVar4);
								}
								if (unk_0xF1D385D359D58F72("MPBitset", 3))
								{
									if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset"))
									{
										iVar5 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset");
									}
									unk_0x5D96D8530B3D0904(&iVar5, 10);
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_22), "MPBitset", iVar5);
								}
								if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_320.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0x5D96D8530B3D0904(&(Local_320.f_23), 0);
								unk_0x0674E58A79778E99(&(Local_320.f_23), 2);
								unk_0x0674E58A79778E99(&(Local_320.f_23), 4);
								unk_0x0674E58A79778E99(&(Local_320.f_23), 3);
								unk_0x0674E58A79778E99(&iLocal_328, 11);
								unk_0x0674E58A79778E99(&(Local_320.f_23), 6);
								unk_0x5D96D8530B3D0904(&iLocal_328, 23);
								unk_0x71199B01895C6202(Local_320.f_67);
								Local_320.f_26 = 1;
								func_46(&(Local_320.f_30));
								func_506(&(Local_320.f_30), 0, 0);
								unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_22), 7);
								unk_0xA485C14FF45FDB92(unk_0xB177666FAB6F4417(Local_320.f_22), 1);
								unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 1);
								unk_0x32DFF210E11D4B0F(Local_320.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 2))
			{
				if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
				{
					if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_22), 0))
					{
						Local_73.f_2 = 692748669;
						func_16(Local_73, func_17(1));
						unk_0x5D96D8530B3D0904(&(Local_320.f_23), 2);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 3) || (unk_0xEAE0D21A50E6C7F4(iLocal_328, 10) && unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 1)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 2))
					{
						if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
						{
							if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_22), 0))
							{
								Local_73.f_2 = 692748669;
								func_16(Local_73, func_17(1));
								unk_0x5D96D8530B3D0904(&(Local_320.f_23), 2);
							}
						}
					}
				}
				Local_320.f_26 = 2;
			}
			if (func_15(unk_0xB177666FAB6F4417(Local_320.f_22)))
			{
				Local_320.f_26 = 2;
				Local_73.f_2 = 1788479899;
				func_16(Local_73, func_17(1));
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 4))
			{
				if (func_505(&(Local_320.f_30), 360000, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_320.f_23), 4);
					func_46(&(Local_320.f_30));
					func_506(&(Local_320.f_30), 0, 0);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 10))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 3))
				{
					if (func_507(&(Local_320.f_30)))
					{
						if (func_505(&(Local_320.f_30), 120000, 0))
						{
							Local_320.f_26 = 2;
							Local_73.f_2 = 1788479899;
							func_16(Local_73, func_17(1));
						}
					}
					else
					{
						func_506(&(Local_320.f_30), 0, 0);
					}
				}
				else if (func_507(&(Local_320.f_30)))
				{
					func_46(&(Local_320.f_30));
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 6))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
				{
					if (Local_320.f_26 == 1)
					{
						Local_320.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_320.f_26 == 1)
				{
					Local_320.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
			{
				if (func_10(Local_320.f_22))
				{
					func_9(&(Local_320.f_22));
					Local_320.f_26 = 3;
				}
			}
			else
			{
				Local_320.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 10))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 1))
				{
					Local_320.f_26 = 0;
					unk_0x0674E58A79778E99(&(Local_320.f_23), 0);
					Local_320.f_27 = -15;
					if (Local_320.f_67 != 0)
					{
						unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 0);
					}
					Local_320.f_67 = 0;
					if (bLocal_279)
					{
						func_7(func_8(unk_0x15673EFF6BDD825C("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		switch (Local_320.f_69)
		{
			case 0:
				if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 8))
				{
					if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
					{
						if (!func_6())
						{
							if (unk_0x9222738B0C7F632D(unk_0xB177666FAB6F4417(Local_320.f_22)))
							{
								if (!unk_0x3D1053F9EB43B7AD(unk_0xB177666FAB6F4417(Local_320.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 9))
									{
										unk_0x5D96D8530B3D0904(&(Local_320.f_23), 9);
									}
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 9))
						{
							unk_0x0674E58A79778E99(&(Local_320.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 9))
	{
		if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
		{
			if (func_4(Local_320.f_22))
			{
				if (unk_0x526BC32A660C89E6(Local_320.f_22))
				{
					unk_0x20641932E5104B25(unk_0xB177666FAB6F4417(Local_320.f_22), true, 0);
					unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_22), 1);
					unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_320.f_22), false);
					unk_0xBA2CB24C70C8E726(unk_0xB177666FAB6F4417(Local_320.f_22), 1, 1);
					unk_0x0674E58A79778E99(&(Local_320.f_23), 9);
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_320.f_22);
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_320.f_23), 9);
			}
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_320.f_23), 9);
		}
	}
}

int func_4(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_5(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
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

int func_6()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			iVar0 = unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_320.f_22), -1, 0);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 1391861344;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		unk_0x8D30F6387EE75385(uParam0);
		return unk_0x526BC32A660C89E6(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0x117658E336116132(iVar0), 0, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

int func_15(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xF1D385D359D58F72("bombdec1", 3))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0xF1D385D359D58F72("bombdec", 3))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0xF1D385D359D58F72("bombowner", 3))
		{
			if (unk_0x30F813723591D02E(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_17(int iParam0)
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
			if (func_14(iVar2, 0, 0))
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

int func_18(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_19(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_20(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
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

int func_20(int iParam0, vector3 vParam1, int iParam2)
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

int func_21(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_281)
	{
		case 0:
			vVar0 = { -810.8889f, -126.9419f, 33f };
			vVar1 = { -807.2521f, -116.098f, 38f };
			vVar2 = { -809.0935f, -121.9038f, 36.504f };
			fVar3 = 240.8011f;
			break;
		
		case 1:
			vVar0 = { -804.004f, -1317.293f, 0.0005f };
			vVar1 = { -797.881f, -1310.998f, 7.0005f };
			vVar2 = { -801.6295f, -1313.865f, 4.0005f };
			fVar3 = 350.3062f;
			break;
		
		case 2:
			vVar0 = { -194.8607f, -1955.005f, 25.6205f };
			vVar1 = { -189.4078f, -1945.248f, 28.6205f };
			vVar2 = { -191.5592f, -1950.239f, 26.6205f };
			fVar3 = 288.8187f;
			break;
		
		case 3:
			vVar0 = { -2966.875f, 459.3981f, 13.4644f };
			vVar1 = { -2961.456f, 466.0484f, 16.1725f };
			vVar2 = { -2963.887f, 462.7986f, 14.2156f };
			fVar3 = 30.4415f;
			break;
		
		case 4:
			vVar0 = { -420.6335f, 1217.742f, 322.7591f };
			vVar1 = { -411.9892f, 1220.346f, 326.6421f };
			vVar2 = { -416.0102f, 1219.771f, 324.6421f };
			fVar3 = 230.4509f;
			break;
		
		case 5:
			vVar0 = { -1634.708f, -890.849f, 6.97f };
			vVar1 = { -1633.903f, -879.869f, 9.1264f };
			vVar2 = { -1634.006f, -885.3531f, 8.0518f };
			fVar3 = 321.31f;
			break;
		
		case 6:
			vVar0 = { -338.4312f, -947.4233f, 28.0788f };
			vVar1 = { -331.5926f, -944.408f, 32.0788f };
			vVar2 = { -334.8547f, -945.2789f, 30.0788f };
			fVar3 = 69.0442f;
			break;
		
		case 7:
			vVar0 = { 1093.925f, 245.6548f, 77.9908f };
			vVar1 = { 1094.243f, 255.0715f, 82.8556f };
			vVar2 = { 1093.686f, 250.4772f, 79.8556f };
			fVar3 = 328.5602f;
			break;
		
		case 8:
			vVar0 = { -1407.823f, 58.1796f, 50.8018f };
			vVar1 = { -1400.19f, 63.9074f, 54.3222f };
			vVar2 = { -1404.459f, 62.1459f, 52.0258f };
			fVar3 = 241.2814f;
			break;
		
		case 9:
			vVar0 = { -1230.324f, -1656.814f, 2.0412f };
			vVar1 = { -1226.429f, -1648.143f, 4.1986f };
			vVar2 = { -1228.901f, -1652.397f, 3.1204f };
			fVar3 = 305.0972f;
			break;
	}
	if (!func_31(vVar0, 0f, 0f, 0f, 0))
	{
		if (iLocal_281 < 10)
		{
			if (Local_320.f_24 == -1)
			{
				Local_320.f_24 = unk_0x198D598261EEA7EA(vVar0, vVar1);
			}
			else if (unk_0x23002DD5E7B94FD7(Local_320.f_24))
			{
				if (unk_0x9E6C7E283363593B(Local_320.f_24))
				{
					if (!unk_0x6FE31D882B028E10(Local_320.f_24))
					{
						if (!func_22(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0xBD63401BCCEC233B(Local_320.f_24);
							Local_320.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_281++;
							unk_0xBD63401BCCEC233B(Local_320.f_24);
							Local_320.f_24 = -1;
						}
					}
					else
					{
						iLocal_281++;
						unk_0xBD63401BCCEC233B(Local_320.f_24);
						Local_320.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_281 = 0;
		}
	}
	return 0;
}

int func_22(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_14(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_27(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_14(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_23(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_27(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_27(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_23(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312745;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1590535[iVar0 /*876*/].f_847) && !func_29(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2450632.f_17;
}

bool func_31(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2335 != 0)
	{
		iVar1 = Global_262145.f_2335;
		if (unk_0x3FC14104C3FD24D5(iVar1))
		{
			if (unk_0x4DAC2AD66FE0E696(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_320);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0)
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

int func_40(int iParam0, bool bParam1)
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

int func_41(int iParam0)
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

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
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
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)
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

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
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
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
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

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_56(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_57(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 15;
}

int func_59(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_60(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_61(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_62(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, unk_0x4460E481B9E33ADA());
	func_54(&uVar0, unk_0x8D199E381D262EEF());
	func_53(&uVar0, unk_0xD8A54335F18763BA());
	func_51(&uVar0, unk_0x972A296334C9D57B());
	func_52(&uVar0, unk_0x118229AD063C3C1D());
	func_50(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_320.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_320.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(Local_320.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_509(&Local_320, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_320.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_320.f_33 = 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_320.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_320);
	if (iVar0 != Local_320.f_28)
	{
		Local_320.f_28 = iVar0;
		Local_320.f_29 = unk_0x2B6E0A53779D29EA();
	}
}

int func_70()
{
	if (Local_320.f_20 > 0)
	{
		if (Local_320[0] != Local_320[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

void func_72()
{
	Local_320.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2537071.f_4386 == 0 || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4387, 0))
		{
			if (!func_507(&uLocal_301) || func_505(&uLocal_301, 2000, 0))
			{
				iVar0 = func_35(&Local_319);
				if (iVar0 > -1)
				{
					Global_2537071.f_4386 = func_34(iVar0);
					func_46(&uLocal_299);
					func_506(&uLocal_299, 0, 0);
					if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4387, 0))
					{
						unk_0x0674E58A79778E99(&(Global_2537071.f_4387), 0);
					}
				}
				else
				{
					func_46(&uLocal_301);
					func_506(&uLocal_301, 0, 0);
				}
			}
		}
		else if (Global_2537071.f_4386 != 0)
		{
			if (func_505(&uLocal_299, 20000, 0))
			{
				if (!func_74(&Local_319, Global_2537071.f_4386))
				{
					Global_2537071.f_4386 = 0;
				}
				func_46(&uLocal_299);
				func_506(&uLocal_299, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_76()
{
	int iVar0;
	
	if (((((bLocal_80 || bLocal_81) || bLocal_82) || bLocal_84) || bLocal_83) || bLocal_85)
	{
		if (((((Global_2537071.f_28.f_41 || func_139(unk_0xD803B885F5E47A62(), 1, 0)) || func_138(unk_0xD803B885F5E47A62())) || !func_136()) || func_124()) || func_118())
		{
			bLocal_80 = false;
			bLocal_82 = false;
			bLocal_81 = false;
			bLocal_84 = false;
			bLocal_83 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_85)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98())
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_80)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98())
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_82)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!func_139(unk_0xD803B885F5E47A62(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_83)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (!func_139(unk_0xD803B885F5E47A62(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_84)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_81)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_98() || func_77())
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 3))
					{
						if (!iLocal_87)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iLocal_316 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									}
								}
							}
						}
						else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								if (iVar0 != iLocal_316)
								{
									iLocal_87 = 0;
									func_46(&uLocal_303);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_507(&uLocal_303))
		{
			func_506(&uLocal_303, 0, 0);
		}
		else if (func_505(&uLocal_303, 20000, 0))
		{
			func_117();
			iLocal_87 = 1;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
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

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_82(int iParam0)
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

int func_83()
{
	return Global_30768;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1312585 == 11)
		{
			if (unk_0x7724E025FD444F45(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
		}
		else
		{
			if (unk_0x7724E025FD444F45(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)
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

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		unk_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_88();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_88()
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

int func_89()
{
	if (!func_90())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_1312585.f_12));
	func_88();
	return unk_0xB165082A56EE6E7F();
}

int func_90()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = unk_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 1);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_1312585.f_59), 0);
}

void func_94()
{
	Global_1312585.f_10 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = unk_0x2B6E0A53779D29EA();
}

bool func_95(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_96(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_1312585.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_329, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0x5D96D8530B3D0904(&iLocal_329, 0);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(unk_0xD803B885F5E47A62(), 1, 1) || unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_139(unk_0xD803B885F5E47A62(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || unk_0xD17F06053799A7CA()) || func_106() > 0) || !func_136()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(unk_0xD803B885F5E47A62(), 8))
	{
		return 1;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 10))
	{
		return 1;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 12))
	{
		return 1;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 14))
	{
		return 1;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 7))
	{
		return 1;
	}
	iVar0 = Global_1388048[func_81(-1)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 6))
	{
		unk_0x5D96D8530B3D0904(&(Global_2537071.f_1731), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_142, 2);
}

bool func_102()
{
	return Global_1312865;
}

bool func_103()
{
	return Global_1312867;
}

int func_104()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 28) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1731, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1732, 3);
}

int func_106()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_197;
}

int func_107()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_1370527.f_40 == 3;
}

bool func_110()
{
	return Global_2439138.f_3047.f_578;
}

bool func_111()
{
	return Global_98796.f_346 > 0;
}

bool func_112()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

var func_113()
{
	return Global_2394809;
}

bool func_114(int iParam0, int iParam1)
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

bool func_115()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_116(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	return func_95(sParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_123(17))
	{
		return 1;
	}
	if (func_123(0))
	{
		return 1;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 1))
	{
		return 1;
	}
	if (func_119(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_120(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
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

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(2480, -1, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

int func_124()
{
	if (func_128())
	{
		return 1;
	}
	if (func_125(unk_0xD803B885F5E47A62(), 1))
	{
		return 1;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_126(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_126(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_127(iParam0, 0);
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_128()
{
	if (!func_135(unk_0xD803B885F5E47A62()))
	{
		if (func_131(unk_0xD803B885F5E47A62()) || func_130(unk_0xD803B885F5E47A62()) != -1)
		{
			return 1;
		}
		if (func_129(unk_0xD803B885F5E47A62()) && Global_1574650.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_131(int iParam0)
{
	if (func_134(iParam0))
	{
		return 1;
	}
	if (func_132(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_133(iParam0, 9);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_135(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 2);
}

int func_136()
{
	if (func_137() == 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	return Global_1312467.f_18;
}

int func_138(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_35;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_142()
{
	if (bLocal_78)
	{
		if (!unk_0xE4EDC4B0E92C078B(Global_1661967))
		{
			Global_1661967 = unk_0x6CC513A908911CF0(Global_1661968);
			unk_0xBC8E0A7390523199(Global_1661967, 293);
			unk_0x516E63E474722206(Global_1661967, 1f);
			unk_0x6ABCCE651368DB93(Global_1661967, 0);
			unk_0xDC5B2F9D0CCE3A10(Global_1661967, "IMPEX_BLIP_FM");
			if (func_171())
			{
				unk_0xF412DD40DE84CE72(Global_1661967, 1);
			}
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(Global_1661967))
	{
		unk_0x142CC44DB769B57E(&Global_1661967);
		if (bLocal_277)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!func_166(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 1215605247, &uLocal_308, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_165("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_79)
	{
		if (iLocal_100 == -1)
		{
			iLocal_100 = func_149(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 4, -1);
			if (iLocal_100 != -1)
			{
				func_143(iLocal_100, 1);
			}
		}
	}
	else if (iLocal_100 != -1)
	{
		func_143(iLocal_100, 0);
		iLocal_100 = -1;
	}
}

void func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_144(39, bParam1);
			break;
		
		case 40:
			func_144(40, bParam1);
			break;
		
		case 41:
			func_144(41, bParam1);
			break;
		
		case 42:
			func_144(42, bParam1);
			break;
		
		case 43:
			func_144(43, bParam1);
			break;
		
		case 44:
			func_144(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_148(iParam0, 8, 0);
			func_147(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_145(iParam0, 8, 0);
		func_147(iParam0);
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

void func_147(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

void func_148(int iParam0, int iParam1, bool bParam2)
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
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_149(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam1 == 6 || iParam1 == func_164(iVar0))
		{
			iVar4 = iVar0;
			if (func_163(iVar4))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_150(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_160(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_121())
			{
				if (func_159(Global_1590374))
				{
					return func_152(2, 2);
				}
				else if (func_151(Global_1590374))
				{
					return func_152(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_151(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_152(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_153(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_153(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_153(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_158(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_158(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_156(iParam0) };
	}
	else
	{
		Var2 = { func_155(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_154(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_154(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_154(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_155(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_156(int iParam0)
{
	return func_157(iParam0);
}

struct<6> func_157(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161()
{
	return func_162(unk_0xD803B885F5E47A62());
}

var func_162(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_163(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[39]);
			break;
		
		case 40:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[40]);
			break;
		
		case 41:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[41]);
			break;
		
		case 42:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[42]);
			break;
		
		case 43:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[43]);
			break;
		
		case 44:
			bVar0 = unk_0xE4EDC4B0E92C078B(Global_98796.f_235[44]);
			break;
	}
	return bVar0;
}

int func_164(int iParam0)
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

void func_165(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

int func_166(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_507(uParam2))
	{
		func_506(uParam2, 0, 0);
	}
	iParam3 = 0f;
	if (func_167(iParam0, iParam1, 1, uParam2, iParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_507(uParam3))
	{
		func_506(uParam3, 0, 0);
	}
	func_170(&Var3, iParam1);
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (func_168(iParam0, iParam1, 30))
			{
				if (unk_0xEC560E589DF8370E(iParam0))
				{
					iVar0 = unk_0x940C1429253D3B1B(iParam0);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (unk_0x34BFC6F0CB887BC2(iVar0))
						{
							iVar2 = unk_0x83FACCC48B68F9D1(iVar0);
							if (bParam2)
							{
								if (unk_0x54FF5F80FBB239F8(iParam1, iVar2, iParam4, -1))
								{
									if (uParam7 || (!unk_0x51D830A7B896F825(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && unk_0x51D830A7B896F825(iParam1, iVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0x54FF5F80FBB239F8(iParam1, iVar2, iParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x51D830A7B896F825(iParam1, iVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x51D830A7B896F825(iParam1, iVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x405E212DDE472467(iVar0, 0))
						{
							iVar1 = unk_0x6937EA2286828455(iVar0, 0);
							if (unk_0xC844350D5D58C99A(iVar1))
							{
								if (bParam2)
								{
									if (unk_0x13F159934787D446(iParam1, iVar1, iParam4, -1))
									{
										if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x13F159934787D446(iParam1, iVar1, iParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0x48E02A6C90F89678(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x13F159934787D446(iParam1, iParam0, iParam4, -1))
							{
								if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x13F159934787D446(iParam1, iParam0, iParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0x48E02A6C90F89678(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0xE2F1E99DD161A861(iParam0) || unk_0x6BC06B42AD71CD8B(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x13F159934787D446(iParam1, iParam0, iParam4, -1))
						{
							if (uParam7 || (!unk_0x48E02A6C90F89678(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x13F159934787D446(iParam1, iParam0, iParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0x48E02A6C90F89678(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0x48E02A6C90F89678(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 1), func_169(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(1199, -1, 0);
	if (!unk_0xEAE0D21A50E6C7F4(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_172()
{
	if (bLocal_76)
	{
		if (!iLocal_77)
		{
			func_174(1215605247, 1, 0);
			func_173(1);
			iLocal_77 = 1;
		}
	}
	else if (iLocal_77)
	{
		func_174(1215605247, 0, 0);
		func_173(0);
		iLocal_77 = 0;
	}
}

void func_173(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x8CD06866876216F2())
	{
	}
	else if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4498, func_175(iParam0)))
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_2537071.f_4498.f_1), func_175(iParam0));
			}
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4498), func_175(iParam0));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4498, func_175(iParam0)))
	{
		if (bParam2)
		{
			unk_0x0674E58A79778E99(&(Global_2537071.f_4498.f_1), func_175(iParam0));
		}
		unk_0x0674E58A79778E99(&(Global_2537071.f_4498), func_175(iParam0));
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_176()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
	{
		if (iLocal_311 >= 32)
		{
			unk_0x0674E58A79778E99(&iLocal_328, 5);
			iLocal_311 = 0;
			iLocal_283 = -1;
		}
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_311)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_311));
			iVar1 = unk_0x9539D44F3E4492F6(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_327[iLocal_311 /*4*/].f_2, 1))
					{
						unk_0x5D96D8530B3D0904(&iLocal_328, 3);
					}
				}
				if (iLocal_283 == -1)
				{
					if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
					{
						if (func_4(Local_320.f_22))
						{
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								if (unk_0x82CCEAB29E9451DD(iVar1, unk_0xB177666FAB6F4417(Local_320.f_22)))
								{
									if (unk_0xA30B8362589C124A(unk_0xB177666FAB6F4417(Local_320.f_22), -1, 0) == iVar1)
									{
										iLocal_283 = iLocal_311;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_311++;
		if (iLocal_311 >= 32)
		{
			unk_0x5D96D8530B3D0904(&iLocal_328, 5);
		}
		func_262();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 3))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 1))
				{
					if (func_260())
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_280 != Local_320.f_34)
	{
		if (Local_320.f_34 == 0)
		{
			if (!unk_0xE5DBF9B6126856CA(Local_320.f_22))
			{
				iLocal_280 = Local_320.f_34;
				unk_0x28E5F00F131890E3(iLocal_280);
			}
		}
		else
		{
			iLocal_280 = Local_320.f_34;
			unk_0x28E5F00F131890E3(iLocal_280);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
	{
		switch (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3)
		{
			case 0:
				if (!Global_2537071.f_1659)
				{
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 3))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 3);
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 21))
				{
					unk_0x0674E58A79778E99(&iLocal_328, 21);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 1))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 1);
				}
				if (((!func_139(unk_0xD803B885F5E47A62(), 1, 0) && !func_112()) && !func_259(unk_0xD803B885F5E47A62(), 1, 0)) || func_71(unk_0xD803B885F5E47A62(), 6))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
					{
						unk_0x0674E58A79778E99(&iLocal_328, 3);
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 19))
					{
						unk_0x0674E58A79778E99(&iLocal_328, 19);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 3))
					{
						unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 3);
					}
					if (iLocal_282 != -1)
					{
						iLocal_282 = -1;
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 16))
						{
							unk_0x5D96D8530B3D0904(&iLocal_328, 16);
							func_258(6, 1);
							unk_0x5D96D8530B3D0904(&iLocal_328, 7);
							Global_2537071.f_1658 = 1;
							Global_2537071.f_1659 = 0;
						}
						if (unk_0xE75B31D140F2F10B(1))
						{
							if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
							{
								if (func_252())
								{
									if (Local_320.f_67 != 0)
									{
										unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 1);
									}
									Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 1;
									Global_1661977 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_320.f_22));
									if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_320.f_22))))
									{
										unk_0xBC8E0A7390523199(Global_1661977, 348);
										func_165("IMPEX_HIPB_INT", -1);
									}
									else
									{
										unk_0xBC8E0A7390523199(Global_1661977, 225);
										func_165("IMPEX_HIPR_INT", -1);
									}
									unk_0x61755AC17D8F538E(Global_1661977, 2);
									unk_0xDC5B2F9D0CCE3A10(Global_1661977, "IMPEX_HIPR_BLP");
									func_258(6, 1);
									unk_0x5D96D8530B3D0904(&iLocal_328, 7);
									Global_2537071.f_1658 = 1;
									if (func_118())
									{
										unk_0x9D7CDDB4B55142AF(Global_1661977, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2537071.f_1659)
				{
					Global_2537071.f_1659 = 1;
				}
				break;
			
			case 1:
				if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
				{
					if (unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_320.f_22), 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22)))
							{
								func_251(1);
								if (func_250())
								{
									func_245(2, 0, 1);
								}
								if (unk_0xE4EDC4B0E92C078B(Global_1661977))
								{
									unk_0x142CC44DB769B57E(&Global_1661977);
								}
							}
							else
							{
								func_251(0);
								if (!func_244(unk_0xB177666FAB6F4417(Local_320.f_22), 0))
								{
									if (!unk_0xE4EDC4B0E92C078B(Global_1661977))
									{
										if (!iLocal_99)
										{
											func_243();
										}
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 19))
						{
							if (func_252())
							{
								if (func_241())
								{
									if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22)))
									{
										if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_22), 1)) < 2500f)
										{
											if (func_118())
											{
												func_165("FM_IMP_JAC", -1);
											}
											unk_0x5D96D8530B3D0904(&iLocal_328, 19);
										}
									}
								}
							}
						}
						if (func_240())
						{
						}
						func_238();
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(Global_1661977))
						{
							unk_0x142CC44DB769B57E(&Global_1661977);
						}
						func_258(6, 0);
						unk_0x0674E58A79778E99(&iLocal_328, 7);
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_320.f_67 != 0)
					{
						unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 0);
					}
					if (unk_0xE4EDC4B0E92C078B(Global_1661977))
					{
						unk_0x142CC44DB769B57E(&Global_1661977);
					}
					func_258(6, 0);
					unk_0x0674E58A79778E99(&iLocal_328, 7);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 3;
				}
				if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 3))
				{
					func_258(6, 0);
					unk_0x0674E58A79778E99(&iLocal_328, 7);
					if (unk_0xE4EDC4B0E92C078B(Global_1661977))
					{
						unk_0x142CC44DB769B57E(&Global_1661977);
					}
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 3;
				}
				if (Local_320.f_26 == 3)
				{
					if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 1)
					{
						if (Local_320.f_67 != 0)
						{
							unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 0);
						}
						if (unk_0xE4EDC4B0E92C078B(Global_1661977))
						{
							unk_0x142CC44DB769B57E(&Global_1661977);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 16))
						{
							unk_0x0674E58A79778E99(&iLocal_328, 16);
						}
						func_258(6, 0);
						unk_0x0674E58A79778E99(&iLocal_328, 7);
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_251(0);
				break;
		}
		if (func_235())
		{
			if (func_234("IMPEX_HIPR_INT"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (unk_0xE4EDC4B0E92C078B(Global_1661977))
			{
				unk_0x142CC44DB769B57E(&Global_1661977);
			}
			if (Local_320.f_67 != 0)
			{
				unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 0);
			}
			Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 3;
			func_258(6, 0);
			unk_0x0674E58A79778E99(&iLocal_328, 7);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 16))
			{
				unk_0x0674E58A79778E99(&iLocal_328, 16);
			}
			func_251(0);
		}
		func_191();
		if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 > 0 && Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 < 3)
		{
			func_188();
		}
	}
	else
	{
		if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 != 0)
		{
			if (Local_320.f_67 != 0)
			{
				unk_0xAB8E2DDC7AF955E0(Local_320.f_67, 0);
			}
			Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 21))
		{
			unk_0x0674E58A79778E99(&iLocal_328, 21);
		}
		if (Global_2537071.f_1658)
		{
			if (!func_507(&uLocal_293))
			{
				func_506(&uLocal_293, 0, 0);
			}
			else if (func_505(&uLocal_293, 5000, 0))
			{
				func_46(&uLocal_293);
				Global_2537071.f_1658 = 0;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 16))
		{
			if (Local_320.f_34 == 0)
			{
				unk_0x0674E58A79778E99(&iLocal_328, 16);
			}
		}
	}
	func_177();
}

void func_177()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	bool bVar4;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!func_241())
			{
				if (!func_507(&uLocal_334))
				{
					func_506(&uLocal_334, 0, 0);
				}
				if (func_505(&uLocal_334, 1000, 0))
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_22))
					{
						vVar1 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_22), 1) };
						if (func_185(vVar1, func_186(39), func_150(39, 0)))
						{
							if (func_180(39, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(vVar1, func_186(40), func_150(40, 0)))
						{
							if (func_180(40, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(vVar1, func_186(41), func_150(41, 0)))
						{
							if (func_180(41, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(vVar1, func_186(42), func_150(42, 0)))
						{
							if (func_180(42, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(vVar1, func_186(43), func_150(43, 0)))
						{
							if (func_180(43, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
						else if (func_185(vVar1, func_186(44), func_150(44, 0)))
						{
							if (func_180(44, 0, &vVar0, &fVar2, &uVar3, 0))
							{
								bVar4 = true;
							}
						}
					}
					func_46(&uLocal_334);
				}
				if (bVar4)
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_22))
					{
						if (func_178(unk_0xB177666FAB6F4417(Local_320.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							unk_0x08841CDB215AE18F(unk_0xB177666FAB6F4417(Local_320.f_22), vVar0, 0, 0, 1);
							unk_0xD8F6A53F4799FAFE(unk_0xB177666FAB6F4417(Local_320.f_22), fVar2);
							unk_0xBA2CB24C70C8E726(unk_0xB177666FAB6F4417(Local_320.f_22), 1, 1);
							unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_320.f_22), false);
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_320.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_178(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
	if (iParam4 || !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_179(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (unk_0x34BFC6F0CB887BC2(iVar2))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar2);
						if (((!unk_0xEB6A8945D1AC98A1(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x179932739160BA96(unk_0x83FACCC48B68F9D1(iVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xBBA8A868118C90ED(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iParam0, 0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, iParam1);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xD1960163A3042274(iVar0, 451360105) == 1 || unk_0xD1960163A3042274(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x68F4C0EC296D3901(iParam0, 0), unk_0x68F4C0EC296D3901(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

bool func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_181(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (((iParam1 == 6 || iParam1 == 7) || iParam1 == 8) || iParam1 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_185(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_187(Global_100839);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_283 > -1)
	{
		if (iLocal_283 != unk_0x57270EE11514DC67())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
			{
				iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
				bVar1 = true;
				if (unk_0xF816C4B5324CB295(iVar0, unk_0xD803B885F5E47A62()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22), 0))
				{
					if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_189(unk_0xB177666FAB6F4417(Local_320.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x00D1596840E78F77(iParam0);
	if (func_14(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_190(iParam0) == 0)
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
				{
					if (unk_0xC03F94FBD72F6D02(iParam0))
					{
						unk_0x52B4A38883F77FE6(iParam0, "MP_Arrow");
						unk_0xE2B7BC472E1C601F(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0x07B14BDE5C8EF39E(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (unk_0xAFB8495D36825275(iVar0) == 0 && unk_0xC41A9202669A24C4(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0xF79A7BCA9E38BBBC(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 5))
	{
		if (iLocal_282 != iLocal_283)
		{
			if (iLocal_283 > -1)
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
				{
					iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
					if (iVar0 != unk_0xD803B885F5E47A62())
					{
						if (!func_259(unk_0xD803B885F5E47A62(), 1, 0))
						{
							func_192("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (unk_0xBFF81ED3B99522C7())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 8))
						{
							unk_0x5D96D8530B3D0904(&(Local_320.f_23), 8);
						}
					}
				}
			}
			iLocal_282 = iLocal_283;
		}
	}
}

int func_192(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
				unk_0x3A820E495A7BA3E5(func_232(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x3A820E495A7BA3E5(func_201(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0x3A820E495A7BA3E5(func_201(iParam1, -2, 1, 0, 0));
		}
		unk_0xD06AC7C87A34A6AD(func_199(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_198(iParam1) };
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
						Var2 = { func_197(&Var2) };
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
		func_193(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_193(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_196() || !unk_0xA14BB9332558B949()) || !func_24(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_194(iParam2);
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

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_195(iVar0);
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

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_196()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_197(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_230(iParam0) && !bParam4)
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
	if (((func_230(unk_0xD803B885F5E47A62()) || (func_229() && func_228())) && !unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_227();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != -1)
				{
					if (func_14(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_232(iParam1, iParam0, 0);
							}
							else
							{
								return func_214(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_214(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_232(iParam1, iParam0, 0);
				}
				else
				{
					return func_202(0, -1, 0);
				}
			}
			else
			{
				return func_202(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_232(iParam1, iParam0, 0);
		}
		else
		{
			return func_214(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_214(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_202(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_213() || (func_212() && func_210())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_209(iParam2, iVar0);
		}
		else
		{
			return func_209(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_208(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_194990, 1))
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

int func_205(int iParam0, bool bParam1)
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

int func_206(int iParam0, int iParam1, int iParam2)
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
			if (!func_208(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1, int iParam2)
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

int func_209(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
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

bool func_210()
{
	if (func_211())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_211()
{
	return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_212()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 0) || Global_1653478) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_213()
{
	if (func_211() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_223())
			{
				iVar3 = func_219(iParam0);
				if (!iVar3 == -1)
				{
					return func_217(iVar3);
				}
			}
			if ((func_216(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_208(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_219(iParam0);
	if (!iVar4 == -1)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
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

var func_218(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_221(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_121();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_121();
}

int func_222(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_121())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	if (((func_226() || func_225()) || func_30()) || func_224())
	{
		return 1;
	}
	return 0;
}

var func_224()
{
	return Global_2450632.f_19;
}

var func_225()
{
	return Global_2450632.f_16;
}

var func_226()
{
	return Global_2450632.f_15;
}

var func_227()
{
	return Global_2359302.f_2;
}

bool func_228()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_229()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

int func_230(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_231())
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

bool func_231()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_232(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969031.f_14[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == -1)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
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
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_233(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_208(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_215(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_233(int iParam0)
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

int func_234(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_235()
{
	if ((Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 > 0 && Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 < 3) || (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 0 && func_71(unk_0xD803B885F5E47A62(), 6)))
	{
		if (func_139(unk_0xD803B885F5E47A62(), 1, 0) || func_112())
		{
			if ((!func_236(unk_0xD803B885F5E47A62(), 5) && !func_236(unk_0xD803B885F5E47A62(), 32)) && !func_236(unk_0xD803B885F5E47A62(), 148))
			{
				return 1;
			}
			else if (!iLocal_99)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_1661977))
				{
					unk_0x142CC44DB769B57E(&Global_1661977);
				}
				iLocal_99 = 1;
			}
		}
		else if (iLocal_99)
		{
			func_243();
			iLocal_99 = 0;
		}
		if (Local_320.f_26 == 3)
		{
			if (Local_327[unk_0x57270EE11514DC67() /*4*/].f_3 == 0 && func_71(unk_0xD803B885F5E47A62(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_237(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0 /*876*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
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

void func_238()
{
	if (unk_0xE4EDC4B0E92C078B(Global_1661977))
	{
		if (func_118() || func_239())
		{
			unk_0x9D7CDDB4B55142AF(Global_1661977, 0);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(Global_1661977, 4);
		}
		if (!iLocal_88)
		{
			if (func_259(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x6ABCCE651368DB93(Global_1661977, 1);
				iLocal_88 = 1;
			}
		}
		else if (!func_259(unk_0xD803B885F5E47A62(), 1, 0))
		{
			unk_0x6ABCCE651368DB93(Global_1661977, 0);
			iLocal_88 = 0;
		}
	}
}

var func_239()
{
	return Global_2416079.f_1812;
}

int func_240()
{
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_320.f_22), 0, 7000) || unk_0x7B5606C651AB51B5(unk_0xB177666FAB6F4417(Local_320.f_22), 1, 40000))
			{
				if (unk_0x83F012E6200426DB(Local_320.f_22))
				{
					if (unk_0x526BC32A660C89E6(Local_320.f_22))
					{
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_320.f_22), -2000f);
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_320.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0xBFF81ED3B99522C7())
				{
					if (func_10(Local_320.f_22))
					{
						unk_0x5DAB50E08C3C504A(unk_0xB177666FAB6F4417(Local_320.f_22), -2000f);
						unk_0xDC544F7DF5E5164D(unk_0xB177666FAB6F4417(Local_320.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_241()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_283 == -1 && unk_0xEAE0D21A50E6C7F4(iLocal_328, 5))
	{
		return 0;
	}
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22)))
				{
					if (func_242(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_283 >= 0)
			{
				if (iLocal_283 != unk_0x57270EE11514DC67())
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_283)))
					{
						iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_283));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
							if (unk_0x82CCEAB29E9451DD(iVar1, unk_0xB177666FAB6F4417(Local_320.f_22)))
							{
								if (func_242(iVar1, unk_0xB177666FAB6F4417(Local_320.f_22), -1))
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

int func_242(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_243()
{
	Global_1661977 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_320.f_22));
	if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0xB177666FAB6F4417(Local_320.f_22))))
	{
		unk_0xBC8E0A7390523199(Global_1661977, 348);
	}
	else
	{
		unk_0xBC8E0A7390523199(Global_1661977, 225);
	}
	unk_0x61755AC17D8F538E(Global_1661977, 2);
	unk_0xDC5B2F9D0CCE3A10(Global_1661977, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		unk_0x9D7CDDB4B55142AF(Global_1661977, 0);
	}
}

int func_244(int iParam0, int iParam1)
{
	if (func_166(iParam0, 1215605247, &uLocal_308, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, bool bParam2)
{
	if (func_250())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_249(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_249(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
				func_248(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
			func_248(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_247()) && !func_246(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

int func_246(int iParam0)
{
	if (func_139(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_247()
{
	return Global_2450632.f_740;
}

void func_248(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_250())
		{
			if (func_14(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, false);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, false);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_14(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, true);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(0);
		}
	}
}

void func_249(var uParam0, bool bParam1, bool bParam2)
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

bool func_250()
{
	return Global_1312418;
}

void func_251(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 28))
		{
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_4591), 28);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 28))
	{
		unk_0x0674E58A79778E99(&(Global_2537071.f_4591), 28);
	}
}

int func_252()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_253(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_253(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_139(unk_0xD803B885F5E47A62(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_257(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (func_110())
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
	if (func_256())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (func_524())
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
	if (func_254(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_254(int iParam0)
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

bool func_255()
{
	return Global_2450632.f_591;
}

bool func_256()
{
	return Global_2450632.f_744;
}

int func_257(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

void func_258(int iParam0, bool bParam1)
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

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
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

int func_260()
{
	vector3 vVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!func_241())
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_320.f_22), 1) };
				if (func_261(vVar0, 1215605247, 18))
				{
					if (func_244(unk_0xB177666FAB6F4417(Local_320.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_261(vector3 vParam0, int iParam1, int iParam2)
{
	if (unk_0x0EB28750412C3A5A(vParam0, func_169(iParam1), 1) <= IntToFloat(iParam2))
	{
		return 1;
	}
	return 0;
}

void func_262()
{
	if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
	{
		if (func_4(Local_320.f_22))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22), 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 2))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 2);
					}
				}
				else if (func_263(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22), 1) < 180f)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 2))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 2);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2, 2))
				{
					unk_0x0674E58A79778E99(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_263(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, iParam2);
}

void func_264()
{
	int iVar0;
	
	if (iLocal_74)
	{
		func_369();
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 1))
		{
			if (Global_2537071.f_1683 > 0)
			{
				if (Global_2537071.f_1686 == 0)
				{
					Global_2537071.f_1686 = unk_0x2B6E0A53779D29EA();
				}
				else if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2537071.f_1686) > Global_262145.f_11469)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_252())
							{
								if (!func_368())
								{
									if (!func_367(0) && !func_124())
									{
										Global_21910 = 0;
										iVar0 = func_80(1199, -1, 0);
										if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0))
										{
											if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2537071.f_1686) > 20000)
											{
												if (func_366(18, "CELL_CLTEST6", 2, "NULL", Global_2537071.f_1683, "TestSender1", 4, 0, 1, 0, 0, bLocal_95, 0, 0, 0, 0, 0))
												{
													unk_0x5D96D8530B3D0904(&iVar0, 0);
													func_146(1199, iVar0, -1, 1, 0);
													unk_0x5D96D8530B3D0904(&iLocal_328, 1);
													func_364(0f, 0f, 0f, func_365(19), "");
													Global_2537071.f_1685 = 1;
													iLocal_74 = 0;
												}
											}
										}
										else if (func_366(18, "CELL_CLTEST1", 2, "NULL", Global_2537071.f_1683, "TestSender1", 4, 0, 1, 0, 0, bLocal_95, 0, 0, 0, 0, 0))
										{
											func_364(0f, 0f, 0f, func_365(19), "");
											unk_0x5D96D8530B3D0904(&iLocal_328, 1);
											Global_2537071.f_1685 = 1;
											iLocal_74 = 0;
										}
									}
								}
								else
								{
									Global_2537071.f_1686 = unk_0x2B6E0A53779D29EA();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 5))
		{
			if (func_252())
			{
				if (bLocal_95)
				{
					func_165("IMPEX_HELP_LNCH", -1);
				}
				unk_0x5D96D8530B3D0904(&iLocal_305, 5);
				func_506(&uLocal_291, 0, 0);
			}
		}
	}
	if (iLocal_97)
	{
		if (func_514())
		{
			if (!func_507(&uLocal_105))
			{
				func_506(&uLocal_105, 0, 0);
			}
			else if (func_505(&uLocal_105, 10000, 0))
			{
				if (func_265(18, "CELL_IMPT", 0, 0))
				{
					iLocal_97 = 0;
					func_46(&uLocal_105);
				}
			}
		}
	}
}

bool func_265(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_266(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_266(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	
	uVar0 = 16;
	iVar1 = 2;
	if (bParam7)
	{
		iVar1 = 5;
	}
	return func_267(&uVar0, iParam0, func_363(), sParam1, iVar1, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_267(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_362(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_361(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_357(iParam6))
	{
		return 0;
	}
	if (func_354(iVar0, iVar1, iVar2))
	{
		if (func_353())
		{
			return 0;
		}
		func_352();
		return func_274(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_273(iParam4))
	{
		return 0;
	}
	func_268(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_268(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = iParam6;
	func_269(iParam4);
	func_352();
	Global_1370527.f_40.f_13 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 7000);
}

void func_269(int iParam0)
{
	if (func_272(iParam0))
	{
		func_271();
		return;
	}
	func_270();
}

void func_270()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_271()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_272(int iParam0)
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

bool func_273(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_274(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_351();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_348(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_345(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_348(uParam0, sParam3, sParam4);
		}
		return func_328(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_327(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_316(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_315(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_275(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_275(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_314();
	bVar0 = true;
	if (func_277(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_276(120000);
		return 1;
	}
	return 0;
}

void func_276(int iParam0)
{
	Global_1370527.f_40.f_11 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_277(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_308(iVar0);
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
	sVar4 = func_307(sParam5, bParam6, &iVar3);
	uVar5 = func_305(iParam7, &iVar3);
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
		bVar12 = func_304(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_281(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_280();
	}
	func_314();
	func_279();
	func_278();
	return 1;
}

void func_278()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_279()
{
	Global_1370527.f_40 = 3;
}

void func_280()
{
	unk_0x5D96D8530B3D0904(&Global_7356, 8);
}

int func_281(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_282(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_282(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_297();
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
	if (func_296() == 0)
	{
		func_294();
		return 0;
	}
	func_293(Global_4269749);
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
	func_297();
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
				func_292(0);
				break;
			
			case 1:
				func_292(1);
				break;
			
			case 2:
				func_292(2);
				break;
			
			case 3:
				func_292(3);
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
		func_297();
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
			if (!func_291())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_290(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_286(1);
			func_290(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_283(uParam0, sParam1);
	return 1;
}

void func_283(var uParam0, char* sParam1)
{
	if (!func_284())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_284()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_121())
	{
		return 0;
	}
	if (func_285(unk_0xD803B885F5E47A62()))
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

bool func_285(int iParam0)
{
	return func_133(iParam0, 20);
}

void func_286(int iParam0)
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
		if (func_289(14))
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
								func_288(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_19467, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_7363[iVar1 /*15*/].f_10);
								unk_0x3CAEA85DA607305E(0);
								func_288(&(Global_7363[iVar1 /*15*/]));
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
								func_288(&(Global_7363[iVar1 /*15*/]));
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
								func_288(&(Global_7363[iVar1 /*15*/]));
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
								func_288(&(Global_7363[iVar1 /*15*/]));
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
								func_288(&(Global_7363[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_287(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_287(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_288(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_288(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_288(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_288(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_288(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_288(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_289(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_290(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_291()
{
	return Global_1312877;
}

void func_292(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111638.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_293(int iParam0)
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

void func_294()
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
		if (!func_295(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749 /*104*/].f_24 = 1;
}

int func_295(struct<6> Param0, struct<6> Param1)
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

int func_296()
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
			if (!func_295(Global_4268500[iVar2 /*104*/].f_18, Global_4268500[Global_4269749 /*104*/].f_18))
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

void func_297()
{
	if (func_289(14))
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
		Global_19486 = func_298();
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

var func_298()
{
	func_299();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_299()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_302(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_301(unk_0x16F2683693E537C9());
			if (func_300(iVar0) && (!func_289(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_300(Global_111638.f_2358.f_539.f_4321))
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

bool func_300(int iParam0)
{
	return iParam0 < 3;
}

int func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_302(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_302(int iParam0)
{
	if (func_300(iParam0))
	{
		return func_303(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_303(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_304(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_282(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_305(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_306(2, iParam1);
	return iParam0;
}

void func_306(int iParam0, var uParam1)
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

char* func_307(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_306(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = func_311(iParam0);
	if (iVar0 == -1)
	{
		func_309(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_309(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_311(iParam0) != -1)
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
	if (func_310(iParam0))
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

int func_310(int iParam0)
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

int func_311(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_312(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_312(int iParam0)
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
	func_313(&(Global_1389078[iVar2 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_313(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_314()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_315(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_314();
	bVar0 = false;
	return func_277(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_316(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_317(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_317(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_308(iVar0);
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
	sVar4 = func_307(sParam5, bParam6, &iVar3);
	uVar5 = func_305(iParam7, &iVar3);
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
		bVar12 = func_366(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_319(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0))
	{
		func_280();
	}
	func_318();
	func_279();
	func_278();
	return 1;
}

void func_318()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_319(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_321(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_320(iParam0) };
			Global_8043 = iParam0;
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_320(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_321(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_297();
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
	if (func_326() == 0)
	{
		func_324();
		return 0;
	}
	func_323(Global_21872);
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
		func_292(0);
		func_292(2);
		func_292(1);
	}
	else
	{
		func_297();
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
					func_292(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_292(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_292(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_292(3);
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
		func_297();
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
			if (!func_291())
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_290(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_286(1);
			func_290(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_322(uParam0, sParam1);
	return 1;
}

void func_322(var uParam0, char* sParam1)
{
	if (!func_284())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

void func_323(int iParam0)
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

void func_324()
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
		if (!func_325(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_325(struct<6> Param0, struct<6> Param1)
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

int func_326()
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
			if (!func_325(Global_111638.f_14136[iVar2 /*104*/].f_18, Global_111638.f_14136[Global_21872 /*104*/].f_18))
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

int func_327(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	func_318();
	bVar0 = true;
	if (func_317(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_276(120000);
		return 1;
	}
	return 0;
}

int func_328(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
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
		bVar0 = func_344(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_334(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 3))
		{
			func_333(1);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 5))
		{
			func_332(1);
		}
		func_331();
		func_279();
		func_330();
		func_329();
		return 1;
	}
	return 0;
}

void func_329()
{
	Global_2546572 = 0;
}

void func_330()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_331()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_332(int iParam0)
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

void func_333(int iParam0)
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

int func_334(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_343(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_335(sParam3, iParam4, bParam7);
}

int func_335(char* sParam0, int iParam1, bool bParam2)
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
					func_342();
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
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_341();
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
				func_297();
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
				if (func_340())
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
			if (func_339())
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
			func_338();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_337();
		func_336();
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
		func_342();
	}
	return 0;
}

void func_336()
{
	if (!func_284())
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

void func_337()
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

void func_338()
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

int func_339()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_340()
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

void func_341()
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

void func_342()
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

void func_343(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_344(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_343(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_335(sParam3, iParam4, bParam7);
}

int func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0;
	}
	if (func_347(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_346();
		func_331();
		func_279();
		func_330();
		func_329();
		return 1;
	}
	return 0;
}

void func_346()
{
	Global_21823 = 0;
}

bool func_347(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_343(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_335(sParam3, iParam4, bParam8);
}

int func_348(var uParam0, char* sParam1, char* sParam2)
{
	if (func_350(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_349();
		func_279();
		func_330();
		return 1;
	}
	return 0;
}

void func_349()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_350(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_343(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_335(sParam2, iParam3, 0);
}

void func_351()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_352()
{
	Global_1370527.f_40 = 1;
}

bool func_353()
{
	return Global_1370527.f_40 == 1;
}

int func_354(int iParam0, int iParam1, int iParam2)
{
	if (!func_355(iParam0))
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

int func_355(int iParam0)
{
	if (!func_356())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_356()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_357(int iParam0)
{
	if (func_360())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_367(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_359())
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 6))
	{
		if (func_358())
		{
			return 0;
		}
	}
	return 1;
}

bool func_358()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_1387714);
}

int func_359()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return func_339();
}

int func_361(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_354(iParam0, iParam1, iParam2);
}

int func_362(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

char* func_363()
{
	return "TXTMSG";
}

int func_364(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x7F8A39872A07D2CE(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xEA6BC48857E0AC4C(&(Global_2537071.f_3968[iVar0 /*26*/].f_4)))
				{
					Global_2537071.f_3968[iVar0 /*26*/] = 1;
					Global_2537071.f_3968[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2537071.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2537071.f_3968[iVar0 /*26*/] = 1;
				Global_2537071.f_3968[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_365(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_366(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_321(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_320(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_7356, 1);
			unk_0x5D96D8530B3D0904(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_367(int iParam0)
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

bool func_368()
{
	return func_356();
}

void func_369()
{
	if (func_70())
	{
		if (!iLocal_310 == Local_320.f_32)
		{
			Global_2537071.f_1643 = { Local_319 };
			func_370();
			iLocal_310 = Local_320.f_32;
		}
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2537071.f_1662[iVar1 /*4*/]), "", 16);
		if (!Global_2537071.f_1643[iVar1] == -1 && Global_2537071.f_1643.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2537071.f_1662[iVar0 /*4*/]), func_371(Global_2537071.f_1643[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2537071.f_1683 = iVar0;
}

char* func_371(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_372(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_372(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_372(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_372(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_372(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_372(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_372(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_372(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_372(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_372(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_372(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_372(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_372(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_372(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_372(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_372(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_372(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_372(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_372(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_372(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_372(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_373()
{
	int iVar0;
	
	if (!iLocal_89)
	{
		if (!func_378(unk_0xD803B885F5E47A62(), 1))
		{
			if (!func_122(unk_0xD803B885F5E47A62(), 0))
			{
				if (!Local_320.f_28 == -1)
				{
					if (!iLocal_312 == func_34(Local_320.f_28))
					{
						if (!func_377(unk_0x16F2683693E537C9()))
						{
							if (!func_376(unk_0xD803B885F5E47A62()))
							{
								iLocal_312 = func_34(Local_320.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_318)
								{
									unk_0x912240369F496C2F(iLocal_318[iVar0], iLocal_312);
									iVar0++;
								}
								iLocal_89 = 1;
								unk_0x523BCC9DC80CD82F(iLocal_312);
								func_375();
								func_374(iLocal_312);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_378(unk_0xD803B885F5E47A62(), 1) || (Local_320.f_28 > -1 && !iLocal_312 == func_34(Local_320.f_28))) || func_377(unk_0x16F2683693E537C9())) || func_122(unk_0xD803B885F5E47A62(), 0)) || func_376(unk_0xD803B885F5E47A62()))
	{
		unk_0x71199B01895C6202(iLocal_312);
		iVar0 = 0;
		while (iVar0 < iLocal_318)
		{
			unk_0x5B75DC33FA4C5798(iLocal_318[iVar0]);
			iVar0++;
		}
		func_375();
		iLocal_312 = 0;
		iLocal_89 = 0;
	}
}

void func_374(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
	{
		if (iParam0 == Local_320.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_275[0] = unk_0x5BB0132D6ED407B7(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[1] = unk_0x5BB0132D6ED407B7(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[2] = unk_0x5BB0132D6ED407B7(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[3] = unk_0x5BB0132D6ED407B7(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[4] = unk_0x5BB0132D6ED407B7(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[5] = unk_0x5BB0132D6ED407B7(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[6] = unk_0x5BB0132D6ED407B7(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[7] = unk_0x5BB0132D6ED407B7(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[8] = unk_0x5BB0132D6ED407B7(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[9] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_276 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_275[0] = unk_0x5BB0132D6ED407B7(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[1] = unk_0x5BB0132D6ED407B7(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[2] = unk_0x5BB0132D6ED407B7(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[3] = unk_0x5BB0132D6ED407B7(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[4] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[5] = unk_0x5BB0132D6ED407B7(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[6] = unk_0x5BB0132D6ED407B7(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[7] = unk_0x5BB0132D6ED407B7(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[8] = unk_0x5BB0132D6ED407B7(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[9] = unk_0x5BB0132D6ED407B7(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_276 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_275[0] = unk_0x5BB0132D6ED407B7(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[1] = unk_0x5BB0132D6ED407B7(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[2] = unk_0x5BB0132D6ED407B7(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[3] = unk_0x5BB0132D6ED407B7(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[4] = unk_0x5BB0132D6ED407B7(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[5] = unk_0x5BB0132D6ED407B7(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[6] = unk_0x5BB0132D6ED407B7(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[7] = unk_0x5BB0132D6ED407B7(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[8] = unk_0x5BB0132D6ED407B7(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[9] = unk_0x5BB0132D6ED407B7(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_276 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_275[0] = unk_0x5BB0132D6ED407B7(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[1] = unk_0x5BB0132D6ED407B7(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[2] = unk_0x5BB0132D6ED407B7(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[3] = unk_0x5BB0132D6ED407B7(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[4] = unk_0x5BB0132D6ED407B7(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[5] = unk_0x5BB0132D6ED407B7(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[6] = unk_0x5BB0132D6ED407B7(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[7] = unk_0x5BB0132D6ED407B7(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[8] = unk_0x5BB0132D6ED407B7(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_275[9] = unk_0x5BB0132D6ED407B7(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_276 = 1;
			break;
	}
}

void func_375()
{
	int iVar0;
	
	if (iLocal_276)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x82F37C78CC14B4AB(iLocal_275[iVar0]))
		{
			unk_0x90B060395E2869BD(iLocal_275[iVar0]);
		}
		iLocal_275[iVar0] = 0;
		iVar0++;
	}
	iLocal_276 = 0;
}

int func_376(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_120(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

bool func_377(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
	}
	return unk_0x4D570FEF9D230CE7(iParam0) == Global_150304;
}

bool func_378(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_379(iParam0) != 0;
	}
	return func_139(iParam0, bParam1, 0);
}

int func_379(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2425662[iParam0 /*421*/].f_1;
	}
	return 0;
}

void func_380()
{
	var uVar0;
	
	if (!func_507(&uLocal_297))
	{
		func_506(&uLocal_297, 0, 0);
	}
	else if (func_505(&uLocal_297, 250, 0))
	{
		func_46(&uLocal_297);
		if (func_393(1, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 5) && !func_392())
			{
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if ((func_391() || func_392()) || func_388())
				{
					if (!func_387(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
					{
						if (!func_386(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) && !func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
						{
							if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
							{
								if (func_382(&uVar0))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 2))
									{
										if (func_252() && timera() > 500)
										{
											func_165("IMPEX_FSPRAY_FM", -1);
											unk_0x5D96D8530B3D0904(&iLocal_305, 2);
										}
									}
									else
									{
										settimera(0);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 8))
								{
									if (func_252() && timera() > 500)
									{
										func_165("IMPEX_CASH_FM", -1);
										unk_0x5D96D8530B3D0904(&iLocal_305, 8);
									}
								}
								else
								{
									settimera(0);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 11))
							{
								if (func_252() && timera() > 500)
								{
									func_165("IMPEX_WANTED_FM", -1);
									unk_0x5D96D8530B3D0904(&iLocal_305, 11);
								}
							}
							else
							{
								settimera(0);
							}
						}
						else if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							if (!func_381())
							{
								if (!func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 3))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 7);
										if (func_252() && timera() > 2000)
										{
											if (Global_2537071.f_4518 == 0)
											{
												if (!func_244(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
												{
													func_165("IMPEX_DELIVER_FM", -1);
													unk_0x5D96D8530B3D0904(&iLocal_305, 3);
												}
											}
										}
									}
									else
									{
										settimera(0);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 7))
								{
									if (func_252() && timera() > 2000)
									{
										func_165("IMPEX_RIG_FM", -1);
										unk_0x5D96D8530B3D0904(&iLocal_305, 7);
									}
								}
								else
								{
									settimera(0);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 6))
							{
								if (func_252() && timera() > 2000)
								{
									func_165("IMPEX_WANTED_P", -1);
									unk_0x5D96D8530B3D0904(&iLocal_305, 6);
								}
							}
							else
							{
								settimera(0);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 4))
						{
							if (func_252() && timera() > 5000)
							{
								func_165("IMPEX_WANTED_FM", -1);
								unk_0x5D96D8530B3D0904(&iLocal_305, 4);
							}
						}
						else
						{
							settimera(0);
						}
					}
				}
				else
				{
					if (func_234("IMPEX_FSPRAY_FM"))
					{
						unk_0xA37A90C62806D848(1);
					}
					unk_0x0674E58A79778E99(&iLocal_305, 2);
					unk_0x0674E58A79778E99(&iLocal_305, 3);
					unk_0x0674E58A79778E99(&iLocal_305, 4);
					unk_0x0674E58A79778E99(&iLocal_305, 6);
					unk_0x0674E58A79778E99(&iLocal_305, 7);
					unk_0x0674E58A79778E99(&iLocal_305, 8);
					unk_0x0674E58A79778E99(&iLocal_305, 11);
					settimera(0);
				}
			}
			else
			{
				if (func_234("IMPEX_FSPRAY_FM"))
				{
					unk_0xA37A90C62806D848(1);
				}
				unk_0x0674E58A79778E99(&iLocal_305, 2);
				unk_0x0674E58A79778E99(&iLocal_305, 3);
				unk_0x0674E58A79778E99(&iLocal_305, 4);
				unk_0x0674E58A79778E99(&iLocal_305, 6);
				unk_0x0674E58A79778E99(&iLocal_305, 7);
				unk_0x0674E58A79778E99(&iLocal_305, 8);
				unk_0x0674E58A79778E99(&iLocal_305, 11);
				if (timera() > 0)
				{
					settimera(0);
				}
			}
		}
		else if (func_234("IMPEX_FSPRAY_FM"))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

int func_381()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0xBBA8A868118C90ED(iVar3, iVar1, 0))
		{
			if (unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iVar3, iVar1, 0)))
			{
				if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iVar3, iVar1, 0), 0))
				{
					iVar0 = unk_0xA30B8362589C124A(iVar3, iVar1, 0);
					if (!unk_0x34BFC6F0CB887BC2(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_382(var uParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xC844350D5D58C99A(iVar0) && unk_0xAFE0D3608EDA7039(iVar0))
		{
			*uParam0 = func_383(iVar0);
			if (!unk_0x7A7BDE279347E517((400 + *uParam0), 0, 0, 1, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0xA471721ED5268046(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x6EE94F60DA2A2273(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0xD96C5EC6FCB061BA(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (to_float(unk_0x7F6DC62EA9922664(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0xAFB99709A487B3A4(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0x0B3E621E4A1D12D7(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0xB8BCFE7E6CA4F9ED(iParam0))
	{
		iVar10 += 20;
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0xD6CC9546EDEF00CE(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0;
		if (unk_0x1150BCE24B1630AC(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0x1150BCE24B1630AC(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0xE347785EEDFB544D(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0x25D57666028A7E5A(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0x464B3D84B739AE72(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0xA081CDBBF4F02A19(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_385(unk_0x134B62B726CEC8E6(iParam0), 0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11551));
		if (iVar0 > floor((4f * Global_262145.f_11551)))
		{
			iVar4 = Global_262145.f_11549;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11550)
		{
			iVar0 = Global_262145.f_11550;
		}
	}
	else if (func_384(iParam0))
	{
		iVar0 = floor((to_float(iVar0) * Global_262145.f_11554));
		if (iVar0 > floor((4f * Global_262145.f_11554)))
		{
			iVar4 = Global_262145.f_11552;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11553)
		{
			iVar0 = Global_262145.f_11553;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_384(int iParam0)
{
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_385(int iParam0, int iParam1)
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

bool func_386(int iParam0)
{
	return unk_0x30F813723591D02E(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_387(int iParam0)
{
	if (unk_0x30F813723591D02E(iParam0, "Veh_Modded_By_Player") && unk_0x1E2DFB0EF4BB4566(iParam0, "Veh_Modded_By_Player") != unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_388()
{
	int iVar0;
	
	if (func_516())
	{
		return 0;
	}
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (!func_390(iVar0, 1))
		{
			if (func_389(unk_0x134B62B726CEC8E6(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_320.f_35[iVar1] == iVar0)
			{
				if (!func_505(&(Local_320.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_390(int iParam0, bool bParam1)
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

int func_391()
{
	int iVar0;
	
	if (func_516())
	{
		return 0;
	}
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (!Global_1652631)
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (!func_390(iVar0, 1))
			{
				if (!unk_0x92C2290AA46758D3(iVar0, 0))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 1))
					{
						if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_28 <= 0)
						{
							if (!unk_0x30F813723591D02E(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1652630)
								{
									if (bLocal_277)
									{
										bLocal_277 = false;
									}
									if (func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar0)))
									{
										Global_2537071.f_1687 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_277)
					{
						bLocal_277 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_392()
{
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_320.f_23, 0))
		{
			if (unk_0xE5DBF9B6126856CA(Local_320.f_22))
			{
				if (func_4(Local_320.f_22))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_320.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_393(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_139(unk_0xD803B885F5E47A62(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0xD803B885F5E47A62(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 1))
	{
		bVar0 = false;
	}
	if (func_122(unk_0xD803B885F5E47A62(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_394()
{
	int iVar0;
	
	switch (iLocal_102)
	{
		case 0:
			if (!func_139(unk_0xD803B885F5E47A62(), 1, 0))
			{
				if (!func_507(&uLocal_103) || func_505(&uLocal_103, 2000, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_397(&uLocal_107, 4, iLocal_101, "MECHANIC_IMP", 0, 1);
							iLocal_330 = 0;
							iLocal_102++;
						}
					}
					func_46(&uLocal_103);
					func_506(&uLocal_103, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!func_139(unk_0xD803B885F5E47A62(), 1, 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_86)
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_330)
									{
										iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
										if (func_383(iVar0) > 500)
										{
											sLocal_331 = "FM_IEPOOR";
										}
										else
										{
											sLocal_331 = "FM_IEGOOD";
										}
										iLocal_330 = 1;
									}
									else if (func_396(&uLocal_107, "FM_1AU", sLocal_331, 12, 0, 0, 0))
									{
										iLocal_272 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
										iLocal_102++;
										iLocal_330 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_395();
						iLocal_102 = 0;
					}
				}
				else
				{
					func_395();
					iLocal_102 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!func_139(unk_0xD803B885F5E47A62(), 1, 0))
				{
					if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_86)
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) != iLocal_272)
								{
									iLocal_102 = 1;
								}
							}
						}
					}
					else
					{
						func_395();
						iLocal_102 = 0;
					}
				}
				else
				{
					func_395();
					iLocal_102 = 0;
				}
			}
			break;
	}
}

void func_395()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_101))
	{
		unk_0x71199B01895C6202(joaat("s_m_y_xmech_02"));
		iVar0 = iLocal_101;
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

bool func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_343(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_335(sParam2, iParam3, 0);
}

void func_397(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	vector3 vVar9;
	int iVar10;
	
	if (func_393(1, 1))
	{
		switch (Local_327[unk_0x57270EE11514DC67() /*4*/].f_1)
		{
			case 0:
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					bVar7 = func_388();
					if ((func_391() || func_392()) || bVar7)
					{
						if (!func_381())
						{
							if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
							{
								if (!func_494())
								{
									if (bLocal_85)
									{
										bLocal_85 = false;
									}
									iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									if (unk_0xF1D385D359D58F72("AllowModSprayRepair", 2))
									{
										if (!unk_0x30F813723591D02E(iVar3, "AllowModSprayRepair") || (unk_0x30F813723591D02E(iVar3, "AllowModSprayRepair") && unk_0xB2C7CF65CF9B897C(iVar3, "AllowModSprayRepair") == 0))
										{
											unk_0xA1093ABB024EC9BD(iVar3, "AllowModSprayRepair", 1);
										}
									}
									if (!iLocal_91)
									{
										if (func_493(iVar3))
										{
											unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
											unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
										}
									}
									iLocal_332 = iVar3;
									if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 15))
									{
										unk_0x0674E58A79778E99(&iLocal_328, 15);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 9))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 9);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 12))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 12);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 10))
									{
										unk_0x0674E58A79778E99(&iLocal_305, 10);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 12))
									{
										if (bVar7)
										{
											unk_0x5D96D8530B3D0904(&iLocal_328, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0x0674E58A79778E99(&iLocal_328, 12);
									}
									if (func_386(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_78 = true;
											if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
											{
												if (bLocal_84)
												{
													bLocal_84 = false;
												}
												if (unk_0xA30B8362589C124A(iVar3, -1, 0) == unk_0x16F2683693E537C9())
												{
													bLocal_81 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_81)
												{
													bLocal_81 = false;
												}
												bLocal_84 = true;
											}
											bLocal_79 = false;
											bLocal_80 = false;
											bLocal_82 = false;
											bLocal_83 = false;
											bLocal_85 = false;
											bLocal_86 = true;
											if (func_492(1215605247, 18))
											{
												bLocal_76 = true;
											}
											iLocal_314 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
											if (!unk_0x20906E1D6BDC7044(iLocal_314))
											{
												if (func_244(iLocal_314, 0))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 17))
													{
														unk_0x5D96D8530B3D0904(&iLocal_328, 17);
													}
													else if (func_244(iLocal_314, 1))
													{
														vVar9 = { unk_0x56E9E0FD5ACCD35D(iLocal_314) };
														if (unk_0x9C66D99E63E8E24C(iLocal_314) < 0.5f || unk_0x755FF954DAE327E1(vVar9.y) < 1.3f)
														{
															func_491();
															func_482(unk_0xD803B885F5E47A62(), 0, 16388, 0);
															if (func_392())
															{
																unk_0x5D96D8530B3D0904(&iLocal_328, 4);
																unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 1);
															}
															if (func_391() || func_388())
															{
																unk_0x5D96D8530B3D0904(&iLocal_328, 6);
															}
															if (func_481())
															{
																bLocal_75 = true;
															}
															else
															{
																bLocal_75 = false;
															}
															unk_0x71EDC33E5A423750(iLocal_314, 2);
															if (unk_0xAFE0D3608EDA7039(iLocal_314))
															{
																unk_0xAA6B3A4292417750(iLocal_314, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_327[unk_0x57270EE11514DC67() /*4*/] = func_75(unk_0x134B62B726CEC8E6(iLocal_314));
															Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_313[iVar4] = func_121();
																if (!unk_0xBBA8A868118C90ED(iLocal_314, iVar1, 0))
																{
																	if (unk_0xC844350D5D58C99A(unk_0xA30B8362589C124A(iLocal_314, iVar1, 0)))
																	{
																		if (!unk_0x437347B10A200C4B(unk_0xA30B8362589C124A(iLocal_314, iVar1, 0), 0))
																		{
																			iVar0 = unk_0xA30B8362589C124A(iLocal_314, iVar1, 0);
																			if (unk_0x34BFC6F0CB887BC2(iVar0))
																			{
																				if (func_14(unk_0x83FACCC48B68F9D1(iVar0), 0, 0))
																				{
																					if (unk_0xFB75B0F82CA525F6(unk_0x83FACCC48B68F9D1(iVar0)))
																					{
																						iLocal_313[iVar4] = unk_0x83FACCC48B68F9D1(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_284 = func_480(unk_0x134B62B726CEC8E6(iLocal_314));
															iLocal_285 = func_383(iLocal_314);
															fLocal_286 = to_float((iLocal_284 - iLocal_285));
															fLocal_286 = (fLocal_286 * Global_262145.f_2412);
															if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 4))
															{
																fLocal_286 = (fLocal_286 * 1.3f);
															}
															fLocal_286 = (fLocal_286 / to_float(iVar5));
															fLocal_287 = 500f;
															func_479();
															func_173(0);
															func_477(1247, 1, -1);
															if (func_234("IMPEX_DELIVER_FM"))
															{
																unk_0xA37A90C62806D848(1);
															}
															unk_0x0674E58A79778E99(&iLocal_328, 12);
															iVar6 = func_80(1199, -1, 0);
															if (!unk_0xEAE0D21A50E6C7F4(iVar6, 1))
															{
																unk_0x5D96D8530B3D0904(&iVar6, 1);
																func_146(1199, iVar6, -1, 1, 0);
															}
															else if (!unk_0xEAE0D21A50E6C7F4(iVar6, 2))
															{
																unk_0x5D96D8530B3D0904(&iVar6, 2);
																func_146(1199, iVar6, -1, 1, 0);
															}
															func_476();
															iLocal_288 = 0;
															iLocal_288 = round(fLocal_286);
															iLocal_288 = (iLocal_288 - (iLocal_288 % 25));
															if (iLocal_333 == iVar3)
															{
																iLocal_288 = (iLocal_288 + iLocal_290);
															}
															if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 4))
															{
																if (iLocal_288 > Global_262145.f_164)
																{
																	iLocal_288 = Global_262145.f_164;
																}
															}
															else if (iLocal_288 > Global_262145.f_164)
															{
																iLocal_288 = Global_262145.f_164;
															}
															iLocal_289 = 0;
															fLocal_287 = (fLocal_287 * Global_262145.f_4228);
															iLocal_289 = round(fLocal_287);
															unk_0x0674E58A79778E99(&iLocal_328, 17);
															iLocal_315 = iLocal_314;
															iLocal_317 = unk_0x134B62B726CEC8E6(iLocal_314);
															if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 4))
															{
																unk_0x816B51B6D3C89626(19, iLocal_289, iLocal_288, iLocal_314);
															}
															else
															{
																unk_0x816B51B6D3C89626(120, iLocal_289, iLocal_288, iLocal_314);
															}
															func_475(19, 1);
															func_474();
															func_510();
														}
														else if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
														{
															func_482(unk_0xD803B885F5E47A62(), 0, 16388, 0);
														}
													}
												}
												else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 17))
												{
													unk_0x0674E58A79778E99(&iLocal_328, 17);
												}
											}
										}
										else
										{
											if (bLocal_78)
											{
												bLocal_78 = false;
											}
											if (bLocal_86)
											{
												bLocal_86 = false;
											}
											if (bLocal_81)
											{
												bLocal_81 = false;
											}
											if (bLocal_84)
											{
												bLocal_84 = false;
											}
											if (bLocal_85)
											{
												bLocal_85 = false;
											}
										}
									}
									else if (!func_15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
									{
										if (func_382(&iVar8))
										{
											if (!func_387(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
											{
												if (unk_0xA30B8362589C124A(iVar3, -1, 0) == unk_0x16F2683693E537C9())
												{
													if (iLocal_333 != iVar3)
													{
														iLocal_333 = iVar3;
														iLocal_290 = 0;
													}
													else if (iLocal_290 != iVar8)
													{
														if (iLocal_290 < iVar8)
														{
															iLocal_290 = iVar8;
														}
													}
												}
												if (!bLocal_79)
												{
													bLocal_79 = true;
												}
												if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
												{
													if (func_77())
													{
														if (bLocal_80)
														{
															bLocal_80 = false;
														}
														if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) == unk_0x16F2683693E537C9())
														{
															if (func_383(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > 0)
															{
																if (!bLocal_83)
																{
																	bLocal_83 = true;
																}
															}
															else
															{
																if (bLocal_83)
																{
																	bLocal_83 = false;
																}
																if (!bLocal_82)
																{
																	bLocal_82 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_82)
													{
														bLocal_82 = false;
													}
													if (bLocal_83)
													{
														bLocal_83 = false;
													}
													if (!bLocal_80)
													{
														if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) == unk_0x16F2683693E537C9())
														{
															bLocal_80 = true;
														}
													}
												}
											}
											else
											{
												func_473();
											}
										}
										else
										{
											func_473();
										}
									}
									else
									{
										func_473();
										if (bLocal_86)
										{
											bLocal_86 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								if (iLocal_332 != iVar3)
								{
									if (!iLocal_91)
									{
										if (func_493(iVar3))
										{
											unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
											unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
										}
									}
									iLocal_332 = iVar3;
								}
								if (!bLocal_85)
								{
									func_473();
									bLocal_85 = true;
								}
							}
						}
					}
					else
					{
						func_473();
						if (bLocal_86)
						{
							bLocal_86 = false;
						}
						if (iLocal_91)
						{
							if (Local_320.f_33)
							{
								if (bLocal_96)
								{
									iLocal_91 = 0;
								}
							}
						}
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if ((func_234("IMPEX_NOT_NEED") || func_234("IMPEX_NO_MORE")) || func_234("IMPEX_NOT_PVEH"))
							{
								unk_0xA37A90C62806D848(1);
							}
						}
						iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (func_390(iVar2, 1))
						{
							if (unk_0xA30B8362589C124A(iVar2, -1, 0) == unk_0x16F2683693E537C9())
							{
								if (unk_0x30F813723591D02E(iVar2, "Player_Vehicle"))
								{
									if (unk_0x1E2DFB0EF4BB4566(iVar2, "Player_Vehicle") != unk_0xE86C2816EDC6CAF0(unk_0xD803B885F5E47A62()) || iVar2 == iLocal_332)
									{
										if (unk_0xDF1306B443CD3D15(iVar2, 0))
										{
											if (func_252())
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 15))
												{
													if (bVar7 || func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar2)))
													{
														func_165("IMPEX_NOT_PVEH", -1);
														unk_0x5D96D8530B3D0904(&iLocal_328, 15);
													}
												}
											}
										}
									}
									else if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 15))
									{
										if (iVar2 != iLocal_332)
										{
											unk_0x0674E58A79778E99(&iLocal_328, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 15))
							{
								if (iVar2 != iLocal_332)
								{
									unk_0x0674E58A79778E99(&iLocal_328, 15);
								}
							}
							if (bLocal_92)
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_492(1215605247, 18))
								{
									iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									if (func_244(iVar2, 0))
									{
										if (!iLocal_90)
										{
											func_173(1);
											iLocal_90 = 1;
										}
										bLocal_76 = true;
									}
								}
								else if (iLocal_90)
								{
									func_173(0);
									iLocal_90 = 0;
									bLocal_76 = false;
								}
							}
						}
						if (func_492(1215605247, 18))
						{
							if (func_252())
							{
								if (func_390(iVar2, 1))
								{
									if (unk_0xDF1306B443CD3D15(iVar2, 0))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 10))
										{
											func_165("IMPEX_NOT_PVEH", -1);
											unk_0x5D96D8530B3D0904(&iLocal_305, 10);
										}
									}
								}
								else if (func_74(&Local_319, unk_0x134B62B726CEC8E6(iVar2)))
								{
									if (unk_0x92C2290AA46758D3(iVar2, 0))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 12))
										{
											func_165("IMPEX_NOT_CREW", -1);
											unk_0x5D96D8530B3D0904(&iLocal_305, 12);
										}
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iLocal_305, 9))
								{
									if (unk_0xA30B8362589C124A(iVar2, -1, 0) == unk_0x16F2683693E537C9())
									{
										func_165("IMPEX_NOT_NEED", -1);
										unk_0x5D96D8530B3D0904(&iLocal_305, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 9))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 9);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 10))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 10);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_305, 12))
							{
								unk_0x0674E58A79778E99(&iLocal_305, 12);
							}
							if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 12))
							{
								if (func_252())
								{
									func_165("IMPEX_NO_MORE", -1);
									unk_0x0674E58A79778E99(&iLocal_328, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_473();
					if (bLocal_86)
					{
						bLocal_86 = false;
					}
					if (iLocal_91)
					{
						iLocal_91 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0xD803B885F5E47A62(), 1, 1))
				{
					if (!func_166(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), 1215605247, &uLocal_308, 0, 500, 1, 0))
					{
						Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&iLocal_328, 4);
					unk_0x0674E58A79778E99(&iLocal_328, 6);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0x0F1CCD77290EE12F())
				{
					func_470(17, 1, -1);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 4))
					{
						unk_0x5D96D8530B3D0904(&(Local_327[unk_0x57270EE11514DC67() /*4*/].f_2), 1);
						func_469();
					}
					else
					{
						func_467();
					}
					if (bLocal_75)
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 6))
						{
							Local_73.f_2 = -1542434389;
						}
						else
						{
							Local_73.f_2 = 2007307173;
						}
						Local_73.f_3 = Local_327[unk_0x57270EE11514DC67() /*4*/];
						Local_73.f_10 = iLocal_313[0];
						Local_73.f_11 = iLocal_313[1];
						Local_73.f_12 = iLocal_313[2];
						Local_73.f_13 = iLocal_313[3];
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 6))
						{
						}
					}
					unk_0x0674E58A79778E99(&iLocal_328, 6);
					func_466(4, iLocal_288);
					func_450(&iLocal_288, 1);
					if (iLocal_288 > 0)
					{
						if (func_449())
						{
							func_438(941287179, iLocal_288, &iVar10, 0, 0, 0);
							Global_4263954[iVar10 /*85*/].f_3 = iLocal_317;
						}
						else
						{
							unk_0x530219CFD5D2CF9D(iLocal_288, iLocal_317);
						}
					}
					if (iLocal_285 > 0)
					{
						func_437("IMPEX_PASS", iLocal_288, 7000, 0);
					}
					else
					{
						func_437("IMPEX_PASS", iLocal_288, 7000, 0);
					}
					func_403(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_289, 1, -1, 0);
					func_402(29);
					func_482(unk_0xD803B885F5E47A62(), 1, 0, 0);
					Local_327[unk_0x57270EE11514DC67() /*4*/].f_1 = 0;
					Local_327[unk_0x57270EE11514DC67() /*4*/] = -1;
					unk_0x0674E58A79778E99(&iLocal_328, 4);
					iLocal_97 = 1;
					func_399(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_378(unk_0xD803B885F5E47A62(), 1))
		{
			if (!bLocal_92)
			{
				if (iLocal_90)
				{
					func_173(0);
					iLocal_90 = 0;
				}
			}
			else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && func_492(1215605247, 18))
			{
				iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (func_244(iVar2, 0))
				{
					if (!iLocal_90)
					{
						func_173(1);
						iLocal_90 = 1;
					}
					bLocal_76 = true;
				}
			}
			else if (iLocal_90)
			{
				func_173(0);
				iLocal_90 = 0;
				bLocal_76 = false;
			}
		}
		if (bLocal_79)
		{
			bLocal_79 = false;
		}
		if (bLocal_80)
		{
			bLocal_80 = false;
		}
		if (bLocal_82)
		{
			bLocal_82 = false;
		}
		if (bLocal_83)
		{
			bLocal_83 = false;
		}
	}
}

void func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_401(iParam1, iParam2))
	{
		iVar0 = func_400();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_400()
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

int func_401(int iParam0, var uParam1)
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

void func_402(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_504() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_403(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_404(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_405(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_405(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_436(unk_0xD803B885F5E47A62()) || func_435(unk_0xD803B885F5E47A62()))
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
	else if (func_433() || func_430(unk_0xD803B885F5E47A62()))
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
	if (func_429(sParam2))
	{
	}
	if (func_428())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_426(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_425(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_423(0, &iVar1);
					break;
				
				case 3:
					func_423(1, &iVar1);
					break;
				
				case 1:
					func_420(&iVar1);
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
			func_477(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_415((func_419(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_477(1165, iVar1, -1);
				}
				func_410(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_406((func_408(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_406((func_408(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_406(int iParam0)
{
	if (func_428())
	{
		Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_5 = iParam0;
		func_407(joaat("mpply_globalxp"), iParam0);
	}
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_408(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_409(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_409(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_409(int iParam0)
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

void func_410(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_198(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_413(func_414(&Var0));
			if (iVar1 == 0)
			{
				func_412(&Global_1387915, iParam0);
				func_411(joaat("mpply_crew_local_xp_0"), Global_1387915);
			}
			else if (iVar1 == 1)
			{
				func_412(&Global_1387916, iParam0);
				func_411(joaat("mpply_crew_local_xp_1"), Global_1387916);
			}
			else if (iVar1 == 2)
			{
				func_412(&Global_1387917, iParam0);
				func_411(joaat("mpply_crew_local_xp_2"), Global_1387917);
			}
			else if (iVar1 == 3)
			{
				func_412(&Global_1387918, iParam0);
				func_411(joaat("mpply_crew_local_xp_3"), Global_1387918);
			}
			else if (iVar1 == 4)
			{
				func_412(&Global_1387919, iParam0);
				func_411(joaat("mpply_crew_local_xp_4"), Global_1387919);
			}
		}
	}
}

void func_411(int iParam0, int iParam1)
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

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_413(int iParam0)
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

int func_414(var uParam0)
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

void func_415(int iParam0, int iParam1, int iParam2)
{
	if (func_428())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_81(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_81(-1)])
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
		if (func_237(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_417(iParam0, 1);
		}
		func_416(639, iParam0, -1, 1);
		func_146(640, func_417(iParam0, 1), -1, 1, 0);
		Global_1388060[func_81(-1)] = iParam0;
		func_399(-1109644434, 7, 0);
	}
}

void func_416(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_418(iParam0, 0);
}

int func_418(int iParam0, int iParam1)
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

int func_419(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_81(-1)];
			}
			else if (func_237(iParam0))
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

void func_420(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_208(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_422(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_421(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_421(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_421(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_422(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_198(iParam0) };
		Global_2513231 = { func_198(iParam1) };
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

void func_423(bool bParam0, int iParam1)
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
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_422(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_424(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_422(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_421(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_421(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_424(int iParam0, int iParam1)
{
	return vdist(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_425(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_421(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_426(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_419(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_419(unk_0xD803B885F5E47A62());
		}
	}
	if (func_427(8000, 0, 0) > 0)
	{
		if (func_427(8000, 0, 0) < (iParam0 + func_419(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_427(8000, 0, 0) - func_419(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_427(int iParam0, bool bParam1, int iParam2)
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

int func_428()
{
	return 1;
}

int func_429(char* sParam0)
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

int func_430(int iParam0)
{
	return func_431(func_432(iParam0));
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_432(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_433()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_30();
	}
	return func_434(Global_4456448.f_194990);
}

int func_434(int iParam0)
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

bool func_435(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_436(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_437(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 1);
}

void func_438(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_449())
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
				func_439(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_439(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_439(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_439(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_439(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_26()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_446(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_445(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_440(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_441(iParam0);
	}
}

void func_441(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_444(iParam0))
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
		func_442(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_442(var uParam0)
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
	func_443(&(uParam0->f_14));
	func_443(&(uParam0->f_14.f_13));
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

void func_443(var uParam0)
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

int func_444(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_445(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_449())
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
				func_447(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_447(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_8(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_448();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_448()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_449()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_465())
		{
			if (func_464(0))
			{
				if (!func_460(0))
				{
					if (unk_0x40B8C182D63932FC(func_459()))
					{
						if (func_458() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_458());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_456(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_455("GB_BCUT_TICK1", func_459(), iVar0, 0, 0, 1);
						}
						func_454(20);
						func_451(func_459(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_451(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_453(iParam0);
		func_452(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_8(iParam0));
	}
}

void func_452(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_453(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_533;
}

void func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_455(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_201(iParam1, -2, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_199(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_193(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_457(1);
	}
	else
	{
		iVar1 = func_457(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_457(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_458()
{
	return Global_262145.f_12389;
}

int func_459()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_460(bool bParam0)
{
	return func_461(unk_0xD803B885F5E47A62(), bParam0);
}

int func_461(int iParam0, bool bParam1)
{
	return func_462(iParam0, bParam1, 1);
}

int func_462(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_463(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_121() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_121())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_464(bool bParam0)
{
	return func_221(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_465()
{
	return func_222(unk_0xD803B885F5E47A62());
}

void func_466(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_467()
{
	int iVar0;
	
	iVar0 = func_468(42);
	Global_2414418[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_468(int iParam0)
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

void func_469()
{
	int iVar0;
	
	iVar0 = func_468(43);
	Global_2414418[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_472(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_471(iParam0, iVar0, iParam2);
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2585280[iParam0 /*3*/][func_81(iParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2585280[iParam0 /*3*/][func_81(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_473()
{
	if (bLocal_85)
	{
		bLocal_85 = false;
	}
	if (bLocal_80)
	{
		bLocal_80 = false;
	}
	if (bLocal_81)
	{
		bLocal_81 = false;
	}
	if (bLocal_82)
	{
		bLocal_82 = false;
	}
	if (bLocal_84)
	{
		bLocal_84 = false;
	}
	if (bLocal_83)
	{
		bLocal_83 = false;
	}
}

void func_474()
{
	Global_2097152[func_504() /*10930*/].f_6174.f_35 = unk_0xDD0E7998AE8AD485();
}

void func_475(int iParam0, bool bParam1)
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
			Global_2097152[func_504() /*10930*/].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_504() /*10930*/].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_504() /*10930*/].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_504() /*10930*/].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_504() /*10930*/].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_504() /*10930*/].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_504() /*10930*/].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_504() /*10930*/].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_504() /*10930*/].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_504() /*10930*/].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_504() /*10930*/].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_504() /*10930*/].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_504() /*10930*/].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_504() /*10930*/].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_504() /*10930*/].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_504() /*10930*/].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_504() /*10930*/].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_504() /*10930*/].f_6174.f_30 = iVar0;
			break;
	}
}

void func_476()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1199, -1, 0);
	if (!unk_0xEAE0D21A50E6C7F4(iVar0, 3))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 3);
		unk_0x5D96D8530B3D0904(&iLocal_329, 1);
		bVar1 = true;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 4))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 4);
		unk_0x5D96D8530B3D0904(&iLocal_329, 2);
		bVar1 = true;
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 5))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 5);
		unk_0x5D96D8530B3D0904(&iLocal_329, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_146(1199, iVar0, -1, 1, 0);
	}
}

void func_477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_478(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_416(iParam0, iVar0, iParam2, 1);
	}
}

int func_478(int iParam0)
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

void func_479()
{
	if (!Global_2537071.f_4528)
	{
		Global_2537071.f_4528 = 1;
	}
	func_249(&(Global_2537071.f_4529), 0, 0);
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_481()
{
	int iVar0;
	
	if (func_14(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xBBA8A868118C90ED(iVar0, -1, 0))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_482(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_490())
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
		if (!func_136())
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
				else if (bVar14 || (!func_24(unk_0xD803B885F5E47A62(), 0) && !func_231()))
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
					func_487(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_486(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_485();
					func_484();
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
				if (!func_486(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_483(Global_4456448.f_232883))
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

bool func_483(int iParam0)
{
	return iParam0 == 17;
}

void func_484()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_485()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_486(int iParam0)
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

void func_487(int iParam0, int iParam1, int iParam2)
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
				func_489();
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
		if (func_24(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_488(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_489()
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

int func_490()
{
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_491()
{
	func_117();
}

int func_492(int iParam0, int iParam1)
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), func_169(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0xA30B8362589C124A(iParam0, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (!func_387(iParam0))
			{
				if (iParam0 != iLocal_332)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_494()
{
	if (Global_2439138.f_502.f_12 || Global_2439138.f_502.f_13)
	{
		return 1;
	}
	return 0;
}

void func_495(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_496(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_496(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_503(iParam1);
			break;
		
		case 1:
			iVar0 = func_502(iParam1);
			break;
		
		case 2:
			iVar0 = func_501(iParam1);
			break;
		
		case 3:
			iVar0 = func_500(iParam1);
			break;
		
		case 4:
			iVar0 = func_499(iParam1);
			break;
		
		case 5:
			iVar0 = func_498(iParam1);
			break;
		
		case 6:
			iVar0 = func_497(iParam1);
			break;
	}
	return iVar0;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_504()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_505(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_506(uParam0, bParam2, 0);
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

void func_506(var uParam0, bool bParam1, bool bParam2)
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

bool func_507(var uParam0)
{
	return uParam0->f_1;
}

void func_508()
{
	Global_2097152[func_504() /*10930*/].f_6174.f_36 = unk_0xDD0E7998AE8AD485();
}

void func_509(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDDD4A799D5B1FDA5();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_496(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_504() /*10930*/].f_6174.f_37 = iVar1;
}

void func_510()
{
	func_513("CELL_CLTEST1", 0);
	func_511("CELL_CLTEST1");
	func_513("CELL_CLTEST6", 0);
	func_511("CELL_CLTEST6");
}

void func_511(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_297();
					Global_111638.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_512(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111638.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_512(int iParam0)
{
	if ((Global_111638.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111638.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111638.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_513(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_111638.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111638.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111638.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111638.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111638.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111638.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111638.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111638.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_514()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_139(unk_0xD803B885F5E47A62(), 1, 0))
	{
		return 0;
	}
	if (func_110())
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
	if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (func_255())
	{
		return 0;
	}
	if (func_524())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_515())
	{
		return 0;
	}
	if (!func_136())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0;
	}
	return 1;
}

bool func_515()
{
	return Global_73825;
}

bool func_516()
{
	if (Global_2097152[func_504() /*10930*/].f_6174.f_35 == 0)
	{
		return 0;
	}
	return (unk_0xDD0E7998AE8AD485() - Global_2097152[func_504() /*10930*/].f_6174.f_35) < 86400;
}

bool func_517()
{
	if (Global_2097152[func_504() /*10930*/].f_6174.f_36 == 0)
	{
		return 0;
	}
	return (unk_0xDD0E7998AE8AD485() - Global_2097152[func_504() /*10930*/].f_6174.f_36) < 86400;
}

bool func_518()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_328, 2))
	{
		if (!func_24(unk_0xD803B885F5E47A62(), 0))
		{
			if (((((!unk_0x09BE1E6DF7B80B43() && !func_139(unk_0xD803B885F5E47A62(), 1, 0)) && !func_112()) && (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))) && unk_0x0F1CCD77290EE12F()) && func_519(19))
			{
				unk_0x5D96D8530B3D0904(&iLocal_328, 2);
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_328, 2);
}

int func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_521(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_520(unk_0xD803B885F5E47A62(), 1);
	iVar2 = func_417(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_520(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_419(iParam0);
}

int func_521(int iParam0)
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
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
			if (!func_522(-1))
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

bool func_522(int iParam0)
{
	return func_523(123, iParam0);
}

int func_523(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2583656[iParam0 /*3*/][func_81(uParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_524()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

int func_525()
{
	var uVar0;
	
	func_532(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_531())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_530())
	{
		return 1;
	}
	if (func_529(159))
	{
		if (!func_528())
		{
			return 1;
		}
	}
	if (func_529(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_526() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_526()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_526()
{
	switch (func_83())
	{
		case 0:
			return func_527();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_527()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_528()
{
	return Global_2450632.f_598;
}

int func_529(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_530()
{
	return Global_2460680;
}

bool func_531()
{
	return Global_2450632.f_593;
}

void func_532(var uParam0)
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
					func_533(iVar0);
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

void func_533(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_14(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_534(iVar2, &bVar3))
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

int func_534(int iParam0, var uParam1)
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

void func_535()
{
	wait(0);
}

void func_536()
{
	if (iLocal_100 != -1)
	{
		func_143(iLocal_100, 0);
	}
	func_538(&iLocal_307);
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 1))
	{
		func_537(0f, 0f, 0f, func_365(19), 1);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			if (unk_0x23002DD5E7B94FD7(Local_320.f_24))
			{
				unk_0xBD63401BCCEC233B(Local_320.f_24);
			}
			Local_320.f_24 = -1;
		}
	}
	func_375();
	Global_2537071.f_1655 = 0;
	Global_2537071.f_1656 = 0;
	Global_2537071.f_1658 = 0;
	Global_2537071.f_1684 = 0;
	if (unk_0xEAE0D21A50E6C7F4(iLocal_328, 7))
	{
		func_258(6, 0);
	}
	func_395();
	if (unk_0xE4EDC4B0E92C078B(Global_1661967))
	{
		unk_0x142CC44DB769B57E(&Global_1661967);
	}
	func_251(0);
	if (unk_0xE4EDC4B0E92C078B(Global_1661977))
	{
		unk_0x142CC44DB769B57E(&Global_1661977);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (iLocal_77)
		{
			func_174(1215605247, 0, 0);
			func_173(0);
		}
		if (iLocal_90)
		{
			func_173(0);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_537(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_31(Global_2537071.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2537071.f_3968[iVar0 /*26*/] = 0;
					Global_2537071.f_3968[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2537071.f_3968[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_538(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_539(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_539(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_540(struct<21> Param0)
{
	func_546(func_547(Param0), Param0);
	func_543(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_320, 74);
	unk_0x35B62793EAE9ADDF(&Local_327, 129);
	unk_0x256D93AFAE851A7A(0);
	if (!func_542())
	{
		return 0;
	}
	Global_2537071.f_1658 = 0;
	Global_2537071.f_4386 = 0;
	if (unk_0xBFF81ED3B99522C7())
	{
	}
	if (func_71(unk_0xD803B885F5E47A62(), 6))
	{
		func_258(6, 0);
	}
	func_541();
	return 1;
}

void func_541()
{
	int iVar0;
	
	iVar0 = func_80(1199, -1, 0);
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 3))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 4))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 2);
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 5))
	{
		unk_0x5D96D8530B3D0904(&iLocal_329, 3);
		unk_0x5D96D8530B3D0904(&iLocal_329, 0);
	}
}

int func_542()
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
		if (func_531())
		{
			return 0;
		}
		if (func_529(157))
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

int func_543(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_545();
			}
			else
			{
				return 0;
			}
		}
		if (!func_544())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_545();
					}
					else
					{
						return 0;
					}
				}
				if (func_531())
				{
					if (!bParam2)
					{
						func_545();
					}
					else
					{
						return 0;
					}
				}
				if (func_529(157))
				{
					if (!bParam2)
					{
						func_545();
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
					func_545();
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
				func_545();
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
			func_545();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_544()
{
	return Global_1312854;
}

void func_545()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_546(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_545();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_547(int iParam0)
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

