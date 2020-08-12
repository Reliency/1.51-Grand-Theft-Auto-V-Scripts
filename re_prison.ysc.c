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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_53[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 16;
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
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_263[3] = { 0, 0, 0 };
	int iLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
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
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	fLocal_266 = 0f;
	bLocal_267 = true;
	vLocal_305 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_89(0);
	}
	iLocal_247 = unk_0x16F2683693E537C9();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9B96FC9CDDC93764(unk_0xD803B885F5E47A62());
	}
	while (true)
	{
		if (unk_0x437347B10A200C4B(iLocal_247, 0))
		{
			func_89(0);
		}
		func_88();
		vLocal_248 = { unk_0x68F4C0EC296D3901(iLocal_247, true) };
		switch (iLocal_246)
		{
			case 0:
				func_86();
				iLocal_246 = 1;
				break;
			
			case 1:
				if (!Global_30776)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_246 = 2;
				}
				break;
			
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_246 = 3;
				}
				break;
			
			case 3:
				func_70();
				wait(0);
				func_69();
				wait(0);
				func_66();
				func_65();
				iLocal_246 = 4;
				break;
			
			case 4:
				if (!Global_30776)
				{
					if (Global_95672)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_89(1);
				}
				break;
		}
		wait(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_3()
{
	if (Global_110583)
	{
		return 1;
	}
	if (!func_2(14) && unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[0] = 1;
				}
			}
			else
			{
				iLocal_59[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[1] = 1;
				}
			}
			else
			{
				iLocal_59[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[2] = 1;
				}
			}
			else
			{
				iLocal_59[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[3] = 1;
				}
			}
			else
			{
				iLocal_59[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[4] = 1;
				}
			}
			else
			{
				iLocal_59[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[5] = 1;
				}
			}
			else
			{
				iLocal_59[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[6] = 1;
				}
			}
			else
			{
				iLocal_59[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[7] = 1;
				}
			}
			else
			{
				iLocal_59[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[8] = 1;
				}
			}
			else
			{
				iLocal_59[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, true, 0))
			{
				if (!bLocal_55)
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_59[9] = 1;
				}
			}
			else
			{
				iLocal_59[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	vector3 vVar0;
	
	switch (iLocal_50)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(joaat("police3"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
			if (unk_0xB87F6CF6E5628C67(joaat("police3")) && unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01")))
			{
				iLocal_50++;
			}
			break;
		
		case 1:
			iLocal_66 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, true, true, false);
			iLocal_68 = unk_0x852A19533F896693(iLocal_66, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (func_15(vVar0, 4, 20, 0) && !unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9())))
			{
				unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0f);
				unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0f);
				if (!unk_0x437347B10A200C4B(iLocal_68, 0))
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_68, unk_0x16F2683693E537C9(), 0, 16);
				}
				if (!func_14(&iLocal_72))
				{
					func_11(&iLocal_72);
				}
				iLocal_50++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_72))
			{
				if (func_8(&iLocal_72) > 15f)
				{
					iLocal_67 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, true, true, false);
					iLocal_69 = unk_0x852A19533F896693(iLocal_67, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					func_26(&iLocal_69);
					unk_0x6C3AE6E278DB3D0E(iLocal_69, unk_0x16F2683693E537C9(), 0, 16);
					iLocal_50++;
				}
				else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, vVar0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0xC844350D5D58C99A(iLocal_66))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_66);
	}
	if (unk_0xC844350D5D58C99A(iLocal_68))
	{
		unk_0xEBA53F35D0085654(&iLocal_68);
	}
	if (unk_0xC844350D5D58C99A(iLocal_67))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_67);
	}
	if (unk_0xC844350D5D58C99A(iLocal_69))
	{
		unk_0xEBA53F35D0085654(&iLocal_69);
	}
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam1) < (fParam2 * fParam2))
	{
		if (((unk_0xC844350D5D58C99A(iLocal_66) && unk_0xC844350D5D58C99A(iLocal_68)) && unk_0xC844350D5D58C99A(iLocal_67)) && unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (unk_0x03068588A1FCED1A(iLocal_66) || !unk_0x0A059E0DB9253280(iLocal_66))
			{
				if (unk_0x03068588A1FCED1A(iLocal_68) || !unk_0x0A059E0DB9253280(iLocal_68))
				{
					if (unk_0x03068588A1FCED1A(iLocal_67) || !unk_0x0A059E0DB9253280(iLocal_67))
					{
						if (unk_0x03068588A1FCED1A(iLocal_69) || !unk_0x0A059E0DB9253280(iLocal_69))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (vdist2(vParam0, vParam1) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

void func_11(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_9(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

int func_15(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
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
	if (func_20(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_18(iParam0, 1) < 1.5f)
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

float func_18(int iParam0, bool bParam1)
{
	return func_19(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)
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

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0, int iParam1, var uParam2)
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

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xFB275CE013F3A38C(iParam0) || func_23(iVar1))
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

int func_23(int iParam0)
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
						if (func_19(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0x262EF6C6306BEA6C(*iParam0, joaat("weapon_assaultshotgun"), -1, false, true);
	unk_0x11AD11297DC58CC7(*iParam0, true);
	unk_0xAFF39FB306F8E232(*iParam0, 13, true);
	unk_0xAFF39FB306F8E232(*iParam0, 0, true);
	unk_0x26A6B1686E33113F(*iParam0, 1);
	unk_0x3CC33E4E9CE523F4(*iParam0, 1);
	unk_0x16F8631A5D4FBCE5(*iParam0, 0f);
	unk_0xFADC0A217229F6B5(*iParam0, true);
	unk_0x298903DD96203C2C(*iParam0, 100);
	unk_0xB35CCEC0D4946813(*iParam0, 2);
	unk_0xAFF39FB306F8E232(*iParam0, 23, false);
	unk_0x9FA191B317572861(*iParam0, 1000f);
	unk_0xAFF39FB306F8E232(*iParam0, 1, true);
}

void func_27()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (bLocal_294)
	{
		if (!unk_0x437347B10A200C4B(iLocal_289, 0))
		{
			if (!unk_0x20D6474D5F4B9FC6(iLocal_289))
			{
				unk_0x4D3C3C0B0DE2663E(iLocal_289, 101, "PrisonHeli", 1);
			}
			if (!unk_0x437347B10A200C4B(iLocal_290, 0))
			{
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_290, 0f, 4f, -2f) };
				unk_0x0B2D887B6817D59D(iLocal_290, vVar0);
			}
			if (bLocal_292)
			{
				if (!func_28())
				{
					bLocal_292 = false;
					unk_0xC6730DF337EA7449(iLocal_289, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_292 = true;
				unk_0xC6730DF337EA7449(iLocal_289, 1, 0);
			}
			if (bLocal_292)
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iLocal_289, true) };
				if (vdist2(vLocal_248, vVar1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 1;
					}
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(iLocal_291))
		{
			unk_0x142CC44DB769B57E(&iLocal_291);
		}
	}
}

int func_28()
{
	if (unk_0xD8A54335F18763BA() >= 20 || unk_0xD8A54335F18763BA() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	vector3 vVar1;
	
	if (!Local_307.f_18[0])
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		if (!bLocal_58)
		{
			if (vdist2(vVar1, vLocal_305) < 5625f)
			{
				iLocal_306 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_27[iVar0]))
		{
			if (!Local_307.f_18[iVar0])
			{
				if (func_16(Local_307.f_27[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306)
				{
					unk_0x6C3AE6E278DB3D0E(Local_307.f_27[iVar0], unk_0x16F2683693E537C9(), 0, 16);
					Local_307.f_18[iVar0] = 1;
				}
			}
			if (!Local_307.f_18[iVar0])
			{
				if (!unk_0xB72E131222E66495(Local_307.f_27[iVar0]))
				{
					unk_0xF44B0E19CAC31C33(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(Local_307.f_36[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_307.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_31[iVar0]))
		{
			if (unk_0xEB6A8945D1AC98A1(Local_307.f_31[iVar0]))
			{
				if (unk_0xE4EDC4B0E92C078B(Local_307.f_40[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(Local_307.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_22[0])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[0]))
		{
			if ((func_16(Local_307.f_31[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_31[0]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_31[0], unk_0x16F2683693E537C9(), 0, 16);
				Local_307.f_22[0] = 1;
			}
		}
	}
	if (!Local_307.f_22[1])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[1]))
		{
			if ((func_16(Local_307.f_31[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_31[1]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_31[1], unk_0x16F2683693E537C9(), 0, 16);
				Local_307.f_22[1] = 1;
			}
		}
	}
	if (!Local_307.f_22[2])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[2]))
		{
			if ((func_16(Local_307.f_31[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_31[2]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_31[2], unk_0x16F2683693E537C9(), 0, 16);
				Local_307.f_22[2] = 1;
			}
		}
	}
	if (!Local_307.f_22[3])
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[3]))
		{
			if ((func_16(Local_307.f_31[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				unk_0xA3BF0AA5A2608191(Local_307.f_31[3]);
				unk_0x6C3AE6E278DB3D0E(Local_307.f_31[3], unk_0x16F2683693E537C9(), 0, 16);
				Local_307.f_22[3] = 1;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_307.f_27[1]))
	{
		if (unk_0xB72E131222E66495(Local_307.f_27[1]))
		{
			if (!Local_307.f_22[0])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[0]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_31[0], Local_307.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[1])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[1]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_31[1], Local_307.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(Local_307.f_27[2]))
	{
		if (unk_0xB72E131222E66495(Local_307.f_27[2]))
		{
			if (!Local_307.f_22[2])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[2]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_31[2], Local_307.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_307.f_22[3])
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_307.f_31[3]))
				{
					unk_0xA8CC11FF8D2962D4(Local_307.f_31[3], Local_307.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	vector3 vVar1;
	
	iLocal_269++;
	if (iLocal_269 >= 30)
	{
		if (!bLocal_58)
		{
			if (func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0xC844350D5D58C99A(Local_252.f_64[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_252.f_64[iVar0]))
					{
						if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != -1)
						{
							if (unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 1 || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 2)
							{
								unk_0x298903DD96203C2C(Local_252.f_64[iVar0], 10);
								iLocal_268 = 1;
							}
						}
						else if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
						{
							unk_0x298903DD96203C2C(Local_252.f_64[iVar0], 10);
							iLocal_268 = 1;
						}
						else
						{
							unk_0x298903DD96203C2C(Local_252.f_64[iVar0], 100);
							iLocal_268 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0;
			}
		}
		iLocal_269 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_64[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_252.f_64[iVar0]))
		{
			if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
			}
			if ((((func_16(Local_252.f_64[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || unk_0xD3DCEC81D13AAFB1(Local_252[iVar0 /*3*/], 20f, 1)) || unk_0xE6F41F94FEE25AFF(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				if (!unk_0xB72E131222E66495(Local_252.f_64[iVar0]))
				{
					unk_0xF44B0E19CAC31C33(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
					Local_252.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(Local_252.f_75[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(Local_252.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0xC844350D5D58C99A(iLocal_264[iVar0]) && !unk_0x437347B10A200C4B(iLocal_264[iVar0], 0)) && unk_0xC844350D5D58C99A(iLocal_263[iVar0])) && !unk_0x437347B10A200C4B(iLocal_263[iVar0], 0))
		{
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_264[iVar0], 0f, 3.5f, -2f) };
			unk_0x0B2D887B6817D59D(iLocal_264[iVar0], vVar1);
			unk_0x56FDC9ADE35F7DB0(iLocal_263[iVar0], false, false, 0);
			if (iLocal_265[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x437347B10A200C4B(iLocal_263[iVar0], 0))
					{
						iLocal_265[iVar0] = 0;
						unk_0xC6730DF337EA7449(iLocal_263[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x437347B10A200C4B(iLocal_263[iVar0], 0))
				{
					iLocal_265[iVar0] = 1;
					unk_0xC6730DF337EA7449(iLocal_263[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = false;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[0]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[0], (53f + fLocal_266));
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[1]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[1], (13f + fLocal_266));
	}
	if (unk_0xC844350D5D58C99A(iLocal_263[2]))
	{
		unk_0xD8F6A53F4799FAFE(iLocal_263[2], (250f + fLocal_266));
	}
}

void func_31(int iParam0)
{
	if (!Local_252.f_53[iParam0])
	{
		unk_0x2C4A1A0F54A166E8(Local_252.f_64[iParam0], unk_0x16F2683693E537C9(), -1, 0);
		unk_0x9FA191B317572861(Local_252.f_64[iParam0], 1000f);
		unk_0x2ECF845953E95D1B(Local_252.f_64[iParam0]);
		Local_252.f_53[iParam0] = 1;
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
	}
}

int func_32(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!unk_0x437347B10A200C4B(*uParam0, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(*uParam0, true) };
	}
	if (vdist2(vVar0, vVar1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 2 || func_15(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 4, 150, 0))
		{
			if (unk_0x93776B156FD8804A("PRISON_ALARMS"))
			{
				unk_0x6021F0389B7BAA70("PRISON_ALARMS", false);
			}
		}
		else
		{
			unk_0x7B35981153AECDBE("PRISON_ALARMS", false);
		}
	}
}

void func_34()
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, true, 0))
		{
			func_63(&Local_70, 2);
		}
		else
		{
			func_61(&Local_70, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
			{
				if (func_15(vVar0, 4, 150, 0))
				{
					func_60(4, 1);
					if (!func_14(&iLocal_78))
					{
						func_11(&iLocal_78);
					}
					if (!bLocal_60)
					{
						if (unk_0xC844350D5D58C99A(iLocal_68) && !unk_0x437347B10A200C4B(iLocal_68, 0))
						{
							func_59(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
							if (func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_58 = true;
								bLocal_60 = true;
							}
						}
					}
				}
				else
				{
					func_60(4, 0);
					if (func_14(&iLocal_78))
					{
						func_12(&iLocal_78);
					}
					bLocal_58 = false;
				}
			}
			else
			{
				func_60(4, 0);
				if (func_14(&iLocal_78))
				{
					func_12(&iLocal_78);
				}
				bLocal_58 = false;
			}
			if (bLocal_58)
			{
				if (func_14(&iLocal_78))
				{
					if (func_8(&iLocal_78) > 10f)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 4)
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
							bLocal_61 = true;
							bLocal_58 = false;
							func_60(4, 0);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!func_36())
					{
						if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
						{
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
				}
				else if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_55 = true;
				}
			}
			if (!bLocal_58)
			{
				if (func_15(vVar0, 4, 100, 0))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!func_36())
							{
								unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_55 = true;
							}
						}
						else
						{
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x5BED90AC1E2BC558("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_55 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_54)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_52[iVar0] = unk_0x544B74C043CE9948(vLocal_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_54 = 1;
	}
}

int func_36()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_44();
		func_39();
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

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_43())
	{
		return 0;
	}
	if (func_41(unk_0xD803B885F5E47A62()))
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

bool func_41(int iParam0)
{
	return func_42(iParam0, 20);
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_43()
{
	return -1;
}

void func_44()
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

void func_45()
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

int func_46()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
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

void func_48()
{
	if (func_2(14))
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
		Global_19486 = func_49();
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

var func_49()
{
	func_50();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_53(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_52(unk_0x16F2683693E537C9());
			if (func_51(iVar0) && (!func_2(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_51(Global_111638.f_2358.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
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

void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_60(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_30926, iParam0);
	StringCopy(&(Global_30927[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_30982[iParam0] = iParam1;
}

void func_61(var uParam0, int iParam1)
{
	func_62(uParam0, iParam1);
}

void func_62(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_65()
{
	unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
	unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
}

void func_66()
{
	func_68();
	func_67();
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_27[iVar0]) && !unk_0x437347B10A200C4B(Local_307.f_27[iVar0], 0))
		{
			unk_0x262EF6C6306BEA6C(Local_307.f_27[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0x25BD67336EA4AECE(Local_307.f_27[iVar0], 1000);
			unk_0x6DF7BF67E86AAE86(Local_307.f_27[iVar0], -183807561);
			unk_0xF5B281233FC43E54(Local_307.f_27[iVar0], false);
			unk_0x11AD11297DC58CC7(Local_307.f_27[iVar0], true);
			if (!unk_0xEB6A8945D1AC98A1(Local_307.f_27[iVar0]))
			{
				unk_0xF44B0E19CAC31C33(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xC844350D5D58C99A(Local_307.f_27[iVar0]))
		{
			Local_307.f_27[iVar0] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_10[iVar0], 1, true);
			wait(0);
		}
		iVar0++;
	}
	vVar1 = { unk_0x8A5E176FF719A014(Local_307[1 /*3*/], Local_307.f_10[1], -2f, 0f, 0f) };
	vVar2 = { unk_0x8A5E176FF719A014(Local_307[1 /*3*/], Local_307.f_10[1], -1f, 0f, 0f) };
	vVar3 = { unk_0x8A5E176FF719A014(Local_307[2 /*3*/], Local_307.f_10[2], 1f, 0f, 0f) };
	vVar4 = { unk_0x8A5E176FF719A014(Local_307[2 /*3*/], Local_307.f_10[2], -1f, 0f, 0f) };
	Local_307.f_31[0] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), vVar1, Local_307.f_10[1], 1, true);
	Local_307.f_31[1] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), vVar2, Local_307.f_10[1], 1, true);
	Local_307.f_31[2] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), vVar3, Local_307.f_10[2], 1, true);
	Local_307.f_31[3] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), vVar4, Local_307.f_10[2], 1, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_31[iVar0]))
		{
			unk_0x262EF6C6306BEA6C(Local_307.f_31[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			unk_0x25BD67336EA4AECE(Local_307.f_31[iVar0], 500);
			unk_0x6DF7BF67E86AAE86(Local_307.f_31[iVar0], -183807561);
			unk_0x7B97190AACA7600D(Local_307.f_31[iVar0], 0);
			unk_0x11AD11297DC58CC7(Local_307.f_31[iVar0], true);
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
}

void func_69()
{
	if (bLocal_294)
	{
		iLocal_289 = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		unk_0x56FDC9ADE35F7DB0(iLocal_289, true, true, 0);
		unk_0x873BCADC75FF6D20(iLocal_289);
		unk_0x37806EBF326ECEE9(iLocal_289, 0f, 0f, 10f);
		unk_0x25BD67336EA4AECE(iLocal_289, 500);
		if (func_28())
		{
			bLocal_292 = true;
			unk_0xC6730DF337EA7449(iLocal_289, 1, 0);
		}
		iLocal_290 = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, true);
		unk_0xF821F915BC24D246(iLocal_290, iLocal_289, -1);
		if (!unk_0x437347B10A200C4B(iLocal_289, 0))
		{
			unk_0x4D3C3C0B0DE2663E(iLocal_289, 101, "PrisonHeli", 1);
		}
		unk_0x71199B01895C6202(joaat("polmav"));
	}
}

void func_70()
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()
{
	Local_270[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_270[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_270[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_270[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0xBE70FF5503360367("miss_Tower_01");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_270[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_270[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_270[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0xBE70FF5503360367("miss_Tower_02");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_270[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_270[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_270[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0xBE70FF5503360367("miss_Tower_03");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_270[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_270[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_270[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0xBE70FF5503360367("miss_Tower_04");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_270[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_270[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_270[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0xBE70FF5503360367("miss_Tower_05");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_270[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_270[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_270[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0xBE70FF5503360367("miss_Tower_06");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_270[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_270[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_270[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0xBE70FF5503360367("miss_Tower_07");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_270[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_270[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_270[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0xBE70FF5503360367("miss_Tower_08");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
	Local_270[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_270[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_270[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_270[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0xBE70FF5503360367("miss_Tower_10");
	unk_0x8579C4FAF39811AB(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x8579C4FAF39811AB(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x09AC81E49EA267F7(5000, 10000));
	unk_0x091DAC24E0536E2F(0, 1);
	unk_0x091DAC24E0536E2F(1, 2);
	unk_0x091DAC24E0536E2F(2, 3);
	unk_0x091DAC24E0536E2F(3, 0);
	unk_0xCBA9E282E387BF9D();
	unk_0xF5461AF12522680D();
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_64[iVar0]) && !unk_0x437347B10A200C4B(Local_252.f_64[iVar0], 0))
		{
			unk_0x6DF7BF67E86AAE86(Local_252.f_64[iVar0], -183807561);
			unk_0x4E885A246A9D983A(Local_252.f_64[iVar0], 132, true);
			unk_0x23CBFFA16CA5CF45(Local_252.f_64[iVar0], 300f, 10);
			unk_0x9FA191B317572861(Local_252.f_64[iVar0], 1000f);
			unk_0xA656189732A3FF4B(Local_252.f_64[iVar0], 1000f);
			unk_0x967762C930C0C5FD(Local_252.f_64[iVar0], 1000f);
			unk_0x083F03A847B640E9(Local_252.f_64[iVar0], 2);
			unk_0xAFF39FB306F8E232(Local_252.f_64[iVar0], 13, true);
			unk_0xAFF39FB306F8E232(Local_252.f_64[iVar0], 0, false);
			unk_0x26A6B1686E33113F(Local_252.f_64[iVar0], 1);
			unk_0x3CC33E4E9CE523F4(Local_252.f_64[iVar0], 1);
			unk_0x16F8631A5D4FBCE5(Local_252.f_64[iVar0], 0f);
			unk_0xFADC0A217229F6B5(Local_252.f_64[iVar0], true);
			unk_0x298903DD96203C2C(Local_252.f_64[iVar0], 20);
			unk_0xB35CCEC0D4946813(Local_252.f_64[iVar0], 2);
			unk_0xAFF39FB306F8E232(Local_252.f_64[iVar0], 23, false);
			unk_0x262EF6C6306BEA6C(Local_252.f_64[iVar0], joaat("weapon_sniperrifle"), -1, true, true);
			unk_0x25BD67336EA4AECE(Local_252.f_64[iVar0], 1000);
			unk_0x11AD11297DC58CC7(Local_252.f_64[iVar0], true);
			unk_0x9FA191B317572861(Local_252.f_64[iVar0], 1000f);
			if (!unk_0xEB6A8945D1AC98A1(Local_252.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0x0D5B15BD519BC73C(Local_252.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0xF44B0E19CAC31C33(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	
	if (!unk_0x8E28E832BEAC3DCE(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_263[0] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, true, true, false);
		if (unk_0xC844350D5D58C99A(iLocal_263[0]) && !unk_0x437347B10A200C4B(iLocal_263[0], 0))
		{
			iLocal_264[0] = unk_0x852A19533F896693(iLocal_263[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x98868AF51859FC75(iLocal_264[0], false);
			unk_0x6DF7BF67E86AAE86(iLocal_264[0], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[0], false, 0);
			unk_0x4A4806F9D471E491(iLocal_263[0], false, 0);
			unk_0x98868AF51859FC75(iLocal_263[0], false);
			unk_0x1E9649458B15960F(iLocal_263[0], true);
		}
		wait(0);
	}
	if (!unk_0x8E28E832BEAC3DCE(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_263[1] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, true, true, false);
		if (unk_0xC844350D5D58C99A(iLocal_263[1]) && !unk_0x437347B10A200C4B(iLocal_263[1], 0))
		{
			iLocal_264[1] = unk_0x852A19533F896693(iLocal_263[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x98868AF51859FC75(iLocal_264[1], false);
			unk_0x6DF7BF67E86AAE86(iLocal_264[1], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[1], false, 0);
			unk_0x4A4806F9D471E491(iLocal_263[1], false, 0);
			unk_0x98868AF51859FC75(iLocal_263[1], false);
			unk_0x1E9649458B15960F(iLocal_263[1], true);
		}
		wait(0);
	}
	if (!unk_0x8E28E832BEAC3DCE(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_263[2] = unk_0x122AAB0B1D6F55AD(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, true, true, false);
		if (unk_0xC844350D5D58C99A(iLocal_263[2]) && !unk_0x437347B10A200C4B(iLocal_263[2], 0))
		{
			iLocal_264[2] = unk_0x852A19533F896693(iLocal_263[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, true);
			unk_0x98868AF51859FC75(iLocal_264[2], false);
			unk_0x6DF7BF67E86AAE86(iLocal_264[2], iLocal_250);
			unk_0x20641932E5104B25(iLocal_263[2], false, 0);
			unk_0x4A4806F9D471E491(iLocal_263[2], false, 0);
			unk_0x98868AF51859FC75(iLocal_263[2], false);
			unk_0x1E9649458B15960F(iLocal_263[2], true);
		}
		wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0xC844350D5D58C99A(iLocal_264[iVar0]) && !unk_0x437347B10A200C4B(iLocal_264[iVar0], 0)) && !unk_0x437347B10A200C4B(iLocal_263[iVar0], 0))
		{
			if (func_28())
			{
				iLocal_265[iVar0] = 1;
				unk_0xC6730DF337EA7449(iLocal_263[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xC844350D5D58C99A(Local_252.f_64[iVar0]))
		{
			Local_252.f_64[iVar0] = unk_0x36F2404464202779(6, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_31[iVar0], 1, true);
			unk_0x71199B01895C6202(joaat("s_m_m_prisguard_01"));
			wait(0);
		}
		iVar0++;
	}
}

void func_75()
{
	Local_252[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_252[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_252[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_252[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_252[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_252[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_252[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_252[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_252[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_252[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_252.f_31[0] = 248.9733f;
	Local_252.f_31[1] = 45.8793f;
	Local_252.f_31[2] = 186.3656f;
	Local_252.f_31[3] = 313.5206f;
	Local_252.f_31[4] = 95.9574f;
	Local_252.f_31[5] = 289.3531f;
	Local_252.f_31[6] = 13.7511f;
	Local_252.f_31[7] = 0f;
	Local_252.f_31[8] = 208.5786f;
	Local_252.f_31[9] = 280.9389f;
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0x1C2E18E9C63BEB77(Local_307.f_14[iVar0]))
		{
			wait(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()
{
	if (bLocal_298)
	{
		if (!unk_0xB87F6CF6E5628C67(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x1C2E18E9C63BEB77(Local_252.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	if (bLocal_294)
	{
		if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x3DDA6C6A285628E4(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	int iVar0;
	
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x29398344B9E5B8A7(Local_307.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()
{
	Local_307[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_307[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_307[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_307.f_10[0] = 0f;
	Local_307.f_10[1] = 0f;
	Local_307.f_10[2] = 198.4323f;
	Local_307.f_14[0] = "PatrolGuard02";
	Local_307.f_14[1] = "PatrolGuard03";
	Local_307.f_14[2] = "PatrolGuard04";
}

void func_83()
{
	int iVar0;
	
	Local_252.f_42[0] = "TowerGuard01";
	Local_252.f_42[1] = "TowerGuard02";
	Local_252.f_42[2] = "TowerGuard03";
	Local_252.f_42[3] = "TowerGuard04";
	Local_252.f_42[4] = "TowerGuard05";
	Local_252.f_42[5] = "TowerGuard06";
	Local_252.f_42[6] = "TowerGuard07";
	Local_252.f_42[7] = "TowerGuard08";
	Local_252.f_42[8] = "TowerGuard09";
	Local_252.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x29398344B9E5B8A7(Local_252.f_42[iVar0]);
		iVar0++;
	}
	unk_0x523BCC9DC80CD82F(joaat("polmav"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_prisguard_01"));
}

void func_84()
{
	bLocal_294 = false;
	if (func_28())
	{
		iLocal_295 = (unk_0x09AC81E49EA267F7(0, 65535) % 2);
		if (iLocal_295 == 0)
		{
			bLocal_294 = true;
			unk_0x523BCC9DC80CD82F(joaat("polmav"));
			unk_0x36187931D29E5BBE(101, "PrisonHeli");
		}
		else
		{
			bLocal_294 = false;
		}
	}
}

void func_85()
{
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_security_01"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_prisguard_01"));
	unk_0x523BCC9DC80CD82F(joaat("polmav"));
}

void func_86()
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0;
	func_87();
	func_34();
	Local_70.f_4 = 75;
	Local_70.f_6 = 15;
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	unk_0xF63400DBE3303D26("Prison_Guards", &iLocal_250);
	unk_0xF63400DBE3303D26("Prison_Prisoners", &iLocal_251);
	unk_0x0E2400AB9174FA81(2, iLocal_250, iLocal_251);
	unk_0x0E2400AB9174FA81(2, iLocal_251, iLocal_250);
	unk_0x0E2400AB9174FA81(1, iLocal_250, -1533126372);
	unk_0x0E2400AB9174FA81(1, -1533126372, iLocal_250);
	unk_0x0E2400AB9174FA81(3, 1862763509, iLocal_251);
	unk_0x0E2400AB9174FA81(3, iLocal_251, 1862763509);
}

void func_87()
{
	vLocal_53[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	vLocal_53[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	vLocal_53[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	vLocal_53[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	vLocal_53[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	vLocal_53[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	vLocal_53[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	vLocal_53[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	vLocal_53[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	vLocal_53[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	vLocal_53[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	vLocal_53[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_88()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, true, 0))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, false, 0))
			{
				if (unk_0x82D09C8DBB516A49(unk_0xD803B885F5E47A62()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 4, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					unk_0x0E2400AB9174FA81(5, 1862763509, -183807561);
					unk_0x0E2400AB9174FA81(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
				if ((unk_0xD3DCEC81D13AAFB1(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62())) || (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) && !unk_0x82D09C8DBB516A49(unk_0xD803B885F5E47A62())))
				{
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 1, 0);
					unk_0x0E2400AB9174FA81(5, 1862763509, -183807561);
					unk_0x0E2400AB9174FA81(5, -183807561, 1862763509);
					iLocal_56 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)
{
	int iVar0;
	
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	unk_0x7B35981153AECDBE("PRISON_ALARMS", true);
	if (iLocal_56)
	{
		unk_0x0E2400AB9174FA81(2, 1862763509, -183807561);
		unk_0x0E2400AB9174FA81(2, -183807561, 1862763509);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x49083FDB78AC0509(iLocal_52[iVar0]))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0f, 0f, 0f);
	unk_0x23406846FAACA3CA(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0f);
	if (bParam0)
	{
		unk_0x536F1BE96C726C4B(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, false);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_90()
{
	if (unk_0xC844350D5D58C99A(iLocal_66))
	{
		unk_0x046C362CF15F1935(&iLocal_66);
	}
	if (unk_0xC844350D5D58C99A(iLocal_68))
	{
		unk_0x6DAD7906B73F064D(&iLocal_68);
	}
	if (unk_0xC844350D5D58C99A(iLocal_67))
	{
		unk_0x046C362CF15F1935(&iLocal_67);
	}
	if (unk_0xC844350D5D58C99A(iLocal_69))
	{
		unk_0x6DAD7906B73F064D(&iLocal_69);
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_27[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_307.f_36[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_307.f_36[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_307.f_27[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_307.f_27[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_307.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC844350D5D58C99A(Local_307.f_31[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_307.f_40[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_307.f_40[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_307.f_31[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_307.f_31[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_307.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_301))
	{
		unk_0x142CC44DB769B57E(&iLocal_301);
	}
	if (unk_0xC844350D5D58C99A(iLocal_299))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_299);
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xC844350D5D58C99A(uLocal_296[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_297[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_297[iVar0]));
			}
			unk_0xEBA53F35D0085654(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(iLocal_263[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_263[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_264[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC844350D5D58C99A(Local_252.f_64[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(Local_252.f_75[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(Local_252.f_75[iVar0]));
			}
			if (unk_0x03068588A1FCED1A(Local_252.f_64[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(Local_252.f_64[iVar0]));
			}
			else
			{
				unk_0x6DAD7906B73F064D(&(Local_252.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_291))
	{
		unk_0x142CC44DB769B57E(&iLocal_291);
	}
	if (unk_0xC844350D5D58C99A(iLocal_289))
	{
		if (unk_0x03068588A1FCED1A(iLocal_289))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_289);
			unk_0xEBA53F35D0085654(&iLocal_290);
		}
		else
		{
			func_96(&iLocal_289, &iLocal_290);
			unk_0x046C362CF15F1935(&iLocal_289);
		}
	}
}

void func_96(int iParam0, var uParam1)
{
	if (((unk_0xC844350D5D58C99A(*iParam0) && unk_0xC844350D5D58C99A(*uParam1)) && !unk_0x437347B10A200C4B(*iParam0, 0)) && !unk_0x437347B10A200C4B(*uParam1, 0))
	{
		if (unk_0xE934758D273C899A(*iParam0))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x0C4243AF9A434F34(*uParam1, *iParam0, 0, 0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

