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
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<414> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<33> Local_247 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<38> Local_257 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	vector3 vLocal_264[1] = {{ 0f, 0f, 0f } };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271[3] = { 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[2] = { 0, 0 };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_310 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_313 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	char* sLocal_319 = NULL;
	vector3 vLocal_320[24] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	vector3 vLocal_324[24] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<6> Local_328 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	bool bLocal_335 = 0;
	struct<28> Local_336 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 5;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 1097859072;
	var uLocal_383 = 1500;
	var uLocal_384 = 45;
	var uLocal_385 = 1103626240;
	var uLocal_386 = 5;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = unk_0xAD1355DD1E5D2D9B();
	iLocal_72 = unk_0x817B3657F78A517A();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_265 = joaat("a_m_m_farmer_01");
	iLocal_266 = -1322183878;
	iLocal_267 = -1515940233;
	iLocal_268 = -1344435013;
	iLocal_281 = 1;
	iLocal_285 = 112;
	vLocal_309 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_310 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_311 = { 144.3291f, -3352.773f, 3.6651f };
	vLocal_312 = { 311.9527f, -3305.613f, 10.6651f };
	vLocal_313 = { 206.636f, -3322.673f, 4.6339f };
	vLocal_314 = { 0f, 0f, 24f };
	vLocal_315 = { 208.786f, -3319.823f, 4.6339f };
	vLocal_316 = { 0f, 0f, 47f };
	vLocal_317 = { 199.5188f, -3326.201f, 4.78716f };
	vLocal_318 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_319 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_320, "txm12_deal1_7", 24);
	StringCopy(&cLocal_324, "txm12_deal1_7", 24);
	if (unk_0x2EBF608FFE6CA406(67))
	{
		func_435(2);
		func_433();
	}
	unk_0x7798376279BB5369(1);
	func_417();
	Local_230.f_102 = 1;
	while (true)
	{
		if (unk_0xC844350D5D58C99A(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_230);
		}
		wait(0);
	}
}

void func_1(int iParam0)
{
	iParam0->f_2 = unk_0x16F2683693E537C9();
	func_7(&(iParam0->f_244));
	iParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x16F2683693E537C9());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	if (func_416(&Local_230))
	{
		func_415(&Local_230);
		if (func_414(&Local_230, 0))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_230);
		if (Local_230.f_410 >= 9)
		{
			unk_0xF3039DE1FDB4F6FD(false);
			func_409();
		}
		func_375(&Local_230, &uLocal_380);
		if (Local_230.f_410 < 22)
		{
			func_374(&Local_230);
		}
		func_373(&Local_230, &uLocal_289, 0);
		if (Local_230.f_410 > 5 && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0))
		{
			Local_230.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			unk_0x5D96D8530B3D0904(&iLocal_290, 0);
		}
		if (Local_230.f_410 > 2)
		{
			if (!func_372(&Local_230))
			{
				func_339();
			}
			else
			{
				func_330(&Local_230, "Taxi Not Driveable", func_338(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			func_306(&Local_230, 0, 1);
		}
		if (unk_0xC844350D5D58C99A(Local_230.f_3))
		{
			if (unk_0x437347B10A200C4B(Local_230.f_3, 0))
			{
				if (!func_305(&Local_230, 0))
				{
					func_304(&Local_230, 0);
				}
				if (Local_230.f_410 >= 22 || iLocal_269 >= 1)
				{
					iLocal_299 = 1;
				}
				func_303(&(Local_247.f_3));
				func_303(&(Local_257.f_3));
				func_302(&iLocal_274);
				func_330(&Local_230, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_299();
				func_298(&Local_230, 16, 4f, 0);
				func_296(&Local_230, vLocal_309, vLocal_310, "TaxiWalter", iLocal_265, 202f, 35f);
				func_294(&Local_230);
				func_293(&Local_230, 1);
				break;
			
			case 1:
				if (func_291())
				{
					func_290();
					func_289(&(vLocal_264[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_288(&Local_230, &vLocal_264);
					func_268();
					func_267(&Local_230);
					func_293(&Local_230, 2);
				}
				break;
			
			case 2:
				Local_230.f_14 = { vLocal_309 };
				Local_230.f_17 = { Local_247 };
				func_293(&Local_230, 3);
				break;
			
			case 3:
				if (func_262(&Local_230, 1))
				{
					if (!unk_0x437347B10A200C4B(Local_230.f_3, 0))
					{
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 3, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 4, 0, 2, 0);
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 0, 0, 2, 0);
					}
					func_261(&Local_230, 1, 0);
					unk_0x0E2400AB9174FA81(1, iLocal_262, Local_230.f_413);
					unk_0x0E2400AB9174FA81(1, Local_230.f_413, iLocal_262);
					unk_0x25C5402CC10F76CD(Local_230.f_3, false);
					func_293(&Local_230, 5);
				}
				break;
			
			case 5:
				if (func_235(&Local_230, 0, 1109393408))
				{
					func_293(&Local_230, 15);
				}
				break;
			
			case 15:
				if (func_234(&Local_230))
				{
					func_230(&Local_230, 9, 1, 0, 0);
					func_229(&Local_230);
					func_293(&Local_230, 7);
				}
				if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0))
				{
					if (!unk_0xC42A92762C58E1B9(Local_230.f_2, Local_230.f_4, 0))
					{
						func_227(&Local_230);
						func_293(&Local_230, 5);
					}
				}
				break;
			
			case 7:
				if (unk_0xEAE0D21A50E6C7F4(iLocal_290, 0))
				{
					func_226();
					func_293(&Local_230, 9);
				}
				break;
			
			case 9:
				func_210();
				if ((func_209(Local_230.f_4, Local_230.f_17, 1) < 675f && !Local_230.f_140) && !iLocal_297)
				{
					unk_0xE342F209E49C5314(vLocal_311, vLocal_312, false, 1);
					unk_0x10F3BFFADF2CE3DA(vLocal_311, vLocal_312);
					iLocal_278 = unk_0x7D6CA5F52B3748BF(vLocal_311, vLocal_312, 0, 1, 1, 1);
					unk_0x745CE398A4B0A3C6(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_208(&Local_230);
					func_206(&uLocal_339);
					func_205(&Local_336, 3, 0);
					func_230(&Local_230, 97, 1, 0, 0);
					unk_0x262EF6C6306BEA6C(Local_230.f_2, joaat("weapon_combatpistol"), 200, true, true);
					iLocal_297 = 1;
				}
				if (func_174(&Local_230, 16f, 1097859072, 1117782016))
				{
					unk_0x142CC44DB769B57E(&(Local_230.f_9));
					func_173(&uLocal_380, 4);
					func_173(&uLocal_380, 8);
					unk_0x51B096AAC60548C1(0.1f);
					settimera(0);
					func_293(&Local_230, 22);
				}
				if (func_209(Local_230.f_4, Local_230.f_17, 1) < 10f && func_172(Local_230.f_4, Local_247.f_3[1], 1) < 10f)
				{
					if (func_168(&Local_230, 1, 1084227584))
					{
						unk_0x142CC44DB769B57E(&(Local_230.f_9));
						func_166(1, 0);
						func_166(2, 0);
						func_166(3, 0);
						func_166(4, 0);
						func_166(5, 0);
						func_166(0, 1);
						unk_0x51B096AAC60548C1(0.1f);
						settimera(0);
						func_293(&Local_230, 22);
					}
				}
				if (!iLocal_301)
				{
				}
				if (!iLocal_301)
				{
					if (bLocal_302)
					{
						if ((((((((((unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[2])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[3])) || (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[0]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[1]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[2]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[0], 0, 2))) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[1], 0, 2))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[2], 0, 2))) || func_172(unk_0x16F2683693E537C9(), Local_247.f_3[1], 1) < 6f)
						{
							unk_0x6DF7BF67E86AAE86(Local_247.f_3[0], iLocal_262);
							func_303(&(Local_247.f_3));
							func_302(&iLocal_274);
							func_330(&Local_230, "Aggro Heard Shot", 8);
							iLocal_301 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (func_165(Local_230.f_3, 1) < 250f)
				{
					if (func_126())
					{
						func_124(&uLocal_380, 1);
						func_124(&uLocal_380, 16);
						func_124(&uLocal_380, 32);
						func_230(&Local_230, 100, 1, 0, 0);
						if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && !unk_0xEB6A8945D1AC98A1(Local_230.f_2))
						{
							unk_0x327AAEE25F323797(Local_230.f_3);
							unk_0xE185F110925D87DB(Local_230.f_3, Local_230.f_2, 20000, 6f, 2f, 1073741824, 0);
						}
						settimera(0);
						Local_230.f_114 = 0;
						func_293(&Local_230, 24);
					}
				}
				else
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (func_165(Local_230.f_2, 1) < 7f && timera() > 3000)
				{
					unk_0x0C8C0C840C2D1AD2(Local_230.f_3, Local_230.f_2, -1, 2048, 4);
					unk_0xF82EA857DA10E0CD(&iLocal_270);
					unk_0xDD353D0E9C789D0E(&iLocal_270);
					unk_0xF96A174EE26D7588(0, Local_230.f_2, -1);
					unk_0x75ABDC5F81978924(iLocal_270);
					unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
					Local_230.f_56 = 50;
					func_122(&Local_230);
					func_118(&Local_230);
					func_117(&Local_230);
					if (iLocal_288 == 8)
					{
						func_116(&Local_230, 0);
					}
					func_293(&Local_230, 27);
				}
				else if (func_165(Local_230.f_3, 1) > 100f)
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!func_115() && !unk_0x437347B10A200C4B(Local_230.f_3, 0)) && func_113(&Local_230, 19) > 2f)
				{
					func_112(&Local_230, 19, 0);
					func_293(&Local_230, 29);
					if (unk_0x58C79C59A23B279F(5, vLocal_318, 1, 0f, &uLocal_279, 0, 0))
					{
						unk_0x6D3E3CEAE3946A5A(uLocal_279, 200f);
						bLocal_304 = true;
					}
					if (unk_0x58C79C59A23B279F(7, vLocal_318, 3, 0f, &uLocal_280, 0, 0))
					{
						bLocal_304 = true;
					}
				}
				break;
			
			case 29:
				if (func_77(&Local_230, &iLocal_387))
				{
					if (unk_0xC844350D5D58C99A(Local_230.f_3))
					{
						if (!unk_0x437347B10A200C4B(Local_230.f_3, 0))
						{
							unk_0xA3BF0AA5A2608191(Local_230.f_3);
							unk_0xF82EA857DA10E0CD(&iLocal_270);
							unk_0xDD353D0E9C789D0E(&iLocal_270);
							unk_0xEEB67C3D0A71A47B(0, Local_230.f_17, 500f, 30000, 0, 0);
							unk_0x96167B03C5A77156(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0x96167B03C5A77156(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0x96167B03C5A77156(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 1048576000, 0, 1193033728);
							unk_0x01E4BB5190DF7317(0, 1193033728, 0);
							unk_0x75ABDC5F81978924(iLocal_270);
							unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
							unk_0xFADC0A217229F6B5(Local_230.f_3, true);
						}
					}
					func_11(1, &Local_230, 0);
					settimera(0);
					func_293(&Local_230, 30);
				}
				break;
			
			case 30:
				if (func_10(unk_0x16F2683693E537C9(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_433();
				}
				else if (bLocal_304)
				{
					iLocal_277 = unk_0x6E7D01E16ABEFABB(vLocal_318, 40f, joaat("ambulance"), 0);
					if (unk_0xDF1306B443CD3D15(iLocal_277, 0))
					{
						iLocal_305 = 1;
					}
					iLocal_277 = unk_0x6E7D01E16ABEFABB(vLocal_318, 40f, joaat("police"), 0);
					if (unk_0xDF1306B443CD3D15(iLocal_277, 0))
					{
						iLocal_305 = 1;
					}
					iLocal_275 = unk_0xF187F2EA5437526A(vLocal_318, 10f, 10f, 5f, -1);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_275))
					{
						iLocal_305 = 1;
					}
					if (iLocal_305 || timera() > 30000)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
			}
	}
}

float func_10(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_415(uParam0);
	if (func_115())
	{
		func_49();
	}
	func_47();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(1);
	func_42(0);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, false);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_39(uParam0->f_14, 1);
	func_37(uParam0->f_14, 1, 1114636288);
	func_36(&(uParam0->f_244), 3);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
	if (func_33())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_23(0, 1, 1, 0, 0, 0);
	unk_0xBFE31971E49FA500(true);
	unk_0x8BCB70EB440DED83(true);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xF3039DE1FDB4F6FD(true);
	}
	if (func_22(Global_111638.f_19092, 4))
	{
		func_124(&(Global_111638.f_19092), 4);
		unk_0xAB8E2DDC7AF955E0(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_17(uParam0->f_411);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x11E0F00830F70E15(round((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (!unk_0x405E212DDE472467(uParam0->f_3, 0))
			{
				unk_0x61F0DE0226FF7252(uParam0->f_3);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_3, false);
			unk_0x0E2400AB9174FA81(255, uParam0->f_413, 1862763509);
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			unk_0x6DAD7906B73F064D(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_32(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_31())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_32(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !func_25(unk_0xD803B885F5E47A62(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0)
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

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_38(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_38(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0xF858EFDE1871B5F2(vVar0, vVar1, false, 1);
	}
	else
	{
		unk_0xF5894FEB702E7E76(vVar0, vVar1, true);
		unk_0xEFED0CD6E25037B9();
	}
}

Vector3 func_38(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
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

void func_39(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_40(vParam0, func_41(), 0))
	{
		vVar0 = { func_38(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_38(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar1, bParam1, 1);
	}
}

bool func_40(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_41()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_45())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_49()
{
	Global_19671 = 0;
	func_50();
}

void func_50()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_52("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_52("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)
{
}

void func_53(var uParam0)
{
	func_51(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_435(1);
		func_63(15, 1);
	}
	func_173(&(Global_111638.f_19092), 1024);
	if (!func_22(Global_111638.f_19092, 64))
	{
		func_54(func_61(func_62(uParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)
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
		func_60((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
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
		func_55();
	}
}

void func_55()
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
		func_59(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_58() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()
{
	if (func_57(0))
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

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_58()
{
	return Global_30768;
}

int func_59(int iParam0, int iParam1)
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

int func_60(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
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

int func_61(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(var uParam0)
{
	return uParam0->f_411;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (func_76(14) && !func_75(iParam0))
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
	if (func_74(&Global_4270065))
	{
		if (func_72(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_65(&Global_4270065, iParam0))
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

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	func_68(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_76(14) && !func_75(iParam1))
	{
		return 0;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
	func_70(uParam0, (Global_4270064 - 0.5f));
}

void func_69(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_70(var uParam0, float fParam1)
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

float func_71(var uParam0)
{
	return uParam0->f_80;
}

bool func_72(var uParam0, int iParam1)
{
	return func_73(uParam0, iParam1) != -1;
}

int func_73(var uParam0, int iParam1)
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

bool func_74(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_75(int iParam0)
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

bool func_76(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_77(int iParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_115() && func_113(iParam0, 0) > 1f)
			{
				if (func_33())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				}
				func_111(iParam0);
				func_124(&(Global_111638.f_19092), 4096);
				func_108(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_110(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_107(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_101(iParam1, 0))
			{
				func_78(iParam0);
				func_298(iParam0, 0, 0, 0);
				func_107(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_79(func_99(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 3)
	{
		return;
	}
	if (func_98(iParam0) == 4)
	{
		return;
	}
	func_80(func_98(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_89(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_83(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_82(iParam0);
	if (Global_41431 == 15)
	{
		func_81(0);
	}
	return 1;
}

void func_81(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_60(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_86(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_86(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_86(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_86(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_86(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_86(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_85() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_85() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_84(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_85()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_87(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

void func_88(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_89(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_91(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_91(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_91(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_91(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_90(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_90(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_90(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_90(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_90(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_90(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_85() /*10930*/].f_6174.f_10, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_87(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_93(iParam0, iParam1);
	uVar2 = func_92(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_94(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_63(27, 1);
	return 1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_57254[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_97()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_98(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_99()
{
	func_100();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_100()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_76(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
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

int func_101(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_105(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(14);
	unk_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_105(&(uParam0->f_5));
				func_104(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_103(&(uParam0->f_5)) > 0.33f)
			{
				func_102(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_103(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_105(&(uParam0->f_5));
			func_104(uParam0, 1051260355);
		}
		else if (func_103(&(uParam0->f_5)) > 0.33f)
		{
			func_102(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_102(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_103(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_104(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_105(int iParam0)
{
	func_106(iParam0, 0f);
}

void func_106(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_107(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_109());
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(iParam9);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(sParam7);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6B012227B3921E18(iParam6);
	unk_0x6D99DF8263D35CE5(iParam5);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	func_105(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_109()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(int iParam0)
{
	char* sVar0;
	
	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	
	Local_161.f_1 = to_float(iParam0->f_50);
	Local_161.f_2 = to_float(iParam0->f_56);
	func_51(11, iParam0->f_56);
	func_51(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (unk_0xEAE0D21A50E6C7F4(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = iParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_102(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_102(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_113(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_114(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_103(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_114(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_105(iParam0);
	}
}

int func_115()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_117(int iParam0)
{
	if (iParam0->f_56 >= iParam0->f_59)
	{
		iParam0->f_56 = ceil((IntToFloat(iParam0->f_50) * 0.4f));
	}
	else if (iParam0->f_56 < iParam0->f_59 && iParam0->f_56 >= iParam0->f_58)
	{
		iParam0->f_56 = ceil((IntToFloat(iParam0->f_50) * 0.15f));
	}
	else
	{
		iParam0->f_56 = 0;
	}
	if (!func_22(iParam0->f_55, 1))
	{
		func_173(&(iParam0->f_55), 1);
	}
}

void func_118(int iParam0)
{
	func_120();
	unk_0x790015DC92C918E2();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_230(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_230(iParam0, 103, 1, 0, 0);
		}
		func_119(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_230(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_230(iParam0, 102, 1, 0, 0);
	}
	func_298(iParam0, 16, 4f, 0);
}

void func_119(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_120()
{
	Global_19671 = 0;
	func_121();
}

void func_121()
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

void func_122(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_123(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_51(4, ceil(fVar0));
	func_51(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_123(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_124(var uParam0, int iParam1)
{
	func_125(uParam0, iParam1);
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_126()
{
	int iVar0;
	
	if (iLocal_269 < 4 && ((((((((((unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[2])) || (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[0]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[1]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0xE147126C9AD09A60(Local_247.f_3[2]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[0], 0, 2))) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[1], 0, 2))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0x54648B774DB42A3A(Local_247.f_3[2], 0, 2))) || func_172(unk_0x16F2683693E537C9(), Local_247.f_3[1], 1) < 6f) || (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, true, 0) && ((((((!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[0])) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[1]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[2]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[0]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[1]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[2]))))))
	{
		Local_230.f_114 = 1;
		iLocal_269 = 4;
	}
	switch (iLocal_269)
	{
		case 0:
			func_230(&Local_230, 90, 1, 0, 0);
			func_205(&Local_336, -1, 1);
			func_164();
			unk_0x0674E58A79778E99(&iLocal_290, 1);
			if (!unk_0x69DF961355195C3C(iLocal_295))
			{
				if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2]))
				{
					iLocal_295 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 2);
					unk_0xC90224D9E95E5E3A(iLocal_295, true);
					unk_0x915804B434753CBD(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
					unk_0x915804B434753CBD(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					unk_0x915804B434753CBD(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
			}
			iLocal_282 = unk_0x1C0640BA9A7327B3();
			iLocal_269 = 1;
			break;
		
		case 1:
			if (!func_115() && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 10))
			{
				func_230(&Local_230, 91, 1, 0, 0);
				unk_0x5D96D8530B3D0904(&iLocal_290, 10);
				func_114(&iLocal_329);
			}
			if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 4000)
			{
				if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
				{
					if (func_163(&Local_230))
					{
						func_162("TAXI_VIEW", -1);
					}
					iLocal_298 = 1;
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[1]))
					{
						iLocal_292 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 2);
						unk_0x915804B434753CBD(Local_247.f_3[3], iLocal_292, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(iLocal_274[0], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(iLocal_274[1], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
				}
			}
			if (func_161("TAXI_VIEW") && (unk_0x06F8112AA79C53D9(0, 80) || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && (!func_115() || func_13(&iLocal_329) > 9f))
			{
				if ((unk_0x5A91F08DF773C39D(Local_230.f_3, vLocal_317, 1.5f, 1.5f, 2f, false, true, 0) && unk_0xD1960163A3042274(Local_230.f_3, 242628503) == 7) && (unk_0x69DF961355195C3C(iLocal_295) && unk_0xA45992A6CE82FB43(iLocal_295) > 0.995f))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2]))
					{
						iLocal_296 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 2);
						unk_0x915804B434753CBD(Local_247.f_3[0], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(Local_247.f_3[1], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(Local_247.f_3[2], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1148846080, 0);
						unk_0xEFC3DF9D33E248D8(iLocal_296, true);
					}
					unk_0xC6EB89C59F2AF6B8(Local_230.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, -1, 0, 0, 0, 0, 0);
					iLocal_284 = unk_0x1C0640BA9A7327B3();
					iLocal_282 = unk_0x1C0640BA9A7327B3();
					iLocal_269 = 2;
				}
			}
			break;
		
		case 2:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 2500 && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 1))
			{
				func_230(&Local_230, 89, 1, 1, 0);
				unk_0x5D96D8530B3D0904(&iLocal_290, 1);
			}
			if (((unk_0xA45992A6CE82FB43(iLocal_296) >= 0.838f && !unk_0xEB6A8945D1AC98A1(Local_230.f_3)) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 6))
			{
				unk_0x262EF6C6306BEA6C(Local_247.f_3[1], joaat("weapon_pistol"), -1, true, true);
				unk_0x262EF6C6306BEA6C(Local_230.f_3, joaat("weapon_pistol"), -1, true, true);
				unk_0x5D96D8530B3D0904(&iLocal_290, 6);
			}
			if ((unk_0xA45992A6CE82FB43(iLocal_296) >= 0.853f && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 7))
			{
				unk_0x262EF6C6306BEA6C(Local_247.f_3[2], joaat("weapon_pistol"), -1, true, true);
				unk_0x5D96D8530B3D0904(&iLocal_290, 7);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 3))
			{
				if ((unk_0x69DF961355195C3C(iLocal_292) && unk_0xA45992A6CE82FB43(iLocal_292) == 1f) || !unk_0x69DF961355195C3C(iLocal_292))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[1]))
					{
						iLocal_293 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 2);
						unk_0x915804B434753CBD(Local_247.f_3[3], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(iLocal_274[0], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x915804B434753CBD(iLocal_274[1], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xC90224D9E95E5E3A(iLocal_293, true);
						unk_0x5D96D8530B3D0904(&iLocal_290, 3);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_290, 1))
			{
				Local_328 = { func_160() };
				if (unk_0x7F8A39872A07D2CE(&cLocal_320, &Local_328) || unk_0x7F8A39872A07D2CE(&cLocal_324, &Local_328))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[1]))
					{
						if (unk_0x69DF961355195C3C(iLocal_293))
						{
							iLocal_294 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 2);
							unk_0x915804B434753CBD(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xEFC3DF9D33E248D8(iLocal_294, true);
							iLocal_283 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 3;
						}
						else
						{
							iLocal_294 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 2);
							unk_0x915804B434753CBD(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x915804B434753CBD(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0xEFC3DF9D33E248D8(iLocal_294, true);
							iLocal_283 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_286)
			{
				case 0:
					if (((unk_0x1C0640BA9A7327B3() - iLocal_283) > 850 && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[3])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 8))
					{
						unk_0x262EF6C6306BEA6C(Local_247.f_3[3], joaat("weapon_pistol"), -1, true, true);
						unk_0x5D96D8530B3D0904(&iLocal_290, 8);
					}
					if (((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2])) && !unk_0xEB6A8945D1AC98A1(Local_230.f_3))
					{
						unk_0x9DD8618CA5BF832D(Local_247.f_3[0], 156, true);
						unk_0x9DD8618CA5BF832D(Local_247.f_3[1], 156, true);
						unk_0x9DD8618CA5BF832D(Local_247.f_3[2], 156, true);
						unk_0x9DD8618CA5BF832D(Local_230.f_3, 156, true);
						if (((unk_0x69DF961355195C3C(iLocal_296) && unk_0xA45992A6CE82FB43(iLocal_296) == 1f) || !unk_0x69DF961355195C3C(iLocal_296)) || (unk_0x1C0640BA9A7327B3() - iLocal_284) > 27000)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_284) > 27000)
							{
							}
							iLocal_307 = 1;
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[0], Local_230.f_3, -1, 0);
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[1], Local_230.f_3, -1, 0);
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[2], Local_230.f_3, -1, 0);
							unk_0x9BE7E7B6B488CC55(Local_230.f_3, Local_247.f_3[1], -1, 0);
							iLocal_282 = 0;
							iLocal_286++;
						}
					}
					break;
				
				case 1:
					if (((unk_0x1C0640BA9A7327B3() - iLocal_283) > 850 && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[3])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 8))
					{
						unk_0x262EF6C6306BEA6C(Local_247.f_3[3], joaat("weapon_pistol"), -1, true, true);
						unk_0x5D96D8530B3D0904(&iLocal_290, 8);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]))
					{
						unk_0x9DD8618CA5BF832D(Local_247.f_3[3], 156, true);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 4))
					{
						if (!unk_0x69DF961355195C3C(iLocal_294) || unk_0xA45992A6CE82FB43(iLocal_294) == 1f)
						{
							if (((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[1])) && !unk_0xEB6A8945D1AC98A1(Local_230.f_3))
							{
								unk_0x96167B03C5A77156(iLocal_274[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								unk_0x96167B03C5A77156(iLocal_274[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								unk_0xBD453909DC26A85D(iLocal_274[0], -1115154469, false, 0, 0);
								unk_0xBD453909DC26A85D(iLocal_274[1], -1115154469, false, 0, 0);
								unk_0x9BE7E7B6B488CC55(Local_247.f_3[3], Local_230.f_3, -1, 1);
								unk_0x5D96D8530B3D0904(&iLocal_290, 4);
							}
						}
					}
					Local_328 = { func_160() };
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_7", &Local_328) && iLocal_282 == 0)
					{
						iLocal_282 = unk_0x1C0640BA9A7327B3();
					}
					else if ((iLocal_282 > 0 && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 1500) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 9))
					{
						func_159();
						func_158("TAXI_OBJ_GYB", 4000, 0);
						func_157(&(Local_247.f_3), &(Local_247.f_11));
						iLocal_298 = 0;
						unk_0x9A8DDC7C522F5BF5(Local_230, 0);
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286 = 2;
						unk_0x5D96D8530B3D0904(&iLocal_290, 9);
					}
					else if (iLocal_282 > 0 && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 1200)
					{
						if (func_156() && unk_0xFBB4F23D534EB790(Local_230))
						{
							if (!iLocal_308)
							{
								unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
								unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_308 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 4000 && unk_0xEAE0D21A50E6C7F4(iLocal_290, 9))
					{
						func_141(&(Local_230.f_244), Local_230.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						unk_0x0674E58A79778E99(&iLocal_290, 9);
					}
					if ((((!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 9)) && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 2000)
					{
						unk_0xD458AC1C1D29C3B4(Local_247.f_3[0], 115, 0);
						unk_0xD458AC1C1D29C3B4(Local_247.f_3[2], 115, 0);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286 = 8;
					}
					break;
				
				case 3:
					if (!func_115())
					{
						func_230(&Local_230, 12, 1, 0, 0);
						func_298(&Local_230, 19, 0, 0);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286++;
					}
					break;
				
				case 4:
					if (!unk_0xD17F06053799A7CA())
					{
						func_298(&Local_230, 19, 0, 0);
						func_230(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (func_113(&Local_230, 19) > 2f)
					{
						func_298(&Local_230, 19, 0, 0);
						func_230(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				
				case 8:
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2]))
					{
						unk_0x68FCFE10774F5C97(1, iLocal_262, Local_230.f_413);
						unk_0x0E2400AB9174FA81(5, iLocal_262, Local_230.f_413);
						unk_0x298903DD96203C2C(Local_247.f_3[0], 100);
						unk_0x298903DD96203C2C(Local_247.f_3[2], 100);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[0], Local_230.f_3, 5000, -957453492);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[1], Local_230.f_3, 5000, -687903391);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[2], Local_230.f_3, 5000, -957453492);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286++;
					}
					break;
				
				case 9:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 5000)
					{
						iLocal_269 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_230.f_114)
			{
				Local_230.f_114 = 1;
			}
			func_173(&uLocal_380, 1);
			func_173(&uLocal_380, 16);
			func_173(&uLocal_380, 32);
			func_159();
			func_138();
			func_137();
			func_303(&(Local_247.f_3));
			func_157(&(Local_247.f_3), &(Local_247.f_11));
			func_302(&iLocal_274);
			iLocal_282 = unk_0x1C0640BA9A7327B3();
			iLocal_269 = 5;
			break;
		
		case 5:
			if (iLocal_287 >= 2 && !func_305(&Local_230, 8))
			{
				func_304(&Local_230, 8);
			}
			else if (func_305(&Local_230, 8) && func_113(&Local_230, 8) > 3f)
			{
				func_135();
				func_132();
				iLocal_282 = unk_0x1C0640BA9A7327B3();
				iLocal_269 = 6;
			}
			else
			{
				iLocal_287 = 0;
			}
			func_130(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
		
		case 6:
			if ((unk_0xEB6A8945D1AC98A1(Local_257.f_3[0]) && unk_0xDF1306B443CD3D15(Local_257.f_27[0], 0)) && unk_0x20D6474D5F4B9FC6(Local_257.f_27[0]))
			{
				unk_0xC55F2A0377488064(Local_257.f_27[0]);
			}
			if ((((unk_0xEB6A8945D1AC98A1(Local_257.f_3[2]) || unk_0xB87D13D0C064E9D1(Local_257.f_3[2], unk_0x16F2683693E537C9(), 1)) || unk_0xB87D13D0C064E9D1(Local_257.f_3[2], Local_230.f_3, 1)) && unk_0xDF1306B443CD3D15(Local_257.f_27[1], 0)) && unk_0x20D6474D5F4B9FC6(Local_257.f_27[1]))
			{
				unk_0xC55F2A0377488064(Local_257.f_27[1]);
			}
			if (unk_0xE4EDC4B0E92C078B(Local_257.f_37[0]) && !unk_0xDF1306B443CD3D15(Local_257.f_27[0], 0))
			{
				unk_0x142CC44DB769B57E(&(Local_257.f_37[0]));
			}
			if (unk_0xE4EDC4B0E92C078B(Local_257.f_37[1]) && !unk_0xDF1306B443CD3D15(Local_257.f_27[1], 0))
			{
				unk_0x142CC44DB769B57E(&(Local_257.f_37[1]));
			}
			if (!iLocal_303 && ((unk_0xDF1306B443CD3D15(Local_257.f_27[0], 0) && !unk_0x20D6474D5F4B9FC6(Local_257.f_27[0])) || (unk_0xDF1306B443CD3D15(Local_257.f_27[1], 0) && !unk_0x20D6474D5F4B9FC6(Local_257.f_27[1]))))
			{
				if (func_129(&(Local_257.f_3)))
				{
					func_157(&(Local_257.f_3), &(Local_257.f_11));
					func_128();
					iLocal_303 = 1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 2))
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 5000)
				{
					func_303(&(Local_257.f_3));
					func_127(&(Local_247.f_3));
					unk_0x0E2400AB9174FA81(5, iLocal_262, Local_230.f_413);
					unk_0x5D96D8530B3D0904(&iLocal_290, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_257.f_3)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_257.f_3[iVar0]))
					{
						if (unk_0xD1960163A3042274(Local_257.f_3[iVar0], -1442466670) != 1 && unk_0xD1960163A3042274(Local_257.f_3[iVar0], -1442466670) != 0)
						{
							unk_0x7C8478BF70C1E072(Local_257.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
			{
				if (iLocal_306)
				{
					if (!func_115())
					{
						func_230(&Local_230, 140, 1, 0, 1);
					}
					iLocal_306 = 0;
				}
			}
			return func_130(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
	}
	return 0;
}

void func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			unk_0x298903DD96203C2C((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_128()
{
	if (unk_0xE4EDC4B0E92C078B(Local_257.f_37[0]))
	{
		unk_0x142CC44DB769B57E(&(Local_257.f_37[0]));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_257.f_37[1]))
	{
		unk_0x142CC44DB769B57E(&(Local_257.f_37[1]));
	}
}

int func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (!unk_0x405E212DDE472467((*uParam0)[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_288 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x437347B10A200C4B((*uParam0)[iVar0], 0))
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
			{
				unk_0x142CC44DB769B57E(uParam1[iVar0]);
			}
			if (func_131(&Local_230, (*uParam0)[iVar0], 1))
			{
				iLocal_288++;
			}
			iLocal_287++;
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		if (unk_0x437347B10A200C4B((*uParam2)[iVar0], 0))
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]))
			{
				unk_0x142CC44DB769B57E(uParam3[iVar0]);
				iLocal_306 = 1;
			}
			if (func_131(&Local_230, (*uParam2)[iVar0], 1))
			{
				iLocal_288++;
			}
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_131(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xC844350D5D58C99A(iParam1))
			{
				if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_132()
{
	if (!unk_0xE4EDC4B0E92C078B(Local_257.f_37[0]) && !unk_0xE4EDC4B0E92C078B(Local_257.f_37[1]))
	{
		Local_257.f_37[0] = func_133(Local_257.f_27[0], 0, 0);
		Local_257.f_37[1] = func_133(Local_257.f_27[1], 0, 0);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_135()
{
	if (unk_0xDF1306B443CD3D15(Local_257.f_27[0], 0))
	{
		unk_0x0CB57CDDC76DA8E0(Local_257.f_27[0], iLocal_285, func_136(0), 6, 1000, 786603);
		unk_0xA9FBE21EB8701B34(Local_257.f_27[0], 1f);
	}
	if (unk_0xDF1306B443CD3D15(Local_257.f_27[1], 0))
	{
		unk_0x0CB57CDDC76DA8E0(Local_257.f_27[1], iLocal_285, func_136(1), 6, 1000, 786603);
		unk_0xA9FBE21EB8701B34(Local_257.f_27[1], 1f);
	}
}

char* func_136(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_137()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Local_230.f_3))
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_230.f_8))
			{
				Local_230.f_8 = func_133(Local_230.f_3, 1, 0);
			}
			unk_0xCAE036C45E7FC720(Local_230.f_3, &iVar0, 1);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				unk_0x262EF6C6306BEA6C(Local_230.f_3, joaat("weapon_combatpistol"), 100, false, true);
			}
			unk_0xAFF39FB306F8E232(Local_230.f_3, 3, true);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 13, false);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 12, true);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0, true);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 24, true);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 34, true);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 37, true);
			unk_0x9FA191B317572861(Local_230.f_3, 300f);
			unk_0x967762C930C0C5FD(Local_230.f_3, 300f);
			unk_0xA656189732A3FF4B(Local_230.f_3, 300f);
			unk_0x3CC33E4E9CE523F4(Local_230.f_3, 1);
			unk_0xC978532B427F303B(Local_230.f_3, 1);
			unk_0x298903DD96203C2C(Local_230.f_3, 80);
			unk_0xB35CCEC0D4946813(Local_230.f_3, 2);
			unk_0x17EAEF3CBDBACF1B(Local_230.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, 0, 0);
			unk_0x0E2400AB9174FA81(5, iLocal_262, Local_230.f_413);
			unk_0x0E2400AB9174FA81(5, Local_230.f_413, iLocal_262);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x5A3F3435781E4122(0, 201.9434f, -3324.029f, 4.7888f, 5000, 1);
			unk_0x7C8478BF70C1E072(0, 200f, 0);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
			unk_0xFADC0A217229F6B5(Local_230.f_3, true);
		}
	}
}

void func_138()
{
	int iVar0;
	
	Local_257.f_27[0] = unk_0x122AAB0B1D6F55AD(Local_257.f_32[0], func_140(1), func_139(1), true, true, false);
	Local_257.f_27[1] = unk_0x122AAB0B1D6F55AD(Local_257.f_32[1], func_140(2), func_139(2), true, true, false);
	Local_257.f_3[0] = unk_0x852A19533F896693(Local_257.f_27[0], 26, Local_257.f_19[0], -1, 1, true);
	Local_257.f_3[1] = unk_0x852A19533F896693(Local_257.f_27[0], 26, Local_257.f_19[0], 0, 1, true);
	Local_257.f_3[2] = unk_0x852A19533F896693(Local_257.f_27[1], 26, Local_257.f_19[0], -1, 1, true);
	Local_257.f_3[3] = unk_0x852A19533F896693(Local_257.f_27[1], 26, Local_257.f_19[0], 0, 1, true);
	unk_0x55A3C4ED4728EA42(Local_257.f_27[1], "LuisLopz");
	func_8(&(Local_230.f_244), 6, Local_257.f_3[0], "TaxiBruce", 0, 1);
	unk_0x4F39CC3882DD074E(Local_257.f_3[0], "TaxiBruce");
	unk_0x262EF6C6306BEA6C(Local_257.f_3[0], joaat("weapon_smg"), 100, false, true);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[1], joaat("weapon_pistol"), 100, false, true);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[2], joaat("weapon_smg"), 100, false, true);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[3], joaat("weapon_pistol"), 100, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0x6D80F1AEBA734886(Local_257.f_3[iVar0], unk_0x09AC81E49EA267F7(50, 100));
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 2, true);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 13, true);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 1, false);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 3, true);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 37, true);
		unk_0x4E885A246A9D983A(Local_257.f_3[iVar0], 42, true);
		unk_0x9FA191B317572861(Local_257.f_3[iVar0], 300f);
		unk_0x967762C930C0C5FD(Local_257.f_3[iVar0], 300f);
		unk_0xA656189732A3FF4B(Local_257.f_3[iVar0], 300f);
		unk_0x11AD11297DC58CC7(Local_257.f_3[iVar0], true);
		unk_0x6DF7BF67E86AAE86(Local_257.f_3[iVar0], iLocal_262);
		unk_0x298903DD96203C2C(Local_257.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_140(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_141(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_142(sParam2, iParam4, 0);
}

int func_142(char* sParam0, int iParam1, bool bParam2)
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
					func_154();
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
		if (func_153(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_152();
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
				func_151();
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
				if (func_150())
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
			if (func_31())
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
			func_149();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_148();
		func_143();
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
		func_154();
	}
	return 0;
}

void func_143()
{
	if (!func_144())
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

int func_144()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_147())
	{
		return 0;
	}
	if (func_145(unk_0xD803B885F5E47A62()))
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

bool func_145(int iParam0)
{
	return func_146(iParam0, 20);
}

bool func_146(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_147()
{
	return -1;
}

void func_148()
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

void func_149()
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

int func_150()
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

void func_151()
{
	if (func_76(14))
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
		Global_19486 = func_99();
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

void func_152()
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

bool func_153(int iParam0, int iParam1)
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

void func_154()
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

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_156()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_157(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (!unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_133((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_158(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_159()
{
	Global_19671 = 0;
	func_154();
}

struct<6> func_160()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_21815);
		if (iVar1 > -1)
		{
			return Global_19673[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_161(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_162(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_163(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(iParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	if (unk_0xC844350D5D58C99A(Local_230.f_3))
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
		{
			unk_0x6DF7BF67E86AAE86(Local_230.f_3, Local_230.f_413);
			unk_0x0C8C0C840C2D1AD2(Local_230.f_3, Local_247.f_3[1], -1, 2048, 4);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x75CDA8644CD3B5F5(0, 0, 262144);
			unk_0x96167B03C5A77156(0, vLocal_317, 1f, 30000, 1048576000, 0, 1193033728);
			unk_0xE655C47E46F9A7E4(0, -30.3f, 0);
			unk_0xBC43ED9FE28DB191(0);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
		}
	}
}

float func_165(int iParam0, bool bParam1)
{
	return func_172(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

void func_166(int iParam0, bool bParam1)
{
	if (iParam0 < Local_165 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_167(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_125(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_168(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_44(1))
			{
				func_42(0);
			}
			if (func_33())
			{
				func_171();
				return 1;
			}
			else if (func_169(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 256);
				}
				else
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 0);
				}
			}
			unk_0xACCB31D58716FE8F(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_169(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_170(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_170(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

void func_171()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	}
}

float func_172(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

void func_173(var uParam0, int iParam1)
{
	func_167(uParam0, iParam1);
}

int func_174(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !iParam0->f_142)
	{
		if (func_191(iParam0))
		{
			func_190(iParam0, &(iParam0->f_43));
			func_185(iParam0);
			func_184(iParam0);
			func_181(iParam0);
			func_180(iParam0, fParam2, fParam3);
			func_177(iParam0);
			return func_175(iParam0, fParam1);
		}
	}
	return 0;
}

int func_175(int iParam0, float fParam1)
{
	if (func_62(iParam0) == 2)
	{
		if (unk_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_10(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_176(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			return func_168(iParam0, 1, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1) && func_176(1, 1, 1)) && unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
	{
		return func_168(iParam0, 1, fParam1);
	}
	return 0;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9())
				{
					return 0;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

void func_177(int iParam0)
{
	float fVar0;
	
	if ((func_179(iParam0) && func_22(iParam0->f_81, 67108864)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_89) >= 10000)
		{
			fVar0 = func_178(iParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_88 >= 2 && !func_115())
		{
			func_230(iParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x1C0640BA9A7327B3() % 4000) < 50)
		{
			if (!func_179(iParam0))
			{
			}
			if (!func_22(iParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

float func_178(vector3 vParam0, bool bParam1)
{
	return func_209(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

int func_179(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_180(int iParam0, float fParam1, float fParam2)
{
	if (func_179(iParam0) && func_22(iParam0->f_44, 4))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(iParam0->f_4) || unk_0x9C66D99E63E8E24C(iParam0->f_4) < 3f) && func_163(iParam0))
		{
			if (!func_305(iParam0, 2))
			{
				func_304(iParam0, 2);
			}
			else if (func_179(iParam0))
			{
				if (func_113(iParam0, 2) > fParam1 && !func_305(iParam0, 14))
				{
					if (func_35())
					{
						func_230(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_230(iParam0, 48, 1, 0, 0);
					}
					func_298(iParam0, 2, 0, 0);
					if (func_305(iParam0, 10))
					{
						func_298(iParam0, 10, 0, 0);
					}
				}
				if (!func_305(iParam0, 3))
				{
					func_298(iParam0, 3, 0, 0);
				}
				else if (func_113(iParam0, 3) >= fParam2)
				{
					func_112(iParam0, 3, 0);
					func_330(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_305(iParam0, 2))
			{
				func_112(iParam0, 2, 0);
			}
			if (func_305(iParam0, 3))
			{
				func_112(iParam0, 3, 0);
			}
		}
	}
}

void func_181(int iParam0)
{
	if (func_183(iParam0))
	{
		func_182(iParam0);
	}
}

void func_182(int iParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = unk_0xFC21F7E0F4D92523();
			func_112(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_113(iParam0, 20) > 3f)
				{
					func_230(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_22(iParam0->f_81, 262144) || !func_22(iParam0->f_81, 1048576))
				{
					if (func_113(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_230(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (func_113(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_230(iParam0, 85, 1, 0, 0);
						func_112(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_113(iParam0, 20) > 8f)
				{
					func_230(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_22(iParam0->f_81, 262144) || func_22(iParam0->f_82, 67108864))
			{
				if (!func_305(iParam0, 22))
				{
					func_304(iParam0, 22);
				}
			}
			if (func_305(iParam0, 22) && func_113(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_22(iParam0->f_81, 1048576))
					{
						func_230(iParam0, 84, 1, 0, 0);
						func_112(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_22(iParam0->f_82, 134217728))
					{
						func_230(iParam0, 85, 1, 0, 0);
						func_112(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_183(var uParam0)
{
	return uParam0->f_120;
}

void func_184(int iParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_22(iParam0->f_44, 2))
	{
		func_173(&(iParam0->f_44), 2);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_22(iParam0->f_44, 2))
	{
		func_124(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_51(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_230(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + ceil(5f));
	}
}

void func_185(int iParam0)
{
	if (!func_22(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					if (func_113(iParam0, 9) > 1f)
					{
						func_189(iParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (iParam0->f_410 != 22)
						{
							func_230(iParam0, 50, 1, 1, 0);
						}
						func_298(iParam0, 9, 0, 0);
						if (unk_0xE4EDC4B0E92C078B(iParam0->f_9))
						{
							unk_0x7F010F50CE03A8AF(iParam0->f_9, 0);
							unk_0x661342B9651D16E2(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_115() && func_113(iParam0, 9) > 4f)
				{
					func_230(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_188("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_230(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_187(iParam0)))
				{
					func_189(iParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_51(6, 0);
				}
				if (!func_186(iParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_113(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_230(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 1)
				{
					if (func_188("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x790015DC92C918E2();
					}
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						unk_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						unk_0x661342B9651D16E2(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_115())
				{
					if (iParam0->f_410 != 22)
					{
						func_230(iParam0, 53, 1, 0, 1);
					}
					func_51(7, func_187(iParam0));
					func_189(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_115())
				{
					func_112(iParam0, 9, 0);
					func_298(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_186(int iParam0)
{
	return iParam0->f_110;
}

int func_187(int iParam0)
{
	return iParam0->f_106;
}

bool func_188(char* sParam0, int iParam1, int iParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(iParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_189(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

void func_190(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_191(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_330(uParam0, "Passenger left car.", 9);
			}
			else if (func_201(uParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x2F23E8033F1ADDD9("TAXI_OBJ_PICKUP");
				}
				if (unk_0x0F1CCD77290EE12F())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				func_192(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_192(var uParam0, bool bParam1)
{
	func_200(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_305(uParam0, 14))
			{
				if (func_115())
				{
					func_199(1);
				}
				func_198(uParam0, 11, 1);
				func_193(uParam0, 1);
				func_298(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_179(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0))
					{
						if (func_113(uParam0, 15) > 5f)
						{
							func_298(uParam0, 15, 0f, 1);
						}
					}
					if (func_113(uParam0, 14) > 20f)
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_113(uParam0, 14) > 20f)
				{
					if (func_165(uParam0->f_4, 1) > 40f)
					{
						func_330(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
				unk_0x661342B9651D16E2(uParam0->f_8, false);
				func_197(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
				unk_0x661342B9651D16E2(uParam0->f_9, false);
				unk_0x790015DC92C918E2();
				if (func_179(uParam0))
				{
					func_230(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_197(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_194(uParam0, 0, 0);
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_10));
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 255);
				unk_0x661342B9651D16E2(uParam0->f_8, true);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0);
					unk_0x661342B9651D16E2(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
					unk_0x661342B9651D16E2(uParam0->f_9, true);
				}
			}
			unk_0x790015DC92C918E2();
		}
	}
}

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_415(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_10))
	{
		uParam0->f_10 = func_133(uParam0->f_4, 1, 0);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_10, true);
		func_195(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_230(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_195(var uParam0)
{
	func_298(uParam0, 14, 0, 0);
	func_196();
}

void func_196()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_197(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_230(uParam0, iParam3, 1, 0, 0);
		func_173(uParam1, iParam2);
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_199(int iParam0)
{
	Global_21816 = iParam0;
}

void func_200(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, joaat("weapon_stungun"), 0) || unk_0x0361981EE62202D8(iParam1, 0, 2)) || unk_0x0361981EE62202D8(iParam1, 0, 1))
				{
					func_330(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

int func_201(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_305(uParam0, 14))
			{
				func_202(uParam0);
			}
			func_193(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_202(var uParam0)
{
	func_112(uParam0, 14, 0);
	func_112(uParam0, 15, 0);
	func_204();
	if (func_203())
	{
		func_199(0);
	}
}

int func_203()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_205(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_206(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_207(), 24);
		iVar0++;
	}
	unk_0x790015DC92C918E2();
	func_49();
}

var func_207()
{
	var uVar0;
	
	return uVar0;
}

void func_208(var uParam0)
{
	uParam0->f_120 = 0;
}

float func_209(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), vParam1, bParam2);
}

void func_210()
{
	switch (iLocal_263)
	{
		case 0:
			if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0) && func_10(Local_230.f_4, Local_230.f_17, 1) < 300f)
			{
				func_225();
				iLocal_263 = 1;
			}
			break;
		
		case 1:
			if (func_223())
			{
				iLocal_263 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_302)
			{
				func_220();
				func_219();
				func_215();
				func_214();
				func_213();
				func_212();
				iLocal_263 = 3;
				bLocal_302 = true;
			}
			break;
		
		case 3:
			if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0) && func_10(Local_230.f_4, Local_230.f_17, 1) > 350f)
			{
				func_211();
				iLocal_263 = 0;
			}
			break;
	}
}

void func_211()
{
	unk_0x71199B01895C6202(iLocal_266);
	unk_0x71199B01895C6202(iLocal_267);
	unk_0x71199B01895C6202(iLocal_268);
	unk_0x71199B01895C6202(Local_247.f_19[0]);
	unk_0x71199B01895C6202(Local_247.f_19[1]);
	unk_0x71199B01895C6202(Local_247.f_32[0]);
	unk_0x71199B01895C6202(Local_247.f_32[1]);
	unk_0x71199B01895C6202(Local_247.f_32[2]);
	unk_0x71199B01895C6202(Local_247.f_32[3]);
	unk_0x71199B01895C6202(Local_257.f_32[1]);
	unk_0xDB8844D4B7C60440(iLocal_285, func_136(0));
	unk_0xDB8844D4B7C60440(iLocal_285, func_136(1));
	unk_0x8D17794CE3273D70("random@countryside_gang_fight");
	unk_0x8D17794CE3273D70(sLocal_319);
}

void func_212()
{
	iLocal_271[0] = unk_0x7707E48765093646(iLocal_266, 204.8445f, -3333.998f, 4.795367f, true, true, false);
	unk_0xA47B46945FF6DE74(iLocal_271[0], 204.8445f, -3333.998f, 4.795367f, 1, false, 0, 1);
	unk_0xC023D1C4BF532815(iLocal_271[0], -0.036243f, -0.00124f, 91.56063f, 2, 1);
	iLocal_271[1] = unk_0x7707E48765093646(iLocal_266, 212.67f, -3328.77f, 4.79f, true, true, false);
	unk_0xA47B46945FF6DE74(iLocal_271[1], 212.67f, -3328.77f, 4.79f, 1, false, 0, 1);
	unk_0xC023D1C4BF532815(iLocal_271[1], -0.04f, -0.01f, 86.36f, 2, 1);
	iLocal_271[2] = unk_0x7707E48765093646(iLocal_266, 204.8248f, -3328.631f, 4.7915f, true, true, false);
	unk_0xA47B46945FF6DE74(iLocal_271[2], 204.8248f, -3328.631f, 4.7915f, 1, false, 0, 1);
	unk_0xC023D1C4BF532815(iLocal_271[2], -0.0027f, -0.0374f, 0.1414f, 2, 1);
	iLocal_273 = unk_0x7707E48765093646(iLocal_267, 214.2505f, -3314.673f, 4.7883f, true, true, false);
	unk_0xA47B46945FF6DE74(iLocal_273, 214.2505f, -3314.673f, 4.7883f, 1, false, 0, 1);
	unk_0xC023D1C4BF532815(iLocal_273, 0f, 0f, -17.399f, 2, 1);
	if (unk_0xB87F6CF6E5628C67(iLocal_268))
	{
		iLocal_272 = unk_0x7707E48765093646(iLocal_268, 220.7266f, -3320.001f, 5.2749f, true, true, false);
		unk_0xA47B46945FF6DE74(iLocal_272, 220.7266f, -3320.001f, 5.2749f, 1, false, 0, 1);
		unk_0xC023D1C4BF532815(iLocal_272, 0f, 0f, 0f, 2, 1);
	}
}

void func_213()
{
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_274[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[3]))
	{
		iLocal_291 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 2);
		unk_0xC90224D9E95E5E3A(iLocal_291, true);
		unk_0x915804B434753CBD(Local_247.f_3[3], iLocal_291, sLocal_319, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1148846080, 0);
		unk_0x915804B434753CBD(iLocal_274[0], iLocal_291, sLocal_319, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1148846080, 0);
		unk_0x915804B434753CBD(iLocal_274[1], iLocal_291, sLocal_319, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1148846080, 0);
	}
	if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[1])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[2]))
	{
		unk_0x262EF6C6306BEA6C(Local_247.f_3[0], joaat("weapon_pistol"), -1, true, true);
		iLocal_295 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 2);
		unk_0xC90224D9E95E5E3A(iLocal_295, true);
		unk_0x915804B434753CBD(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
		unk_0x915804B434753CBD(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
		unk_0x915804B434753CBD(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0;
	func_8(&(Local_230.f_244), 4, Local_247.f_3[1], "TaxiDom", 0, 1);
	func_8(&(Local_230.f_244), 5, Local_247.f_3[3], "TaxiGangM", 0, 1);
	unk_0x4F39CC3882DD074E(Local_247.f_3[1], "TaxiDom");
	unk_0x4F39CC3882DD074E(Local_247.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		unk_0x6D80F1AEBA734886(Local_247.f_3[iVar0], unk_0x09AC81E49EA267F7(20, 50));
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 2, true);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 13, true);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 1, false);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 3, true);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 37, true);
		unk_0x4E885A246A9D983A(Local_247.f_3[iVar0], 42, true);
		unk_0x9FA191B317572861(Local_247.f_3[iVar0], 300f);
		unk_0x967762C930C0C5FD(Local_247.f_3[iVar0], 300f);
		unk_0xA656189732A3FF4B(Local_247.f_3[iVar0], 300f);
		unk_0x11AD11297DC58CC7(Local_247.f_3[iVar0], false);
		unk_0x298903DD96203C2C(Local_247.f_3[iVar0], 1);
		iVar0++;
	}
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[0], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[1], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[2], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[3], iLocal_262);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		unk_0x4E885A246A9D983A(iLocal_274[iVar0], 42, true);
		unk_0x9FA191B317572861(iLocal_274[iVar0], 100f);
		unk_0x967762C930C0C5FD(iLocal_274[iVar0], 100f);
		unk_0xA656189732A3FF4B(iLocal_274[iVar0], 100f);
		unk_0x11AD11297DC58CC7(iLocal_274[iVar0], true);
		iVar0++;
	}
	func_8(&(Local_230.f_244), 7, iLocal_274[1], "TaxiGangGirl2", 0, 1);
	func_8(&(Local_230.f_244), 8, iLocal_274[0], "TaxiGangGirl1", 0, 1);
	unk_0x4F39CC3882DD074E(iLocal_274[1], "TaxiGangGirl2");
	unk_0x4F39CC3882DD074E(iLocal_274[0], "TaxiGangGirl1");
}

void func_215()
{
	Local_247.f_3[0] = unk_0x36F2404464202779(26, Local_247.f_19[0], func_218(1), func_217(1), 1, true);
	Local_247.f_3[1] = unk_0x36F2404464202779(26, Local_247.f_19[0], func_216(2), 0f, 1, true);
	Local_247.f_3[2] = unk_0x36F2404464202779(26, Local_247.f_19[0], func_218(3), func_217(3), 1, true);
	Local_247.f_3[3] = unk_0x36F2404464202779(26, Local_247.f_19[0], func_218(4), func_217(4), 1, true);
	unk_0x4E885A246A9D983A(Local_247.f_3[1], 20, true);
	iLocal_274[0] = unk_0x36F2404464202779(26, Local_247.f_19[1], func_218(5), func_217(5), 1, true);
	iLocal_274[1] = unk_0x36F2404464202779(26, Local_247.f_19[1], func_218(6), func_217(6), 1, true);
	unk_0x25C5402CC10F76CD(iLocal_274[0], false);
	unk_0x25C5402CC10F76CD(iLocal_274[1], false);
	if (!unk_0x437347B10A200C4B(Local_247.f_3[0], 0))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0], 0, 1, 1, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0], 3, 0, 5, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0], 4, 0, 2, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0], 10, 0, 0, 0);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[1], 0))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[1], 0, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[1], 3, 0, 0, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[1], 4, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[1], 10, 0, 1, 0);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[2], 0))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[2], 0, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[2], 3, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[2], 4, 1, 2, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[2], 10, 1, 0, 0);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[3], 0))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[3], 0, 0, 2, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[3], 3, 1, 1, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[3], 4, 0, 2, 0);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		
		case 2:
			return -129.32f;
			break;
		
		case 3:
			return 39.53f;
			break;
		
		case 4:
			return -139.98f;
			break;
		
		case 5:
			return 147.25f;
			break;
		
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_219()
{
	unk_0x611DFA9294B339CA(Local_247.f_27[2], 5, 0, false);
	unk_0x611DFA9294B339CA(Local_247.f_27[3], 5, 0, false);
}

void func_220()
{
	Local_247.f_27[0] = unk_0x122AAB0B1D6F55AD(Local_247.f_32[0], func_222(1), func_221(1), true, true, false);
	Local_247.f_27[1] = unk_0x122AAB0B1D6F55AD(Local_247.f_32[1], func_222(2), func_221(2), true, true, false);
	Local_247.f_27[2] = unk_0x122AAB0B1D6F55AD(Local_247.f_32[3], func_222(3), func_221(3), true, true, false);
	Local_247.f_27[3] = unk_0x122AAB0B1D6F55AD(Local_247.f_32[3], func_222(4), func_221(4), true, true, false);
	iLocal_276 = unk_0x122AAB0B1D6F55AD(Local_247.f_32[2], func_222(5), func_221(5), true, true, false);
	unk_0x55A3C4ED4728EA42(Local_247.f_27[2], "NikoB");
	unk_0x55A3C4ED4728EA42(Local_247.f_27[3], "RomanB");
}

float func_221(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		
		case 2:
			return 33.5561f;
			break;
		
		case 3:
			return 87.9127f;
			break;
		
		case 4:
			return 195.38f;
			break;
		
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_222(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_223()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_266))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_267))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_19[0]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_19[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_32[0]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_32[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_32[2]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_32[3]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_257.f_32[1]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0x3DDA6C6A285628E4(iLocal_285, func_136(0)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0x3DDA6C6A285628E4(iLocal_285, func_136(1)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("random@countryside_gang_fight"))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752(sLocal_319))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_268))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_281, 1000);
	}
	return 1;
}

void func_224(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_225()
{
	unk_0x523BCC9DC80CD82F(iLocal_266);
	unk_0x523BCC9DC80CD82F(iLocal_267);
	unk_0x523BCC9DC80CD82F(iLocal_268);
	unk_0x523BCC9DC80CD82F(Local_247.f_19[0]);
	unk_0x523BCC9DC80CD82F(Local_247.f_19[1]);
	unk_0x523BCC9DC80CD82F(Local_247.f_32[0]);
	unk_0x523BCC9DC80CD82F(Local_247.f_32[1]);
	unk_0x523BCC9DC80CD82F(Local_247.f_32[2]);
	unk_0x523BCC9DC80CD82F(Local_247.f_32[3]);
	unk_0x523BCC9DC80CD82F(Local_257.f_32[1]);
	unk_0x36187931D29E5BBE(iLocal_285, func_136(0));
	unk_0x36187931D29E5BBE(iLocal_285, func_136(1));
	unk_0x3F423BF5B8125A50("random@countryside_gang_fight");
	unk_0x3F423BF5B8125A50(sLocal_319);
}

void func_226()
{
	func_173(&(Local_230.f_55), 2);
	func_173(&(Local_230.f_55), 4);
	func_173(&(Local_230.f_55), 16);
	func_173(&(Local_230.f_55), 64);
	func_173(&(Local_230.f_55), 256);
	func_173(&(Local_230.f_55), 512);
	func_173(&(Local_230.f_55), 1024);
	func_173(&(Local_230.f_55), 2048);
	func_173(&(Local_230.f_55), 4096);
	func_173(&(Local_230.f_55), 1073741824);
	func_173(&(Local_230.f_100), 8);
	func_173(&(Local_230.f_100), 2048);
	func_173(&(Local_230.f_100), 256);
	func_173(&uLocal_380, 2);
}

void func_227(var uParam0)
{
	func_228(uParam0, 1000);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
	}
	func_159();
	func_202(uParam0);
}

void func_228(var uParam0, int iParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0xB3A1B75CB59FEB56(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
}

void func_229(int iParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	func_228(iParam0, 1000);
}

void func_230(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_298(iParam0, 16, 4f, 0);
		if (func_231(iParam0))
		{
			func_49();
		}
	}
	func_261(iParam0, iParam2, bParam3);
}

int func_231(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_115())
	{
		Var1 = { func_233() };
		if (!unk_0xEA6BC48857E0AC4C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_232(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_232(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_233()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_234(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if ((unk_0x81A5359F25512A04(iParam0->f_3) && (unk_0x1C0640BA9A7327B3() - iLocal_81) > 500) || unk_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_235(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!unk_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			func_192(iParam0, 1);
			if (func_33())
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
			}
			if (unk_0xD1960163A3042274(iParam0->f_3, 2106541073) == 1 || unk_0xD1960163A3042274(iParam0->f_3, 2106541073) == 0)
			{
				unk_0x327AAEE25F323797(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_79 = 0;
				unk_0xF96A174EE26D7588(iParam0->f_3, unk_0x16F2683693E537C9(), 0);
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			func_260(iParam0);
			if (iParam0->f_48 > 1)
			{
				unk_0xF82EA857DA10E0CD(&iVar3);
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x96167B03C5A77156(0, iParam0->f_11, iParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0xF96A174EE26D7588(0, iParam0->f_4, 0);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_305(iParam0, 14))
			{
				func_202(iParam0);
				func_193(iParam0, 0);
			}
			if (func_305(iParam0, 9))
			{
				func_112(iParam0, 9, 0);
				unk_0x790015DC92C918E2();
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_8))
				{
					unk_0x7F010F50CE03A8AF(iParam0->f_8, 255);
					unk_0x661342B9651D16E2(iParam0->f_8, true);
				}
			}
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0))
			{
				fVar4 = ((unk_0x9C66D99E63E8E24C(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_259(iParam0, iParam0->f_3) > 300f)
				{
					func_330(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (unk_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 || ((func_172(unk_0x16F2683693E537C9(), iParam0->f_3, 1) < 20f && func_10(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_10(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_256(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_255(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_86)
							{
								iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
								iVar0 = func_253(iParam0, &iVar1);
								if (!unk_0x437347B10A200C4B(iVar0, 0))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0x75CDA8644CD3B5F5(iVar0, 0, iVar2);
									}
									else
									{
										unk_0x75CDA8644CD3B5F5(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (unk_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!unk_0x437347B10A200C4B(iVar0, 0))
											{
												unk_0x75CDA8644CD3B5F5(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xA3BF0AA5A2608191(iParam0->f_3);
							unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_163(iParam0))
							{
								unk_0xA3BF0AA5A2608191(iParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 && unk_0xD1960163A3042274(iParam0->f_3, 242628503) != 0) && unk_0xD1960163A3042274(iParam0->f_3, 242628503) != 7) && func_259(iParam0, iParam0->f_3) > 8f)
							{
								unk_0xF82EA857DA10E0CD(&(iParam0->f_243));
								unk_0xDD353D0E9C789D0E(&(iParam0->f_243));
								unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
								if (iParam0->f_411 != 9)
								{
									unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x75ABDC5F81978924(iParam0->f_243);
								unk_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
							}
							if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x8352CA08CF578D18(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_172(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_252(iParam0, 1))
								{
									unk_0x327AAEE25F323797(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_251(iParam0->f_4))
								{
									unk_0x327AAEE25F323797(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_249(iParam0);
						if (func_259(iParam0, iParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
							{
								if (func_237(iParam0))
								{
									func_236(iParam0);
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(iParam0->f_3, 26, true);
									func_112(iParam0, 5, 0);
									unk_0x0DC19E268D45C03F();
									unk_0x893A626C476B583D(iParam0->f_428, &(iParam0->f_42), -1);
									unk_0x7D732AB707BE9152(iParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_236(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		unk_0x661342B9651D16E2(iParam0->f_8, false);
		unk_0x142CC44DB769B57E(&(iParam0->f_8));
	}
}

int func_237(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_224("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar6 = -1;
	if (!unk_0x437347B10A200C4B(iParam0->f_3, 0) && !unk_0x437347B10A200C4B(iParam0->f_4, 0))
	{
		func_248();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_246(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_168(iParam0, 0, 1084227584) && func_176(1, 1, 1))
			{
				if (func_252(iParam0, 1))
				{
					iLocal_80 = unk_0x1C0640BA9A7327B3();
					settimera(0);
					iLocal_78 = 1;
				}
				else
				{
					func_330(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (timera() > 500)
			{
				iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
				iVar3 = func_253(iParam0, &iVar4);
				if (!unk_0x437347B10A200C4B(iVar3, 0))
				{
					if (iVar4 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						unk_0x75CDA8644CD3B5F5(iVar3, 0, iVar5);
					}
					else
					{
						unk_0x75CDA8644CD3B5F5(iVar3, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (unk_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
					{
						iParam0->f_7 = 0;
						if (!unk_0x437347B10A200C4B(iVar3, 0))
						{
							unk_0x75CDA8644CD3B5F5(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (iParam0->f_7 == 0)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_245(&(iParam0->f_409), unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0f, 2.2f, 0.275f), unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 2)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_244(0, 0, 1);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(iParam0->f_4, true), 3f, 0);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(iParam0->f_4, true), 25f, 0);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_120();
				func_261(iParam0, 0, 0);
				vVar7 = { unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar2) };
				unk_0xA47B46945FF6DE74(iParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iParam0->f_3, func_242(iParam0));
				func_241(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x608A456FDD8A83D8(*iParam0, unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0));
				unk_0x1305278186D1C53E(*iParam0, iParam0->f_4, vVar1, 1);
				unk_0xE3BB8E05FCEB3FBE(*iParam0, true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				unk_0xF895E10BF4C72645(iParam0->f_3, 0, 0);
				unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_224("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (timera() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0) && !unk_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (!unk_0x405E212DDE472467(iParam0->f_3, 0))
				{
					unk_0xF821F915BC24D246(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					unk_0x152BCACCF710B36E(iParam0->f_4, func_240(iParam0->f_7), 1);
				}
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				unk_0x9A8DDC7C522F5BF5(*iParam0, 0);
				unk_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x82E51BCA72537B6C(800);
				unk_0xA37A90C62806D848(1);
				unk_0x790015DC92C918E2();
				func_120();
				func_261(iParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_238(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			unk_0x9A8DDC7C522F5BF5(*iParam0, 0);
			unk_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			func_238(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0) && !unk_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (unk_0x81A5359F25512A04(iParam0->f_3) || unk_0x405E212DDE472467(iParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -1794415470) != 0)
				{
					unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_238(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_23(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_239(23, 0);
}

void func_239(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31015, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31015, iParam0);
	}
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_241(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!unk_0x9F4FE516EAACCFC5(*iParam0))
	{
		*iParam0 = unk_0xAE06CCC36C49929C(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_242(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_41() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_243(unk_0x68F4C0EC296D3901(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_243(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_42(0);
	func_23(1, 1, iParam2, 0, 0, 0);
	unk_0xBFE31971E49FA500(false);
	unk_0x8BCB70EB440DED83(false);
	func_239(23, 1);
}

int func_245(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_246(int iParam0)
{
	if (func_247() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(500);
		while (!unk_0x757EF87A33649210())
		{
			wait(0);
		}
		func_42(0);
		func_159();
		return 1;
	}
	return 0;
}

int func_247()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_248()
{
	if (func_35())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_34())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_44(1))
	{
		func_42(0);
	}
}

void func_249(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_165(uParam0->f_3, 1) > 30f || func_250(uParam0))
			{
				if (unk_0xD1960163A3042274(uParam0->f_3, -1794415470) == 1 || unk_0xD1960163A3042274(uParam0->f_3, 242628503) == 1)
				{
					unk_0xF82EA857DA10E0CD(&iVar0);
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0xF96A174EE26D7588(0, uParam0->f_4, 0);
					unk_0xC6EB89C59F2AF6B8(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x96167B03C5A77156(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
					func_330(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_250(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_113(uParam0, 5) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x464B3D84B739AE72(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x1150BCE24B1630AC(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_252(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xA30B8362589C124A(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0xA30B8362589C124A(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0xA30B8362589C124A(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar1]))
			{
				if (unk_0x437347B10A200C4B(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_253(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 1, 0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 2, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xD6DF381716822EFE(iParam0);
	vVar0 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iParam1, true)) };
	if (unk_0x134B62B726CEC8E6(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_255(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_165(uParam0->f_3, 1) < fParam2)
		{
			if (!func_305(uParam0, 5))
			{
				func_298(uParam0, 5, 0, 0);
			}
		}
		else if (func_305(uParam0, 5))
		{
			func_112(uParam0, 5, 0);
		}
		if (((func_113(uParam0, 5) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_165(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		vVar2 = { unk_0xBF584557291FDD31(uParam0->f_4, iVar8) };
		vVar2 = { unk_0x5293C88BD2F4DE13(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x4ADCCF23C40DC113(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x11AD11297DC58CC7(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_172(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0xCD02F8660C47B801(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = unk_0x1EC301670B54C6DE(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 1 && unk_0xD1960163A3042274(uParam0->f_3, 242628503) != 0)
			{
				unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
				unk_0xDD353D0E9C789D0E(&(uParam0->f_243));
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x25644C31B4B6E9F3(uParam0->f_243, 1);
				unk_0x75ABDC5F81978924(uParam0->f_243);
				unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x790015DC92C918E2();
			if (uParam0->f_411 != 9)
			{
				if (!func_22(uParam0->f_44, 128))
				{
					func_230(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_257(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0x0C8C0C840C2D1AD2(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
			unk_0x75ABDC5F81978924(uParam0->f_243);
			unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_243);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x8352CA08CF578D18(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_257(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_258(iParam3), 0);
}

int func_258(int iParam0)
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

float func_259(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		if (func_163(uParam0))
		{
			return func_172(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_260(var uParam0)
{
	func_200(uParam0, uParam0->f_3);
	if (func_163(uParam0))
	{
		if (func_305(uParam0, 14))
		{
			func_202(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_10));
			}
		}
	}
	if (!func_305(uParam0, 9))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0);
			unk_0x661342B9651D16E2(uParam0->f_8, false);
		}
		func_298(uParam0, 9, 0, 0);
		func_158("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_261(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_49();
		func_298(iParam0, 16, 4f, 0);
		unk_0x790015DC92C918E2();
	}
}

int func_262(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		return 0;
	}
	func_266(12);
	if (func_22(uParam0->f_44, 8))
	{
		if (!func_22(uParam0->f_44, 128))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_22(uParam0->f_44, 256))
			{
				func_173(&(uParam0->f_44), 256);
			}
			if (func_22(uParam0->f_44, 256) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_230(uParam0, 135, 1, 0, 1);
				func_173(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_265(uParam0, iParam1))
	{
		if (func_165(uParam0->f_3, 1) < 35f)
		{
			if (!func_22(uParam0->f_44, 8))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0);
				func_230(uParam0, 133, 1, 0, 1);
				func_173(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_165(uParam0->f_3, 1) > 400f)
		{
			func_330(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, true);
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_263(uParam0);
			func_51(2, 0);
			bLocal_86 = true;
			func_114(&iLocal_82);
			return 1;
		}
		else
		{
			func_330(uParam0, "No Taxi", 21);
			func_162("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_263(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (func_264())
		{
		}
	}
}

int func_264()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				bVar2 = func_251(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x8E39AC3C76C8AA58(iVar1))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0xD6DF381716822EFE(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(uParam0->f_44, 64))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_162("TX_VIP_DMGD", -1);
							if (func_161("TX_VIP_DMGD"))
							{
								func_173(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_44, 32))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_162("TX_VIP_CAR", -1);
							if (func_161("TX_VIP_CAR"))
							{
								func_173(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_44, 16))
					{
						if (unk_0x67C1D9E5B91B2E37(2))
						{
							func_162("TX_VIP_SMALL", -1);
							if (func_161("TX_VIP_SMALL"))
							{
								func_173(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_124(&(uParam0->f_44), 16);
			func_124(&(uParam0->f_44), 64);
			func_124(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_266(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(8, &uVar0, 1, 1);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_125(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_268()
{
	Local_165 = 0;
	func_285(47910, 47885, 1);
	func_285(47646, 47623, 1);
	func_285(47561, 47536, 1);
	func_285(47464, 47440, 1);
	func_285(47330, 47309, 1);
	func_285(47256, 47231, 1);
	func_285(47089, 47066, 1);
}

int func_269(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_270(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_272(uParam0->f_4))
		{
			func_271(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_272(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0, 40000) || unk_0x7B5606C651AB51B5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_273(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_274(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		if (func_275(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_271(uParam0, 11);
	return 1;
}

int func_277(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(iParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			if (!func_305(iParam0, 25))
			{
				func_298(iParam0, 25, 0, 0);
			}
			else if (func_113(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_305(iParam0, 25))
		{
			func_112(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_278(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_279(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (unk_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (unk_0x7B5606C651AB51B5(uParam0->f_4, 0, 40000) || unk_0x7B5606C651AB51B5(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_281(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_275(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_282(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_283(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_271(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) == 0f)
	{
		if (!unk_0xDF1306B443CD3D15(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0, 40000) || unk_0x7B5606C651AB51B5(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_167(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_167(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_286(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_287(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0x437347B10A200C4B(uParam0->f_3, 0)) || unk_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_288(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x5D96D8530B3D0904(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_289(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_291()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_265))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_281, 1000);
		return 0;
	}
	if (!unk_0x83D8570832F172A7(iLocal_387))
	{
		return 0;
	}
	if (!func_292(&iLocal_281, 1))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_281, 1000);
		return 0;
	}
	return 1;
}

int func_292(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_21()))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x67C1D9E5B91B2E37(2))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_293(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_294(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_295(uParam0->f_3, 0, 0);
		unk_0x138116A08F9AC5F4(1, 0f);
		unk_0x661342B9651D16E2(uParam0->f_8, true);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), -1, 2048, 4);
	}
	return 1;
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

int func_296(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_297(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_39(uParam0->f_14, 0);
		unk_0x745CE398A4B0A3C6(uParam0->f_14, 2f, 0);
		func_37(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = unk_0x852B8A2DB29D2288(uParam0->f_11);
		}
		else if (unk_0xC844350D5D58C99A(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			unk_0x73270B3C9CC833FD(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x36F2404464202779(26, iParam4, uParam0->f_11, fParam5, 1, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		unk_0x4F39CC3882DD074E(uParam0->f_3, sParam3);
		unk_0x9DD8618CA5BF832D(uParam0->f_3, 112, true);
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			unk_0x25BD67336EA4AECE(uParam0->f_3, 250);
			unk_0x4E885A246A9D983A(uParam0->f_3, 32, false);
			unk_0x4E885A246A9D983A(uParam0->f_3, 104, true);
			unk_0x4E885A246A9D983A(uParam0->f_3, 177, true);
			unk_0x4E885A246A9D983A(uParam0->f_3, 116, false);
			unk_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_413));
			unk_0x0E2400AB9174FA81(1, uParam0->f_413, 1862763509);
			unk_0x0E2400AB9174FA81(2, uParam0->f_413, -1533126372);
			unk_0x6DF7BF67E86AAE86(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0);
}

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_106(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_105(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_106(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_105(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_299()
{
	unk_0x523BCC9DC80CD82F(iLocal_265);
	func_301(1);
	iLocal_387 = func_300();
}

int func_300()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_21());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 2);
	if (!func_22(Global_111638.f_19092, 128))
	{
		func_173(&(Global_111638.f_19092), 128);
	}
}

void func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			unk_0x327AAEE25F323797((*iParam0)[iVar0]);
			unk_0xBAFED2F6486F771A((*iParam0)[iVar0], 13, true);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(1, 1000));
			unk_0xF3268524E9BE6D6E(0, Local_230.f_3, 4000f, -1, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54((*iParam0)[iVar0], iLocal_270);
			unk_0xFADC0A217229F6B5((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x0E2400AB9174FA81(5, iLocal_262, 1862763509);
	unk_0x0E2400AB9174FA81(5, iLocal_262, Local_230.f_413);
	unk_0x0E2400AB9174FA81(5, iLocal_262, -1533126372);
	unk_0x0E2400AB9174FA81(5, -1533126372, iLocal_262);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			unk_0xA3BF0AA5A2608191((*uParam0)[iVar0]);
			unk_0xCAE036C45E7FC720((*uParam0)[iVar0], &iVar1, 1);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				unk_0x262EF6C6306BEA6C((*uParam0)[iVar0], joaat("weapon_pistol"), -1, false, true);
			}
			unk_0x298903DD96203C2C((*uParam0)[iVar0], 30);
			unk_0x7C8478BF70C1E072((*uParam0)[iVar0], 1000f, 0);
			unk_0xFADC0A217229F6B5((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_304(int iParam0, int iParam1)
{
	func_114(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_305(int iParam0, int iParam1)
{
	return func_16(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_306(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			if (bParam2)
			{
				if (func_113(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_230(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_230(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_298(uParam0, 10, 0f, 1);
				}
			}
			else if (func_113(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_230(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_230(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_113(uParam0, 10) > 30f)
		{
			if (!func_115())
			{
				if (uParam0->f_112)
				{
					func_230(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_230(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_298(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_114(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_329(uParam0))
			{
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(5, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_114(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_328(uParam0, 1);
				func_326(0, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_114(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_328(uParam0, 1);
				func_326(1, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_114(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_103(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_322(uParam0))
			{
				func_328(uParam0, 1);
				func_326(8, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_114(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_328(uParam0, 1);
				func_326(6, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_114(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_320(uParam0))
			{
				func_328(uParam0, 1);
				func_326(4, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_114(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_319(uParam0))
			{
				func_326(7, uParam0);
				func_328(uParam0, 1);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_114(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_103(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_328(uParam0, 1);
				func_326(9, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_114(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_312(uParam0))
			{
				func_328(uParam0, 1);
				func_326(13, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_114(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_311(uParam0))
			{
				func_328(uParam0, 1);
				func_326(14, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_114(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_310(uParam0))
			{
				func_328(uParam0, 1);
				func_326(11, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_114(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_328(uParam0, 1);
				func_326(12, uParam0);
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_308(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_103(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_328(uParam0, 1);
				func_326(2, uParam0);
				func_325(uParam0);
			}
		}
	}
}

int func_307(var uParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_114(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_103(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_102(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_102(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_308(int iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_106(iParam0, fParam1);
	}
}

int func_309(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_114(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_114(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_103(&(Local_162[11 /*10*/].f_3)) < 1.5f && (unk_0x755FF954DAE327E1(fLocal_164) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_102(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_103(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_102(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_172(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0) && !unk_0xBBA8A868118C90ED(uParam0->f_5, -1, 0)))
				{
					func_114(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_103(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_172(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_103(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_102(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_313(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_114(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_313(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	unk_0x48C17E97DDC41CBC(vVar0, -1, &vVar2);
	fVar9 = vmag(vVar2 - vVar0);
	vVar3 = { func_317((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_316(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_314(unk_0x68F4C0EC296D3901(iParam0, true), vVar5, vVar6, vVar7);
}

int func_314(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_317(vParam2 - vParam1) };
	vVar1 = { func_317(vParam3 - vParam1) };
	fVar2 = func_315(vParam0, vVar0);
	fVar3 = func_315(vParam1, vVar0);
	fVar4 = func_315(vParam2, vVar0);
	fVar5 = func_315(vParam0, vVar1);
	fVar6 = func_315(vParam1, vVar1);
	fVar7 = func_315(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_315(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_316(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_317(vector3 vParam0)
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

int func_318(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (unk_0x377BE9A1BF38C7CE(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0xCE563465D2227DD6(uParam0->f_4) <= -145f || unk_0xCE563465D2227DD6(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0xCE563465D2227DD6(uParam0->f_4) <= 35f && unk_0xCE563465D2227DD6(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_114(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_102(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_114(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0xE608C809F9416F00(uParam0->f_4))
		{
			iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0xE910A68AA670B4AA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_230(uParam0, 72, 1, 0, 1);
				}
				func_102(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 1) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_114(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_102(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_114(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_102(&(Local_162[0 /*10*/].f_3));
				func_105(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_105(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_298(uParam0, 10, 0f, 1);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_326(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_327(uParam1, iParam0);
	func_102(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_327(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_328(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_329(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_114(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_102(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_330(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_159();
	func_435(2);
	vVar0 = { func_160() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_115()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(1);
		StringCopy(&vVar0, iParam0->f_143, 24);
		if (!unk_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (!func_179(iParam0))
			{
				if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_298(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_179(iParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iParam0->f_4))
				{
					func_333(iParam0, 4096, 0);
				}
				else
				{
					func_333(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_336(iParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_336(iParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_333(iParam0, 0, 0);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_332(&vVar0);
			func_331(&(iParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_336(iParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_298(iParam0, 3, 0f, 1);
	}
}

int func_331(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_142(sParam2, iParam3, 0);
}

void func_332(char* sParam0)
{
	switch (func_3(unk_0x16F2683693E537C9()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_333(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, false);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 3, false);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 17, true);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_209(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_335(uParam0->f_29)) && !bParam2)
		{
			func_334(uParam0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(uParam0->f_3, 1024, true);
			unk_0xBAFED2F6486F771A(uParam0->f_3, 131072, true);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			}
			unk_0xD93EE6549113F9E1(0, 0);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, true);
	}
}

void func_334(var uParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_40(func_41(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 84.9058f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 68.3138f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, true);
			}
			else
			{
				unk_0x01E4BB5190DF7317(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0xF82EA857DA10E0CD(&iVar0);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0, 0, 0);
			unk_0xD93EE6549113F9E1(0, 0);
			unk_0x96167B03C5A77156(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x91CF687749AD9691(0, 1);
				unk_0x96167B03C5A77156(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xE655C47E46F9A7E4(0, 151.7794f, 0);
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 20000);
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x4742C50E93110B10(uParam0->f_29, 15f, 1))
			{
				unk_0x4A35AD9FC803369E(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			}
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, true);
	}
}

int func_335(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0, char* sParam1)
{
	if (func_337(uParam0))
	{
		func_331(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_337(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (func_172(unk_0x16F2683693E537C9(), uParam0->f_3, 1) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(var uParam0)
{
	return uParam0->f_118;
}

void func_339()
{
	func_371(&Local_230);
	if (func_370(&Local_230, &Local_336))
	{
		switch (Local_336.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (!func_369(&Local_230))
					{
						if (func_368("TX_OBJ_GYB_DO") || unk_0xE4EDC4B0E92C078B(Local_230.f_9))
						{
							Local_336.f_27++;
						}
						else if (func_367(&Local_230) != 10)
						{
							func_230(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_367(&Local_230) > 10 && func_367(&Local_230) != 15) && !func_369(&Local_230))
				{
					func_230(&Local_230, 15, 1, 0, 0);
					if (bLocal_335)
					{
					}
					func_304(&Local_230, 7);
				}
				break;
			
			case 2:
				if (((func_367(&Local_230) != 16 && !func_369(&Local_230)) && func_113(&Local_230, 18) > 2f) && !func_115())
				{
					func_230(&Local_230, 16, 1, 0, 0);
					if (bLocal_335)
					{
					}
				}
				break;
			
			case 3:
				if (func_113(&Local_230, 18) > unk_0x79833B02DBD2A244(2f, 7f))
				{
					if (!func_183(&Local_230))
					{
						func_366(&Local_230, 0);
						Local_336.f_27++;
						if (bLocal_335)
						{
						}
					}
				}
				break;
			}
	}
	func_340(&Local_230, &uLocal_339, &Local_336, bLocal_335);
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_348(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_305(uParam0, 2))
	{
		if (func_347(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_346(uParam0))
				{
					uParam2->f_7 = { func_345(uParam1) };
					func_331(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_115())
				{
					uParam2->f_13 = { func_233() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_167(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_186(uParam0))
				{
					if (func_115())
					{
						func_298(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_342() };
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_115())
				{
					uParam2->f_19 = { func_160() };
				}
				else
				{
					func_167(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_305(uParam0, 14) && !func_115()) && !func_186(uParam0)) && func_113(uParam0, 18) > 1f)
				{
					func_298(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_115())
				{
					if (func_113(uParam0, 18) > 1f)
					{
						if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_115())
				{
					func_167(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_343(uParam1);
					func_298(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_142(sParam2, iParam4, 0);
}

struct<6> func_342()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_21815);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar2 /*6*/])))
			{
				return Global_19673[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_19673[iVar3 /*6*/])))
					{
						return Global_19673[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_19673[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_343(var uParam0)
{
	int iVar0;
	
	iVar0 = func_344(uParam0);
	if (iVar0 > -1)
	{
		func_124(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_124(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_173(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_207(), 24);
	}
}

int func_344(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_345(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_173(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_346(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_188("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_188("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_188("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_188("TX_OBJ_GYB_DO", 0, 0) || func_188("TAXI_OBJ_GYB", 0, 0)) || func_188("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_188("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_188("TX_OBJ_CYI_DO", 0, 0) || func_188("TAXI_OBJ_CYI_01", 0, 0)) || func_188("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_188("TX_OBJ_GYN_DO", 0, 0) || func_188("TAXI_OBJ_GYN", 0, 0)) || func_188("TAXI_OBJ_GYN_TG", 0, 0)) || func_188("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_188("TAXI_OBJ_CC1", 0, 0) || func_188("TAXI_OBJ_CC2", 0, 0)) || func_188("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_188("TAXI_OBJ_FTC1", 0, 0) || func_188("TAXI_OBJ_FTC2", 0, 0)) || func_188("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_188("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_188("TAXI_OBJ_GETRUN", 0, 0) || func_188("TAXI_OBJ_DRIVE", 0, 0)) || func_188("TAXI_OBJ_RETURN", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0)) || func_188("TAXI_OBJ_RUNOUT", 0, 0)) || func_188("TAXI_OBJ_POL", 0, 0));
}

int func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_348(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_346(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_305(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_367(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_115())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_363(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 2));
				}
				if (func_22(uParam0->f_98, 4))
				{
					func_298(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				func_197(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_113(uParam0, 16) > 1f)
				{
					func_199(1);
					if (uParam0->f_411 == 9)
					{
						func_158("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_158("TAXI_VIP_RETURN", 7500, 1);
					}
					func_298(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_113(uParam0, 16) > func_134(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_115()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_367(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_363(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_364(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_331(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_230(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_298(uParam0, 16, 0, 0);
				func_230(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_22(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_365(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_363(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_298(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_158("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_158("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_230(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_232(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_257(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_17, 1);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 255);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_17);
						unk_0x661342B9651D16E2(uParam0->f_9, true);
					}
				}
				func_230(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_358(uParam0, 33554432, vVar0, "", 1, 8);
				func_298(uParam0, 16, 0, 0);
				func_230(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_115())
				{
					func_357(uParam0, 0);
					func_173(&(uParam0->f_44), 4);
					func_298(uParam0, 16, 0, 0);
					func_230(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_113(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_232(&vVar0);
					}
					func_355(vVar0, uParam1);
					func_173(&(uParam0->f_81), 67108864);
					func_298(uParam0, 16, 0, 0);
					func_298(uParam0, 11, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_113(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_232(&vVar0);
						}
					}
					func_355(vVar0, uParam1);
					func_298(uParam0, 11, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_232(&vVar0);
				}
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				func_173(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_354(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_355(vVar0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_354(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_354(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_355(vVar0, uParam1);
				func_364(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 6, 0f, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 12:
				func_158("TAXI_OBJ_GYB", 3500, 1);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_158("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_158("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_158("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_22(uParam0->f_98, 268435456))
				{
					func_158("TAXI_OBJ_CYI_01", 7500, 1);
					func_173(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 33:
				func_158("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_22(uParam0->f_82, 8192))
				{
					if (func_113(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_232(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_355(vVar0, uParam1);
						}
						else
						{
							func_363(uParam0, &vVar0, 0, 0, 8);
						}
						func_173(&(uParam0->f_82), 8192);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_22(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_232(&vVar0);
					func_363(uParam0, &vVar0, 0, 0, 8);
					func_173(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_22(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_232(&vVar0);
					func_363(uParam0, &vVar0, 0, 0, 8);
					func_173(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_261(uParam0, 0, 0);
				break;
			
			case 139:
				func_158("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_230(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0, 120);
				if (!func_22(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_173(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0, 100);
				if (!func_22(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_173(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_158("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_261(uParam0, 0, 0);
				func_230(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_115())
				{
					func_158("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_261(uParam0, 0, 0);
					func_230(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_158("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_261(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_22(uParam0->f_81, 1))
				{
					func_353(uParam0, 1, vVar0, "_sick1", 8);
					func_124(&(uParam0->f_81), 2);
				}
				else if (!func_22(uParam0->f_81, 2))
				{
					func_353(uParam0, 2, vVar0, "_sick2", 8);
					func_124(&(uParam0->f_81), 1);
				}
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_22(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_22(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_173(&(uParam0->f_81), 2097152);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_298(uParam0, 16, 0, 0);
				func_364(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_364(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_364(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_364(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_22(uParam0->f_81, 4))
				{
					func_353(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_22(uParam0->f_81, 8))
				{
					func_353(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_353(uParam0, 8, vVar0, "_turns3", 8);
					func_124(&(uParam0->f_81), 4);
					func_124(&(uParam0->f_81), 8);
				}
				func_364(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_331(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_365(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_365(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_364(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_22(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 128);
					func_124(&(uParam0->f_83), 256);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 256);
					func_124(&(uParam0->f_83), 512);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 512);
					func_124(&(uParam0->f_83), 128);
					func_298(uParam0, 16, 0, 0);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 1);
					func_124(&(uParam0->f_83), 2);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_124(&(uParam0->f_83), 4);
					}
					else
					{
						func_124(&(uParam0->f_83), 1);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 4);
					func_124(&(uParam0->f_83), 1);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 4096))
				{
					func_358(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 8192))
				{
					func_358(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_364(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_22(uParam0->f_81, 16384))
				{
					func_358(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_22(uParam0->f_81, 32768))
				{
					func_358(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_364(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_22(uParam0->f_82, 8))
					{
						func_351(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 16))
					{
						func_351(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_22(uParam0->f_82, 32))
					{
						func_351(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_261(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_298(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_364(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_364(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_22(uParam0->f_81, 65536))
				{
					func_358(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 131072))
				{
					func_358(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_22(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 8);
					func_124(&(uParam0->f_83), 16);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 16);
					func_124(&(uParam0->f_83), 32);
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_124(&(uParam0->f_83), 64);
					}
					else
					{
						func_124(&(uParam0->f_83), 8);
					}
					func_298(uParam0, 16, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 64);
					func_124(&(uParam0->f_83), 8);
					func_298(uParam0, 16, 0, 0);
				}
				func_364(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_115())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_363(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 65));
					func_261(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_115())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_363(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 66));
					func_261(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_115())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								func_364(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								func_364(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_365(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_364(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_298(uParam0, 16, 0, 0);
								func_261(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_363(uParam0, &vVar0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_261(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_232(&vVar0);
									func_363(uParam0, &vVar0, 0, 0, 8);
									func_298(uParam0, 16, 0, 0);
									func_298(uParam0, 11, 0, 0);
									func_261(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_363(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_230(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_364(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_22(uParam0->f_82, 1))
				{
					func_351(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 2))
				{
					func_351(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_22(uParam0->f_82, 4))
				{
					func_351(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_364(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_350(uParam0, vVar0, 8);
				}
				func_364(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_22(uParam0->f_83, 1024))
				{
					func_173(&(uParam0->f_83), 1024);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 2048))
				{
					func_173(&(uParam0->f_83), 2048);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_22(uParam0->f_83, 4096))
				{
					func_173(&(uParam0->f_83), 4096);
					func_298(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_22(uParam0->f_82, 1024))
				{
					func_351(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_124(&(uParam0->f_82), 2048);
				}
				else if (!func_22(uParam0->f_82, 2048))
				{
					func_351(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_364(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_352(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_363(uParam0, &vVar0, 0, 0, 8);
						func_230(uParam0, 52, 1, 0, 0);
						func_298(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_363(uParam0, &vVar0, 0, 0, 8);
						func_298(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_298(uParam0, 16, 0, 0);
					func_261(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_364(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_298(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 1)
				{
					func_158("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_22(uParam0->f_81, 262144))
				{
					func_358(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_22(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_358(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_358(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_364(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_22(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_349(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(uParam0->f_82, 134217728))
				{
					func_349(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_364(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 100:
				func_158("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_261(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_22(uParam0->f_82, 65536))
				{
					if (func_113(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_232(&vVar0);
						func_355(vVar0, uParam1);
						func_173(&(uParam0->f_82), 65536);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_22(uParam0->f_82, 131072))
				{
					if (func_113(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_232(&vVar0);
						func_355(vVar0, uParam1);
						func_173(&(uParam0->f_82), 131072);
						func_298(uParam0, 16, 0, 0);
						func_298(uParam0, 11, 0, 0);
						func_261(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_22(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_173(&(uParam0->f_82), 8388608);
				}
				else if (!func_22(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_173(&(uParam0->f_82), 16777216);
				}
				else if (!func_22(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_173(&(uParam0->f_82), 33554432);
				}
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_232(&vVar0);
					func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_363(uParam0, &vVar0, 0, 0, 8);
				}
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_141(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_173(&(uParam0->f_81), 2097152);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_173(&(uParam0->f_81), 67108864);
				func_298(uParam0, 16, 0, 0);
				func_298(uParam0, 11, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_22(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_358(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_230(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_22(uParam0->f_81, 268435456))
				{
					func_358(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_230(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_158("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_261(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_22(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_358(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_257(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_358(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_230(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_158("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_261(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_331(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_298(uParam0, 16, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_22(uParam0->f_81, 16777216))
				{
					func_358(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_261(uParam0, 0, 0);
				break;
			
			case 88:
				func_158("TAXI_TIEFLEE", 7500, 1);
				func_261(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_22(uParam0->f_98, 536870912))
				{
					func_158("TAXI_OBJ_CYI_1B", 7500, 1);
					func_173(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_261(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_261(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_261(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_363(uParam0, &vVar0, 0, 0, 8);
				func_261(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_363(uParam0, &vVar0, 1, 0, 8);
				func_230(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_158("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_230(uParam0, 0, 0, 0, 0);
				func_261(uParam0, 0, 0);
				break;
			}
	}
}

void func_349(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_232(&vParam2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_350(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_82, 64))
	{
		func_173(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_82, 128))
	{
		func_173(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(1, 3), 24);
	}
	func_141(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_298(uParam0, 16, 0, 0);
}

void func_351(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_173(&(uParam0->f_82), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_232(&vParam2);
		}
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_352(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_173(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_331(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_354(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_232(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_355(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_356(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_173(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_356(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xEA6BC48857E0AC4C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_357(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_158("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_158("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_158("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_158("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_158("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_158("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_158("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_158("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_158("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_158("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_158("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_158("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_158("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_358(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_81), iParam1);
	func_298(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_232(&vParam2);
	}
	func_331(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

int func_359(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_360(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_298(uParam0, 16, 0, 0);
	func_298(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_361(uParam0));
	}
}

char* func_361(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_362(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_363(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_298(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_298(uParam0, 17, 0f, 1);
	}
	func_261(uParam0, iParam2, 0);
	return func_331(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_22(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_232(sParam2);
				}
				else
				{
					func_232(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_366(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_367(var uParam0)
{
	return uParam0->f_416;
}

int func_368(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_188(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(var uParam0)
{
	if (func_115())
	{
		return 1;
	}
	if (func_305(uParam0, 17))
	{
		return 1;
	}
	if (func_305(uParam0, 14))
	{
		return 1;
	}
	if (func_186(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_305(uParam0, 9));
}

void func_371(var uParam0)
{
	if (func_305(uParam0, 17))
	{
		if (!func_305(uParam0, 14))
		{
			if (!func_186(uParam0))
			{
				if (!func_115())
				{
					func_112(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_372(var uParam0)
{
	return uParam0->f_117;
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_124)) && func_115())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_115())
				{
					StringCopy(&(uParam0->f_124), func_207(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_374(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_275(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_275(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_275(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_167(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_125(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_275(Local_165.f_1[iVar0 /*4*/], 4) && !func_275(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_167(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_375(int iParam0, var uParam1)
{
	var uVar0;
	
	if (!func_305(iParam0, 27))
	{
		func_304(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_113(iParam0, 27) > 5f)
	{
		if (func_402(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_298(iParam0, 27, 0, 0);
			func_298(iParam0, 10, 0, 0);
			func_400(iParam0, &uVar0, uParam1);
		}
		func_397(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_376(iParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*iParam0) && !unk_0xFBB4F23D534EB790(*iParam0))) && (unk_0x9F4FE516EAACCFC5(iParam0->f_1) && !unk_0xFBB4F23D534EB790(iParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_115())
	{
		if (func_113(iParam0, 26) > 10f)
		{
			func_112(iParam0, 26, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		}
	}
	else if (func_305(iParam0, 26))
	{
		func_112(iParam0, 26, 0);
	}
	return 0;
}

void func_376(var uParam0)
{
	if (!func_396(uParam0->f_429))
	{
		uParam0->f_429 = func_395();
		func_386(&(uParam0->f_429), 0, 0, unk_0x09AC81E49EA267F7(4, 7), 0, 0, 0);
	}
	else if (func_377(uParam0->f_429))
	{
		func_330(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_377(int iParam0)
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 1;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_379(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_381(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_382(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_383(int iParam0)
{
	return iParam0 & 15;
}

var func_384(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_385(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
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
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)
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

void func_389(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_394(int iParam0, int iParam1)
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

int func_395()
{
	var uVar0;
	
	func_393(&uVar0, unk_0x4460E481B9E33ADA());
	func_392(&uVar0, unk_0x8D199E381D262EEF());
	func_391(&uVar0, unk_0xD8A54335F18763BA());
	func_389(&uVar0, unk_0x972A296334C9D57B());
	func_390(&uVar0, unk_0x118229AD063C3C1D());
	func_388(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_396(int iParam0)
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
	iVar0 = func_379(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 1 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_397(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_399()) && !func_163(uParam0)) || ((uParam0->f_411 != 9 && func_265(uParam0, 1)) && !func_163(uParam0)))
		{
			uVar0 = func_398(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			unk_0x73270B3C9CC833FD(uParam0->f_4, true, 0);
			func_202(uParam0);
			func_193(uParam0, 0);
		}
	}
}

var func_398(var uParam0)
{
	return uParam0;
}

int func_399()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
				{
					if (unk_0x4906F8A34E9F4814(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_400(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_401(uParam0, 0, 4))
			{
				func_330(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_401(uParam0, 0, 8))
			{
				func_330(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_401(uParam0, 1, 1))
			{
				func_330(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_401(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_22(*uParam2, 2) && func_179(uParam0))
			{
				func_330(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_401(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_230(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_230(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_408(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_403(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_403(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_404(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_165(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (vdist(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_405(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 4))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_407(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, -1, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_172(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, -1, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
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
	}
	return 0;
}

int func_408(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_165(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

void func_409()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	struct<6> Var3;
	
	Var3 = { func_160() };
	if ((((iLocal_269 < 4 && func_165(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !iLocal_307)
	{
		if (unk_0xBFC0798A6E3417F9(0, 80))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_230))
			{
				if (!unk_0xFBB4F23D534EB790(Local_230))
				{
					iLocal_399 = unk_0x1C0640BA9A7327B3();
					unk_0xE3BB8E05FCEB3FBE(Local_230, true);
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
			}
		}
	}
	if ((((iLocal_269 < 4 && func_165(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !iLocal_307)
	{
		if (iLocal_298)
		{
			switch (iLocal_397)
			{
				case 0:
					iLocal_398 = unk_0x1C0640BA9A7327B3();
					vVar0 = { 223.3f, -3326.3f, 6.4f };
					vVar1 = { -4.1f, 0f, 78f };
					fVar2 = 24.3f;
					func_410(vVar0, vVar1, fVar2);
					iLocal_397 = 1;
					break;
				
				case 1:
					if (unk_0x7F8A39872A07D2CE("txm12_ig1c_3", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 211.1f, -3326.1f, 5.8f };
						vVar1 = { 4.1f, 0f, -81.2f };
						fVar2 = 24.3f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 2;
					}
					break;
				
				case 2:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_398) > 5000)
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 3;
					}
					break;
				
				case 3:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_3", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 194.7488f, -3328.101f, 5.9471f };
						vVar1 = { -0.3369f, -0.0169f, -55.7257f };
						fVar2 = 24.5237f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 4;
					}
					break;
				
				case 4:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_5", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 5;
					}
					break;
				
				case 5:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_7", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 194.1f, -3324.9f, 6.2f };
						vVar1 = { -4.6f, 0f, -83.1f };
						fVar2 = 29f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 6;
					}
					break;
			}
			if (unk_0xBFC0798A6E3417F9(0, 80) && (unk_0x1C0640BA9A7327B3() - iLocal_399) > 500)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_230))
				{
					unk_0xE3BB8E05FCEB3FBE(Local_230, false);
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
			}
		}
	}
	else if (iLocal_298)
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_230))
			{
				if (unk_0xFBB4F23D534EB790(Local_230))
				{
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xE3BB8E05FCEB3FBE(Local_230, false);
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				}
			}
		}
		if (iLocal_307)
		{
			if (!func_16(&iLocal_332))
			{
				if (func_156() && unk_0xFBB4F23D534EB790(Local_230))
				{
					if (!iLocal_308)
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
						unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_308 = 1;
					}
				}
				func_105(&iLocal_332);
			}
			else if (func_103(&iLocal_332) > 0.3f)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_230))
				{
					if (unk_0xFBB4F23D534EB790(Local_230))
					{
						unk_0xEF6276132B396452(0f, 1065353216);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xE3BB8E05FCEB3FBE(Local_230, false);
						unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(true);
	}
}

void func_410(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (!unk_0x9F4FE516EAACCFC5(Local_230))
	{
		func_241(&Local_230, 0f, 0f, 0f, 0f, 0f, 0f, fParam2);
	}
	unk_0x608A456FDD8A83D8(Local_230, vParam0);
	unk_0x5F3CBA6EB9341C90(Local_230, vParam1, 2);
	unk_0x91F5B0244AAE6222(Local_230, "HAND_SHAKE", 0.3f);
}

void func_411(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (func_209(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_173(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_412()
{
	if (!iLocal_300)
	{
		func_413(&Local_230);
		iLocal_300 = 1;
	}
	func_435(2);
	if (iLocal_299)
	{
		if (func_10(unk_0x16F2683693E537C9(), Local_230.f_17, 1) > 50f || func_130(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_435(2);
	}
}

int func_414(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_115() && func_113(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_275(uParam0->f_85, 32))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_333(uParam0, 4160, 0);
						}
						else
						{
							func_333(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_333(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_333(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_333(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
	{
	}
	return 0;
}

void func_415(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_9));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_10))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_10));
	}
}

int func_416(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_417()
{
	Local_230.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_230.f_33 = 88.9745f;
	Local_230.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_230.f_34 = 173.6662f;
	unk_0xF63400DBE3303D26("TAXI_Pursuers", &iLocal_262);
	func_432(1);
	func_421(&Local_230, 3);
	Local_230.f_410 = 0;
	func_420(&Local_230, 3, 6);
	func_418();
}

void func_418()
{
	func_419();
	Local_247 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_419()
{
	Local_247.f_19[0] = joaat("g_m_y_lost_01");
	Local_247.f_19[1] = joaat("s_f_y_hooker_01");
	Local_247.f_32[0] = joaat("gburrito");
	Local_247.f_32[1] = joaat("daemon");
	Local_247.f_32[2] = joaat("hexer");
	Local_247.f_32[3] = joaat("emperor");
	Local_257.f_19[0] = joaat("g_m_y_lost_01");
	Local_257.f_32[0] = joaat("gburrito");
	Local_257.f_32[1] = joaat("hexer");
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_421(var uParam0, int iParam1)
{
	func_431(1);
	func_204();
	func_7(&(uParam0->f_244));
	func_430(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_22(Global_111638.f_19092, 4))
	{
		func_173(&(Global_111638.f_19092), 4);
	}
	func_425(uParam0);
	func_423(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
	uParam0->f_102 = (func_422(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 2);
}

int func_422(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_423(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0:
			func_424(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_424(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_424(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_424(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_424(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_424(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_424(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_424(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_424(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_424(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_424(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_425(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_429(uParam0, 3);
			func_428(uParam0, 14);
			break;
		
		case 1:
			func_429(uParam0, 14);
			func_428(uParam0, 8);
			break;
		
		case 2:
			func_429(uParam0, 8);
			func_428(uParam0, 7);
			break;
		
		case 3:
			func_429(uParam0, 15);
			func_428(uParam0, 6);
			break;
		
		case 4:
			func_429(uParam0, 0);
			func_428(uParam0, 3);
			break;
		
		case 5:
			func_429(uParam0, 6);
			func_428(uParam0, 7);
			break;
		
		case 6:
			func_429(uParam0, 8);
			func_428(uParam0, 15);
			break;
		
		case 7:
			func_429(uParam0, 8);
			func_428(uParam0, 14);
			break;
		
		case 8:
			func_429(uParam0, 7);
			func_428(uParam0, 15);
			break;
		
		case 9:
			func_429(uParam0, unk_0x09AC81E49EA267F7(0, 17));
			iVar0 = func_427((uParam0->f_418.f_2 + unk_0x09AC81E49EA267F7(1, 17)), 0, 16);
			func_428(uParam0, iVar0);
			func_426(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_426(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_428(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_430(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_41() };
	uParam0->f_17 = { func_41() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_112(uParam0, 32, 0);
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, unk_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_432(int iParam0)
{
	unk_0x0E2400AB9174FA81(iParam0, iLocal_262, 1862763509);
	unk_0x0E2400AB9174FA81(iParam0, iLocal_262, -1533126372);
	unk_0x0E2400AB9174FA81(iParam0, -1533126372, iLocal_262);
}

void func_433()
{
	func_20(&Local_230);
	unk_0x51B096AAC60548C1(1f);
	unk_0xE342F209E49C5314(vLocal_311, vLocal_312, true, 1);
	unk_0xEFED0CD6E25037B9();
	unk_0x2952D66A502EA873(iLocal_278, 0);
	unk_0x046C362CF15F1935(&iLocal_276);
	func_434();
	func_211();
	if (unk_0x9F4FE516EAACCFC5(Local_230))
	{
		unk_0x9A8DDC7C522F5BF5(Local_230, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xF3039DE1FDB4F6FD(true);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_434()
{
	unk_0x71199B01895C6202(iLocal_265);
}

void func_435(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

