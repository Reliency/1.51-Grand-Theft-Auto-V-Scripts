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
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_49[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[4] = { 0, 0, 0, 0 };
	int iLocal_84[4] = { 0, 0, 0, 0 };
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_88[4] = { 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[4] = { 0, 0, 0, 0 };
	int iLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95[4] = { 0, 0, 0, 0 };
	var uLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	int iLocal_99[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_280[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_281 = { 0f, 0f, 0f };
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	struct<2> Local_284 = { 0, 5 } ;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	vLocal_100 = { -1635.648f, 4737.801f, 52.4304f };
	vLocal_101 = { -1640.745f, 4696.386f, 39.279f };
	vLocal_47 = { ScriptParam_284.f_1[0 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(11))
	{
		func_180();
	}
	if (func_138(vLocal_47, -1, 0, 0, 0))
	{
		func_135(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		if ((unk_0x338D6FF72D84D90F() || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_134())
			{
				if (func_133())
				{
					func_180();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_282)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_121())
						{
							func_180();
						}
						func_118();
					}
					break;
				
				case 1:
					func_117();
					func_106();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_117();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_117();
							func_81();
							if (iLocal_46 >= 6)
							{
								if (!func_80())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_110)
										{
											func_79(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
											func_74(iLocal_88[0], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_74(iLocal_88[1], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 2f, 0f, 1000, 0f);
											func_69(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_107)
										{
											func_79(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
											func_74(iLocal_86[0], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_74(iLocal_86[1], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_69(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_108)
										{
											func_79(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
											func_74(iLocal_87[0], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_74(iLocal_87[1], unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_69(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_46();
								}
							}
							if (((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) || unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9())) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_100, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_46();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xB547E3FFEB27073E();
		unk_0x51B096AAC60548C1(1f);
		if (unk_0xE4EDC4B0E92C078B(iLocal_89))
		{
			unk_0x142CC44DB769B57E(&iLocal_89);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_90))
		{
			unk_0x142CC44DB769B57E(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_93[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_93[iVar0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_95[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_83[iVar0], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_94[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_94[iVar0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_96[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_84[iVar0], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0x15EA7F4313456B1D(5, true);
			unk_0x15EA7F4313456B1D(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_40(), 1, 25000);
		}
		iLocal_105 = 1;
	}
	if (!unk_0x8E28E832BEAC3DCE(vLocal_100, 30f) && vdist(func_2(unk_0xD803B885F5E47A62()), vLocal_100) > 300f)
	{
		func_180();
	}
}

Vector3 func_2(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (func_39(iParam0) == 3)
	{
		return 0;
	}
	if (func_39(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_39(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_38();
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
					func_37(99, 1);
					func_36(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_20(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_15(5))
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
							func_36(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_15(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_36(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_36(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_36(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_36(joaat("sp2_money_spent_property"), iParam3);
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
									func_36(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_15(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_36(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_36(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_36(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_14(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_37(95, iParam3);
					break;
				
				case 1:
					func_37(97, iParam3);
					break;
				
				case 2:
					func_37(96, iParam3);
					break;
			}
			func_37(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_36(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_36(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_36(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_41431 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_13(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_13(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_13(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_10(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_10(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_10(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_10(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_10(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_10(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_9() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_9() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_8(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)
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

int func_9()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_12();
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

void func_14(int iParam0)
{
	func_37(93, iParam0);
	func_37(29, iParam0);
	func_37(30, iParam0);
}

bool func_15(int iParam0)
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
		return func_17(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_17(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_17(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_17(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_16(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_16(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_16(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_16(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_16(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_16(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_9() /*10930*/].f_6174.f_10, iParam0);
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_11(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
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

int func_20(bool bParam0)
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
		func_35(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_21(27, 1);
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_22(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	if (func_34(14) && !func_33(iParam0))
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
	if (func_32(&Global_4270065))
	{
		if (func_30(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_23(&Global_4270065, iParam0))
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

int func_23(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	func_26(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_24(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_24(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_34(14) && !func_33(iParam1))
	{
		return 0;
	}
	if (func_30(uParam0, iParam1))
	{
		return 0;
	}
	if (func_29(uParam0) < 0f)
	{
		func_28(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_25(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_27(uParam0, iVar0);
		iVar0++;
	}
	func_28(uParam0, (Global_4270064 - 0.5f));
}

void func_27(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_28(var uParam0, float fParam1)
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

float func_29(var uParam0)
{
	return uParam0->f_80;
}

bool func_30(var uParam0, int iParam1)
{
	return func_31(uParam0, iParam1) != -1;
}

int func_31(var uParam0, int iParam1)
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

bool func_32(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_33(int iParam0)
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_37(int iParam0, int iParam1)
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

void func_38()
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

int func_39(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_40()
{
	func_41();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_41()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_44(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_43(unk_0x16F2683693E537C9());
			if (func_42(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_42(Global_111638.f_2358.f_539.f_4321))
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

bool func_42(int iParam0)
{
	return iParam0 < 3;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_44(int iParam0)
{
	if (func_42(iParam0))
	{
		return func_45(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_45(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_46()
{
	while (func_68())
	{
		wait(0);
	}
	while (!func_67())
	{
		wait(0);
	}
	func_50(-1, 0);
	func_47();
	iLocal_45 = 3;
}

void func_47()
{
	func_48();
}

int func_48()
{
	if (func_49(0))
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

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_50(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_52(func_55(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_51(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_51(7);
			}
			else
			{
				func_51(1);
			}
		}
	}
}

void func_51(int iParam0)
{
	Global_111624 = iParam0;
}

void func_52(int iParam0, var uParam1, var uParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_53();
	}
}

void func_53()
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
		func_35(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_54() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()
{
	return Global_30768;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_41();
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

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	return 1;
}

int func_68()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0xC844350D5D58C99A(*uParam2))
	{
		if (unk_0xDF1306B443CD3D15(*uParam2, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(*uParam0))
			{
				if (unk_0xC42A92762C58E1B9(*uParam0, *uParam2, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(*iParam1))
					{
						unk_0x142CC44DB769B57E(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					*iParam1 = func_72(*uParam0, 1, 145);
				}
			}
			if (!unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_70(unk_0x68F4C0EC296D3901(*uParam2, true), 0);
					unk_0x61755AC17D8F538E(*iParam3, 1);
					unk_0x2A065371C9D96655(*iParam3, 9);
					unk_0xDC5B2F9D0CCE3A10(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0xAC14F6E4B17D7835(*iParam3) };
				vVar2 = { unk_0x68F4C0EC296D3901(*uParam2, true) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * timestep()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * timestep()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * timestep()));
				unk_0x2F9282246F89FFD1(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0x142CC44DB769B57E(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				unk_0x142CC44DB769B57E(iParam3);
			}
			if (!unk_0xEB6A8945D1AC98A1(*uParam0))
			{
				if (!unk_0xE4EDC4B0E92C078B(*iParam1))
				{
					*iParam1 = func_72(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_70(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_72(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_73(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_74(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (((((((unk_0xC844350D5D58C99A(iParam1) && iParam0 != iParam1) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iParam1))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam1))) && unk_0xF79A7BCA9E38BBBC(iParam1)) && func_78(iParam0))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { unk_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
				func_77(iParam1, uParam4, fParam5);
			}
			if (!unk_0x03068588A1FCED1A(iParam0))
			{
				*uParam6 = unk_0x1C0640BA9A7327B3();
			}
			else if ((unk_0x1C0640BA9A7327B3() - *uParam6) > iParam8)
			{
				if (func_76(iParam0, iParam1, 1) > fParam9 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_75(*uParam2))
					{
						if (!unk_0x8E28E832BEAC3DCE(*uParam2, 3f))
						{
							unk_0x745CE398A4B0A3C6(*uParam2, 1.5f, 0);
							unk_0x28F5E4DA506AC0CA(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0xA47B46945FF6DE74(iParam0, *uParam2, 1, false, 0, 1);
							unk_0xD8F6A53F4799FAFE(iParam0, *uParam3);
							unk_0xB9FD7450C0DAB575(iParam0, 1084227584);
							unk_0x1AEF7184B203A58D(iParam0, 10f);
							unk_0x56FDC9ADE35F7DB0(iParam0, true, true, 0);
							*uParam6 = unk_0x1C0640BA9A7327B3();
						}
						else
						{
							vVar0 = { unk_0x8A5E176FF719A014(vLocal_61, fLocal_60, vParam7) };
							if (!func_75(vVar0))
							{
								if (!unk_0x8E28E832BEAC3DCE(vVar0, 2f))
								{
									unk_0x745CE398A4B0A3C6(vVar0, 1.5f, 0);
									unk_0x28F5E4DA506AC0CA(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0xA47B46945FF6DE74(iParam0, vVar0, 1, false, 0, 1);
									unk_0xD8F6A53F4799FAFE(iParam0, fLocal_60);
									unk_0xB9FD7450C0DAB575(iParam0, 1084227584);
									unk_0x1AEF7184B203A58D(iParam0, 10f);
									unk_0x56FDC9ADE35F7DB0(iParam0, true, true, 0);
									*uParam6 = unk_0x1C0640BA9A7327B3();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_75(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_76(int iParam0, int iParam1, bool bParam2)
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

void func_77(int iParam0, var uParam1, var uParam2)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			*uParam1 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			*uParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
	}
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (!unk_0xBBA8A868118C90ED(iParam0, -1, 0))
			{
				iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam1))
			{
				unk_0x142CC44DB769B57E(iParam1);
			}
			unk_0x6DAD7906B73F064D(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x405E212DDE472467(*iParam0, 0))
			{
			}
			else if (unk_0xC844350D5D58C99A(*iParam2))
			{
				if (unk_0xDF1306B443CD3D15(*iParam2, 0))
				{
					if (unk_0xC42A92762C58E1B9(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(*iParam2))
	{
		if (unk_0xDF1306B443CD3D15(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x78CCB85A0DC35709(*iParam2);
				unk_0x7AA3AFA47C4179D1(*iParam2);
				unk_0x06FF977AA95DCCE3(*iParam2, 0);
				unk_0x046C362CF15F1935(iParam2);
				if (unk_0xE4EDC4B0E92C078B(*iParam3))
				{
					unk_0x142CC44DB769B57E(iParam3);
				}
			}
		}
		else
		{
			unk_0x78CCB85A0DC35709(*iParam2);
			unk_0x7AA3AFA47C4179D1(*iParam2);
			unk_0x06FF977AA95DCCE3(*iParam2, 0);
			unk_0x046C362CF15F1935(iParam2);
			if (unk_0xE4EDC4B0E92C078B(*iParam3))
			{
				unk_0x142CC44DB769B57E(iParam3);
			}
		}
	}
}

int func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_283)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xC844350D5D58C99A(iLocal_83[iVar1]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar1]))
			{
				if (unk_0x12DE711B1C681E9E(iLocal_83[iVar1], unk_0x16F2683693E537C9(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xC844350D5D58C99A(iLocal_84[iVar1]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar1]))
			{
				if (unk_0x12DE711B1C681E9E(iLocal_84[iVar1], unk_0x16F2683693E537C9(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_81()
{
	int iVar0;
	
	if (bLocal_283)
	{
		if (bLocal_110)
		{
		}
		else if (bLocal_107)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_83[0]) && !unk_0x437347B10A200C4B(iLocal_86[0], 0))
			{
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_83[1]) && !unk_0x437347B10A200C4B(iLocal_86[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_84[0]) && !unk_0x437347B10A200C4B(iLocal_87[0], 0))
			{
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_84[1]) && !unk_0x437347B10A200C4B(iLocal_87[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x86CAA5D3F05B31D6(iLocal_99[iVar0]);
			if (unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_93[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_93[iVar0]));
					iLocal_68++;
				}
			}
			else if (!unk_0x405E212DDE472467(iLocal_83[iVar0], 0))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_93[iVar0]))
				{
					iLocal_93[iVar0] = func_72(iLocal_83[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0x86CAA5D3F05B31D6(iLocal_99[iVar0]);
			if (unk_0xEB6A8945D1AC98A1(iLocal_84[iVar0]))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_94[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_94[iVar0]));
					iLocal_69++;
				}
			}
			else if (!unk_0x405E212DDE472467(iLocal_84[iVar0], 0))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_94[iVar0]))
				{
					iLocal_94[iVar0] = func_72(iLocal_84[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_68 >= 4 && iLocal_69 >= 4)
		{
			func_46();
		}
	}
	func_102();
	func_101();
	switch (iLocal_46)
	{
		case 0:
			if (((unk_0x7FDF4A8CA9E38E9E(unk_0xD803B885F5E47A62()) || !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_100 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_110)
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_110 = true;
					}
				}
				if (unk_0xDE5F9F54005367A1(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), &vLocal_102, 1, 1077936128, 0))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_102, 20f, 20f, 20f, false, true, 0))
					{
						unk_0x15EA7F4313456B1D(5, true);
						unk_0x15EA7F4313456B1D(3, true);
						settimera(0);
						func_99();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (timera() > 5000 || bLocal_110)
			{
				settimera(0);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_110)
			{
				if (timera() > 3500)
				{
					if (((!unk_0x437347B10A200C4B(iLocal_88[0], 0) && !unk_0x437347B10A200C4B(iLocal_88[1], 0)) && !unk_0xEB6A8945D1AC98A1(iLocal_83[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_83[1]))
					{
						unk_0xF821F915BC24D246(iLocal_83[0], iLocal_88[0], -1);
						unk_0xF821F915BC24D246(iLocal_83[1], iLocal_88[1], -1);
						unk_0xAFF39FB306F8E232(iLocal_83[0], 3, false);
						unk_0xAFF39FB306F8E232(iLocal_83[1], 3, false);
						unk_0xCC095276B3DD380E(iLocal_83[0], 0);
						unk_0xCC095276B3DD380E(iLocal_83[1], 0);
						iLocal_46 = 5;
					}
				}
			}
			if (timera() > 10000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (!unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_103 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			iLocal_76 = unk_0x09AC81E49EA267F7(10, 15);
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x4490D017C57827E9(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x8E28E832BEAC3DCE(vLocal_280[0 /*3*/], 7f) && !unk_0x8E28E832BEAC3DCE(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_86[0], 0))
						{
							unk_0xA47B46945FF6DE74(iLocal_86[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_98(iLocal_86[0], iLocal_83[0]);
						}
						if (unk_0xDF1306B443CD3D15(iLocal_86[1], 0))
						{
							unk_0xA47B46945FF6DE74(iLocal_86[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_98(iLocal_86[1], iLocal_83[1]);
						}
						if (func_40() == 0)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_40() == 1)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_40() == 2)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_107 = true;
						settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_103 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			iLocal_76 = unk_0x09AC81E49EA267F7(30, 35);
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x4490D017C57827E9(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x8E28E832BEAC3DCE(vLocal_280[0 /*3*/], 7f) && !unk_0x8E28E832BEAC3DCE(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_87[0], 0))
						{
							unk_0xA47B46945FF6DE74(iLocal_87[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_98(iLocal_87[0], iLocal_84[0]);
						}
						if (unk_0xDF1306B443CD3D15(iLocal_87[1], 0))
						{
							unk_0xA47B46945FF6DE74(iLocal_87[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_98(iLocal_87[1], iLocal_84[1]);
						}
						if (func_40() == 0)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_40() == 1)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_40() == 2)
						{
							func_82(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						settimera(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_103 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			iLocal_76 = unk_0x09AC81E49EA267F7(5, 10);
			if (unk_0x4490D017C57827E9(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x8E28E832BEAC3DCE(vLocal_280[0 /*3*/], 7f) && !unk_0x8E28E832BEAC3DCE(vLocal_280[1 /*3*/], 7f))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_88[0], 0))
					{
						unk_0xA47B46945FF6DE74(iLocal_88[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
						func_98(iLocal_88[0], iLocal_83[0]);
					}
					if (unk_0xDF1306B443CD3D15(iLocal_88[1], 0))
					{
						unk_0xA47B46945FF6DE74(iLocal_88[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
						func_98(iLocal_88[1], iLocal_83[1]);
					}
					if (func_40() == 0)
					{
						func_82(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_40() == 1)
					{
						func_82(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_40() == 2)
					{
						func_82(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_107 = true;
					settimera(0);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_68())
			{
				fLocal_64 = unk_0x79833B02DBD2A244(1.5f, 2.5f);
				fLocal_65 = unk_0x79833B02DBD2A244(2f, 4f);
				fLocal_66 = unk_0x79833B02DBD2A244(0.1f, 2f);
				if (iLocal_78 < 5 && iLocal_79 < unk_0x1C0640BA9A7327B3())
				{
					vLocal_50 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
					unk_0xECC26BBDC0AD318B((vLocal_50.x + fLocal_64), (vLocal_50.y + fLocal_65), (vLocal_50.z + fLocal_66), (vLocal_50.x - fLocal_64), (vLocal_50.y - fLocal_65), vLocal_50.z, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_79 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(200, 500));
					iLocal_78++;
				}
			}
			if (iLocal_78 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_82(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_97(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					func_96();
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
		if (func_95(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_94();
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
				func_93();
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
				if (func_92())
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
			if (func_91())
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
			func_90();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_89();
		func_84();
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
		func_96();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
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

int func_85()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_88())
	{
		return 0;
	}
	if (func_86(unk_0xD803B885F5E47A62()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

bool func_87(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_88()
{
	return -1;
}

void func_89()
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

void func_90()
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

int func_91()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_92()
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

void func_93()
{
	if (func_34(14))
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
		Global_19486 = func_40();
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

void func_94()
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

bool func_95(int iParam0, int iParam1)
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

void func_96()
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

void func_97(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_98(int iParam0, int iParam1)
{
	unk_0x1E9649458B15960F(iParam0, false);
	unk_0xB9FD7450C0DAB575(iParam0, 1084227584);
	vLocal_279 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	vLocal_281 = { vLocal_103 - vLocal_279 };
	unk_0xD8F6A53F4799FAFE(iParam0, unk_0xE7D606C557C86100(vLocal_281.x, vLocal_281.y));
	if (bLocal_110)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x0D88E2F7C05BF3A2(iParam1, unk_0x16F2683693E537C9());
				wait(1);
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					unk_0x91CF06FFB63510D4(iParam1, 32, 1);
				}
			}
			else
			{
				unk_0x89258193691A7600(iParam1, iParam0, unk_0x16F2683693E537C9(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x437347B10A200C4B(iParam0, 0))
			{
				unk_0x1AEF7184B203A58D(iParam0, unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()));
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x0D88E2F7C05BF3A2(iParam1, unk_0x16F2683693E537C9());
		}
		else
		{
			unk_0x89258193691A7600(iParam1, iParam0, unk_0x16F2683693E537C9(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0x1AEF7184B203A58D(iParam0, unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()));
	}
}

void func_99()
{
	int iVar0;
	
	iLocal_86[0] = unk_0x122AAB0B1D6F55AD(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_86[0], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_86[0], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_86[0], 2);
	unk_0x7980D72D61BEF4D5(iLocal_86[0], true);
	unk_0x1E9649458B15960F(iLocal_86[0], true);
	unk_0x55A3C4ED4728EA42(iLocal_86[0], "49GNL112");
	iLocal_86[1] = unk_0x122AAB0B1D6F55AD(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_86[1], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_86[1], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_86[1], 2);
	unk_0x7980D72D61BEF4D5(iLocal_86[1], true);
	unk_0x1E9649458B15960F(iLocal_86[1], true);
	unk_0x55A3C4ED4728EA42(iLocal_86[1], "47TMS703");
	iLocal_88[0] = unk_0x122AAB0B1D6F55AD(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_88[0], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_88[0], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_88[0], 2);
	unk_0x7980D72D61BEF4D5(iLocal_88[0], true);
	unk_0x1E9649458B15960F(iLocal_88[0], true);
	unk_0x55A3C4ED4728EA42(iLocal_88[0], "49GNL112");
	iLocal_88[1] = unk_0x122AAB0B1D6F55AD(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_88[1], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_88[1], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_88[1], 2);
	unk_0x7980D72D61BEF4D5(iLocal_88[1], true);
	unk_0x1E9649458B15960F(iLocal_88[1], true);
	unk_0x55A3C4ED4728EA42(iLocal_88[1], "47TMS703");
	iLocal_83[0] = unk_0x852A19533F896693(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_83[1] = unk_0x852A19533F896693(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!bLocal_110)
	{
		iLocal_83[2] = unk_0x852A19533F896693(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
		iLocal_83[3] = unk_0x852A19533F896693(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
	}
	iLocal_87[0] = unk_0x122AAB0B1D6F55AD(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_87[0], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_87[0], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_87[0], 2);
	unk_0x7980D72D61BEF4D5(iLocal_87[0], true);
	unk_0x1E9649458B15960F(iLocal_87[0], true);
	unk_0x55A3C4ED4728EA42(iLocal_87[0], "49GNL112");
	iLocal_87[1] = unk_0x122AAB0B1D6F55AD(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	unk_0x73270B3C9CC833FD(iLocal_87[1], true, 0);
	unk_0x56FDC9ADE35F7DB0(iLocal_87[1], true, true, 0);
	unk_0x0882E3DC0C991680(iLocal_87[1], 2);
	unk_0x7980D72D61BEF4D5(iLocal_87[1], true);
	unk_0x1E9649458B15960F(iLocal_87[1], true);
	unk_0x55A3C4ED4728EA42(iLocal_87[1], "47TMS703");
	iLocal_84[0] = unk_0x852A19533F896693(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[1] = unk_0x852A19533F896693(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[2] = unk_0x852A19533F896693(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	iLocal_84[3] = unk_0x852A19533F896693(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	unk_0xF63400DBE3303D26("RE_deal1", &iLocal_111);
	unk_0xF63400DBE3303D26("RE_deal2", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
		{
			unk_0x6DF7BF67E86AAE86(iLocal_83[iVar0], iLocal_111);
			unk_0x73270B3C9CC833FD(iLocal_83[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x262EF6C6306BEA6C(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_83[1]))
				{
					unk_0x262EF6C6306BEA6C(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0x298903DD96203C2C(iLocal_83[iVar0], 15);
				unk_0xAFF39FB306F8E232(iLocal_83[iVar0], 3, false);
			}
			else
			{
				unk_0x262EF6C6306BEA6C(iLocal_83[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0x298903DD96203C2C(iLocal_83[iVar0], 13);
			}
			unk_0xAFF39FB306F8E232(iLocal_83[iVar0], 13, true);
			unk_0xAFF39FB306F8E232(iLocal_83[iVar0], 2, true);
			unk_0xAFF39FB306F8E232(iLocal_83[iVar0], 1, true);
			func_100(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
		{
			unk_0x6DF7BF67E86AAE86(iLocal_84[iVar0], iLocal_112);
			unk_0x73270B3C9CC833FD(iLocal_84[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x262EF6C6306BEA6C(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_83[1]))
				{
					unk_0x262EF6C6306BEA6C(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0x298903DD96203C2C(iLocal_83[iVar0], 15);
				unk_0xAFF39FB306F8E232(iLocal_83[iVar0], 3, false);
				func_100(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x262EF6C6306BEA6C(iLocal_84[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0x298903DD96203C2C(iLocal_84[iVar0], 13);
				func_100(&uLocal_114, 5, iLocal_84[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0xAFF39FB306F8E232(iLocal_84[iVar0], 13, true);
			unk_0xAFF39FB306F8E232(iLocal_84[iVar0], 2, true);
			unk_0xAFF39FB306F8E232(iLocal_84[iVar0], 1, true);
		}
		iVar0++;
	}
	unk_0x0E2400AB9174FA81(3, iLocal_111, iLocal_112);
	unk_0x0E2400AB9174FA81(3, iLocal_112, iLocal_111);
	unk_0x0E2400AB9174FA81(3, iLocal_111, 1862763509);
	unk_0x0E2400AB9174FA81(3, iLocal_112, 1862763509);
	unk_0x71199B01895C6202(joaat("g_m_m_chigoon_02"));
	unk_0x71199B01895C6202(joaat("g_m_y_salvagoon_03"));
	unk_0x71199B01895C6202(joaat("rebel"));
	unk_0x71199B01895C6202(joaat("bobcatxl"));
	unk_0x71199B01895C6202(joaat("sanchez"));
	unk_0x71199B01895C6202(joaat("a_c_rottweiler"));
	bLocal_283 = true;
	iLocal_44 = 1;
}

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_74)
	{
		case 0:
			if (bLocal_107)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_83[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_108)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar1]))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_84[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0x0E2400AB9174FA81(5, iLocal_111, iLocal_112);
			unk_0x0E2400AB9174FA81(5, iLocal_112, iLocal_111);
			unk_0x0E2400AB9174FA81(5, iLocal_111, 1862763509);
			unk_0x0E2400AB9174FA81(5, iLocal_112, 1862763509);
			if (bLocal_107)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar2]))
					{
						if ((!unk_0x4734A6196B611C3B(iLocal_83[iVar2], 0) && unk_0xD1960163A3042274(iLocal_83[iVar2], 579380604) != 1) && unk_0xD1960163A3042274(iLocal_83[iVar2], 579380604) != 0)
						{
							unk_0xA3BF0AA5A2608191(iLocal_83[iVar2]);
							unk_0x6C3AE6E278DB3D0E(iLocal_83[iVar2], unk_0x16F2683693E537C9(), 0, 16);
							unk_0xFADC0A217229F6B5(iLocal_83[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_82(&uLocal_114, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x1C0640BA9A7327B3();
					iLocal_74 = 4;
				}
			}
			if (bLocal_108)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar3]))
					{
						if ((!unk_0x4734A6196B611C3B(iLocal_84[iVar3], 0) && unk_0xD1960163A3042274(iLocal_84[iVar3], 579380604) != 1) && unk_0xD1960163A3042274(iLocal_84[iVar3], 579380604) != 0)
						{
							unk_0xA3BF0AA5A2608191(iLocal_84[iVar3]);
							unk_0x6C3AE6E278DB3D0E(iLocal_84[iVar3], unk_0x16F2683693E537C9(), 0, 16);
							unk_0xFADC0A217229F6B5(iLocal_84[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_82(&uLocal_114, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x1C0640BA9A7327B3();
					iLocal_74 = 4;
				}
			}
			break;
	}
}

void func_102()
{
	switch (iLocal_72)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_101, 7f, 7f, 10f, false, true, 0))
				{
					func_104();
					wait(0);
					func_82(&uLocal_114, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x0C8C0C840C2D1AD2(iLocal_80, unk_0x16F2683693E537C9(), -1, 2048, 2);
					if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
					{
						iLocal_90 = func_103(iLocal_97);
					}
					iLocal_71 = unk_0x1C0640BA9A7327B3();
					iLocal_72++;
				}
			}
			else
			{
				iLocal_72++;
			}
			break;
	}
	switch (iLocal_73)
	{
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_80, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_68())
					{
						func_82(&uLocal_114, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_80, unk_0x16F2683693E537C9(), -1, 2048, 2);
							settimerb(0);
							iLocal_73++;
						}
					}
				}
			}
			else
			{
				settimerb(0);
				iLocal_73++;
			}
			break;
		
		case 2:
			if (!func_68() || timerb() > 4000)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
				{
					unk_0xD458AC1C1D29C3B4(iLocal_80, 0, 0);
					unk_0x142CC44DB769B57E(&iLocal_91);
				}
				if (timerb() > 7000)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_81[6]))
					{
						unk_0xD458AC1C1D29C3B4(iLocal_81[6], 0, 0);
						unk_0x142CC44DB769B57E(&(iLocal_92[6]));
					}
				}
				if (timerb() > 9000)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
					{
						unk_0xD458AC1C1D29C3B4(iLocal_81[7], 0, 0);
						unk_0x142CC44DB769B57E(&(iLocal_92[7]));
					}
					iLocal_73++;
				}
			}
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_81[6]))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_81[6], 0, 0);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_81[7], 0, 0);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_80, 0, 0);
			}
			break;
	}
}

int func_103(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_71(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

void func_104()
{
	Global_19671 = 0;
	func_105();
}

void func_105()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_106()
{
	int iVar0;
	
	if (unk_0xEB751B41BC4080D4(iLocal_97))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_89))
		{
			unk_0x142CC44DB769B57E(&iLocal_89);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_90))
		{
			unk_0x142CC44DB769B57E(&iLocal_90);
		}
		iLocal_73 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		unk_0x51B096AAC60548C1(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(iLocal_81[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_81[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_92[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_92[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_82)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_82[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_134())
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_48[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_89))
				{
					unk_0x142CC44DB769B57E(&iLocal_89);
				}
				if ((!unk_0xE4EDC4B0E92C078B(iLocal_91) && !unk_0xE4EDC4B0E92C078B(iLocal_92[6])) && !unk_0xE4EDC4B0E92C078B(iLocal_92[7]))
				{
					iLocal_91 = func_72(iLocal_80, 1, 145);
					iLocal_92[6] = func_72(iLocal_81[6], 1, 145);
					iLocal_92[7] = func_72(iLocal_81[7], 1, 145);
				}
				unk_0xF2D30B8ACAF12A39(iLocal_91, false);
				unk_0xF2D30B8ACAF12A39(iLocal_92[6], false);
				unk_0xF2D30B8ACAF12A39(iLocal_92[7], false);
				func_107(1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_81[6]))
		{
			if (((((unk_0xD1960163A3042274(iLocal_81[6], 1785177548) != 1 && unk_0xD1960163A3042274(iLocal_81[6], 1785177548) != 0) || unk_0x4E861BC5B1EDA7BD(iLocal_81[6])) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_81[6])) || unk_0x688A90832774AB83(iLocal_81[6])) || unk_0xD24FAF25ADC00F44(iLocal_81[6]))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_81[6], 0, 0);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
		{
			if (((((unk_0xD1960163A3042274(iLocal_81[7], 1785177548) != 1 && unk_0xD1960163A3042274(iLocal_81[7], 1785177548) != 0) || unk_0x4E861BC5B1EDA7BD(iLocal_81[7])) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_81[7])) || unk_0x688A90832774AB83(iLocal_81[7])) || unk_0xD24FAF25ADC00F44(iLocal_81[7]))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_81[7], 0, 0);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
		{
			if (((((unk_0xD1960163A3042274(iLocal_80, 1785177548) != 1 && unk_0xD1960163A3042274(iLocal_80, 1785177548) != 0) || unk_0x4E861BC5B1EDA7BD(iLocal_80)) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_80)) || unk_0x688A90832774AB83(iLocal_80)) || unk_0xD24FAF25ADC00F44(iLocal_80))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_80, 0, 0);
			}
		}
		if (!bLocal_106)
		{
		}
	}
	func_102();
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_81[6]))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_81[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && unk_0x6AB6A474D29FA7D8(unk_0x16F2683693E537C9(), iLocal_81[6]))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_81[6], unk_0x16F2683693E537C9(), -1, 2048, 2);
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_81[6], 4000, 2048, 2);
					func_82(&uLocal_114, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_71 = unk_0x1C0640BA9A7327B3();
					iLocal_75 = 1;
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_81[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && unk_0x6AB6A474D29FA7D8(unk_0x16F2683693E537C9(), iLocal_81[7]))
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_81[7], unk_0x16F2683693E537C9(), -1, 2048, 2);
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_81[7], 4000, 2048, 2);
					func_82(&uLocal_114, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_71 = unk_0x1C0640BA9A7327B3();
					iLocal_75 = 1;
				}
			}
			if (unk_0xEB6A8945D1AC98A1(iLocal_81[6]) && unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
			{
				iLocal_75 = 2;
			}
			break;
		
		case 1:
			if (unk_0xE4EDC4B0E92C078B(iLocal_91))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_91, true);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_92[6]))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_92[6], true);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_92[7]))
			{
				unk_0xF2D30B8ACAF12A39(iLocal_92[7], true);
			}
			iLocal_70 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_70 - iLocal_71) > 6000 && !func_68())
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_81[6]))
				{
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_81[7]))
				{
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
				{
					iLocal_90 = func_103(iLocal_97);
				}
				unk_0x51B096AAC60548C1(0f);
				if (!func_134())
				{
					func_107(1);
				}
				iLocal_75 = 2;
			}
			break;
	}
}

int func_107(int iParam0)
{
	if (func_111())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_56(Global_111627))
		{
			func_108(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_56(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_109(func_110(iParam0), -1);
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
					func_109(func_110(iParam0), -1);
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
					func_109(func_110(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_109(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_110(int iParam0)
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

int func_111()
{
	switch (func_112(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
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

int func_112(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_116(0))
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
		if (!func_114(iParam2))
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
			func_113(uParam0, iParam4);
		}
	}
	return 2;
}

void func_113(var uParam0, int iParam1)
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

bool func_114(int iParam0)
{
	return func_115(iParam0, Global_41431);
}

int func_115(int iParam0, int iParam1)
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

int func_116(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_114(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_117()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iLocal_85[0], 0))
	{
		if (unk_0xA30B8362589C124A(iLocal_85[0], -1, 0) == iLocal_81[8])
		{
			unk_0x37C67519A5493B8D(iLocal_85[0], 60000f);
			unk_0xAE410B56B7A98684(iLocal_85[0]);
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_80))
	{
		if (unk_0x869EFD0BC0868856(iLocal_80))
		{
			unk_0xD458AC1C1D29C3B4(iLocal_80, 0, 0);
		}
	}
	else if (unk_0xE4EDC4B0E92C078B(iLocal_91))
	{
		unk_0x142CC44DB769B57E(&iLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x8E28E832BEAC3DCE(vLocal_100, 30f) && vdist(func_2(unk_0xD803B885F5E47A62()), vLocal_100) > 300f)
		{
			if (unk_0xC844350D5D58C99A(iLocal_81[iVar0]))
			{
				unk_0x6DAD7906B73F064D(&(iLocal_81[iVar0]));
			}
		}
		if (unk_0xEB6A8945D1AC98A1(iLocal_81[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_92[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_92[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	unk_0x523BCC9DC80CD82F(joaat("g_m_m_chigoon_02"));
	unk_0x523BCC9DC80CD82F(joaat("g_m_y_salvagoon_03"));
	unk_0x523BCC9DC80CD82F(joaat("rebel"));
	unk_0x523BCC9DC80CD82F(joaat("bobcatxl"));
	unk_0x523BCC9DC80CD82F(joaat("sanchez"));
	unk_0x523BCC9DC80CD82F(joaat("a_c_rottweiler"));
	unk_0x523BCC9DC80CD82F(joaat("prop_security_case_01"));
	unk_0x3F423BF5B8125A50("random@dealgonewrong");
	unk_0x3F423BF5B8125A50("random@dealgonewrongdead_peds");
	if ((((((((unk_0xB87F6CF6E5628C67(joaat("g_m_m_chigoon_02")) && unk_0xB87F6CF6E5628C67(joaat("g_m_y_salvagoon_03"))) && unk_0xB87F6CF6E5628C67(joaat("rebel"))) && unk_0xB87F6CF6E5628C67(joaat("bobcatxl"))) && unk_0xB87F6CF6E5628C67(joaat("sanchez"))) && unk_0xB87F6CF6E5628C67(joaat("a_c_rottweiler"))) && unk_0xB87F6CF6E5628C67(joaat("prop_security_case_01"))) && unk_0xB4AE0788C1587752("random@dealgonewrong")) && unk_0xB4AE0788C1587752("random@dealgonewrongdead_peds"))
	{
		unk_0x7D6CA5F52B3748BF(vLocal_100 - Vector(150f, 150f, 150f), vLocal_100 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0xAB8E2DDC7AF955E0(joaat("bobcatxl"), true);
		unk_0xAB8E2DDC7AF955E0(joaat("rebel"), true);
		unk_0x15EA7F4313456B1D(5, false);
		unk_0x15EA7F4313456B1D(3, false);
		iLocal_85[0] = unk_0x122AAB0B1D6F55AD(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		unk_0x73270B3C9CC833FD(iLocal_85[0], true, 0);
		unk_0xB9FD7450C0DAB575(iLocal_85[0], 1084227584);
		unk_0x56FDC9ADE35F7DB0(iLocal_85[0], true, true, 0);
		unk_0x0882E3DC0C991680(iLocal_85[0], 2);
		unk_0x5DAB50E08C3C504A(iLocal_85[0], 500f);
		unk_0xDC544F7DF5E5164D(iLocal_85[0], 500f);
		unk_0xD3421E391490133B(iLocal_85[0], 1, true);
		unk_0x1A6519AE5766DBD8(iLocal_85[0], 0, 0, 1148846080);
		unk_0x218FC9AE303B791F(iLocal_85[0], 6);
		unk_0x3CBF2C83A68C1611(iLocal_85[0], "RADIO_06_COUNTRY");
		unk_0x55A3C4ED4728EA42(iLocal_85[0], "76JON418");
		unk_0x3E5CE368CD085FFA(iLocal_85[0], true);
		iLocal_85[1] = unk_0x122AAB0B1D6F55AD(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, true, true, false);
		unk_0x73270B3C9CC833FD(iLocal_85[1], true, 0);
		unk_0xB9FD7450C0DAB575(iLocal_85[1], 1084227584);
		unk_0x56FDC9ADE35F7DB0(iLocal_85[1], true, true, 0);
		unk_0x0882E3DC0C991680(iLocal_85[1], 2);
		unk_0x5DAB50E08C3C504A(iLocal_85[1], 600f);
		unk_0xDC544F7DF5E5164D(iLocal_85[1], 400f);
		unk_0xD3421E391490133B(iLocal_85[1], 1, true);
		unk_0xD3421E391490133B(iLocal_85[1], 2, true);
		unk_0xD3421E391490133B(iLocal_85[1], 3, false);
		unk_0xD3421E391490133B(iLocal_85[1], 4, false);
		unk_0x218FC9AE303B791F(iLocal_85[1], 6);
		unk_0x3CBF2C83A68C1611(iLocal_85[1], "RADIO_06_COUNTRY");
		unk_0x55A3C4ED4728EA42(iLocal_85[1], "79ERK121");
		unk_0x3E5CE368CD085FFA(iLocal_85[1], true);
		unk_0x0218D9089D75EFEE(iLocal_85[1], 1);
		iLocal_85[2] = unk_0x122AAB0B1D6F55AD(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, true, true, false);
		unk_0x55A3C4ED4728EA42(iLocal_85[2], "83JOH802");
		unk_0x73270B3C9CC833FD(iLocal_85[2], true, 0);
		unk_0xB9FD7450C0DAB575(iLocal_85[2], 1084227584);
		unk_0x56FDC9ADE35F7DB0(iLocal_85[2], true, true, 0);
		unk_0x0882E3DC0C991680(iLocal_85[2], 2);
		unk_0x5DAB50E08C3C504A(iLocal_85[2], 60f);
		unk_0xDC544F7DF5E5164D(iLocal_85[2], 1000f);
		unk_0xD3421E391490133B(iLocal_85[2], 1, false);
		unk_0x1A6519AE5766DBD8(iLocal_85[2], 1, 0, 1148846080);
		iLocal_85[3] = unk_0x122AAB0B1D6F55AD(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		unk_0x55A3C4ED4728EA42(iLocal_85[3], "85TOR114");
		unk_0x73270B3C9CC833FD(iLocal_85[3], true, 0);
		unk_0xB9FD7450C0DAB575(iLocal_85[3], 1084227584);
		unk_0x56FDC9ADE35F7DB0(iLocal_85[3], true, true, 0);
		unk_0x0882E3DC0C991680(iLocal_85[3], 2);
		unk_0x5DAB50E08C3C504A(iLocal_85[3], 500f);
		unk_0xDC544F7DF5E5164D(iLocal_85[3], 500f);
		unk_0xD3421E391490133B(iLocal_85[3], 1, false);
		unk_0xD3421E391490133B(iLocal_85[3], 2, false);
		unk_0xD3421E391490133B(iLocal_85[3], 3, false);
		unk_0xD3421E391490133B(iLocal_85[3], 4, false);
		unk_0x1A6519AE5766DBD8(iLocal_85[3], 0, 0, 1148846080);
		unk_0x1A6519AE5766DBD8(iLocal_85[3], 5, 0, 1148846080);
		if (!unk_0x762119754C50557A(iLocal_97))
		{
			iVar0 = 0;
			unk_0x5D96D8530B3D0904(&iVar0, 1);
			unk_0x5D96D8530B3D0904(&iVar0, 3);
			unk_0x5D96D8530B3D0904(&iVar0, 4);
			iLocal_97 = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_case"), vLocal_101, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x71199B01895C6202(joaat("prop_security_case_01"));
		}
		vLocal_104[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		vLocal_104[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		vLocal_104[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		vLocal_104[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		vLocal_104[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0x762119754C50557A(iLocal_98[iVar1]))
			{
				iVar2 = 0;
				unk_0x5D96D8530B3D0904(&iVar2, 3);
				unk_0x5D96D8530B3D0904(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_98[iVar1] = unk_0xA6FF0828D17CF374(joaat("pickup_weapon_sawnoffshotgun"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_98[iVar1] = unk_0x2D7B5CDDF12654D2(joaat("pickup_weapon_assaultrifle"), vLocal_104[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					iLocal_98[iVar1] = unk_0xA6FF0828D17CF374(joaat("pickup_weapon_pistol"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		vLocal_48[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_49[0] = 177.0024f;
		vLocal_48[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_49[1] = 146.9645f;
		vLocal_48[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_49[2] = 48.6546f;
		vLocal_48[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_49[3] = 155.0678f;
		vLocal_48[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_49[4] = 278.3085f;
		vLocal_48[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_49[5] = 270.3501f;
		vLocal_48[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_49[7] = 352.9167f;
		vLocal_48[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_49[6] = 34.1111f;
		vLocal_63 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_67 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_81[iVar1] = unk_0x36F2404464202779(22, joaat("g_m_y_salvagoon_03"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
				unk_0x4E885A246A9D983A(iLocal_81[iVar1], 227, true);
			}
			else
			{
				iLocal_81[iVar1] = unk_0x36F2404464202779(22, joaat("g_m_m_chigoon_02"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_82[0] = unk_0x36F2404464202779(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, true);
		iLocal_82[1] = unk_0x36F2404464202779(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_82)
		{
			unk_0x46CB381A452EF99D(iLocal_82[iVar1], 1);
			unk_0x20641932E5104B25(iLocal_82[iVar1], true, 0);
			unk_0x4E885A246A9D983A(iLocal_82[iVar1], 227, true);
			vLocal_50 = { unk_0x68F4C0EC296D3901(iLocal_82[iVar1], true) };
			vLocal_51 = { vLocal_50.x, (vLocal_50.y - 2f), (vLocal_50.z - 0.5f) };
			vLocal_52 = { vLocal_50.x, (vLocal_50.y + 50f), (vLocal_50.z - 0.5f) };
			unk_0xECC26BBDC0AD318B(vLocal_51, vLocal_52, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		unk_0x3E8E48829F3C7624(iLocal_81[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_81[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_81[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_81[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_81[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_81[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_82[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x3E8E48829F3C7624(iLocal_82[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0xB5875F5239696251(50f);
		func_120();
		unk_0xB5875F5239696251(1f);
		if (unk_0xDF1306B443CD3D15(iLocal_85[0], 0))
		{
			iLocal_81[8] = unk_0x852A19533F896693(iLocal_85[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			unk_0x73270B3C9CC833FD(iLocal_81[8], true, 0);
			unk_0xD69ADA1AA251FFD6(iLocal_81[8], 1);
			unk_0xD458AC1C1D29C3B4(iLocal_81[8], 0, 0);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
		{
		}
		unk_0xF63400DBE3303D26("re_DealGoneWrong", &iLocal_113);
		iLocal_81[6] = unk_0x36F2404464202779(22, joaat("g_m_m_chigoon_02"), vLocal_48[6 /*3*/], fLocal_49[6], 1, true);
		func_100(&uLocal_114, 4, iLocal_81[6], "REDGWChinese", 0, 1);
		unk_0x11AD11297DC58CC7(iLocal_81[6], true);
		unk_0x7980D72D61BEF4D5(iLocal_81[6], true);
		unk_0x6DF7BF67E86AAE86(iLocal_81[6], iLocal_113);
		iVar3 = unk_0xE9744DB7B8CA6965(vLocal_48[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0x915804B434753CBD(iLocal_81[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC90224D9E95E5E3A(iVar3, true);
		unk_0xFADC0A217229F6B5(iLocal_81[6], true);
		unk_0x4E885A246A9D983A(iLocal_81[6], 227, true);
		iLocal_81[7] = unk_0x36F2404464202779(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_49[7], 1, true);
		func_100(&uLocal_114, 5, iLocal_81[7], "REDGWSalvadoran", 0, 1);
		unk_0x11AD11297DC58CC7(iLocal_81[7], true);
		unk_0x7980D72D61BEF4D5(iLocal_81[7], true);
		unk_0x6DF7BF67E86AAE86(iLocal_81[7], iLocal_113);
		iVar4 = unk_0xE9744DB7B8CA6965(vLocal_48[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0x915804B434753CBD(iLocal_81[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC90224D9E95E5E3A(iVar4, true);
		unk_0x57E0CF9BF653D99A(iVar4, 0.5f);
		unk_0xFADC0A217229F6B5(iLocal_81[7], true);
		unk_0x4E885A246A9D983A(iLocal_81[7], 227, true);
		iLocal_80 = unk_0x36F2404464202779(22, joaat("g_m_m_chigoon_02"), vLocal_63, fLocal_67, 1, true);
		func_100(&uLocal_114, 4, iLocal_80, "REDGWChinese", 0, 1);
		unk_0x11AD11297DC58CC7(iLocal_80, true);
		unk_0x6DF7BF67E86AAE86(iLocal_80, iLocal_113);
		iVar5 = unk_0xE9744DB7B8CA6965(vLocal_63, 7.5f, -12.75f, 51.5f, 0);
		unk_0x915804B434753CBD(iLocal_80, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC90224D9E95E5E3A(iVar5, true);
		unk_0xC023D1C4BF532815(iLocal_80, 4f, 18f, 326.7277f, 0, 1);
		unk_0xFADC0A217229F6B5(iLocal_80, true);
		unk_0x4E885A246A9D983A(iLocal_80, 227, true);
		unk_0x0E2400AB9174FA81(5, iLocal_113, 1862763509);
		if (func_40() == 0)
		{
			func_100(&uLocal_114, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		}
		if (func_40() == 1)
		{
			func_100(&uLocal_114, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
		}
		if (func_40() == 2)
		{
			func_100(&uLocal_114, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
		}
		iLocal_99[0] = unk_0x1776B2F0999C29AC(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[1] = unk_0x1776B2F0999C29AC(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[2] = unk_0x1776B2F0999C29AC(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[3] = unk_0x1776B2F0999C29AC(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[4] = unk_0x1776B2F0999C29AC(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[5] = unk_0x1776B2F0999C29AC(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[6] = unk_0x1776B2F0999C29AC(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[7] = unk_0x1776B2F0999C29AC(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[8] = unk_0x1776B2F0999C29AC(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[9] = unk_0x1776B2F0999C29AC(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		wait(0);
		iLocal_99[10] = unk_0x1776B2F0999C29AC(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_119(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x437347B10A200C4B(iLocal_81[iVar1], 0))
			{
				unk_0x46CB381A452EF99D(iLocal_81[iVar1], 1);
				unk_0x78023EC6208DCB12(iLocal_81[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x78023EC6208DCB12(iLocal_81[iVar1], 0, 0.65f, 0.6f, 3);
				wait(unk_0x09AC81E49EA267F7(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_92[iVar1]))
					{
						unk_0x142CC44DB769B57E(&(iLocal_92[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
		{
			if (!unk_0xAF6690C489CC6203(unk_0x728870EB733D12A1()))
			{
				unk_0x73270B3C9CC833FD(unk_0x728870EB733D12A1(), true, 0);
			}
		}
		iLocal_282 = 1;
	}
}

Vector3 func_119(vector3 vParam0)
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

void func_120()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		wait(0);
		if (unk_0xC844350D5D58C99A(iLocal_85[iVar0]))
		{
			vLocal_53 = { unk_0x68E4ADDDDCD7BDDE(iLocal_85[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_77 = 0;
		while (iLocal_77 < 5)
		{
			fLocal_64 = unk_0x79833B02DBD2A244(1.5f, 2.5f);
			fLocal_65 = unk_0x79833B02DBD2A244(2f, 4f);
			fLocal_66 = unk_0x79833B02DBD2A244(0.1f, 2f);
			wait(0);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0xECC26BBDC0AD318B(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0xECC26BBDC0AD318B(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0xECC26BBDC0AD318B(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0xECC26BBDC0AD318B(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			vLocal_54 = { vLocal_53.x, (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { vLocal_53.x, (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0xECC26BBDC0AD318B(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_77++;
		}
		iVar0++;
	}
}

int func_121()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_132())
		{
			return 0;
		}
	}
	if (func_128())
	{
		return 1;
	}
	if (func_122(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_122(float fParam0, bool bParam1)
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
		if (func_42(func_40()))
		{
			iVar5 = func_61();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_123(iVar1, &Var0);
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

void func_123(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_124(uParam1, "Abigail1", func_126(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 1:
			func_124(uParam1, "Abigail2", func_126(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 2:
			func_124(uParam1, "Barry1", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 3:
			func_124(uParam1, "Barry2", func_126(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 4:
			func_124(uParam1, "Barry3", func_126(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 5:
			func_124(uParam1, "Barry3A", func_126(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 6:
			func_124(uParam1, "Barry3C", func_126(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 7:
			func_124(uParam1, "Barry4", func_126(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_125(iParam0), 0, 0);
			break;
		
		case 8:
			func_124(uParam1, "Dreyfuss1", func_126(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 9:
			func_124(uParam1, "Epsilon1", func_126(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 10:
			func_124(uParam1, "Epsilon2", func_126(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 11:
			func_124(uParam1, "Epsilon3", func_126(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 12:
			func_124(uParam1, "Epsilon4", func_126(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 13:
			func_124(uParam1, "Epsilon5", func_126(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 14:
			func_124(uParam1, "Epsilon6", func_126(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 15:
			func_124(uParam1, "Epsilon7", func_126(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 16:
			func_124(uParam1, "Epsilon8", func_126(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 17:
			func_124(uParam1, "Extreme1", func_126(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 18:
			func_124(uParam1, "Extreme2", func_126(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 19:
			func_124(uParam1, "Extreme3", func_126(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 20:
			func_124(uParam1, "Extreme4", func_126(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 21:
			func_124(uParam1, "Fanatic1", func_126(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_125(iParam0), 1, 0);
			break;
		
		case 22:
			func_124(uParam1, "Fanatic2", func_126(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_125(iParam0), 1, 0);
			break;
		
		case 23:
			func_124(uParam1, "Fanatic3", func_126(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_125(iParam0), 0, 1);
			break;
		
		case 24:
			func_124(uParam1, "Hao1", func_126(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_125(iParam0), 0, 1);
			break;
		
		case 25:
			func_124(uParam1, "Hunting1", func_126(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 26:
			func_124(uParam1, "Hunting2", func_126(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 27:
			func_124(uParam1, "Josh1", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 28:
			func_124(uParam1, "Josh2", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 29:
			func_124(uParam1, "Josh3", func_126(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 30:
			func_124(uParam1, "Josh4", func_126(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 31:
			func_124(uParam1, "Maude1", func_126(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 32:
			func_124(uParam1, "Minute1", func_126(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 33:
			func_124(uParam1, "Minute2", func_126(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 34:
			func_124(uParam1, "Minute3", func_126(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 35:
			func_124(uParam1, "MrsPhilips1", func_126(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 36:
			func_124(uParam1, "MrsPhilips2", func_126(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 37:
			func_124(uParam1, "Nigel1", func_126(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 38:
			func_124(uParam1, "Nigel1A", func_126(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 39:
			func_124(uParam1, "Nigel1B", func_126(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 40:
			func_124(uParam1, "Nigel1C", func_126(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 41:
			func_124(uParam1, "Nigel1D", func_126(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_125(iParam0), 1, 1);
			break;
		
		case 42:
			func_124(uParam1, "Nigel2", func_126(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 43:
			func_124(uParam1, "Nigel3", func_126(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 1);
			break;
		
		case 44:
			func_124(uParam1, "Omega1", func_126(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 45:
			func_124(uParam1, "Omega2", func_126(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 46:
			func_124(uParam1, "Paparazzo1", func_126(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 47:
			func_124(uParam1, "Paparazzo2", func_126(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 48:
			func_124(uParam1, "Paparazzo3", func_126(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 49:
			func_124(uParam1, "Paparazzo3A", func_126(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 50:
			func_124(uParam1, "Paparazzo3B", func_126(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 51:
			func_124(uParam1, "Paparazzo4", func_126(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 52:
			func_124(uParam1, "Rampage1", func_126(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 54:
			func_124(uParam1, "Rampage3", func_126(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 55:
			func_124(uParam1, "Rampage4", func_126(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 56:
			func_124(uParam1, "Rampage5", func_126(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_125(iParam0), 0, 0);
			break;
		
		case 53:
			func_124(uParam1, "Rampage2", func_126(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_125(iParam0), 1, 0);
			break;
		
		case 57:
			func_124(uParam1, "TheLastOne", func_126(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 58:
			func_124(uParam1, "Tonya1", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 59:
			func_124(uParam1, "Tonya2", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 60:
			func_124(uParam1, "Tonya3", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 61:
			func_124(uParam1, "Tonya4", func_126(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		case 62:
			func_124(uParam1, "Tonya5", func_126(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_125(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_124(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_125(int iParam0)
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

struct<2> func_126(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_127(iParam0) };
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

struct<2> func_127(int iParam0)
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

int func_128()
{
	if (func_131() && !func_132())
	{
		return 1;
	}
	if (func_130() && func_129())
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_111356 > 0;
}

int func_130()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_132()
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

int func_133()
{
	if (!func_114(5))
	{
		return 1;
	}
	if (func_128())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_132())
		{
			return 0;
		}
	}
	if (func_122(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	if ((Global_111627 == func_65() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_137(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_136();
}

void func_136()
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

void func_137(int iParam0)
{
	Global_111627 = iParam0;
}

int func_138(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_65();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_179())
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
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_132())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_49(0))
		{
			return 0;
		}
		if (func_128())
		{
			return 0;
		}
		if (func_178())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_42(func_40()))
		{
			if (func_122(100f, 1) != -1)
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
		if (!func_177(iParam1))
		{
			return 0;
		}
		if (func_42(func_40()))
		{
			if (func_176(func_40()) == 4 || func_176(func_40()) == 5)
			{
				return 0;
			}
		}
		if (func_42(func_40()))
		{
			if (!func_175(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_174(Global_111638.f_24990.f_43[iParam1]))
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
		if (func_173())
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
		if (!func_164(4))
		{
			return 0;
		}
		if (!func_114(5))
		{
			return 0;
		}
		if (func_163(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_163(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_177(30) && !func_163(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_42(func_40()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_162(iVar4))
				{
					if (func_140(iVar2))
					{
						if (!func_139(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar3) < (210f * 210f))
							{
								if (func_40() != iVar2)
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

bool func_139(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_141(iVar0);
}

int func_141(int iParam0)
{
	return func_142(iParam0, 1);
}

int func_142(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_162(iParam0))
	{
		return 0;
	}
	func_143(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_144(func_155(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_144(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_154(iParam0, iParam1))
	{
		iVar0 = func_153(iParam1);
		iVar1 = func_151(iParam0);
		iVar2 = (func_151(iParam0) - func_151(iParam1));
		iVar3 = (func_153(iParam0) - func_153(iParam1));
		iVar4 = (func_150(iParam0) - func_150(iParam1));
		iVar5 = (func_149(iParam0) - func_149(iParam1));
		iVar6 = (func_148(iParam0) - func_148(iParam1));
		iVar7 = (func_147(iParam0) - func_147(iParam1));
	}
	else
	{
		iVar0 = func_153(iParam0);
		iVar1 = func_151(iParam1);
		iVar2 = (func_151(iParam1) - func_151(iParam0));
		iVar3 = (func_153(iParam1) - func_153(iParam0));
		iVar4 = (func_150(iParam1) - func_150(iParam0));
		iVar5 = (func_149(iParam1) - func_149(iParam0));
		iVar6 = (func_148(iParam1) - func_148(iParam0));
		iVar7 = (func_147(iParam1) - func_147(iParam0));
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
		iVar4 = (iVar4 + func_146(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_145(to_float(iVar0 + 1), 0f, 12f));
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

float func_145(float fParam0, float fParam1, float fParam2)
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

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_148(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_149(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_150(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_151(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_152(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(int iParam0)
{
	return iParam0 & 15;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_162(iParam1) || !func_162(iParam0))
	{
		return 1;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_153(iParam0);
	iVar1 = func_153(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	var uVar0;
	
	func_161(&uVar0, unk_0x4460E481B9E33ADA());
	func_160(&uVar0, unk_0x8D199E381D262EEF());
	func_159(&uVar0, unk_0xD8A54335F18763BA());
	func_158(&uVar0, unk_0x972A296334C9D57B());
	func_157(&uVar0, unk_0x118229AD063C3C1D());
	func_156(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_156(var uParam0, int iParam1)
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

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_158(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_146(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_162(int iParam0)
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
	iVar0 = func_147(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_148(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_149(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_151(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_153(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_150(iParam0);
	if (iVar5 < 1 || iVar5 > func_146(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_40();
				if (!func_42(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_95(8, -1)) || func_170()) || func_169()) || func_168()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_172()) || Global_30770) || func_171()) || func_95(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_95(8, -1)) || func_168()) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_95(8, -1)) || func_170()) || func_169()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_172() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_95(8, -1)) || func_167()) || func_166()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_95(8, -1) || func_170()) || func_169()) || func_166()) || func_165())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_172()) || Global_30770) || func_171()) || func_95(8, -1)) || func_169()) || func_168()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_172()) || func_169()) || Global_110685) || Global_30770) || func_171()) || Global_42596) || func_95(8, -1)) || func_168()) || func_166()) || func_167()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_172()) || Global_110685) || Global_30770) || func_171()) || func_95(8, -1)) || func_168()) || func_166()) || func_170()) || func_169()) || func_167())
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

var func_165()
{
	return Global_98783.f_1;
}

int func_166()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_167()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
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

bool func_169()
{
	return Global_98796.f_346 > 0;
}

bool func_170()
{
	return Global_98796.f_345 > 0;
}

var func_171()
{
	return Global_1312877;
}

int func_172()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_173()
{
	func_93();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_174(int iParam0)
{
	return func_154(func_155(), iParam0);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_40();
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

int func_176(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_177(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_179())
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

int func_178()
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

int func_179()
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

void func_180()
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xB547E3FFEB27073E();
		unk_0x51B096AAC60548C1(1f);
		if (unk_0xE4EDC4B0E92C078B(iLocal_89))
		{
			unk_0x142CC44DB769B57E(&iLocal_89);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_90))
		{
			unk_0x142CC44DB769B57E(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_93[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_93[iVar0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_95[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_83[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_83[iVar0], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_94[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_94[iVar0]));
			}
			if (unk_0xE4EDC4B0E92C078B(uLocal_96[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar0]))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_84[iVar0], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0x15EA7F4313456B1D(5, true);
			unk_0x15EA7F4313456B1D(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_40(), 1, 25000);
		}
	}
	func_181(-1);
	unk_0x10FAF14A60A0DBE1();
}

void func_181(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134())
	{
		func_185(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_184(30000);
		StringCopy(&cVar0, func_183(Global_111627, 1), 64);
		if (func_64(Global_111627) > 0)
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
	func_182(&Global_30827);
	Global_111628 = 0;
	func_137(-1);
}

void func_182(var uParam0)
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

char* func_183(int iParam0, bool bParam1)
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

void func_184(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_185(int iParam0)
{
	func_186(iParam0, 0, func_191(iParam0));
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_155();
	func_189(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_188(iParam0, &uVar0);
	Var1 = { func_187(&uVar0) };
}

struct<16> func_187(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_148(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_150(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_153(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_151(*uParam0), 64);
	return Var0;
}

void func_188(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_151(*uParam0);
	iVar1 = func_153(*uParam0);
	iVar2 = func_150(*uParam0);
	iVar3 = func_149(*uParam0);
	iVar4 = func_148(*uParam0);
	iVar5 = func_147(*uParam0);
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
	iVar6 = func_146(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_146(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_190(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_161(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_157(uParam0, iParam5);
	func_158(uParam0, iParam4);
	func_156(uParam0, iParam6);
}

int func_191(int iParam0)
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

