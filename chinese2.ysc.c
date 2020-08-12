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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	vector3 vLocal_112 = { 0f, 0f, 0f };
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	vector3 vLocal_122 = { 0f, 0f, 0f };
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_130[21] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	vector3 vLocal_142[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	vector3 vLocal_172 = { 0f, 0f, 0f };
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	var uLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
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
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	vector3 vLocal_384[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	vector3 vLocal_391[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_392 = 0;
	vector3 vLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	vector3 vLocal_397 = { 0f, 0f, 0f };
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = unk_0xAD1355DD1E5D2D9B();
	iLocal_50 = unk_0x817B3657F78A517A();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_75 = true;
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_103 = 1;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = -1;
	iLocal_379 = -1;
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(3))
	{
		func_444();
		func_443(2);
	}
	fLocal_110 = 160f;
	while (true)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_135();
			func_133();
			if (iLocal_149 >= 7)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			unk_0x1A6DFFFEEC27BF4F("m_Chinese2", 0);
		}
		iLocal_574 = 0;
		wait(0);
	}
}

void func_1()
{
	if (iLocal_402)
	{
		if (unk_0xBD307E66C0669BFC(iLocal_401))
		{
			unk_0x0007C2367F4F23F3(iLocal_401);
			iLocal_402 = 0;
		}
	}
}

int func_2()
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (unk_0x13896FDECC859926(sLocal_406))
			{
				if (unk_0xC92DB9682A650680(sLocal_406))
				{
					iLocal_403 = 0;
					iLocal_404 = 0;
					return 1;
				}
			}
		}
		else if (unk_0xC92DB9682A650680(sLocal_406))
		{
			iLocal_403 = 0;
			return 1;
		}
	}
	else if (iLocal_405)
	{
		if (unk_0x13896FDECC859926(sLocal_407))
		{
			iLocal_405 = 0;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (unk_0x22A8E52414415B76())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_75(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_144 = unk_0x728870EB733D12A1();
							if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(iLocal_144), 3);
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							func_72();
							func_70();
							break;
						
						case 0:
							if (func_73(unk_0x16F2683693E537C9(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_69(39))
							{
								if (func_73(unk_0x16F2683693E537C9(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_66("PHN2", 1, unk_0x16F2683693E537C9(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_65())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_153[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0;
							Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 3000;
							break;
						
						case 1:
							if (!func_65())
							{
								if (!func_34())
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										if (unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 13)
											{
												if (func_35("DRI1", 2, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(4000, 10000));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (!unk_0xE934758D273C899A(iVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -20:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_01"));
								unk_0x523BCC9DC80CD82F(-1853453107);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_01")) && unk_0xB87F6CF6E5628C67(-1853453107))
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_02")))
							{
								unk_0x523BCC9DC80CD82F(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0xB87F6CF6E5628C67(joaat("burrito")))
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_y_methhead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0xB87F6CF6E5628C67(joaat("a_m_y_methhead_01")))
							{
								unk_0x523BCC9DC80CD82F(joaat("prop_ld_can_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_fertilizer"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_beer_bot_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_phone_ing"));
								unk_0x523BCC9DC80CD82F(joaat("dubsta"));
								unk_0x3F423BF5B8125A50("misschinese2_bank5");
								unk_0x3F423BF5B8125A50("misschinese2_bank1");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_variations@b");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@left");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@right");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@backward");
								unk_0x3F423BF5B8125A50("misschinese2_barrelRoll");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_e");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_f");
								unk_0x4942FBD1EF896E39("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0xB87F6CF6E5628C67(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_01"));
								unk_0x523BCC9DC80CD82F(joaat("a_m_m_hillbilly_02"));
								unk_0x523BCC9DC80CD82F(joaat("a_m_y_methhead_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_ld_can_01"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_fertilizer"));
								unk_0x523BCC9DC80CD82F(joaat("burrito"));
								unk_0x523BCC9DC80CD82F(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 3)
								{
									unk_0x523BCC9DC80CD82F(joaat("prop_phone_ing"));
									unk_0x523BCC9DC80CD82F(joaat("dubsta"));
								}
								unk_0x3F423BF5B8125A50("misschinese2_bank5");
								unk_0x3F423BF5B8125A50("misschinese2_bank1");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_variations@b");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@left");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@right");
								unk_0x3F423BF5B8125A50("reaction@male_stand@big_intro@backward");
								unk_0x3F423BF5B8125A50("misschinese2_barrelRoll");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_e");
								unk_0x4942FBD1EF896E39("move_m@gangster@var_f");
								unk_0x4942FBD1EF896E39("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_01")) && unk_0xB87F6CF6E5628C67(joaat("a_m_m_hillbilly_02"))) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_methhead_01"))) && unk_0xB87F6CF6E5628C67(joaat("burrito"))) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_fertilizer"))) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_beer_bot_01"))) && unk_0xB87F6CF6E5628C67(joaat("prop_ld_can_01"))) && unk_0xB4AE0788C1587752("misschinese2_bank5")) && unk_0xB4AE0788C1587752("misschinese2_bank1")) && unk_0xB4AE0788C1587752("misschinese2_barrelRoll")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_variations@b")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@left")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@right")) && unk_0xB4AE0788C1587752("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 3 && unk_0xB87F6CF6E5628C67(joaat("prop_phone_ing"))) || iLocal_149 > 3)) && ((iLocal_149 <= 3 && unk_0xB87F6CF6E5628C67(joaat("dubsta"))) || iLocal_149 > 3))
							{
								Local_153[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_01"));
								unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
								unk_0x71199B01895C6202(joaat("a_m_y_methhead_01"));
								unk_0x71199B01895C6202(joaat("burrito"));
								unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
								unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
								unk_0x71199B01895C6202(joaat("prop_ld_can_01"));
								unk_0x8D17794CE3273D70("misschinese2_bank5");
								unk_0x8D17794CE3273D70("misschinese2_bank1");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
								unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
								unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
								unk_0xDD465543E2028AEA("move_m@gangster@var_e");
								unk_0xDD465543E2028AEA("move_m@gangster@var_f");
								unk_0xDD465543E2028AEA("move_m@gangster@generic");
								unk_0x71199B01895C6202(joaat("prop_phone_ing"));
								unk_0x71199B01895C6202(joaat("dubsta"));
								unk_0xF858EFDE1871B5F2(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_179 != 0)
								{
									unk_0x25BB71BA267FE042(iLocal_179);
									iLocal_179 = 0;
								}
								Local_153[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_149 >= 3 && !func_30(22))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_179 != 0)
							{
								unk_0x25BB71BA267FE042(iLocal_179);
							}
							iLocal_179 = 0;
							break;
						
						case 0:
							iLocal_179 = unk_0xFBD08BECC9B87937(2440.492f, 4969.948f, 52.5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x31609A585163CBAC(iLocal_179))
							{
								iLocal_179 = unk_0xFBD08BECC9B87937(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								unk_0x0007C2367F4F23F3(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_153[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
							{
								if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
										{
											if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 1785177548) == 7)
											{
												unk_0x8D17794CE3273D70("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
									{
										if (unk_0xD1960163A3042274(Local_113[iVar2 /*33*/], 1785177548) == 7)
										{
											unk_0x8D17794CE3273D70("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0x8D17794CE3273D70("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0xB547E3FFEB27073E();
							break;
						
						case 0:
							unk_0x7D6CA5F52B3748BF(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 2473.061f, 4981.482f, 24.64584f, true) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0x6A36BC55C7F6D023(0f);
							unk_0xD60411959D5D930B(0f);
							unk_0x1386EF28F7C0195C(0f, 0f);
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 2473.061f, 4981.482f, 24.64584f, true) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0x15EA7F4313456B1D(3, 1);
							unk_0x15EA7F4313456B1D(5, 1);
							unk_0x15EA7F4313456B1D(1, 1);
							unk_0x15EA7F4313456B1D(7, 1);
							break;
						
						case 0:
							if (func_73(unk_0x16F2683693E537C9(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								unk_0x15EA7F4313456B1D(3, 0);
								unk_0x15EA7F4313456B1D(5, 0);
								unk_0x15EA7F4313456B1D(1, 0);
								unk_0x15EA7F4313456B1D(7, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_73(unk_0x16F2683693E537C9(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								unk_0x15EA7F4313456B1D(3, 1);
								unk_0x15EA7F4313456B1D(5, 1);
								unk_0x15EA7F4313456B1D(1, 1);
								unk_0x15EA7F4313456B1D(7, 1);
								Local_153[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0x16F2683693E537C9(), 149);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
							{
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2466.385f, 4953.096f, 44.1228f, 1, 0, 0, 1);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 221f);
								unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0x7B1292B738DF9FAF();
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (unk_0xB39672D8C1F6BB48(uLocal_173))
							{
								unk_0xCADC8175C61F28E5(uLocal_173, 2);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xD92EF3526CDA283F(uLocal_173) == 3)
							{
								unk_0xCADC8175C61F28E5(uLocal_173, 4);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_174 == 1)
							{
								if (unk_0xD92EF3526CDA283F(uLocal_173) == 5)
								{
									unk_0xCADC8175C61F28E5(uLocal_173, 6);
									unk_0x8BC9595FD2792B5D("CHI_2_RAYFIRE");
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
									unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_153[iVar0 /*6*/].f_2 != -1)
					{
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0) || !unk_0x762119754C50557A(uLocal_176))
						{
							iLocal_180 = unk_0x4B72871A3BE7B474(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 20f, unk_0x6B7EC7B5B6B57364(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_180 != 0)
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_178))
								{
									unk_0x142CC44DB769B57E(&iLocal_178);
								}
								iLocal_178 = func_13(iLocal_180);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (unk_0xE4EDC4B0E92C078B(iLocal_178))
							{
								unk_0x142CC44DB769B57E(&iLocal_178);
							}
							func_10(157, 0);
							if (iLocal_167 == 0)
							{
								iLocal_167 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_167 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_153[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0) && unk_0x1C0640BA9A7327B3() > Local_153[iVar0 /*6*/].f_5)
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_178))
						{
							unk_0x142CC44DB769B57E(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_65())
								{
									func_7("FRMSHP", 7500, 1);
									Local_153[iVar0 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 2000;
									iLocal_178 = func_5(2450f, 4954f, 45f, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0))
					{
						iLocal_380 = func_18(4);
						if (iLocal_380 != -1)
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]) && unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_20))
						{
							if (unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_380 /*33*/].f_20))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0xD1960163A3042274(Local_113[iLocal_380 /*33*/], -2017877118) == 2 || unk_0xD1960163A3042274(Local_113[iLocal_380 /*33*/], -2017877118) == 7)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x4734A6196B611C3B(Local_113[iLocal_380 /*33*/], unk_0x16F2683693E537C9()) || Local_119[iLocal_380 /*24*/].f_3 > 3)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_20) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0x15AFB6CBDE990FB6(Local_113[iLocal_380 /*33*/].f_20, 0, 0);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 4))
					{
						iLocal_381 = func_18(5);
						if (iLocal_381 != -1)
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_20))
							{
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xD59B17D2DFF98E26(Local_113[iLocal_381 /*33*/].f_20))
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0xD1960163A3042274(Local_113[iLocal_381 /*33*/], -2017877118) == 2 || unk_0xD1960163A3042274(Local_113[iLocal_381 /*33*/], -2017877118) == 7)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x4734A6196B611C3B(Local_113[iLocal_381 /*33*/], unk_0x16F2683693E537C9()) || Local_119[iLocal_381 /*24*/].f_3 > 3)
							{
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_20) && unk_0xD59B17D2DFF98E26(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0x15AFB6CBDE990FB6(Local_113[iLocal_381 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_170[0] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[1] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[2] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[3] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[4] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[5] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[6] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_170[7] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_170[8] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_170[9] = unk_0xB0BE3DFBBB59A620(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, true, 0);
							unk_0xC023D1C4BF532815(iLocal_170[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								unk_0xEF190091B5B9F5EB(iLocal_170[iVar4], 1);
								unk_0x1E9649458B15960F(iLocal_170[iVar4], true);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0xC844350D5D58C99A(iLocal_181) && !unk_0xC844350D5D58C99A(iLocal_182))
							{
								if (unk_0xBF75E4DF4C367CD9(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 0) && unk_0xBF75E4DF4C367CD9(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0))
								{
									iLocal_181 = unk_0x4B72871A3BE7B474(2493.5f, 4969.2f, 43.9f, 1f, -921781850, 1, 0, 1);
									unk_0x1E9649458B15960F(iLocal_181, true);
									unk_0x3124890FDA752DE4(2493.4f, 4971.8f, 43.6f, 1f, -1853453107, 0);
									iLocal_182 = unk_0x7707E48765093646(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, 0);
									unk_0xC023D1C4BF532815(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									unk_0x1E9649458B15960F(iLocal_182, true);
									func_32(24, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0xF690C84DADBB3551(&iLocal_182);
								iLocal_182 = unk_0x7707E48765093646(-1853453107, 2493.427f, 4971.729f, 43.54362f, 1, true, 0);
								unk_0xC023D1C4BF532815(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								unk_0x1E9649458B15960F(iLocal_182, true);
								func_32(24, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								if (unk_0xC844350D5D58C99A(iLocal_170[iVar4]))
								{
									unk_0x1E9649458B15960F(iLocal_170[iVar4], false);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0xC844350D5D58C99A(iLocal_181))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xB87D13D0C064E9D1(iLocal_181, unk_0x16F2683693E537C9(), 1) || func_4(unk_0x16F2683693E537C9(), iLocal_181, 1) < 30f)
								{
									unk_0x1E9649458B15960F(iLocal_181, false);
									unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0xC844350D5D58C99A(iLocal_182))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xB87D13D0C064E9D1(iLocal_182, unk_0x16F2683693E537C9(), 1) || func_4(unk_0x16F2683693E537C9(), iLocal_182, 1) < 30f)
								{
									unk_0x1E9649458B15960F(iLocal_182, false);
									unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0) && unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 1)) || iLocal_149 == 6)
					{
						if (unk_0xC844350D5D58C99A(iLocal_181))
						{
							unk_0x1E9649458B15960F(iLocal_181, false);
						}
						if (unk_0xC844350D5D58C99A(iLocal_182))
						{
							unk_0x1E9649458B15960F(iLocal_182, false);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0xC844350D5D58C99A(Local_113[12 /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[12 /*33*/]));
							}
							if (unk_0xC844350D5D58C99A(Local_113[13 /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[13 /*33*/]));
							}
							if (unk_0xC844350D5D58C99A(Local_113[14 /*33*/]))
							{
								unk_0xEBA53F35D0085654(&(Local_113[14 /*33*/]));
							}
							unk_0x71199B01895C6202(joaat("ig_janet"));
							unk_0x71199B01895C6202(joaat("ig_old_man1a"));
							unk_0x71199B01895C6202(joaat("ig_old_man2"));
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0x3F423BF5B8125A50("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xB4AE0788C1587752("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0x154B5473FBFD0156() || !unk_0x22A8E52414415B76())
								{
									if (unk_0xC844350D5D58C99A(Local_113[13 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]))
									{
										unk_0xA47B46945FF6DE74(Local_113[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, 0, 0, 1);
									}
									if (unk_0xC844350D5D58C99A(Local_113[14 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
									{
										unk_0xA47B46945FF6DE74(Local_113[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, 0, 0, 1);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0x4742C50E93110B10(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && unk_0x4742C50E93110B10(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!unk_0xC844350D5D58C99A(Local_113[13 /*33*/]))
								{
									Local_113[13 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[14 /*33*/]))
								{
									Local_113[14 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[12 /*33*/]))
								{
									Local_113[12 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
								}
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 1);
								unk_0xC74CB55864B8C5C9(Local_113[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								unk_0xF895E10BF4C72645(Local_113[14 /*33*/], 1, 1);
								unk_0x11AD11297DC58CC7(Local_113[14 /*33*/], 0);
								unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0);
								unk_0xC74CB55864B8C5C9(Local_113[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								unk_0xF895E10BF4C72645(Local_113[13 /*33*/], 1, 1);
								unk_0x11AD11297DC58CC7(Local_113[13 /*33*/], 0);
								if (!unk_0x69DF961355195C3C(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = unk_0xE9744DB7B8CA6965(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									unk_0xC90224D9E95E5E3A(Local_153[iVar0 /*6*/].f_5, 1);
								}
								unk_0x915804B434753CBD(Local_113[12 /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0xF895E10BF4C72645(Local_113[12 /*33*/], 1, 1);
								unk_0x11AD11297DC58CC7(Local_113[12 /*33*/], 0);
								Local_153[iVar0 /*6*/].f_5 = 0;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0x154B5473FBFD0156() || !unk_0x22A8E52414415B76())
							{
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								unk_0x4E885A246A9D983A(Local_113[13 /*33*/], 152, true);
								unk_0x4E885A246A9D983A(Local_113[14 /*33*/], 152, true);
								if (unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 0) && unk_0xEAE0D21A50E6C7F4(Local_153[iVar0 /*6*/].f_5, 1))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0xD1960163A3042274(Local_113[13 /*33*/], 993674639) != 1)
									{
										if (unk_0x4742C50E93110B10(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0);
											unk_0xC74CB55864B8C5C9(Local_113[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											unk_0x11AD11297DC58CC7(Local_113[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 0);
									}
									if (unk_0xD1960163A3042274(Local_113[14 /*33*/], 993674639) != 1)
									{
										if (unk_0x4742C50E93110B10(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 1);
											unk_0xC74CB55864B8C5C9(Local_113[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											unk_0x11AD11297DC58CC7(Local_113[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0x5D96D8530B3D0904(&(Local_153[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_73(unk_0x16F2683693E537C9(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[12 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[12 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[12 /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[13 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[13 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[13 /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[14 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[14 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[14 /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_73(unk_0x16F2683693E537C9(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0x1346A2F19187AF79(2444.176f, 4974.077f, 56.4066f, 30f, 1194028902, 1);
					unk_0x1346A2F19187AF79(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_153[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == -1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
				Local_153[iVar0 /*6*/].f_2 = 0;
				Local_153[iVar0 /*6*/].f_3 = 0;
				Local_153[iVar0 /*6*/].f_4 = 0;
				Local_153[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, bool bParam2)
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

int func_5(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

int func_8()
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (Global_73608[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_73608[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_73608[iVar0 /*9*/].f_1 = (Global_73608[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73608[iVar0 /*9*/] != -1)
	{
		if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_73608[iVar0 /*9*/].f_1 > 1)
			{
				Global_73608[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_73608[iVar0 /*9*/].f_1 < 0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] == iParam0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73608[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] > 0)
			{
				if (Global_73608[iVar0 /*9*/] == iParam1)
				{
					Global_73608[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
				{
					if (unk_0x4FA921CB56EDB0F8(Local_109[iVar0 /*5*/].f_3) < 255)
					{
						unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x54B31D18C3F36EB7(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0x516E63E474722206(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0);
				unk_0x61755AC17D8F538E(Local_109[iVar0 /*5*/].f_3, 5);
				unk_0xF2D30B8ACAF12A39(Local_109[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_403 = 1;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = iParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			Global_2439138.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_111638.f_7256.f_227[iParam0] = iParam1;
		}
		Global_38398[iParam0] = iParam2;
		Global_38597[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_110276, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_110276, iParam0);
	}
	Global_110275 = 1;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1652615 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_111638.f_7256.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2439138.f_75.f_227[iParam0];
	}
	iVar2 = Global_38796[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_1652615 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_38398[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1652615 = 1;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = false;
						Global_1652615 = 1;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 5))
		{
			bVar5 = false;
			Global_1652615 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_39992[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x2404539258C5376B(&(Var3.f_34));
								Global_1652615 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_39793[iParam0] = 1;
					Global_39992[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_50)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_50)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_39992[iParam0] = 1;
					Global_39793[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xCADC8175C61F28E5(uVar4, 3);
								Global_39992[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 6 && unk_0xD92EF3526CDA283F(uVar4) != 7) && unk_0xD92EF3526CDA283F(uVar4) != 8)
								{
									unk_0xCADC8175C61F28E5(uVar4, 10);
									Global_39992[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x0674E58A79778E99(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x5D96D8530B3D0904(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_38597[iParam0] = 0;
				Global_38796[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_39393[iParam0])
					{
						Global_39393[iParam0] = 1;
						Global_39592++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_30769;
}

int func_25()
{
	return Global_30768;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	unk_0x536F1BE96C726C4B(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, false);
	iLocal_145 = unk_0x122AAB0B1D6F55AD(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1, 0);
	unk_0xC6A6B4DDD6DC073A(iLocal_145, 1);
	unk_0x446EA2500F021666(iLocal_145, 2);
	unk_0xB9FD7450C0DAB575(iLocal_145, 1084227584);
	if (iLocal_149 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_149 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_149 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_149 == 7)
	{
		unk_0x3F423BF5B8125A50("DEAD");
		while (!unk_0xB4AE0788C1587752("DEAD"))
		{
			func_28(323, 1);
		}
		Local_113[15 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, true);
		unk_0xC6EB89C59F2AF6B8(Local_113[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xF895E10BF4C72645(Local_113[15 /*33*/], 1, 0);
		unk_0xCAC78D14D05349E7(Local_113[15 /*33*/], true);
		Local_113[16 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, true);
		unk_0xC6EB89C59F2AF6B8(Local_113[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xF895E10BF4C72645(Local_113[16 /*33*/], 1, 0);
		unk_0xCAC78D14D05349E7(Local_113[16 /*33*/], true);
		Local_113[17 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, true);
		unk_0xC6EB89C59F2AF6B8(Local_113[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xF895E10BF4C72645(Local_113[17 /*33*/], 1, 0);
		unk_0xCAC78D14D05349E7(Local_113[17 /*33*/], true);
		Local_113[18 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, true);
		unk_0xC6EB89C59F2AF6B8(Local_113[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xF895E10BF4C72645(Local_113[18 /*33*/], 1, 0);
		unk_0xCAC78D14D05349E7(Local_113[18 /*33*/], true);
		while (((!unk_0xB4ECF989E2C1DAC8(Local_113[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0xB4ECF989E2C1DAC8(Local_113[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0xB4ECF989E2C1DAC8(Local_113[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0xB4ECF989E2C1DAC8(Local_113[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0xEB6A8945D1AC98A1(Local_113[15 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[16 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[17 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[18 /*33*/]))
			{
			}
		}
		unk_0xD458AC1C1D29C3B4(Local_113[15 /*33*/], 0, 0);
		unk_0xD458AC1C1D29C3B4(Local_113[16 /*33*/], 0, 0);
		unk_0xD458AC1C1D29C3B4(Local_113[17 /*33*/], 0, 0);
		unk_0xD458AC1C1D29C3B4(Local_113[18 /*33*/], 0, 0);
		unk_0x8D17794CE3273D70("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0x5D96D8530B3D0904(&iVar0, 3);
	unk_0x5D96D8530B3D0904(&iVar0, 8);
	unk_0x5D96D8530B3D0904(&iVar0, 1);
	unk_0x5D96D8530B3D0904(&iVar0, 2);
	unk_0x5D96D8530B3D0904(&iVar0, 4);
	uLocal_168 = unk_0xA6FF0828D17CF374(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, 0);
	if (!unk_0x49083FDB78AC0509(iLocal_148))
	{
		iLocal_148 = unk_0x544B74C043CE9948(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_169[0] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x201D37E7F281A9D1(iLocal_169[0], "V_8_Bed1Rm");
	iLocal_169[1] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x201D37E7F281A9D1(iLocal_169[1], "V_8_KitchnRm");
	iLocal_169[3] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, 0);
	unk_0x201D37E7F281A9D1(iLocal_169[3], "V_8_StudyRm");
	iLocal_169[4] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, 0);
	unk_0x201D37E7F281A9D1(iLocal_169[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0x5D96D8530B3D0904(&iVar0, 2);
	unk_0x5D96D8530B3D0904(&iVar0, 1);
	unk_0x5D96D8530B3D0904(&iVar0, 3);
	iLocal_169[2] = unk_0x2D7B5CDDF12654D2(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0x201D37E7F281A9D1(iLocal_169[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0)
		{
			Local_153[iVar0 /*6*/].f_1 = 1;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		if (unk_0xA30B8362589C124A(iVar0, -1, 0) == unk_0x16F2683693E537C9())
		{
			if (!unk_0x8B38C0DAEEDB5F9C(iVar0))
			{
				unk_0xE0C0351D5B931E37(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		if (unk_0x8B38C0DAEEDB5F9C(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_98796.f_345 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_574)
	{
		iLocal_574 = 1;
		vLocal_391[0 /*3*/] = iParam1;
		vLocal_391[0 /*3*/].f_1 = iParam2;
		vLocal_391[0 /*3*/].f_2 = sParam3;
		vLocal_391[1 /*3*/] = iParam4;
		vLocal_391[1 /*3*/].f_1 = iParam5;
		vLocal_391[1 /*3*/].f_2 = sParam6;
		vLocal_391[2 /*3*/] = iParam7;
		vLocal_391[2 /*3*/].f_1 = iParam8;
		vLocal_391[2 /*3*/].f_2 = sParam9;
		vLocal_391[3 /*3*/] = iParam10;
		vLocal_391[3 /*3*/].f_1 = iParam11;
		vLocal_391[3 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!func_59())
		{
			if (unk_0xD17F06053799A7CA() && unk_0x04E6B3EAA8742BFA())
			{
				if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_392 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_392 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_43();
		func_38();
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

void func_38()
{
	if (!func_39())
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

int func_39()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_42())
	{
		return 0;
	}
	if (func_40(unk_0xD803B885F5E47A62()))
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

bool func_40(int iParam0)
{
	return func_41(iParam0, 20);
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_42()
{
	return -1;
}

void func_43()
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

void func_44()
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

int func_45()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
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

void func_47()
{
	if (func_54(14))
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
		Global_19486 = func_48();
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

int func_48()
{
	func_49();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_49()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_52(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_51(unk_0x16F2683693E537C9());
			if (func_50(iVar0) && (!func_54(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_50(Global_111638.f_2358.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_54(int iParam0)
{
	return Global_41431 == iParam0;
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_59()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_60())
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

int func_60()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			func_63(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0)
	{
		func_63(&uLocal_409, iParam0);
	}
	func_62(&uLocal_409, iParam0, iParam1, sParam2, 0, 1);
	iLocal_408[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sLocal_51) || !unk_0x7F8A39872A07D2CE(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_63(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_65()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0xD17F06053799A7CA() || unk_0x04E6B3EAA8742BFA())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (func_67(&uLocal_409, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_58(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_37(sParam3, iParam4, bParam7);
}

int func_68(int iParam0)
{
	return iLocal_408[iParam0];
}

int func_69(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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
	return 0;
}

void func_70()
{
	Global_19671 = 0;
	func_71();
}

void func_71()
{
	if (unk_0x1EE04CEA36EF313B() || Global_19485 == 1)
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = Global_19488;
		return;
	}
}

void func_72()
{
	Global_19671 = 0;
	func_57();
}

float func_73(int iParam0, vector3 vParam1, bool bParam2)
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

int func_74(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_75(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_76(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_76(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (bParam10)
			{
				func_83(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_80(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("taxi")))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, -1, 0) != 0)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_78(iVar0, func_48(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_77(vParam5))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0))
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar5);
						if (unk_0xAFB8495D36825275(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam4);
						unk_0xA47B46945FF6DE74(iVar0, vParam3, 1, 0, 0, 1);
						unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							unk_0x05CA0E7946B27A19(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 1))
						{
							unk_0x73270B3C9CC833FD(iVar0, true, 1);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, true), 1, 0, 0, 1);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x10F452EDECF82313(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, true, 0);
			}
			iVar8 = unk_0xA30B8362589C124A(iVar0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
			{
				unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, 0, 0, 1);
			}
			iVar9 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 1, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, 0, 0, 1);
				}
				iVar8 = unk_0xA30B8362589C124A(iVar0, 2, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, 0, 0, 1);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_77(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_79(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar2], 0))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_82(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_81(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_81(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_81(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_81(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_81(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_81(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_81(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_81(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_81(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_81(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_81(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_81(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_81(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_81(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_81(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_81(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_82(vector3 vParam0)
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

void func_83(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 200)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

void func_84()
{
	if (iLocal_149 >= 3)
	{
		if (iLocal_149 > 3)
		{
			func_109(&Local_119, &vLocal_130, vLocal_123, vLocal_124, vLocal_125, vLocal_126, vLocal_122, vLocal_129, vLocal_120, vLocal_121, vLocal_127, vLocal_128);
		}
		func_85();
	}
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_119)
	{
		if ((!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]) && !unk_0x28072FDD60CE3A6E(Local_113[iVar0 /*33*/], 1)) || Local_119[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 1, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
										func_105(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5 = 1;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, true, 0);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = unk_0x7707E48765093646(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, true, 0);
										Local_113[iVar0 /*33*/].f_5++;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_14 = unk_0xE9744DB7B8CA6965(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_104(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0x4F39CC3882DD074E(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xC90224D9E95E5E3A(Local_113[iVar0 /*33*/].f_14, 1);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_113[iVar0 /*33*/].f_14 = unk_0xE9744DB7B8CA6965(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										unk_0xC90224D9E95E5E3A(Local_113[iVar0 /*33*/].f_14, 1);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
							{
								unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 1, 1);
								unk_0x2051F535F4A99479(Local_113[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_105(iVar0, 14, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
											func_105(iVar0, 14, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										unk_0x298903DD96203C2C(Local_113[iVar0 /*33*/], 5);
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 23, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 32;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
							{
								unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 1, 1);
							}
							break;
						
						case 5:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
					{
						unk_0x120A395B0ECB8EA5(Local_113[iVar0 /*33*/], 1);
						Local_119[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_119[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0x1A5AE8A9B1D42A10(Local_113[iVar0 /*33*/].f_20) && unk_0x32B8283A77B4A240(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x9F528B1B53FBC5D9(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0x4A089F2B762B8D33(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 1, 1);
												unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_113[iVar0 /*33*/].f_5 < 7)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0x8352CA08CF578D18(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0x8352CA08CF578D18(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 2 && Local_113[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xD59B17D2DFF98E26(Local_113[iVar0 /*33*/].f_20))
										{
											Local_113[iVar0 /*33*/].f_12 = (func_102(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], true), Local_113[iVar0 /*33*/].f_6, 1) - unk_0xD9522BA9E27E1349(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_12 = func_101((Local_113[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x869EFD0BC0868856(Local_113[iVar0 /*33*/]))
											{
												unk_0xD8F6A53F4799FAFE(Local_113[iVar0 /*33*/], (unk_0xD9522BA9E27E1349(Local_113[iVar0 /*33*/]) + (timestep() * Local_113[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
										{
											if (unk_0x1A5AE8A9B1D42A10(Local_113[iVar0 /*33*/].f_20) && unk_0x32B8283A77B4A240(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x9F528B1B53FBC5D9(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], unk_0x4A089F2B762B8D33(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
										{
											if (func_73(Local_113[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
												unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 1, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 5)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (unk_0x5A91F08DF773C39D(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, true, 0))
										{
											if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0xFB131B855F2FD560(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (unk_0xB4ECF989E2C1DAC8(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0xFB131B855F2FD560(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
											{
												unk_0x15AFB6CBDE990FB6(Local_113[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_74(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x79C43E2BAC7C696F(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, -1, -1, 1f, 1, 0);
													func_105(func_18(6), 14, 0, 0);
													func_105(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x79C43E2BAC7C696F(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, -1, 0, 1f, 1, 0);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = 0;
											Local_113[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_100(iVar0);
										if (unk_0x405E212DDE472467(Local_113[iVar0 /*33*/], 0))
										{
											unk_0xE8832A9E16A57A1F(Local_113[iVar0 /*33*/], 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_74(iLocal_145))
										{
											if (!unk_0xBBA8A868118C90ED(iLocal_145, -1, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0xBBA8A868118C90ED(iLocal_145, 0, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar1 /*33*/]))
															{
																if (unk_0x0E0E6175453415CB(Local_113[iVar1 /*33*/]))
																{
																	func_99();
																	unk_0xE9362E4D600DD12A(0, iLocal_145, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0xE072601B4380E9DF(0, iLocal_145, 19f, 786599);
																	func_98(&(Local_113[iVar0 /*33*/]), 0);
																	func_97(25, 1);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0xBBA8A868118C90ED(iLocal_145, 0, 0))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 5)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0x96167B03C5A77156(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x96167B03C5A77156(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x8ABEF95A05CEAA79(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 1061158912);
										unk_0xE655C47E46F9A7E4(0, 92.5678f, 0);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											func_105(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_105(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_99();
										unk_0x96167B03C5A77156(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0xE655C47E46F9A7E4(0, 309.5567f, 0);
										unk_0x78A77CDD64392938(0, 2000);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 993674639) == 7 && Local_113[iVar0 /*33*/].f_5 > 1)
								{
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x5745EA6329A91E29(Local_113[iVar0 /*33*/], joaat("weapon_unarmed"), true);
										unk_0xE655C47E46F9A7E4(Local_113[iVar0 /*33*/], 219f, 1500);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 1920390111) == 7)
										{
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 1) < 20f)
									{
										func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_14, 0);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0x09AC81E49EA267F7(0, 3);
												if (iVar3 == 0)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
											{
												Local_113[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 1000;
											}
											break;
										
										case 11:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
											{
												unk_0x796BDF31572BB055(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 5000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 5000;
											}
											break;
										
										case 12:
											if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) && func_73(Local_113[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (unk_0x1C0640BA9A7327B3() > (Local_113[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0x96167B03C5A77156(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1f, 20000, 1048576000, 0, 1193033728);
													Local_113[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_99();
											unk_0x96167B03C5A77156(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0xE655C47E46F9A7E4(0, 127.6328f, 3000);
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14 || unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 242628503) == 7)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 713668775) == 7)
											{
												Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
										{
											if (func_74(iLocal_145))
											{
												unk_0x5B1D360B9C6F0A09(Local_113[iVar0 /*33*/], iLocal_145, 20000, 1, 1f, 1, 0);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = 0;
												Local_113[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_100(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 1) < 20f)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0x9294582561BECEE7(Local_113[iVar0 /*33*/], 0);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar4, 1))
										{
											func_99();
											if (iVar0 == 1)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[2 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0, Local_113[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[1 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0, Local_113[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[7 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0, Local_113[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0xEB6A8945D1AC98A1(Local_113[6 /*33*/]))
												{
													unk_0xF96A174EE26D7588(0, Local_113[6 /*33*/], 2000);
												}
											}
											if (Local_113[iVar0 /*33*/].f_14 != 0)
											{
												unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_15 = unk_0x1C0640BA9A7327B3() + 15000;
										}
										break;
									
									case 2:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 242628503) == 7 || unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_15)
										{
											unk_0xA3BF0AA5A2608191(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												unk_0x9294582561BECEE7(Local_113[iVar0 /*33*/], 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 993674639) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0xF895E10BF4C72645(Local_113[iVar0 /*33*/], 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_113[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x3F423BF5B8125A50("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0xB4AE0788C1587752("misscarsteal2peeing"))
										{
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 1) < 21.6f)
										{
											unk_0xC6EB89C59F2AF6B8(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 23000;
										}
										break;
									
									case 3:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
										{
											Local_113[iVar0 /*33*/].f_14 = -1;
											unk_0x509B8296EBA9B408(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0x96167B03C5A77156(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 1048576000, 0, 1193033728);
										unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 12:
												if (unk_0x4742C50E93110B10(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0x4742C50E93110B10(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0x4742C50E93110B10(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0x4742C50E93110B10(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0x4742C50E93110B10(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0x4742C50E93110B10(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													unk_0xC74CB55864B8C5C9(Local_113[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) || (func_96(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											unk_0xF9B5DB58254657F1(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_113[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_113[iVar0 /*33*/]) || (func_96(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, true, 0)))
										{
											if (func_35("TRV1", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 2000;
										}
										break;
									
									case 4:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0xF3268524E9BE6D6E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 200f, 200000, 0, 0);
											unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], true);
											unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0x0361981EE62202D8(Local_113[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0x440C646F2F11A2A1(Local_113[iVar0 /*33*/], 0, 2))
											{
												unk_0x262EF6C6306BEA6C(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), -1, false, true);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
												func_94();
												unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 0);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
												unk_0x6DF7BF67E86AAE86(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
										unk_0x6D0C93EE4FBA9307(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 1);
										unk_0x6DF7BF67E86AAE86(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze") && unk_0x1787731C4D1D6B19(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0xC90224D9E95E5E3A(iLocal_370, 1);
												unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0xC844350D5D58C99A(iLocal_373))
												{
													iLocal_373 = unk_0x5ACD4E66C7BF0F49(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1065353216, 0, 0, 1);
													unk_0xC023D1C4BF532815(iLocal_373, 90f, 0f, 0f, 2, 1);
												}
												unk_0x0C8C0C840C2D1AD2(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), -1, 0, 2);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_149 == 4 || iLocal_149 == 5) || iLocal_149 == 6)
										{
											if (func_93(11))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 6)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_369 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x0C8C0C840C2D1AD2(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), -1, 0, 2);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((unk_0x69DF961355195C3C(iLocal_369) && unk_0xA45992A6CE82FB43(iLocal_369) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0x69DF961355195C3C(iLocal_369) && unk_0xA45992A6CE82FB43(iLocal_369) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_369))
										{
											iLocal_368 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											unk_0xC90224D9E95E5E3A(iLocal_368, 1);
											unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0x69DF961355195C3C(iLocal_371) || iLocal_371 == 0)
										{
											if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
											{
												iLocal_371 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (unk_0x09AC81E49EA267F7(0, 2) == 1)
												{
													unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0x69DF961355195C3C(iLocal_368) || iLocal_368 == 0)
										{
											if ((unk_0x69DF961355195C3C(iLocal_371) && unk_0xA45992A6CE82FB43(iLocal_371) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_371))
											{
												iLocal_368 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0xC90224D9E95E5E3A(iLocal_368, 1);
												unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_113[iVar0 /*33*/].f_14 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(1000, 2000));
											}
										}
										if (!func_65() || (func_73(unk_0x16F2683693E537C9(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, true, 0)))
										{
											func_91();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_372 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0x915804B434753CBD(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x96C150704BF4D0C6(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0x69DF961355195C3C(iLocal_372) && unk_0xA45992A6CE82FB43(iLocal_372) > 0.98f) || !unk_0x69DF961355195C3C(iLocal_372))
										{
											unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
											unk_0xA3BF0AA5A2608191(Local_113[iVar0 /*33*/]);
											unk_0x9BE7E7B6B488CC55(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), -1, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_65())
										{
											if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0x11AD11297DC58CC7(Local_113[iVar0 /*33*/], 0);
												unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
												Local_113[iVar0 /*33*/].f_14 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3000, 4000));
												Local_113[iVar0 /*33*/].f_15 = 0;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
										{
											if (Local_113[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_14 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3000, 4000));
													Local_113[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
								{
									if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(Local_113[iVar0 /*33*/], true), 2f, 1))
									{
										Local_113[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_90("FRMFLC", 0, 0))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_113[iVar0 /*33*/], "oneilcook", 2, unk_0x16F2683693E537C9(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = unk_0x1C0640BA9A7327B3() + 1300;
										}
										break;
									
									case 2:
										if (unk_0x1C0640BA9A7327B3() > Local_113[iVar0 /*33*/].f_14)
										{
											unk_0xF9B5DB58254657F1(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_65())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_65())
										{
											func_105(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										unk_0xF3268524E9BE6D6E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 50f, 1000, 0, 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_88("WRK2"))
										{
											if (unk_0x40EFDB96B3112BA7() == 1 || unk_0x40EFDB96B3112BA7() == 5)
											{
												func_87(0);
											}
											else
											{
												func_87(1);
											}
										}
										func_105(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										unk_0xD93EE6549113F9E1(0, 1);
										unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 200f, 999999, 0, 0);
										unk_0x8BE3D040D15AEA1D(0, -1);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], true);
										unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
										if (unk_0xE4EDC4B0E92C078B(Local_113[iVar0 /*33*/].f_19))
										{
											unk_0x142CC44DB769B57E(&(Local_113[iVar0 /*33*/].f_19));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_376 == 1)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x57E0CF9BF653D99A(Local_113[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_376 = 0;
									}
								}
								if (iLocal_377 == 1)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_14))
									{
										unk_0x57E0CF9BF653D99A(Local_113[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_377 = 0;
									}
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0x69DF961355195C3C(Local_113[iVar0 /*33*/].f_14))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_149 == 3)
											{
												if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 1785177548) == 1)
												{
													if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_14) > 0.024f && unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0xCAE036C45E7FC720(Local_113[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0x298903DD96203C2C(Local_113[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_86(&iVar5))
																	{
																		unk_0x4602DF28F05262E2(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x2D728BBC95A0267D(Local_113[iVar0 /*33*/], unk_0x68F4C0EC296D3901(iLocal_170[iVar5], true), 0);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0x4602DF28F05262E2(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x2D728BBC95A0267D(Local_113[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 1)
										{
											if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 2;
												if (iLocal_374 == 0)
												{
													unk_0xEB0A515D699A7E90(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0xA45992A6CE82FB43(Local_113[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0xD1960163A3042274(Local_113[iVar0 /*33*/], 2106541073) == 7)
									{
										func_105(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_119[iVar0 /*24*/].f_20)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_93(18))
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										unk_0xAFF39FB306F8E232(Local_113[iVar0 /*33*/], 50, true);
										if (iLocal_114 == 0)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0);
											unk_0xED253B8DDB3FFB77(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (unk_0x1C0640BA9A7327B3() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_73(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0x1C0640BA9A7327B3() > Local_119[iVar0 /*24*/].f_4)
										{
											unk_0xB3F77607A42FF835(Local_113[iVar0 /*33*/], 0);
											unk_0xED253B8DDB3FFB77(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_119[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x17EAEF3CBDBACF1B(Local_113[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										unk_0x6C3AE6E278DB3D0E(Local_113[iVar0 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0x26A6B1686E33113F(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = unk_0x09AC81E49EA267F7(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[*iParam0]) && unk_0x3D1053F9EB43B7AD(iLocal_170[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, true, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_87(bool bParam0)
{
	iLocal_392 = 0;
	if (bParam0)
	{
		func_91();
	}
	else
	{
		func_94();
	}
}

int func_88(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_89() };
	if (unk_0x7F8A39872A07D2CE(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_90(char* sParam0, int iParam1, int iParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(iParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_91()
{
	Global_19671 = 0;
	func_92();
}

void func_92()
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

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_94()
{
	Global_19671 = 0;
	func_95();
}

void func_95()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

int func_96(vector3 vParam0, float fParam1, float fParam2)
{
	if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
	{
		if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam0, fParam2, fParam2, fParam2, 0, false, 0))
		{
			return 0;
		}
		else if (unk_0x757EF87A33649210())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_388[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x25644C31B4B6E9F3(uLocal_81, 1);
	}
	unk_0x75ABDC5F81978924(uLocal_81);
	if (!unk_0x28072FDD60CE3A6E(*iParam0, 1))
	{
		unk_0x78ADC381772E3D54(*iParam0, uLocal_81);
	}
	unk_0xF82EA857DA10E0CD(&uLocal_81);
}

void func_99()
{
	unk_0xDD353D0E9C789D0E(&uLocal_81);
}

void func_100(int iParam0)
{
	Local_113[iParam0 /*33*/].f_15 = (Local_113[iParam0 /*33*/].f_15 + floor((timestep() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_113[iParam0 /*33*/].f_15 > 2000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 8000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[6 /*33*/]))
				{
					unk_0x0C8C0C840C2D1AD2(Local_113[iParam0 /*33*/], Local_113[6 /*33*/], 4000, 0, 2);
					unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 11000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 20000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 0))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 10000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 1))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 18000 && !unk_0xEAE0D21A50E6C7F4(Local_113[iParam0 /*33*/].f_14, 2))
			{
				unk_0xDBE4EC9C88839074(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				unk_0x5D96D8530B3D0904(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_101(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_102(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA29E145196B9739D(iParam0, 1);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 7);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_104(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_12 = 0f;
			Local_113[iParam0 /*33*/].f_13 = 0f;
			Local_113[iParam0 /*33*/].f_14 = iParam3;
			Local_113[iParam0 /*33*/].f_15 = 0;
			Local_119[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 1 && Local_113[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = unk_0xFBD08BECC9B87937(vParam2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0xBD307E66C0669BFC(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_m_hillbilly_02"), vParam2, fParam3, 1, true);
			unk_0x78ED16BE998AECC7(Local_113[iParam0 /*33*/]);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x64F9F278AB9DCA2C(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_111 > 17)
	{
		Local_113[iParam0 /*33*/] = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), vParam2, fParam3, 1, true);
		unk_0xC743BD39A24D0583(Local_113[iParam0 /*33*/], 0);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 5)
	{
		unk_0x11AD11297DC58CC7(Local_113[iParam0 /*33*/], 1);
		unk_0x6DF7BF67E86AAE86(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		unk_0x262EF6C6306BEA6C(Local_113[iParam0 /*33*/], iParam4, 3000, bParam5, true);
		unk_0x6DF7BF67E86AAE86(Local_113[iParam0 /*33*/], iLocal_116);
		unk_0x20EC6650986ACDC7(Local_113[iParam0 /*33*/], 1);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 9, true);
		unk_0x967762C930C0C5FD(Local_113[iParam0 /*33*/], 120f);
		unk_0x9FA191B317572861(Local_113[iParam0 /*33*/], 22f);
		unk_0xA656189732A3FF4B(Local_113[iParam0 /*33*/], 22f);
		unk_0x4E885A246A9D983A(Local_113[iParam0 /*33*/], 118, false);
		unk_0x67415F01577A142E(Local_113[iParam0 /*33*/], 14, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 2)
		{
			unk_0x298903DD96203C2C(Local_113[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0x298903DD96203C2C(Local_113[iParam0 /*33*/], 45);
		}
		unk_0x1365063FA6365BE8(Local_113[iParam0 /*33*/], true);
		unk_0x7980D72D61BEF4D5(Local_113[iParam0 /*33*/], true);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 15, false);
		unk_0xAFF39FB306F8E232(Local_113[iParam0 /*33*/], 17, false);
		func_108(Local_113[iParam0 /*33*/], 1);
	}
	unk_0x561C1BF2863AB0B1(Local_113[iParam0 /*33*/]);
	unk_0x120A395B0ECB8EA5(Local_113[iParam0 /*33*/], 1);
	unk_0xCF3472A5A8638B21(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0xBD04CCA6FBB81D61(Local_113[iParam0 /*33*/], 1);
	unk_0xA3E11DAF71FFB396(Local_113[iParam0 /*33*/], 1);
	unk_0xD458AC1C1D29C3B4(Local_113[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_61542[iVar0 /*2*/] != 0)
			{
				if (Global_61542[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_61541)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_61542[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_61542[iVar1 /*2*/] = iParam0;
	Global_61542[iVar1 /*2*/].f_1 = 7;
	Global_61541++;
}

void func_109(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, vector3 vParam8, vector3 vParam9, vector3 vParam10, vector3 vParam11)
{
	if (iLocal_52 > 0)
	{
		func_121(uParam0, vParam8, vParam9, vParam6, vParam7);
		func_113(uParam0, uParam1, vParam2, vParam3, vParam4);
		func_110(uParam0, vParam5, vParam6, vParam7, vParam8, vParam9, vParam10, vParam11);
	}
}

void func_110(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7)
{
	if (unk_0x19C7D1907D1DDDAB())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_61 /*24*/], 1))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!func_88(vParam5.y))
												{
													func_94();
													if (func_111(vParam5.y, vParam5.z, (*uParam0)[iLocal_61 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_88(vParam4.y))
										{
											func_94();
											if (func_111(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_74 = 0;
									func_94();
									if (func_111(vParam1.y, vParam1.z, (*uParam0)[iLocal_61 /*24*/], vParam1.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_74 = 0;
									func_94();
									if (func_111(vParam6.y, vParam6.z, (*uParam0)[iLocal_61 /*24*/], vParam6.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_53 && !iLocal_74)
									{
										func_94();
										if (func_111(vParam7.y, vParam7.z, (*uParam0)[iLocal_61 /*24*/], vParam7.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_56)
									{
										if (((!func_88(vParam2.y) && !func_88(vParam3.y)) && !func_88(vParam4.y)) && !func_88(vParam5.y))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(vParam2.y, vParam2.z, (*uParam0)[iLocal_61 /*24*/], vParam2.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!func_88(vParam2.y) && !func_88(vParam3.y)) && !func_88(vParam4.y)) && !func_88(vParam5.y))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(vParam3.y, vParam3.z, (*uParam0)[iLocal_61 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_111(vParam4.y, vParam4.z, (*uParam0)[iLocal_61 /*24*/], vParam4.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_65())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_111(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_112(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!func_59())
	{
		if (!unk_0xD17F06053799A7CA())
		{
			if (func_36(&Local_77, cLocal_78, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_80 = 0;
				return 1;
			}
			else if (iLocal_79 != unk_0x1C0640BA9A7327B3())
			{
				iLocal_80++;
				iLocal_79 = unk_0x1C0640BA9A7327B3();
				if (iLocal_80 >= 10)
				{
					iLocal_80 = 0;
					return 1;
				}
			}
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
	return 0;
}

void func_112(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_63(&Local_77, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		func_63(&Local_77, iParam0);
	}
	func_62(&Local_77, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1) && !unk_0x9E834FAC6CCB49FB((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0x2ECF845953E95D1B((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0x2ECF845953E95D1B((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0x3C66DF04E6EA3587((*uParam0)[iVar0 /*24*/]);
											if (unk_0xDF1306B443CD3D15(iVar2, 0))
											{
												if (unk_0x20D6474D5F4B9FC6(iVar2))
												{
													vVar3 = { unk_0x56E9E0FD5ACCD35D(iVar2) };
													unk_0xC55F2A0377488064(iVar2);
													unk_0x37806EBF326ECEE9(iVar2, vVar3);
													unk_0x75CDA8644CD3B5F5((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_119((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0x1C0640BA9A7327B3() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0, 1);
																unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD93EE6549113F9E1(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0, 1);
																unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD93EE6549113F9E1(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0, 1);
																unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD93EE6549113F9E1(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																unk_0xD93EE6549113F9E1(0, 1);
																unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD93EE6549113F9E1(0, 0);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0), true);
															func_99();
															if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0xD93EE6549113F9E1(0, 1);
																unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0xD93EE6549113F9E1(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0x7C8478BF70C1E072(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x1C0640BA9A7327B3() + 3000;
															break;
														
														case 1:
															func_99();
															unk_0xD93EE6549113F9E1(0, 1);
															iVar4 = func_118();
															unk_0xD93EE6549113F9E1(0, 0);
															unk_0x7C8478BF70C1E072(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + iVar4);
															break;
														
														default:
															if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	unk_0x4E6D1F54D3FBC5B1((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 1);
																unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 1);
																unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x09AC81E49EA267F7(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x09AC81E49EA267F7(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0x755FF954DAE327E1((unk_0xD9522BA9E27E1349((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x09AC81E49EA267F7(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0x755FF954DAE327E1((unk_0xD9522BA9E27E1349((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0xC6EB89C59F2AF6B8((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x09AC81E49EA267F7(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0xD1960163A3042274((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0, 2000));
															break;
														
														default:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0, 2000));
															break;
														
														default:
															if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_115(iVar0, uParam0, "", vParam2, vParam3, vParam4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!unk_0x405E212DDE472467((*uParam0)[iVar0 /*24*/], 1))
																{
																	vVar5 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], true) };
																	vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
																	fVar7 = unk_0x10FCEF75D66B7A3B(((vVar6.z - vVar5.z) / func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_99();
															unk_0xD93EE6549113F9E1(0, 1);
															unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1000);
															unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD93EE6549113F9E1(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_99();
															unk_0xD93EE6549113F9E1(0, 1);
															unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1000);
															unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD93EE6549113F9E1(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_99();
															unk_0xD93EE6549113F9E1(0, 1);
															unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 1000);
															unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0xD93EE6549113F9E1(0, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (unk_0x755FF954DAE327E1(func_119((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9())) < 20f)
																{
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_114(((func_4((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (unk_0xB4ECF989E2C1DAC8((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (unk_0x8CA9406E01C7EE58((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x1C0640BA9A7327B3() + 2000;
											unk_0x6C3AE6E278DB3D0E((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0, 16);
											unk_0xE8832A9E16A57A1F((*uParam0)[iVar0 /*24*/], 1, 1);
											unk_0x26A6B1686E33113F((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0x1C0640BA9A7327B3() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (unk_0xD3658E8B80B4DE3E((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xACCBB8E1BDF4D6BE((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0 /*24*/]))
							{
								unk_0xA3BF0AA5A2608191((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									unk_0x5745EA6329A91E29((*uParam0)[iVar0 /*24*/], unk_0xE939991717D9E39F((*uParam0)[iVar0 /*24*/], 0), true);
									unk_0x11AD11297DC58CC7((*uParam0)[iVar0 /*24*/], 0);
									unk_0xD35BB27936A678E2((*uParam0)[iVar0 /*24*/]);
									unk_0xAFF39FB306F8E232((*uParam0)[iVar0 /*24*/], 50, true);
									unk_0xBAFED2F6486F771A((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0x6C3AE6E278DB3D0E((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9(), 0, 16);
										unk_0xE8832A9E16A57A1F((*uParam0)[iVar0 /*24*/], 1, 1);
										unk_0x26A6B1686E33113F((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_114(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_115(int iParam0, var uParam1, char* sParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, bool bParam6)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
			{
				if (func_65())
				{
					if (!func_88(vParam3.y))
					{
						func_91();
					}
				}
				if (func_111(vParam3.y, vParam3.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0x68F4C0EC296D3901((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0xD9522BA9E27E1349((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x1C0640BA9A7327B3() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0x68F4C0EC296D3901((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0xD9522BA9E27E1349((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x796BDF31572BB055((*uParam1)[iParam0 /*24*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0x1C0640BA9A7327B3() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
			{
				if ((unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0x1C0640BA9A7327B3() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0x96167B03C5A77156((*uParam1)[iParam0 /*24*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_111(vParam5.y, vParam5.z, (*uParam1)[iParam0 /*24*/], vParam5.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0xE655C47E46F9A7E4((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_99();
			unk_0x96167B03C5A77156(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			unk_0xE655C47E46F9A7E4(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_98(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0x1C0640BA9A7327B3() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y) && unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!unk_0x7F8A39872A07D2CE(sParam2, ""))
				{
					unk_0x509B8296EBA9B408((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0x7F8A39872A07D2CE("chi2_hear", vParam3.y))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_111(vParam3.y, vParam4.z, (*uParam1)[iParam0 /*24*/], vParam3.x, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0xD1960163A3042274((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iParam0 /*24*/]))
				{
					unk_0xA3BF0AA5A2608191((*uParam1)[iParam0 /*24*/]);
					func_99();
					unk_0xDBE4EC9C88839074(0, unk_0x68E4ADDDDCD7BDDE((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0xDBE4EC9C88839074(0, unk_0x68E4ADDDDCD7BDDE((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_98(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x1C0640BA9A7327B3() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!unk_0x28072FDD60CE3A6E((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0x28072FDD60CE3A6E((*uParam1)[iVar0 /*24*/], 1) && unk_0xC844350D5D58C99A((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_119((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0x755FF954DAE327E1((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0xF96A174EE26D7588(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0xF96A174EE26D7588((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_117((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_117(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	return func_102(vVar0, vVar1, iParam2);
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	unk_0xC6EB89C59F2AF6B8(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0x09AC81E49EA267F7(0, 3);
		iVar3 = unk_0x09AC81E49EA267F7(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = unk_0x09AC81E49EA267F7(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0x09AC81E49EA267F7(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0x09AC81E49EA267F7(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xC6EB89C59F2AF6B8(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_119(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xC844350D5D58C99A(iParam1))
	{
		return func_120(iParam0, unk_0x68F4C0EC296D3901(iParam1, false));
	}
	return 0f;
}

float func_120(int iParam0, vector3 vParam1)
{
	float fVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			fVar0 = func_102(unk_0x68F4C0EC296D3901(iParam0, false), vParam1, 1);
			return (fVar0 - unk_0xD9522BA9E27E1349(iParam0));
		}
	}
	return 0f;
}

void func_121(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_53 == 1)
	{
		bLocal_82 = false;
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || unk_0x06F8112AA79C53D9(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_58 /*24*/], 1))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((unk_0x4D570FEF9D230CE7((*uParam0)[iLocal_58 /*24*/]) != 0 && unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0x4D570FEF9D230CE7((*uParam0)[iLocal_58 /*24*/]) == 0 && unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]) == 0))
										{
											vVar3 = { unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], true) };
											vVar4 = { unk_0x68F4C0EC296D3901((*uParam0)[iLocal_58 /*24*/], false) };
											if (unk_0x755FF954DAE327E1((vVar3.z - vVar4.z)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = func_119((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
	{
		iVar9 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (unk_0xDF1306B443CD3D15(iVar9, 0))
		{
			if (unk_0x2F6DBDA9ACD7D3AB(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (unk_0x681F21BF9F7B449B(-1, vLocal_71, fLocal_72))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3() + 1000;
			iLocal_55 = 1;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_88(Param1.f_1) && !func_88(Param3.f_1)) && !func_88(Param5.f_1)) && !func_88(Param7.f_1))
	{
		iLocal_55 = 0;
	}
	else if (unk_0x1C0640BA9A7327B3() > iLocal_59)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			bLocal_53 = true;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_57 = 0;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar13 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
	}
	if (iLocal_62 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x28072FDD60CE3A6E((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (unk_0xDF1306B443CD3D15(iVar13, 0))
						{
							if (unk_0x2F6DBDA9ACD7D3AB(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 20f;
							}
							if (unk_0xB9F5AD0599FD42F7(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 50f;
							}
						}
						if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), (*uParam0)[iVar0 /*24*/]) || (unk_0xDF1306B443CD3D15(iVar13, 0) && unk_0x2F6DBDA9ACD7D3AB(iVar13)))
						{
							if (func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x4D570FEF9D230CE7((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !unk_0x869EFD0BC0868856((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], true), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0xD15F544473A95FE8(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], true), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901((*uParam0)[iVar0 /*24*/], true), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0x28072FDD60CE3A6E((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0x6AB6A474D29FA7D8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0xC844350D5D58C99A((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0x28072FDD60CE3A6E((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0x6AB6A474D29FA7D8((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0x4734A6196B611C3B((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0xFEABCECA098C0A91((*uParam0)[iVar0 /*24*/], 1) || unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 1)) || (unk_0x4734A6196B611C3B((*uParam0)[iVar0 /*24*/], 0) && unk_0x25176BBC501E783C((*uParam0)[iVar0 /*24*/], unk_0x16F2683693E537C9()))) || (func_122((*uParam0)[iVar0 /*24*/]) && unk_0xFA4CE147B4D9AEE0((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && func_4(unk_0x16F2683693E537C9(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (unk_0x28072FDD60CE3A6E((*uParam0)[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

int func_122(int iParam0)
{
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xB4ECF989E2C1DAC8(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	if (iLocal_392)
	{
		if (unk_0xEA6BC48857E0AC4C(&vLocal_397))
		{
			if (func_65())
			{
				if (unk_0x25037C66EB32B076())
				{
					if (!unk_0xD17F06053799A7CA())
					{
						cLocal_393 = { func_124() };
						vLocal_397 = { func_89() };
						StringCopy(&vLocal_397, "", 24);
						if (!unk_0xEA6BC48857E0AC4C(&cLocal_393) && !unk_0x7F8A39872A07D2CE(&cLocal_393, "NULL"))
						{
							vLocal_397 = { func_89() };
							func_91();
						}
						else
						{
							iLocal_392 = 0;
							StringCopy(&vLocal_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0;
				StringCopy(&vLocal_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (unk_0x25037C66EB32B076())
			{
				if (!func_88(&vLocal_397))
				{
					iLocal_392 = 0;
					StringCopy(&vLocal_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!unk_0xEA6BC48857E0AC4C(&vLocal_397))
			{
				vLocal_391[0 /*3*/] = { vLocal_391[0 /*3*/] };
			}
		}
	}
}

struct<6> func_124()
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

void func_125()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_132();
		func_131();
		func_129();
		func_126();
	}
}

void func_126()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	vVar1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0)
	{
		if (unk_0x49DBEF6684F02E67(&vVar1, Local_109[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_109)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + unk_0x0EB28750412C3A5A(Local_109[(iVar0 - 1) /*5*/], Local_109[iVar0 /*5*/], true));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (unk_0x49DBEF6684F02E67(&vVar1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = unk_0x0EB28750412C3A5A(Local_109[iVar0 /*5*/], vVar1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 1;
				iLocal_104 = unk_0x1C0640BA9A7327B3();
				fVar6 = fVar6;
				vLocal_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0)
				{
					iLocal_108 = 0;
				}
				if (iLocal_107 >= Local_109 * 2)
				{
					iLocal_107 = (Local_109 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_102 == 1)
	{
		unk_0xE2E72C10BBB7677E();
		fVar7 = (to_float((unk_0x1C0640BA9A7327B3() - iLocal_104)) / fLocal_110);
		iVar8 = (floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			if ((unk_0x1C0640BA9A7327B3() - Local_101[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xBB6D217402E588F9(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x1C0640BA9A7327B3() - Local_101[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_128(Local_109[(iParam0 / 2) /*5*/] + Local_109[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_128(Local_109[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), iParam1);
		}
	}
}

void func_128(vector3 vParam0, int iParam1)
{
	if (iLocal_103 == 0)
	{
		iParam1 = 0;
	}
	unk_0x060876FE4313F6DC(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0)
	{
		unk_0xBB6D217402E588F9(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = unk_0x1C0640BA9A7327B3();
	Local_101[iLocal_106 /*5*/].f_1 = { vParam0 };
	Local_101[iLocal_106 /*5*/] = unk_0xDF107B1FEA1F95CB(vParam0, iLocal_94, iParam1);
	iLocal_106++;
	if (iLocal_106 >= 31)
	{
		iLocal_106 = 0;
	}
}

void func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x06F8112AA79C53D9(0, 24) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				if (iLocal_95 == 0)
				{
					unk_0x8B4C4CA774181102(2f, 8f, 4);
					iLocal_95 = unk_0x1C0640BA9A7327B3() + 250;
				}
				if (unk_0x1C0640BA9A7327B3() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						vLocal_98 = { func_130() };
						iVar0 = 0;
						while (iVar0 < Local_109)
						{
							if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x0EB28750412C3A5A(vLocal_98, unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3), true);
								fVar3 = unk_0x0EB28750412C3A5A(Local_109[iVar0 /*5*/], unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { vLocal_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) < 3 && unk_0x51D1D19912234EA0((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xE4EDC4B0E92C078B(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x4FA921CB56EDB0F8(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7F010F50CE03A8AF(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (unk_0xE4EDC4B0E92C078B(Local_109[iVar6 /*5*/].f_3))
											{
												if (unk_0x4FA921CB56EDB0F8(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7F010F50CE03A8AF(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
									{
										if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_77(Local_109[iVar5 + 1 /*5*/]))
									{
										if (unk_0xE4EDC4B0E92C078B(Local_109[iVar5 /*5*/].f_3))
										{
											if (unk_0x4FA921CB56EDB0F8(Local_109[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x7F010F50CE03A8AF(Local_109[iVar5 /*5*/].f_3, 0);
												Local_109[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}

Vector3 func_130()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	
	iVar0 = unk_0x77E7AA9D423491DC(unk_0x16F2683693E537C9(), 1);
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		iVar1 = unk_0xF653B9B22DA806A9(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		vVar2 = { unk_0xBF584557291FDD31(iVar0, iVar1) };
		vVar2 = { unk_0x8A5E176FF719A014(vVar2, unk_0xD9522BA9E27E1349(iVar0), 0.35f, 0f, -0.15f) };
		unk_0xE82754C349C7B581(vVar2, &uVar4, 0, 0);
		vVar3 = { vVar2.x, vVar2.y, uVar4 };
	}
	return vVar3;
}

void func_131()
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0;
			while (iVar0 < Local_101)
			{
				unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		iLocal_102 = 1;
		iLocal_104 = unk_0x1C0640BA9A7327B3();
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = -1;
			iLocal_107 = -1;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 1;
	}
}

void func_132()
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_133()
{
	int iVar0;
	
	if (iLocal_149 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_113)
		{
			if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_23)
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0xD09DF7101876AFB8(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0)
			{
				func_134(&(Local_113[iVar0 /*33*/].f_25));
				Local_113[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_134(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = true;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = iLocal_149;
	func_369();
	switch (iLocal_149)
	{
		case 0:
			func_272();
			break;
		
		case 1:
			func_269();
			break;
		
		case 2:
			func_224();
			break;
		
		case 3:
			func_207();
			break;
		
		case 4:
			func_206();
			break;
		
		case 5:
			func_206();
			break;
		
		case 6:
			func_206();
			break;
		
		case 7:
			func_202();
			break;
		
		case 8:
			func_181();
			break;
		
		case 9:
			func_149();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0;
	}
	if (bLocal_152)
	{
		func_136(0);
	}
}

void func_136(char* sParam0)
{
	while (!unk_0xC92DB9682A650680("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (unk_0x2EBF5002C6B6A06C(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_138(sLocal_151);
	while (!func_137())
	{
		func_28(2, 0);
	}
	func_443(1);
}

int func_137()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_138(char* sParam0)
{
	func_148(sParam0);
	func_139(0);
}

void func_139(int iParam0)
{
	int iVar0;
	
	if (Global_111638.f_9080 || func_147(0))
	{
		iVar0 = func_146();
		if (!func_140(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_145();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_144(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_141(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_143(Global_111638.f_18528[iVar0], &vVar2, &fVar3))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_142(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_142(var uParam0)
{
	*uParam0 = -15;
}

int func_143(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_144(int iParam0, bool bParam1)
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

void func_145()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_147(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_148(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_149()
{
	func_176(46, 52);
	func_166(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_166(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 12, 0, 0, 1, 0, 1, 0);
	func_154();
	if (func_153(1, 49))
	{
		func_150();
	}
}

void func_150()
{
	unk_0x790015DC92C918E2();
	func_151(0, 0);
	func_443(0);
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_147(0) && Global_76868.f_1 == 1) && func_152(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_147(0))
	{
		iVar0 = func_146();
		iVar1 = Global_89496[iVar0 /*5*/];
		uVar2 = Global_76891.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 4);
		unk_0x5D96D8530B3D0904(&Global_76870, 1);
		Global_76886 = uVar2;
		Global_76887 = unk_0x1C0640BA9A7327B3();
	}
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, true, 0))
			{
				if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
				{
					unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
				}
			}
		}
		else if ((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, true, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
			{
				unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
			}
		}
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, true, 0))
	{
		if (vVar0.z < 50f)
		{
			if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, true, 0))
			{
				if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
				{
					unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
				}
			}
		}
		else if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, true, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
			{
				unk_0x6DAD3F6F3CBD9FAA(unk_0x16F2683693E537C9());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						unk_0x4701A9E9B58A4878(2f);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0x5DACDD1CBCA7DFB5(unk_0xD803B885F5E47A62(), 0))
					{
						if (unk_0x91E3F625EF57450D(0))
						{
							func_157("USESPEC_KM", -1);
						}
						else
						{
							func_157("USESPEC", -1);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMFLE", -1);
							Local_389[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_65() && !unk_0xD17F06053799A7CA())
					{
						func_7("FRMLK", 7500, 1);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x1C0640BA9A7327B3() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_389[iParam0 /*4*/].f_3)
							{
								if (unk_0x91E3F625EF57450D(0))
								{
									func_157("FRMSTLTH_KM", -1);
								}
								else
								{
									func_157("FRMSTLTH", -1);
								}
								Local_389[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x0A4C9A3D51EAE31F(211) != 0)
							{
								Local_389[iParam0 /*4*/].f_3 = unk_0x1C0640BA9A7327B3() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0xD17F06053799A7CA() && !unk_0xFEBC1E4EC9E001F0())
									{
										if (!func_65())
										{
											if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
											{
												func_157("FRMSHOT", -1);
												Local_389[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					unk_0xDC5B2F9D0CCE3A10(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMPET2", -1);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_65())
							{
								func_156("FRMTRL", 7500, 1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0, 24))
									{
										unk_0xA37A90C62806D848(1);
									}
								}
							}
							if (!unk_0xFEBC1E4EC9E001F0())
							{
								func_157("FRMTRL2", -1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_65())
								{
									if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
									{
										if (!unk_0xE4EDC4B0E92C078B(iLocal_178))
										{
											unk_0x790015DC92C918E2();
											func_7("FRMSHP", 7500, 1);
											iLocal_178 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_73(unk_0x16F2683693E537C9(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										unk_0x790015DC92C918E2();
										if (unk_0xE4EDC4B0E92C078B(iLocal_178))
										{
											unk_0x142CC44DB769B57E(&iLocal_178);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0x8BC9595FD2792B5D("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_93(37))
							{
								if (func_90("FRMIGN", 0, 0))
								{
									unk_0x790015DC92C918E2();
								}
							}
							if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
							{
								Local_389[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_157("FRMMISS", -1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_93(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_93(48))
					{
						unk_0x790015DC92C918E2();
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_157(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_386 = false;
	iLocal_387 = 0;
	if (func_159(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_159(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_159(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_159(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_162(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_162(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_93(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 1;
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = unk_0x1C0640BA9A7327B3() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_65())
								{
									Local_390[iParam0 /*7*/].f_4 = unk_0x1C0640BA9A7327B3() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_165(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(8000, 14000));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = func_18(15);
							Local_390[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_390[iParam0 /*7*/].f_4 != -1 && Local_390[iParam0 /*7*/].f_5 != -1)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_165(&iVar1, 2, 1))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = unk_0x09AC81E49EA267F7(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_113)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 2)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar2 /*33*/]))
									{
										if (unk_0x4734A6196B611C3B(Local_113[iVar2 /*33*/], 0))
										{
											if (unk_0x25176BBC501E783C(Local_113[iVar2 /*33*/], unk_0x16F2683693E537C9()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_165(&(Local_390[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_88("ONEILGUARD4") || func_88("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x1C0640BA9A7327B3() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_113)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0x16F2683693E537C9(), Local_113[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == -1)
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = unk_0x1C0640BA9A7327B3() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_113)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 8)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 9)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_65())
							{
								if (unk_0x69DF961355195C3C(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], unk_0x16F2683693E537C9(), 1) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0xEB0A515D699A7E90(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0x69DF961355195C3C(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0xA45992A6CE82FB43(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0x8B4C4CA774181102(5f, 8f, 4);
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = 2500;
							Local_390[iParam0 /*7*/].f_5 = 0;
							Local_390[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - floor((timestep() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0)
							{
								Local_390[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_390[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3 = 1;
									Local_390[iParam0 /*7*/].f_4 = (12000 + unk_0x09AC81E49EA267F7(3000, 5000));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0x16F2683693E537C9(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0x16F2683693E537C9(), Local_113[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
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
	
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 1;
		Local_385[iParam0 /*10*/].f_3 = 0;
		Local_385[iParam0 /*10*/].f_6 = 0;
		Local_385[iParam0 /*10*/].f_4 = 0;
		Local_385[iParam0 /*10*/].f_7 = 0;
		Local_385[iParam0 /*10*/].f_8 = 0;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0 || Local_385[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x8BC9595FD2792B5D("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_73(unk_0x16F2683693E537C9(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[11 /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[10 /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[12 /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[12 /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[13 /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[13 /*33*/]));
						}
						if (unk_0xC844350D5D58C99A(Local_113[14 /*33*/]))
						{
							unk_0xEBA53F35D0085654(&(Local_113[14 /*33*/]));
						}
						unk_0x71199B01895C6202(joaat("ig_janet"));
						unk_0x71199B01895C6202(joaat("ig_janet"));
						unk_0x71199B01895C6202(joaat("ig_old_man1a"));
						unk_0x71199B01895C6202(joaat("ig_old_man2"));
						unk_0x71199B01895C6202(joaat("ig_taocheng"));
						unk_0x71199B01895C6202(joaat("ig_taostranslator"));
						unk_0x8D17794CE3273D70("misschinese2_crystalmaze");
						unk_0x8D17794CE3273D70("MISSChinese2_crystalMazeMCS1_IG");
						unk_0x8D17794CE3273D70("missrampageintrooutro");
						if (iLocal_379 != -1)
						{
							if (unk_0x49083FDB78AC0509(iLocal_379))
							{
								unk_0xDDABC98CFF1A4C60(iLocal_379);
							}
						}
						unk_0xEFED0CD6E25037B9();
						func_31(26, 1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0xE3934829A331AF92("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_73(unk_0x16F2683693E537C9(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0xC83E7A5E408DF68C(1);
						unk_0xFF42993F8A095C58(1);
						unk_0x0CDF80057190977A("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
					{
						if (func_175(6, 6) < 2)
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, true, 0))
							{
								if (unk_0xD1960163A3042274(Local_113[12 /*33*/], 150319005) == 7)
								{
									unk_0x0C8C0C840C2D1AD2(Local_113[13 /*33*/], unk_0x16F2683693E537C9(), -1, 0, 2);
									unk_0x0C8C0C840C2D1AD2(Local_113[14 /*33*/], unk_0x16F2683693E537C9(), -1, 0, 2);
									unk_0x0C8C0C840C2D1AD2(Local_113[12 /*33*/], unk_0x16F2683693E537C9(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_73(unk_0x16F2683693E537C9(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							iVar4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
							if (unk_0xDF1306B443CD3D15(iVar4, 0))
							{
								if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar4)) || unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0x9C66D99E63E8E24C(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0xEF3C30F70D2ED135(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_385[iParam0 /*10*/].f_6 = 1;
						unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 321, 1);
						if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427("walkinterruptible")))
						{
							unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -1871534317, 0, 0, 0);
							if (func_174())
							{
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 1)
					{
						unk_0x8D17794CE3273D70("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/])) && !unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								unk_0x6DF7BF67E86AAE86(Local_113[12 /*33*/], iLocal_154);
								unk_0x6DF7BF67E86AAE86(Local_113[13 /*33*/], iLocal_154);
								unk_0x6DF7BF67E86AAE86(Local_113[14 /*33*/], iLocal_154);
								unk_0xAFF39FB306F8E232(Local_113[12 /*33*/], 17, true);
								unk_0xAFF39FB306F8E232(Local_113[13 /*33*/], 17, true);
								unk_0xAFF39FB306F8E232(Local_113[14 /*33*/], 17, true);
								unk_0xE910A68AA670B4AA(Local_113[12 /*33*/]);
								unk_0xE910A68AA670B4AA(Local_113[13 /*33*/]);
								unk_0xE910A68AA670B4AA(Local_113[14 /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]) || unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/])) || unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[12 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[13 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								if (unk_0x688A90832774AB83(Local_113[14 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[12 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[12 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[12 /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[13 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[13 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[13 /*33*/]));
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
							{
								unk_0xF3268524E9BE6D6E(Local_113[14 /*33*/], unk_0x16F2683693E537C9(), 100f, -1, 0, 0);
								unk_0xFADC0A217229F6B5(Local_113[14 /*33*/], true);
								unk_0x6DAD7906B73F064D(&(Local_113[14 /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x0CDF80057190977A("chinese2_explosion_cutscene");
							unk_0xE96F19797E59AB06();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_166 == 1)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 2)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 3)
							{
								if (unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0x23239EF74F22427E())
							{
								Local_385[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
								{
									unk_0xDA55CDFB97015579(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) + Vector(0f, unk_0x79833B02DBD2A244(0f, 4f), unk_0x79833B02DBD2A244(0f, 4f)), 16, 1.5f, 1, 0, 1f, 0);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(250, 520));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = 0;
							while (iVar5 < vLocal_384.x)
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0x681F21BF9F7B449B(-1, vLocal_384[iVar5 /*3*/], 5f))
									{
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_7), iVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0)
										{
											Local_385[iParam0 /*10*/].f_6 = unk_0x1C0640BA9A7327B3() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < vLocal_384.x)
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0xDA55CDFB97015579(vLocal_384[iVar5 /*3*/], 16, 1.5f, 1, 0, 1f, 0);
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_385[iParam0 /*10*/].f_8 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 1;
									Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_105(iVar6, 20, 0, 0);
					func_105(iVar7, 20, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xBCB06D7034D8B667("RADIO_01_CLASS_ROCK");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
								if (unk_0x3133F8A3F91571F1())
								{
									iLocal_144 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									if (unk_0xDF1306B443CD3D15(iLocal_144, 0))
									{
										if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0x13896FDECC859926("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0xC92DB9682A650680("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0))
								{
									if (unk_0x2F6DBDA9ACD7D3AB(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + unk_0x1C0640BA9A7327B3() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0))
								{
									if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
									{
										if (unk_0x0931E02856C8B6A4() != 6 && unk_0x0931E02856C8B6A4() != 0)
										{
											if (unk_0x2D4F0B9A42E7273F() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_88("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_88("CHI2_rad"))
							{
								if (func_74(iLocal_144))
								{
									if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0))
									{
										if (!unk_0x06F8112AA79C53D9(0, 85))
										{
											if (unk_0x0931E02856C8B6A4() != 6)
											{
												if (iLocal_177 == -1)
												{
													iLocal_177 = unk_0xD68EA767274B7444();
													unk_0x4D7F4CC43D4D0DE3(iLocal_177, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!unk_0x06F8112AA79C53D9(0, 85))
							{
								if (unk_0xC92DB9682A650680("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0x8BC9595FD2792B5D("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_74(iLocal_144))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_144, 0))
								{
									if (unk_0x0931E02856C8B6A4() == 6)
									{
										if (unk_0x2D4F0B9A42E7273F() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0x16F2683693E537C9(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					unk_0x51B096AAC60548C1(1f);
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 2, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
					unk_0x34D79252800B23FF(5);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_96(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_93(49))
					{
						if (iLocal_179 != 0)
						{
							unk_0x25BB71BA267FE042(iLocal_179);
						}
						iLocal_179 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
							{
								Local_385[iParam0 /*10*/].f_7 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_385[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_385[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_385[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_385[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = -1;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0x06F8112AA79C53D9(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_7 == -1)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
										}
										if (iLocal_93 == 0)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 2f));
										}
										else if (iLocal_93 < 30 && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 1.5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + timestep());
										}
										iVar11 = floor((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iVar10, iVar11, 0);
										}
										else
										{
											unk_0x155F8B27DA5061F5(unk_0x16F2683693E537C9(), iVar10, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_173());
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					unk_0xAFC04933E85FEE35("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_172(1);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_172(0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0xC83E7A5E408DF68C(3);
					unk_0xFF42993F8A095C58(3);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0xC844350D5D58C99A(Local_113[4 /*33*/].f_20))
							{
								unk_0xEEEE2E5FA6F78DF0(&(Local_113[4 /*33*/].f_20));
							}
							if (unk_0xC844350D5D58C99A(Local_113[5 /*33*/].f_20))
							{
								unk_0xEEEE2E5FA6F78DF0(&(Local_113[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_170)
							{
								if (unk_0xC844350D5D58C99A(iLocal_170[iVar12]))
								{
									unk_0xEEEE2E5FA6F78DF0(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
							unk_0x71199B01895C6202(joaat("prop_ld_can_01"));
							unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xEB6A8945D1AC98A1(Local_113[23 /*33*/]))
							{
								if (unk_0xC844350D5D58C99A(iLocal_373))
								{
									unk_0xEEEE2E5FA6F78DF0(&iLocal_373);
									unk_0x2914827AC2790D54(joaat("weapon_sawnoffshotgun"));
									Local_385[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
					{
						if (!unk_0x65636D4556D82155(Local_113[11 /*33*/]))
						{
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
								{
									unk_0xEB0A515D699A7E90(Local_113[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_385[iParam0 /*10*/].f_7 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
							unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
							unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
							if (iLocal_379 == -1 || (iLocal_379 != -1 && !unk_0x49083FDB78AC0509(iLocal_379)))
							{
								iLocal_379 = unk_0x544B74C043CE9948(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0xB4AE0788C1587752("misschinese2_crystalmaze") && unk_0xB87F6CF6E5628C67(joaat("ig_taocheng"))) && unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator")))
							{
								if (!unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
								{
									Local_113[11 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0f, 1, true);
									unk_0x6DF7BF67E86AAE86(Local_113[11 /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[11 /*33*/], false);
								}
								else if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
								{
									unk_0x6DF7BF67E86AAE86(Local_113[11 /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[11 /*33*/], false);
								}
								if (!unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
								{
									Local_113[10 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0f, 1, true);
									unk_0x6DF7BF67E86AAE86(Local_113[10 /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[10 /*33*/], false);
									unk_0x9A28E8CB86CD4694(Local_113[10 /*33*/], 1, 0, 1, false);
								}
								else if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
								{
									unk_0x6DF7BF67E86AAE86(Local_113[10 /*33*/], iLocal_118);
									unk_0x25C5402CC10F76CD(Local_113[10 /*33*/], false);
								}
								if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
								{
									if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0x915804B434753CBD(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
								{
									if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 1);
									}
									unk_0x915804B434753CBD(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]) && !unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
							{
								unk_0x64F9F278AB9DCA2C(Local_113[10 /*33*/], 0, 0, 0, 0);
								unk_0x11AD11297DC58CC7(Local_113[11 /*33*/], 1);
								unk_0x11AD11297DC58CC7(Local_113[10 /*33*/], 1);
								if (!unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									unk_0x915804B434753CBD(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x915804B434753CBD(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 1);
								}
								unk_0x4E885A246A9D983A(Local_113[11 /*33*/], 118, false);
								unk_0x4E885A246A9D983A(Local_113[11 /*33*/], 208, true);
								unk_0x4E885A246A9D983A(Local_113[10 /*33*/], 118, false);
								unk_0x4E885A246A9D983A(Local_113[10 /*33*/], 208, true);
								Local_385[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
							{
								if (!unk_0x869EFD0BC0868856(Local_113[11 /*33*/]))
								{
									if (unk_0x69DF961355195C3C(Local_385[iParam0 /*10*/].f_7))
									{
										if (unk_0xA45992A6CE82FB43(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 1);
											if (unk_0x09AC81E49EA267F7(0, 3) < 2)
											{
												unk_0x915804B434753CBD(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
												{
													if (!unk_0x869EFD0BC0868856(Local_113[10 /*33*/]))
													{
														if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0x915804B434753CBD(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0x915804B434753CBD(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
												{
													if (!unk_0x869EFD0BC0868856(Local_113[10 /*33*/]))
													{
														if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0))
														{
															unk_0x915804B434753CBD(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0x915804B434753CBD(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0xEFC3DF9D33E248D8(Local_385[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
							{
								if (((unk_0xB87D13D0C064E9D1(Local_113[10 /*33*/], unk_0x16F2683693E537C9(), 1) || unk_0x869EFD0BC0868856(Local_113[10 /*33*/])) || unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/])) || (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]) && unk_0xD1960163A3042274(Local_113[10 /*33*/], 1785177548) == 2))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 0))
									{
										unk_0xA3BF0AA5A2608191(Local_113[10 /*33*/]);
										func_99();
										unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 30f, 20000, 0, 0);
										unk_0x8BE3D040D15AEA1D(0, -1);
										func_98(&(Local_113[10 /*33*/]), 0);
										unk_0x5D96D8530B3D0904(&(Local_385[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
							{
								if (((unk_0xB87D13D0C064E9D1(Local_113[11 /*33*/], unk_0x16F2683693E537C9(), 1) || unk_0x869EFD0BC0868856(Local_113[11 /*33*/])) || unk_0xEAE0D21A50E6C7F4(Local_385[iParam0 /*10*/].f_8, 1)) || (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]) && unk_0xD1960163A3042274(Local_113[11 /*33*/], 1785177548) == 2))
								{
									unk_0xD458AC1C1D29C3B4(Local_113[11 /*33*/], 0, 0);
									if (!unk_0x869EFD0BC0868856(Local_113[11 /*33*/]))
									{
									}
								}
							}
							if (func_73(unk_0x16F2683693E537C9(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (unk_0xC844350D5D58C99A(Local_113[11 /*33*/]) && unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
								{
									unk_0xEBA53F35D0085654(&(Local_113[11 /*33*/]));
									unk_0xEBA53F35D0085654(&(Local_113[10 /*33*/]));
								}
								unk_0x71199B01895C6202(joaat("ig_taocheng"));
								unk_0x71199B01895C6202(joaat("ig_taostranslator"));
								unk_0x8D17794CE3273D70("misschinese2_crystalmaze");
								if (iLocal_379 != -1)
								{
									if (unk_0x49083FDB78AC0509(iLocal_379))
									{
										unk_0xDDABC98CFF1A4C60(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_73(unk_0x16F2683693E537C9(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
						{
							if (unk_0xD1960163A3042274(Local_113[11 /*33*/], 150319005) != 1)
							{
								unk_0x0C8C0C840C2D1AD2(Local_113[11 /*33*/], unk_0x16F2683693E537C9(), 4000, 2096, 2);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
						{
							if (unk_0xD1960163A3042274(Local_113[10 /*33*/], 150319005) != 1)
							{
								unk_0x0C8C0C840C2D1AD2(Local_113[10 /*33*/], unk_0x16F2683693E537C9(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_382 = 0;
					iVar13 = 0;
					while (iVar13 < Local_113)
					{
						if (unk_0xC844350D5D58C99A(Local_113[iVar13 /*33*/]))
						{
							if (unk_0xEB6A8945D1AC98A1(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == 392730790 || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0xF71162D1C14C71E7(Local_113[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0)
					{
					}
					if (iLocal_382 > 1)
					{
						func_171(150);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					unk_0x8B4C4CA774181102(4f, 15f, 4);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_93(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (unk_0x762119754C50557A(uLocal_176))
					{
						unk_0x40B7230FD4C59AA2(uLocal_176);
					}
					iVar14 = 0;
					unk_0x5D96D8530B3D0904(&iVar14, 3);
					unk_0x5D96D8530B3D0904(&iVar14, 8);
					unk_0x5D96D8530B3D0904(&iVar14, 1);
					if (!unk_0x762119754C50557A(uLocal_176))
					{
						uLocal_176 = unk_0xA6FF0828D17CF374(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, 0);
						unk_0x201D37E7F281A9D1(uLocal_176, "V_8_BasementRm");
						iLocal_178 = func_170(uLocal_176);
						unk_0xDC5B2F9D0CCE3A10(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_172(1);
						unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_STEALTH");
						unk_0xB975E4541DDAB1F5(1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
					unk_0xDD465543E2028AEA("move_m@gangster@var_e");
					unk_0xDD465543E2028AEA("move_m@gangster@var_f");
					unk_0xDD465543E2028AEA("move_m@gangster@generic");
					unk_0x8D17794CE3273D70("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = unk_0x1C0640BA9A7327B3() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x1C0640BA9A7327B3() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113)
								{
									if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0x4D570FEF9D230CE7(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_105(Local_385[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0x6DF7BF67E86AAE86(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											func_134(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_385[iParam0 /*10*/].f_7 = 0;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x3D1053F9EB43B7AD(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
							{
								unk_0xEBA53F35D0085654(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_113)
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar15 /*33*/]))
						{
							if (unk_0xB0A50BC6EDB99CA9(Local_113[iVar15 /*33*/]) != unk_0x12AB0310C2281427("V_8_BasementRm"))
							{
								func_105(iVar15, 27, 0, 0);
								Local_113[iVar15 /*33*/].f_1 = 5;
								Local_119[iVar15 /*24*/].f_3 = 7;
								Local_113[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_385[iParam0 /*10*/].f_7 != -1)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_385[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || func_93(9))
					{
						unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 1, -1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(12))
						{
							unk_0x8BC9595FD2792B5D("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(12))
					{
						unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_93(9) || (!unk_0xEB6A8945D1AC98A1(Local_113[8 /*33*/]) && unk_0x4734A6196B611C3B(Local_113[8 /*33*/], 0))) || (!unk_0xEB6A8945D1AC98A1(Local_113[9 /*33*/]) && unk_0x4734A6196B611C3B(Local_113[9 /*33*/], 0)))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[8 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[8 /*33*/], 45);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[9 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[9 /*33*/], 45);
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_93(9))
					{
						Local_385[iParam0 /*10*/].f_7 = 0;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_93(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_162(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113)
									{
										if (!unk_0xEB6A8945D1AC98A1(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x9FA191B317572861(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[23 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = unk_0xE9744DB7B8CA6965(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									unk_0xC90224D9E95E5E3A(Local_385[iParam0 /*10*/].f_7, 1);
									unk_0x915804B434753CBD(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x523BCC9DC80CD82F(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xB87F6CF6E5628C67(joaat("blazer")))
							{
								iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
								unk_0xB9FD7450C0DAB575(iLocal_146, 1084227584);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
					func_169(0);
					func_167();
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_93(29))
							{
								if (unk_0xE4EDC4B0E92C078B(iLocal_178))
								{
									unk_0x142CC44DB769B57E(&iLocal_178);
								}
								func_12(0);
								if (func_90("FRMFLC", 0, 0))
								{
									unk_0x790015DC92C918E2();
								}
								func_10(157, 0);
								unk_0x8B4C4CA774181102(3f, 10f, 4);
								if (iLocal_167 == 0)
								{
									iLocal_167 = unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_93(29))
							{
								func_9(158, (iLocal_167 - unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"))), 1);
								iLocal_180 = unk_0x4B72871A3BE7B474(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 20f, unk_0x6B7EC7B5B6B57364(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_180 != 0)
								{
									if (unk_0xE4EDC4B0E92C078B(iLocal_178))
									{
										unk_0x142CC44DB769B57E(&iLocal_178);
									}
									iLocal_178 = func_13(iLocal_180);
									func_12(1);
									func_11(0, 157);
								}
								Local_385[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_385[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x29398344B9E5B8A7("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x1C2E18E9C63BEB77("arm2_30"))
							{
								if (func_93(29))
								{
									unk_0xA19A5ADE229B4734("arm2_30", 1, 1f, 0.5f);
									unk_0x721075C23013EA5F("arm2_30", 2);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_93(29))
							{
								unk_0xA19A5ADE229B4734("arm2_30", 0, 1f, 0.5f);
								Local_385[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == 0)
						{
							if (func_73(unk_0x16F2683693E537C9(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								unk_0x3E48C1351341DC99(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					unk_0xEB819BD1E585E9CB(iLocal_171, "FarmhouseFire_Ignite", vLocal_172, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0x8BC9595FD2792B5D("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE", false, -1);
							unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(4);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_73(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], unk_0x16F2683693E537C9(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], true);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], true);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar16 /*33*/]))
								{
									unk_0xFADC0A217229F6B5(Local_113[iVar16 /*33*/], true);
									unk_0x6DAD7906B73F064D(&(Local_113[iVar16 /*33*/]));
								}
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								Local_113[iVar16 /*33*/] = 0;
								if (unk_0xDF1306B443CD3D15(iLocal_145, 0))
								{
									unk_0x046C362CF15F1935(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_107(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0x298903DD96203C2C(Local_113[24 /*33*/], 100);
						if (!unk_0xEB6A8945D1AC98A1(Local_113[15 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[15 /*33*/], 100);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[16 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[16 /*33*/], 100);
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[17 /*33*/]))
						{
							unk_0x298903DD96203C2C(Local_113[17 /*33*/], 100);
						}
						unk_0x6C3AE6E278DB3D0E(Local_113[24 /*33*/], unk_0x16F2683693E537C9(), 0, 16);
						unk_0x26A6B1686E33113F(Local_113[24 /*33*/], 1);
						unk_0xD458AC1C1D29C3B4(Local_113[24 /*33*/], 200, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == -1)
			{
				Local_385[iParam0 /*10*/].f_3 = 1;
				Local_385[iParam0 /*10*/].f_6 = 0;
				Local_385[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			unk_0x7800CEC090C01D4D(Local_109[iVar0 /*5*/], 4f);
			unk_0x536F1BE96C726C4B(Local_109[iVar0 /*5*/], 2f, 1, 0, 0, false);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/]))
				{
					vVar2 = { unk_0x68F4C0EC296D3901(Local_113[iVar1 /*33*/], false) };
					if (vdist2(vVar2, Local_109[iVar0 /*5*/]) < 2f && vVar2.z > 43.9f)
					{
						unk_0xEBA53F35D0085654(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_168(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_169(bool bParam0)
{
	int iVar0;
	
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_108 = 0;
	iLocal_108 = 0;
	iLocal_102 = 0;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		unk_0x58B5D6A0F1D7754D(Local_109[iVar0 /*5*/], 1f);
		if (!unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
		{
			if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				unk_0x54B31D18C3F36EB7(Local_109[iVar0 /*5*/].f_3, 1);
				unk_0x516E63E474722206(Local_109[iVar0 /*5*/].f_3, 0.4f);
				unk_0xF2D30B8ACAF12A39(Local_109[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0);
				}
				unk_0x61755AC17D8F538E(Local_109[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { unk_0xAC14F6E4B17D7835(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0x7F010F50CE03A8AF(Local_109[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_170(var uParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(uParam0);
	unk_0x516E63E474722206(iVar0, func_6(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_61513 = 0;
	if (!Global_61737[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1 /*9*/].f_1 = 1;
			Global_73608[iVar1 /*9*/].f_2 = 0f;
			if (Global_73608[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_172(bool bParam0)
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

var func_173()
{
	var uVar0;
	
	return uVar0;
}

int func_174()
{
	if (((((unk_0x0DED1C1B8250FA57(2, 30) != 127 || unk_0x0DED1C1B8250FA57(2, 31) != 127) || unk_0x06F8112AA79C53D9(2, 24)) || unk_0x06F8112AA79C53D9(2, 25)) || unk_0x0DED1C1B8250FA57(2, 2) != 127) || unk_0x0DED1C1B8250FA57(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_388)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 1;
				Local_388[iVar1 /*8*/].f_2 = 0;
				Local_388[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_388)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 2:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0)
					{
						if (func_90("FRMCHSE_1", 0, 0))
						{
							Local_388[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_90("FRMCHSE_1", 0, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_162(7))
					{
						if (unk_0xD15F544473A95FE8(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || unk_0xD3DCEC81D13AAFB1(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_388[iVar3 /*8*/].f_5 = func_18(8);
							Local_388[iVar3 /*8*/].f_6 = func_18(9);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_388[iVar3 /*8*/].f_5 != -1 && Local_388[iVar3 /*8*/].f_6 != -1)
							{
								if (unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0xB0A50BC6EDB99CA9(unk_0x16F2683693E537C9()) == unk_0x12AB0310C2281427("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0 && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (func_93(12))
				{
					if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, true, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_388[iVar3 /*8*/].f_5 != -1)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0xC844350D5D58C99A(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0xEB6A8945D1AC98A1(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_73(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_113)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_113[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_113;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_97(10, 0);
							}
							else
							{
								func_97(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_93(9))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_113)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 1)
							{
								if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_388[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_113;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							iVar9 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
							if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar9)) || unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar9)))
							{
								if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_73(unk_0x16F2683693E537C9(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_73(unk_0x16F2683693E537C9(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[15 /*33*/]))
					{
						if (func_73(Local_113[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[16 /*33*/]))
					{
						if (func_73(Local_113[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[17 /*33*/]))
					{
						if (func_73(Local_113[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!unk_0xEB6A8945D1AC98A1(Local_113[4 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[4 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[5 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[5 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xEB6A8945D1AC98A1(Local_113[7 /*33*/]) && unk_0x0E0E6175453415CB(Local_113[7 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = unk_0x1C0640BA9A7327B3() + 8000;
						break;
					
					case 1:
						if (unk_0xDF1306B443CD3D15(iLocal_145, 0))
						{
							if (func_96(unk_0x68F4C0EC296D3901(iLocal_145, true), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + floor((timestep() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 1500)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0x1C0640BA9A7327B3() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0x762119754C50557A(uLocal_176))
						{
							if (unk_0x797C48AACDB248B0(uLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0x762119754C50557A(uLocal_176))
						{
							if (!unk_0x797C48AACDB248B0(uLocal_176))
							{
								if (unk_0x681F21BF9F7B449B(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_388[iVar3 /*8*/].f_2 = 0;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0:
						if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
						{
							Local_388[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_388[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_109[0 /*5*/].f_4 == 1)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_388[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0x06F8112AA79C53D9(0, 24))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0x6AD0ABEEDDABA1F8(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!unk_0x6AD0ABEEDDABA1F8(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !unk_0x6AD0ABEEDDABA1F8(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 17)
							{
								func_97(37, 1);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_178(17))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_73(unk_0x16F2683693E537C9(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_73(unk_0x16F2683693E537C9(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_177())
				{
					if (!func_180())
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = unk_0x1C0640BA9A7327B3() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0x1C0640BA9A7327B3() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_153(1, 49))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(unk_0x16F2683693E537C9(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()
{
	if (iLocal_102 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (unk_0xA4F4A1E4DDB4728B(Local_109[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	return iLocal_100;
}

int func_180()
{
	int iVar0;
	
	iVar0 = (Local_109 - 1);
	while (iVar0 >= 0)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (unk_0xA4F4A1E4DDB4728B(Local_109[iVar0 /*5*/], 0.6f) > 0)
			{
				vLocal_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x81CF97025EC59496();
	if ((func_201() && iLocal_150 > 0) && unk_0x1C0640BA9A7327B3() > iLocal_159)
	{
		while (!unk_0x757EF87A33649210())
		{
			unk_0x53491B90E4FD0E56(1000);
			func_28(28, 1);
		}
		iLocal_577 = 0;
		while (!func_200())
		{
			func_28(32322, 1);
		}
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2474.97f, 4946.047f, 44.0297f, 1, 0, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 230.6937f);
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
		unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0, -1, 0);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
		unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
		func_192(0, 1, 1, 0, 0, 0);
		unk_0x5CAFA5DD13658DFE(0);
		unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x790015DC92C918E2();
		unk_0xBA4AFD9D5C7A6F8D("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_158 = 0;
		iLocal_163 = iLocal_163;
		iLocal_163 = 99;
		iLocal_150 = 99;
		iLocal_139 = 3;
		fLocal_138 = 10000f;
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		unk_0xE96F19797E59AB06();
		unk_0xBF40D896CA4BDBE7();
		bLocal_165 = true;
	}
	unk_0x3FC8DBCC154CA56B();
	switch (iLocal_150)
	{
		case 0:
			func_200();
			bLocal_165 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0x562F77A7F33D2E46("CHI_2_POUR_GAS"))
			{
				unk_0x8910D3D58E0132B8("CHI_2_POUR_GAS");
			}
			if (unk_0x562F77A7F33D2E46("CHI_2_SHOOT_GAS"))
			{
				unk_0x8910D3D58E0132B8("CHI_2_SHOOT_GAS");
			}
			unk_0x8BC9595FD2792B5D("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = unk_0x1C0640BA9A7327B3() + 1000;
			unk_0x536F1BE96C726C4B(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, false);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
			func_87(0);
			iLocal_392 = 0;
			func_87(1);
			unk_0x790015DC92C918E2();
			func_191(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2455.941f, 4952.801f, 44.112f, 1, 0, 0, 1);
			}
			unk_0x9A82EEAF6CA12AEE(1f);
			unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
			unk_0xDD465543E2028AEA("move_m@gangster@var_e");
			unk_0xDD465543E2028AEA("move_m@gangster@var_f");
			unk_0xDD465543E2028AEA("move_m@gangster@generic");
			unk_0x8D17794CE3273D70("misschinese2_bank5");
			unk_0x8D17794CE3273D70("misschinese2_bank1");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
			unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
			unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
			unk_0x71199B01895C6202(joaat("a_m_y_methhead_01"));
			unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
			unk_0x71199B01895C6202(joaat("burrito"));
			unk_0x71199B01895C6202(joaat("prop_cs_beer_bot_01"));
			unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_113)
			{
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/]))
				{
					unk_0xEBA53F35D0085654(&(Local_113[iVar1 /*33*/]));
				}
				if (unk_0xC844350D5D58C99A(Local_113[iVar1 /*33*/].f_20))
				{
					unk_0xF690C84DADBB3551(&(Local_113[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		
		case 1:
			if (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749())
			{
				unk_0x82E51BCA72537B6C(1000);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0;
		iVar2 = 0;
		while (iVar2 < Local_137)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_136)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_137)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0;
			Local_137[iVar2 /*18*/] = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			Local_137[iVar2 /*18*/].f_3 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 2) };
			Local_137[iVar2 /*18*/].f_14 = unk_0x86CC98177DFF41EC(unk_0xC4648AFC94BA9ACC());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0;
			Local_137[iVar2 /*18*/].f_6 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			Local_137[iVar2 /*18*/].f_9 = { unk_0x17D61C69BA58F815(unk_0xC4648AFC94BA9ACC(), 2) };
			Local_137[iVar2 /*18*/].f_15 = unk_0x86CC98177DFF41EC(unk_0xC4648AFC94BA9ACC());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		bLocal_134 = false;
		iLocal_174 = 0;
		unk_0x536F1BE96C726C4B(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, false);
		func_190();
	}
	if (!bLocal_134)
	{
		if (unk_0x23239EF74F22427E())
		{
			unk_0x44E5AE27B5A88FC7(5, 5, 5, 5);
			unk_0x9E020FDB27CA9201();
			iLocal_139 = -1;
			unk_0x5CAFA5DD13658DFE(0);
			func_192(1, 1, 1, 0, 0, 0);
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			bLocal_134 = true;
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/] = 0;
			Local_136[0 /*6*/].f_4 = 0;
			Local_136[0 /*6*/].f_5 = 0;
			Local_136[1 /*6*/].f_4 = 0;
			Local_136[1 /*6*/].f_5 = 0;
			Local_136[2 /*6*/].f_4 = 0;
			Local_136[2 /*6*/].f_5 = 0;
			Local_136[3 /*6*/].f_4 = 0;
			Local_136[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			unk_0x7B1292B738DF9FAF();
			unk_0x420FE818E70BB523(4);
			switch (iLocal_166)
			{
				case 3:
					settimera(0);
					break;
				
				case 2:
					Local_136[0 /*6*/] = 1;
					Local_136[1 /*6*/] = 1;
					settimera(10900);
					iLocal_139 = 2;
					fLocal_138 = 10000f;
					break;
				
				case 1:
					Local_136[0 /*6*/] = 1;
					settimera(6400);
					iLocal_139 = 1;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0;
		}
	}
	if (bLocal_134)
	{
		unk_0x0AEDBE1D61D150AF(to_float(timera()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + timestep());
		if (iLocal_139 == -1 || ((iLocal_139 != -1 && iLocal_139 < 4) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_13 / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 3)
			{
				if (unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
				{
					iLocal_155 = unk_0x92B061D59B9B540A(964613260, 1);
					iLocal_156 = unk_0xE9744DB7B8CA6965(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					unk_0x93E9ED66DAB9FBE3(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
					func_190();
					unk_0x98AB0CC3E937A146(1);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 4)
			{
				unk_0x5CAFA5DD13658DFE(0);
				iLocal_155 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_14, 1, 2);
				unk_0x86F44313DFA8F00C(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_15, floor(Local_137[iLocal_139 /*18*/].f_12), Local_137[iLocal_139 /*18*/].f_16, 1, 2);
				unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
				if (iLocal_139 < 2)
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 0);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				unk_0x5CAFA5DD13658DFE(0);
				unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
				if (func_188() && !bLocal_165)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
					unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x98AB0CC3E937A146(0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
				func_187(0, 0, 1, 0);
				unk_0x8910D3D58E0132B8("CHI_2_GAS_TRAIL_FIRE");
				unk_0xCADC8175C61F28E5(uLocal_173, 9);
				unk_0x9A82EEAF6CA12AEE(1f);
				unk_0xF59BE6DDBCFD2F1C();
				if (unk_0x757EF87A33649210())
				{
					while (unk_0xD92EF3526CDA283F(uLocal_173) != 10)
					{
						func_28(29, 1);
					}
					unk_0x82E51BCA72537B6C(1000);
				}
				unk_0xBF40D896CA4BDBE7();
				func_182(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_136)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_143 = 0;
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_143++;
										if (iLocal_143 >= 12)
										{
											Local_136[iVar3 /*6*/].f_4 = 10;
											Local_136[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
											Local_136[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										if (iLocal_143 == 2)
										{
											Local_136[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 4;
										iLocal_143 = 3;
									}
									break;
								
								case 4:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/] + vLocal_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/] + vLocal_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 6;
										iLocal_143 = 5;
									}
									break;
								
								case 6:
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(vLocal_142[iLocal_143 /*3*/], 0);
										func_128(vLocal_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 200;
										Local_136[iVar3 /*6*/].f_4 = 2;
										iLocal_143 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0xDA55CDFB97015579(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1f, 0);
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_174 = 1;
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x9F4FE516EAACCFC5(iLocal_155))
							{
								unk_0x91F5B0244AAE6222(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								unk_0xDE0127155AF9E64F(iLocal_155, 0.1f);
								Local_136[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2473.208f, 4947.625f, 44.0664f, 1, 0, 0, 1);
									unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 223.493f);
									unk_0x2FB9A57162E54BAB(0f);
									unk_0xEF6276132B396452(-7f, 1065353216);
									if (func_188())
									{
										unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 1063765679, 1, 0, 0);
										unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 1, 0, 0);
										unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 500, 0, 1, 0);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = unk_0x1C0640BA9A7327B3() + 1300;
									unk_0x62956E22F3B365FF("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_175 = (fLocal_175 - (timestep() * 1f));
									if (fLocal_175 < 0.2f)
									{
										fLocal_175 = 0.2f;
									}
									unk_0x9A82EEAF6CA12AEE(fLocal_175);
									if (unk_0x1C0640BA9A7327B3() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_175 = (fLocal_175 + (timestep() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 1;
									}
									unk_0xBA4AFD9D5C7A6F8D("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0x9A82EEAF6CA12AEE(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_182(int iParam0)
{
	func_186();
	func_185();
	func_184();
	func_183();
	if (iParam0 == 11)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_390)
	{
		Local_390[iVar0 /*7*/] = 0;
		Local_390[iVar0 /*7*/].f_1 = 0;
		Local_390[iVar0 /*7*/].f_3 = 0;
		Local_390[iVar0 /*7*/].f_2 = 0;
		Local_390[iVar0 /*7*/].f_4 = 0;
		Local_390[iVar0 /*7*/].f_5 = 0;
		Local_390[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_385)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 1;
			Local_385[iVar0 /*10*/].f_6 = -1;
			func_166(iVar0, Local_385[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_385[iVar0 /*10*/] = 0;
		Local_385[iVar0 /*10*/].f_1 = 0;
		Local_385[iVar0 /*10*/].f_2 = 0;
		Local_385[iVar0 /*10*/].f_3 = 0;
		Local_385[iVar0 /*10*/].f_6 = 0;
		Local_385[iVar0 /*10*/].f_4 = 0;
		Local_385[iVar0 /*10*/].f_5 = 0;
		Local_385[iVar0 /*10*/].f_7 = 0;
		Local_385[iVar0 /*10*/].f_8 = 0;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388)
	{
		Local_388[iVar0 /*8*/] = 0;
		Local_388[iVar0 /*8*/].f_1 = 0;
		Local_388[iVar0 /*8*/].f_2 = 0;
		Local_388[iVar0 /*8*/].f_3 = 0;
		Local_388[iVar0 /*8*/].f_4 = 0;
		Local_388[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_389)
	{
		Local_389[iVar0 /*4*/] = 0;
		Local_389[iVar0 /*4*/].f_1 = 0;
		Local_389[iVar0 /*4*/].f_2 = 0;
		Local_389[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_188()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_103 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_102 = 1;
		iLocal_104 = unk_0x1C0640BA9A7327B3();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0;
		while (iVar0 < Local_109)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_101)
		{
			unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0)
			{
				unk_0xBB6D217402E588F9(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_101)
	{
		unk_0x060876FE4313F6DC(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_169(0);
	iVar0 = 0;
	while (iVar0 < Local_109)
	{
		if (unk_0xE4EDC4B0E92C078B(Local_109[iVar0 /*5*/].f_3))
		{
			unk_0x142CC44DB769B57E(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

void func_191(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_76(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_192(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_199(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_45())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_187(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_199(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_187(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_197(unk_0xD803B885F5E47A62())) && !func_194(unk_0xD803B885F5E47A62(), 0)) && !func_193()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_197(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_193()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()
{
	return Global_1312745;
}

int func_197(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_198())
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

bool func_198()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

void func_199(int iParam0)
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

int func_200()
{
	switch (iLocal_577)
	{
		case 0:
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0x523BCC9DC80CD82F(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		
		case 1:
			if (((((((((((((((unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent")) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0xB87F6CF6E5628C67(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_201()
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

void func_202()
{
	unk_0x81CF97025EC59496();
	func_176(28, 45);
	func_155(0, 7, 0, 0, 1, 0, 1, 0);
	func_155(1, 8, 2, 29, 1, 0, 1, 0);
	func_155(2, 9, 2, 35, 5, 34, 1, 0);
	func_155(3, 10, 2, 42, 1, 0, 1, 0);
	func_163(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_163(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_163(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_204(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_166(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_166(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_166(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_203(0, 2, 33, 5, 34);
	func_203(4, 2, 43, 1, 0);
	func_203(2, 2, 39, 1, 0);
	if (iLocal_166 == 0)
	{
		if (func_93(37) && !func_93(44))
		{
			iLocal_166 = 3;
		}
		if (func_93(41) && !func_93(44))
		{
			iLocal_164 = 1;
			iLocal_166 = 1;
		}
		if (func_175(10, 11) == 2)
		{
			iLocal_166 = 2;
			iLocal_164 = 1;
		}
	}
	func_166(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_93(37) && func_93(38)) || iLocal_164) && func_175(13, 10) == 10) && !func_88("CHI2_light"))
	{
		func_203(1, 2, 40, 1, 0);
		if (unk_0xE4EDC4B0E92C078B(iLocal_178))
		{
			unk_0x142CC44DB769B57E(&iLocal_178);
		}
		unk_0x8B4C4CA774181102(10f, 5f, 4);
		func_12(1);
		func_182(11);
	}
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_136("CHFAIL1");
				break;
			
			case 1:
				func_136("FRMSOON");
				break;
			
			case 2:
				func_136("FRMTRAI");
				break;
			
			case 3:
				if (unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
				{
					if (unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_136("CHFAIL2");
				break;
			
			case 5:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_205(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_205(int iParam0, int iParam1)
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_206()
{
	func_176(5, 31);
	func_155(0, 2, 0, 0, 1, 0, 1, 0);
	func_155(1, 3, 2, 8, 1, 0, 1, 0);
	func_155(2, 5, 2, 9, 1, 0, 1, 0);
	func_155(3, 11, 0, 0, 1, 0, 1, 0);
	func_155(4, 4, 2, 12, 1, 0, 1, 0);
	func_166(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_166(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_166(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_166(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_166(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_166(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_166(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_166(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_166(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_166(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_166(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_163(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_163(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_163(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_163(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_163(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_163(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_163(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_163(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_163(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_163(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_203(4, 2, 24, 1, 0);
	func_203(5, 2, 30, 1, 0);
	if (func_93(11) && func_93(29))
	{
		func_182(7);
	}
}

void func_207()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	unk_0xBE5E71AB40D024E0(2004.447f, 3076.807f, 46.6069f, 10f);
	unk_0x4FFA681FBEF02AE5(1);
	if (((func_201() && iLocal_150 > 0) && iLocal_150 < 7) && unk_0x1C0640BA9A7327B3() > iLocal_159)
	{
		iLocal_150 = 10;
		iLocal_158 = 0;
		bLocal_165 = true;
	}
	if (iLocal_150 < 10)
	{
		if (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(1000);
		}
	}
	if (iLocal_375)
	{
		unk_0x0AEDBE1D61D150AF(to_float(timera()));
	}
	unk_0x3FC8DBCC154CA56B();
	switch (iLocal_150)
	{
		case 0:
			if (unk_0x23239EF74F22427E())
			{
				unk_0xAE1670DD12E839C3("CHI_2_MCS_5", 8);
				iLocal_374 = 1;
				bLocal_165 = false;
				unk_0x44E5AE27B5A88FC7(5, 5, 5, 5);
				unk_0x9E020FDB27CA9201();
				unk_0x365391E40B6BA75B(0);
				iLocal_378 = 0;
				iLocal_375 = 1;
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				fVar1 = func_102(2458.223f, 4986.042f, 49.05241f, vVar0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				}
				if (((unk_0xDF1306B443CD3D15(iVar2, 0) && unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar2))) && unk_0xE934758D273C899A(iVar2)) || ((unk_0xDF1306B443CD3D15(iVar2, 0) && unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar2))) && unk_0xE934758D273C899A(iVar2)))
				{
					if (fVar1 < func_223(-2.5f) && fVar1 > func_223(0.5f))
					{
						iLocal_150 = 6;
						settimera(30000);
						unk_0x0AEDBE1D61D150AF(30000f);
						iLocal_158 = 36000;
					}
					else
					{
						iLocal_150 = 7;
						settimera(36000);
						unk_0x0AEDBE1D61D150AF(36000f);
						iLocal_158 = 42000;
					}
				}
				else
				{
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0xDF1306B443CD3D15(iVar2, 0))
						{
							if (!(unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar2)) && unk_0xE934758D273C899A(iVar2)) && !(unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar2)) && unk_0xE934758D273C899A(iVar2)))
							{
								unk_0xB9FD7450C0DAB575(iVar2, 1084227584);
							}
						}
					}
					if (fVar1 < func_223(-1.33f) && fVar1 > func_223(-1.92f))
					{
						iLocal_150 = 1;
						settimera(0);
						unk_0x0AEDBE1D61D150AF(0f);
						iLocal_158 = 6000;
					}
					else if (fVar1 < func_223(0.96f) && fVar1 > func_223(-1.33f))
					{
						iLocal_150 = 2;
						settimera(6000);
						unk_0x0AEDBE1D61D150AF(6000f);
						iLocal_158 = 12000;
					}
					else if (fVar1 < func_223(2.29f) && fVar1 > func_223(0.96f))
					{
						iLocal_150 = 3;
						settimera(12000);
						unk_0x0AEDBE1D61D150AF(12000f);
						iLocal_158 = 18000;
					}
					else if (fVar1 < func_223(-2.81f) || fVar1 > func_223(2.29f))
					{
						iLocal_150 = 4;
						settimera(18000);
						unk_0x0AEDBE1D61D150AF(18000f);
						iLocal_158 = 24000;
					}
					else
					{
						settimera(24000);
						unk_0x0AEDBE1D61D150AF(24000f);
						iLocal_158 = 30000;
						iLocal_150 = 5;
					}
				}
				iLocal_376 = 1;
				unk_0x5CAFA5DD13658DFE(0);
				func_218(&Local_184, 1, 0);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iLocal_84 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					vLocal_112 = { unk_0x56E9E0FD5ACCD35D(iLocal_84) };
					unk_0x1E9649458B15960F(iLocal_84, true);
					unk_0x4A4806F9D471E491(iLocal_84, false, 0);
				}
				unk_0x7B1292B738DF9FAF();
				if (iLocal_150 == 1)
				{
					iLocal_378 = 1;
					func_75(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (unk_0xDF1306B443CD3D15(iVar2, 0))
						{
							unk_0x56FDC9ADE35F7DB0(iVar2, false, 1, 0);
						}
					}
					unk_0x536F1BE96C726C4B(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, false);
					unk_0x536F1BE96C726C4B(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, false);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2578.419f, 4981.901f, 50.587f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 49.2184f);
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
					unk_0xDD353D0E9C789D0E(&uVar3);
					unk_0x80AA372E04ED318D(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0xE655C47E46F9A7E4(0, 88.7065f, 0);
					unk_0x75ABDC5F81978924(uVar3);
					unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uVar3);
					unk_0xF82EA857DA10E0CD(&uVar3);
					iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
					unk_0xB2ABBA6B919F5CE7(iLocal_155, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					unk_0xB2ABBA6B919F5CE7(iLocal_155, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					unk_0x5818C8D5303DCCF8(iLocal_155, 34.9f);
					unk_0x34570E685597AE09(iLocal_155, 0);
				}
				else
				{
					switch (iLocal_150)
					{
						case 2:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						
						case 3:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						
						case 4:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 29.8f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						
						case 5:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						
						case 6:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						
						case 7:
							iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							unk_0xB2ABBA6B919F5CE7(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							unk_0x5818C8D5303DCCF8(iLocal_155, 28.5f);
							unk_0x34570E685597AE09(iLocal_155, 0);
							break;
						}
				}
				if (iLocal_150 < 6)
				{
					unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.2f);
				}
				else
				{
					unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.7f);
				}
				unk_0xE3BB8E05FCEB3FBE(iLocal_155, true);
				unk_0xB3A1B75CB59FEB56(true, 0, 3000, 1, 0, 0);
				unk_0x420FE818E70BB523(4);
				unk_0x8BC9595FD2792B5D("CHI_2_FARMHOUSE_OVERVIEW");
				func_211(1);
				unk_0x51B096AAC60548C1(0f);
				unk_0x34D79252800B23FF(0);
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 32);
				func_192(1, 1, 1, 0, 0, 0);
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
				iLocal_159 = unk_0x1C0640BA9A7327B3() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_113)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar4 /*33*/]))
					{
						unk_0x33CE5A9E32EA10B2(Local_113[iVar4 /*33*/], true);
					}
					iVar4++;
				}
				iLocal_160 = unk_0x36F2404464202779(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, true);
				unk_0x262EF6C6306BEA6C(iLocal_160, joaat("weapon_microsmg"), -1, true, true);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_160))
				{
					func_99();
					unk_0xD93EE6549113F9E1(0, 1);
					unk_0x96167B03C5A77156(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x96167B03C5A77156(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x78A77CDD64392938(0, 500);
					unk_0x96167B03C5A77156(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 1193033728);
					func_98(&iLocal_160, 1);
				}
				iLocal_147 = unk_0x122AAB0B1D6F55AD(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1, 0);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_150 = 3;
			}
			break;
		
		case 3:
			if (timera() > iLocal_158)
			{
				unk_0x5CAFA5DD13658DFE(0);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				unk_0x5818C8D5303DCCF8(iLocal_155, 34f);
				unk_0x34570E685597AE09(iLocal_155, 0);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		
		case 4:
			if (timera() > iLocal_158)
			{
				unk_0x5CAFA5DD13658DFE(0);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				unk_0x5818C8D5303DCCF8(iLocal_155, 34f);
				unk_0x34570E685597AE09(iLocal_155, 0);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		
		case 5:
			iLocal_377 = 1;
			if (timera() > iLocal_158)
			{
				iLocal_377 = 1;
				unk_0x5CAFA5DD13658DFE(0);
				iLocal_155 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 1);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				unk_0xB2ABBA6B919F5CE7(iLocal_155, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				unk_0x5818C8D5303DCCF8(iLocal_155, 37.34f);
				unk_0x34570E685597AE09(iLocal_155, 0);
				unk_0x91F5B0244AAE6222(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		
		case 6:
			if (timera() > iLocal_158)
			{
				if (func_210())
				{
					unk_0x790015DC92C918E2();
					unk_0xA37A90C62806D848(1);
					unk_0xC91CE78BD2816AC6(6.818f);
					if (unk_0xDF1306B443CD3D15(iLocal_147, 0))
					{
						unk_0x29E8331978B73E7F(iLocal_147, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0x4C902758BEA97C68(0);
					iLocal_374 = 0;
					iLocal_150 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0xC844350D5D58C99A(iLocal_84) && unk_0xDF1306B443CD3D15(iLocal_84, 0))
			{
				unk_0x8F741CB9D8AB80F4(iLocal_84);
			}
			if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(500);
			}
			if ((unk_0x757EF87A33649210() && !unk_0x22A8E52414415B76()) || (unk_0x39B7A3CCD2467CAB() && unk_0xEABED1927EFB48CA(1)))
			{
				iLocal_150++;
			}
			break;
		
		case 11:
			if (unk_0xC844350D5D58C99A(iLocal_84) && unk_0xDF1306B443CD3D15(iLocal_84, 0))
			{
				unk_0x8F741CB9D8AB80F4(iLocal_84);
			}
			if ((unk_0x757EF87A33649210() && !unk_0x22A8E52414415B76()) || (unk_0x39B7A3CCD2467CAB() && unk_0xEABED1927EFB48CA(1)))
			{
				unk_0x5CAFA5DD13658DFE(0);
				unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
				if (func_188() && !bLocal_165)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
					unk_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0xBF40D896CA4BDBE7();
				if (func_73(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_73(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				}
				else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_102(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-6.3f, 1065353216);
				unk_0xC91CE78BD2816AC6(6.818f);
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
				unk_0xE96F19797E59AB06();
				unk_0x8910D3D58E0132B8("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x790015DC92C918E2();
				unk_0xA37A90C62806D848(1);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				func_211(0);
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x744B6A2DDB2E7563(unk_0x16F2683693E537C9(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_192(0, 1, 1, 0, 0, 0);
				if (unk_0xC844350D5D58C99A(iLocal_160))
				{
					unk_0xEBA53F35D0085654(&iLocal_160);
				}
				iLocal_380 = func_18(4);
				if (iLocal_380 != -1)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_380 /*33*/]))
					{
						unk_0xEBA53F35D0085654(&(Local_113[iLocal_380 /*33*/]));
					}
					if (unk_0xC844350D5D58C99A(Local_113[iLocal_380 /*33*/].f_20))
					{
						unk_0xF690C84DADBB3551(&(Local_113[iLocal_380 /*33*/].f_20));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 1;
					Local_113[iLocal_380 /*33*/].f_5 = 0;
					Local_113[iLocal_380 /*33*/].f_14 = 0;
					Local_113[iLocal_380 /*33*/].f_3 = 2;
				}
				iLocal_381 = func_18(5);
				if (iLocal_381 != -1)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iLocal_381 /*33*/]))
					{
						unk_0xEBA53F35D0085654(&(Local_113[iLocal_381 /*33*/]));
					}
					if (unk_0xC844350D5D58C99A(Local_113[iLocal_381 /*33*/].f_20))
					{
						unk_0xF690C84DADBB3551(&(Local_113[iLocal_381 /*33*/].f_20));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 1;
					Local_113[iLocal_381 /*33*/].f_5 = 0;
					Local_113[iLocal_381 /*33*/].f_14 = 0;
					Local_113[iLocal_381 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_161))
				{
					unk_0xEBA53F35D0085654(&iLocal_161);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_162))
				{
					unk_0xEBA53F35D0085654(&iLocal_162);
				}
				if (func_74(iLocal_147))
				{
					unk_0xA954465BA6FDEFE2(&iLocal_147);
				}
				if (unk_0xC844350D5D58C99A(iLocal_183))
				{
					unk_0xF690C84DADBB3551(&iLocal_183);
				}
				func_208();
				iLocal_111 = 0;
				func_27();
				unk_0x71199B01895C6202(joaat("prop_phone_ing"));
				unk_0x71199B01895C6202(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_113)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar5 /*33*/]))
					{
						unk_0x33CE5A9E32EA10B2(Local_113[iVar5 /*33*/], false);
					}
					iVar5++;
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-6.3f, 1065353216);
				if (unk_0xC844350D5D58C99A(iLocal_84))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_84, 0))
					{
						unk_0x1E9649458B15960F(iLocal_84, false);
						if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_84)))
						{
							unk_0x37806EBF326ECEE9(iLocal_84, vLocal_112);
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, -1);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_84, true, 1, 0);
						if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_84)))
						{
							unk_0xC023D1C4BF532815(iLocal_84, 0f, 0f, unk_0xD9522BA9E27E1349(iLocal_84), 2, 1);
							unk_0x873BCADC75FF6D20(iLocal_84);
							unk_0x37806EBF326ECEE9(iLocal_84, 1f, 1f, 1f);
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, -1);
						}
						if (iLocal_378 == 0)
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_84, -1);
						}
						unk_0x4A4806F9D471E491(iLocal_84, true, 0);
					}
				}
				unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), true, 0);
				unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 1, 0);
				unk_0xF59BE6DDBCFD2F1C();
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(1000);
				}
				unk_0x365391E40B6BA75B(1);
				func_182(11);
			}
			break;
	}
}

void func_208()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_145))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[iVar0 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0xF690C84DADBB3551(&(Local_113[iVar0 /*33*/].f_20));
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (unk_0x762119754C50557A(uLocal_168))
	{
		unk_0x40B7230FD4C59AA2(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0x762119754C50557A(iLocal_169[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_170)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_209(var uParam0, var uParam1, char* sParam2, float fParam3, vector3 vParam4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	vLocal_71 = { vParam4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	unk_0xFCAFD5C52953EB6C(-455129387, 31);
	iLocal_52 = 0;
}

bool func_210()
{
	bool bVar0;
	
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

void func_211(bool bParam0)
{
	if (bParam0)
	{
		func_217();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_216(0))
		{
			func_212(0);
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

void func_212(int iParam0)
{
	if (func_215())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_214())
		{
			func_213(1, 1);
		}
		else
		{
			func_213(0, 0);
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
	if (!func_45())
	{
		Global_19486.f_1 = 3;
	}
}

void func_213(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_216(0))
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

bool func_214()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_215()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_216(int iParam0)
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

void func_217()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_218(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_222(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_221(iVar0, iParam0);
		func_220(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x0674E58A79778E99(&(iParam0->f_13), iVar0);
			unk_0x0674E58A79778E99(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar0]))
		{
			unk_0xA245D14CC59CDD36(iParam0->f_17[iVar0], 1);
			unk_0x7D732AB707BE9152(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 32, true);
				unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x4E885A246A9D983A(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_17[iVar0], func_219()) && iParam0->f_17[iVar0] != unk_0x16F2683693E537C9())
				{
					unk_0x0A94A109271BE75A(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 29))
			{
				unk_0xD5EF6A937E06E46F(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 1);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 1);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

var func_219()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_220(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 19);
			break;
	}
}

void func_221(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(uParam1->f_13), 16);
			break;
	}
}

void func_222(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_5));
	}
}

float func_223(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_224()
{
	int iVar0;
	
	func_176(1, 4);
	func_166(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_166(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 1, 2, 2, 1, 0, 1, 0);
	func_203(3, 0, 0, 1, 0);
	if ((func_73(unk_0x16F2683693E537C9(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, false, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, false, 0))
	{
		if (unk_0xE4EDC4B0E92C078B(Local_184.f_5))
		{
			unk_0x661342B9651D16E2(Local_184.f_6, false);
		}
		func_182(11);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_268(5, -20);
				unk_0x51B096AAC60548C1(0f);
				unk_0x34D79252800B23FF(0);
				iLocal_150++;
				break;
			
			case 1:
				if (func_228(&Local_184, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0x8B4C4CA774181102(6f, 6f, 3);
					iLocal_150++;
					func_218(&Local_184, 1, 0);
					func_31(3, 1);
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					if (func_226(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_225(5) > 2)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			
			case 3:
				if (func_228(&Local_184, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0x8B4C4CA774181102(5f, 10f, 4);
					func_182(11);
				}
				if (unk_0xE4EDC4B0E92C078B(Local_184.f_5))
				{
					unk_0x661342B9651D16E2(Local_184.f_6, false);
				}
				break;
			}
	}
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_226(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_227(iParam0);
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

void func_227(int iParam0)
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

bool func_228(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_229(iParam0, vParam1, vParam2, func_267(), func_267(), iParam3, 1, 0, 0, 0, 0, sParam4, func_173(), func_173(), func_173(), func_173(), func_173(), 0, bParam5, func_173(), 0, 0, bParam6, iParam7, 0, 0, 0, 1, 1065353216);
}

int func_229(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_266(iParam0);
	func_265(iParam0);
	func_264();
	if (func_248(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_247(sParam12);
		func_247(sParam13);
		func_247(sParam14);
		func_247(sParam15);
		if (unk_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (unk_0xDF1306B443CD3D15(iParam10, 0))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 23))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 23);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_245(iParam0, iParam21))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_247(sParam16);
				func_247(sParam19);
				func_247("MORE_SEATS");
				if (bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_247(sParam11);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_242(iParam0, 1) && !func_241(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 0);
						unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						func_247("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 1);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 1))
					{
						if (!func_242(iParam0, 1))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						if (unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							unk_0x142CC44DB769B57E(iParam0);
						}
						iParam0->f_5 = func_5(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					else if (!func_236(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0.1f, 0))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					if (!func_242(iParam0, 2))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 2))
						{
							func_240(iParam0, sParam11, 0);
							unk_0x5D96D8530B3D0904(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, iParam5, bVar4, iVar5);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, iParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									if (!unk_0xC42A92762C58E1B9(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xC42A92762C58E1B9(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_17[iVar2], func_219()) || !func_234(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_231(iParam0))
							{
								func_247(sParam11);
								func_247(sParam16);
								func_247(sParam12);
								func_247(sParam13);
								func_247(sParam14);
								func_247(sParam15);
								func_247("LOSE_WANTED");
								func_247("MORE_SEATS");
								func_247(sParam19);
								func_218(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xC844350D5D58C99A(iParam10))
			{
				if ((bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 22)))
				{
					func_247(sParam16);
					func_247(sParam19);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_247(sParam11);
					}
					if ((!func_242(iParam0, 1) && !func_241(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 0);
						unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
					{
						func_247("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
						unk_0x5D96D8530B3D0904(&(iParam0->f_13), 1);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 1))
					{
						if (!func_242(iParam0, 1))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_13), 1);
						}
					}
					if (unk_0xDF1306B443CD3D15(iParam10, 0))
					{
						if (!unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
							{
								unk_0x142CC44DB769B57E(&(iParam0->f_5));
								func_247(sParam11);
							}
							*iParam0 = func_230(iParam10, 0, 0);
							unk_0x9D7CDDB4B55142AF(*iParam0, 2);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								func_237(*iParam0, iParam0);
							}
						}
						if (!func_242(iParam0, 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
							{
								func_240(iParam0, sParam16, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
								unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam19))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
									{
										func_240(iParam0, sParam19, 0);
										unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
								{
									func_240(iParam0, sParam16, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 23))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[0]))
									{
										func_238(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_5));
					func_247(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_242(iParam0, 2))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x09AC81E49EA267F7(0, iVar6);
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_17[iVar7]))
									{
										func_238(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_240(iParam0, "MORE_SEATS", 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
							{
								func_240(iParam0, sParam16, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
								unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
								{
									func_240(iParam0, sParam19, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_242(iParam0, 2))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 3))
						{
							func_240(iParam0, sParam16, 0);
							unk_0x5D96D8530B3D0904(&(iParam0->f_13), 3);
							unk_0x0674E58A79778E99(&(iParam0->f_13), 4);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 9))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam19))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
								{
									func_240(iParam0, sParam19, 0);
									unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 4))
							{
								func_240(iParam0, sParam16, 0);
								unk_0x5D96D8530B3D0904(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 0))
		{
			unk_0x0674E58A79778E99(&(iParam0->f_13), 0);
		}
		func_247(sParam11);
		func_247(sParam16);
		func_247(sParam19);
		func_247(sParam16);
		func_247("LOSE_WANTED");
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_5));
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
	unk_0x0674E58A79778E99(&(iParam0->f_13), 11);
	unk_0x0674E58A79778E99(&(iParam0->f_13), 12);
	return 0;
}

int func_230(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_231(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 12))
	{
		if (func_233(unk_0x16F2683693E537C9()))
		{
			if (func_232(1, 0, 1) || unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_232(1, 0, 1) || unk_0xEAE0D21A50E6C7F4(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_232(bool bParam0, bool bParam1, bool bParam2)
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

int func_233(int iParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_235(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_219(), 50f);
				return 1;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_219()))
		{
			unk_0x7C27693C5112825F(func_219(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(iParam0))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					if (unk_0x82CCEAB29E9451DD(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_236(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam1->f_6))
		{
			unk_0x661342B9651D16E2(iParam1->f_6, false);
		}
		unk_0xB8C3D2D6C4AAEF18(0);
		unk_0x053C926E5E341906();
		iParam1->f_6 = iParam0;
		unk_0x661342B9651D16E2(iParam0, true);
	}
}

void func_238(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_239(iParam2), 1);
}

int func_239(int iParam0)
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

void func_240(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_156(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x1C0640BA9A7327B3();
}

int func_241(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0->f_16))
	{
		if (unk_0x65636D4556D82155(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 1;
		}
		if (func_244(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_65() && !func_243())
		{
			return 1;
		}
	}
	return 0;
}

int func_243()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_246(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD6DF381716822EFE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x4A43A287EB2A2B60(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x4A43A287EB2A2B60(iParam0, 1))
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
	return 0;
}

void func_247(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 29) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 28))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					unk_0xD5EF6A937E06E46F(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 29) && unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 28))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
			{
				unk_0xD5EF6A937E06E46F(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xC844350D5D58C99A(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 50f, 0, iVar16);
			if (unk_0xDF1306B443CD3D15(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xDF1306B443CD3D15(uParam0->f_21, 0))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_246(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_17[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470) == 7 && !func_263(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0]))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], 1);
											unk_0x5B1D360B9C6F0A09(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					if (!unk_0x81A5359F25512A04(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
					}
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
					{
						if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_219());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 26))
	{
		if ((!func_260(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar10, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_242(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x09AC81E49EA267F7(0, iVar17);
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar18]))
						{
							func_238(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_240(uParam0, "MORE_SEATS", 0);
						unk_0x5D96D8530B3D0904(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x0674E58A79778E99(&(uParam0->f_13), 13);
			func_247("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_17[0]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_17[1])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_17[2]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 31))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_242(uParam0, 2))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (func_259(iVar10, uParam0))
						{
							func_240(uParam0, "CMN_VEHSUIT", 0);
							unk_0x5D96D8530B3D0904(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_13), 31);
					func_247("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xDF1306B443CD3D15(iParam10, 0))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
			{
				if (unk_0xBFC0798A6E3417F9(0, 75))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
					{
						unk_0xFCCF7611216AE801(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xFCCF7611216AE801(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
						if (unk_0xDF1306B443CD3D15(iVar10, 0))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
							{
								if (!func_260(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_258(uParam0->f_17[iVar0]))
									{
										unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x437347B10A200C4B(iVar10, 0))
						{
							if (unk_0x82CCEAB29E9451DD(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x70EED0761B82965E(iVar10) && !unk_0xF79A7BCA9E38BBBC(iVar10))
								{
									vVar19 = { unk_0x68F4C0EC296D3901(iVar10, true) };
									if (vVar19.z < -1f)
									{
										unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
					{
						if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0x6937EA2286828455(uParam0->f_17[iVar0], 0);
							if (!unk_0x437347B10A200C4B(iVar10, 0))
							{
								if (unk_0xDF1306B443CD3D15(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar10))
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar20 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
									}
									if (unk_0xDF1306B443CD3D15(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
					{
						iVar21 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar21))
						{
							if (func_246(iVar21, uParam0, 0))
							{
								if (func_257(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 27))
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], iVar0);
									func_220(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_257(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar21) == joaat("sentinel2"))
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_17[iVar0], 2);
								}
								func_256(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()) && !func_255(uParam0->f_17[iVar0], iParam10)) && !func_254(uParam0->f_17[iVar0], iParam10))
					{
						if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_219());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_230(uParam0->f_17[iVar0], 0, 0);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_237(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_234(uParam0->f_17[iVar0], 1) || func_255(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_247(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_237(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xDF1306B443CD3D15(iParam10, 0))
					{
						if (!unk_0x82CCEAB29E9451DD(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 11)) && !((bParam17 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0)))
							{
								if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
								{
									if (!unk_0xC42A92762C58E1B9(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_234(uParam0->f_17[iVar0], 1))
										{
											if (func_233(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0x75CDA8644CD3B5F5(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_17[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_17[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_263(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_17[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_253(uParam0->f_17[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_17[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], 1);
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 10))
											{
												unk_0xCAF7AE54F764D5AA(uParam0->f_17[iVar0], 1f);
											}
											unk_0x5B1D360B9C6F0A09(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x579B0182884711E5(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_230(uParam0->f_17[iVar0], 0, 0);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
							{
								if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_17[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0xD1960163A3042274(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_17[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_17[iVar0], 0);
										unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_219());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_17[iVar0], func_219());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 21))
							{
								unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_17[iVar0], func_219()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_242(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
						{
							if (func_258(uParam0->f_17[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_17[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_258(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1C0640BA9A7327B3();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 5))
							{
								func_240(uParam0, sParam7, 0);
								unk_0x5D96D8530B3D0904(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_252(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar13[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar13[iVar0], ""))
											{
												func_250(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_249(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_252(iVar0, uParam0))
										{
											func_240(uParam0, uVar12[iVar0], 0);
											func_249(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x0674E58A79778E99(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_247("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 16);
			break;
	}
}

void func_250(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_251(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1C0640BA9A7327B3();
}

void func_251(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(iParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 1);
}

int func_252(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 14);
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 15);
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_253(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0);
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x9C66D99E63E8E24C(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_219()))
		{
			iVar0 = unk_0x8B157DA177FBCF50(iParam0);
			if (unk_0xDF1306B443CD3D15(iParam1, 0))
			{
				if (unk_0x12DE711B1C681E9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xDF1306B443CD3D15(iParam1, 0))
			{
				if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_256(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x5D96D8530B3D0904(&(uParam1->f_13), 19);
			break;
	}
}

int func_257(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 17);
		
		case 1:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 18);
		
		case 2:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				iVar1 = unk_0x3C66DF04E6EA3587(iParam0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x12DE711B1C681E9E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_259(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("bus") || unk_0x134B62B726CEC8E6(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xA30B8362589C124A(iParam0, 0, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xA30B8362589C124A(iParam0, 1, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xA30B8362589C124A(iParam0, 2, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_246(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_261(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x0E0E6175453415CB(iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam1, 0);
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0))
					{
						if (func_260(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (func_246(iVar0, uParam0, 0))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0))
						{
							if (func_262(iVar0))
							{
								return 1;
							}
						}
					}
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
	}
	return 0;
}

int func_262(int iParam0)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_264()
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

void func_265(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_13, 25))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
				{
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 32, false);
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 305, true);
					unk_0x4E885A246A9D983A(uParam0->f_17[iVar0], 268, true);
					unk_0x579B0182884711E5(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_13), 25);
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_17[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_17[iVar0]))
			{
				if (unk_0x0E0E6175453415CB(uParam0->f_17[iVar0]))
				{
					unk_0xA245D14CC59CDD36(uParam0->f_17[iVar0], 0);
					unk_0x7D732AB707BE9152(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0);
			}
		}
	}
}

Vector3 func_267()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 1)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_269()
{
	int iVar0;
	int iVar1;
	
	unk_0x6A36BC55C7F6D023(0f);
	unk_0x1386EF28F7C0195C(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			iLocal_144 = unk_0x728870EB733D12A1();
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
			if (func_210())
			{
				unk_0x3F423BF5B8125A50("MISSChinese2_crystalMazeMCS1_IG");
				unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
				unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
				unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
				unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
				unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
				unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
				unk_0x3F423BF5B8125A50("missrampageintrooutro");
				unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
				func_192(1, 1, 1, 0, 0, 0);
				if (unk_0xC844350D5D58C99A(Global_95241.f_9[0]))
				{
					Local_113[14 /*33*/] = Global_95241.f_9[2];
					Local_113[13 /*33*/] = Global_95241.f_9[1];
					Local_113[11 /*33*/] = Global_95241.f_9[4];
					Local_113[10 /*33*/] = Global_95241.f_9[3];
					Local_113[12 /*33*/] = Global_95241.f_9[0];
					unk_0x73270B3C9CC833FD(Local_113[14 /*33*/], true, 1);
					unk_0x73270B3C9CC833FD(Local_113[13 /*33*/], true, 1);
					unk_0x73270B3C9CC833FD(Local_113[11 /*33*/], true, 1);
					unk_0x73270B3C9CC833FD(Local_113[10 /*33*/], true, 1);
					unk_0x73270B3C9CC833FD(Local_113[12 /*33*/], true, 1);
					if (!unk_0xEB6A8945D1AC98A1(Local_113[13 /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[14 /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_113[12 /*33*/]))
					{
						unk_0x29E8331978B73E7F(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_113[13 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0x29E8331978B73E7F(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_113[14 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0x29E8331978B73E7F(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
						{
							unk_0x29E8331978B73E7F(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0x29E8331978B73E7F(Local_113[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0x29E8331978B73E7F(Local_113[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_113[12 /*33*/] = unk_0x36F2404464202779(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, 1, true);
					unk_0x29E8331978B73E7F(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_271();
				unk_0x4C902758BEA97C68(0);
				unk_0x420FE818E70BB523(4);
				unk_0x745CE398A4B0A3C6(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0x679C321F8CAA2CFA(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0x7D6CA5F52B3748BF(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				unk_0x10F3BFFADF2CE3DA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_576 = 0;
				iLocal_150++;
			}
			break;
		
		case 1:
			if (unk_0x22A8E52414415B76())
			{
				if (unk_0x757EF87A33649210())
				{
					unk_0x82E51BCA72537B6C(1000);
				}
				iLocal_150++;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				if (iLocal_576 == 0)
				{
					func_270(13);
					iLocal_576++;
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[13 /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Old_Man1A", 0))
				{
					Local_113[13 /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Old_Man1A", 0));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[14 /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Old_Man2", 0))
				{
					Local_113[14 /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Old_Man2", 0));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("tao", 0))
				{
					Local_113[11 /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("tao", 0));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Taos_Translator", 0))
				{
					Local_113[10 /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Taos_Translator", 0));
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_113[12 /*33*/]))
			{
				if (unk_0x3148AE92ED70DC30("Janet", 0))
				{
					Local_113[12 /*33*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Janet", 0));
				}
			}
			if (unk_0x3148AE92ED70DC30("tao", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[11 /*33*/]))
				{
					unk_0x6DF7BF67E86AAE86(Local_113[11 /*33*/], iLocal_118);
					unk_0x25C5402CC10F76CD(Local_113[11 /*33*/], false);
					iVar0 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0x915804B434753CBD(Local_113[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x3148AE92ED70DC30("Taos_Translator", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_113[10 /*33*/]))
				{
					unk_0x6DF7BF67E86AAE86(Local_113[10 /*33*/], iLocal_118);
					unk_0x25C5402CC10F76CD(Local_113[10 /*33*/], false);
					iVar1 = unk_0xE9744DB7B8CA6965(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0x915804B434753CBD(Local_113[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x3148AE92ED70DC30("Trevor", 0))
			{
				iLocal_144 = unk_0x728870EB733D12A1();
				if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, -1);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
					unk_0x058E3033265DBA9A(unk_0x134B62B726CEC8E6(iLocal_144));
				}
				else if (unk_0xB4AE0788C1587752("missrampageintrooutro"))
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.135f, 3057.467f, 46.06f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 325.4678f);
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.919f, 3057.906f, 46.0567f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 337.2537f);
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -668482597, 0, 0, 0);
					unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
				}
			}
			if (unk_0xEABED1927EFB48CA(0))
			{
				unk_0xF99F2927BEBB5EE7(6);
				func_192(0, 1, 1, 0, 0, 0);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
				if (unk_0x757EF87A33649210())
				{
					unk_0x90CECE08EA8E77CC(1992.135f, 3057.467f, 46.06f);
				}
				unk_0xBF40D896CA4BDBE7();
				unk_0x8B4C4CA774181102(0f, 7f, 3);
				func_182(11);
			}
			break;
	}
}

void func_270(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

void func_271()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), false, false, false, false, false, 0, 0, 0);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 157, true);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96113[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(Global_96113[iVar0], 0))
			{
				unk_0xAA6B3A4292417750(Global_96113[iVar0], false, false, false, false, false, 0, 0, 0);
				unk_0xE121AE1BBF90E186(Global_96113[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_41431 != 0 && Global_41431 != 3) && Global_41431 != 2)
	{
		unk_0x34D79252800B23FF(5);
		unk_0x51B096AAC60548C1(1f);
	}
}

void func_272()
{
	int iVar0;
	
	switch (iLocal_150)
	{
		case 0:
			unk_0xD7992BEF7A9D109E("FRMCHSE", 0);
			while (!unk_0x67C1D9E5B91B2E37(0))
			{
				func_28(27, 1);
			}
			func_62(&uLocal_203, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			func_62(&uLocal_203, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_368();
			unk_0x7800CEC090C01D4D(2442.69f, 4970.348f, 46.33f, 30f);
			unk_0x8225571BCEE038F8("EXTRASUNNY", 120f);
			vLocal_384[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			vLocal_384[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			vLocal_384[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			vLocal_384[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			vLocal_384[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			vLocal_384[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			vLocal_384[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			vLocal_384[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			vLocal_384[8 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_109[0 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_109[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_109[2 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_109[3 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_109[4 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_109[5 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_109[6 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_109[7 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_109[8 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_109[9 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_109[10 /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_109[11 /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_109[12 /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_109[13 /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_109[14 /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_109[15 /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_109[16 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_109[17 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_109[18 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_109[19 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_109[20 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_109[21 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_109[22 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_109[23 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_109[24 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_109[25 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_109[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_109[27 /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_109[28 /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_109[29 /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_109[30 /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_109[31 /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_109[32 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_109[33 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_109[34 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_109[35 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_109[36 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_109[37 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_109[38 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_109[39 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_109[40 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_109[41 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_109[42 /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_109[43 /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_109[44 /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_109[45 /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_109[46 /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_109[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_109[48 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_109[49 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_109[50 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_109[51 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_109[52 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_109[53 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_109[54 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_109[55 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_109[56 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_109[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_109[58 /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_109[59 /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_109[60 /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_136[0 /*6*/].f_3 = "Table Flames";
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/].f_3 = "Table Explosion";
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/].f_3 = "House Explosion";
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/].f_3 = "Cam Shake";
			Local_136[3 /*6*/] = 0;
			Local_136[4 /*6*/].f_3 = "Position player";
			Local_136[4 /*6*/] = 0;
			Local_136[5 /*6*/].f_3 = "Slow mo";
			Local_136[5 /*6*/] = 0;
			Local_136[0 /*6*/].f_1 = 2;
			Local_136[0 /*6*/].f_2 = 1000f;
			Local_136[1 /*6*/].f_1 = 2;
			Local_136[1 /*6*/].f_2 = 4200f;
			Local_136[2 /*6*/].f_1 = 3;
			Local_136[2 /*6*/].f_2 = 0f;
			Local_136[3 /*6*/].f_1 = 3;
			Local_136[3 /*6*/].f_2 = 0f;
			Local_136[4 /*6*/].f_1 = 3;
			Local_136[4 /*6*/].f_2 = 3200f;
			Local_136[5 /*6*/].f_1 = 3;
			Local_136[5 /*6*/].f_2 = 700f;
			Local_137[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_137[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_137[0 /*18*/].f_14 = 39.703f;
			Local_137[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_137[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_137[0 /*18*/].f_15 = 39.703f;
			Local_137[0 /*18*/].f_12 = 2500f;
			Local_137[0 /*18*/].f_13 = 2500f;
			Local_137[0 /*18*/].f_16 = 0;
			Local_137[0 /*18*/].f_17 = 18;
			Local_137[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_137[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_137[1 /*18*/].f_14 = 58.9114f;
			Local_137[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_137[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_137[1 /*18*/].f_15 = 58.9114f;
			Local_137[1 /*18*/].f_12 = 3200f;
			Local_137[1 /*18*/].f_13 = 1900f;
			Local_137[1 /*18*/].f_16 = 0;
			Local_137[1 /*18*/].f_17 = 34;
			Local_137[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_137[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_14 = 35.1297f;
			Local_137[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_137[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_15 = 35.1297f;
			Local_137[2 /*18*/].f_12 = 3500f;
			Local_137[2 /*18*/].f_13 = 4500f;
			Local_137[2 /*18*/].f_16 = 3;
			Local_137[2 /*18*/].f_17 = 49;
			Local_137[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_137[3 /*18*/].f_14 = 33.1297f;
			Local_137[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_137[3 /*18*/].f_15 = 33.1297f;
			Local_137[3 /*18*/].f_12 = 3500f;
			Local_137[3 /*18*/].f_13 = 3500f;
			Local_137[3 /*18*/].f_16 = 0;
			Local_137[3 /*18*/].f_17 = -1;
			fLocal_157 = 0.06f;
			func_172(1);
			vLocal_142[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			vLocal_142[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			vLocal_142[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			vLocal_142[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			vLocal_142[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			vLocal_142[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			vLocal_142[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			vLocal_142[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			vLocal_142[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			vLocal_142[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			vLocal_142[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			vLocal_142[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			vLocal_142[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			vLocal_130[0 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			vLocal_130[1 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			vLocal_130[2 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			vLocal_130[3 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			vLocal_130[4 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			vLocal_130[5 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			vLocal_130[6 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			vLocal_130[7 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			vLocal_130[8 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			vLocal_130[9 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			vLocal_130[10 /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			vLocal_130[11 /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			vLocal_130[12 /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			vLocal_130[13 /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			vLocal_130[14 /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			vLocal_130[15 /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			vLocal_130[16 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			vLocal_130[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			vLocal_130[18 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			vLocal_130[19 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			vLocal_130[20 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_367(&vLocal_120, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_367(&vLocal_121, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_367(&vLocal_125, "CHI2_nope", 8, "ONEILGUARD1");
			func_367(&vLocal_122, "SEETREVOR", 3, "chin2goon1");
			func_367(&vLocal_123, "CHI2_hear", 8, "ONEILGUARD1");
			func_367(&vLocal_124, "CHI2_hear", 8, "ONEILGUARD1");
			func_367(&vLocal_126, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_367(&vLocal_127, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_367(&vLocal_128, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_367(&vLocal_129, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_144 = unk_0x4EF27AB24893425F();
			unk_0xAB8E2DDC7AF955E0(joaat("bodhi2"), 1);
			unk_0xF63400DBE3303D26("TAOGROUP", &iLocal_118);
			unk_0x0E2400AB9174FA81(1, iLocal_118, 1862763509);
			unk_0x0E2400AB9174FA81(1, 1862763509, iLocal_118);
			func_17(0, -1);
			unk_0x2723524E448F4BDD("Chinese2_Lunch", 0);
			unk_0x2723524E448F4BDD("CHINESE2_HILLBILLIES", 0);
			if (func_366())
			{
				iVar0 = func_365();
				if (Global_92921 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_273(2, 1, 0);
						unk_0x82E51BCA72537B6C(1000);
						break;
					
					case 1:
						if (Global_92921 == 1)
						{
							func_273(3, 1, 0);
						}
						else
						{
							func_273(4, 1, 0);
							unk_0x82E51BCA72537B6C(1000);
						}
						break;
					
					case 2:
						func_273(6, 1, 0);
						unk_0x82E51BCA72537B6C(1000);
						break;
					
					case 3:
						func_273(7, 1, 0);
						unk_0x82E51BCA72537B6C(1000);
						break;
					
					case 4:
						if (Global_92921 == 1)
						{
							func_273(8, 1, 0);
						}
						else
						{
							func_273(9, 1, 0);
							unk_0x82E51BCA72537B6C(1000);
						}
						break;
					
					case 5:
						func_273(10, 1, 0);
						unk_0x82E51BCA72537B6C(1000);
						func_150();
						break;
				}
			}
			else if (func_147(0))
			{
				func_273(1, 0, 1);
			}
			else
			{
				func_182(11);
			}
			break;
	}
}

void func_273(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_360(3);
	func_32(6, 0);
	iLocal_150 = 0;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
			unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
			unk_0xAE1670DD12E839C3("chinese_2_int", 8);
			while (((((!unk_0xB87F6CF6E5628C67(joaat("ig_old_man2")) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man1a"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_janet"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_taocheng"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator"))) || !unk_0x62A1F4500E8F07E0())
			{
				func_28(323, 1);
			}
			while (!func_357(&(Local_113[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				wait(0);
			}
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 311f);
			unk_0x64F9F278AB9DCA2C(Local_113[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_356(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_74(iLocal_144))
				{
					unk_0xA47B46945FF6DE74(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_144, 50.7724f);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
				unk_0x90CECE08EA8E77CC(1992.878f, 3057.846f, 46.0568f);
			}
			unk_0x7D6CA5F52B3748BF(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			unk_0x10F3BFFADF2CE3DA(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			unk_0x536F1BE96C726C4B(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, false);
			func_285(1, 0, bParam2);
			unk_0x523BCC9DC80CD82F(joaat("ig_taocheng"));
			unk_0x523BCC9DC80CD82F(joaat("ig_taostranslator"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man1a"));
			unk_0x523BCC9DC80CD82F(joaat("ig_old_man2"));
			unk_0x523BCC9DC80CD82F(joaat("ig_janet"));
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			while (((((!unk_0xB87F6CF6E5628C67(joaat("ig_taocheng")) || !unk_0xB87F6CF6E5628C67(joaat("ig_taostranslator"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man1a"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_old_man2"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_janet"))) || !unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_74(iLocal_144))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, -1);
					unk_0xA47B46945FF6DE74(iLocal_144, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_144, 50.7724f);
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 311f);
				}
			}
			func_28(85, 1);
			func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_175(2, 41) != 900)
			{
				func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_74(iLocal_144))
				{
					func_282(iLocal_144, -1, 1);
				}
				else
				{
					func_282(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_356(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
				unk_0x90CECE08EA8E77CC(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			unk_0x51B096AAC60548C1(0f);
			func_285(0, 0, 0);
			unk_0x0CDF80057190977A("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_232(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0x23239EF74F22427E())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_153(10, 5))
			{
				func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_356(func_281(), func_280(), 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98.21f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
				unk_0x90CECE08EA8E77CC(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			func_285(0, 1, 0);
			unk_0x51B096AAC60548C1(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_279(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iVar0, 0))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0xC844350D5D58C99A(iLocal_144) && unk_0xDF1306B443CD3D15(iLocal_144, 0)) && func_278())
				{
					func_282(iLocal_144, -1, 1);
					if (unk_0xDF1306B443CD3D15(iLocal_144, 0))
					{
						unk_0x56FDC9ADE35F7DB0(iLocal_144, true, 1, 0);
						if (unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iLocal_144)))
						{
							unk_0x1AEF7184B203A58D(iLocal_144, 15f);
						}
						if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_144)))
						{
							unk_0x873BCADC75FF6D20(iLocal_144);
							unk_0x37806EBF326ECEE9(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_282(0, -1, 1);
				}
			}
			if (unk_0x0EB28750412C3A5A(func_281(), 2570.538f, 4982.031f, 50.6239f, true) < 10f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2570.538f, 4982.031f, 50.6239f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 98f);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_276(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			break;
		
		case 5:
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2572.01f, 4981.678f, 50.6698f, 1, 0, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 90.3911f);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			unk_0x51B096AAC60548C1(0f);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_285(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_275(0, 1, 1);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_356(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2450.871f, 4960.999f, 44.3759f, 0, 1, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 351.3911f);
				unk_0x90CECE08EA8E77CC(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
			}
			func_285(0, 0, 0);
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			wait(1);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0x51B096AAC60548C1(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_275(0, 1, 1);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				func_276(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_356(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2435.319f, 4966.153f, 41.3476f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 104.2964f);
				unk_0x90CECE08EA8E77CC(2432.982f, 4964.823f, 41.3476f);
				wait(1);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
			}
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			func_172(1);
			func_285(0, 0, 0);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x31609A585163CBAC(iLocal_179))
			{
				iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!unk_0xBD307E66C0669BFC(iLocal_179))
			{
				func_28(15, 1);
			}
			unk_0x53FD9FD65A68DF82(iLocal_179, 1);
			unk_0x25BB71BA267FE042(iLocal_179);
			iLocal_179 = 0;
			unk_0x6D0C93EE4FBA9307(joaat("weapon_petrolcan"), 31, 0);
			unk_0x3F423BF5B8125A50("misschinese2_crystalmaze");
			while (!unk_0x1787731C4D1D6B19(joaat("weapon_petrolcan")) || !unk_0xB4AE0788C1587752("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0x51B096AAC60548C1(0f);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_274(0, 7, 1);
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 4500, true, true);
			func_169(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_356(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2453.124f, 4952.071f, 45.125f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 285.8625f);
				unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
				wait(1);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
			}
			func_285(0, 0, 0);
			if (!unk_0x23239EF74F22427E())
			{
				unk_0x0CDF80057190977A("chinese2_explosion_cutscene");
			}
			unk_0xC83E7A5E408DF68C(1);
			unk_0xFF42993F8A095C58(1);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
			unk_0xB9FD7450C0DAB575(iLocal_146, 1084227584);
			iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x31609A585163CBAC(iLocal_179))
			{
				iLocal_179 = unk_0xFBD08BECC9B87937(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!unk_0xBD307E66C0669BFC(iLocal_179))
			{
				func_28(22, 1);
			}
			iLocal_166 = 3;
			unk_0x53FD9FD65A68DF82(iLocal_179, 1);
			unk_0x25BB71BA267FE042(iLocal_179);
			iLocal_179 = 0;
			while (!unk_0xB87F6CF6E5628C67(joaat("blazer")) || !unk_0x23239EF74F22427E())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			while (!unk_0xE3934829A331AF92("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_356(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2472.3f, 4948.181f, 44.0937f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 220.8569f);
				unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
				wait(1);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0xC83E7A5E408DF68C(3);
			unk_0xFF42993F8A095C58(3);
			unk_0x523BCC9DC80CD82F(joaat("blazer"));
			while ((!unk_0xB87F6CF6E5628C67(joaat("blazer")) || !unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE", false, -1)) || !unk_0xAE317D00A5A55DF6("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_146 = unk_0x122AAB0B1D6F55AD(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1, 0);
			unk_0xB9FD7450C0DAB575(iLocal_146, 1084227584);
			func_285(0, 0, 0);
			unk_0x90CECE08EA8E77CC(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!unk_0xB39672D8C1F6BB48(uLocal_173))
			{
				func_28(161, 1);
			}
			unk_0xCADC8175C61F28E5(uLocal_173, 9);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 0);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 0);
			unk_0x77ADAEFF81EAE1E4(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_356(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2625.776f, 4802.217f, 32.5747f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 206.4254f);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(-7f, 1065353216);
				unk_0x90CECE08EA8E77CC(2625.776f, 4802.217f, 32.5747f);
			}
			unk_0xC83E7A5E408DF68C(3);
			unk_0xFF42993F8A095C58(3);
			unk_0xCADC8175C61F28E5(uLocal_173, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

Vector3 func_276(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_277(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_277(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0);
}

bool func_278()
{
	return Global_105187.f_2890.f_8;
}

var func_279(int iParam0)
{
	if (Global_98781 > 0)
	{
		return Global_105187.f_21[iParam0];
	}
	return Global_102203.f_21[iParam0];
}

float func_280()
{
	return Global_105187.f_2884.f_3;
}

Vector3 func_281()
{
	return Global_105187.f_2884;
}

void func_282(int iParam0, int iParam1, int iParam2)
{
	if (func_366() && func_284())
	{
		while (Global_98739 != 6)
		{
			wait(0);
		}
		unk_0x21387C9EECC2B220(0);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 1065353216);
							unk_0x2FB9A57162E54BAB(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		unk_0x17EFA7496495F972();
		func_283(0);
	}
}

void func_283(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_284()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_355())
		{
			if (func_352(func_354(), 10f, 20f, 9f, 1))
			{
				func_351();
				while (!func_350())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_144 = func_349(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_144 = func_349(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_348())
	{
		func_346();
		while (!func_345())
		{
			func_28(544, 1);
		}
		iLocal_144 = func_286(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_278())
		{
			if (unk_0xDF1306B443CD3D15(iLocal_144, 0))
			{
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_144, -1);
			}
		}
	}
}

int func_286(vector3 vParam0, float fParam1)
{
	return func_287(&(Global_105187.f_2890), vParam0, fParam1, 0);
}

int func_287(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_344(uParam0))
	{
		if (func_168(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_343(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_342(vParam1, 5f, 0);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, fParam2, 1, 1, 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if (vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0, 0, 1);
				}
				func_325(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0xA7082C42B8809BF2(uParam0->f_12.f_66) || unk_0x83496B932152D4D4(uParam0->f_12.f_66))
				{
					if (!unk_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_324(uParam0->f_11, 1);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_324(uParam0->f_11, 2);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0);
					unk_0x626D5ADA3EFAE431(iVar0, 0);
					unk_0x44A200C9B6E1CEA6(iVar0, true);
					func_323(iVar0, uParam0->f_11);
				}
				else if ((!func_321(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_320(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_313(iVar4);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (unk_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_310(24, 0);
							func_313(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_288(iVar0, uParam0->f_11);
				}
				unk_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_294(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, -1, 0);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, -1);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_289(iParam0, &(Global_111638.f_32744.f_5510));
}

void func_289(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		func_293(uParam1);
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
		if (uParam1->f_65 == -1 && !func_292(uParam1->f_66))
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
		func_291(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar0 + 1));
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

int func_290(int iParam0)
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

int func_291(int iParam0, var uParam1, var uParam2)
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

int func_292(int iParam0)
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

void func_293(var uParam0)
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

int func_294(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0)) || func_78(iParam0, 0, 0)) || func_78(iParam0, 1, 0)) || func_78(iParam0, 2, 0)) || func_309(iParam0) != 145) || func_308(iParam0)) || func_307(iParam0)) || func_306(iParam0)) || func_305(iParam0)) || !func_295(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_307(iParam0))
		{
		}
		if (func_307(iParam0))
		{
		}
		if (func_78(iParam0, 0, 0))
		{
		}
		if (func_78(iParam0, 1, 0))
		{
		}
		if (func_78(iParam0, 2, 0))
		{
		}
		if (func_309(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_295(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_296(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_304())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_303() && !func_302()) && !func_301()) && !func_300()) && !func_304())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_301())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_299(iParam0))
		{
			return 0;
		}
	}
	if (!func_297(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_298())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_298()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_299(int iParam0)
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
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_300()
{
	return 0;
}

int func_301()
{
	return 1;
}

int func_302()
{
	return 1;
}

int func_303()
{
	if (unk_0xC146D5FBD23C6954(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_304()
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

int func_305(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_296(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xC844350D5D58C99A(Global_96075[iVar0]) && unk_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 145;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_310(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_312(iParam0, 0))
		{
			func_311(iParam0, 1, 0);
			func_311(iParam0, 2, 0);
			func_311(iParam0, 3, 0);
			func_311(iParam0, 4, 0);
			func_311(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_311(iParam0, 0, 0);
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_312(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_313(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_317(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				unk_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (unk_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_312(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_315(0, Global_75441.f_555[0 /*21*/].f_12) || !func_315(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_314(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_310(iParam0, 0);
		}
	}
}

void func_314(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_316(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_296(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_316(var uParam0)
{
	return *uParam0;
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_304())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_304())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_168(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_168(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_168(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_319(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_319(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]) && !unk_0x437347B10A200C4B(Global_75441.f_484[iVar0], 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[iVar0], 0))
		{
			unk_0x9412F17E127D9759(iParam0, &iVar1, &iVar2);
			unk_0x9412F17E127D9759(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(Global_75441.f_484[iVar0]) && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_321(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_322(iParam0, Global_75441.f_139[38], 0))
			{
				func_313(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_322(iParam0, Global_75441.f_139[43], 1))
			{
				func_313(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_322(iParam0, uVar1[iVar3], 1) && func_236(unk_0x68F4C0EC296D3901(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_168(vParam1, 0f, 0f, 0f, 0)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(uVar1[iVar3], true), true) < 10f)
					{
						unk_0xA954465BA6FDEFE2(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xC844350D5D58C99A(Global_75441.f_484[14]) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[14], 0))
			{
				if (unk_0x134B62B726CEC8E6(Global_75441.f_484[14]) == joaat("luxor2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[14]))
				{
					func_313(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_75441.f_484[20]) && unk_0xDF1306B443CD3D15(iParam0, 0)) && unk_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (unk_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_313(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_322(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0)) && unk_0xDF1306B443CD3D15(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x9412F17E127D9759(iParam0, &iVar0, &iVar1);
			unk_0x9412F17E127D9759(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_323(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = iParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96123[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_318(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						unk_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						unk_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_325(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!func_334(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_77), func_290(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_333(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_332())
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
		if (uParam1->f_65 == -1 && !func_292(uParam1->f_66))
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
						func_331(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_331(iParam0, uParam1->f_69);
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
			func_326(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_66) && !unk_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_77, func_290(iVar5 + 1)))
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

int func_326(int iParam0, var uParam1, var uParam2)
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
	if (func_330(unk_0x134B62B726CEC8E6(*iParam0), 1) && unk_0x0ECB5CA5140957AD(*iParam0, 24) != func_329(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 24, func_329(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_328(iParam0);
	if (func_327(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 1);
		unk_0x44A200C9B6E1CEA6(*iParam0, true);
	}
	return 1;
}

int func_327(int iParam0)
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

void func_328(var uParam0)
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

int func_329(int iParam0, int iParam1)
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

int func_330(int iParam0, int iParam1)
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

void func_331(int iParam0, int iParam1)
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

bool func_332()
{
	return unk_0xC146D5FBD23C6954(-1691188696);
}

int func_333(int iParam0)
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

int func_334(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!func_340(unk_0xD803B885F5E47A62(), -1))
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
	if (func_336(unk_0xD803B885F5E47A62()) == 3)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (func_335(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_335(int iParam0)
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

int func_336(int iParam0)
{
	if (func_339(iParam0) == 233)
	{
		return func_337(iParam0);
	}
	return -1;
}

int func_337(int iParam0)
{
	if (func_338(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_338(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_339(int iParam0)
{
	if (func_338(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_340(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_341(iParam0, 1, 1))
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

int func_341(int iParam0, bool bParam1, bool bParam2)
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

void func_342(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_317(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_313(iVar0);
			}
		}
		iVar0++;
	}
}

int func_343(var uParam0)
{
	if (func_344(uParam0))
	{
		if (unk_0xB87F6CF6E5628C67(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_344(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_296(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_236(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_345()
{
	return func_343(&(Global_105187.f_2890));
}

void func_346()
{
	func_347(&(Global_105187.f_2890));
}

void func_347(var uParam0)
{
	if (func_344(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

bool func_348()
{
	return func_344(&(Global_105187.f_2890));
}

int func_349(vector3 vParam0, float fParam1)
{
	return func_287(&(Global_102203.f_2890), vParam0, fParam1, 0);
}

bool func_350()
{
	return func_343(&(Global_102203.f_2890));
}

void func_351()
{
	func_347(&(Global_102203.f_2890));
}

int func_352(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_353() };
	}
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_353()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_354()
{
	return Global_102203.f_2890.f_12.f_66;
}

bool func_355()
{
	return func_344(&(Global_102203.f_2890));
}

void func_356(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_366())
	{
		unk_0x256D93AFAE851A7A(0);
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		unk_0x21387C9EECC2B220(1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam1;
		Global_98739 = 1;
		if (iParam2 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_283(1);
	}
}

int func_357(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_50(iParam1))
	{
		iVar0 = func_359(iParam1);
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
			func_358(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_358(var uParam0, int iParam1)
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

int func_359(int iParam0)
{
	if (!func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_360(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_184();
	func_185();
	func_186();
	func_183();
	unk_0xF59BE6DDBCFD2F1C();
	unk_0xC83E7A5E408DF68C(3);
	unk_0xFF42993F8A095C58(3);
	iLocal_392 = 0;
	iLocal_167 = 0;
	iLocal_163 = 0;
	iLocal_150 = 0;
	iLocal_114 = 0;
	iLocal_164 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	while (unk_0x39B7A3CCD2467CAB())
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x55BE34EDDEA0AC9E(1);
		}
		else
		{
			unk_0x5C8D148FC238F38A();
		}
		func_28(0, 0);
	}
	if (unk_0x762119754C50557A(uLocal_168))
	{
		unk_0x40B7230FD4C59AA2(uLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (unk_0x762119754C50557A(iLocal_169[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	sLocal_406 = "";
	sLocal_407 = "";
	func_190();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	unk_0x4701A9E9B58A4878(1f);
	func_364();
	unk_0xB3A1B75CB59FEB56(false, 0, 3000, 1, 0, 0);
	unk_0x5CAFA5DD13658DFE(0);
	func_192(0, 1, 1, 0, 0, 0);
	func_28(32, 0);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0x790015DC92C918E2();
	func_218(&Local_184, 1, 0);
	func_72();
	func_70();
	unk_0xB547E3FFEB27073E();
	unk_0xB975E4541DDAB1F5(0);
	unk_0xF5894FEB702E7E76(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 965837842, 1);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, 247384786, 1);
		unk_0x3124890FDA752DE4(2457.15f, 4968.79f, 48.677f, 100f, -247908770, 0);
		Global_39593 = 1;
	}
	unk_0xAFC04933E85FEE35("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0x2723524E448F4BDD("Chinese2_Lunch", 1);
		unk_0x2723524E448F4BDD("CHINESE2_HILLBILLIES", 0);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	if (iLocal_379 != -1)
	{
		if (unk_0x49083FDB78AC0509(iLocal_379))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_379);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_362(unk_0x16F2683693E537C9(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_113)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/]))
		{
			if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0x327AAEE25F323797(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_113[iVar0 /*33*/]))
				{
					unk_0xFADC0A217229F6B5(Local_113[iVar0 /*33*/], true);
					unk_0x6DAD7906B73F064D(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0xEBA53F35D0085654(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		if (unk_0xC844350D5D58C99A(Local_113[iVar0 /*33*/].f_20))
		{
			unk_0xF690C84DADBB3551(&(Local_113[iVar0 /*33*/].f_20));
		}
		unk_0x51732B934211201A(Local_113[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_361();
	}
	else
	{
		func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (unk_0xC844350D5D58C99A(iLocal_373))
	{
		unk_0xF690C84DADBB3551(&iLocal_373);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0x536F1BE96C726C4B(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, false);
		unk_0x7800CEC090C01D4D(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_153)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 1 && Local_153[iVar0 /*6*/].f_3 == 0) || Local_153[iVar0 /*6*/].f_3 == 0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			Local_153[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xE4EDC4B0E92C078B(iLocal_178))
	{
		unk_0x142CC44DB769B57E(&iLocal_178);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_170)
	{
		if (unk_0xC844350D5D58C99A(iLocal_170[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_144))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_144, 0))
			{
				if (unk_0x9C77D2D0559097F0(iLocal_144, 1))
				{
					if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x046C362CF15F1935(&iLocal_144);
					}
					else
					{
						unk_0x046C362CF15F1935(&iLocal_144);
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_145))
	{
		if (iParam0 != 0)
		{
			if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x046C362CF15F1935(&iLocal_145);
			}
			else
			{
				unk_0x046C362CF15F1935(&iLocal_145);
			}
		}
		else
		{
			unk_0x046C362CF15F1935(&iLocal_145);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_146))
	{
		if (func_74(iLocal_146))
		{
			unk_0x046C362CF15F1935(&iLocal_146);
		}
	}
	if (unk_0x762119754C50557A(uLocal_176))
	{
		unk_0x40B7230FD4C59AA2(uLocal_176);
	}
	if (iParam0 == 0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_181))
		{
			unk_0x1E9649458B15960F(iLocal_181, false);
			unk_0xEEEE2E5FA6F78DF0(&iLocal_181);
		}
		if (unk_0xC844350D5D58C99A(iLocal_182))
		{
			unk_0x1E9649458B15960F(iLocal_182, false);
			unk_0xEEEE2E5FA6F78DF0(&iLocal_182);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_160))
	{
		unk_0xEBA53F35D0085654(&iLocal_160);
	}
	unk_0x58B5D6A0F1D7754D(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0xC844350D5D58C99A(Local_113[12 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[12 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[13 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[13 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[14 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[14 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[11 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[11 /*33*/]));
		}
		if (unk_0xC844350D5D58C99A(Local_113[10 /*33*/]))
		{
			unk_0xEBA53F35D0085654(&(Local_113[10 /*33*/]));
		}
	}
	unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_01"));
	unk_0x71199B01895C6202(joaat("a_m_m_hillbilly_02"));
	unk_0x71199B01895C6202(joaat("prop_cs_fertilizer"));
	unk_0x71199B01895C6202(joaat("burrito"));
	unk_0x71199B01895C6202(joaat("ig_janet"));
	unk_0x71199B01895C6202(joaat("ig_old_man1a"));
	unk_0x71199B01895C6202(joaat("ig_old_man2"));
	unk_0x71199B01895C6202(joaat("ig_taocheng"));
	unk_0x71199B01895C6202(joaat("ig_taostranslator"));
	unk_0x71199B01895C6202(joaat("ig_janet"));
	unk_0xDD465543E2028AEA("move_m@gangster@var_e");
	unk_0xDD465543E2028AEA("move_m@gangster@var_f");
	unk_0xDD465543E2028AEA("move_m@gangster@generic");
	unk_0x8D17794CE3273D70("misschinese2_barrelRoll");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_variations@b");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@left");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@right");
	unk_0x8D17794CE3273D70("reaction@male_stand@big_intro@backward");
	unk_0x8D17794CE3273D70("misschinese2_bank1");
	unk_0x8D17794CE3273D70("misschinese2_bank5");
	unk_0x8D17794CE3273D70("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_159 = 0;
	iLocal_111 = 0;
	if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_POUR_GAS"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_POUR_GAS");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_SHOOT_GAS"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_SHOOT_GAS");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0x562F77A7F33D2E46("CHI_2_RAYFIRE"))
	{
		unk_0x8910D3D58E0132B8("CHI_2_RAYFIRE");
	}
	unk_0xE96F19797E59AB06();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_173());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_172(0);
	}
	if (iParam0 != 0)
	{
		uLocal_173 = unk_0x57651D42225429CC(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (unk_0xB39672D8C1F6BB48(uLocal_173))
			{
				unk_0xCADC8175C61F28E5(uLocal_173, 2);
			}
			iLocal_174 = 0;
		}
	}
}

void func_361()
{
	unk_0x24FB7F7A9C3EBEC5(-455129387, 31);
}

void func_362(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_363(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_98781 > 0)
	{
		Global_105187.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_102203.f_21[iParam1] = iVar0;
	}
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_98781 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_364()
{
	int iVar0;
	
	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_365()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

int func_366()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_367(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_368()
{
	unk_0xF63400DBE3303D26("MYFRIEND", &iLocal_115);
	unk_0xF63400DBE3303D26("FOE", &iLocal_116);
	unk_0xF63400DBE3303D26("IGNORE", &iLocal_117);
	unk_0xF63400DBE3303D26("BARpeds", &iLocal_154);
	unk_0x0E2400AB9174FA81(3, iLocal_154, 1862763509);
	unk_0x0E2400AB9174FA81(5, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()), iLocal_116);
	unk_0x0E2400AB9174FA81(5, iLocal_116, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
	unk_0x0E2400AB9174FA81(2, iLocal_115, iLocal_117);
	unk_0x0E2400AB9174FA81(2, iLocal_116, iLocal_117);
	unk_0x0E2400AB9174FA81(2, iLocal_117, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
	unk_0x0E2400AB9174FA81(2, iLocal_117, iLocal_116);
}

void func_369()
{
	switch (iLocal_575)
	{
		case 0:
			if (iLocal_149 >= 4)
			{
				func_370(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 1:
			if (iLocal_149 >= 4 && iLocal_149 < 7)
			{
				if (func_93(12) || iLocal_149 == 6)
				{
					func_370(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 7)
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"), 0))
				{
					func_370(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 7)
			{
				func_370(2, "Inside House", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 2:
			if (iLocal_149 >= 7)
			{
				func_370(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 3:
			if (iLocal_149 == 9)
			{
				func_370(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_575++;
			}
			break;
	}
}

void func_370(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x7F8A39872A07D2CE("FinaleC2", unk_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_442(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_440(unk_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_438(iVar1);
			cVar3 = { Global_89532[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x353729B0A07DC11A(&cVar3, iVar2, Global_98781, iParam0);
		}
		else
		{
			iVar4 = func_433(unk_0xBB0808A181D4745C(), 1);
			if (iVar4 != -1)
			{
				Global_111638.f_18569[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_432(iVar4)}, 4);
				unk_0x353729B0A07DC11A(&uVar5, 0, Global_98781, iParam0);
			}
			else
			{
				iVar6 = func_431(&(Global_98744.f_3));
				if (iVar6 > -1)
				{
					Global_111638.f_24981.f_4[iVar6] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_371(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_371(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_372(&Global_105187, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_372(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_48();
	uParam0->f_1 = func_420();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_396(&(uParam0->f_2884), 0);
		func_395(unk_0x16F2683693E537C9());
		func_388(unk_0x16F2683693E537C9(), 0);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_387())
		{
			func_381(unk_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_374(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_373(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_373(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_374(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_51(iParam2);
	}
	if (func_380(iParam2, &iVar0, iParam3, iParam5))
	{
		func_375(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
			{
				func_375(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_375(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0))
	{
		func_377(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_376(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_377(var uParam0, int iParam1, int iParam2)
{
	func_289(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_379(iParam1, 145, 0);
	uParam0->f_11 = func_309(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_378(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_378(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (iParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || unk_0x134B62B726CEC8E6(iParam0) == func_318(iParam1, iParam2))
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

int func_380(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 1);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, true), unk_0x68F4C0EC296D3901(iParam0, true), true) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, -1, 0) != iParam0 && unk_0xA30B8362589C124A(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_78(*uParam1, func_48(), 1))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_381(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_51(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_386(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_385(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_50(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_384(161, iParam3))
			{
				uParam1->f_59 = func_382(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_382(752, iParam3, 0);
			}
			uParam1->f_60 = func_382(753, iParam3, 0);
			uParam1->f_61 = func_382(754, iParam3, 0);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_384(161, iParam3))
			{
				uParam1->f_59 = func_382(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_382(752, iParam3, 0);
			}
		}
	}
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_383(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_383(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_384(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2583656[iParam0 /*3*/][func_383(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_385(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != -1)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_386(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_387()
{
	func_49();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_388(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_389(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_389(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_394(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_394(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_392(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_392(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_391(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_390(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_393(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_390(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_393(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_396(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_399(&iVar0))
		{
			if (func_398(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_48();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_397(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_397(vector3 vParam0, char* sParam1, vector3 vParam2)
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

bool func_398(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0);
}

int func_399(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_34())
		{
			*uParam0 = func_404(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_403(*uParam0) && !func_400(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_400(int iParam0)
{
	return func_401(iParam0, 0, 1);
}

int func_401(int iParam0, int iParam1, bool bParam2)
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
		if (func_25() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_382(func_402(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_402(int iParam0)
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

int func_403(int iParam0)
{
	return func_401(iParam0, 5, 1);
}

int func_404(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam1 == 6 || iParam1 == func_419(iVar0))
		{
			if (!bParam3 || func_418(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_405(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
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

Vector3 func_405(int iParam0, bool bParam1)
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
			return func_415(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_42())
			{
				if (func_414(Global_1590374))
				{
					return func_407(2, 2);
				}
				else if (func_406(Global_1590374))
				{
					return func_407(45, 3);
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

int func_406(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 0) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 1)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_407(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_42())
	{
		if (iParam1 == 3)
		{
			if (func_408(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_408(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_408(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_408(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_413(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_413(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_411(iParam0) };
	}
	else
	{
		Var2 = { func_410(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_409(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_409(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_409(vector3 vParam0, float fParam1)
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

struct<6> func_410(int iParam0)
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

struct<6> func_411(int iParam0)
{
	return func_412(iParam0);
}

struct<6> func_412(int iParam0)
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

int func_413(int iParam0, var uParam1)
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

int func_414(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_415(int iParam0)
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
			if (func_416() == 0)
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

int func_416()
{
	return func_417(unk_0xD803B885F5E47A62());
}

var func_417(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

int func_418(int iParam0)
{
	return func_401(iParam0, 0, 0);
}

int func_419(int iParam0)
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

var func_420()
{
	var uVar0;
	
	func_430(&uVar0, unk_0x4460E481B9E33ADA());
	func_429(&uVar0, unk_0x8D199E381D262EEF());
	func_428(&uVar0, unk_0xD8A54335F18763BA());
	func_423(&uVar0, unk_0x972A296334C9D57B());
	func_422(&uVar0, unk_0x118229AD063C3C1D());
	func_421(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_421(var uParam0, int iParam1)
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

void func_422(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_423(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_427(*uParam0);
	iVar1 = func_425(*uParam0);
	if (iParam1 < 1 || iParam1 > func_424(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_424(int iParam0, int iParam1)
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

var func_425(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_426(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_426(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_427(var uParam0)
{
	return uParam0 & 15;
}

void func_428(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_429(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_430(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_431(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_432(int iParam0)
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

int func_433(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_434(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_434(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_435(uParam1, "Abigail1", func_437(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 1:
			func_435(uParam1, "Abigail2", func_437(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 2:
			func_435(uParam1, "Barry1", func_437(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 3:
			func_435(uParam1, "Barry2", func_437(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 4:
			func_435(uParam1, "Barry3", func_437(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 5:
			func_435(uParam1, "Barry3A", func_437(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 6:
			func_435(uParam1, "Barry3C", func_437(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 7:
			func_435(uParam1, "Barry4", func_437(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_436(iParam0), 0, 0);
			break;
		
		case 8:
			func_435(uParam1, "Dreyfuss1", func_437(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 9:
			func_435(uParam1, "Epsilon1", func_437(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 10:
			func_435(uParam1, "Epsilon2", func_437(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 11:
			func_435(uParam1, "Epsilon3", func_437(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 12:
			func_435(uParam1, "Epsilon4", func_437(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 13:
			func_435(uParam1, "Epsilon5", func_437(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 14:
			func_435(uParam1, "Epsilon6", func_437(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 15:
			func_435(uParam1, "Epsilon7", func_437(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 16:
			func_435(uParam1, "Epsilon8", func_437(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 17:
			func_435(uParam1, "Extreme1", func_437(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 18:
			func_435(uParam1, "Extreme2", func_437(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 19:
			func_435(uParam1, "Extreme3", func_437(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 20:
			func_435(uParam1, "Extreme4", func_437(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 21:
			func_435(uParam1, "Fanatic1", func_437(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_436(iParam0), 1, 0);
			break;
		
		case 22:
			func_435(uParam1, "Fanatic2", func_437(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_436(iParam0), 1, 0);
			break;
		
		case 23:
			func_435(uParam1, "Fanatic3", func_437(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_436(iParam0), 0, 1);
			break;
		
		case 24:
			func_435(uParam1, "Hao1", func_437(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_436(iParam0), 0, 1);
			break;
		
		case 25:
			func_435(uParam1, "Hunting1", func_437(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 26:
			func_435(uParam1, "Hunting2", func_437(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 27:
			func_435(uParam1, "Josh1", func_437(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 28:
			func_435(uParam1, "Josh2", func_437(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 29:
			func_435(uParam1, "Josh3", func_437(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 30:
			func_435(uParam1, "Josh4", func_437(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 31:
			func_435(uParam1, "Maude1", func_437(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 32:
			func_435(uParam1, "Minute1", func_437(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 33:
			func_435(uParam1, "Minute2", func_437(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 34:
			func_435(uParam1, "Minute3", func_437(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 35:
			func_435(uParam1, "MrsPhilips1", func_437(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 36:
			func_435(uParam1, "MrsPhilips2", func_437(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 37:
			func_435(uParam1, "Nigel1", func_437(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 38:
			func_435(uParam1, "Nigel1A", func_437(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 39:
			func_435(uParam1, "Nigel1B", func_437(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_436(iParam0), 1, 1);
			break;
		
		case 40:
			func_435(uParam1, "Nigel1C", func_437(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_436(iParam0), 1, 1);
			break;
		
		case 41:
			func_435(uParam1, "Nigel1D", func_437(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_436(iParam0), 1, 1);
			break;
		
		case 42:
			func_435(uParam1, "Nigel2", func_437(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 43:
			func_435(uParam1, "Nigel3", func_437(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_436(iParam0), 1, 1);
			break;
		
		case 44:
			func_435(uParam1, "Omega1", func_437(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 45:
			func_435(uParam1, "Omega2", func_437(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 46:
			func_435(uParam1, "Paparazzo1", func_437(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 47:
			func_435(uParam1, "Paparazzo2", func_437(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 48:
			func_435(uParam1, "Paparazzo3", func_437(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 49:
			func_435(uParam1, "Paparazzo3A", func_437(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 50:
			func_435(uParam1, "Paparazzo3B", func_437(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 51:
			func_435(uParam1, "Paparazzo4", func_437(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 52:
			func_435(uParam1, "Rampage1", func_437(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 54:
			func_435(uParam1, "Rampage3", func_437(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 55:
			func_435(uParam1, "Rampage4", func_437(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 56:
			func_435(uParam1, "Rampage5", func_437(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_436(iParam0), 0, 0);
			break;
		
		case 53:
			func_435(uParam1, "Rampage2", func_437(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_436(iParam0), 1, 0);
			break;
		
		case 57:
			func_435(uParam1, "TheLastOne", func_437(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 58:
			func_435(uParam1, "Tonya1", func_437(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 59:
			func_435(uParam1, "Tonya2", func_437(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 60:
			func_435(uParam1, "Tonya3", func_437(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 61:
			func_435(uParam1, "Tonya4", func_437(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		case 62:
			func_435(uParam1, "Tonya5", func_437(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_436(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_435(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_436(int iParam0)
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

struct<2> func_437(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_432(iParam0) };
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

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_439(Global_111638.f_9080.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_439(Global_111638.f_9080.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_439(Global_111638.f_9080.f_99.f_205[11]);
			break;
		
		case 90:
			return func_439(Global_111638.f_9080.f_99.f_205[7]);
			break;
		
		case 93:
			return func_439(Global_111638.f_9080.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_440(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_441(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_441(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_442(bool bParam0)
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

void func_443(int iParam0)
{
	func_360(iParam0);
	unk_0x365391E40B6BA75B(1);
	unk_0xCE7D0828D683D536();
	unk_0x51B096AAC60548C1(1f);
	unk_0x34D79252800B23FF(5);
	unk_0x15EA7F4313456B1D(3, 1);
	func_211(0);
	func_94();
	unk_0x790015DC92C918E2();
	if (unk_0x49083FDB78AC0509(iLocal_148))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_148);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_petrolcan"));
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0)
		{
			if (func_73(unk_0x16F2683693E537C9(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2463.811f, 4961.747f, 44.176f, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_444()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_147(0))
	{
		if (!func_445())
		{
			iVar0 = func_146();
			if (iVar0 != -1)
			{
				if (!func_140(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_145();
		}
	}
}

int func_445()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

