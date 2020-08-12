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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	var uLocal_138 = 16;
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
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	vLocal_85 = { 154.92f, 6841.12f, 19.14f };
	iLocal_99 = 200;
	vLocal_113 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0x2EBF608FFE6CA406(11))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		if (unk_0x338D6FF72D84D90F() || iLocal_105)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_60)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						func_150();
						switch (iLocal_47)
						{
							case 0:
								func_140();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_133(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) && !func_133(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) && !func_132())
								{
									switch (iLocal_48)
									{
										case 0:
											func_131();
											if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_72, 50f, 35f, 50f, false, true, 0))
											{
												func_130();
											}
											if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_72, 80f, 65f, 50f, false, true, 0))
											{
												func_129();
											}
											if (!unk_0x437347B10A200C4B(iLocal_54, 0))
											{
												if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_128();
													if (unk_0xE4EDC4B0E92C078B(iLocal_88))
													{
														unk_0xF2D30B8ACAF12A39(iLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
														{
															unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_166())
													{
														func_119(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_133(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) || func_133(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_166())
									{
										func_119(1);
									}
									if (unk_0xE4EDC4B0E92C078B(iLocal_88))
									{
										unk_0xF2D30B8ACAF12A39(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
										{
											unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_118();
											break;
										
										case 1:
											func_118();
											break;
										
										case 2:
											func_118();
											break;
										
										case 3:
											func_118();
											break;
										
										case 4:
											func_118();
											break;
										
										case 5:
											func_118();
											break;
										}
								}
								if (func_132())
								{
									iLocal_69 = 1;
									if (unk_0xE4EDC4B0E92C078B(iLocal_88))
									{
										unk_0xF2D30B8ACAF12A39(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
										{
											unk_0xF2D30B8ACAF12A39(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_117())
									{
										switch (iLocal_49)
										{
											case 1:
												func_114();
												break;
											
											case 3:
												func_113();
												break;
											
											case 4:
												func_112();
												break;
											
											case 5:
												func_110();
												wait(0);
												if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
												{
													func_108(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
												{
													func_108(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_118();
												break;
											
											case 6:
												func_110();
												wait(0);
												if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
												{
													func_108(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
												{
													func_108(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										wait(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iVar0]))
											{
												unk_0x08082071A5F7C155(iLocal_52[iVar0], 5, 0f, 0);
												unk_0xF3268524E9BE6D6E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
												unk_0xFADC0A217229F6B5(iLocal_52[iVar0], true);
												if (unk_0xC844350D5D58C99A(iLocal_56))
												{
													if (unk_0xD59B17D2DFF98E26(iLocal_56))
													{
														unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
													}
												}
												if (unk_0xE4EDC4B0E92C078B(iLocal_87[iVar0]))
												{
													unk_0x142CC44DB769B57E(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_107();
								}
								if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
								{
									func_92();
								}
								break;
							
							case 4:
								func_91();
								if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_85, 100f, 100f, 100f, true, true, 0))
								{
									unk_0x51B096AAC60548C1(1f);
									if (unk_0xC844350D5D58C99A(iLocal_52[0]) && unk_0xC844350D5D58C99A(iLocal_52[1]))
									{
										unk_0x6DAD7906B73F064D(&(iLocal_52[0]));
										unk_0x6DAD7906B73F064D(&(iLocal_52[1]));
									}
								}
								if (!unk_0xC844350D5D58C99A(iLocal_53))
								{
									if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_113, 200f, 200f, 200f, true, true, 0))
									{
										unk_0x523BCC9DC80CD82F(joaat("s_m_m_highsec_01"));
										unk_0x523BCC9DC80CD82F(joaat("granger"));
										if (unk_0xB87F6CF6E5628C67(joaat("s_m_m_highsec_01")) && unk_0xB87F6CF6E5628C67(joaat("granger")))
										{
											iLocal_55 = unk_0x122AAB0B1D6F55AD(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											unk_0x25BD67336EA4AECE(iLocal_55, 200);
											unk_0xF8CF67C6E39C23A9(iLocal_55, 1.5f);
											iLocal_53 = unk_0x852A19533F896693(iLocal_55, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 0, 0, 2, 0);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 3, 0, 0, 0);
											unk_0x64F9F278AB9DCA2C(iLocal_53, 4, 0, 0, 0);
											unk_0x262EF6C6306BEA6C(iLocal_53, joaat("weapon_pistol"), -1, true, true);
											unk_0x6DF7BF67E86AAE86(iLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) < 1)
										{
											if (!iLocal_106)
											{
												func_87(0);
												func_110();
												wait(0);
												func_71(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_113, Global_22, true, true, 0) && unk_0x12DE711B1C681E9E(iLocal_51, unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x16102BEDC7435774(iLocal_51))
										{
											if (unk_0xE4EDC4B0E92C078B(iLocal_111))
											{
												unk_0x142CC44DB769B57E(&iLocal_111);
											}
											if (unk_0xE4EDC4B0E92C078B(iLocal_112))
											{
												unk_0x142CC44DB769B57E(&iLocal_112);
											}
											if (func_70())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
										if (func_51(vLocal_113))
										{
											func_87(0);
											func_110();
											wait(0);
											func_71(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_50())
										{
											func_87(0);
											func_110();
											wait(0);
											func_71(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_48();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_91();
								if (func_49(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0xC844350D5D58C99A(iLocal_56))
								{
									if (unk_0xD59B17D2DFF98E26(iLocal_56))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
										{
											if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
												}
											}
											else
											{
												unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
											}
										}
									}
								}
								if (unk_0xEB6A8945D1AC98A1(iLocal_52[0]) || unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
										{
											unk_0x2ECF845953E95D1B(iLocal_52[0]);
											if (unk_0x3CAA763EEC01ADF7(iLocal_52[0], iLocal_54, -1, 0, false) || unk_0x3CAA763EEC01ADF7(iLocal_52[0], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xA3BF0AA5A2608191(iLocal_52[0]);
													if (unk_0xC844350D5D58C99A(iLocal_56))
													{
														if (unk_0xD59B17D2DFF98E26(iLocal_56))
														{
															unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
														}
													}
													unk_0xDD353D0E9C789D0E(&iLocal_59);
													unk_0xBC43ED9FE28DB191(0);
													unk_0xE20F700AC2AFCA92(0, unk_0x68E4ADDDDCD7BDDE(iLocal_54, -0.5f, 0.5f, 0f), unk_0x16F2683693E537C9(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0x5B1D360B9C6F0A09(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x89258193691A7600(0, iLocal_54, unk_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x75ABDC5F81978924(iLocal_59);
													unk_0x78ADC381772E3D54(iLocal_52[0], iLocal_59);
													unk_0xF82EA857DA10E0CD(&iLocal_59);
													unk_0xFADC0A217229F6B5(iLocal_52[0], true);
													unk_0xDC2C59BD0989562B(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xD1960163A3042274(iLocal_52[0], 242628503) == 1)
												{
													if (unk_0x4F1B602325013CC2(iLocal_52[0]) == 3)
													{
														if (!unk_0x12DE711B1C681E9E(iLocal_52[0], unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x5A91F08DF773C39D(iLocal_52[0], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x6DAD7906B73F064D(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												unk_0x6C3AE6E278DB3D0E(iLocal_52[0], unk_0x16F2683693E537C9(), 0, 16);
												unk_0xFADC0A217229F6B5(iLocal_52[0], true);
											}
										}
										if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
										{
											unk_0x2ECF845953E95D1B(iLocal_52[1]);
											if (unk_0x3CAA763EEC01ADF7(iLocal_52[1], iLocal_54, -1, 0, false) || unk_0x3CAA763EEC01ADF7(iLocal_52[1], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xA3BF0AA5A2608191(iLocal_52[1]);
													unk_0xDD353D0E9C789D0E(&iLocal_59);
													unk_0xBC43ED9FE28DB191(0);
													unk_0xE20F700AC2AFCA92(0, unk_0x68E4ADDDDCD7BDDE(iLocal_54, -0.5f, 0.5f, 0f), unk_0x16F2683693E537C9(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0x5B1D360B9C6F0A09(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x89258193691A7600(0, iLocal_54, unk_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x75ABDC5F81978924(iLocal_59);
													unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
													unk_0xF82EA857DA10E0CD(&iLocal_59);
													unk_0xFADC0A217229F6B5(iLocal_52[1], true);
													unk_0xDC2C59BD0989562B(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xD1960163A3042274(iLocal_52[1], 242628503) == 1)
												{
													if (unk_0x4F1B602325013CC2(iLocal_52[1]) == 3)
													{
														if (!unk_0x12DE711B1C681E9E(iLocal_52[1], unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x5A91F08DF773C39D(iLocal_52[1], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x6DAD7906B73F064D(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												unk_0x6C3AE6E278DB3D0E(iLocal_52[1], unk_0x16F2683693E537C9(), 0, 16);
												unk_0xFADC0A217229F6B5(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									wait(0);
									func_110();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0xC844350D5D58C99A(iLocal_51))
							{
								unk_0xEBA53F35D0085654(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								unk_0xC92DB9682A650680("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									settimera(0);
									iLocal_84 = unk_0x1C0640BA9A7327B3() + 8500;
									iLocal_68 = 1;
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
								{
									if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0xD1960163A3042274(iLocal_51, 1785177548) != 1 && unk_0xD1960163A3042274(iLocal_51, 1785177548) != 0)
									{
										unk_0x327AAEE25F323797(iLocal_51);
										iLocal_303 = unk_0xE9744DB7B8CA6965(vLocal_72, -2f, -4f, 18f, 2);
										unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xE14EC663EED44AD5(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xE14EC663EED44AD5(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xC90224D9E95E5E3A(iLocal_303, true);
										unk_0xFADC0A217229F6B5(iLocal_51, true);
									}
									if (unk_0x4E861BC5B1EDA7BD(iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 1);
										unk_0xF20820358777D05E(iLocal_51, 1);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0, 0);
									}
								}
								if ((unk_0xD24FAF25ADC00F44(iLocal_51) || unk_0xE147126C9AD09A60(iLocal_51)) || (iLocal_99 - unk_0x7F6DC62EA9922664(iLocal_51)) >= 50)
								{
									unk_0xA86D71B57C84C089(iLocal_51, 1);
									unk_0xF20820358777D05E(iLocal_51, 1);
									unk_0xD458AC1C1D29C3B4(iLocal_51, 0, 0);
								}
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
								{
									if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) < 5f)
									{
									}
									else if (unk_0x1B3D109B39CC2C89(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 1);
										unk_0xF20820358777D05E(iLocal_51, 1);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0, 0);
									}
								}
								if (!unk_0x437347B10A200C4B(iLocal_54, 0))
								{
									if (unk_0x1B3D109B39CC2C89(iLocal_54, iLocal_51))
									{
										unk_0xA86D71B57C84C089(iLocal_51, 1);
										unk_0xF20820358777D05E(iLocal_51, 1);
										unk_0xD458AC1C1D29C3B4(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	if (!bLocal_104)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_52[0]) && !unk_0xC844350D5D58C99A(iLocal_52[1]))
		{
			return 1;
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[0]) && unk_0xC844350D5D58C99A(iLocal_52[1]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				return 1;
			}
			if (unk_0xA750A57C629763A9(iLocal_52[0]) && unk_0xA750A57C629763A9(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[0]) && !unk_0xC844350D5D58C99A(iLocal_52[1]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_52[1]) && !unk_0xC844350D5D58C99A(iLocal_52[0]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_87[0]))
		{
			if (unk_0xC844350D5D58C99A(iLocal_56))
			{
				if (unk_0xD59B17D2DFF98E26(iLocal_56))
				{
					unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
				}
			}
			func_3(&uLocal_138, 4);
			unk_0x142CC44DB769B57E(&(iLocal_87[0]));
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			unk_0x142CC44DB769B57E(&(iLocal_87[1]));
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!unk_0x437347B10A200C4B(iLocal_51, 0))
		{
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			func_3(&uLocal_138, 5);
			unk_0x142CC44DB769B57E(&iLocal_88);
		}
	}
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
	unk_0xC92DB9682A650680("RE6_END");
	func_212();
}

int func_5()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_31006)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_111624 = iParam0;
}

void func_8(int iParam0)
{
	Global_21816 = iParam0;
}

int func_9()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_31005;
}

void func_11()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) || !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < unk_0x1C0640BA9A7327B3())
						{
							if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_46())
	{
		wait(0);
	}
	if (!func_6())
	{
		if (func_45() == 0)
		{
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 1)
		{
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_45() == 2)
		{
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 1, 0);
	func_17(-1, 0);
	func_14();
	func_212();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_7(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()
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
		func_21(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_20() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_30768;
}

int func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
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

int func_23()
{
	return Global_1312745;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

void func_29()
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

int func_30()
{
	func_31();
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

void func_31()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_35(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_34(unk_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_32(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_33(Global_111638.f_2358.f_539.f_4321))
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

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_41(Var0);
	return uVar1;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_111638.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111638.f_7683.f_911 == Var0)
		{
			Global_111638.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_44(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 1);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 10);
		}
		Global_111638.f_7683[Global_111638.f_7683.f_136 /*15*/] = { Var0 };
		Global_111638.f_7683.f_136++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam2, iVar1))
			{
				func_43(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_7683.f_136)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_111638.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111638.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111638.f_7683.f_764)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_7683.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111638.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111638.f_7683.f_919[iParam0] = iVar1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_45()
{
	func_31();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_46()
{
	return 1;
}

void func_47()
{
	switch (iLocal_110)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51) && unk_0xDF1306B443CD3D15(iLocal_55, 0))
			{
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				unk_0x11AD11297DC58CC7(iLocal_51, false);
				unk_0x25C5402CC10F76CD(iLocal_51, true);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 5000, 2048, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x5B1D360B9C6F0A09(0, iLocal_55, -1, 0, 1f, 1, 0);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xFADC0A217229F6B5(iLocal_51, true);
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0xDF1306B443CD3D15(iLocal_55, 0))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
					{
						unk_0xE072601B4380E9DF(iLocal_53, iLocal_54, 10f, 786599);
						unk_0xFADC0A217229F6B5(iLocal_53, true);
					}
					unk_0xDC2C59BD0989562B(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			settimera(0);
			func_13();
			break;
	}
}

void func_48()
{
	switch (iLocal_110)
	{
		case 0:
			unk_0x0E2400AB9174FA81(255, iLocal_137, 1862763509);
			unk_0x0E2400AB9174FA81(255, 1862763509, iLocal_137);
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
			{
				unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 5f, 2, 0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51) && unk_0xDF1306B443CD3D15(iLocal_55, 0))
				{
					if (unk_0x16102BEDC7435774(iLocal_51))
					{
						unk_0x0A94A109271BE75A(iLocal_51);
					}
					unk_0x11AD11297DC58CC7(iLocal_51, false);
					unk_0x25C5402CC10F76CD(iLocal_51, true);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 5000, 2048, 2);
					unk_0x5B1D360B9C6F0A09(0, iLocal_55, -1, 0, 1f, 1, 0);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					unk_0xFADC0A217229F6B5(iLocal_51, true);
					func_110();
					wait(0);
					func_71(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			wait(2700);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
				{
					if (!unk_0x1150BCE24B1630AC(unk_0x728870EB733D12A1(), 1))
					{
						if (unk_0xF409BCB95E61D4DB(unk_0x728870EB733D12A1(), 1) > 0.1f)
						{
							if (func_45() == 0)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_45() == 1)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_45() == 2)
							{
								func_71(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (unk_0xDF1306B443CD3D15(iLocal_55, 0))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
					{
						unk_0xE072601B4380E9DF(iLocal_53, iLocal_55, 10f, 786599);
						unk_0xFADC0A217229F6B5(iLocal_53, true);
					}
					unk_0xDC2C59BD0989562B(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
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

int func_50()
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), false), true) < 400f)
			{
				if (!Global_31010)
				{
					unk_0xC92DB9682A650680("AC_EN_ROUTE_CULT");
					Global_31010 = 1;
					if (!Global_31009)
					{
						Global_31009 = 1;
						return 1;
					}
				}
			}
			else if (Global_31010)
			{
				unk_0xC92DB9682A650680("AC_LEFT_AREA");
				Global_31010 = 0;
			}
		}
	}
	return 0;
}

int func_51(vector3 vParam0)
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_31008)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0);
			}
			if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vParam0) > (fLocal_45 + 200f) || unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), false), true) < 400f)
			{
				Global_31008 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_52()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if ((((((func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3")) || func_56("REBU2_LV2_4")) || func_56("REBU2_LV2_5")) || func_56("REBU2_LV2_6")) || func_56("REBU2_LV2_7")) || func_56("REBU2_LV2_8"))
		{
			unk_0x8D4C354BB8991817(iLocal_51, 1, 1);
			unk_0xBC43ED9FE28DB191(iLocal_51);
		}
		if (func_56("REBU2_LV2_9") || iLocal_66 > 1)
		{
			unk_0x8D4C354BB8991817(iLocal_51, 0, 1);
		}
	}
	if (func_70() && !func_12())
	{
		if (!func_53())
		{
			func_87(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_71(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_45() == 0)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_45() == 1)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_45() == 2)
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = unk_0x1C0640BA9A7327B3() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < unk_0x1C0640BA9A7327B3())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_45() == 1)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_45() == 2)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_53()
{
	if (((((((((func_54("REBU2_WV") || func_54("REBU2_UNS1")) || func_54("REBU2_UNS2")) || func_54("REBU2_CULT")) || func_54("REBU2_NEAR")) || func_54("REBU2_WRONG")) || func_54("REBU2_STOP")) || func_54("REBU2_GETOUT")) || func_54("REBU2_JACK")) || func_54("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_54(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_55()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_55()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_56(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_57()}, 4);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_57()
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

void func_58()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 1) && unk_0xC42A92762C58E1B9(iLocal_51, unk_0x728870EB733D12A1(), 0))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(0);
						func_110();
						wait(0);
						func_71(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0) && unk_0xC42A92762C58E1B9(iLocal_51, unk_0x728870EB733D12A1(), 0))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
			{
				func_87(0);
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_87(0);
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_59()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (!func_62())
			{
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				if (unk_0xD1960163A3042274(iLocal_51, 1227113341) != 1 && unk_0xD1960163A3042274(iLocal_51, 1227113341) != 0)
				{
					unk_0xE185F110925D87DB(iLocal_51, unk_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x405E212DDE472467(iLocal_51, 0))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_51, 0, 4194304);
				}
				if (!iLocal_106)
				{
					func_87(0);
					func_110();
					wait(0);
					iLocal_106 = 1;
					if (!func_61())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((unk_0xD1960163A3042274(iLocal_51, 1227113341) == 1 || unk_0xD1960163A3042274(iLocal_51, 1227113341) == 0) || unk_0xD1960163A3042274(iLocal_51, 242628503) == 1) || unk_0xD1960163A3042274(iLocal_51, 242628503) == 0)
				{
					unk_0xA3BF0AA5A2608191(iLocal_51);
				}
			}
		}
		else if (((!unk_0x16102BEDC7435774(iLocal_51) && !unk_0x405E212DDE472467(iLocal_51, 0)) && unk_0xD1960163A3042274(iLocal_51, 242628503) != 1) && unk_0xD1960163A3042274(iLocal_51, 242628503) != 0)
		{
			unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
			unk_0x7BECA8F360B1686D(iLocal_51, 1);
			unk_0xBF541ED34EA81209(iLocal_51, 0);
		}
	}
}

int func_60()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_61()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 1))
		{
			if ((unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1))) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1)))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
		{
			if (((((!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
			{
				if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0))
		{
			if ((((!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0xE3614539F8B5C807(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0x1C0640BA9A7327B3();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
				if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x96167B03C5A77156(iLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xFADC0A217229F6B5(iLocal_51, true);
				}
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0x1C0640BA9A7327B3();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0x16102BEDC7435774(iLocal_51))
			{
				unk_0x0A94A109271BE75A(iLocal_51);
				if (unk_0x5A91F08DF773C39D(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x96167B03C5A77156(iLocal_51, vLocal_113, 1f, -1, 1048576000, 0, 1193033728);
					unk_0xFADC0A217229F6B5(iLocal_51, true);
				}
				else
				{
					unk_0x75CDA8644CD3B5F5(iLocal_51, 0, 4194304);
				}
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_65()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 8f, 8f, 8f, 0, 1, 0) || unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
		{
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0xC42A92762C58E1B9(iLocal_51, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0)) && !unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
				{
					iLocal_88 = func_68(iLocal_51, 0, 145);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_111))
				{
					unk_0x142CC44DB769B57E(&iLocal_111);
				}
			}
			else
			{
				if (!unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_88))
					{
						unk_0x142CC44DB769B57E(&iLocal_88);
					}
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_111))
				{
					iLocal_111 = func_66(vLocal_113, 1);
				}
			}
		}
		else if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			iLocal_88 = func_68(iLocal_51, 0, 145);
		}
		if (!unk_0x16102BEDC7435774(iLocal_51))
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xA3BF0AA5A2608191(iLocal_51);
				unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
				unk_0x7BECA8F360B1686D(iLocal_51, 1);
				unk_0xBF541ED34EA81209(iLocal_51, 0);
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				unk_0xA3BF0AA5A2608191(iLocal_51);
				unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
				unk_0x7BECA8F360B1686D(iLocal_51, 1);
				unk_0xBF541ED34EA81209(iLocal_51, 0);
			}
		}
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_66(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_67(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_68(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_67(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_70()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_129 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xDF1306B443CD3D15(iLocal_129, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				if (unk_0x82CCEAB29E9451DD(iLocal_51, iLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_77())
	{
		return 0;
	}
	if (func_75(unk_0xD803B885F5E47A62()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

bool func_76(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_32(14))
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
		Global_19486 = func_45();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_87(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0xEA6BC48857E0AC4C(&Local_121))
			{
				if (func_90(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_53())
	{
		Local_121 = { func_55() };
		Local_120 = { func_57() };
		func_88();
		iLocal_119 = 1;
	}
}

void func_88()
{
	Global_19671 = 0;
	func_89();
}

void func_89()
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

bool func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_72(sParam2, iParam4, 0);
}

void func_91()
{
	if (unk_0xC844350D5D58C99A(iLocal_51))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			unk_0x9DD8618CA5BF832D(iLocal_51, 394, true);
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_51, unk_0x16F2683693E537C9(), 1))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_51, true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
			{
				unk_0x0E2400AB9174FA81(5, iLocal_137, 1862763509);
				unk_0x6C3AE6E278DB3D0E(iLocal_53, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_53, true);
			}
			func_110();
			wait(0);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (unk_0xC844350D5D58C99A(iLocal_53))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_53, unk_0x16F2683693E537C9(), 1))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
				{
					unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_51, true);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_53))
				{
					unk_0x0E2400AB9174FA81(5, iLocal_137, 1862763509);
					unk_0x6C3AE6E278DB3D0E(iLocal_53, unk_0x16F2683693E537C9(), 0, 16);
					unk_0xFADC0A217229F6B5(iLocal_53, true);
				}
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 1)
		{
			unk_0xF3268524E9BE6D6E(iLocal_51, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_51, true);
			func_110();
			wait(0);
			func_71(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_51, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9())) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
		{
			if (func_49(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_99(1, 1, 1, 0, 0, 0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 24);
					unk_0xA37A90C62806D848(1);
					unk_0x8BCB70EB440DED83(false);
					unk_0xBFE31971E49FA500(false);
					unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), true);
					if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
					{
						unk_0x73270B3C9CC833FD(unk_0x728870EB733D12A1(), true, 0);
						if (unk_0x4E861BC5B1EDA7BD(unk_0x728870EB733D12A1()))
						{
							func_98(unk_0x728870EB733D12A1());
							unk_0x5DAB50E08C3C504A(unk_0x728870EB733D12A1(), 200f);
						}
						if (unk_0x12DE711B1C681E9E(unk_0x728870EB733D12A1(), iLocal_51, 5f, 5f, 5f, 0, 1, 0) || unk_0x5A91F08DF773C39D(unk_0x728870EB733D12A1(), vLocal_74, 5f, 5f, 5f, false, true, 0))
						{
							unk_0xA47B46945FF6DE74(unk_0x728870EB733D12A1(), unk_0x68F4C0EC296D3901(iLocal_51, true) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
							{
								unk_0xB9FD7450C0DAB575(unk_0x728870EB733D12A1(), 1084227584);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_54))
					{
						if (unk_0x4E861BC5B1EDA7BD(iLocal_54))
						{
							func_98(iLocal_54);
							unk_0x5DAB50E08C3C504A(iLocal_54, 200f);
						}
						if (unk_0x12DE711B1C681E9E(iLocal_54, iLocal_51, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0xA47B46945FF6DE74(iLocal_54, vLocal_74, 0, false, 0, 1);
							if (!unk_0x437347B10A200C4B(iLocal_54, 0))
							{
								unk_0xB9FD7450C0DAB575(iLocal_54, 1084227584);
							}
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
						iLocal_129 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(iLocal_51, true), 5f, 0, 2);
						if (!unk_0x437347B10A200C4B(iLocal_129, 0))
						{
							if (unk_0x4E861BC5B1EDA7BD(iLocal_129))
							{
								func_98(iLocal_129);
								unk_0x5DAB50E08C3C504A(iLocal_129, 200f);
							}
							unk_0xA47B46945FF6DE74(iLocal_129, unk_0x68F4C0EC296D3901(iLocal_51, true) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					unk_0x7800CEC090C01D4D(vLocal_72, 10f);
					unk_0x679C321F8CAA2CFA(vLocal_72, 10f, 0);
					unk_0x28F5E4DA506AC0CA(vLocal_72, 4.5f, 0, 0, 0, 0, false, 0);
					unk_0xA47B46945FF6DE74(iLocal_51, vLocal_72, 1, false, 0, 1);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_72, 1, false, 0, 1);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (unk_0xC844350D5D58C99A(iLocal_52[iVar0]))
						{
							if (unk_0x5A91F08DF773C39D(iLocal_52[iVar0], unk_0x68F4C0EC296D3901(iLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								unk_0xEBA53F35D0085654(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
					{
						iLocal_303 = unk_0xE9744DB7B8CA6965(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_71 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
						unk_0x93E9ED66DAB9FBE3(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 162.6699f, 6839.238f, 18.8314f, 0, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 18.2311f);
						unk_0xD458AC1C1D29C3B4(iLocal_51, 200, 0);
						unk_0xA86D71B57C84C089(iLocal_51, 0);
						unk_0xF20820358777D05E(iLocal_51, 0);
						unk_0x327AAEE25F323797(iLocal_51);
						unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0xF895E10BF4C72645(iLocal_51, 0, 0);
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						unk_0xE14EC663EED44AD5(iLocal_57[0], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xE14EC663EED44AD5(iLocal_57[1], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xE3BB8E05FCEB3FBE(iLocal_71, true);
						unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						iLocal_94 = unk_0x1C0640BA9A7327B3();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0x3FC8DBCC154CA56B();
		if (unk_0x69DF961355195C3C(iLocal_303))
		{
			if ((unk_0xA45992A6CE82FB43(iLocal_303) > 0.115f && unk_0xA45992A6CE82FB43(iLocal_303) < 0.12f) || (unk_0xA45992A6CE82FB43(iLocal_303) > 0.355f && unk_0xA45992A6CE82FB43(iLocal_303) < 0.36f))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (unk_0xA45992A6CE82FB43(iLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_110();
					wait(0);
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = unk_0x1C0640BA9A7327B3();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && unk_0x6C3F127AAF415E69() == 4)
		{
			unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_96(1000))
		{
			func_110();
			unk_0x53491B90E4FD0E56(800);
			while (unk_0xD0BB2359EC70FC37())
			{
				wait(0);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0x8BCB70EB440DED83(true);
		unk_0xBFE31971E49FA500(true);
		unk_0x57E0CF9BF653D99A(iLocal_303, 1f);
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 162.5284f, 6839.658f, 18.8198f, 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 256.7693f);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			unk_0x327AAEE25F323797(iLocal_51);
			unk_0xF895E10BF4C72645(iLocal_51, 0, 0);
			unk_0x46CB381A452EF99D(iLocal_51, 1);
			unk_0xA47B46945FF6DE74(iLocal_51, 164.4963f, 6839.333f, 18.9657f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_51, 73.449f);
		}
		unk_0x2FB9A57162E54BAB(26.1578f);
		unk_0xEF6276132B396452(-8.1198f, 1065353216);
		unk_0xE3BB8E05FCEB3FBE(iLocal_71, false);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0x9A8DDC7C522F5BF5(iLocal_71, 0);
		unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), false);
		if (bLocal_92)
		{
			unk_0x82E51BCA72537B6C(800);
			while (unk_0x7BCE0E6DD4A1F749())
			{
				wait(0);
			}
		}
		bLocal_96 = true;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_45() == 0)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_45() == 1)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_45() == 2)
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0x0E2400AB9174FA81(1, iLocal_137, 1862763509);
					unk_0x0E2400AB9174FA81(1, 1862763509, iLocal_137);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2048, 2);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 4000);
					if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_51, unk_0x728870EB733D12A1(), 20f, 20f, 20f, 0, 1, 0) && unk_0xD6DF381716822EFE(unk_0x728870EB733D12A1()) > 0)
						{
							unk_0x5B1D360B9C6F0A09(0, unk_0x728870EB733D12A1(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x16102BEDC7435774(iLocal_51))
						{
							unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
							unk_0x7BECA8F360B1686D(iLocal_51, 1);
							unk_0xBF541ED34EA81209(iLocal_51, 0);
						}
					}
					else if (!unk_0x16102BEDC7435774(iLocal_51))
					{
						unk_0xE25C96A9C36BE5D2(iLocal_51, func_60());
						unk_0x7BECA8F360B1686D(iLocal_51, 1);
						unk_0xBF541ED34EA81209(iLocal_51, 0);
					}
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_51, iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					if (unk_0xE4EDC4B0E92C078B(iLocal_88))
					{
						unk_0x142CC44DB769B57E(&iLocal_88);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_111))
					{
						iLocal_111 = func_66(vLocal_113, 1);
					}
					if (func_45() == 2 && !func_9())
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_112))
						{
							iLocal_112 = func_66(vLocal_114, 0);
							unk_0xBC8E0A7390523199(iLocal_112, 269);
							func_94();
						}
					}
					func_93();
					iLocal_105 = 1;
					iLocal_95 = 1;
					settimera(0);
					unk_0x21688103CC7F9B19(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_99(0, 1, 1, 0, 0, 0);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 4);
					unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_93()
{
	if (!func_9())
	{
		if (func_45() == 2)
		{
			Global_31005 = 1;
		}
	}
}

void func_94()
{
	if (func_45() == 2)
	{
		if (!Global_31007)
		{
			func_95("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_95(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_96(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1C0640BA9A7327B3();
		}
		Global_28 = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_97())
			{
				Global_27 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

int func_97()
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

void func_98(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				unk_0x98B861C98966897A(iParam0);
				unk_0xD458AC1C1D29C3B4(iParam0, unk_0x7F6DC62EA9922664(iParam0) + 200, 0);
				unk_0x5DAB50E08C3C504A(iParam0, (unk_0x6EE94F60DA2A2273(iParam0) + 200f));
				unk_0xDC544F7DF5E5164D(iParam0, (unk_0xD96C5EC6FCB061BA(iParam0) + 200f));
				unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(iParam0, true), 5f);
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(iParam0, true), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_99(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_106(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_80())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_105(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_106(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_105(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_103(unk_0xD803B885F5E47A62())) && !func_101(unk_0xD803B885F5E47A62(), 0)) && !func_100()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_103(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_100()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_101(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_102(-1, 0) == 8;
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

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_103(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
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

bool func_104()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_106(int iParam0)
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

void func_107()
{
	if (!unk_0x437347B10A200C4B(iLocal_51, 0))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_108(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_109(iParam2), 1);
}

int func_109(int iParam0)
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

void func_110()
{
	Global_19671 = 0;
	func_111();
}

void func_111()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_112()
{
	if (!iLocal_61 && unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (unk_0xDF1306B443CD3D15(iLocal_54, 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
		{
			unk_0x89258193691A7600(iLocal_52[0], iLocal_54, unk_0x16F2683693E537C9(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0xFADC0A217229F6B5(iLocal_52[0], true);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			unk_0x5B1D360B9C6F0A09(iLocal_52[1], iLocal_54, -1, 0, 3f, 1, 0);
			unk_0xFADC0A217229F6B5(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iLocal_58]))
			{
				unk_0xF3268524E9BE6D6E(iLocal_52[iLocal_58], unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	wait(0);
	func_4();
}

void func_113()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (!unk_0x688A90832774AB83(iLocal_52[0]) && !unk_0x688A90832774AB83(iLocal_52[1]))
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x168558745A6AC21E(iLocal_52[1]))
				{
					unk_0xA3BF0AA5A2608191(iLocal_52[1]);
					unk_0x2C4A1A0F54A166E8(iLocal_52[1], unk_0x16F2683693E537C9(), -1, -957453492);
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_114()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2048, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				iLocal_62 = 1;
			}
			if (unk_0x7069CC4DE1EA3FAA(iLocal_52[1], unk_0x16F2683693E537C9(), 90f))
			{
				func_110();
				wait(0);
				func_71(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
				{
					fVar0 = func_116(iLocal_52[0], unk_0x16F2683693E537C9(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x15AFB6CBDE990FB6(iLocal_56, 0, true);
					unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0], unk_0x4A089F2B762B8D33(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xA3BF0AA5A2608191(iLocal_52[0]);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2048, 2);
					unk_0xC6EB89C59F2AF6B8(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_52[0], iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					unk_0x5745EA6329A91E29(iLocal_52[1], joaat("weapon_sawnoffshotgun"), true);
					unk_0xA3BF0AA5A2608191(iLocal_52[1]);
					unk_0xDD353D0E9C789D0E(&iLocal_59);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2048, 2);
					unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, fVar0, 1f, 1073741824, 0);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0x75ABDC5F81978924(iLocal_59);
					unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
					unk_0xF82EA857DA10E0CD(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			if (unk_0xD59B17D2DFF98E26(iLocal_56))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0x161356BF7864C47B(0, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), -1, 0);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xC92DB9682A650680("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9BE7E7B6B488CC55(iLocal_52[0], unk_0x16F2683693E537C9(), -1, 0);
				}
				iLocal_126 = 1;
				settimerb(0);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (timerb() > 15000 && !func_12())
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xF96A174EE26D7588(iLocal_52[0], unk_0x16F2683693E537C9(), 0);
					unk_0xF96A174EE26D7588(iLocal_52[1], unk_0x16F2683693E537C9(), 0);
					func_71(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0xEB6A8945D1AC98A1(iLocal_52[0])) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_115())
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_71(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xE185F110925D87DB(0, iLocal_52[1], -1, 2f, 1f, 1073741824, 0);
				unk_0xF96A174EE26D7588(0, iLocal_52[1], 0);
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[0], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xE185F110925D87DB(0, iLocal_52[0], -1, 2f, 1f, 1073741824, 0);
				unk_0xF96A174EE26D7588(0, iLocal_52[0], 0);
				unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				settimerb(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_118();
		}
		if (((unk_0xE115347EA59F7B86(iLocal_52[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_52[1], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0])) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[1]))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 3))
			{
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (!iLocal_70)
					{
						func_110();
						wait(0);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 3) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 4))
			{
				if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
				{
					if (!iLocal_70)
					{
						func_110();
						wait(0);
						if (func_71(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_118();
						}
					}
				}
			}
			if (unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_118();
			}
		}
	}
}

int func_115()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_116(int iParam0, int iParam1, bool bParam2)
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

int func_117()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
			{
				if ((((unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9())) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("annihilator"))) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("buzzard"))) || unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_118()
{
	func_11();
	unk_0xC92DB9682A650680("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0xC844350D5D58C99A(iLocal_52[0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
			{
				unk_0x9DD8618CA5BF832D(iLocal_52[0], 156, true);
				if (unk_0xC844350D5D58C99A(iLocal_56))
				{
					unk_0x2ECF845953E95D1B(iLocal_52[0]);
					if (unk_0xD59B17D2DFF98E26(iLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0x15AFB6CBDE990FB6(iLocal_56, 0, true);
							unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0], unk_0x4A089F2B762B8D33(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xA3BF0AA5A2608191(iLocal_52[0]);
							unk_0xDD353D0E9C789D0E(&iLocal_59);
							unk_0xBC43ED9FE28DB191(0);
							unk_0xC6EB89C59F2AF6B8(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
							unk_0x75ABDC5F81978924(iLocal_59);
							unk_0x78ADC381772E3D54(iLocal_52[0], iLocal_59);
							unk_0xF82EA857DA10E0CD(&iLocal_59);
							unk_0xFADC0A217229F6B5(iLocal_52[0], true);
							unk_0xF895E10BF4C72645(iLocal_52[0], 0, 0);
							iLocal_115 = 1;
						}
					}
					else
					{
						unk_0xDD353D0E9C789D0E(&iLocal_59);
						unk_0xBC43ED9FE28DB191(0);
						unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
						unk_0x75ABDC5F81978924(iLocal_59);
						unk_0x78ADC381772E3D54(iLocal_52[0], iLocal_59);
						unk_0xF82EA857DA10E0CD(&iLocal_59);
						unk_0xFADC0A217229F6B5(iLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_56))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0xC844350D5D58C99A(iLocal_52[1]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				unk_0x9DD8618CA5BF832D(iLocal_52[1], 156, true);
				unk_0x2ECF845953E95D1B(iLocal_52[1]);
				unk_0xDD353D0E9C789D0E(&iLocal_59);
				unk_0xBC43ED9FE28DB191(0);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 500);
				unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
				unk_0x75ABDC5F81978924(iLocal_59);
				unk_0x78ADC381772E3D54(iLocal_52[1], iLocal_59);
				unk_0xF82EA857DA10E0CD(&iLocal_59);
				unk_0xFADC0A217229F6B5(iLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0x1C0640BA9A7327B3() + 8500;
		settimera(0);
		iLocal_47 = 7;
	}
}

int func_119(int iParam0)
{
	if (func_122())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_25(Global_111627))
		{
			func_120(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_25(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

char* func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41431);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_123))
	{
		unk_0x142CC44DB769B57E(&iLocal_123);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_88))
	{
		if (!unk_0x437347B10A200C4B(iLocal_51, 0))
		{
			iLocal_88 = func_68(iLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_52[iLocal_58], 0))
			{
				iLocal_87[iLocal_58] = func_68(iLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_129()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x1C0640BA9A7327B3())
				{
					if (func_71(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_130()
{
	switch (iLocal_86)
	{
		case 0:
			if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_71(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = unk_0x1C0640BA9A7327B3() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_131()
{
	if (unk_0xC844350D5D58C99A(iLocal_56))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_56))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xE81656B429E5C4B5("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0xB4ECF989E2C1DAC8(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") > 0.04f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.043f) || (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") > 0.24f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") > 0.44f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") > 0.64f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") > 0.84f && unk_0x8CA9406E01C7EE58(iLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xE81656B429E5C4B5("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_132()
{
	if (!iLocal_103)
	{
		if (unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 1) || unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 1))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_52[0]) || unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 1) || !unk_0xD3DCEC81D13AAFB1(vLocal_74, 100f, 1))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x7DF98E52B481B6E3(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x372F6F38C16E36DA(2, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x372F6F38C16E36DA(4, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0x372F6F38C16E36DA(0, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			if (!unk_0x437347B10A200C4B(iLocal_54, 0))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_54, unk_0x16F2683693E537C9(), 1) || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_54, 0))
				{
					unk_0xE910A68AA670B4AA(iLocal_54);
					func_118();
					iLocal_49 = 3;
					return 1;
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("towtruck")) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("towtruck2")))
					{
						if (unk_0x6D18156F72BE0773(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), iLocal_54))
						{
							func_118();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				if ((((unk_0xE115347EA59F7B86(iLocal_52[0], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_52[1], unk_0x16F2683693E537C9())) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[0])) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_52[1])) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[0]) && !unk_0xEB6A8945D1AC98A1(iLocal_52[1]))
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
				{
					if (unk_0x1B3D109B39CC2C89(unk_0x728870EB733D12A1(), iLocal_52[0]) || unk_0x1B3D109B39CC2C89(unk_0x728870EB733D12A1(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_51, unk_0x16F2683693E537C9(), 0) || unk_0x54648B774DB42A3A(iLocal_51, joaat("weapon_stungun"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (unk_0x437347B10A200C4B(iLocal_52[0], 0) || unk_0x437347B10A200C4B(iLocal_52[1], 0))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x437347B10A200C4B(iParam0, 0) && !bParam4)
	{
		if (unk_0xE3614539F8B5C807(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			vVar4 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			fVar5 = vdist(vVar3, vVar4);
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 3))
			{
				if (func_139(iParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_137(iParam0);
					return 1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xD3DCEC81D13AAFB1(vVar4, fParam5, 1))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
				if (unk_0x723EE7F83DF1497D(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_137(iParam0);
					return 1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 2))
			{
				fVar0 = unk_0xF428D43975FB0E0E(unk_0x16F2683693E537C9());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
				{
					if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xF649DD3BF44195C7(iParam0, unk_0x16F2683693E537C9(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_138("	aggro Ped knows player is pointing gun\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\n");
								func_134("		time since not LockedOn = ", (unk_0x1C0640BA9A7327B3() - iLocal_19));
								func_138("\n");
								bVar2 = true;
								if (unk_0x1C0640BA9A7327B3() > (iLocal_19 + *uParam2))
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_137(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam3, 0))
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_138("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_137(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x1C0640BA9A7327B3();
	}
	return 0;
}

void func_134(char* sParam0, int iParam1)
{
	func_136(sParam0);
	func_135(iParam1);
}

void func_135(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_136(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

void func_137(int iParam0)
{
	unk_0x0FB22E2FED7BCC7E(iParam0);
}

void func_138(char* sParam0)
{
	func_136(sParam0);
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		if ((unk_0x65BC0B7172CA52DD(iParam0) - unk_0x7F6DC62EA9922664(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_140()
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_142(39, 1);
	func_142(40, 1);
	func_142(41, 1);
	func_142(42, 1);
	func_142(43, 1);
	func_142(44, 1);
	unk_0x7D6CA5F52B3748BF(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x7D6CA5F52B3748BF(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0xAB8E2DDC7AF955E0(iLocal_83, true);
	unk_0x15EA7F4313456B1D(5, false);
	unk_0x15EA7F4313456B1D(3, false);
	unk_0x51B096AAC60548C1(0f);
	iLocal_51 = unk_0x36F2404464202779(26, iLocal_80, vLocal_72, fLocal_77, 1, true);
	unk_0x11AD11297DC58CC7(iLocal_51, true);
	unk_0x25C5402CC10F76CD(iLocal_51, false);
	unk_0xBAFED2F6486F771A(iLocal_51, 2, false);
	unk_0xBAFED2F6486F771A(iLocal_51, 128, true);
	unk_0xAFF39FB306F8E232(iLocal_51, 1, false);
	unk_0xAFF39FB306F8E232(iLocal_51, 6, false);
	unk_0x4E885A246A9D983A(iLocal_51, 206, true);
	unk_0x4E885A246A9D983A(iLocal_51, 318, false);
	unk_0x4E885A246A9D983A(iLocal_51, 118, false);
	unk_0x4E885A246A9D983A(iLocal_51, 208, true);
	unk_0x71199B01895C6202(iLocal_80);
	unk_0xD458AC1C1D29C3B4(iLocal_51, iLocal_99, 0);
	unk_0xF4CB0B98F8F79D8D(unk_0x16F2683693E537C9(), 0);
	unk_0xF63400DBE3303D26("rghKidnappers", &iLocal_136);
	unk_0xF63400DBE3303D26("rghVictim", &iLocal_137);
	unk_0x6DF7BF67E86AAE86(iLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		iLocal_52[iLocal_58] = unk_0x36F2404464202779(26, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 1, true);
		unk_0x11AD11297DC58CC7(iLocal_52[iLocal_58], true);
		unk_0x20EC6650986ACDC7(iLocal_52[iLocal_58], 1);
		unk_0xAFF39FB306F8E232(iLocal_52[iLocal_58], 0, true);
		unk_0xBAFED2F6486F771A(iLocal_52[iLocal_58], 2, false);
		unk_0xBAFED2F6486F771A(iLocal_52[iLocal_58], 128, true);
		unk_0x4E885A246A9D983A(iLocal_52[iLocal_58], 42, true);
		unk_0x3CC33E4E9CE523F4(iLocal_52[0], 2);
		unk_0xAFF39FB306F8E232(iLocal_52[0], 50, true);
		unk_0x29CD9554726C7577(iLocal_52[iLocal_58], 50);
		unk_0x298903DD96203C2C(iLocal_52[iLocal_58], 13);
		unk_0xE8832A9E16A57A1F(iLocal_52[iLocal_58], true, 1);
		unk_0x6DF7BF67E86AAE86(iLocal_52[iLocal_58], iLocal_136);
		unk_0x6D80F1AEBA734886(iLocal_52[iLocal_58], unk_0x09AC81E49EA267F7(800, 2000));
		iLocal_58++;
	}
	unk_0x71199B01895C6202(iLocal_82);
	unk_0x71199B01895C6202(iLocal_81);
	unk_0x29CD9554726C7577(iLocal_52[1], 100);
	unk_0xAA714ADDDC372E0F(iLocal_52[1], -687903391);
	unk_0x0E2400AB9174FA81(5, iLocal_136, 1862763509);
	unk_0x262EF6C6306BEA6C(iLocal_52[0], joaat("weapon_pistol"), -1, false, true);
	unk_0x262EF6C6306BEA6C(iLocal_52[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	iLocal_54 = unk_0x122AAB0B1D6F55AD(iLocal_83, vLocal_74, fLocal_79, true, true, false);
	unk_0xB9FD7450C0DAB575(iLocal_54, 1084227584);
	unk_0x0882E3DC0C991680(iLocal_54, 3);
	unk_0x611DFA9294B339CA(iLocal_54, 5, 0, false);
	unk_0x71199B01895C6202(iLocal_83);
	iLocal_56 = unk_0x7707E48765093646(joaat("prop_ld_shovel"), vLocal_85, true, true, false);
	unk_0x71199B01895C6202(joaat("prop_ld_shovel"));
	iLocal_57[0] = unk_0x7707E48765093646(joaat("p_arm_bind_cut_s"), vLocal_85, true, true, false);
	iLocal_57[1] = unk_0x7707E48765093646(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), true, true, false);
	unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
	unk_0x9F528B1B53FBC5D9(iLocal_56, iLocal_52[0], unk_0x4A089F2B762B8D33(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0], 0, 0, 0, 0);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0], 3, 0, 1, 0);
	unk_0x64F9F278AB9DCA2C(iLocal_52[0], 4, 1, 0, 0);
	unk_0x64F9F278AB9DCA2C(iLocal_52[1], 0, 0, 2, 0);
	unk_0x64F9F278AB9DCA2C(iLocal_52[1], 3, 2, 1, 0);
	unk_0x64F9F278AB9DCA2C(iLocal_52[1], 4, 1, 1, 0);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = unk_0xE9744DB7B8CA6965(vVar0, vVar1, 2);
	unk_0x915804B434753CBD(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xE14EC663EED44AD5(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xE14EC663EED44AD5(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xC90224D9E95E5E3A(iLocal_303, true);
	unk_0xFADC0A217229F6B5(iLocal_51, true);
	unk_0xC6EB89C59F2AF6B8(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xC6EB89C59F2AF6B8(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x17EAEF3CBDBACF1B(iLocal_52[0], vLocal_75, vLocal_76, 2.75f, 0, 0);
	unk_0x17EAEF3CBDBACF1B(iLocal_52[1], vLocal_75, vLocal_76, 2.75f, 0, 0);
	if (func_45() == 0)
	{
		func_141(&uLocal_138, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_45() == 1)
	{
		func_141(&uLocal_138, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_45() == 2)
	{
		func_141(&uLocal_138, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	unk_0x4F39CC3882DD074E(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x4F39CC3882DD074E(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x4F39CC3882DD074E(iLocal_51, "KIDNAPPEDFEMALE");
	func_141(&uLocal_138, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_138, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_138, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_141(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_142(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_143(iParam0, 2, 1);
	}
}

void func_143(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			iVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_144(func_147(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_145(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_147(int iParam0)
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
		if (func_20() == 0)
		{
			iVar0 = func_146(func_147(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_144(func_147(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
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
		if (func_20() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_146(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_150()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_151()
{
	unk_0x523BCC9DC80CD82F(iLocal_80);
	unk_0x523BCC9DC80CD82F(iLocal_82);
	unk_0x523BCC9DC80CD82F(iLocal_81);
	unk_0x523BCC9DC80CD82F(iLocal_83);
	unk_0x523BCC9DC80CD82F(joaat("prop_ld_shovel"));
	unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
	unk_0x3F423BF5B8125A50("random@burial");
	unk_0x9E5E60D8C63FD9D1();
	unk_0xAE317D00A5A55DF6("ROPE_CUT", false, -1);
	unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xB87F6CF6E5628C67(iLocal_80) && unk_0xB87F6CF6E5628C67(iLocal_82)) && unk_0xB87F6CF6E5628C67(iLocal_81)) && unk_0xB87F6CF6E5628C67(iLocal_83)) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_shovel"))) && unk_0xB87F6CF6E5628C67(joaat("p_arm_bind_cut_s"))) && unk_0xB4AE0788C1587752("random@burial")) && unk_0x25F7A4D42AF2AB93()) && unk_0xAE317D00A5A55DF6("ROPE_CUT", false, -1)) && unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_80);
		unk_0x523BCC9DC80CD82F(iLocal_82);
		unk_0x523BCC9DC80CD82F(iLocal_81);
		unk_0x523BCC9DC80CD82F(iLocal_83);
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_shovel"));
		unk_0x523BCC9DC80CD82F(joaat("p_arm_bind_cut_s"));
		unk_0x3F423BF5B8125A50("random@burial");
		unk_0x9E5E60D8C63FD9D1();
		unk_0xAE317D00A5A55DF6("ROPE_CUT", false, -1);
		unk_0x13896FDECC859926("RE6_BOTH_DEAD_OS");
	}
}

void func_152()
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("bison");
	vLocal_72 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_77 = 0f;
	vLocal_73[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0] = 297.0056f;
	vLocal_73[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[1] = 193.3866f;
	vLocal_74 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_79 = 265.6862f;
	vLocal_75 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 1;
}

int func_153()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
		if (func_33(func_45()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_155(iVar1, &Var0);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
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

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_111356 > 0;
}

int func_162()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_125(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_111627 == func_40() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_168();
}

void func_168()
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

void func_169(int iParam0)
{
	Global_111627 = iParam0;
}

int func_170(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_40();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam1))
		{
			return 0;
		}
		if (func_33(func_45()))
		{
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_45()))
		{
			if (!func_207(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_111638.f_24990.f_43[iParam1]))
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
		if (func_205())
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
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_125(5))
		{
			return 0;
		}
		if (func_195(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_45()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_194(iVar4))
				{
					if (func_172(iVar2))
					{
						if (!func_171(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar3) < (210f * 210f))
							{
								if (func_45() != iVar2)
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

bool func_171(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
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
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_177(to_float(iVar0 + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2)
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

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_180(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_181(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_182(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_183(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_184(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 15;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 1;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, unk_0x4460E481B9E33ADA());
	func_192(&uVar0, unk_0x8D199E381D262EEF());
	func_191(&uVar0, unk_0xD8A54335F18763BA());
	func_190(&uVar0, unk_0x972A296334C9D57B());
	func_189(&uVar0, unk_0x118229AD063C3C1D());
	func_188(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_194(int iParam0)
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
	iVar0 = func_179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_45();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_204()) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_204()) || Global_30770) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_204()) || func_201()) || Global_110685) || Global_30770) || func_203()) || Global_42596) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_204()) || Global_110685) || Global_30770) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_98783.f_1;
}

int func_198()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_98796.f_346 > 0;
}

bool func_202()
{
	return Global_98796.f_345 > 0;
}

var func_203()
{
	return Global_1312877;
}

int func_204()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_208(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_209(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
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

int func_210()
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

int func_211()
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

void func_212()
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_225(0);
		unk_0xB547E3FFEB27073E();
		unk_0x38DC636F3D2D2FA8("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_31009)
			{
				unk_0xC92DB9682A650680("AC_STOP");
			}
			else
			{
				unk_0xC92DB9682A650680("RE6_END");
			}
		}
		func_224();
		unk_0x0E2400AB9174FA81(255, iLocal_137, 1862763509);
		unk_0x0E2400AB9174FA81(255, 1862763509, iLocal_137);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_51))
			{
				unk_0x4E885A246A9D983A(iLocal_51, 317, true);
				if (!unk_0x405E212DDE472467(iLocal_51, 0))
				{
					unk_0x61F0DE0226FF7252(iLocal_51);
				}
				if (unk_0x16102BEDC7435774(iLocal_51))
				{
					unk_0x0A94A109271BE75A(iLocal_51);
				}
				unk_0x11AD11297DC58CC7(iLocal_51, false);
				unk_0x25C5402CC10F76CD(iLocal_51, true);
			}
			else if (!unk_0x437347B10A200C4B(iLocal_51, 0))
			{
				unk_0xA86D71B57C84C089(iLocal_51, 1);
				unk_0xF20820358777D05E(iLocal_51, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_52[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x2ECF845953E95D1B(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 0, 16);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_52[iVar0], unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
					func_110();
				}
				unk_0xFADC0A217229F6B5(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		unk_0xF690C84DADBB3551(&(iLocal_57[0]));
		unk_0xF690C84DADBB3551(&(iLocal_57[1]));
		if (unk_0xC844350D5D58C99A(iLocal_54))
		{
			unk_0x046C362CF15F1935(&iLocal_54);
		}
		if (unk_0xC844350D5D58C99A(iLocal_56))
		{
			if (unk_0xD59B17D2DFF98E26(iLocal_56))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_56, 1, true);
			}
			unk_0xEEEE2E5FA6F78DF0(&iLocal_56);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_123))
		{
			unk_0x142CC44DB769B57E(&iLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_87[iLocal_58]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_88))
		{
			unk_0x142CC44DB769B57E(&iLocal_88);
		}
		if (unk_0x9F4FE516EAACCFC5(iLocal_71))
		{
			unk_0x9A8DDC7C522F5BF5(iLocal_71, 0);
		}
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x51B096AAC60548C1(1f);
		unk_0xE342F209E49C5314(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_213(-1);
	unk_0x10FAF14A60A0DBE1();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_111627, 1), 64);
		if (func_39(Global_111627) > 0)
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
	func_214(&Global_30827);
	Global_111628 = 0;
	func_169(-1);
}

void func_214(var uParam0)
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

char* func_215(int iParam0, bool bParam1)
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

void func_216(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
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
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
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

void func_224()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_225(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_142(iVar0, bParam0);
		iVar0++;
	}
}

