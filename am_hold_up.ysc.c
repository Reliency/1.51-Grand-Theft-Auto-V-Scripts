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
	struct<73> Local_73 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_74[32];
	struct<54> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	float fLocal_83 = 0f;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	float fLocal_98 = 0f;
	vector3 vLocal_99 = { 0f, 0f, 0f };
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	float fLocal_120 = 0f;
	var uLocal_121 = 16;
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
	int iLocal_286[5] = { 0, 0, 0, 0, 0 };
	int iLocal_287[5] = { 0, 0, 0, 0, 0 };
	float fLocal_288 = 0f;
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
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	vector3 vLocal_312 = { 0f, 0f, 0f };
	struct<21> Local_313 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_80 = joaat("mp_m_shopkeep_01");
	iLocal_84 = -1;
	iLocal_87 = -1;
	iLocal_101 = 303280717;
	iLocal_102 = round(Global_262145.f_2422);
	iLocal_103 = round(Global_262145.f_2418) + 1;
	iLocal_104 = 1;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_443(ScriptParam_313))
		{
			func_438();
		}
		if (func_437(1))
		{
			func_425(unk_0xD803B885F5E47A62(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_424();
		if (func_413())
		{
			func_438();
		}
		func_411();
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6))
		{
			if (func_437(1))
			{
				func_425(unk_0xD803B885F5E47A62(), 1, 0, 0);
				func_408();
				unk_0x0674E58A79778E99(&(Local_75.f_53), 7);
				func_407();
			}
		}
		switch (func_406(unk_0x57270EE11514DC67()))
		{
			case 0:
				unk_0x3F423BF5B8125A50("mp_am_hold_up");
				if (unk_0xB4AE0788C1587752("mp_am_hold_up"))
				{
					if (func_396())
					{
						unk_0x0D3BE1DE0262A012(func_395(Local_75), 0);
						if (unk_0xE9F78D191AD5EDBA(Local_73))
						{
							if (func_394() > 0)
							{
								if (!func_393(Local_73))
								{
									func_392(&uLocal_121, 3, unk_0x1B50683925F00106(Local_73), &(Local_73.f_46), 1, 0);
									func_391();
								}
								unk_0x5D96D8530B3D0904(&(Local_75.f_52), 22);
								Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_394() == 6)
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_75, vLocal_85, vLocal_86, &Local_73, &(Local_74[unk_0x57270EE11514DC67() /*10*/]), unk_0x3D1053F9EB43B7AD(unk_0x1B50683925F00106(Local_73), vLocal_118, vLocal_119, fLocal_120, 0, 1, 0), 0);
				func_259();
				if (func_394() == 2)
				{
					func_129();
				}
				else if (func_394() == 6)
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 5;
				}
				if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_128(&(Local_73.f_69));
				if (func_127(&(Local_73.f_69)))
				{
					Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 6;
			
			case 6:
				func_53();
				func_438();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_394())
			{
				case 0:
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						unk_0x3F423BF5B8125A50("mp_am_hold_up");
						if (unk_0xB4AE0788C1587752("mp_am_hold_up"))
						{
							if (func_396())
							{
								unk_0x536F1BE96C726C4B(vLocal_85, 1.5f, 0, 1, 0, true);
								unk_0x536F1BE96C726C4B(vLocal_82, 1.5f, 0, 1, 0, true);
								unk_0x5D96D8530B3D0904(&(Local_75.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_73.f_12 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_73.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_13))
	{
		if (func_3(Local_73.f_13))
		{
			if (unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_73.f_13)))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_13), 1, 1);
				func_2(&(Local_73.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		unk_0x8D30F6387EE75385(uParam0);
		return unk_0x526BC32A660C89E6(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 2))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 19)) || (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20)))
		{
			func_6(Local_75.f_50, 1, func_7());
			return 1;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 18))
		{
			func_6(Local_75.f_50, 1, func_7());
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 18))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 7))
		{
			func_6(Local_75.f_50, 1, func_7());
			unk_0x5D96D8530B3D0904(&(Local_73.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = 917314517;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0x15673EFF6BDD825C(func_9(), -1, 0));
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

char* func_9()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 13) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 27)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	var uVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 21))
	{
		if (func_393(Local_73))
		{
			Local_73.f_72 = unk_0x39DDAA68EF6A6BF4(Local_73, &uVar0);
			unk_0x5D96D8530B3D0904(&(Local_73.f_23), 21);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 19))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 10) && Local_73.f_37 <= 0f)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_23), 19);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 17))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20))
		{
			if (func_3(Local_73.f_13))
			{
				unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_13), 0, 0);
				unk_0x5D96D8530B3D0904(&(Local_73.f_24), 17);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6))
	{
		if (Global_2537071.f_8 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_23), 6);
			unk_0x5D96D8530B3D0904(&(Local_73.f_23), 16);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFF81ED3B99522C7() || !unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 0))
	{
		return 0;
	}
	if (Local_73.f_66 != 6)
	{
		if (Local_73.f_66 > 0 && func_393(Local_73.f_15))
		{
			Local_73.f_66 = 6;
			return 0;
		}
		switch (Local_73.f_66)
		{
			case 0:
				if (!func_18(&uLocal_301, 10000, 0))
				{
					iVar0 = unk_0xF187F2EA5437526A(vLocal_118, 20f, 20f, 20f, -1);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0xAF6690C489CC6203(iVar0))
						{
							iVar1 = unk_0x134B62B726CEC8E6(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x029064EA9141FCC2(vLocal_118, 25f, 25f, 25f)) && !unk_0x5A91F08DF773C39D(iVar0, vLocal_113, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x03A10A5707B2BB1F(iVar0, 7)) && !unk_0x405E212DDE472467(iVar0, 1)) && unk_0x232B70EDA3C8983B(iVar0)) && func_17(iVar1))
							{
								unk_0x0C8A454B494DAA0D(iVar0);
								if (unk_0xAFE0D3608EDA7039(iVar0))
								{
									if (func_16(&(Local_73.f_15), iVar0, 1, 0))
									{
										unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73.f_15), joaat("weapon_pistol"), 25000, 0);
										unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_15), 1);
										Local_73.f_66 = 1;
										unk_0x5D96D8530B3D0904(&(Local_73.f_25), 1);
										unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_15), Global_1575005);
										unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_73.f_15), 2);
										unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73.f_15), round((200f * Global_262145.f_154)), 0);
										func_392(&uLocal_121, 4, unk_0x1B50683925F00106(Local_73.f_15), "StoreHero", 1, 0);
										unk_0x509B8296EBA9B408(unk_0x1B50683925F00106(Local_73.f_15), func_15(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 5)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4))
				{
					Local_73.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_73.f_67), 3000, 0) || (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 1227113341) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 1227113341) != 1))
				{
					func_14(&(Local_73.f_67));
					Local_73.f_66 = 3;
				}
				break;
			
			case 3:
				if (((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 5) || unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 8)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 9)) || func_18(&(Local_73.f_67), 5000, 0))
				{
					if (func_13() || func_18(&(Local_73.f_67), 5000, 0))
					{
						Local_73.f_66 = 4;
					}
					else
					{
						Local_73.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_13()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x73270B3C9CC833FD(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x7D3E8C4CDBD80BDF(iParam1);
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (bParam2)
		{
			unk_0xF4F945BB00F6E31C(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 337826907)
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_73.f_30 == 0)
	{
		if (Local_73.f_3 >= 2 && Local_73.f_3 != 9)
		{
			Local_73.f_30 = unk_0x0952F7603629A4C0(101, unk_0x16F2683693E537C9(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 5))
	{
		if (Local_73.f_41 > 0)
		{
			func_25();
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 5))
			{
				return;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 1))
	{
		if (Local_73.f_2 == 3 && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
		{
			Local_73.f_2 = 0;
		}
		unk_0x0674E58A79778E99(&(Local_73.f_1), 1);
	}
	switch (Local_73.f_2)
	{
		case 0:
			if ((((func_3(Local_73) && !func_393(Local_73)) && func_3(Local_73.f_16[Local_73.f_26])) && Local_73.f_3 != 8) && Local_73.f_3 != 7)
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) || unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 4))
					{
						Local_73.f_2 = 2;
						return;
					}
					if (!iLocal_78)
					{
						unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_42, 1600);
						iLocal_78 = 1;
					}
					if (func_18(&uLocal_291, 100, 0))
					{
						fVar0 = unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_73));
						fVar1 = (Local_73.f_42 - 10f);
						fVar2 = (Local_73.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_73.f_42 - 10f) + 360f);
							fVar1 = ((Local_73.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_73.f_42 - 10f) - 360f);
							fVar1 = ((Local_73.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_297, 1000, 0)) || func_18(&uLocal_297, 3125, 0))
						{
							unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
							Local_73.f_27 = unk_0xF66E5A439A080021(unk_0x68E4ADDDDCD7BDDE(unk_0x1B50683925F00106(Local_73), -0.65f, 0.87f, -0.02f), vLocal_86, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_73), Local_73.f_27, "mp_am_hold_up", func_24(Local_73.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_16[Local_73.f_26]))
							{
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26]), true, 0);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26]), Local_73.f_27, "mp_am_hold_up", func_23(Local_73.f_26), 4f, -4f, 8);
							}
							unk_0x914E6894744915F8(Local_73.f_27);
							Local_73.f_2 = 1;
							iLocal_87 = unk_0xF958843510932FF6(Local_73.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) || unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 4))
			{
				iLocal_87 = unk_0xF958843510932FF6(Local_73.f_27);
				if (unk_0x69DF961355195C3C(iLocal_87))
				{
					unk_0x45934E8E3471AAA9(Local_73.f_27);
				}
				Local_73.f_2 = 2;
				return;
			}
			if (iLocal_87 != -1)
			{
				if (unk_0x69DF961355195C3C(iLocal_87) || func_18(&uLocal_293, 2000, 0))
				{
					if ((unk_0x69DF961355195C3C(iLocal_87) && unk_0xA45992A6CE82FB43(iLocal_87) == 1f) || func_18(&uLocal_293, 2000, 0))
					{
						if ((func_3(Local_73) && !func_393(Local_73)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
						}
						unk_0x45934E8E3471AAA9(Local_73.f_27);
						Local_73.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_87 = unk_0xF958843510932FF6(Local_73.f_27);
			}
			break;
		
		case 2:
			func_3(Local_73.f_16[Local_73.f_26]);
			if (func_18(&uLocal_299, 1000, 0) && func_3(Local_73.f_16[Local_73.f_26]))
			{
				if (unk_0xC844350D5D58C99A(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26])))
				{
					unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26]), false, 0);
					unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26]), true);
					unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_73.f_16[Local_73.f_26]), func_22(Local_73.f_26), 1, 0, 0, 1);
				}
				iLocal_87 = -1;
				iLocal_78 = 0;
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 4))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_1), 4);
				}
				func_14(&uLocal_299);
				func_14(&uLocal_293);
				func_14(&uLocal_291);
				func_14(&uLocal_297);
				Local_73.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return vLocal_99 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_99 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_99 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_99 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_99 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_99 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_99 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!unk_0xE9F78D191AD5EDBA(Local_73.f_16[3]) || !unk_0xE9F78D191AD5EDBA(Local_73.f_16[1])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_16[2])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_16[4])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_16[0])) || !unk_0xE9F78D191AD5EDBA(Local_73.f_16[5]))
	{
		if (((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5)))
		{
			if (unk_0x2358623ECCDB11B3(0, 0, 6, 0))
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[3]))
				{
					if (func_26(&(Local_73.f_16[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[3]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[3]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[3]), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[1]))
				{
					if (func_26(&(Local_73.f_16[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[1]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[1]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[1]), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[2]))
				{
					if (func_26(&(Local_73.f_16[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[2]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[2]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[2]), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[4]))
				{
					if (func_26(&(Local_73.f_16[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[4]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[4]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[4]), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[0]))
				{
					if (func_26(&(Local_73.f_16[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[0]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[0]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[0]), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_16[5]))
				{
					if (func_26(&(Local_73.f_16[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_16[5]), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_16[5]), true);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Local_73.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam4, bParam3, iParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), false, 0);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
	{
		if (Global_2537071.f_8 == 1 || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6))
		{
			if ((((func_3(Local_73.f_13) && func_3(Local_73)) && !func_393(Local_73)) && Local_73.f_3 != 8) && Local_73.f_3 != 7)
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 30))
					{
						unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_42, 1600);
						unk_0x5D96D8530B3D0904(&(Local_75.f_52), 30);
					}
					if (func_18(&uLocal_289, 100, 0))
					{
						fVar0 = unk_0xD9522BA9E27E1349(unk_0x1B50683925F00106(Local_73));
						if ((fVar0 > (Local_73.f_42 - 20f) && fVar0 < (Local_73.f_42 + 20f)) || func_18(&uLocal_295, 1500, 0))
						{
							unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
							Local_73.f_29 = unk_0xF66E5A439A080021(vLocal_85, vLocal_86, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_73), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_13))
							{
								unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_13), false);
								unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_13), 1);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_13), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0xE9F78D191AD5EDBA(Local_73.f_14))
							{
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_73.f_14), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x914E6894744915F8(Local_73.f_29);
							unk_0x5D96D8530B3D0904(&(Local_73.f_23), 9);
						}
					}
				}
				else
				{
					Local_73.f_3 = 8;
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 17))
	{
		iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
		if (iLocal_84 != -1)
		{
			func_3(Local_73);
			if (unk_0x69DF961355195C3C(iLocal_84))
			{
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 17);
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 15))
	{
		iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
		if (iLocal_84 != -1)
		{
			if (unk_0x69DF961355195C3C(iLocal_84))
			{
				func_3(Local_73);
				if ((unk_0xE9F78D191AD5EDBA(Local_73.f_13) && func_3(Local_73.f_13)) && func_3(Local_73))
				{
					if (unk_0xA45992A6CE82FB43(iLocal_84) > 0.44f)
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_13), true, 0);
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_13), true, 0);
						unk_0x5D96D8530B3D0904(&(Local_73.f_24), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xBFF81ED3B99522C7())
	{
		return 0;
	}
	func_43();
	if (Local_73.f_3 != 9)
	{
		if (func_393(Local_73))
		{
			Local_73.f_3 = 9;
			return 0;
		}
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9)) && Local_73.f_3 < 8)
		{
			if (!unk_0xE9F78D191AD5EDBA(Local_73.f_13) || !unk_0xE9F78D191AD5EDBA(Local_73.f_14))
			{
				Local_73.f_3 = 8;
			}
		}
		switch (Local_73.f_3)
		{
			case 0:
				if (!func_393(Local_73))
				{
					Local_73.f_3 = 1;
				}
				break;
			
			case 1:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4))
				{
					Local_73.f_3 = 2;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
				{
					Local_73.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 2:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
				{
					Local_73.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 1920390111) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 1920390111) != 1)
				{
					Local_73.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 4:
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 17))
				{
					iVar0 = 0;
					iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
					if (iLocal_84 != -1)
					{
						if (unk_0x69DF961355195C3C(iLocal_84))
						{
							if (unk_0xD3DCEC81D13AAFB1(vLocal_81, 3f, 0))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 25))
								{
									unk_0x5D96D8530B3D0904(&(Local_73.f_23), 25);
								}
								Local_73.f_33 = (Local_73.f_33 + 0.35f);
							}
							fVar1 = unk_0xA45992A6CE82FB43(iLocal_84);
							if (fVar1 >= 0.8f)
							{
								Local_73.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_73.f_37 = 0f;
							}
							else if (fVar1 > Local_73.f_37)
							{
								Local_73.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_73.f_37 = 1f;
								iVar0 = 1;
							}
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
					if (iVar0 == 1)
					{
						Local_73.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_73.f_3 = 8;
					}
					else if (func_32())
					{
						Local_73.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 3))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 4))
					{
						Local_73.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 10))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_73))
		{
			Local_73.f_43 = (Local_73.f_43 - 1);
			unk_0x5D96D8530B3D0904(&(Local_73.f_24), 10);
		}
	}
	return 1;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 2))
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 10);
		iVar1 = (iLocal_104 + func_31());
		if (iVar0 < iVar1)
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_24), 3);
		}
		unk_0x5D96D8530B3D0904(&(Local_73.f_24), 2);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFC0798A6E3417F9(0, 24) || unk_0xBFC0798A6E3417F9(0, 257))
	{
		iVar0 = func_33(unk_0x16F2683693E537C9());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0x654E7ACE881E41FE(iVar0);
			if (((((((unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_39(unk_0xD803B885F5E47A62(), 146))
	{
		return 1;
	}
	if (func_38(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 5))
	{
		return 1;
	}
	if (unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		if (unk_0xB98DB26FBF676FA1(1, iVar0) == 185)
		{
			if (unk_0x218F818E64020C17(1, iVar0, &Var1, 13))
			{
				if (unk_0xC844350D5D58C99A(Var1) && unk_0xEC560E589DF8370E(Var1))
				{
					iVar2 = unk_0x940C1429253D3B1B(Var1);
					if (unk_0xEB6A8945D1AC98A1(iVar2) && unk_0x4D570FEF9D230CE7(iVar2) == iLocal_109)
					{
						if (unk_0xC844350D5D58C99A(Var1.f_1) && unk_0xEC560E589DF8370E(Var1.f_1))
						{
							iVar3 = unk_0x940C1429253D3B1B(Var1.f_1);
							if (iVar3 != unk_0x1B50683925F00106(Local_73))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 5))
		{
			if (unk_0x029064EA9141FCC2(vLocal_115 - Vector(25f, 25f, 25f), vLocal_115 + Vector(25f, 25f, 25f)))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_24), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_75.f_50 >= 15 && Local_75.f_50 <= 19)
	{
		if (unk_0x681F21BF9F7B449B(9, vLocal_115, 40f))
		{
			return 1;
		}
	}
	if (unk_0x6AD0ABEEDDABA1F8(-1, vLocal_115, vLocal_116, fLocal_117))
	{
		return 1;
	}
	if (unk_0x6AD0ABEEDDABA1F8(-1, vLocal_118, vLocal_119, fLocal_120))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_grenade"), 0) || unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_molotov"), 0)) || unk_0x7DF98E52B481B6E3(vLocal_118, vLocal_119, fLocal_120, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_grenade"), 0) || unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_molotov"), 0)) || unk_0x7DF98E52B481B6E3(vLocal_115, vLocal_116, fLocal_117, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
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

int func_39(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (unk_0x53129655DBEDC6EA(vLocal_115, vLocal_116, fLocal_117, 0))
	{
		return 1;
	}
	if (unk_0x53129655DBEDC6EA(vLocal_118, vLocal_119, fLocal_120, 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_73.f_33 > 0f)
	{
		if (func_44(&(Local_73.f_34), 50, 0))
		{
			Local_73.f_33 = (Local_73.f_33 - 0.02f);
			if (Local_73.f_33 < 0f)
			{
				Local_73.f_33 = 0f;
			}
			func_14(&(Local_73.f_34));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_94)))
	{
		iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_94));
		iVar1 = unk_0x9539D44F3E4492F6(iVar0);
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 5))
			{
				if (unk_0xE5DBF9B6126856CA(Local_73.f_13))
				{
					if (func_3(Local_73.f_13))
					{
						unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_13), 1, 1);
						func_47(&(Local_73.f_13));
					}
				}
				else
				{
					Local_73.f_38 = { Local_74[iLocal_94 /*10*/].f_7 };
					Local_73.f_44 = 7;
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 11);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 14))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 6))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 14);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 15))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 7))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 15);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 26))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 24))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 26);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 22))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 22))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 22);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 23))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 23))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 23);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 30))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 25))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 30);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 31))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 26))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 31);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 6))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 29))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_24), 6);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 9))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 31))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_24), 9);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 3))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 3))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 3);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 6))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_25), 6);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 7))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 2))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_25), 7);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 5))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_25), 5);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 11))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 20);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 17))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 13))
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_24), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 5))
			{
				if (!func_393(Local_73))
				{
					if (unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_73), iVar1, 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_23), 5);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 8))
				{
					if (!func_393(Local_73.f_15))
					{
						if (unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_73.f_15), iVar1, 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_73.f_25), 8);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 9))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_5, 3))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_25), 9);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 1))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 6);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 16))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 8))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 16);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 27))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_24), 1);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 7);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 10))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 4))
				{
					if (Local_73.f_3 != 5 && Local_73.f_3 != 6)
					{
						Local_73.f_3 = 5;
					}
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 10);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 2))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 2))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 2);
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 4);
					iLocal_96 = iLocal_94;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_96 /*10*/].f_1, 2))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 2);
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 3))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_1), 3);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 8))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 30))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_24), 8);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/].f_1, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0);
					unk_0x5D96D8530B3D0904(&(Local_73.f_1), 1);
					Local_73.f_26 = Local_74[iLocal_94 /*10*/].f_2;
					iLocal_95 = iLocal_94;
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_95 /*10*/].f_1, 0))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 13))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iLocal_94 /*10*/], 21))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_24), 13);
				}
			}
		}
	}
	iLocal_94++;
	if (iLocal_94 == unk_0x54EABC0DD106045B())
	{
		iLocal_94 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x5D96D8530B3D0904(&(Local_73.f_23), 2);
	unk_0x5D96D8530B3D0904(&(Local_73.f_23), 3);
	unk_0x0674E58A79778E99(&(Local_73.f_23), 13);
	unk_0x0674E58A79778E99(&(Local_73.f_23), 27);
	unk_0x0674E58A79778E99(&(Local_73.f_23), 28);
	unk_0x0674E58A79778E99(&(Local_73.f_24), 4);
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 18))
	{
		if (func_393(Local_73))
		{
			if (Local_73.f_37 <= 0f)
			{
				unk_0x5D96D8530B3D0904(&(Local_73.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar6 = unk_0x9539D44F3E4492F6(iVar5);
			if (Local_74[iVar0 /*10*/].f_3 > 0)
			{
				Local_73.f_4 = (Local_73.f_4 + Local_74[iVar0 /*10*/].f_3);
				Local_74[iVar0 /*10*/].f_3 = 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 3))
			{
				if (unk_0x5A91F08DF773C39D(iVar6, vLocal_114, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_23), 3);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 16))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_74[iVar0 /*10*/], 12))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_24), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 2))
				{
					unk_0x0674E58A79778E99(&(Local_73.f_23), 2);
				}
				if (unk_0x4D570FEF9D230CE7(iVar6) == iLocal_109)
				{
					if (unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_110 || unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_111)
					{
						iVar2 = 1;
					}
					else if (unk_0xB0A50BC6EDB99CA9(iVar6) == iLocal_112)
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 13);
					iVar4++;
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 21))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4))
						{
							if (unk_0xCAE036C45E7FC720(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_73.f_32 == -1)
									{
										Local_73.f_32 = iVar0;
									}
									else if (!unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_32)))
									{
										Local_73.f_32 = -1;
									}
									unk_0x5D96D8530B3D0904(&(Local_73.f_23), 4);
									if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 12))
									{
										if (unk_0x5A91F08DF773C39D(iVar6, vLocal_81, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0x5D96D8530B3D0904(&(Local_73.f_23), 12);
										}
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 0))
						{
							if (unk_0x179932739160BA96(iVar5) > 0)
							{
								unk_0x5D96D8530B3D0904(&(Local_73.f_24), 0);
							}
						}
					}
				}
				else if (unk_0x5A91F08DF773C39D(iVar6, vLocal_114, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0x5D96D8530B3D0904(&(Local_73.f_23), 28);
					iVar4++;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 4))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_74[iVar0 /*10*/], 28))
					{
						unk_0x5D96D8530B3D0904(&(Local_73.f_24), 4);
					}
				}
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 19))
				{
					if (Local_74[iLocal_94 /*10*/].f_6 > Local_73.f_33)
					{
						Local_73.f_33 = Local_74[iVar0 /*10*/].f_6;
						func_14(&(Local_73.f_34));
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 24))
						{
							if (Local_73.f_33 > (0.55f + 0.2f))
							{
								unk_0x5D96D8530B3D0904(&(Local_73.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_73.f_41 != iVar4)
	{
		Local_73.f_41 = iVar4;
	}
}

int func_49()
{
	int iVar0;
	
	if ((!unk_0xE9F78D191AD5EDBA(Local_73) || !unk_0xE9F78D191AD5EDBA(Local_73.f_13)) || !unk_0xE9F78D191AD5EDBA(Local_73.f_14))
	{
		if ((func_51(iLocal_80) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (unk_0x2358623ECCDB11B3(1, 0, 2, 0))
			{
				if (!unk_0xE9F78D191AD5EDBA(Local_73))
				{
					if (func_50(&Local_73, 4, iLocal_80, vLocal_81 - Vector(1f, 0f, 0f), Local_73.f_42, 1, 1, 1))
					{
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 0, iLocal_286[0], iLocal_287[0], 0);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 2, iLocal_286[1], iLocal_287[1], 0);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 3, iLocal_286[2], iLocal_287[2], 0);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 4, iLocal_286[3], iLocal_287[3], 0);
						unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_73), 8, iLocal_286[4], iLocal_287[4], 0);
						unk_0xAA738CBC845A2BD8(unk_0x1B50683925F00106(Local_73), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 1);
						unk_0xE2F0767314863BD8(unk_0x1B50683925F00106(Local_73), 1, 0);
						unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
						unk_0xC978532B427F303B(unk_0x1B50683925F00106(Local_73), 0);
						unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 1024, true);
						unk_0xE3A2D2E900FEFBE7(unk_0x1B50683925F00106(Local_73), 1);
						unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_73), round((200f * Global_262145.f_154)), 0);
						if (!unk_0x30F813723591D02E(unk_0x1B50683925F00106(Local_73), "XP_Blocker"))
						{
							unk_0xA1093ABB024EC9BD(unk_0x1B50683925F00106(Local_73), "XP_Blocker", 1);
						}
						func_392(&uLocal_121, 3, unk_0x1B50683925F00106(Local_73), &(Local_73.f_46), 1, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_13))
				{
					iVar0 = unk_0xEC03378782221D46(-1795552418, vLocal_97, 0, func_52(1));
					if (unk_0xC844350D5D58C99A(iVar0))
					{
						Local_73.f_13 = unk_0x4193A2DE62BC07C0(iVar0);
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_13), true);
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_13), false, 0);
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_73.f_13), fLocal_98);
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_13), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_73.f_13), 1);
						unk_0x568AB11F0ED52091(unk_0x09AD4CE7DA179533(Local_73.f_13), -0.2f, 1);
						unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_13), 1, 0);
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_73.f_13), false, 0);
					}
				}
				if (!unk_0xE9F78D191AD5EDBA(Local_73.f_14))
				{
					if (func_26(&(Local_73.f_14), func_52(2), vLocal_99 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_73.f_14), fLocal_100);
						unk_0xAA738CBC845A2BD8(unk_0x09AD4CE7DA179533(Local_73.f_14), unk_0xFBD08BECC9B87937(vLocal_81));
						unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_73.f_14), true);
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

int func_50(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)
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

bool func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_53()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 20))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11) || unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 16))
		{
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109 || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_56();
				func_54();
				func_6(Local_75.f_50, 1, func_7());
				unk_0x5D96D8530B3D0904(&(Local_75.f_52), 20);
			}
			else
			{
				if ((unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 31) && (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 20f, 20f, 20f, 0, 1, 0))
				{
					func_56();
				}
				unk_0x5D96D8530B3D0904(&(Local_75.f_52), 20);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(47);
	Global_2414418[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2414418[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
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

void func_56()
{
	int iVar0;
	
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
	{
		iVar0 = func_126(1181, -1, 0);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, Local_75.f_50))
		{
			func_124(14, 1, -1);
			unk_0x5D96D8530B3D0904(&iVar0, Local_75.f_50);
			func_123(1181, iVar0, -1, 1, 0);
			if (func_122(14, -1) >= 20)
			{
				func_108(44, 1);
			}
			else
			{
				func_107(44, func_122(14, -1));
			}
		}
		func_105(1167, 1, -1);
		func_104(12, 1, -1, 1);
		func_102(19);
		iLocal_304 = 100;
		iLocal_304 = round((IntToFloat(iLocal_304) * Global_262145.f_4226));
		func_57(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_304, 1, -1, 0);
	}
}

var func_57(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_58(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_59(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_101(unk_0xD803B885F5E47A62()) || func_100(unk_0xD803B885F5E47A62()))
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
	else if (func_97() || func_93(unk_0xD803B885F5E47A62()))
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
	if (func_92(sParam2))
	{
	}
	if (func_91())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_89(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_88(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_85(0, &iVar1);
					break;
				
				case 3:
					func_85(1, &iVar1);
					break;
				
				case 1:
					func_81(&iVar1);
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
			func_105(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_80(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_105(1165, iVar1, -1);
				}
				func_64(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_60((func_62(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_60((func_62(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_60(int iParam0)
{
	if (func_91())
	{
		Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_5 = iParam0;
		func_61(joaat("mpply_globalxp"), iParam0);
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_62(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_63(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_63(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_63(int iParam0)
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

void func_64(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_69(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_67(func_68(&Var0));
			if (iVar1 == 0)
			{
				func_66(&Global_1387915, iParam0);
				func_65(joaat("mpply_crew_local_xp_0"), Global_1387915);
			}
			else if (iVar1 == 1)
			{
				func_66(&Global_1387916, iParam0);
				func_65(joaat("mpply_crew_local_xp_1"), Global_1387916);
			}
			else if (iVar1 == 2)
			{
				func_66(&Global_1387917, iParam0);
				func_65(joaat("mpply_crew_local_xp_2"), Global_1387917);
			}
			else if (iVar1 == 3)
			{
				func_66(&Global_1387918, iParam0);
				func_65(joaat("mpply_crew_local_xp_3"), Global_1387918);
			}
			else if (iVar1 == 4)
			{
				func_66(&Global_1387919, iParam0);
				func_65(joaat("mpply_crew_local_xp_4"), Global_1387919);
			}
		}
	}
}

void func_65(int iParam0, int iParam1)
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

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_67(int iParam0)
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

int func_68(var uParam0)
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

struct<13> func_69(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_91())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_78(-1)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_78(-1)])
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
		if (func_77(unk_0xD803B885F5E47A62()))
		{
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_1 = iParam0;
			Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_75(iParam0, 1);
		}
		func_74(639, iParam0, -1, 1);
		func_123(640, func_75(iParam0, 1), -1, 1, 0);
		Global_1388060[func_78(-1)] = iParam0;
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_72()
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

int func_73(int iParam0, var uParam1)
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

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_78(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_78(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_78(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_78(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_78(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_78(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_78(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_78(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_78(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_78(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_78(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_78(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_78(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_78(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_78(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_78(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_78(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_78(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_78(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_78(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_78(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_78(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_78(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_78(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
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

int func_77(int iParam0)
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

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_1388060[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1590535[iParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_78(-1)];
	}
	return 0;
}

void func_81(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_84(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_83(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = round((func_82(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_82(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_69(iParam0) };
		Global_2513231 = { func_69(iParam1) };
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

int func_84(int iParam0, int iParam1, int iParam2)
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

void func_85(bool bParam0, int iParam1)
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
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_83(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_86(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = round((func_82(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_82(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_86(int iParam0, int iParam1)
{
	return vdist(func_87(iParam0), func_87(iParam1));
	return 0f;
}

Vector3 func_87(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_82(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_80(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_80(unk_0xD803B885F5E47A62());
		}
	}
	if (func_90(8000, 0, 0) > 0)
	{
		if (func_90(8000, 0, 0) < (iParam0 + func_80(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_90(8000, 0, 0) - func_80(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
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

int func_91()
{
	return 1;
}

int func_92(char* sParam0)
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

int func_93(int iParam0)
{
	return func_94(func_95(iParam0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_99();
	}
	return func_98(Global_4456448.f_194990);
}

int func_98(int iParam0)
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

var func_99()
{
	return Global_2450632.f_17;
}

bool func_100(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_101(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

void func_102(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_103() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
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

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_79();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_106(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1)
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

int func_108(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_109(iParam0, iParam1);
}

int func_109(int iParam0, int iParam1)
{
	if (func_121(14) && !func_120(iParam0))
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
	if (func_119(&Global_4270065))
	{
		if (func_117(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_110(&Global_4270065, iParam0))
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

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	func_113(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_111(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_112(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_113(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_114(uParam0, iVar0);
		iVar0++;
	}
	func_115(uParam0, (Global_4270064 - 0.5f));
}

void func_114(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_115(var uParam0, float fParam1)
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

float func_116(var uParam0)
{
	return uParam0->f_80;
}

bool func_117(var uParam0, int iParam1)
{
	return func_118(uParam0, iParam1) != -1;
}

int func_118(var uParam0, int iParam1)
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

bool func_119(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_120(int iParam0)
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

bool func_121(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2585280[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_122(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_125(iParam0, iVar0, iParam2);
}

void func_125(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2585280[iParam0 /*3*/][func_78(uParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_127(var uParam0)
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

void func_128(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_129()
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_221();
	func_172();
	func_53();
	func_170();
	func_169();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
		{
			if (Global_2537071.f_5884.f_1 == 0)
			{
				Global_2537071.f_5884.f_1 = 1;
			}
			if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_110 || unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_111)
			{
				bVar0 = true;
			}
			else if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == iLocal_112)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2537071.f_5884.f_1 == 1)
		{
			Global_2537071.f_5884.f_1 = 0;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 31))
	{
		if (func_95(unk_0xD803B885F5E47A62()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				if (!func_38(unk_0xD803B885F5E47A62()))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
					unk_0x5D96D8530B3D0904(&(Local_75.f_52), 31);
				}
			}
		}
	}
	if ((!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 26) && bVar0) && !(func_168(0) || func_167()))
	{
		if (func_165("SNK_MNU", Local_75, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_75.f_52), 26);
		}
	}
	if (!bVar0 && unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 26))
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || (unk_0x9F4FE516EAACCFC5(Local_75.f_1) && unk_0xFBB4F23D534EB790(Local_75.f_1)))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			if (Local_75.f_51 > 0)
			{
				Local_74[unk_0x57270EE11514DC67() /*10*/].f_3 = Local_75.f_51;
				Local_75.f_51 = 0;
			}
			func_408();
			unk_0x0674E58A79778E99(&(Local_75.f_53), 7);
			if (unk_0x9F4FE516EAACCFC5(Local_75.f_1))
			{
				unk_0x9A8DDC7C522F5BF5(Local_75.f_1, 0);
			}
			unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
		}
		func_162(1, Local_75);
		unk_0x0674E58A79778E99(&(Local_75.f_52), 26);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 21))
	{
		if (iVar1 || func_160(unk_0x16F2683693E537C9(), Local_75.f_50))
		{
			unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_157();
		func_151();
		func_145();
		func_141(1);
		func_134();
		unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
		unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_7, 0))
		{
			unk_0x38F2DF3E2CE56869(Local_73.f_71);
			func_132(vLocal_114, func_133(30), 0);
			unk_0x0674E58A79778E99(&(Global_2537071.f_7), 0);
		}
	}
	else
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_114, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_141(0);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_7, 0))
		{
			unk_0xF4F1F4F85B61EBA2();
			func_130(vLocal_114, func_133(30), "");
			unk_0x5D96D8530B3D0904(&(Global_2537071.f_7), 0);
		}
	}
	if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 22) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 23)) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7))
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
	}
}

int func_130(vector3 vParam0, char* sParam1, char* sParam2)
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
			else if (!func_131(Global_2537071.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
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

bool func_131(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_132(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_2537071.f_3968[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_131(Global_2537071.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
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

char* func_133(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0674E58A79778E99(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 28);
	if (!func_393(Local_73) && func_46(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_73), 45f)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_73), 5f, 5f, 2f, 0, 1, 0)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73))) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73)))
				{
					if (!(func_168(0) || func_167()) && ((!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 154) || func_95(unk_0xD803B885F5E47A62()) == 171))
					{
						if (func_136(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73)) || unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
							{
								func_135(func_8(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())));
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 1);
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 8))
							{
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 8);
							}
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 28))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 28))
		{
			if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0x654E7ACE881E41FE(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_79 = "hold_up_head_additive_pistol";
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_79 = "hold_up_head_additive_rifle";
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_79 = "";
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_52), 28);
				}
			}
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 28) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEA6BC48857E0AC4C(sLocal_79))
		{
			if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, 3))
			{
				unk_0xFB131B855F2FD560(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_79, -8f);
			}
		}
		unk_0x0674E58A79778E99(&(Local_75.f_52), 28);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 3))
		{
			if (!func_393(Local_73.f_15) && func_46(unk_0xD803B885F5E47A62(), 1, 1))
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_168(0) || func_167()))
					{
						if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_15)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_15)))
						{
							if (func_136(unk_0xD803B885F5E47A62(), unk_0x1B50683925F00106(Local_73.f_15)) || unk_0x9749E8930AE90341(unk_0xD803B885F5E47A62()))
							{
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -1971399614;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 2, iParam0);
	}
}

int func_136(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_46(iParam0, 1, 1))
	{
		vVar0 = { func_87(iParam0) };
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_137(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_137(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_138(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_139(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_140(iParam0, 9);
	}
	return 0;
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD803B885F5E47A62() != Global_2537071.f_5049 && !func_38(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_81, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 5)) || (iVar0 == 1 && Local_73.f_3 >= 3)) || (iVar0 == 1 && unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 16))) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 12))
				{
					if (((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 12) || Local_73.f_3 >= 3) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 12)) || (iVar0 == 1 && unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 16)))
					{
						Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_36++;
						func_14(&(Global_2439138.f_3748));
						func_19(&(Global_2439138.f_3748), 0, 0);
						if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_36 <= 2)
						{
							if (func_144())
							{
								if (func_143() < 2)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(func_143()));
								}
								else
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(2));
								}
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(2));
							}
						}
						else if (Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_36 >= 5)
						{
							if (func_144())
							{
								if (func_143() < 3)
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(func_143()));
								}
								else
								{
									unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(3));
								}
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(4));
							}
						}
						else if (func_144())
						{
							if (func_143() < 3)
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(func_143()));
							}
							else
							{
								unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(3));
							}
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(3));
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 2);
						}
						unk_0x5D96D8530B3D0904(&(Local_75.f_52), 6);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 25);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 27) && !unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 6))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					if (func_18(&uLocal_107, 2000, 0) || unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(1));
						unk_0x5D96D8530B3D0904(&(Local_75.f_52), 27);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 27);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 25);
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 2);
						}
					}
				}
				else if (func_142(&uLocal_107))
				{
					func_14(&uLocal_107);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 24))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 31))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(func_143()));
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(3));
						}
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 13, unk_0xBC64C2447446D57B(3));
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_52), 24);
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_142(var uParam0)
{
	return uParam0->f_1;
}

int func_143()
{
	return Global_262145.f_12597;
}

int func_144()
{
	if (func_139(unk_0xD803B885F5E47A62()) && func_95(unk_0xD803B885F5E47A62()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	int iVar0;
	int iVar1;
	
	if (func_46(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 23) && unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 17))
		{
			if (!func_393(Local_73))
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
				if (iLocal_84 != -1)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Global_1653350, 15) && func_150()) && func_149())
						{
							unk_0x5D96D8530B3D0904(&Global_1653350, 15);
						}
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							iVar0 = func_126(1190, -1, 0);
							if (!unk_0xEAE0D21A50E6C7F4(iVar0, 3))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_84) < 0.4f && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
								{
									func_148("FHU_HELP3", -1);
									unk_0x5D96D8530B3D0904(&iVar0, 3);
									func_123(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 5) || !unk_0xEAE0D21A50E6C7F4(iVar0, 6))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_84) < 0.7f && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iLocal_109)
								{
									func_148("FHU_HELP4", -1);
									unk_0x5D96D8530B3D0904(&iVar0, 5);
									func_123(1190, iVar0, -1, 1, 0);
									unk_0x5D96D8530B3D0904(&(Local_75.f_52), 23);
								}
							}
							else
							{
								unk_0x5D96D8530B3D0904(&(Local_75.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(unk_0xD803B885F5E47A62(), 146) && !func_147()) && func_95(unk_0xD803B885F5E47A62()) != 167) && func_95(unk_0xD803B885F5E47A62()) != 190) && func_95(unk_0xD803B885F5E47A62()) != 191) && func_95(unk_0xD803B885F5E47A62()) != 250) && func_95(unk_0xD803B885F5E47A62()) != 237) && func_95(unk_0xD803B885F5E47A62()) != 238) && !func_38(unk_0xD803B885F5E47A62())) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 154))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 1))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (((((func_393(Local_73) || Local_73.f_3 > 7) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11)) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 5)) && unk_0xA4F4A1E4DDB4728B(vLocal_85, 1.5f) == 0)
					{
						iVar1 = func_126(1190, -1, 0);
						if (!unk_0xEAE0D21A50E6C7F4(iVar1, 20) || !unk_0xEAE0D21A50E6C7F4(iVar1, 21))
						{
							func_148("FHU_HELPM", -1);
							if (!unk_0xEAE0D21A50E6C7F4(iVar1, 20))
							{
								unk_0x5D96D8530B3D0904(&iVar1, 20);
							}
							else
							{
								unk_0x5D96D8530B3D0904(&iVar1, 21);
							}
							func_123(1190, iVar1, -1, 1, 0);
							unk_0x5D96D8530B3D0904(&(Local_75.f_53), 1);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_75.f_53), 1);
						}
					}
				}
			}
			else if (func_146("FHU_HELPM"))
			{
				if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11)) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 5))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
		}
	}
}

int func_146(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_147()
{
	return Global_1573342;
}

void func_148(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

bool func_149()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1732, 21);
}

bool func_150()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_146, 3);
}

void func_151()
{
	float fVar0;
	float fVar1;
	
	if (Local_73.f_3 == 4)
	{
		if (func_46(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!func_393(Local_73))
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
				if (iLocal_84 != -1)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						fVar0 = unk_0xA45992A6CE82FB43(iLocal_84);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_152(round(fVar0), 890, "HUP_PROG", func_156(unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62())), 0, 1, 13);
						}
						fVar1 = unk_0x71FE9B11268C88D8(unk_0xD803B885F5E47A62());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_74[unk_0x57270EE11514DC67() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
}

void func_153(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_154(0, iVar0);
		Global_1378678.f_1135[iVar0] = uParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = uParam5;
		Global_1378678.f_1135.f_227[iVar0 /*3*/] = fParam6;
		Global_1378678.f_1135.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = uParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

void func_154(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_155(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_157()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 2))
	{
		unk_0x3F423BF5B8125A50("oddjobs@shop_robbery@rob_till");
		unk_0x3F423BF5B8125A50(func_158());
		if (unk_0xB4AE0788C1587752("oddjobs@shop_robbery@rob_till") && unk_0xB4AE0788C1587752(func_158()))
		{
			unk_0x5D96D8530B3D0904(&(Local_75.f_53), 2);
		}
	}
}

char* func_158()
{
	if (func_159(unk_0xD803B885F5E47A62()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_159(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 1;
	}
	return Global_2425662[iParam0 /*421*/].f_230;
}

int func_160(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_161(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0x3D1053F9EB43B7AD(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_162(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_22350.f_8417 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_163(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_163(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0xE17FDF9E3068281B(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_164(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22350.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22350.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22350.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_165(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_164(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_166(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_166(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_167()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
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

void func_169()
{
	if (unk_0xD803B885F5E47A62() != Global_2537071.f_5049 && !func_38(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 24))
		{
			if (Local_73.f_72 == unk_0xD803B885F5E47A62() || (unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 31) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_115, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(func_143()));
						}
						else
						{
							unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(3));
						}
					}
					else
					{
						unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 13, unk_0xBC64C2447446D57B(3));
					}
					unk_0x5D96D8530B3D0904(&(Local_75.f_52), 24);
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_170()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 0))
	{
		return 0;
	}
	if (func_393(Local_73.f_15))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_303))
		{
			unk_0x142CC44DB769B57E(&iLocal_303);
		}
		return 0;
	}
	if (Local_73.f_66 == 4)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_303))
		{
			iLocal_303 = unk_0x5C3B41825F6AC5A0(unk_0x1B50683925F00106(Local_73.f_15));
			unk_0x61755AC17D8F538E(iLocal_303, 1);
			unk_0x516E63E474722206(iLocal_303, 0.7f);
		}
	}
	if (!unk_0x526BC32A660C89E6(Local_73.f_15))
	{
		return 0;
	}
	switch (Local_73.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 713668775) != 0)
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 713668775) != 1)
				{
					if (func_46(unk_0xD803B885F5E47A62(), 1, 1))
					{
						unk_0xE185F110925D87DB(unk_0x1B50683925F00106(Local_73.f_15), unk_0x16F2683693E537C9(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 5) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 0))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 1227113341) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 1227113341) != 1)
				{
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73.f_15), unk_0x16F2683693E537C9(), 10000);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 0);
				}
			}
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 6) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 1)) && !func_171())
			{
				func_392(&uLocal_121, 4, unk_0x1B50683925F00106(Local_73.f_15), "StoreHero", 1, 0);
				unk_0xC8B576D6F470FFC6(unk_0x1B50683925F00106(Local_73.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 7) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 2)) && !func_171())
			{
				func_392(&uLocal_121, 4, unk_0x1B50683925F00106(Local_73.f_15), "StoreHero", 1, 0);
				unk_0xC8B576D6F470FFC6(unk_0x1B50683925F00106(Local_73.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5), 2);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_25, 7) || unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_5, 2))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), -1442466670) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), -1442466670) != 1)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73.f_15));
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73.f_15), Global_1575006);
					unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73.f_15), 20f, 0);
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 242628503) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), 242628503) != 1)
			{
				unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73.f_15));
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73.f_15), uLocal_89);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73.f_15), 1);
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), -875674219) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73.f_15), -875674219) != 0)
			{
				if (func_18(&uLocal_105, 5000, 0))
				{
					func_14(&uLocal_105);
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73.f_15), unk_0x16F2683693E537C9(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_171()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (Local_73.f_3 == 4)
	{
		if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 10) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 4)) && unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 17))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_13))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_13) || (!unk_0x83F012E6200426DB(Local_73.f_13) && unk_0xBFF81ED3B99522C7()))
				{
					if (!func_393(Local_73))
					{
						if (unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
						{
							unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_13), true, 0);
							unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_13), 1);
							unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_73.f_13), 0f, 0f, -1f);
							unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 4);
						}
					}
					else
					{
						unk_0x20641932E5104B25(unk_0x09AD4CE7DA179533(Local_73.f_13), true, 0);
						unk_0xEF190091B5B9F5EB(unk_0x09AD4CE7DA179533(Local_73.f_13), 1);
						unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_73.f_13), 0f, 0f, -1f);
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_173();
}

void func_173()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xE9F78D191AD5EDBA(Local_73.f_13))
	{
		if (!unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_73.f_13), 0))
		{
			if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 5)) && Local_73.f_37 > 0f)
			{
				if (((func_220() || func_219(0.87f)) || Local_73.f_3 >= 5) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 10))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 11))
					{
						if (unk_0x526BC32A660C89E6(Local_73.f_13))
						{
							unk_0x3192B0FF798E63C8(unk_0x09AD4CE7DA179533(Local_73.f_13), 0, 0);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 13);
						}
						if (func_95(unk_0xD803B885F5E47A62()) != 155)
						{
							unk_0xD3DD9662CCFC031F(func_52(1), 1);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 11);
					}
					if (unk_0x50B5F6F3C29E9380(unk_0x09AD4CE7DA179533(Local_73.f_13), unk_0x16F2683693E537C9()))
					{
						Local_74[unk_0x57270EE11514DC67() /*10*/].f_7 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
						unk_0xE82754C349C7B581(Local_74[unk_0x57270EE11514DC67() /*10*/].f_7, &(Local_74[unk_0x57270EE11514DC67() /*10*/].f_7.f_2), 0, 0);
						if (unk_0x526BC32A660C89E6(Local_73.f_13))
						{
							unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_13), 1, 1);
							func_47(&(Local_73.f_13));
						}
						iVar0 = unk_0x09AC81E49EA267F7(iLocal_102, iLocal_103);
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 10))
						{
							iVar0 = floor((to_float(iVar0) * Local_73.f_37));
						}
						if (Local_73.f_4 > 1000)
						{
							Local_73.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_73.f_4);
						iVar0 = func_218(iVar0, 1);
						if (iVar0 > Global_262145.f_167)
						{
							iVar0 = Global_262145.f_167;
						}
						if (func_217(unk_0xD803B885F5E47A62()) && func_215(func_216(unk_0xD803B885F5E47A62())) < 1f)
						{
							if (Global_262145.f_4227 > 1f)
							{
								Global_262145.f_4227 = 1f;
							}
							iVar0 = round((to_float(iVar0) * Global_262145.f_4227));
						}
						if (iVar0 > 0)
						{
							if (func_214())
							{
								func_203(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_199(iVar0, 1, 1, 1092616192);
								unk_0xDACD1EB0C24D33AC(iVar0);
							}
						}
						Global_2537071.f_5884 = (Global_2537071.f_5884 + iVar0);
						Global_2537071.f_5884.f_2 = 1;
						Global_2537071.f_5884.f_5 = 1;
						iLocal_305 = (iLocal_305 + iVar0);
						func_198(3);
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 5))
						{
							func_197(Local_73.f_38, iVar0);
						}
						else
						{
							func_188(unk_0x16F2683693E537C9(), iVar0);
						}
						func_187(1, iVar0);
						if (func_183(1))
						{
							func_174(4);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 5);
						unk_0x5D96D8530B3D0904(&(Local_75.f_53), 6);
					}
				}
			}
		}
	}
}

void func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17692;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17682;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17693;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17685;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17681;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17696;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17697;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17700;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17701;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17694;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18583;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18582;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xF9647457141B11A7(func_181(func_182()), func_179(func_182()), func_178(), func_177(), iParam0, iVar0);
	}
	func_176(iVar0);
	func_175(iVar0);
}

void func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = func_126(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11.f_490 = iVar0;
	func_123(3968, iVar0, -1, 1, 0);
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_1628237[iVar0 /*615*/].f_11.f_489 = (Global_1628237[iVar0 /*615*/].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0 /*615*/].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0 /*615*/].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0 /*615*/].f_11.f_489 = 9999;
	}
}

int func_177()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_178()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_179(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[1];
}

int func_180()
{
	return -1;
}

int func_181(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1628237[iParam0 /*615*/].f_11.f_8[0];
}

int func_182()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_183(bool bParam0)
{
	return func_184(unk_0xD803B885F5E47A62(), bParam0);
}

int func_184(int iParam0, bool bParam1)
{
	return func_185(iParam0, bParam1, 1);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_180())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_186(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0 /*615*/].f_11;
	if (iVar0 != func_180() && Global_1628237[iVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != func_180())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_180())
		{
			if (Global_1628237[iParam0 /*615*/].f_11 == iParam0 && Global_1628237[iParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_195(unk_0x16F2683693E537C9(), 1) };
	if (iParam0 == func_194(unk_0x16F2683693E537C9()))
	{
		func_193(1);
	}
	func_189(vVar0, iParam1, 7, 0, 0);
}

void func_189(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_192(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = iParam1;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam2;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_191();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_190();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_190()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_191()
{
	var uVar0;
	
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_193(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_194(int iParam0)
{
	return iParam0;
}

Vector3 func_195(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_196(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(vector3 vParam0, int iParam1)
{
	func_189(vParam0, iParam1, 6, 0, 0);
}

void func_198(int iParam0)
{
	Global_2439138.f_1893 = iParam0;
}

void func_199(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_200(iParam0, iParam1, iParam2, fParam3);
}

void func_200(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_201(iParam0, iParam1, iParam2, fParam3);
}

void func_201(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_202(iVar1, 0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_203(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_214())
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
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_204(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_211(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_210(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_205(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_206(iParam0);
	}
}

void func_206(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_209(iParam0))
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
		func_207(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_207(var uParam0)
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
	func_208(&(uParam0->f_14));
	func_208(&(uParam0->f_14.f_13));
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

void func_208(var uParam0)
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

int func_209(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_210(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_214())
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_212(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_212(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
		func_213();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_213()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_214()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

float func_215(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/] != -1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_219(float fParam0)
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
	if (iLocal_84 != -1)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			if (unk_0xA45992A6CE82FB43(iLocal_84) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_220()
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
	if (iLocal_84 != -1)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			if (unk_0xA45992A6CE82FB43(iLocal_84) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_221()
{
	func_222();
}

int func_222()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x526BC32A660C89E6(Local_73))
	{
		return 0;
	}
	if (func_393(Local_73))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 3))
		{
			unk_0x16BEAC335EC5109B(unk_0x1B50683925F00106(Local_73));
			unk_0x5D96D8530B3D0904(&(Local_75.f_53), 3);
		}
		return 0;
	}
	switch (Local_73.f_3)
	{
		case 0:
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 71, 1);
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 12))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 13))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 17))
					{
						unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
						unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), -1, 0, 2);
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							func_228(10);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 11))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 12))
								{
									func_228(13);
								}
								else
								{
									func_228(20);
								}
							}
							else
							{
								func_228(17);
							}
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 25);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 11))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 12))
							{
								func_228(0);
							}
							else
							{
								func_228(18);
							}
						}
						else
						{
							func_228(15);
						}
						unk_0x5D96D8530B3D0904(&(Local_75.f_52), 17);
					}
					else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 0)
					{
						if (func_18(&uLocal_105, 5000, 0))
						{
							func_14(&uLocal_105);
							if (!iLocal_78)
							{
								unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), 10000);
							}
							unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 71, 1);
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 0))
			{
				iVar1 = unk_0x16F2683693E537C9();
				if (Local_73.f_32 > -1)
				{
					if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_32)))
					{
						iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_32));
						iVar1 = unk_0x9539D44F3E4492F6(iVar0);
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar1, -1, 0, 2);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
					unk_0xC6EB89C59F2AF6B8(unk_0x1B50683925F00106(Local_73), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 0);
				}
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 0)
			{
				if (func_18(&uLocal_105, 5000, 0))
				{
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_32 > -1)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_32)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_32));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					func_14(&uLocal_105);
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), iVar1, 10000);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar1, -1, 0, 2);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 16))
			{
				unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
			}
			unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_73), 71, 1);
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 25))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 1920390111) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 1920390111) != 1)
				{
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 2, false);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 8, true);
					unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_73), 16, true);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
					unk_0xE655C47E46F9A7E4(unk_0x1B50683925F00106(Local_73), Local_73.f_42, -1);
					unk_0x5D96D8530B3D0904(&(Local_75.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 17) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 3))
			{
				if (unk_0xBFF81ED3B99522C7())
				{
					Global_2537071.f_8 = 1;
				}
				iVar2 = unk_0x16F2683693E537C9();
				if (Global_2537071.f_9 != func_180())
				{
					if (func_46(Global_2537071.f_9, 1, 1))
					{
						iVar2 = unk_0x9539D44F3E4492F6(Global_2537071.f_9);
					}
				}
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), iVar2, 30000, 0, 3);
				unk_0xDCDFC17557D5706C(unk_0x1B50683925F00106(Local_73), "mood_stressed_1", 0);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 3);
			}
			else
			{
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
				if (iLocal_84 != -1)
				{
					if (unk_0x69DF961355195C3C(iLocal_84))
					{
						fLocal_288 = (Local_73.f_33 + 0.6f);
						if (fLocal_288 < 0.75f)
						{
							fLocal_288 = 0.75f;
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 4))
						{
							fLocal_288 = (fLocal_288 + 0.25f);
						}
						if (fLocal_288 > 1.75f)
						{
							fLocal_288 = 1.75f;
						}
						unk_0x5E4E98C6D98C9C57(iLocal_84, fLocal_288);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 10))
			{
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 242628503) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), 242628503) != 1)
				{
					if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
					{
						iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
						if ((iLocal_84 != -1 && !unk_0x69DF961355195C3C(iLocal_84)) || iLocal_84 == -1)
						{
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_89);
							unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
							unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -875674219) != 0)
			{
				if (func_18(&uLocal_105, 5000, 0))
				{
					func_14(&uLocal_105);
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_32 > -1)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_32)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_32));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					unk_0xF96A174EE26D7588(unk_0x1B50683925F00106(Local_73), iVar1, 10000);
					unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_73), unk_0x16F2683693E537C9(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 10))
			{
				if ((iLocal_84 == -1 || !unk_0x69DF961355195C3C(iLocal_84)) || unk_0xA45992A6CE82FB43(iLocal_84) >= 0.95f)
				{
					func_227();
					iVar1 = unk_0x16F2683693E537C9();
					if (Local_73.f_32 > -1)
					{
						if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Local_73.f_32)))
						{
							iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Local_73.f_32));
							iVar1 = unk_0x9539D44F3E4492F6(iVar0);
						}
					}
					unk_0xF9B5DB58254657F1(unk_0x1B50683925F00106(Local_73), -1, iVar1, -1, 1);
					unk_0xF895E10BF4C72645(unk_0x1B50683925F00106(Local_73), 0, 0);
					unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 16);
					unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -1442466670) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -1442466670) != 1)
			{
				if (!func_171())
				{
					func_226();
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
					unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0);
					func_228(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 9))
			{
				func_227();
				iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
				if ((iLocal_84 != -1 && !unk_0x69DF961355195C3C(iLocal_84)) || iLocal_84 == -1)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 27) && !func_37()) && !func_36())
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 3))
							{
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_91);
								iVar3 = 1;
							}
							else
							{
								func_226();
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_92);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0xEEB67C3D0A71A47B(unk_0x1B50683925F00106(Local_73), vLocal_82, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_228(25);
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
						func_6(Local_75.f_50, 1, func_7());
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 9);
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 19))
			{
				iVar4 = unk_0x1C97A5F82B15E49A(unk_0x1B50683925F00106(Local_73));
				if (iVar4 == 3)
				{
					unk_0x8FB4E06C94958F84(unk_0x1B50683925F00106(Local_73));
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
					if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 3))
					{
						unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_93);
					}
					else
					{
						unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0);
					}
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 19);
				}
			}
			break;
	}
	func_223();
	return 1;
}

void func_223()
{
	if ((Local_73.f_3 != 8 && Local_73.f_3 != 7) && Local_73.f_2 == 3)
	{
		if ((((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 14) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 15)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 22)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 23)) || !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 30))
		{
			iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
			if (iLocal_84 != -1)
			{
				if (unk_0x69DF961355195C3C(iLocal_84))
				{
					if (!func_171())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 14) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 6))
						{
							func_228(2);
							unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 6);
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 15) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 7))
						{
							if (unk_0xA45992A6CE82FB43(iLocal_84) > 0.87f)
							{
								func_228(3);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 7);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 22) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 22))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 24) && !func_171())
							{
								func_228(11);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 22);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 23) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 23))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 25) && !func_171())
							{
								func_228(12);
								unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 9))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 26) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 24))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7))
				{
					if (!func_171())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 11))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 12))
							{
								func_228(1);
							}
							else
							{
								func_228(19);
							}
						}
						else
						{
							func_228(16);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 24);
						return;
					}
					else
					{
						func_224();
						return;
					}
				}
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 30) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 25)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 0) && !func_171())
				{
					if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7) && unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4)) || (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 7) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 4)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 11))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 12))
							{
								func_228(13);
							}
							else
							{
								func_228(20);
							}
						}
						else
						{
							func_228(17);
						}
						unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 25);
						return;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 31) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 26))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 1) && !func_171())
				{
					func_228(14);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 26);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 9) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 31))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 8) && !func_171())
				{
					func_228(22);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 31);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 3) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/].f_1, 3))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 2) && !func_171())
				{
					func_228(24);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/].f_1), 3);
					return;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 14) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 20))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 13) && !func_171())
				{
					func_228(23);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 6) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 29))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 5))
		{
			if (!func_171())
			{
				func_228(21);
				unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_224()
{
	Global_19671 = 0;
	func_225();
}

void func_225()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_226()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 12);
	if (iVar0 < 3)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_combatpistol"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_microsmg"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_combatmg"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_bat"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(5, 20));
	}
	else
	{
		unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), unk_0x09AC81E49EA267F7(10, 25));
	}
	func_6(Local_75.f_50, 1, func_7());
	unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_73), Global_1575006);
	unk_0x20EC6650986ACDC7(unk_0x1B50683925F00106(Local_73), 1);
	unk_0x3CC33E4E9CE523F4(unk_0x1B50683925F00106(Local_73), 1);
	unk_0xED253B8DDB3FFB77(unk_0x1B50683925F00106(Local_73), vLocal_81, 20f, 0, 0);
	unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
}

void func_227()
{
	iLocal_84 = unk_0xF958843510932FF6(Local_73.f_29);
	if (iLocal_84 != -1)
	{
		if (unk_0x69DF961355195C3C(iLocal_84))
		{
			unk_0x45934E8E3471AAA9(Local_73.f_29);
		}
	}
}

void func_228(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 13))
	{
		if (!func_393(Local_73))
		{
			if (unk_0x526BC32A660C89E6(Local_73) || (!unk_0x83F012E6200426DB(Local_73) && unk_0xBFF81ED3B99522C7()))
			{
				if (!unk_0x869EFD0BC0868856(unk_0x1B50683925F00106(Local_73)))
				{
					if (Local_73.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_73.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_73.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x7F8A39872A07D2CE(&Var0, "RB_SH241"))
					{
						if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_250(iVar1)) || func_249(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_392(&uLocal_121, 3, unk_0x1B50683925F00106(Local_73), &(Local_73.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_229(&uLocal_121, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_229(&uLocal_121, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_229(&uLocal_121, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_BRAVE", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_REMOVE_VEHICLE", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_REACT_TO_SHOUT", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_HURRYING", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_THREATENED", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SCARED_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_GREET_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SCARED_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_COPS_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_COPS_ARRIVED", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_SELL", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_NO_ENTRY", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SHOP_STEAL", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0xEB0A515D699A7E90(unk_0x1B50683925F00106(Local_73), "SCREAM_PANIC", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_230(sParam2, iParam3, 0);
}

int func_230(char* sParam0, int iParam1, bool bParam2)
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
					func_247();
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
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_245();
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
				func_238();
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
				if (func_237())
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
			if (func_236())
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
			func_235();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_234();
		func_231();
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
		func_247();
	}
	return 0;
}

void func_231()
{
	if (!func_232())
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

int func_232()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_180())
	{
		return 0;
	}
	if (func_233(unk_0xD803B885F5E47A62()))
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

bool func_233(int iParam0)
{
	return func_140(iParam0, 20);
}

void func_234()
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

void func_235()
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

int func_236()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_237()
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

void func_238()
{
	if (func_121(14))
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
		Global_19486 = func_239();
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

var func_239()
{
	func_240();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_240()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_243(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_242(unk_0x16F2683693E537C9());
			if (func_241(iVar0) && (!func_121(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_241(Global_111638.f_2358.f_539.f_4321))
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

bool func_241(int iParam0)
{
	return iParam0 < 3;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_243(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_243(int iParam0)
{
	if (func_241(iParam0))
	{
		return func_244(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_244(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_245()
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

bool func_246(int iParam0, int iParam1)
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

void func_247()
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

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case -853065399:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
		
		default:
	}
	return 0;
}

void func_251()
{
	int iVar0;
	
	iVar0 = unk_0x9BFC2168CB5FCF68(false, 0);
	if (Local_73.f_43 != iVar0)
	{
		if (Local_73.f_43 < iVar0 || func_258(Local_73.f_43, 0, 1))
		{
			unk_0x0BEC04ECA8485A3A(Local_73.f_43);
		}
	}
	iVar0 = unk_0xBF3DE18643F54472(false, 0);
	if (Local_73.f_44 != iVar0)
	{
		if (Local_73.f_44 < iVar0 || func_252(Local_73.f_44, 0, 1))
		{
			unk_0x3A4967AE7C71F999(Local_73.f_44);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
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

int func_256(int iParam0, bool bParam1)
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

int func_257(int iParam0)
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

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_306)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 0))
			{
				if (unk_0xE9F78D191AD5EDBA(Local_73.f_14))
				{
					if (func_265(vLocal_312))
					{
						vLocal_312 = { unk_0x68E4ADDDDCD7BDDE(unk_0x09AD4CE7DA179533(Local_73.f_14), 0f, -0.5f, 0f) };
						unk_0x5D96D8530B3D0904(&(Local_75.f_53), 0);
					}
				}
			}
			if ((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_312, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_393(Local_73) || Local_73.f_3 > 7)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11)) && unk_0xA4F4A1E4DDB4728B(vLocal_85, 1.5f) == 0)
			{
				if (((((((!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !func_168(0)) && !func_264()) && !unk_0x798A3F1296751F46()) && !func_39(unk_0xD803B885F5E47A62(), 146)) && !func_38(unk_0xD803B885F5E47A62())) && unk_0xE9F78D191AD5EDBA(Local_73.f_14)) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 154))
				{
					func_148("FHU_MANR", -1);
					Global_2537071.f_5884.f_4 = 1;
					iLocal_306 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0xEAE0D21A50E6C7F4(Local_73.f_24, 16) && !unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 12)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 20)) && !unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 11)) && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_312, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 154))
			{
				if (((unk_0xBFC0798A6E3417F9(0, 51) && !func_263(0)) && !func_264()) && !unk_0x798A3F1296751F46())
				{
					if (func_146("FHU_MANR"))
					{
						unk_0xA37A90C62806D848(1);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 640);
					unk_0x5D96D8530B3D0904(&(Local_74[unk_0x57270EE11514DC67() /*10*/]), 12);
					iLocal_306 = 2;
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
					if (iLocal_311 == 0)
					{
						func_260(&iLocal_311, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_146("FHU_MANR"))
			{
				unk_0xA37A90C62806D848(1);
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				vLocal_312.z = (vVar3.z - 1f);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_312, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100((vLocal_99.x - vLocal_312.x), (vLocal_99.y - vLocal_312.y)));
				unk_0xF82EA857DA10E0CD(&uVar4);
				unk_0xDD353D0E9C789D0E(&uVar4);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(uVar4);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uVar4);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 200, 1);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 71, 1);
				bVar2 = unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_310, 1);
				if (bVar2)
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
				}
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
				if (!unk_0x9F4FE516EAACCFC5(iLocal_307))
				{
					iLocal_307 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xC5940439E4EB9A33(iLocal_307, unk_0x16F2683693E537C9(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x1305278186D1C53E(iLocal_307, unk_0x16F2683693E537C9(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x5818C8D5303DCCF8(iLocal_307, 35f);
				unk_0x91F5B0244AAE6222(iLocal_307, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_307, true);
				unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
			}
			iLocal_306 = 3;
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x9F4FE516EAACCFC5(iLocal_308))
				{
					iLocal_308 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xC5940439E4EB9A33(iLocal_308, unk_0x16F2683693E537C9(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x1305278186D1C53E(iLocal_308, unk_0x16F2683693E537C9(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x5818C8D5303DCCF8(iLocal_308, 35f);
				unk_0x91F5B0244AAE6222(iLocal_308, "HAND_SHAKE", 0.1f);
				unk_0xF1E4C781086FABC1(iLocal_308, iLocal_307, 6000, 1, 1);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 71, 1);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 200, 1);
			}
			iLocal_306 = 4;
			break;
		
		case 4:
			if (!unk_0xFA06B985B30FB0FC(iLocal_308))
			{
				iLocal_306 = 5;
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_309)
						{
							iVar5 = round(((IntToFloat(iLocal_102) * 0.75f) / 4f));
							iVar6 = round(((IntToFloat(iLocal_103) * 0.75f) / 4f));
							iVar1 = unk_0x09AC81E49EA267F7(iVar5, iVar6 + 1);
							iVar1 = func_218(iVar1, 1);
							if (iVar1 > (Global_262145.f_167 / 4))
							{
								iVar1 = (Global_262145.f_167 / 4);
							}
							if (func_217(unk_0xD803B885F5E47A62()) && func_215(func_216(unk_0xD803B885F5E47A62())) < 1f)
							{
								if (Global_262145.f_4227 > 1f)
								{
									Global_262145.f_4227 = 1f;
								}
								iVar1 = round((to_float(iVar1) * Global_262145.f_4227));
							}
							if (iVar1 > 0)
							{
								if (func_214())
								{
									func_203(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_199(iVar1, 1, 1, 1092616192);
									unk_0xDACD1EB0C24D33AC(iVar1);
								}
							}
							Global_2537071.f_5884 = (Global_2537071.f_5884 + iVar1);
							iLocal_305 = (iLocal_305 + iVar1);
							func_187(1, iLocal_305);
							unk_0x4D7F4CC43D4D0DE3(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_309 = 1;
						}
					}
					else if (iLocal_309)
					{
						iLocal_309 = 0;
					}
				}
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 71, 1);
				unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_310 != joaat("weapon_unarmed") && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_310, true);
			}
			unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 1, -1, 0);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			if (unk_0x9F4FE516EAACCFC5(iLocal_307))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_307, 0);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_308))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_308, 0);
			}
			unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			Global_2537071.f_5884.f_2 = 1;
			Global_2537071.f_5884.f_5 = 1;
			if (func_183(1))
			{
				func_174(4);
			}
			iLocal_306 = 7;
			break;
		
		case 6:
			unk_0xE3BB8E05FCEB3FBE(iLocal_308, false);
			unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			iLocal_306 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_261(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/] = 1;
			Global_42151[iVar0 /*32*/].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0 /*32*/].f_4 = 0;
			Global_42151[iVar0 /*32*/].f_29 = 0;
			Global_42151[iVar0 /*32*/].f_5 = 0;
			Global_42151[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42151[iVar0 /*32*/].f_6 = iParam3;
			Global_42151[iVar0 /*32*/].f_31 = unk_0x0D0A574C76D769AC();
			Global_42151[iVar0 /*32*/].f_7 = 0;
			Global_42151[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_42151[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42151[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42151[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0 /*32*/].f_12 = 0;
				Global_42151[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/])
		{
			Global_42151[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				if (Global_19485 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_19485 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19486.f_1 > 3)
	{
		if (Global_19485 == 1)
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

bool func_264()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_265(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_51) >= 1000) || func_390(&(uParam5->f_5))) || (func_142(&(Global_2537071.f_10)) && !func_389(Global_2537071.f_10, 300000, 0)))
	{
		if (func_142(&(Global_2537071.f_10)))
		{
			if ((unk_0x1C0640BA9A7327B3() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_142(&(Global_2537071.f_10)))
			{
				func_19(&(Global_2537071.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_142(&(Global_2537071.f_10)))
		{
			func_14(&(Global_2537071.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((unk_0x1C0640BA9A7327B3() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_46(unk_0xD803B885F5E47A62(), 1, 1)) && unk_0xEAE0D21A50E6C7F4(uParam0->f_52, 26)) && !func_388(-1082130432)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 1) && !bParam7) && !func_393(*uParam5))
	{
		iVar4 = 0;
		if ((unk_0x798A3F1296751F46() && uParam0->f_54 != 0) && !unk_0x590766B2AF637235())
		{
			if (!bParam8)
			{
				uParam0->f_54 = 0;
				func_387(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!unk_0x798A3F1296751F46() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) && !unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9())) && (!func_138(unk_0xD803B885F5E47A62()) || func_95(unk_0xD803B885F5E47A62()) == 154)) && !func_386(unk_0xD803B885F5E47A62(), 21))
				{
					if (func_385(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
						vVar3 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(*uParam5), 1) };
						if ((unk_0x0EB28750412C3A5A(vVar2, uParam0->f_23, 1) < 5f && unk_0x755FF954DAE327E1((vVar2.z - vVar3.z)) < 0.25f) || func_437(1))
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_437(1))
							{
								if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), uParam0->f_23, 135f) || func_437(1))
								{
									if (uParam0->f_34)
									{
										if (func_437(1))
										{
											func_407();
										}
										if (((!func_146("SHR_HOLDUP_1") && !func_146("SHR_MENU")) && !func_384()) && func_383())
										{
											func_148("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_437(1))
										{
										}
										uParam0->f_14 = -1;
										func_260(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((unk_0x1C0640BA9A7327B3() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0x1C0640BA9A7327B3() % 8000) < 50)
								{
								}
								unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0x1C0640BA9A7327B3() % 8000) < 50)
							{
							}
							unk_0x4ADCCF23C40DC113(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (func_40(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_53, 4))
						{
							func_148("SHR_FM_CRIT", -1);
							unk_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
							unk_0x5D96D8530B3D0904(&(uParam0->f_53), 4);
						}
					}
					if ((unk_0x1C0640BA9A7327B3() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x1B50683925F00106(*uParam5), 1) };
				if ((!unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), uParam0->f_23, 135f) || unk_0x755FF954DAE327E1((vVar2.z - vVar3.z)) >= 0.25f) && !func_437(1))
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (unk_0x798A3F1296751F46())
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_168(0) || func_167())
				{
					if (func_146("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(1);
					}
					func_261(&(uParam0->f_14));
					func_162(1, *uParam0);
					unk_0x0674E58A79778E99(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()))
				{
					if (func_382(uParam0->f_14, 1) || func_437(1))
					{
						if (func_437(1))
						{
							func_407();
						}
						if (func_146("SHR_MENU"))
						{
							unk_0xA37A90C62806D848(1);
						}
						func_380(&(uParam0->f_44));
						func_261(&(uParam0->f_14));
						func_374(0, 0);
						unk_0x5D96D8530B3D0904(&(uParam0->f_53), 7);
						func_425(unk_0xD803B885F5E47A62(), 0, 66048, 0);
						unk_0xC60408C24B32AAC4();
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_393(*uParam5))
						{
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(*uParam5), 0);
							unk_0x0674E58A79778E99(&(iParam6->f_1), 1);
						}
						func_373();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!unk_0x9F4FE516EAACCFC5(uParam0->f_1))
					{
						uParam0->f_1 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_372(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0x608A456FDD8A83D8(uParam0->f_1, uParam0->f_2);
						unk_0x5F3CBA6EB9341C90(uParam0->f_1, uParam0->f_5, 2);
						unk_0x5818C8D5303DCCF8(uParam0->f_1, fVar6);
						unk_0x91F5B0244AAE6222(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0xE3BB8E05FCEB3FBE(uParam0->f_1, true);
						unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_395(*uParam0);
				}
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				uParam0->f_13 = 6;
				func_371(0, 0);
				func_370(1, 1, 0, 0, 0);
				func_369(1, 2, 1, 1, 1);
				func_368("SNK_ITEM");
				if (!bParam8)
				{
					func_366(1, uParam0->f_37, uParam0->f_37);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_13)
				{
					func_361(iVar7, func_365(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_142(&(Global_2537071.f_12[iVar7 /*2*/])) && !func_389(Global_2537071.f_12[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_2537071.f_27))
					{
						func_361(iVar7, "", 1, 1, 0, 0);
						func_360(15, 0);
						if (func_142(&(Global_2537071.f_12[iVar7 /*2*/])) && !func_389(Global_2537071.f_12[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_142(&(Global_2537071.f_12[iVar7 /*2*/])))
						{
							Global_2537071.f_27 = *uParam0;
							func_19(&(Global_2537071.f_12[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_357(iVar7))
					{
						func_361(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_361(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_353(func_356(uParam0, iVar7), 0);
					}
					else
					{
						func_361(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_352(0);
				func_351(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam8)
					{
						func_350("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_350("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10)
				{
					func_350("SNK_SOUT", 0, 0);
				}
				else
				{
					func_350(func_349(uParam0->f_12), 0, 0);
				}
				func_348(201, "ITEM_SELECT", -1, 0);
				func_348(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_348(203, "SNK_LIFT", -1, 0);
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
				}
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -875674219) == 7)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_425(unk_0xD803B885F5E47A62(), 0, 98816, 0);
						}
						else
						{
							func_425(unk_0xD803B885F5E47A62(), 0, 256, 0);
						}
						unk_0x5D96D8530B3D0904(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(2))
					{
						unk_0x38C3A68D7861DCFD(0, 1, 1);
						unk_0x38C3A68D7861DCFD(0, 2, 1);
						unk_0xEAB026E686C0D991(0, 237, 1);
						unk_0xEAB026E686C0D991(0, 238, 1);
						unk_0xEAB026E686C0D991(0, 241, 1);
						unk_0xEAB026E686C0D991(0, 242, 1);
						func_310(0, 0, 0, 1);
						func_309(0, -1, 1);
						if (func_308())
						{
							if (Global_4268497 != uParam0->f_12)
							{
								unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4268497;
								func_351(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar5 = func_349(uParam0->f_12);
								if (unk_0xEF07223F00EBE9C9(sVar5))
								{
									func_350(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_298(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 0)) && unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0))
				{
					unk_0x0674E58A79778E99(&(iParam6->f_1), 0);
				}
				if ((unk_0xBFC0798A6E3417F9(2, 201) || iVar4 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_380(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_214())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_356(uParam0, uParam0->f_12);
							}
							func_286(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							unk_0x4D7F4CC43D4D0DE3(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_356(uParam0, uParam0->f_12);
							}
							func_285(unk_0x12AB0310C2281427(func_349(uParam0->f_12)), iVar0, 0);
							func_278(0, 31, 3);
							uParam0->f_54 = 11;
						}
						unk_0x4D7F4CC43D4D0DE3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam8)
				{
					if (unk_0xBFC0798A6E3417F9(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam5->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_380(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_158(), func_277(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = unk_0x1C0640BA9A7327B3();
							unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_387(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0xBFC0798A6E3417F9(2, 202) || unk_0xB9132A06AE472728(2, 238))
				{
					if (func_437(1))
					{
						func_407();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = unk_0x1C0640BA9A7327B3();
					if (!bParam8)
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_387(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2460710 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = unk_0x1C0640BA9A7327B3();
					if (!bParam8)
					{
						func_387(uParam0, &(iParam6->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_13)
				{
					if (func_142(&(Global_2537071.f_12[iVar8 /*2*/])) && func_389(Global_2537071.f_12[iVar8 /*2*/], 150000, 0))
					{
						func_14(&(Global_2537071.f_12[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_54 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_356(uParam0, uParam0->f_12);
				}
				if (func_286(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam8)
								{
									iVar0 = func_356(uParam0, uParam0->f_12);
								}
								func_285(unk_0x12AB0310C2281427(func_349(uParam0->f_12)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_437(1))
								{
									func_407();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = unk_0x1C0640BA9A7327B3();
								unk_0x4D7F4CC43D4D0DE3(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_387(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							unk_0x4D7F4CC43D4D0DE3(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_214())
				{
					unk_0x7A87D9FAFCB10ADC(func_273(func_274()));
				}
				if (bParam8)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_123, 6))
					{
						unk_0xCB699ED5E9A0C070(1, uParam0->f_12, 0, 1);
						unk_0x5D96D8530B3D0904(&(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_123), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_105(1275, 1, -1);
							func_104(16, 1, -1, 1);
							break;
						
						case 1:
							func_105(1276, 1, -1);
							func_104(15, 1, -1, 1);
							break;
						
						case 2:
							func_104(14, 1, -1, 1);
							func_105(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_126(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1097, -1, 0));
							}
							func_105(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_105(62, 1, -1);
							break;
						
						case 5:
							func_105(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(1275, 1, -1);
							func_104(16, 1, -1, 1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(1276, 1, -1);
							func_104(15, 1, -1, 1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_104(14, 1, -1, 1);
							func_105(1277, 1, -1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_126(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1097, -1, 0));
							}
							func_105(1097, uParam0->f_55, -1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(62, 1, -1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_272(unk_0xD803B885F5E47A62(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(63, 1, -1);
							unk_0xA4F4B39459FDE0FD(iVar1, unk_0x12AB0310C2281427("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_214())
				{
					func_206(func_274());
				}
				func_271(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam6, 30))
				{
					unk_0x5D96D8530B3D0904(iParam6, 30);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 0))
				{
					unk_0x5D96D8530B3D0904(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam8)
					{
						func_387(uParam0, &(iParam6->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10 || func_357(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_193(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_269(0, 1f, 3);
						func_105(1275, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_105(1276, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_105(1277, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_126(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_126(1097, -1, 0));
						}
						func_269(5, to_float(uParam0->f_55), 3);
						func_105(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_105(62, 1, -1);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_105(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_425(unk_0xD803B885F5E47A62(), 1, 0, 0);
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 1 && !func_267(unk_0xD803B885F5E47A62()))
				{
					unk_0x2956AF9855DAF065(unk_0xD803B885F5E47A62(), 37, unk_0xBC64C2447446D57B(1));
					unk_0x5D96D8530B3D0904(iParam6, 25);
					if (!unk_0xEAE0D21A50E6C7F4(*iParam6, 1))
					{
						unk_0x5D96D8530B3D0904(iParam6, 2);
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 2))
				{
					unk_0x5D96D8530B3D0904(&(iParam6->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_98796.f_1417 && !unk_0x590766B2AF637235())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_425(unk_0xD803B885F5E47A62(), 1, 0, 0);
				}
				if ((unk_0x1C0640BA9A7327B3() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(2, 203);
					unk_0x558EC149EB2BC0A2(2, 202);
					unk_0x558EC149EB2BC0A2(2, 188);
					unk_0x558EC149EB2BC0A2(2, 187);
					unk_0x558EC149EB2BC0A2(2, 189);
					unk_0x558EC149EB2BC0A2(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0x1C0640BA9A7327B3() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(2, 203);
					unk_0x558EC149EB2BC0A2(2, 202);
					unk_0x558EC149EB2BC0A2(2, 188);
					unk_0x558EC149EB2BC0A2(2, 187);
					unk_0x558EC149EB2BC0A2(2, 189);
					unk_0x558EC149EB2BC0A2(2, 190);
				}
				break;
			
			case 12:
				if (unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 3))
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 2))
					{
						unk_0x0674E58A79778E99(&(iParam6->f_1), 2);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 3))
					{
						unk_0x0674E58A79778E99(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x1C0640BA9A7327B3() % 8000) < 50)
		{
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam5->f_1, 3))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 2))
			{
				unk_0x0674E58A79778E99(&(iParam6->f_1), 2);
			}
			if (unk_0xEAE0D21A50E6C7F4(iParam6->f_1, 3))
			{
				unk_0x0674E58A79778E99(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && unk_0xEAE0D21A50E6C7F4(uParam0->f_52, 26)) && !unk_0x590766B2AF637235())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_387(uParam0, &(iParam6->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_261(&(uParam0->f_14));
		}
	}
}

int func_267(int iParam0)
{
	if ((func_40(iParam0) || func_268(iParam0)) && func_215(func_216(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
			func_193(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_2439138.f_1290[iVar2 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_2439138.f_1290[iVar3 /*30*/] = { vVar1 };
				Global_2439138.f_1290[iVar3 /*30*/].f_6 = 1;
				Global_2439138.f_1290[iVar3 /*30*/].f_4 = func_192(Global_2439138.f_1290[iVar3 /*30*/], &Global_1312317, &Global_1312318);
				Global_2439138.f_1290[iVar3 /*30*/].f_5 = fParam1;
				Global_2439138.f_1290[iVar3 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
				Global_2439138.f_1290[iVar3 /*30*/].f_8 = iParam2;
				Global_2439138.f_1290[iVar3 /*30*/].f_14 = { Var0 };
				Global_2439138.f_1290[iVar3 /*30*/].f_9 = func_191();
				Global_2439138.f_1290[iVar3 /*30*/].f_10 = func_190();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_201(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_202(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_180())
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

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_209(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_275()
{
	Global_2450632.f_684.f_32 = 1;
}

void func_276()
{
	Global_2450632.f_684.f_28 = 1;
	Global_2450632.f_684.f_32 = 0;
	Global_2450632.f_684.f_31 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	func_14(&(Global_2450632.f_684.f_29));
}

char* func_277()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x4C2428CBA698034D())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() && func_282(unk_0xD803B885F5E47A62(), 1, 0))
	{
		return;
	}
	if (unk_0x06F8112AA79C53D9(2, 199) || unk_0x7FEE810EE9E768EB(2, 199))
	{
		return;
	}
	if (unk_0x8BB17FEBE0394018() != 0)
	{
		return;
	}
	if (unk_0x798A3F1296751F46())
	{
		return;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() || iParam0)
	{
		if (!Global_98796.f_1417 && !unk_0x590766B2AF637235())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2461734 = iParam1;
			Global_98796.f_1417 = 1;
			Global_98796.f_1418 = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()
{
	return Global_2461181;
}

bool func_281()
{
	return Global_2461839;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_283(iParam0))
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

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

bool func_284(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	Global_98796.f_1419 = iParam0;
	Global_98796.f_1420 = iParam1;
	Global_98796.f_1421 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0x3A6D64D2A1228113() > 0)
				{
					if (unk_0x3A6D64D2A1228113() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0x3A6D64D2A1228113()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0x62F8C2EDB26F57B3(-1) > 0)
					{
						if (unk_0x62F8C2EDB26F57B3(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x62F8C2EDB26F57B3(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_365(uParam0->f_12);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, unk_0x12AB0310C2281427(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
					{
						unk_0x26D598B045655D3C(1);
						unk_0x897805B8E15447A7(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x26D598B045655D3C(0);
				unk_0x3584F71E5CA29322(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_206(func_274());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				unk_0x26D598B045655D3C(0);
				unk_0x3584F71E5CA29322(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_289()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_290(Global_4263954[iVar2 /*85*/].f_66.f_6, Global_4263954[iVar2 /*85*/].f_66.f_4, Global_4263954[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4263954[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_4263954[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4263954[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar2 /*85*/].f_66.f_14 = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_4263954[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4263954[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4263954[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_212(Global_4263954[iVar2 /*85*/], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4263954[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_79()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_211(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(unk_0xD803B885F5E47A62(), 1, 0) || func_296(unk_0xD803B885F5E47A62()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_296(int iParam0)
{
	if (iParam0 != func_180())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_297(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
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

void func_298(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_351(uParam0->f_12, 1, 1);
		sVar0 = func_349(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_350(sVar0, 0, 0);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_351(uParam0->f_12, 1, 1);
		sVar0 = func_349(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_350(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (unk_0x7A7BDE279347E517(func_356(uParam0, uParam0->f_12), 0, 1, 0, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_126(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_126(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_126(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_126(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_126(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_126(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_350("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_299(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_350("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_350("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_350("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_350("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_350("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_350("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_350("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_350("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_350("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_350("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_350("SNK_NEEDED", 0, 0);
				}
				unk_0x5D96D8530B3D0904(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_306(&(uParam0->f_44));
			sVar0 = func_349(uParam0->f_12);
			if (unk_0xEF07223F00EBE9C9(sVar0))
			{
				func_350(sVar0, 0, 0);
			}
		}
	}
}

float func_299(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)
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

bool func_301(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_302(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_303(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(2, 219);
	if ((fVar0 > 0.8f || unk_0x06F8112AA79C53D9(2, 187)) || unk_0xBFC0798A6E3417F9(2, 242))
	{
		if (!func_302(&(uParam0->f_41)))
		{
			func_305(&(uParam0->f_41));
			return 1;
		}
		else if (func_304(&(uParam0->f_41)) > 0.25f)
		{
			func_380(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_41)))
	{
		func_306(&(uParam0->f_41));
	}
	return 0;
}

float func_304(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(int iParam0)
{
	if (!func_302(iParam0))
	{
		func_380(iParam0);
	}
}

void func_306(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_307(var uParam0)
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(2, 219);
	if ((fVar0 < -0.8f || unk_0x06F8112AA79C53D9(2, 188)) || unk_0xBFC0798A6E3417F9(2, 241))
	{
		if (!func_302(&(uParam0->f_38)))
		{
			func_305(&(uParam0->f_38));
			return 1;
		}
		else if (func_304(&(uParam0->f_38)) > 0.25f)
		{
			func_380(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_38)))
	{
		func_306(&(uParam0->f_38));
	}
	return 0;
}

int func_308()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		unk_0xC74D8A1D346B9CCB(4);
		if (iParam0 && unk_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(2, 237))
		{
			unk_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	unk_0xC74D8A1D346B9CCB(1);
	return 0;
}

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x91E3F625EF57450D(2))
	{
		Global_4268497 = -1;
		return;
	}
	unk_0xFE29D579C98536B2(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_313();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xD02CE72B4B66DC29(76, 84);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_312(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_311(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_313()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = unk_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = unk_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_346(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_344(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_22348;
	}
	else
	{
		fVar57 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0);
		if (func_343())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_343())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_361(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar63, func_342(29), 64);
					StringCopy(&cVar64, func_340(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == -1487683087)
					{
						func_311(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_311(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_339();
					unk_0x070005E852D4C0E9(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							unk_0x6D99DF8263D35CE5(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							unk_0x21994591120B91F0(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							unk_0x6B012227B3921E18(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_22347 + 0.00390625f), ((Global_22348 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_339();
					func_337((((Global_22347 + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_339();
						func_337((((Global_22347 + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22350.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_311(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA402F6C87C08815C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_344(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_336(fVar40);
				unk_0x070005E852D4C0E9(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_344(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_335(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_342(Global_22350.f_4768), func_340(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_344(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_336(fVar40);
				unk_0x070005E852D4C0E9(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4268421.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_344(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_335(Global_4268421.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_342(Global_4268421.f_67), func_340(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_328(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar66 = (Global_22350.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22350.f_8409)
					{
						unk_0xA402F6C87C08815C(Global_22350.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22350.f_5083[iVar69] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar69)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar69)] - Global_22350.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar42 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_2461220[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6D99DF8263D35CE5(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x21994591120B91F0(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_344(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_335(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[(iVar22 + iVar28)]), func_340(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[(iVar22 + iVar28)]), func_340(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0);
											if (func_324() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_326(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(255, 255, 255, 150);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_22350.f_5738 + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_335(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_22350.f_3918[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(1);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_323((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(1);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_322((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_344(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar42 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_335(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_342(26), func_340(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_335(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_342(27), func_340(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_344(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_342(Global_22350.f_4433[iVar22]), func_340(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_321(Global_22350.f_4433[iVar22])), (fVar37 * func_321(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar49;
	Global_22350.f_5878 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_316(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(10);
	}
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_315(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_315(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_316(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_168(0))
		{
			func_317(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_317(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_319())
		{
			func_318(1, 1);
		}
		else
		{
			func_318(0, 0);
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
	if (!func_236())
	{
		Global_19486.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_168(0))
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

bool func_319()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_320()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

float func_321(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_322(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_323(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_324()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_325(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_326(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_327(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(6);
	}
	else
	{
		unk_0x7BBAC160090910C3(0);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_346(bParam4, bParam8))
	{
		return;
	}
	if (func_333())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_331(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0xF59058FCB716F903(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_22350.f_5081 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_330(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_330(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_329(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_22350.f_5026[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_22350.f_5052, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_4268421.f_16)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_22350.f_4769);
				func_330(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_329(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_4268421.f_16));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_22350.f_8417 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_22350.f_5055)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_329(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_330(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_331(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_332(-1, 0) == 8;
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

int func_332(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_333()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_334())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_334()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_335(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xA402F6C87C08815C(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_336(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(2);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_337(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_338(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_339();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_339()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

var func_340(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_69(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_341(&uVar1);
			}
		}
		else
		{
			return func_341(&(Global_22350.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_341(var uParam0)
{
	return uParam0;
}

char* func_342(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_69(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_341(&uVar0);
		}
		else
		{
			return func_341(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_343()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_342(iParam0), 64);
	StringCopy(&cVar1, func_340(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_343())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_343())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_345(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_345(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_345(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_346(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_246(8, -1) && func_347() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_347()
{
	return Global_1312812;
}

void func_348(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

char* func_349(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_350(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = unk_0x1C0640BA9A7327B3();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_351(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_352(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_353(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = uParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_355();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_344(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_354();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_354()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_344(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_355()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_326(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		unk_0xBBA442527B4BB1A6(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0x6D99DF8263D35CE5(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0x21994591120B91F0(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = unk_0x79E367314AFBB5CA(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_344(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_356(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	if (func_126(func_359(iParam0), -1, 0) >= func_358(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_359(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 11511;
}

void func_360(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_355();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_344(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_354();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_361(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_364(Global_22350.f_5218, 1);
	}
	else
	{
		func_364(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_363(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_344(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_362(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_362(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_363(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_326(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_364(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_367(29, sParam1, sParam2);
}

void func_367(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_368(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_371(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

int func_372(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0x8A5E176FF719A014(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0x8A5E176FF719A014(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0x8A5E176FF719A014(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0x8A5E176FF719A014(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0x8A5E176FF719A014(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { unk_0x8A5E176FF719A014(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_373()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (!func_282(unk_0xD803B885F5E47A62(), 1, 0) || iParam1)
	{
		if (!func_379())
		{
			Global_1312418.f_1 = 1;
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_375(7, 0, -1);
		}
	}
}

void func_375(int iParam0, int iParam1, int iParam2)
{
	if (!func_379() || iParam1)
	{
		Global_1312418 = 1;
		func_378(1);
		if (((!unk_0xA14BB9332558B949() && !func_377()) && !func_376(unk_0xD803B885F5E47A62())) && !func_138(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 1;
		}
		Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 1;
		unk_0x6EC9FBED3024FDF5(1, iParam0, iParam2, -1);
	}
}

int func_376(int iParam0)
{
	if (func_282(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_377()
{
	return Global_2450632.f_740;
}

void func_378(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_379())
		{
			if (func_46(unk_0xD803B885F5E47A62(), 1, 0))
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
			if (func_46(unk_0xD803B885F5E47A62(), 1, 1))
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

bool func_379()
{
	return Global_1312418;
}

void func_380(int iParam0)
{
	func_381(iParam0, 0f);
}

void func_381(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_300(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_382(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_168(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0 /*32*/] == 1 && Global_42151[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0 /*32*/].f_5 = 1;
			Global_42151[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42151[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_383()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_384()
{
	return Global_22209;
}

int func_385(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_386(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

void func_387(var uParam0, var uParam1)
{
	unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	func_425(unk_0xD803B885F5E47A62(), 1, 0, 0);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_408();
	unk_0x0674E58A79778E99(&(uParam0->f_53), 7);
	if (func_146("SHR_MENU"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_261(&(uParam0->f_14));
	}
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_1))
	{
		unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0);
	}
	unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
}

int func_388(float fParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x7D563EECE9515353(unk_0x16F2683693E537C9()) > 0;
		}
		else
		{
			return unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_389(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_390(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_391()
{
	unk_0xDD353D0E9C789D0E(&uLocal_89);
	unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x75ABDC5F81978924(uLocal_89);
	unk_0xDD353D0E9C789D0E(&uLocal_90);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x75ABDC5F81978924(uLocal_90);
	unk_0xDD353D0E9C789D0E(&uLocal_91);
	unk_0x96167B03C5A77156(0, vLocal_82, 2f, -1, 0.25f, 0, fLocal_83);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xEEB67C3D0A71A47B(0, vLocal_82, 250f, -1, 1, 0);
	unk_0xD93EE6549113F9E1(0, 0);
	unk_0x75ABDC5F81978924(uLocal_91);
	unk_0xDD353D0E9C789D0E(&uLocal_93);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xC6EB89C59F2AF6B8(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xD93EE6549113F9E1(0, 0);
	unk_0x75ABDC5F81978924(uLocal_93);
	unk_0xDD353D0E9C789D0E(&uLocal_92);
	unk_0x96167B03C5A77156(0, vLocal_82, 2f, -1, 0.25f, 0, (fLocal_83 - 180f));
	unk_0x9294582561BECEE7(0, 1);
	unk_0x7C8478BF70C1E072(0, 20f, 0);
	unk_0x75ABDC5F81978924(uLocal_92);
}

void func_392(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_393(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

int func_394()
{
	return Local_73.f_12;
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_396()
{
	vector3 vVar0;
	
	if (func_404(&(Local_75.f_50), 0))
	{
		func_402(Local_75.f_50, &iLocal_109, &iLocal_110, &iLocal_111, &iLocal_112, &vLocal_113, &vLocal_114);
		func_401(Local_75.f_50, &vLocal_115, &vLocal_116, &fLocal_117);
		func_400(Local_75.f_50, &vLocal_118, &vLocal_119, &fLocal_120);
		switch (Local_75.f_50)
		{
			case 0:
				vLocal_85 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_86 = { 0f, 0f, 21.89f };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_83 = 116.5329f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				break;
			
			case 1:
				vLocal_86 = { 0f, 0f, -160f };
				vLocal_85 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_83 = 178.8753f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				break;
			
			case 2:
				vLocal_85 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_86 = { 0f, 0f, 175.52f };
				iLocal_80 = func_52(0);
				vLocal_82 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_83 = 191.594f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				break;
			
			case 3:
				vLocal_86 = { 0f, 0f, -82.38f };
				vLocal_85 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_83 = 228.4295f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				break;
			
			case 4:
				vLocal_86 = { 0f, 0f, 180f };
				vLocal_85 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_83 = 197.2994f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				break;
			
			case 5:
				vLocal_86 = { 0f, 0f, 155f };
				vLocal_85 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_83 = 296.5427f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				break;
			
			case 6:
				vLocal_86 = { 0f, 0f, 63.3f };
				vLocal_85 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_83 = 130.9518f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 2;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				break;
			
			case 7:
				vLocal_86 = { 0f, 0f, 117f };
				vLocal_85 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_83 = 73.6245f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 1;
				}
				break;
			
			case 8:
				vLocal_86 = { 0f, 0f, 92f };
				vLocal_85 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_83 = 110.7699f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 2;
				}
				break;
			
			case 9:
				vLocal_86 = { 0f, 0f, 75f };
				vLocal_85 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_83 = 52.0064f;
				iLocal_104 = 1;
				if (func_398(6, 18))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 2;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 0;
					iLocal_287[4] = 0;
				}
				break;
			
			case 10:
				vLocal_86 = { 0f, 0f, 0f };
				vLocal_85 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_83 = 136.5945f;
				iLocal_104 = 3;
				if (func_398(10, 22))
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 11:
				vLocal_86 = { 0f, 0f, -92f };
				vLocal_85 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_83 = 176.1174f;
				iLocal_104 = 3;
				if (func_398(10, 22))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 12:
				vLocal_86 = { 0f, 0f, -145f };
				vLocal_85 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_83 = 43.8031f;
				iLocal_104 = 3;
				if (func_398(10, 22))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 13:
				vLocal_86 = { 0f, 0f, 103f };
				vLocal_85 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_83 = 269.2587f;
				iLocal_104 = 3;
				if (func_398(10, 22))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 2;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 14:
				vLocal_86 = { 0f, 0f, -41f };
				vLocal_85 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_83 = 36.5415f;
				iLocal_104 = 3;
				if (func_398(10, 22))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 15:
				vLocal_86 = { 0f, 0f, 145f };
				vLocal_85 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_83 = 24.9178f;
				iLocal_104 = 2;
				if (func_398(8, 20))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 16:
				vLocal_86 = { 0f, 0f, -87f };
				vLocal_85 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_83 = 291.6504f;
				iLocal_104 = 2;
				if (func_398(8, 20))
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 1;
					iLocal_287[1] = 0;
					iLocal_286[2] = 1;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 2;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 17:
				vLocal_86 = { 0f, 0f, -125f };
				vLocal_85 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { -40.42f, -1751.423f, 28.421f };
				fLocal_83 = 145.6553f;
				iLocal_104 = 2;
				if (func_398(8, 20))
				{
					iLocal_286[0] = 1;
					iLocal_287[0] = 0;
					iLocal_286[1] = 1;
					iLocal_287[1] = 1;
					iLocal_286[2] = 1;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 2;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 18:
				vLocal_86 = { 0f, 0f, -74f };
				vLocal_85 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_80 = func_52(0);
				vLocal_82 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_83 = 232.6337f;
				iLocal_104 = 2;
				if (func_398(8, 20))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 0;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 1;
					iLocal_286[1] = 2;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 0;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
			
			case 19:
				vLocal_85 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_86 = { 0f, 0f, -47.3f };
				iLocal_80 = func_52(0);
				vLocal_82 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_83 = 247.1234f;
				iLocal_104 = 2;
				if (func_398(8, 20))
				{
					iLocal_286[0] = 2;
					iLocal_287[0] = 1;
					iLocal_286[1] = 0;
					iLocal_287[1] = 0;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 0;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				else
				{
					iLocal_286[0] = 0;
					iLocal_287[0] = 2;
					iLocal_286[1] = 2;
					iLocal_287[1] = 1;
					iLocal_286[2] = 0;
					iLocal_287[2] = 1;
					iLocal_286[3] = 0;
					iLocal_287[3] = 1;
					iLocal_286[4] = 1;
					iLocal_287[4] = 0;
				}
				break;
		}
		vLocal_85 = { unk_0x8A5E176FF719A014(vLocal_85, vLocal_86.z, 0f, 0.075f, 0f) };
		vLocal_81 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s", vLocal_85, vLocal_86, 0, 2) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s", vLocal_85, vLocal_86, 0f, 2) };
		Local_73.f_42 = vVar0.z;
		vLocal_97 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_85, vLocal_86, 0, 2) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_85, vLocal_86, 0f, 2) };
		fLocal_98 = vVar0.z;
		vLocal_99 = { unk_0x1BB04F10296A1C5E("mp_am_hold_up", "holdup_victim_20s_till", vLocal_85, vLocal_86, 0, 2) };
		vVar0 = { unk_0xEEB20D14BD38615E("mp_am_hold_up", "holdup_victim_20s_till", vLocal_85, vLocal_86, 0f, 2) };
		fLocal_100 = vVar0.z;
		Local_75 = func_397(Local_75.f_50);
		if (unk_0xBFF81ED3B99522C7())
		{
			Local_73.f_45 = iLocal_286[0];
			if (Local_73.f_45 == 0)
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner2", 16);
			}
			else if (Local_73.f_45 == 1)
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner3", 16);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 29))
		{
			unk_0x3124890FDA752DE4(vLocal_85, 0.5f, iLocal_101, 1);
			unk_0x5D96D8530B3D0904(&(Local_75.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_398(int iParam0, int iParam1)
{
	return func_399(unk_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_401(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_402(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_403(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x0D1736C2E221BCEA(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_403(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_404(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0x0EB28750412C3A5A(func_87(unk_0xD803B885F5E47A62()), func_405(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2425491.f_62, iVar2) && unk_0xEAE0D21A50E6C7F4(Global_2425491.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_405(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_403(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_406(int iParam0)
{
	return Local_74[iParam0 /*10*/].f_4;
}

void func_407()
{
	Global_2450632.f_684.f_28 = 0;
}

void func_408()
{
	if (Global_1312418.f_1 == 1)
	{
		func_409(7, 0, 1);
		Global_1312418.f_1 = 0;
		Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_9 = 0;
	}
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (func_379())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_410(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_410(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
				func_378(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0;
			func_378(1);
		}
		if ((!unk_0xA14BB9332558B949() && !func_377()) && !func_376(unk_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		unk_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

void func_410(var uParam0, bool bParam1, bool bParam2)
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

void func_411()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(unk_0xD803B885F5E47A62(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 6) && !unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 5))
		{
			iVar1 = unk_0x62F8C2EDB26F57B3(-1);
			iVar2 = 0;
			unk_0x5D96D8530B3D0904(&iVar2, 8);
			unk_0x5D96D8530B3D0904(&iVar2, 4);
			unk_0x5D96D8530B3D0904(&iVar2, 1);
			if (iLocal_305 > Global_262145.f_167)
			{
				iLocal_305 = Global_262145.f_167;
			}
			if (iVar1 < iLocal_305)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (unk_0xAC0726A85BBACC32(iVar1, 0, 0, 0, &uVar3, -1, 0))
						{
							if (func_214())
							{
								if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_7, 1))
								{
									Global_2537071.f_4949 = iVar1;
									Global_2537071.f_4950 = iVar2;
									Global_2537071.f_4951 = { unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 1067030938, 1069547520) };
									func_204(&(Global_2537071.f_4948), -1135378931, 537254313, 1474183246, 1022400740, Global_2537071.f_4949, 1, 3);
									unk_0x5D96D8530B3D0904(&(Global_2537071.f_7), 1);
									iLocal_305 = 0;
									unk_0x5D96D8530B3D0904(&(Local_75.f_53), 5);
								}
							}
							else
							{
								unk_0xB8D1BBEFD1257857(joaat("pickup_money_variable"), unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 1067030938, 1069547520), iVar2, iVar1, func_52(1), 0, 0);
								func_199(-iVar1, 1, 1, 1092616192);
								unk_0x3B4B5F7107265106(iVar1, 0, 0);
								func_203(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_305 = 0;
								func_412();
								unk_0x5D96D8530B3D0904(&(Local_75.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_305 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (unk_0xAC0726A85BBACC32(iLocal_305, 0, 0, 0, &uVar3, -1, 0))
					{
						if (func_214())
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_2537071.f_7, 1))
							{
								Global_2537071.f_4949 = iLocal_305;
								Global_2537071.f_4950 = iVar2;
								Global_2537071.f_4951 = { unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 1067030938, 1069547520) };
								func_204(&(Global_2537071.f_4948), -1135378931, 537254313, 1474183246, 1022400740, Global_2537071.f_4949, 1, 3);
								unk_0x5D96D8530B3D0904(&(Global_2537071.f_7), 1);
								iLocal_305 = 0;
								unk_0x5D96D8530B3D0904(&(Local_75.f_53), 5);
							}
						}
						else
						{
							unk_0xB8D1BBEFD1257857(joaat("pickup_money_variable"), unk_0xC6151A4F2BB0AC79(unk_0x16F2683693E537C9(), 1067030938, 1069547520), iVar2, iLocal_305, func_52(1), 0, 0);
							func_199(-iLocal_305, 1, 1, 1092616192);
							unk_0x3B4B5F7107265106(iLocal_305, 0, 0);
							func_203(1022400740, iLocal_305, &uVar5, 0, 0, 0);
							iLocal_305 = 0;
							func_412();
							unk_0x5D96D8530B3D0904(&(Local_75.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_438();
		}
		else
		{
			return;
		}
	}
}

void func_412()
{
	Global_2537071.f_283 = 0;
	Global_2537071.f_284 = 0;
	Global_2537071.f_285 = 0;
}

int func_413()
{
	var uVar0;
	
	func_421(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_420())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_419())
	{
		return 1;
	}
	if (func_418(159))
	{
		if (!func_417())
		{
			return 1;
		}
	}
	if (func_418(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_414() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_414()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_414()
{
	switch (func_416())
	{
		case 0:
			return func_415();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_415()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_416()
{
	return Global_30768;
}

bool func_417()
{
	return Global_2450632.f_598;
}

int func_418(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_419()
{
	return Global_2460680;
}

bool func_420()
{
	return Global_2450632.f_593;
}

void func_421(var uParam0)
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
					func_422(iVar0);
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

void func_422(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_46(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_423(iVar2, &bVar3))
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

int func_423(int iParam0, var uParam1)
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

void func_424()
{
	wait(0);
}

void func_425(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_436())
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
		if (!func_434())
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
				else if (bVar14 || (!func_331(unk_0xD803B885F5E47A62(), 0) && !func_433()))
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
					func_430(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_429(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_428();
					func_427();
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
				if (!func_429(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_426(Global_4456448.f_232883))
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

bool func_426(int iParam0)
{
	return iParam0 == 17;
}

void func_427()
{
	vector3 vVar0;
	
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { vVar0 };
}

void func_428()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_429(int iParam0)
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

void func_430(int iParam0, int iParam1, int iParam2)
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
				func_432();
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
		if (func_331(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_431(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_431(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 1);
	}
}

void func_432()
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

bool func_433()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_434()
{
	if (func_435() == 0)
	{
		return 1;
	}
	return 0;
}

int func_435()
{
	return Global_1312467.f_18;
}

int func_436()
{
	if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_437(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2450632.f_684.f_28 && unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_2450632.f_684.f_31);
	}
	return Global_2450632.f_684.f_28;
}

void func_438()
{
	int iVar0;
	
	Global_2537071.f_8 = 0;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_393(Local_73))
		{
			if (unk_0x526BC32A660C89E6(Local_73) || (!unk_0x83F012E6200426DB(Local_73) && unk_0xBFF81ED3B99522C7()))
			{
				unk_0x5E678B691C852774(unk_0x1B50683925F00106(Local_73), 0);
				unk_0x16BEAC335EC5109B(unk_0x1B50683925F00106(Local_73));
				if (unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 22))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 20))
					{
						if (Local_73.f_3 != 7)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 9))
							{
								unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
								unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_91);
								unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0);
							}
						}
						else if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -1442466670) != 0 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_73), -1442466670) != 1)
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
							if (!unk_0x440C646F2F11A2A1(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 0))
							{
								unk_0x8B25B8DC6068152D(unk_0x1B50683925F00106(Local_73), joaat("weapon_pistol"), 25000, 1);
								unk_0x298903DD96203C2C(unk_0x1B50683925F00106(Local_73), 30);
							}
							func_228(4);
							unk_0x7C8478BF70C1E072(unk_0x1B50683925F00106(Local_73), 20f, 0);
						}
					}
					else if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 3) || !func_10()) || !func_442())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_74[unk_0x57270EE11514DC67() /*10*/], 9))
						{
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_73), uLocal_91);
							unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0);
						}
					}
					else
					{
						unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_73));
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_73), 1);
						unk_0x93D47DFD0AE94949(unk_0x1B50683925F00106(Local_73), -1);
						unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_73), 0);
					}
				}
			}
		}
		if ((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 3) || !func_10()) || unk_0x0DC0B2DBBD52B0C0() <= 1)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_13))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_13))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_73.f_13), 1, 1);
					func_47(&(Local_73.f_13));
				}
			}
		}
		if (((unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 3) || !func_10()) || unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 20)) || unk_0x0DC0B2DBBD52B0C0() <= 1)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73.f_14))
			{
				if (unk_0x526BC32A660C89E6(Local_73.f_14))
				{
					func_47(&(Local_73.f_14));
				}
			}
		}
		if (func_214() && unk_0xEAE0D21A50E6C7F4(Global_2537071.f_7, 1))
		{
			if (func_287(Global_2537071.f_4948) == 1)
			{
				func_441(Global_2537071.f_4948, 4);
			}
			else
			{
				func_206(Global_2537071.f_4948);
			}
			unk_0x0674E58A79778E99(&(Global_2537071.f_7), 1);
		}
		if (Local_73.f_12 == 6)
		{
			if (unk_0xE9F78D191AD5EDBA(Local_73))
			{
				if (unk_0x30F813723591D02E(unk_0x1B50683925F00106(Local_73), "XP_Blocker"))
				{
					unk_0x059C92C065EF869A(unk_0x1B50683925F00106(Local_73), "XP_Blocker");
				}
			}
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			unk_0x850CF499433B183D(Local_73.f_30);
		}
	}
	func_440();
	unk_0x8D17794CE3273D70("mp_am_hold_up");
	unk_0xF4F1F4F85B61EBA2();
	if (func_146("SHR_MENU"))
	{
		unk_0xA37A90C62806D848(1);
	}
	Global_2537071.f_9 = func_180();
	unk_0xF5A41F3D3B38EFE3(func_395(Local_75));
	func_162(1, Local_75);
	if (Local_75.f_14 != -1)
	{
		func_261(&(Local_75.f_14));
	}
	Global_2537071.f_27 = Local_75;
	if (Global_2537071.f_5884.f_4 == 1)
	{
		Global_2537071.f_5884.f_4 = 0;
	}
	if (Global_2537071.f_5884.f_5 == 1)
	{
		Global_2537071.f_5884.f_5 = 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_75.f_52, 29))
	{
		unk_0x77ADAEFF81EAE1E4(vLocal_85, 0.5f, iLocal_101, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_75.f_53, 7))
	{
		func_408();
		unk_0x0674E58A79778E99(&(Local_75.f_53), 7);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 6) || unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 21))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_23, 21))
			{
				iVar0 = 1;
			}
			unk_0x529565B257F62F7E(30, iLocal_304, iLocal_305, iVar0);
		}
	}
	if (unk_0x9F4FE516EAACCFC5(Local_75.f_1))
	{
		if (unk_0xFBB4F23D534EB790(Local_75.f_1))
		{
			unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
		}
		unk_0x9A8DDC7C522F5BF5(Local_75.f_1, 0);
	}
	func_439();
}

void func_439()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_440()
{
	unk_0xF82EA857DA10E0CD(&uLocal_88);
	unk_0xF82EA857DA10E0CD(&uLocal_89);
}

void func_441(int iParam0, int iParam1)
{
	if (func_273(iParam0) != -1)
	{
		if (Global_4263954[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4263954[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			iVar2 = unk_0x9539D44F3E4492F6(iVar1);
			if (func_46(iVar1, 1, 1))
			{
				if (unk_0x4D570FEF9D230CE7(iVar2) == iLocal_109)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_443(struct<21> Param0)
{
	int iVar0;
	
	func_449(func_450(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(2);
	unk_0x3A4967AE7C71F999(8);
	func_447(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_73, 73);
	unk_0x35B62793EAE9ADDF(&Local_74, 321);
	unk_0x256D93AFAE851A7A(0);
	if (!func_446())
	{
		return 0;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		unk_0x3F423BF5B8125A50("mp_am_hold_up");
		unk_0x3F423BF5B8125A50("mp_missheist_countrybank@cower");
		Local_73.f_44 = 8;
		if (func_445())
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_24), 11);
		}
		else if (func_444())
		{
			unk_0x5D96D8530B3D0904(&(Local_73.f_24), 12);
		}
		Local_73.f_28 = unk_0x09AC81E49EA267F7(1, 11);
		Local_73.f_31 = unk_0x09AC81E49EA267F7(1, 5);
		if ((func_13() && !func_386(unk_0xD803B885F5E47A62(), 1)) && !func_386(unk_0xD803B885F5E47A62(), 2))
		{
			Local_73.f_43 = 2;
			unk_0x5D96D8530B3D0904(&(Local_73.f_25), 0);
		}
		else
		{
			Local_73.f_43 = 1;
		}
		Local_73.f_71 = unk_0x79833B02DBD2A244(18f, 28f);
	}
	if (func_95(unk_0xD803B885F5E47A62()) != 155)
	{
		unk_0xD3DD9662CCFC031F(func_52(1), 0);
	}
	iVar0 = func_126(1190, -1, 0);
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 20) && unk_0xEAE0D21A50E6C7F4(iVar0, 21))
	{
		unk_0x5D96D8530B3D0904(&(Local_75.f_53), 1);
	}
	Local_74[unk_0x57270EE11514DC67() /*10*/].f_4 = 0;
	return 1;
}

int func_444()
{
	if (Local_75.f_50 >= 0 && Local_75.f_50 <= 9)
	{
		if (func_398(5, 6) || func_398(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_75.f_50 >= 10 && Local_75.f_50 <= 14)
	{
		if (func_398(9, 10) || func_398(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_75.f_50 >= 15 && Local_75.f_50 <= 19)
	{
		if (func_398(7, 8) || func_398(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_445()
{
	if (Local_75.f_50 >= 0 && Local_75.f_50 <= 9)
	{
		if (func_398(6, 7) || func_398(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_75.f_50 >= 10 && Local_75.f_50 <= 14)
	{
		if (func_398(10, 11) || func_398(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_75.f_50 >= 15 && Local_75.f_50 <= 19)
	{
		if (func_398(8, 9) || func_398(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_446()
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
		if (func_420())
		{
			return 0;
		}
		if (func_418(157))
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

int func_447(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
		if (!func_448())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_420())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_418(157))
				{
					if (!bParam2)
					{
						func_439();
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
					func_439();
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
				func_439();
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
			func_439();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_448()
{
	return Global_1312854;
}

void func_449(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_439();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_450(int iParam0)
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

