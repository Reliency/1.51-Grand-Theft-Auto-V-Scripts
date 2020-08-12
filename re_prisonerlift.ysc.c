#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_29 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72[2] = { 0, 0 };
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	float fLocal_93 = 0f;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
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
	struct<2> Local_279 = { 0, 5 } ;
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
	var uLocal_295 = 5;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
#endregion

void __EntryFunction__()
{
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = unk_0xAD1355DD1E5D2D9B();
	iLocal_48 = unk_0x817B3657F78A517A();
	vLocal_59 = { 1492.31f, 2136.53f, 89.15f };
	vLocal_60 = { 1408.24f, 2522.803f, 41.0419f };
	vLocal_98 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_99 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_100 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_101 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_102 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_103 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_104 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_105 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_106 = { 1693.518f, 2579.21f, 44.95713f };
	vLocal_57 = { ScriptParam_279.f_1[0 /*3*/] };
	func_191();
	if (unk_0x2EBF608FFE6CA406(11))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				unk_0x0A94A109271BE75A(iLocal_64);
			}
		}
		func_176();
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	if (func_134(vLocal_57, 22, iLocal_61, 0, 0))
	{
		func_131(22);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		wait(0);
		if (unk_0x338D6FF72D84D90F() || iLocal_80)
		{
			if (!func_130())
			{
				if (func_129())
				{
					func_176();
				}
			}
			unk_0x1A6DFFFEEC27BF4F("RE_PL", 0);
			switch (iLocal_51)
			{
				case 0:
					if (func_117())
					{
						func_176();
					}
					if (!iLocal_56)
					{
						func_116();
					}
					else
					{
						func_115();
					}
					if (bLocal_55)
					{
						iLocal_107 = 1;
						iLocal_51 = 1;
					}
					break;
				
				case 1:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						switch (iLocal_52)
						{
							case 0:
								switch (iLocal_53)
								{
									case 0:
										func_108();
										break;
									
									case 1:
										if (iLocal_54 == 0)
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
											{
												if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 100f, 100f, 100f, 0, 1, 0) && !unk_0x03068588A1FCED1A(iLocal_64)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													if (unk_0xE4EDC4B0E92C078B(iLocal_89))
													{
														unk_0xF2D30B8ACAF12A39(iLocal_89, true);
													}
													func_95();
													if (!func_94())
													{
														if (unk_0xB4ECF989E2C1DAC8(iLocal_64, "random@prisoner_lift", "arms_waving", 3) || unk_0xB4ECF989E2C1DAC8(iLocal_64, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															unk_0xA3BF0AA5A2608191(iLocal_64);
														}
														func_93(&uLocal_91);
													}
												}
											}
											else
											{
												func_92();
											}
											func_91();
											func_90();
										}
										else if (iLocal_54 == 1)
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
											{
												if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 105f, 105f, 105f, 0, 1, 0) && !unk_0x03068588A1FCED1A(iLocal_64)) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (!unk_0x437347B10A200C4B(iLocal_64, 0))
												{
													if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
													{
														if (unk_0xE4EDC4B0E92C078B(iLocal_89))
														{
															unk_0xF2D30B8ACAF12A39(iLocal_89, true);
														}
														func_95();
													}
												}
												if (bLocal_83)
												{
													if (timera() > 2000 && timera() < 2100)
													{
														unk_0x8FB4E06C94958F84(iLocal_64);
													}
													if (timera() > 3000)
													{
														if (!iLocal_86)
														{
															if (!func_89())
															{
																func_73(&uLocal_114, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_86 = 1;
															}
														}
													}
												}
												if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
												{
													if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
													{
														if (!func_72(unk_0x728870EB733D12A1()))
														{
															if (unk_0x12DE711B1C681E9E(unk_0x728870EB733D12A1(), iLocal_64, 40f, 40f, 20f, 0, 1, 0) && unk_0xF649DD3BF44195C7(iLocal_64, unk_0x728870EB733D12A1(), 17))
															{
																unk_0xA3BF0AA5A2608191(iLocal_64);
																if (!unk_0xAF6690C489CC6203(unk_0x728870EB733D12A1()))
																{
																	unk_0x73270B3C9CC833FD(unk_0x728870EB733D12A1(), true, 0);
																}
																unk_0x89258193691A7600(iLocal_64, unk_0x728870EB733D12A1(), unk_0x16F2683693E537C9(), 8, 22f, 786469, 1f, 1f, 1);
																unk_0xFADC0A217229F6B5(iLocal_64, true);
																iLocal_53 = 13;
															}
															else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0) && unk_0xF649DD3BF44195C7(iLocal_64, unk_0x16F2683693E537C9(), 17))
															{
																func_73(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_92();
															}
														}
														else
														{
															func_73(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
													else
													{
														func_73(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_92();
													}
												}
												if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
												{
													if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
													{
														if (((unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()) || unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino"))) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
														{
															func_73(&uLocal_114, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
												}
											}
											if (func_71())
											{
												if (!unk_0x437347B10A200C4B(iLocal_64, 0))
												{
													if (!unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("bus")))
													{
														if (func_70(unk_0x16F2683693E537C9(), iLocal_64) < 2.5f)
														{
															if (unk_0x9C66D99E63E8E24C(iLocal_67) < 1f)
															{
																func_69();
															}
														}
													}
													else if (func_70(unk_0x16F2683693E537C9(), iLocal_64) < 10f)
													{
														if (unk_0x9C66D99E63E8E24C(iLocal_67) < 1f)
														{
															func_69();
														}
													}
												}
											}
										}
										if (func_65())
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
											{
												unk_0xA3BF0AA5A2608191(iLocal_64);
												if (unk_0x16102BEDC7435774(iLocal_64))
												{
													unk_0x0A94A109271BE75A(iLocal_64);
												}
											}
											func_92();
										}
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0x7D732AB707BE9152(iLocal_64, 0);
										}
										break;
									
									case 2:
										func_64();
										func_90();
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0x7D732AB707BE9152(iLocal_64, 0);
										}
										break;
									
									case 3:
										if (func_63())
										{
											iLocal_53 = 9;
										}
										func_55();
										func_90();
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0x7D732AB707BE9152(iLocal_64, 0);
										}
										break;
									
									case 5:
										func_54();
										break;
									
									case 6:
										if (!iLocal_88 && !unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0xDD353D0E9C789D0E(&iLocal_66);
											unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 5000, 2048, 2);
											unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
											unk_0x78A77CDD64392938(0, 1500);
											unk_0x96167B03C5A77156(0, vLocal_77, 1f, -1, 0.25f, 0, 333.9002f);
											unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", 0, 1);
											unk_0x75ABDC5F81978924(iLocal_66);
											unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
											unk_0xF82EA857DA10E0CD(&iLocal_66);
											unk_0xFADC0A217229F6B5(iLocal_64, true);
											func_73(&uLocal_114, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											unk_0x0A94A109271BE75A(iLocal_64);
											iLocal_88 = 1;
										}
										if (func_65())
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
											{
												unk_0xA3BF0AA5A2608191(iLocal_64);
												if (unk_0x16102BEDC7435774(iLocal_64))
												{
													unk_0x0A94A109271BE75A(iLocal_64);
												}
												func_52();
												wait(0);
												func_73(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
												unk_0xFADC0A217229F6B5(iLocal_64, true);
												wait(0);
											}
											func_92();
										}
										if (!func_89())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
										{
											if (!unk_0xE4EDC4B0E92C078B(iLocal_62))
											{
												iLocal_62 = func_6(vLocal_74, 1);
											}
											if (func_73(&uLocal_114, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_53 = 3;
											}
										}
										if (bLocal_84)
										{
											if (unk_0xC844350D5D58C99A(iLocal_73))
											{
												if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0) || func_5(unk_0x16F2683693E537C9(), iLocal_73, 1) > 200f)
												{
													unk_0x6DAD7906B73F064D(&(iLocal_72[0]));
													unk_0x6DAD7906B73F064D(&(iLocal_72[1]));
													unk_0x046C362CF15F1935(&iLocal_73);
												}
											}
										}
										if (func_65())
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
											{
												unk_0xA3BF0AA5A2608191(iLocal_64);
												if (unk_0x16102BEDC7435774(iLocal_64))
												{
													unk_0x0A94A109271BE75A(iLocal_64);
												}
												unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
												unk_0xFADC0A217229F6B5(iLocal_64, true);
												func_52();
												wait(0);
												func_73(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_92();
										}
										break;
									
									case 11:
										unk_0x51B096AAC60548C1(0.1f);
										if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
										{
											if (!func_72(iLocal_67))
											{
												if (!iLocal_85)
												{
													if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && !unk_0x405E212DDE472467(iLocal_64, 0))
													{
														if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
														{
															if (!iLocal_87)
															{
																func_73(&uLocal_114, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_87 = 1;
															}
															unk_0x5B1D360B9C6F0A09(iLocal_64, iLocal_67, -1, -1, 2f, 1, 0);
															unk_0xFADC0A217229F6B5(iLocal_64, true);
															iLocal_53 = 12;
														}
													}
													if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
													{
														if (((unk_0xB87D13D0C064E9D1(iLocal_64, unk_0x16F2683693E537C9(), 1) || (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_64) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))) || (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_64) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))) || (unk_0x9C66D99E63E8E24C(iLocal_67) > 2.5f && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_67, 0)))
														{
															unk_0x6C3AE6E278DB3D0E(iLocal_64, unk_0x16F2683693E537C9(), 0, 16);
															func_52();
															iLocal_85 = 1;
														}
													}
												}
											}
											else
											{
												if (unk_0xE4EDC4B0E92C078B(iLocal_89))
												{
													unk_0x142CC44DB769B57E(&iLocal_89);
												}
												if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
												{
													unk_0xDD353D0E9C789D0E(&iLocal_66);
													unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
													unk_0x75ABDC5F81978924(iLocal_66);
													unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
													unk_0xF82EA857DA10E0CD(&iLocal_66);
													unk_0xFADC0A217229F6B5(iLocal_64, true);
													iLocal_53 = 13;
												}
											}
										}
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 150f, 150f, 150f, 0, 1, 0))
											{
												unk_0xDD353D0E9C789D0E(&iLocal_66);
												unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
												unk_0x75ABDC5F81978924(iLocal_66);
												unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
												unk_0xF82EA857DA10E0CD(&iLocal_66);
												unk_0xFADC0A217229F6B5(iLocal_64, true);
												iLocal_53 = 13;
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 12:
										unk_0x51B096AAC60548C1(0.1f);
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											if (unk_0xB87D13D0C064E9D1(iLocal_64, unk_0x16F2683693E537C9(), 1))
											{
												if (unk_0xE4EDC4B0E92C078B(iLocal_89))
												{
													unk_0x321E019A46034F39(iLocal_89, false);
													unk_0xE910A68AA670B4AA(iLocal_64);
												}
											}
											if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
											{
												if (!func_72(iLocal_67))
												{
													if (unk_0xC42A92762C58E1B9(iLocal_64, iLocal_67, 0))
													{
														if (!unk_0xAF6690C489CC6203(iLocal_67))
														{
															unk_0x73270B3C9CC833FD(iLocal_67, true, 0);
														}
														unk_0x89258193691A7600(iLocal_64, iLocal_67, unk_0x16F2683693E537C9(), 8, 22f, 786469, 1f, 1f, 1);
														unk_0xFADC0A217229F6B5(iLocal_64, true);
														iLocal_53 = 13;
													}
													else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_67, 0))
													{
														if (bLocal_94)
														{
															unk_0x6C3AE6E278DB3D0E(iLocal_64, unk_0x16F2683693E537C9(), 0, 16);
															func_52();
															iLocal_85 = 1;
															iLocal_53 = 11;
														}
														else
														{
															func_69();
														}
													}
													else if (unk_0xD1960163A3042274(iLocal_64, -1794415470) != 1 && unk_0xD1960163A3042274(iLocal_64, -1794415470) != 0)
													{
														if (unk_0xD1960163A3042274(iLocal_64, 780511057) != 1 && unk_0xD1960163A3042274(iLocal_64, 780511057) != 0)
														{
														}
														else
														{
															iLocal_53 = 11;
														}
													}
												}
												else
												{
													if (unk_0xE4EDC4B0E92C078B(iLocal_89))
													{
														unk_0x142CC44DB769B57E(&iLocal_89);
													}
													unk_0xDD353D0E9C789D0E(&iLocal_66);
													unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
													unk_0x75ABDC5F81978924(iLocal_66);
													unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
													unk_0xF82EA857DA10E0CD(&iLocal_66);
													unk_0xFADC0A217229F6B5(iLocal_64, true);
													iLocal_53 = 13;
												}
											}
											else
											{
												unk_0xDD353D0E9C789D0E(&iLocal_66);
												unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
												unk_0x75ABDC5F81978924(iLocal_66);
												unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
												unk_0xF82EA857DA10E0CD(&iLocal_66);
												unk_0xFADC0A217229F6B5(iLocal_64, true);
												iLocal_53 = 13;
											}
											if (!iLocal_85)
											{
												if (((unk_0xB87D13D0C064E9D1(iLocal_64, unk_0x16F2683693E537C9(), 1) || (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_64) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))) || (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_64) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))) || (unk_0x9C66D99E63E8E24C(iLocal_67) > 2.5f && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_67, 0)))
												{
													unk_0x6C3AE6E278DB3D0E(iLocal_64, unk_0x16F2683693E537C9(), 0, 16);
													func_52();
													iLocal_85 = 1;
												}
											}
										}
										else
										{
											iLocal_53 = 13;
										}
										break;
									
									case 13:
										iLocal_80 = 1;
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											if (unk_0x36646919F20EAFFC(iLocal_64))
											{
												func_52();
											}
											if (unk_0x405E212DDE472467(iLocal_64, 0))
											{
												if (unk_0xE4EDC4B0E92C078B(iLocal_89))
												{
													unk_0x321E019A46034F39(iLocal_89, false);
												}
												if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(iLocal_64, 0), joaat("towtruck")) || unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(iLocal_64, 0), joaat("towtruck2")))
												{
													iLocal_71 = unk_0xC102CE429C03E382(unk_0x6937EA2286828455(iLocal_64, 0));
													if (unk_0xC844350D5D58C99A(iLocal_71))
													{
														iLocal_70 = unk_0x96A5FE5834B81CE7(iLocal_71);
														if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(iLocal_64, 0), 0) && !unk_0x437347B10A200C4B(iLocal_70, 0))
														{
															if (unk_0x6D18156F72BE0773(unk_0x6937EA2286828455(iLocal_64, 0), iLocal_70))
															{
																unk_0xA1D5A8611E9DC1DD(unk_0x6937EA2286828455(iLocal_64, 0), iLocal_70);
															}
														}
													}
												}
												if (unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iLocal_64, 0)))
												{
													unk_0xDD353D0E9C789D0E(&iLocal_66);
													unk_0x75CDA8644CD3B5F5(0, 0, 0);
													unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
													unk_0x75ABDC5F81978924(iLocal_66);
													unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
													unk_0xF82EA857DA10E0CD(&iLocal_66);
													unk_0xFADC0A217229F6B5(iLocal_64, true);
												}
												if (!iLocal_97)
												{
													if ((func_1(unk_0x6937EA2286828455(iLocal_64, 0)) || !unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(iLocal_64, 0), 0)) || func_72(unk_0x6937EA2286828455(iLocal_64, 0)))
													{
														if (unk_0xE4EDC4B0E92C078B(iLocal_89))
														{
															unk_0x321E019A46034F39(iLocal_89, false);
														}
														unk_0xDD353D0E9C789D0E(&iLocal_66);
														unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
														unk_0x75ABDC5F81978924(iLocal_66);
														unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
														unk_0xF82EA857DA10E0CD(&iLocal_66);
														unk_0xFADC0A217229F6B5(iLocal_64, true);
														iLocal_97 = 1;
													}
												}
												if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 245f, 245f, 245f, 0, 1, 0))
												{
													func_92();
												}
											}
											else if (unk_0xD1960163A3042274(iLocal_64, 242628503) != 1 && unk_0xD1960163A3042274(iLocal_64, 242628503) != 0)
											{
												iLocal_53 = 11;
											}
											else if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_79)
								{
									case 1:
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0xA3BF0AA5A2608191(iLocal_64);
											if (unk_0x16102BEDC7435774(iLocal_64))
											{
												unk_0x0A94A109271BE75A(iLocal_64);
											}
											unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
											unk_0xFADC0A217229F6B5(iLocal_64, true);
											wait(0);
											func_92();
										}
										break;
									
									case 2:
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0xA3BF0AA5A2608191(iLocal_64);
											if (unk_0x16102BEDC7435774(iLocal_64))
											{
												unk_0x0A94A109271BE75A(iLocal_64);
											}
											unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
											unk_0xFADC0A217229F6B5(iLocal_64, true);
											wait(0);
											func_92();
										}
										break;
									
									case 3:
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0xA3BF0AA5A2608191(iLocal_64);
											if (unk_0x16102BEDC7435774(iLocal_64))
											{
												unk_0x0A94A109271BE75A(iLocal_64);
											}
											unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
											unk_0xFADC0A217229F6B5(iLocal_64, true);
											wait(0);
											func_92();
										}
										break;
									
									case 4:
										if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
										{
											unk_0xA3BF0AA5A2608191(iLocal_64);
											if (unk_0x16102BEDC7435774(iLocal_64))
											{
												unk_0x0A94A109271BE75A(iLocal_64);
											}
											unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
											unk_0xFADC0A217229F6B5(iLocal_64, true);
											wait(0);
											func_92();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_4(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && func_2(iParam0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_2(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x6D18156F72BE0773(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, bool bParam2)
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

int func_6(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_7(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!func_94())
			{
				if (unk_0xD1960163A3042274(iLocal_64, 1227113341) != 1 && unk_0xD1960163A3042274(iLocal_64, 1227113341) != 0)
				{
					unk_0xE185F110925D87DB(iLocal_64, unk_0x16F2683693E537C9(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x405E212DDE472467(iLocal_64, 0))
				{
					unk_0x75CDA8644CD3B5F5(iLocal_64, 0, 0);
				}
				if (!iLocal_95)
				{
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_114, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_114, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_95 = 1;
					}
				}
			}
			else
			{
				iLocal_95 = 0;
				if (unk_0xD1960163A3042274(iLocal_64, 1227113341) == 1 && unk_0xD1960163A3042274(iLocal_64, 1227113341) == 0)
				{
					unk_0xA3BF0AA5A2608191(iLocal_64);
				}
			}
		}
	}
}

int func_9()
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

void func_10()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_64, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_89))
						{
							unk_0x142CC44DB769B57E(&iLocal_89);
						}
						if (iLocal_53 != 10)
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_62))
							{
								iLocal_62 = func_6(vLocal_74, 1);
							}
						}
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_89))
					{
						unk_0x142CC44DB769B57E(&iLocal_89);
					}
					if (iLocal_53 != 10)
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_62))
						{
							iLocal_62 = func_6(vLocal_74, 1);
						}
					}
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_62))
			{
				unk_0x142CC44DB769B57E(&iLocal_62);
			}
		}
		else
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
			{
				iLocal_89 = func_11(iLocal_64, 0, 145);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_62))
			{
				unk_0x142CC44DB769B57E(&iLocal_62);
			}
		}
	}
}

int func_11(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_7(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_7(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_7(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_13()
{
	switch (iLocal_90)
	{
		case 0:
			if (func_14())
			{
				if (unk_0x16102BEDC7435774(iLocal_64))
				{
					unk_0x0A94A109271BE75A(iLocal_64);
				}
				func_52();
				wait(0);
				func_73(&uLocal_114, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				settimera(0);
				iLocal_90++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (timera() > 500)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
					{
						unk_0xBB59E14911FBDDF9(iLocal_67, -1f);
						if (unk_0xE4EDC4B0E92C078B(iLocal_62))
						{
							unk_0x142CC44DB769B57E(&iLocal_62);
						}
						iLocal_90++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (timera() > 2000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
						unk_0xD1F0F33C375B8446(unk_0x16F2683693E537C9(), iLocal_67, 24, 2000);
						iLocal_90++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (timera() > 4000)
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
					if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
						{
							unk_0x0A94A109271BE75A(iLocal_64);
							unk_0xBB59E14911FBDDF9(iLocal_67, 0f);
							unk_0x45F014B3D0466974(iLocal_64, iLocal_67, 320);
							if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
							{
								iLocal_89 = func_11(iLocal_64, 1, 145);
							}
							iLocal_90++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_64) && !unk_0xC42A92762C58E1B9(iLocal_64, iLocal_67, 0))
				{
					unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_64, true);
					func_52();
					wait(0);
					func_73(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_90++;
				}
			}
			break;
		
		case 5:
			wait(0);
			func_92();
			break;
	}
}

int func_14()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				if (unk_0x82CCEAB29E9451DD(iLocal_64, iLocal_67))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_88 && !unk_0xEB6A8945D1AC98A1(iLocal_64)) && unk_0xDF1306B443CD3D15(iLocal_67, 0))
	{
		unk_0x0A94A109271BE75A(iLocal_64);
		unk_0xDD353D0E9C789D0E(&iLocal_66);
		unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 5000, 2048, 2);
		unk_0x75CDA8644CD3B5F5(0, 0, 0);
		unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
		unk_0x96167B03C5A77156(0, vLocal_77, 1f, -1, 0.25f, 0, 333.9002f);
		unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", 0, 1);
		unk_0x75ABDC5F81978924(iLocal_66);
		unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
		unk_0xF82EA857DA10E0CD(&iLocal_66);
		unk_0xFADC0A217229F6B5(iLocal_64, true);
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		iLocal_88 = 1;
	}
	if (func_65())
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			unk_0xA3BF0AA5A2608191(iLocal_64);
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				unk_0x0A94A109271BE75A(iLocal_64);
			}
			unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_64, true);
			func_52();
			wait(0);
			func_73(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (!func_89())
	{
		func_16();
	}
}

void func_16()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		unk_0x11AD11297DC58CC7(iLocal_64, false);
	}
	while (!func_51())
	{
		wait(0);
	}
	if (iLocal_54 == 0)
	{
		func_46(func_50(), 4, 3);
	}
	func_20(22, iLocal_61);
	func_17();
	func_176();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
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

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), vLocal_50.x, vLocal_50.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_21(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_111624 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
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
		func_26((891 + iParam0), 1, -1, 1);
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
		func_23();
	}
}

void func_23()
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
		func_25(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_24() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_30768;
}

int func_25(int iParam0, int iParam1)
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

int func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0, int iParam1)
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

int func_29(int iParam0)
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

void func_30(int iParam0)
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_33();
	}
}

void func_33()
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

int func_34()
{
	func_35();
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

void func_35()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_39(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_38(unk_0x16F2683693E537C9());
			if (func_37(iVar0) && (!func_36(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_37(Global_111638.f_2358.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_41(int iParam0)
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

void func_42(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)
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

int func_44()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_45(Var0);
	return uVar1;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				iVar0 = func_49(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_47(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_48(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_48(var uParam0)
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_48(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50()
{
	func_35();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_51()
{
	return 1;
}

void func_52()
{
	Global_19671 = 0;
	func_53();
}

void func_53()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_54()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_62))
	{
		unk_0x661342B9651D16E2(iLocal_62, false);
		unk_0x142CC44DB769B57E(&iLocal_62);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			unk_0x790015DC92C918E2();
			func_52();
			wait(0);
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (timera() > 1000)
	{
		iLocal_53 = 7;
	}
}

void func_55()
{
	vector3 vVar0[4];
	
	func_10();
	func_62();
	func_61();
	func_8();
	if (!iLocal_81 && !iLocal_82)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_81 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_81 = 1;
			}
		}
	}
	if (iLocal_81 && !iLocal_82)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_82 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_82 = 1;
			}
		}
	}
	if (iLocal_81 && iLocal_82)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_81 = 0;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_81 = 0;
			}
		}
	}
	if (func_65())
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			unk_0xA3BF0AA5A2608191(iLocal_64);
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				unk_0x0A94A109271BE75A(iLocal_64);
			}
			unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_64, true);
			func_52();
			wait(0);
			func_73(&uLocal_114, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (func_60(unk_0x16F2683693E537C9(), vLocal_57, 1) > 200f)
	{
		if (!bLocal_84)
		{
			vVar0[0 /*3*/] = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - Vector(0f, 9f, 0f) };
			unk_0xB885EF0389689E54(vVar0[0 /*3*/], 0, &(vVar0[0 /*3*/]), 0);
			vVar0[1 /*3*/] = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) + Vector(0f, 9f, 0f) };
			unk_0xB885EF0389689E54(vVar0[1 /*3*/], 0, &(vVar0[1 /*3*/]), 0);
			vVar0[2 /*3*/] = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - Vector(0f, 0f, 9f) };
			unk_0xB885EF0389689E54(vVar0[2 /*3*/], 0, &(vVar0[2 /*3*/]), 0);
			vVar0[3 /*3*/] = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) + Vector(0f, 0f, 9f) };
			unk_0xB885EF0389689E54(vVar0[3 /*3*/], 0, &(vVar0[3 /*3*/]), 0);
			if (!unk_0x8E28E832BEAC3DCE(vVar0[0 /*3*/], 3f))
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(joaat("sheriff"), vVar0[0 /*3*/], func_58(vVar0[0 /*3*/], func_59(unk_0xD803B885F5E47A62())), true, true, false);
				iLocal_72[0] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_72[1] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[0], joaat("weapon_pistol"), -1, false, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[1], joaat("weapon_pistol"), -1, false, true);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				bLocal_84 = true;
			}
			else if (!unk_0x8E28E832BEAC3DCE(vVar0[1 /*3*/], 3f))
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(joaat("sheriff"), vVar0[1 /*3*/], func_58(vVar0[1 /*3*/], func_59(unk_0xD803B885F5E47A62())), true, true, false);
				iLocal_72[0] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_72[1] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[0], joaat("weapon_pistol"), -1, false, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[1], joaat("weapon_pistol"), -1, false, true);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				bLocal_84 = true;
			}
			else if (!unk_0x8E28E832BEAC3DCE(vVar0[2 /*3*/], 3f))
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(joaat("sheriff"), vVar0[2 /*3*/], func_58(vVar0[2 /*3*/], func_59(unk_0xD803B885F5E47A62())), true, true, false);
				iLocal_72[0] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_72[1] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[0], joaat("weapon_pistol"), -1, false, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[1], joaat("weapon_pistol"), -1, false, true);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				bLocal_84 = true;
			}
			else if (!unk_0x8E28E832BEAC3DCE(vVar0[3 /*3*/], 3f))
			{
				iLocal_73 = unk_0x122AAB0B1D6F55AD(joaat("sheriff"), vVar0[3 /*3*/], func_58(vVar0[3 /*3*/], func_59(unk_0xD803B885F5E47A62())), true, true, false);
				iLocal_72[0] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				iLocal_72[1] = unk_0x852A19533F896693(iLocal_73, 6, joaat("s_m_y_ranger_01"), 0, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[0], joaat("weapon_pistol"), -1, false, true);
				unk_0x262EF6C6306BEA6C(iLocal_72[1], joaat("weapon_pistol"), -1, false, true);
				unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				bLocal_84 = true;
			}
		}
	}
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_69, false), 10f, 10f, 10f, false, false, 0) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		func_57();
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (((!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0) && unk_0x3D1053F9EB43B7AD(iLocal_64, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, true, 0)) || (unk_0x5A91F08DF773C39D(iLocal_64, vLocal_74, Global_19, true, true, 0) && func_56(1, 0, 1)))
		{
			settimera(0);
			if (func_14())
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10.5f, 2, 0);
				}
				unk_0x790015DC92C918E2();
				iLocal_53 = 5;
			}
			else
			{
				iLocal_53 = 6;
			}
		}
	}
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
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

void func_57()
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_14())
		{
			func_52();
			wait(0);
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_53 = 10;
			}
		}
		else if (unk_0x9E9FD30CF64A88A8((vVar0.x - 50f), (vVar0.y - 50f), (vVar0.z - 50f), (vVar0.x + 50f), (vVar0.y + 50f), (vVar0.z + 50f)))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				unk_0xA3BF0AA5A2608191(iLocal_64);
				if (unk_0x16102BEDC7435774(iLocal_64))
				{
					unk_0x0A94A109271BE75A(iLocal_64);
				}
				unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_64, true);
				wait(0);
			}
			func_92();
		}
	}
	else if (func_14())
	{
		if (unk_0x9E9FD30CF64A88A8((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
		{
			func_52();
			wait(0);
			if (func_73(&uLocal_114, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 3, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
				if (unk_0xE4EDC4B0E92C078B(iLocal_62))
				{
					unk_0x142CC44DB769B57E(&iLocal_62);
				}
				iLocal_53 = 10;
			}
		}
	}
	else if (unk_0x9E9FD30CF64A88A8((vVar0.x - 10f), (vVar0.y - 10f), (vVar0.z - 10f), (vVar0.x + 10f), (vVar0.y + 10f), (vVar0.z + 10f)))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			unk_0xA3BF0AA5A2608191(iLocal_64);
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				unk_0x0A94A109271BE75A(iLocal_64);
			}
			unk_0xEEB67C3D0A71A47B(iLocal_64, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
			unk_0xFADC0A217229F6B5(iLocal_64, true);
			wait(0);
		}
		func_92();
	}
}

float func_58(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_59(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

float func_60(int iParam0, vector3 vParam1, bool bParam2)
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

void func_61()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (unk_0xE3614539F8B5C807(iLocal_64))
		{
			if (!iLocal_108)
			{
				iLocal_109 = unk_0x1C0640BA9A7327B3();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
	}
	if ((iLocal_110 - iLocal_109) > 120000)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				if (func_73(&uLocal_114, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					unk_0x0A94A109271BE75A(iLocal_64);
					func_92();
				}
			}
		}
	}
}

void func_62()
{
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		if (!iLocal_111)
		{
			iLocal_112 = unk_0x1C0640BA9A7327B3();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_113 = unk_0x1C0640BA9A7327B3();
		}
	}
	else
	{
		iLocal_111 = 0;
	}
	if ((iLocal_113 - iLocal_112) > 60000)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			if (unk_0x16102BEDC7435774(iLocal_64))
			{
				if (func_73(&uLocal_114, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					unk_0x0A94A109271BE75A(iLocal_64);
					func_92();
				}
			}
		}
	}
}

int func_63()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (unk_0x16102BEDC7435774(iLocal_64))
		{
			if ((((((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_98, 50f, 50f, 50f, false, true, 0) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_99, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_100, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_101, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_102, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_103, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_104, 50f, 50f, 50f, false, true, 0)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_105, 50f, 50f, 50f, false, true, 0)) || func_60(unk_0x16F2683693E537C9(), vLocal_106, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64) && func_94())
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) && unk_0x82CCEAB29E9451DD(iLocal_64, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				settimera(0);
				if (!unk_0x16102BEDC7435774(iLocal_64))
				{
					unk_0xE25C96A9C36BE5D2(iLocal_64, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
					unk_0xBF541ED34EA81209(iLocal_64, 0);
					unk_0x7BECA8F360B1686D(iLocal_64, 1);
				}
				if (iLocal_54 == 0)
				{
					if (!func_89())
					{
						if (func_73(&uLocal_114, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_62))
							{
								iLocal_62 = func_6(vLocal_74, 1);
							}
							unk_0x0674E58A79778E99(&uLocal_78, 3);
							iLocal_80 = 1;
							iLocal_53 = 3;
						}
					}
				}
				else if (iLocal_54 == 1)
				{
					if (func_50() == 0)
					{
						func_73(&uLocal_114, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_50() == 1)
					{
						func_73(&uLocal_114, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_50() == 2)
					{
						func_73(&uLocal_114, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					unk_0xBAFED2F6486F771A(iLocal_64, 2, true);
					iLocal_53 = 3;
				}
			}
		}
	}
}

int func_65()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_64, unk_0x728870EB733D12A1(), 1))
			{
				func_52();
				return 1;
			}
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_64, unk_0x16F2683693E537C9(), 1))
		{
			func_52();
			return 1;
		}
		if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_54 == 0)
		{
			iVar0 = 0;
			if (func_68())
			{
				iVar0 = 0;
				while (iVar0 < func_67())
				{
					if (unk_0xB87D13D0C064E9D1(func_66(iVar0), unk_0x16F2683693E537C9(), 0))
					{
						if (unk_0xD09DF7101876AFB8(unk_0x940C1429253D3B1B(func_66(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_53 < 2)
		{
			if (unk_0xFA4CE147B4D9AEE0(iLocal_64, 126))
			{
				return 1;
			}
			if (iLocal_54 == 0)
			{
				if (unk_0xC844350D5D58C99A(iLocal_69))
				{
					if (((unk_0x029064EA9141FCC2(unk_0x68F4C0EC296D3901(iLocal_69, false) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x68F4C0EC296D3901(iLocal_69, false) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || unk_0x029064EA9141FCC2(unk_0x68F4C0EC296D3901(iLocal_69, false) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), unk_0x68F4C0EC296D3901(iLocal_69, false) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || unk_0x029064EA9141FCC2(unk_0x68F4C0EC296D3901(iLocal_69, false) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x68F4C0EC296D3901(iLocal_69, false) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || unk_0x029064EA9141FCC2(unk_0x68F4C0EC296D3901(iLocal_69, false) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), unk_0x68F4C0EC296D3901(iLocal_69, false) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						unk_0xF3268524E9BE6D6E(iLocal_64, unk_0x16F2683693E537C9(), 1000f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_64, true);
						return 1;
					}
				}
			}
			else if (iLocal_54 == 1)
			{
				if (unk_0x029064EA9141FCC2(unk_0x68F4C0EC296D3901(iLocal_64, false) - Vector(70f, 70f, 70f), unk_0x68F4C0EC296D3901(iLocal_64, false) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_64, true), 20f, 1))
			{
				return 1;
			}
			if ((unk_0xBBE430A566D01EF3(unk_0x68F4C0EC296D3901(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x68F4C0EC296D3901(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || unk_0xBBE430A566D01EF3(unk_0x68F4C0EC296D3901(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x68F4C0EC296D3901(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || unk_0xBBE430A566D01EF3(unk_0x68F4C0EC296D3901(iLocal_64, true) - Vector(15f, 15f, 15f), unk_0x68F4C0EC296D3901(iLocal_64, true) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (unk_0x8ADFEA7B4409B2F8(unk_0x68F4C0EC296D3901(iLocal_64, true), 3f))
			{
				return 1;
			}
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
			{
				return 1;
			}
			if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0) && unk_0x6AB6A474D29FA7D8(iLocal_64, unk_0x16F2683693E537C9())) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
			{
				if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_64) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_64))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_52();
		return 1;
	}
	return 0;
}

var func_66(int iParam0)
{
	return Global_53763.f_25[iParam0];
}

int func_67()
{
	return Global_53763.f_24;
}

bool func_68()
{
	return Global_53763.f_24 > 0;
}

void func_69()
{
	if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			if (!func_89())
			{
				if (func_9())
				{
					func_73(&uLocal_114, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_73(&uLocal_114, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_89))
				{
					unk_0x321E019A46034F39(iLocal_89, false);
				}
				unk_0xA3BF0AA5A2608191(iLocal_64);
				unk_0xDD353D0E9C789D0E(&iLocal_66);
				unk_0x9BE7E7B6B488CC55(0, unk_0x16F2683693E537C9(), 500, 1);
				unk_0x161356BF7864C47B(0, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 1f, 0, 1f, 0.5f, 1, 0, -957453492);
				unk_0x5B1D360B9C6F0A09(0, unk_0x728870EB733D12A1(), -1, -1, 2f, 9, 0);
				unk_0x75ABDC5F81978924(iLocal_66);
				unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
				unk_0xF82EA857DA10E0CD(&iLocal_66);
				settimera(0);
				bLocal_94 = true;
				iLocal_53 = 11;
			}
		}
	}
}

float func_70(int iParam0, int iParam1)
{
	return func_5(iParam0, iParam1, 1);
}

int func_71()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	if ((((unk_0x7B5606C651AB51B5(iParam0, 0, 3000) || unk_0x4E861BC5B1EDA7BD(iParam0)) || unk_0xA4F4A1E4DDB4728B(unk_0x68F4C0EC296D3901(iParam0, false), 5f) > 0) || unk_0x54648B774DB42A3A(iParam0, joaat("weapon_molotov"), 0)) || unk_0xBBE430A566D01EF3(unk_0x68F4C0EC296D3901(iParam0, false) - Vector(5f, 5f, 5f), unk_0x68F4C0EC296D3901(iParam0, false) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					func_87();
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
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_85();
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
				func_84();
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
				if (func_83())
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
			if (func_82())
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
			func_81();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_80();
		func_75();
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
		func_87();
	}
	return 0;
}

void func_75()
{
	if (!func_76())
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

int func_76()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_79())
	{
		return 0;
	}
	if (func_77(unk_0xD803B885F5E47A62()))
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

bool func_77(int iParam0)
{
	return func_78(iParam0, 20);
}

bool func_78(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_79()
{
	return -1;
}

void func_80()
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

void func_81()
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

int func_82()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_83()
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

void func_84()
{
	if (func_36(14))
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
		Global_19486 = func_50();
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

void func_85()
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

bool func_86(int iParam0, int iParam1)
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

void func_87()
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_89()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (!unk_0x437347B10A200C4B(iLocal_69, 0))
	{
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_69, 0) && !unk_0xBBA8A868118C90ED(iLocal_69, -1, 0))
		{
			unk_0x37C67519A5493B8D(iLocal_69, 60000f);
			unk_0xAE410B56B7A98684(iLocal_69);
		}
	}
}

void func_91()
{
	switch (iLocal_92)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 20f, 20f, 8f, 0, 1, 0))
				{
					if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 2.5f || !(unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_64, 15f, 15f, 8f, 0, 1, 0)))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_66);
						unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 30000, 2050, 2);
						unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, 2f, 1f, 1073741824, 0);
						unk_0x75ABDC5F81978924(iLocal_66);
						unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
						unk_0xF82EA857DA10E0CD(&iLocal_66);
						if (func_73(&uLocal_114, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_83 = true;
							iLocal_92++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_93(&uLocal_91);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				if (func_94())
				{
					iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					if (unk_0x9C66D99E63E8E24C(iLocal_67) < 9f)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
						{
							if (unk_0x12DE711B1C681E9E(iLocal_64, iLocal_67, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_92++;
							}
						}
					}
				}
				else if (!bLocal_94)
				{
					fLocal_93 = func_5(iLocal_64, unk_0x16F2683693E537C9(), 1);
					unk_0xDD353D0E9C789D0E(&iLocal_66);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 7000, 2048, 2);
					unk_0xE185F110925D87DB(0, unk_0x16F2683693E537C9(), -1, (fLocal_93 - 3f), 1f, 1073741824, 0);
					unk_0x75ABDC5F81978924(iLocal_66);
					unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
					unk_0xF82EA857DA10E0CD(&iLocal_66);
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_114, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_114, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_94 = true;
						bLocal_83 = true;
					}
				}
			}
			break;
		
		case 2:
			func_93(&uLocal_91);
			if (!iLocal_96)
			{
				if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 2.5f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
					{
						unk_0xA3BF0AA5A2608191(iLocal_64);
						unk_0x7B5CD34C8882F120(iLocal_64, iLocal_67, -1, 0, 1f);
						iLocal_96 = 1;
					}
				}
				if (!func_89())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
					{
						unk_0xA3BF0AA5A2608191(iLocal_64);
						unk_0x7B5CD34C8882F120(iLocal_64, iLocal_67, -1, 0, 1f);
						iLocal_96 = 1;
					}
				}
			}
			if (func_94())
			{
				iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x9C66D99E63E8E24C(iLocal_67) < 2.5f)
				{
					if (unk_0x5A91F08DF773C39D(iLocal_67, unk_0x68F4C0EC296D3901(iLocal_64, true), 20f, 20f, 5f, false, true, 0))
					{
						if (iLocal_54 == 0)
						{
							if (!func_89())
							{
								if (func_50() == 0)
								{
									if (func_9())
									{
										func_73(&uLocal_114, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_114, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 1)
								{
									if (func_9())
									{
										func_73(&uLocal_114, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_114, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 2)
								{
									func_73(&uLocal_114, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_92++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_94())
			{
				iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x9C66D99E63E8E24C(iLocal_67) < 0.5f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
					{
						unk_0xA3BF0AA5A2608191(iLocal_64);
						if (!unk_0x16102BEDC7435774(iLocal_64))
						{
							unk_0xE25C96A9C36BE5D2(iLocal_64, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62()));
							unk_0xBF541ED34EA81209(iLocal_64, 0);
							unk_0x7BECA8F360B1686D(iLocal_64, 1);
						}
						iLocal_92++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_54 == 0)
			{
				if (!func_89())
				{
					if (func_73(&uLocal_114, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_92++;
					}
				}
			}
			else
			{
				iLocal_92++;
			}
			break;
		
		case 5:
			if (func_94())
			{
				if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
					{
						if (unk_0x82CCEAB29E9451DD(iLocal_64, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_89))
							{
								unk_0x142CC44DB769B57E(&iLocal_89);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_92()
{
	func_176();
}

void func_93(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				if (!unk_0x7069CC4DE1EA3FAA(iLocal_64, unk_0x16F2683693E537C9(), 90f))
				{
					unk_0xF96A174EE26D7588(iLocal_64, unk_0x16F2683693E537C9(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				if (unk_0x7069CC4DE1EA3FAA(iLocal_64, unk_0x16F2683693E537C9(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
			{
				if (!unk_0x7069CC4DE1EA3FAA(iLocal_64, unk_0x16F2683693E537C9(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_94()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
		{
			if ((((((!unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0x56E1CD81AE700E98(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_67 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if ((unk_0xDF1306B443CD3D15(iLocal_67, 0) && !unk_0xEB6A8945D1AC98A1(iLocal_64)) && !bLocal_83)
		{
			fLocal_93 = func_5(iLocal_64, unk_0x16F2683693E537C9(), 1);
			if (fLocal_93 > 5f)
			{
				fLocal_93 = (fLocal_93 - 2.5f);
			}
			else
			{
				fLocal_93 = (fLocal_93 - 1f);
			}
			unk_0xA3BF0AA5A2608191(iLocal_64);
			unk_0xDD353D0E9C789D0E(&iLocal_66);
			if (iLocal_54 == 0)
			{
				unk_0x0C8C0C840C2D1AD2(0, iLocal_67, 10000, 2048, 2);
				unk_0xC6EB89C59F2AF6B8(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x161356BF7864C47B(0, unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 1f, 0, fLocal_93, 1f, 1, 0, -957453492);
			}
			else if (iLocal_54 == 1)
			{
				unk_0x0C8C0C840C2D1AD2(0, iLocal_67, 10000, 2052, 2);
				unk_0xC6EB89C59F2AF6B8(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xA8CC11FF8D2962D4(0, unk_0x16F2683693E537C9(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			unk_0x75ABDC5F81978924(iLocal_66);
			unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
			unk_0xF82EA857DA10E0CD(&iLocal_66);
			if (iLocal_54 == 0)
			{
				func_73(&uLocal_114, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				settimera(0);
				bLocal_83 = true;
			}
			else if (iLocal_54 == 1)
			{
				if (func_73(&uLocal_114, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					settimera(0);
					bLocal_83 = true;
				}
			}
		}
	}
}

void func_96(bool bParam0)
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

int func_97(int iParam0)
{
	if (func_101())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_29(Global_111627))
		{
			func_98(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_29(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

char* func_100(int iParam0)
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

int func_101()
{
	switch (func_102(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_106(0))
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
		if (!func_104(iParam2))
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
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)
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

bool func_104(int iParam0)
{
	return func_105(iParam0, Global_41431);
}

int func_105(int iParam0, int iParam1)
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

int func_106(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		unk_0x142CC44DB769B57E(&iLocal_63);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
	{
		iLocal_89 = func_11(iLocal_64, 0, 145);
		unk_0xF2D30B8ACAF12A39(iLocal_89, false);
	}
}

void func_108()
{
	int iVar0;
	int iVar1[2];
	
	func_110(39, 1);
	func_110(40, 1);
	func_110(41, 1);
	func_110(42, 1);
	func_110(43, 1);
	func_110(44, 1);
	unk_0x15EA7F4313456B1D(3, false);
	unk_0x15EA7F4313456B1D(5, false);
	unk_0x15EA7F4313456B1D(11, false);
	iLocal_64 = unk_0x36F2404464202779(26, iLocal_76, vLocal_68, fLocal_75, 1, true);
	unk_0x11AD11297DC58CC7(iLocal_64, true);
	unk_0x4E885A246A9D983A(iLocal_64, 134, true);
	unk_0x4E885A246A9D983A(iLocal_64, 137, true);
	unk_0xF63400DBE3303D26("PedPrisoner", &iLocal_65);
	unk_0x6DF7BF67E86AAE86(iLocal_64, iLocal_65);
	unk_0x0E2400AB9174FA81(5, -1533126372, iLocal_65);
	unk_0x0E2400AB9174FA81(5, iLocal_65, -1533126372);
	unk_0xC6EB89C59F2AF6B8(iLocal_64, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x6D80F1AEBA734886(iLocal_64, 0);
	unk_0xAFF39FB306F8E232(iLocal_64, 8, false);
	unk_0xBAFED2F6486F771A(iLocal_64, 128, true);
	unk_0xBAFED2F6486F771A(iLocal_64, 2, true);
	unk_0xBAFED2F6486F771A(iLocal_64, 1, false);
	unk_0x5D96D8530B3D0904(&uLocal_78, 3);
	unk_0x5D96D8530B3D0904(&uLocal_78, 5);
	unk_0x5D96D8530B3D0904(&uLocal_78, 0);
	if (iLocal_54 == 0)
	{
		unk_0x4F39CC3882DD074E(iLocal_64, "REPRI1Lost");
		func_109(&uLocal_114, 3, iLocal_64, "REPRI1Lost", 0, 1);
		unk_0x745CE398A4B0A3C6(vLocal_68, 50f, 0);
		unk_0x536F1BE96C726C4B(vLocal_68, 10f, 0, 0, 0, false);
		unk_0x7D6CA5F52B3748BF(vLocal_68 - Vector(50f, 50f, 50f), vLocal_68 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		unk_0x7D6CA5F52B3748BF(vLocal_74 - Vector(10f, 10f, 10f), vLocal_74 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		unk_0xE342F209E49C5314(vLocal_68 - Vector(10f, 10f, 10f), vLocal_68 + Vector(10f, 10f, 10f), false, 1);
		unk_0x0E2400AB9174FA81(1, iLocal_65, -1865950624);
		unk_0x0E2400AB9174FA81(1, -1865950624, iLocal_65);
		unk_0xAFF39FB306F8E232(iLocal_64, 17, true);
		iLocal_69 = unk_0x122AAB0B1D6F55AD(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, true, true, false);
		unk_0x5DAB50E08C3C504A(iLocal_69, 0f);
		unk_0x611DFA9294B339CA(iLocal_69, 4, 0, false);
		unk_0x1A6519AE5766DBD8(iLocal_69, 0, 0, 1148846080);
		unk_0x67E3D6EA8D96FD85(iLocal_69, 0);
		unk_0xECC26BBDC0AD318B(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		iVar0 = unk_0x852A19533F896693(iLocal_69, 26, joaat("s_m_y_ranger_01"), -1, 1, true);
		unk_0x4E885A246A9D983A(iVar0, 326, true);
		unk_0xD458AC1C1D29C3B4(iVar0, 99, 0);
		unk_0xD69ADA1AA251FFD6(iVar0, 1);
		iVar1[0] = unk_0x122AAB0B1D6F55AD(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, true, true, false);
		iVar1[1] = unk_0x122AAB0B1D6F55AD(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, true, true, false);
		unk_0xB9FD7450C0DAB575(iVar1[0], 1084227584);
		unk_0xB9FD7450C0DAB575(iVar1[1], 1084227584);
	}
	else if (iLocal_54 == 1)
	{
		unk_0xB5376EA942202450(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, false, 1);
		unk_0x4F39CC3882DD074E(iLocal_64, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_109(&uLocal_114, 3, iLocal_64, "REPRI2Prisoner", 0, 1);
		unk_0x262EF6C6306BEA6C(iLocal_64, joaat("weapon_pistol"), -1, false, true);
	}
	if (func_50() == 0)
	{
		func_109(&uLocal_114, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (func_50() == 1)
	{
		func_109(&uLocal_114, 1, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_50() == 2)
	{
		func_109(&uLocal_114, 2, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	iLocal_53 = 1;
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_110(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_114(iParam0, 2, 1))
		{
			func_113(iParam0, 2, 1);
		}
	}
	else if (func_114(iParam0, 2, 1))
	{
		func_111(iParam0, 2, 1);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			iVar0 = func_49(func_112(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_47(func_112(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_112(int iParam0)
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

void func_113(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			iVar0 = func_49(func_112(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_47(func_112(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_114(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_49(func_112(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_115()
{
	unk_0x523BCC9DC80CD82F(iLocal_76);
	unk_0x3F423BF5B8125A50("random@prisoner_lift");
	if (iLocal_54 == 0)
	{
		unk_0x523BCC9DC80CD82F(joaat("s_m_y_ranger_01"));
		unk_0x523BCC9DC80CD82F(joaat("sheriff"));
		unk_0x523BCC9DC80CD82F(joaat("ratloader"));
		unk_0x523BCC9DC80CD82F(joaat("bfinjection"));
	}
	if (unk_0xB87F6CF6E5628C67(iLocal_76) && unk_0xB4AE0788C1587752("random@prisoner_lift"))
	{
		if (iLocal_54 == 0)
		{
			if (((unk_0xB87F6CF6E5628C67(joaat("s_m_y_ranger_01")) && unk_0xB87F6CF6E5628C67(joaat("sheriff"))) && unk_0xB87F6CF6E5628C67(joaat("ratloader"))) && unk_0xB87F6CF6E5628C67(joaat("bfinjection")))
			{
				bLocal_55 = true;
			}
		}
		else
		{
			bLocal_55 = true;
		}
	}
	else
	{
		unk_0x523BCC9DC80CD82F(iLocal_76);
		unk_0x3F423BF5B8125A50("random@prisoner_lift");
		if (iLocal_54 == 0)
		{
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_ranger_01"));
			unk_0x523BCC9DC80CD82F(joaat("sheriff"));
			unk_0x523BCC9DC80CD82F(joaat("ratloader"));
			unk_0x523BCC9DC80CD82F(joaat("bfinjection"));
		}
	}
}

void func_116()
{
	if (iLocal_58 == 1)
	{
		iLocal_76 = joaat("g_m_y_lost_02");
		vLocal_68 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_75 = 142.0201f;
		vLocal_77 = { 984.3975f, -106.9935f, 73.3531f };
		vLocal_74 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_58 == 2)
	{
		iLocal_76 = joaat("s_m_y_prisoner_01");
		vLocal_68 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_75 = 301.2458f;
		vLocal_77 = { 938.5384f, -2167.42f, 29.5153f };
		vLocal_74 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_56 = 1;
}

int func_117()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_50) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_118(float fParam0, bool bParam1)
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
		if (func_37(func_50()))
		{
			iVar5 = func_34();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_119(iVar1, &Var0);
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

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(uParam1, "Abigail1", func_122(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 1:
			func_120(uParam1, "Abigail2", func_122(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 2:
			func_120(uParam1, "Barry1", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 3:
			func_120(uParam1, "Barry2", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 4:
			func_120(uParam1, "Barry3", func_122(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 5:
			func_120(uParam1, "Barry3A", func_122(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 6:
			func_120(uParam1, "Barry3C", func_122(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 7:
			func_120(uParam1, "Barry4", func_122(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_121(iParam0), 0, 0);
			break;
		
		case 8:
			func_120(uParam1, "Dreyfuss1", func_122(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 9:
			func_120(uParam1, "Epsilon1", func_122(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 10:
			func_120(uParam1, "Epsilon2", func_122(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 11:
			func_120(uParam1, "Epsilon3", func_122(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 12:
			func_120(uParam1, "Epsilon4", func_122(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 13:
			func_120(uParam1, "Epsilon5", func_122(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 14:
			func_120(uParam1, "Epsilon6", func_122(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 15:
			func_120(uParam1, "Epsilon7", func_122(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 16:
			func_120(uParam1, "Epsilon8", func_122(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 17:
			func_120(uParam1, "Extreme1", func_122(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 18:
			func_120(uParam1, "Extreme2", func_122(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 19:
			func_120(uParam1, "Extreme3", func_122(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 20:
			func_120(uParam1, "Extreme4", func_122(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 21:
			func_120(uParam1, "Fanatic1", func_122(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 22:
			func_120(uParam1, "Fanatic2", func_122(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 23:
			func_120(uParam1, "Fanatic3", func_122(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_121(iParam0), 0, 1);
			break;
		
		case 24:
			func_120(uParam1, "Hao1", func_122(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_121(iParam0), 0, 1);
			break;
		
		case 25:
			func_120(uParam1, "Hunting1", func_122(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 26:
			func_120(uParam1, "Hunting2", func_122(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 27:
			func_120(uParam1, "Josh1", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 28:
			func_120(uParam1, "Josh2", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 29:
			func_120(uParam1, "Josh3", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 30:
			func_120(uParam1, "Josh4", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 31:
			func_120(uParam1, "Maude1", func_122(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 32:
			func_120(uParam1, "Minute1", func_122(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 33:
			func_120(uParam1, "Minute2", func_122(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 34:
			func_120(uParam1, "Minute3", func_122(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 35:
			func_120(uParam1, "MrsPhilips1", func_122(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 36:
			func_120(uParam1, "MrsPhilips2", func_122(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 37:
			func_120(uParam1, "Nigel1", func_122(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 38:
			func_120(uParam1, "Nigel1A", func_122(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 39:
			func_120(uParam1, "Nigel1B", func_122(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 40:
			func_120(uParam1, "Nigel1C", func_122(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 41:
			func_120(uParam1, "Nigel1D", func_122(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 42:
			func_120(uParam1, "Nigel2", func_122(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 43:
			func_120(uParam1, "Nigel3", func_122(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 44:
			func_120(uParam1, "Omega1", func_122(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 45:
			func_120(uParam1, "Omega2", func_122(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 46:
			func_120(uParam1, "Paparazzo1", func_122(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 47:
			func_120(uParam1, "Paparazzo2", func_122(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 48:
			func_120(uParam1, "Paparazzo3", func_122(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 49:
			func_120(uParam1, "Paparazzo3A", func_122(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 50:
			func_120(uParam1, "Paparazzo3B", func_122(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 51:
			func_120(uParam1, "Paparazzo4", func_122(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 52:
			func_120(uParam1, "Rampage1", func_122(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 54:
			func_120(uParam1, "Rampage3", func_122(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 55:
			func_120(uParam1, "Rampage4", func_122(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 56:
			func_120(uParam1, "Rampage5", func_122(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 53:
			func_120(uParam1, "Rampage2", func_122(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 57:
			func_120(uParam1, "TheLastOne", func_122(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 58:
			func_120(uParam1, "Tonya1", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 59:
			func_120(uParam1, "Tonya2", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 60:
			func_120(uParam1, "Tonya3", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 61:
			func_120(uParam1, "Tonya4", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 62:
			func_120(uParam1, "Tonya5", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_120(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_121(int iParam0)
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

struct<2> func_122(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_123(iParam0) };
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

struct<2> func_123(int iParam0)
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

int func_124()
{
	if (func_127() && !func_128())
	{
		return 1;
	}
	if (func_126() && func_125())
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_111356 > 0;
}

int func_126()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_128()
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

int func_129()
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_124())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	if ((Global_111627 == func_44() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_133(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_132();
}

void func_132()
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

void func_133(int iParam0)
{
	Global_111627 = iParam0;
}

int func_134(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_44();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_175())
		{
			return 0;
		}
	}
	vLocal_50 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_128())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_118(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_50.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_173(iParam1))
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_172(func_50()) == 4 || func_172(func_50()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_50()))
		{
			if (!func_171(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_170(Global_111638.f_24990.f_43[iParam1]))
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
		if (func_169())
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
		if (!func_160(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_159(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_173(30) && !func_159(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_50()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_158(iVar4))
				{
					if (func_136(iVar2))
					{
						if (!func_135(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar3) < (210f * 210f))
							{
								if (func_50() != iVar2)
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

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_137(iVar0);
}

int func_137(int iParam0)
{
	return func_138(iParam0, 1);
}

int func_138(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_158(iParam0))
	{
		return 0;
	}
	func_139(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_140(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_150(iParam0, iParam1))
	{
		iVar0 = func_149(iParam1);
		iVar1 = func_147(iParam0);
		iVar2 = (func_147(iParam0) - func_147(iParam1));
		iVar3 = (func_149(iParam0) - func_149(iParam1));
		iVar4 = (func_146(iParam0) - func_146(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_149(iParam0);
		iVar1 = func_147(iParam1);
		iVar2 = (func_147(iParam1) - func_147(iParam0));
		iVar3 = (func_149(iParam1) - func_149(iParam0));
		iVar4 = (func_146(iParam1) - func_146(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
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
		iVar4 = (iVar4 + func_142(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_141(to_float(iVar0 + 1), 0f, 12f));
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

float func_141(float fParam0, float fParam1, float fParam2)
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

int func_142(int iParam0, int iParam1)
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

int func_143(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_144(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_145(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_147(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_148(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_148(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_149(int iParam0)
{
	return iParam0 & 15;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
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
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	var uVar0;
	
	func_157(&uVar0, unk_0x4460E481B9E33ADA());
	func_156(&uVar0, unk_0x8D199E381D262EEF());
	func_155(&uVar0, unk_0xD8A54335F18763BA());
	func_154(&uVar0, unk_0x972A296334C9D57B());
	func_153(&uVar0, unk_0x118229AD063C3C1D());
	func_152(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_147(*uParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_158(int iParam0)
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
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_147(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_149(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_146(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_50();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_168()) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_86(8, -1)) || func_163()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_86(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_168()) || Global_30770) || func_167()) || func_86(8, -1)) || func_165()) || func_164()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_168()) || func_165()) || Global_110685) || Global_30770) || func_167()) || Global_42596) || func_86(8, -1)) || func_164()) || func_162()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
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

var func_161()
{
	return Global_98783.f_1;
}

int func_162()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_163()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
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

bool func_165()
{
	return Global_98796.f_346 > 0;
}

bool func_166()
{
	return Global_98796.f_345 > 0;
}

var func_167()
{
	return Global_1312877;
}

int func_168()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_169()
{
	func_84();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_150(func_151(), iParam0);
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_50();
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

int func_172(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_173(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_175())
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

int func_174()
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

int func_175()
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

void func_176()
{
	if (iLocal_107)
	{
		func_190(0);
		func_188();
		func_96(0);
		unk_0x51B096AAC60548C1(1f);
		unk_0xE342F209E49C5314(vLocal_68 - Vector(10f, 10f, 10f), vLocal_68 + Vector(10f, 10f, 10f), true, 1);
		unk_0x9EBC57EECAF8C953(unk_0xD803B885F5E47A62());
		unk_0x842F1AEB2FCC00B7(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_64))
		{
			unk_0x11AD11297DC58CC7(iLocal_64, false);
			if (iLocal_54 == 0)
			{
				unk_0x4E885A246A9D983A(iLocal_64, 317, true);
				if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_66);
					unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_66);
					unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
					unk_0xF82EA857DA10E0CD(&iLocal_66);
					unk_0xFADC0A217229F6B5(iLocal_64, true);
				}
			}
			else if (iLocal_54 == 1)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_66);
					unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_66);
					unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
					unk_0xF82EA857DA10E0CD(&iLocal_66);
					unk_0xFADC0A217229F6B5(iLocal_64, true);
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_67, 0))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_66);
					unk_0x5B1D360B9C6F0A09(0, iLocal_67, -1, -1, 2f, 9, 0);
					unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_66);
					unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
					unk_0xF82EA857DA10E0CD(&iLocal_66);
					unk_0xFADC0A217229F6B5(iLocal_64, true);
				}
				else
				{
					unk_0xDD353D0E9C789D0E(&iLocal_66);
					unk_0xEEB67C3D0A71A47B(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 300f, -1, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_66);
					unk_0x78ADC381772E3D54(iLocal_64, iLocal_66);
					unk_0xF82EA857DA10E0CD(&iLocal_66);
					unk_0xFADC0A217229F6B5(iLocal_64, true);
				}
			}
		}
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x15EA7F4313456B1D(11, true);
		unk_0xB547E3FFEB27073E();
	}
	func_177(-1);
	unk_0x10FAF14A60A0DBE1();
}

void func_177(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_130())
	{
		func_181(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_111627, 1), 64);
		if (func_43(Global_111627) > 0)
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
	func_178(&Global_30827);
	Global_111628 = 0;
	func_133(-1);
}

void func_178(var uParam0)
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

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_151();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_145(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_144(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_146(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_149(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_147(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_147(*uParam0);
	iVar1 = func_149(*uParam0);
	iVar2 = func_146(*uParam0);
	iVar3 = func_145(*uParam0);
	iVar4 = func_144(*uParam0);
	iVar5 = func_143(*uParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_156(uParam0, iParam2);
	func_155(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

int func_187(int iParam0)
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

void func_188()
{
	Global_19671 = 0;
	func_189();
}

void func_189()
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

void func_190(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_110(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_191()
{
	float fVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_59, true);
		iLocal_58 = 1;
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_60, true) < fVar0)
		{
			fVar0 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_60, true);
			iLocal_58 = 2;
		}
		if (iLocal_58 == 1)
		{
			iLocal_61 = 1;
			iLocal_54 = 0;
			return vLocal_59;
		}
		if (iLocal_58 == 2)
		{
			iLocal_61 = 2;
			iLocal_54 = 1;
			return vLocal_60;
		}
	}
	return 0f, 0f, 0f;
}

