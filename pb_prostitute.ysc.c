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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
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
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	float fLocal_319 = 0f;
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
	var uLocal_337 = 15;
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
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
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
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 1;
	int iLocal_611 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_319 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_551(unk_0xD803B885F5E47A62(), 1))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (func_550(unk_0xD803B885F5E47A62(), 1))
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	if (func_549(13) || func_549(14))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (!func_548() && !unk_0x8CD06866876216F2())
	{
		if (unk_0x2EBF608FFE6CA406(35))
		{
			func_539();
			func_538(1);
			func_533(&uLocal_337);
		}
	}
	wait(0);
	iLocal_90 = iScriptParam_611;
	if (unk_0x8CD06866876216F2())
	{
		func_532();
		unk_0x37AD2AB54480FA6A(2, 0, unk_0xD803B885F5E47A62());
		func_527(0, -1, 0);
		unk_0x256D93AFAE851A7A(0);
	}
	func_526();
	func_525(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_522(&uLocal_337);
		if (func_548())
		{
			if (func_521(1024))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0xCCBA4C0B3BD2AB7B(unk_0x16F2683693E537C9()) && unk_0x8A83E339B374E53A(unk_0x16F2683693E537C9()))
					{
						func_525(1024);
						unk_0xE7EE28867F07D06D(unk_0x16F2683693E537C9());
					}
				}
			}
			if (!func_521(1024) && func_521(2048))
			{
				unk_0x10FAF14A60A0DBE1();
			}
			if (!unk_0xC844350D5D58C99A(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				bVar0 = false;
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
		}
		if (!func_548() || !func_521(2048))
		{
			func_514();
			if (func_548())
			{
				func_513();
				if (func_521(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_508())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_503(&uLocal_337);
					}
					func_501();
					func_499();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (unk_0x94C3EBF41911ED33(iLocal_90))
								{
									iLocal_284 = func_498();
								}
								else if (func_496())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_491())
							{
								if (func_490())
								{
									if (func_548())
									{
										if (unk_0xAFE0D3608EDA7039(iLocal_90))
										{
											unk_0x509B8296EBA9B408(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											unk_0x0C8A454B494DAA0D(iLocal_90);
										}
									}
									else
									{
										unk_0x509B8296EBA9B408(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_285 = 1;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_488(iLocal_49, 4096))
							{
								func_487();
							}
							if (func_486())
							{
								iLocal_285 = 2;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_482())
							{
								iLocal_285 = 3;
								func_480(&iLocal_49, 64);
								Global_30920 = 1;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_98(&uLocal_337);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		wait(0);
	}
	if (func_488(iLocal_49, 2))
	{
	}
	func_489(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_539();
	func_533(&uLocal_337);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_286 > 0)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
			{
				if (!unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
				{
					func_97();
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_91) || unk_0x437347B10A200C4B(iLocal_91, 0))
	{
		func_96(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_71();
			break;
		
		case 4:
			func_62();
			break;
		
		case 5:
			func_59();
			break;
		
		case 6:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 7)
				{
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !unk_0x12DE711B1C681E9E(iLocal_90, iLocal_91, 12f, 12f, 5f, 0, 1, 0))
					{
						func_489("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 7:
			if (!unk_0xD1B4D22E0BA9B0C8(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				unk_0x10FEEAFF01E32639(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				unk_0xE9362E4D600DD12A(iLocal_91, iLocal_92, vLocal_88, (unk_0xD890711CFD5AF100(iLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		
		case 8:
			if (vdist2(vLocal_88, unk_0x68F4C0EC296D3901(iLocal_90, true)) < 25f && unk_0xD1960163A3042274(iLocal_91, -1817882002) != 1)
			{
				iLocal_288 = unk_0x09AC81E49EA267F7(1, 3);
				iLocal_286 = 11;
			}
			if (func_55(iLocal_91))
			{
				func_96(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_96(15);
			break;
		
		case 15:
			if (unk_0xC844350D5D58C99A(iLocal_90) && unk_0xC844350D5D58C99A(iLocal_92))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_92, 0))
				{
					if (!unk_0x437347B10A200C4B(iLocal_91, 0))
					{
						if (unk_0xD1960163A3042274(iLocal_91, -828834893) != 1)
						{
							unk_0x75CDA8644CD3B5F5(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0:
			unk_0x058FE8022E1E3C13(iLocal_90, 0.916f);
			if (func_42(iLocal_91))
			{
				func_40(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), unk_0x68F4C0EC296D3901(iLocal_90, false)) < 22500f)
			{
				func_38();
			}
			func_35(iLocal_92);
			if (func_33(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		
		case 3:
			func_96(15);
			break;
		
		case 5:
			func_96(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

bool func_10(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_29();
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
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_18();
		func_13();
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
		func_31();
	}
	return 0;
}

void func_13()
{
	if (!func_14())
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

int func_14()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_17())
	{
		return 0;
	}
	if (func_15(unk_0xD803B885F5E47A62()))
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

bool func_15(int iParam0)
{
	return func_16(iParam0, 20);
}

bool func_16(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_17()
{
	return -1;
}

void func_18()
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

void func_19()
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

int func_20()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
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

void func_22()
{
	if (func_549(14))
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
		Global_19486 = func_23();
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

int func_23()
{
	func_24();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_27(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_26(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_549(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_33(int iParam0)
{
	if (func_34())
	{
		if (!unk_0x6FAACDB2BF63CD65(unk_0x134B62B726CEC8E6(iParam0), unk_0x68F4C0EC296D3901(iParam0, true), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (Global_21841)
	{
		return 1;
	}
	return 0;
}

void func_35(int iParam0)
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&iParam0);
	}
}

void func_36(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDF1306B443CD3D15(*uParam0, 0))
	{
		vVar0 = { 0f, 0f, -0.1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0xDFC6BA855748EB10(*uParam0, 1, vVar0, vVar1, 0, 1, 1, 1, 1, 0);
	}
}

bool func_37()
{
	return unk_0xDDCA9A4E51DADA2B(iLocal_90, 876132797);
}

void func_38()
{
	unk_0xC2127C0F64D6A3B9();
	func_39();
}

void func_39()
{
	Global_22211.f_134 = 1;
}

void func_40(int iParam0)
{
	func_41(iParam0, 0f);
}

void func_41(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_42(int iParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sLocal_61))
	{
		sLocal_61 = func_50(iParam0, 0, 0);
		return 0;
	}
	if (!unk_0xB4AE0788C1587752(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_43(iLocal_90, func_49(), 1, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_43(iParam0, func_49(), 0, floor((15000f * (1f + (to_float(iLocal_70) / 2f)))), 1);
		}
		func_489("anim_dict has loaded, triggering anims?");
		func_480(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(iParam0, 1);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		return;
	}
	iLocal_48 = unk_0x6C3F127AAF415E69();
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) && func_48(0, 1))
	{
		if (iLocal_48 != 4)
		{
			unk_0xA79E2388E9C0B0DB(4);
		}
	}
	bVar1 = func_47(iVar0);
	sVar2 = func_50(iParam0, 0, 0);
	if (!unk_0xB4AE0788C1587752(sVar2))
	{
		unk_0x3F423BF5B8125A50(sVar2);
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&iVar3);
		unk_0xC6EB89C59F2AF6B8(0, sVar2, func_44(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, sVar2, func_44(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, sVar2, func_44(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, sVar2, func_44(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, sVar2, func_44(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x75ABDC5F81978924(iVar3);
		unk_0x78ADC381772E3D54(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xF82EA857DA10E0CD(&iVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(18);
					}
					else
					{
						sVar0 = func_46(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(8);
				}
				else
				{
					sVar0 = func_46(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(18);
				}
				else
				{
					sVar0 = func_45(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(8);
			}
			else
			{
				sVar0 = func_45(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(19);
					}
					else
					{
						sVar0 = func_46(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(9);
				}
				else
				{
					sVar0 = func_46(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(19);
				}
				else
				{
					sVar0 = func_45(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(9);
			}
			else
			{
				sVar0 = func_45(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(21);
					}
					else
					{
						sVar0 = func_46(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(11);
				}
				else
				{
					sVar0 = func_46(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(21);
				}
				else
				{
					sVar0 = func_45(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(11);
			}
			else
			{
				sVar0 = func_45(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(22);
					}
					else
					{
						sVar0 = func_46(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(12);
				}
				else
				{
					sVar0 = func_46(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(22);
				}
				else
				{
					sVar0 = func_45(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(12);
			}
			else
			{
				sVar0 = func_45(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(3);
				}
				else
				{
					sVar0 = func_46(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(3);
			}
			else
			{
				sVar0 = func_45(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xA4FD7964FEE91ED8(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xA4FD7964FEE91ED8(1) == 4;
		}
	}
	return bVar0;
}

bool func_49()
{
	return iLocal_288 == 0;
}

char* func_50(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 1);
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (func_47(iVar0))
			{
				if ((!func_48(0, 1) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == 1456336509)
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0, 1) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(int iParam0)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x36646919F20EAFFC(iParam0) || !func_57(iParam0, iLocal_92, -1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
			unk_0xBAFED2F6486F771A(iParam0, 196624, true);
			if (func_56())
			{
				unk_0xEEB67C3D0A71A47B(iParam0, vVar0, 300f, -1, 1, 1);
			}
			else if (!unk_0x437347B10A200C4B(unk_0x710D117BA581D7D2(iParam0), 0))
			{
				unk_0x6C3AE6E278DB3D0E(iParam0, unk_0x710D117BA581D7D2(iParam0), 0, 16);
			}
			else
			{
				unk_0xEEB67C3D0A71A47B(iParam0, vVar0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}

int func_56()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)
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

float func_58(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_59()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 1)
				{
					if (unk_0x4F1B602325013CC2(iLocal_90) > 0)
					{
						if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_92, 0))
						{
							func_489("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xDD353D0E9C789D0E(&iLocal_95);
							unk_0xE072601B4380E9DF(0, iLocal_92, 10f, 786603);
							unk_0x75ABDC5F81978924(iLocal_95);
							unk_0x78ADC381772E3D54(iLocal_91, iLocal_95);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							vLocal_88 = { func_60(unk_0x68F4C0EC296D3901(iLocal_90, true)) };
							unk_0x3F423BF5B8125A50(func_50(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (vdist2(vParam0, func_61(iVar1)) < vdist2(vParam0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			vVar0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			vVar0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			vVar0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			vVar0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			vVar0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			vVar0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			vVar0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			vVar0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			vVar0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			vVar0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			vVar0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			vVar0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			vVar0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			vVar0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			vVar0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			vVar0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			vVar0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			vVar0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			vVar0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			vVar0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			vVar0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			vVar0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			vVar0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			vVar0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			vVar0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			vVar0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			vVar0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			vVar0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			vVar0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			vVar0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			vVar0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return vVar0;
}

void func_62()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
				if (unk_0x12DE711B1C681E9E(iLocal_91, iLocal_90, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_69(iLocal_90);
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_548())
						{
							if (unk_0xAFE0D3608EDA7039(iLocal_91))
							{
								unk_0xBC43ED9FE28DB191(iLocal_91);
							}
						}
						else
						{
							unk_0xBC43ED9FE28DB191(iLocal_91);
						}
						iLocal_66 = unk_0x09AC81E49EA267F7(0, 10000);
						if (iLocal_66 > 2500)
						{
							unk_0xA3BF0AA5A2608191(iLocal_90);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							unk_0xDD353D0E9C789D0E(&iLocal_95);
							unk_0x5B1D360B9C6F0A09(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							unk_0x93D47DFD0AE94949(0, -1);
							unk_0x75ABDC5F81978924(iLocal_95);
							unk_0x78ADC381772E3D54(iLocal_90, iLocal_95);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							func_489("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
								{
									if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
									{
										unk_0xF82EA857DA10E0CD(&iLocal_95);
										unk_0xDD353D0E9C789D0E(&iLocal_95);
										unk_0x93D47DFD0AE94949(0, unk_0x09AC81E49EA267F7(500, 2000));
										unk_0xE072601B4380E9DF(0, iLocal_92, 10f, 786603);
										unk_0x75ABDC5F81978924(iLocal_95);
										unk_0x78ADC381772E3D54(iLocal_91, iLocal_95);
										unk_0xF82EA857DA10E0CD(&iLocal_95);
										iLocal_62 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
							func_489("prostitute REFUSED MONEY 2");
							if (func_548())
							{
								if (unk_0xAFE0D3608EDA7039(iLocal_91))
								{
									unk_0xBC43ED9FE28DB191(iLocal_91);
								}
							}
							else
							{
								unk_0xBC43ED9FE28DB191(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_548())
					{
						if (unk_0xAFE0D3608EDA7039(iLocal_91))
						{
							unk_0xBC43ED9FE28DB191(iLocal_91);
						}
					}
					else
					{
						unk_0xBC43ED9FE28DB191(iLocal_91);
					}
					func_97();
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_548())
				{
					if (unk_0xAFE0D3608EDA7039(iLocal_91))
					{
						unk_0xBC43ED9FE28DB191(iLocal_91);
					}
				}
				else
				{
					unk_0xBC43ED9FE28DB191(iLocal_91);
				}
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iLocal_90) || unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 1;
	}
	if (!func_548())
	{
		if (unk_0x405E212DDE472467(iLocal_90, 1))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
		}
		else if (func_488(iLocal_49, 4194304))
		{
			unk_0xDD353D0E9C789D0E(&iVar0);
			if (func_488(iLocal_73, 524288))
			{
				unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_64(1);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iLocal_90, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
			func_480(&iLocal_49, 16384);
			func_40(&iLocal_107);
		}
		return 1;
	}
	if (unk_0x405E212DDE472467(iLocal_90, 1))
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x0C8A454B494DAA0D(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (func_488(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (func_488(iLocal_73, 524288))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		
		case 2:
			if (func_488(iLocal_73, 524288))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					if (unk_0xD1960163A3042274(iLocal_90, -2017877118) == 7)
					{
						func_64(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
			}
			else if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				func_64(0);
				iLocal_54 = 3;
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 3:
			func_480(&iLocal_49, 16384);
			func_40(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)
{
	vector3 vVar0;
	
	if (((unk_0xC7441A1068F3F171(iLocal_90) || unk_0x94C3EBF41911ED33(iLocal_90)) || unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0))) || unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(1)))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
	if (!unk_0xDB27A414FA5965A7(vVar0, func_65(0), 20f, 1) && !unk_0xDB27A414FA5965A7(vVar0, func_65(1), 20f, 1))
	{
		if (bParam0)
		{
			unk_0x01E4BB5190DF7317(0, 1193033728, 0);
		}
		else
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x4A35AD9FC803369E(iLocal_90, vVar0, 20f, 0);
	}
	else
	{
		unk_0x4A35AD9FC803369E(0, vVar0, 20f, 0);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		if (func_23() == 2)
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_69(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_70(iParam0))
		{
			unk_0x9DD8618CA5BF832D(iParam0, 109, true);
		}
	}
}

int func_70(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if ((unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(1), 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(2), 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 1)
				{
					if (unk_0x4F1B602325013CC2(iLocal_90) > 1)
					{
						if (unk_0x12DE711B1C681E9E(iLocal_90, iLocal_91, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_72(0);
								iLocal_62 = unk_0x1C0640BA9A7327B3();
								iLocal_66 = unk_0x09AC81E49EA267F7(4000, 8000);
								func_489("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							func_489("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_548())
	{
		if (bParam0)
		{
			unk_0x2E1E5367A885F9B7(iLocal_90, "PROSTITUTE_GROUP", 0);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_488(iLocal_49, 4194304))
		{
			iVar0 = unk_0x09AC81E49EA267F7(1, 4);
			unk_0xDD353D0E9C789D0E(&iVar1);
			unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iVar1);
			unk_0x78ADC381772E3D54(iLocal_90, iVar1);
			unk_0xF82EA857DA10E0CD(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				unk_0x2E1E5367A885F9B7(iLocal_90, "PROSTITUTE_GROUP", 0);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_488(iLocal_49, 4194304))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 2;
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
			}
			break;
		
		case 2:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x09AC81E49EA267F7(1, 4);
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_53 = 3;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 3:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, -2017877118) == 7)
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_53 = 4;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		iVar0 = Global_111638.f_10044.f_1[iParam0 /*11*/][0];
	}
	else if (func_23() == 1)
	{
		iVar0 = Global_111638.f_10044.f_1[iParam0 /*11*/][1];
	}
	else if (func_23() == 2)
	{
		iVar0 = Global_111638.f_10044.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(iParam0, iVar0) && func_79(iParam0, iVar0)) && func_78(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x61C907EA8258B04D(iParam0, Global_111638.f_10044.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	return unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_111638.f_10044.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam2);
	return unk_0x36C584991B4C183F(iParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_111638.f_10044.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_87(char* sParam0)
{
	if (!unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8BC9595FD2792B5D(sParam0);
	}
}

void func_88()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
				if (unk_0xD1960163A3042274(iLocal_91, -272084098) == 7 || fVar0 <= 1f)
				{
					unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0x68E4ADDDDCD7BDDE(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar5 = { unk_0x68E4ADDDDCD7BDDE(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar6 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
					if (vdist(vVar6, vVar5) < vdist(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					unk_0x96167B03C5A77156(0, vVar4.x, vVar4.y, vVar4.z, 1f, -1, 0.5f, 8192, 1193033728);
					unk_0xF96A174EE26D7588(0, iLocal_91, 0);
					unk_0x93D47DFD0AE94949(0, -1);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_90, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_489("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					func_489("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	vector3 vVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0))
			{
				if (func_91(&iLocal_92))
				{
					if (func_90(unk_0x68F4C0EC296D3901(iLocal_91, true), 1106247680))
					{
						return;
					}
					vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
					if (unk_0xDE5F9F54005367A1(vVar0, &vVar0, 8, 1077936128, 0))
					{
						unk_0x9992C3A6A1766168(iLocal_91, 1f);
						unk_0x7D9DF2375774CFE5(iLocal_91, 0.2f);
						unk_0x66ADF7B538DC60DC(iLocal_91, 0.05f);
						unk_0x27F3789FF35EEDF1(iLocal_91, iLocal_92, vVar0, 0f, 3, 360f, 1);
						unk_0x0C8C0C840C2D1AD2(iLocal_91, iLocal_90, -1, 2048, 4);
						func_489("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					func_489("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(vector3 vParam0, int iParam1)
{
	if (func_548())
	{
		return unk_0x029064EA9141FCC2(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x9E9FD30CF64A88A8(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0x029064EA9141FCC2(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(*iParam0, 0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(*iParam0);
		if (func_94(iVar0, 0) && func_93(*iParam0))
		{
			if (unk_0xD6DF381716822EFE(*iParam0) > 0)
			{
				iVar1 = unk_0x2720E241B5CCF780(*iParam0);
				if (((iVar1 == 0 && unk_0xBBA8A868118C90ED(*iParam0, 0, 0)) && (!unk_0x1150BCE24B1630AC(*iParam0, 1) && !unk_0x1150BCE24B1630AC(*iParam0, 0))) || unk_0xA30B8362589C124A(*iParam0, 0, 0) == iLocal_90)
				{
					if (func_47(*iParam0))
					{
						if (!func_488(iLocal_49, 32768))
						{
							func_480(&iLocal_49, 32768);
							if (!func_488(iLocal_49, 8))
							{
								unk_0x4E09E67A27F104A7(func_92());
								func_480(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_488(iLocal_49, 32768))
						{
							func_5(&iLocal_49, 32768);
						}
						if (func_488(iLocal_49, 8))
						{
							if (unk_0x59F02DA2266A744C(func_92()))
							{
								unk_0x413168EF79E35C7B(func_92());
								func_5(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
						iVar2 = unk_0x12AB0310C2281427(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case -1804415708:
				if ((!unk_0xDD62D560CFE11A27(iParam0, 2) && !unk_0xDD62D560CFE11A27(iParam0, 3)) && !unk_0xDD62D560CFE11A27(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case 1107404867:
				if (((!unk_0xDD62D560CFE11A27(iParam0, 2) && !unk_0xDD62D560CFE11A27(iParam0, 3)) && !unk_0xDD62D560CFE11A27(iParam0, 4)) && !unk_0xDD62D560CFE11A27(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case -1728685474:
				if (!unk_0xDD62D560CFE11A27(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case -682108547:
				if (unk_0x0ECB5CA5140957AD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case 1717532765:
				if (unk_0xDD62D560CFE11A27(iParam0, 1))
				{
					return 0;
				}
				break;
		}
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
				return 1;
				break;
		}
		if (unk_0x1F099C9E2AE4874D(iParam0) == 931866387 && unk_0x134B62B726CEC8E6(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0, bool bParam1)
{
	if ((((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0)) || unk_0x7D8B2A8F9EA82DB7(iParam0))
	{
		return 0;
	}
	if (func_95(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303) || iParam0 == 444994115) || iParam0 == -941272559) || iParam0 == -507495760) || iParam0 == 408825843)
	{
		return 0;
	}
	return 1;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

void func_96(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_97()
{
	if (func_548())
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0xA3BF0AA5A2608191(iLocal_90);
			unk_0xBC43ED9FE28DB191(iLocal_90);
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		unk_0xBC43ED9FE28DB191(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, unk_0x79833B02DBD2A244(0f, 0.9f), 0, 0, 0);
	func_96(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_98(var uParam0)
{
	if (!func_488(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!func_488(iLocal_49, 33554432))
		{
			if (func_548())
			{
				if (Global_1653537 || func_472())
				{
					func_471(0);
					func_480(&iLocal_49, 33554432);
				}
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
			{
				if (func_488(iLocal_49, 1048576) || func_488(iLocal_49, 8192))
				{
					func_471(0);
					func_480(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (func_488(iLocal_49, 16384) || func_488(iLocal_49, 8388608))
			{
				if (!func_10(&iLocal_107))
				{
					func_470(&iLocal_107);
				}
				if (func_469(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !func_468("PROS_NO_MONEY"))
			{
				func_64(0);
				switch (func_23())
				{
					case 0:
						func_467(&uLocal_116, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_467(&uLocal_116, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_467(&uLocal_116, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_466();
				iLocal_287 = 2;
			}
			break;
		
		case 1:
			func_453(uParam0);
			break;
		
		case 2:
			func_440(uParam0);
			break;
		
		case 3:
			func_439();
			break;
		
		case 4:
			func_427(uParam0);
			break;
		
		case 5:
			func_412();
			break;
		
		case 6:
			func_411(uParam0);
			break;
		
		case 7:
			func_390();
			func_382();
			break;
		
		case 8:
			func_379();
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_548())
			{
				func_226(uParam0);
			}
			break;
		
		case 9:
			func_223();
			break;
		
		case 10:
			func_220();
			break;
		
		case 11:
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_548())
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 433, true);
				func_226(uParam0);
			}
			break;
		
		case 12:
			func_487();
			break;
		
		case 13:
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_103();
			break;
		
		case 14:
			func_102();
			break;
		
		case 15:
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_548())
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (func_488(iLocal_49, 16))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 1);
			func_5(&iLocal_49, 16);
		}
	}
	if (func_488(iLocal_49, 2))
	{
		func_100(1);
		func_489("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(6);
		}
		else
		{
			return func_45(7);
		}
	}
	if (bParam0)
	{
		return func_46(6);
	}
	return func_46(7);
}

void func_102()
{
	if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_70 == 0)
		{
			if (func_488(iLocal_49, 134217728))
			{
				unk_0xBAFED2F6486F771A(iLocal_90, 32768, false);
				unk_0xBAFED2F6486F771A(iLocal_90, 196624, true);
			}
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}
}

void func_103()
{
	switch (iLocal_294)
	{
		case 0:
			if (!unk_0x7DECE00E09F41C95(iLocal_90) || func_121(&iLocal_101) > 4f)
			{
				func_116(iLocal_90);
				if (func_76(func_77(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					func_115(&iLocal_101);
					func_114("PROS_RESPONSE");
					iLocal_294 = 1;
				}
			}
			break;
		
		case 1:
			func_113();
			if (unk_0x7DECE00E09F41C95(iLocal_90) || func_112())
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 256);
				func_480(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_40(&iLocal_101);
				}
				if (func_121(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					unk_0xA37A90C62806D848(1);
					func_111();
					iLocal_294 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_112())
			{
				iLocal_294 = 3;
			}
			break;
		
		case 3:
			func_106(0);
			func_104();
			func_96(15);
			break;
	}
}

int func_104()
{
	if (func_105(0))
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

bool func_105(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

void func_106(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0xEBA53F35D0085654(&iLocal_90);
		}
		else
		{
			func_107(iLocal_90, bParam0);
		}
	}
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0, 0), func_110(1), 3))
	{
		unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0, 0), func_101(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				unk_0x9FD50E5122D8E89D(iParam0);
			}
		}
		else
		{
			unk_0x9FD50E5122D8E89D(iParam0);
		}
		if (func_488(iLocal_49, 33554432))
		{
			unk_0xA3BF0AA5A2608191(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x79833B02DBD2A244(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_480(&iLocal_49, 134217728);
			}
		}
		if (func_488(iLocal_49, 134217728))
		{
			unk_0xBAFED2F6486F771A(iParam0, 32768, true);
			unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 300f, -1, 1, 0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(iParam0, 196624, true);
			unk_0xF82EA857DA10E0CD(&iVar0);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0xD93EE6549113F9E1(0, 1);
			if (unk_0x405E212DDE472467(iParam0, 0))
			{
				if (!unk_0x8B38C0DAEEDB5F9C(unk_0x6937EA2286828455(iParam0, 0)))
				{
					func_109(iParam0, 1);
				}
				else
				{
					if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(iParam0, 0, 0), func_110(0), 3))
					{
						if (iLocal_70 > 0)
						{
							unk_0xC6EB89C59F2AF6B8(0, func_50(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(0, func_50(iParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_109(iParam0, 1);
				}
			}
			unk_0xD93EE6549113F9E1(0, 0);
			unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iParam0, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		if (func_548())
		{
			if (unk_0xFEC78493E359E4B0(iLocal_90))
			{
				if (unk_0x83F012E6200426DB(unk_0x7D3E8C4CDBD80BDF(iLocal_90)))
				{
					unk_0xFADC0A217229F6B5(iParam0, true);
				}
			}
		}
		else
		{
			unk_0xFADC0A217229F6B5(iParam0, true);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(4);
		}
		else
		{
			return func_45(5);
		}
	}
	if (bParam0)
	{
		return func_46(4);
	}
	return func_46(5);
}

void func_109(int iParam0, int iParam1)
{
	if (!unk_0x3CAA763EEC01ADF7(iParam0, unk_0x6937EA2286828455(iParam0, 0), 0, 0, false))
	{
		unk_0x75CDA8644CD3B5F5(0, 0, 16842752);
	}
	else
	{
		unk_0x75CDA8644CD3B5F5(0, 0, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(2);
		}
		else
		{
			return func_45(3);
		}
	}
	if (bParam0)
	{
		return func_46(2);
	}
	return func_46(3);
}

void func_111()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_112()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	if (iLocal_297 == 0)
	{
		unk_0xF3039DE1FDB4F6FD(false);
		unk_0x38C3A68D7861DCFD(0, 99, 1);
		unk_0x38C3A68D7861DCFD(0, 76, 1);
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		unk_0x558EC149EB2BC0A2(2, 203);
		unk_0x558EC149EB2BC0A2(2, 201);
		unk_0x558EC149EB2BC0A2(2, 202);
		if (unk_0xB9132A06AE472728(2, 203))
		{
			unk_0xA37A90C62806D848(1);
			unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (unk_0xB9132A06AE472728(2, 201))
		{
			unk_0xA37A90C62806D848(1);
			unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (unk_0xB9132A06AE472728(2, 202))
		{
			unk_0xA37A90C62806D848(1);
			unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_114(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_115(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		if (unk_0x7DECE00E09F41C95(iParam0))
		{
			unk_0x0FB22E2FED7BCC7E(iParam0);
		}
		if (!unk_0x7DECE00E09F41C95(iParam0))
		{
			func_118(iParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 4, 0, 0, 0);
	}
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		func_120(&uLocal_116, 4);
		func_467(&uLocal_116, 6, iParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_121(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_548())
	{
		return;
	}
	bVar0 = false;
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xA30B8362589C124A(iVar1, -1, 0) != unk_0x16F2683693E537C9())
				{
					bVar0 = true;
				}
				if (unk_0xA30B8362589C124A(iVar1, 0, 0) != iLocal_90)
				{
					bVar0 = true;
				}
				if (unk_0x2720E241B5CCF780(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0x835730A2D89F6093(iLocal_93, 2) };
		unk_0x2FB9A57162E54BAB(180f);
		unk_0xEF6276132B396452((-5.5f - vVar0.x), 1065353216);
	}
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	func_124(&(Local_300[0 /*7*/]));
	func_124(&(Local_300[3 /*7*/]));
	func_124(&(Local_300[2 /*7*/]));
	func_124(&(Local_300[1 /*7*/]));
	if (func_468("PROS_CAM_TOG") || func_468("PROS_CAM_OC"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_124(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0);
	}
}

void func_125()
{
	if (unk_0xDF1306B443CD3D15(iLocal_93, 0))
	{
		unk_0xACCB31D58716FE8F(iLocal_93, 1);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_219(iLocal_74) && !func_219(iLocal_75)) && !func_219(iLocal_76)) && !func_219(iLocal_77)) && !func_219(iLocal_78)) && !func_219(iLocal_79)) && !func_219(iLocal_80))
		{
			if (!unk_0x0E0E6175453415CB(iLocal_90) || unk_0x688A90832774AB83(unk_0x16F2683693E537C9()))
			{
				iLocal_293 = 5;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 0))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	unk_0x3584F71E5CA29322(2);
	unk_0x38C3A68D7861DCFD(2, 19, 1);
	unk_0x38C3A68D7861DCFD(2, 37, 1);
	func_213(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_548())
			{
				func_210(1088, -1);
			}
			func_40(&iLocal_113);
			func_209(func_49(), func_488(iLocal_49, 32768));
			iLocal_293 = 1;
			func_489("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			unk_0x38C3A68D7861DCFD(0, 48, 1);
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			func_202();
			func_195();
			func_134();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
					}
					else
					{
						func_129();
						unk_0xA79E2388E9C0B0DB(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		
		case 2:
			unk_0x38C3A68D7861DCFD(0, 48, 1);
			func_202();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_48(0, 1))
			{
				unk_0x38C3A68D7861DCFD(0, 0, 1);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_296 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
						func_115(&iLocal_98);
					}
				}
			}
			break;
		
		case 3:
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x7DECE00E09F41C95(iLocal_90))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				func_128();
				unk_0xA79E2388E9C0B0DB(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		
		case 5:
			unk_0x38C3A68D7861DCFD(0, 0, 1);
			if (!unk_0x7DECE00E09F41C95(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0);
					}
				}
				else
				{
					func_489("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_471(1);
				}
			}
			break;
	}
}

void func_126()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_70 == 0)
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(iLocal_90))
		{
			func_40(&iLocal_101);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 768);
			func_480(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_128()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_129()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_130()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_131(char* sParam0)
{
	if (unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8910D3D58E0132B8(sParam0);
	}
}

int func_132()
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	unk_0xD1B833B834838C01();
	unk_0xDC355804A9511111();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xEA6BC48857E0AC4C(func_50(unk_0x16F2683693E537C9(), 0, 0)))
	{
		return;
	}
	if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0, 0)))
	{
		return;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
	}
	bVar1 = func_49();
	bVar2 = func_488(iLocal_49, 32768);
	if (!func_48(0, 1))
	{
		func_189(&iLocal_81);
	}
	unk_0x38C3A68D7861DCFD(2, 19, 1);
	unk_0x38C3A68D7861DCFD(2, 37, 1);
	func_188(23, 1);
	switch (iLocal_296)
	{
		case 0:
			func_5(&iLocal_49, 256);
			if (!func_48(0, 1))
			{
				func_183(&iLocal_81);
			}
			func_182(iLocal_90, 0);
			if (!func_548())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		
		case 1:
			func_179(iLocal_74);
			if (func_219(iLocal_75))
			{
				if (!func_488(iLocal_50, 4))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_75) >= fVar0)
					{
						func_480(&iLocal_50, 4);
					}
				}
			}
			if (func_219(iLocal_74))
			{
				if (!func_488(iLocal_50, 8))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_74) >= fVar0)
					{
						func_480(&iLocal_50, 8);
					}
				}
			}
			if (func_488(iLocal_50, 4) && func_488(iLocal_50, 8))
			{
				if (!func_548())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			func_179(iLocal_76);
			if (func_219(iLocal_76))
			{
				if (!func_488(iLocal_50, 16))
				{
					if (!func_548())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_76) >= fVar0)
					{
						func_480(&iLocal_50, 16);
					}
				}
			}
			if (func_488(iLocal_50, 16))
			{
				if (!func_548())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			func_179(iLocal_77);
			if (func_219(iLocal_77))
			{
				if (!func_488(iLocal_50, 64))
				{
					if (!func_488(iLocal_49, 16777216))
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) >= fVar0)
						{
							func_480(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= func_167(func_548(), func_173(), func_168()))
					{
						func_480(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_488(iLocal_50, 64))
			{
				func_480(&iLocal_50, 64);
			}
			if (func_488(iLocal_50, 64))
			{
				if (!func_548())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		
		case 4:
			func_179(iLocal_78);
			if (func_219(iLocal_78))
			{
				if (!func_488(iLocal_50, 256))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_78) >= fVar0)
					{
						func_480(&iLocal_50, 256);
					}
				}
			}
			else if (!func_488(iLocal_50, 256))
			{
				func_480(&iLocal_50, 256);
			}
			if (func_488(iLocal_50, 256))
			{
				if (!func_548())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		
		case 5:
			func_179(iLocal_79);
			if (func_219(iLocal_79))
			{
				if (!func_488(iLocal_50, 1024))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_79) >= fVar0)
					{
						func_480(&iLocal_50, 1024);
					}
				}
			}
			else if (!func_488(iLocal_50, 1024))
			{
				func_480(&iLocal_50, 1024);
			}
			if (func_219(iLocal_80))
			{
				if (!func_488(iLocal_50, 2048))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_80) >= fVar0)
					{
						func_480(&iLocal_50, 2048);
					}
				}
			}
			else if (!func_488(iLocal_50, 2048))
			{
				func_480(&iLocal_50, 2048);
			}
			if (func_488(iLocal_50, 1024) && func_488(iLocal_50, 2048))
			{
				func_182(iLocal_90, 0);
				unk_0xC6EB89C59F2AF6B8(iLocal_90, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_182(unk_0x16F2683693E537C9(), -1);
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_123(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_548())
	{
		if (func_26(unk_0x16F2683693E537C9()) == 0)
		{
			func_156();
		}
		func_151(296, 0, 0);
		iVar0 = func_77(iLocal_90);
		if (iVar0 > -1)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(iLocal_90);
		}
	}
	iLocal_70++;
	func_136();
}

void func_136()
{
	switch (func_26(unk_0x16F2683693E537C9()))
	{
		case 0:
			Global_111638.f_10044.f_90[0]++;
			func_137(0, 1, 1);
			break;
		
		case 1:
			Global_111638.f_10044.f_90[1]++;
			func_137(1, 1, 1);
			break;
		
		case 2:
			Global_111638.f_10044.f_90[2]++;
			func_137(2, 1, 1);
			break;
		
		case 3:
			func_137(3, 1, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_141(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_138(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_140();
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

int func_140()
{
	return Global_1312745;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_139(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == -1)
	{
		return;
	}
	func_150(iVar0);
	unk_0x5F2AA9E2843E9403(iParam0, func_147(iVar0));
	Global_111638.f_10044.f_1[iVar0 /*11*/].f_10 = unk_0x134B62B726CEC8E6(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_146(iParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_144(iParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_111638.f_10044.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(int iParam0, int iParam1)
{
	return unk_0xDADA8E1DD0D0D9D9(iParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_111638.f_10044.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(int iParam0, int iParam1)
{
	return unk_0x36C584991B4C183F(iParam0, func_86(iParam1));
}

var func_147(int iParam0)
{
	return func_148(iParam0);
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_150(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23() == 0)
		{
			Global_111638.f_10044.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_23() == 1)
		{
			Global_111638.f_10044.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_23() == 2)
		{
			Global_111638.f_10044.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
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
		func_155((891 + iParam0), 1, -1, 1);
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
		func_152();
	}
}

void func_152()
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
		func_154(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_153() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_104();
				}
			}
		}
	}
}

int func_153()
{
	return Global_30768;
}

int func_154(int iParam0, int iParam1)
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

int func_155(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_140();
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

void func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_95206[iVar0] = Global_95206[iVar0 + 1];
		}
		else
		{
			Global_95206[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_157(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_79, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x16F2683693E537C9(), iLocal_80, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_158(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (func_548())
	{
		unk_0x914E6894744915F8(iParam1);
	}
	else
	{
		unk_0x915804B434753CBD(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_79, 1, 0, 0);
	func_160(iLocal_90, iLocal_79, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(&iLocal_80, 0, 0, 0);
	func_160(unk_0x16F2683693E537C9(), iLocal_80, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_160(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_548())
	{
		unk_0x753499827286A5DA(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_164(vVar0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_163(*iParam0, iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_163(*iParam0, iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "seat_pside_f"));
	}
	func_162(*iParam0, vVar0, 0f, 0f, 0f, 0);
}

void func_162(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)
{
	if (!func_548())
	{
		unk_0x83CBE93AD851E045(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		return;
	}
	if (func_548())
	{
		unk_0xF047879501228A69(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x6BE2EAE992FD7C26(iParam0, iParam1, iParam2);
	}
}

int func_164(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (func_548())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = unk_0xF66E5A439A080021(vParam0, vParam1, iParam4, bParam2, bParam3, 1065353216, 0, 1065353216);
	}
	else
	{
		iVar0 = unk_0xE9744DB7B8CA6965(vParam0, vParam1, iParam4);
		unk_0xEFC3DF9D33E248D8(iVar0, bParam2);
		unk_0xC90224D9E95E5E3A(iVar0, bParam3);
	}
	return iVar0;
}

void func_165(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_78, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x16F2683693E537C9(), iLocal_78, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_78, 0, 0, 1);
	func_160(iLocal_90, iLocal_78, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0x16F2683693E537C9(), iLocal_78, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_169()
{
	if (func_548())
	{
		return func_141(65, -1, 0);
	}
	return func_170(func_26(unk_0x16F2683693E537C9()), 1);
}

var func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0, iParam1);
	unk_0x6FB46C25CCB7E6D5(iVar1, &uVar0, -1);
	return uVar0;
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_172(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_173()
{
	int iVar0;
	
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_77, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x16F2683693E537C9(), iLocal_77, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_77, 0, 1, 0);
	func_160(iLocal_90, iLocal_77, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_160(unk_0x16F2683693E537C9(), iLocal_77, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_76, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(unk_0x16F2683693E537C9(), iLocal_76, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_76, 0, 0, 1);
	func_160(iLocal_90, iLocal_76, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(unk_0x16F2683693E537C9(), iLocal_76, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_178(int iParam0)
{
	float fVar0;
	
	if (func_548())
	{
		fVar0 = unk_0xA45992A6CE82FB43(unk_0xF958843510932FF6(iParam0));
	}
	else
	{
		fVar0 = unk_0xA45992A6CE82FB43(iParam0);
	}
	return fVar0;
}

void func_179(int iParam0)
{
	if (!func_219(iParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_74, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_158(unk_0x16F2683693E537C9(), iLocal_75, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_548())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_74, 1, 0, 1);
	func_160(iLocal_90, iLocal_74, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_161(&iLocal_75, 0, 0, 1);
	func_160(unk_0x16F2683693E537C9(), iLocal_75, func_50(unk_0x16F2683693E537C9(), 0, 0), func_44(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_182(int iParam0, int iParam1)
{
	if (!unk_0xC42A92762C58E1B9(iParam0, iLocal_93, 0))
	{
		if (!func_548())
		{
			unk_0xF821F915BC24D246(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0xC42A92762C58E1B9(iParam0, iLocal_93, 0))
		{
			unk_0x5B1D360B9C6F0A09(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_185(func_186(2), unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")));
	uVar1 = func_185(func_186(1), unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")));
	vVar2 = { unk_0x835730A2D89F6093(iLocal_93, 2) };
	fVar3 = unk_0xD9522BA9E27E1349(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2.5f + vVar2.x);
	fVar8 = ((0f - (0.7f * vVar2.x)) + (0.3f * vVar2.y));
	if (!unk_0x9F4FE516EAACCFC5(Local_300[2 /*7*/]))
	{
		func_184(&(Local_300[2 /*7*/]), func_186(2), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[1 /*7*/]))
	{
		func_184(&(Local_300[1 /*7*/]), func_186(1), fVar8, -vVar2.y, uVar1, 37.3f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[0 /*7*/]))
	{
		func_184(&(Local_300[0 /*7*/]), func_186(0), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[3 /*7*/]))
	{
		func_184(&(Local_300[3 /*7*/]), func_186(3), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	unk_0xE3BB8E05FCEB3FBE(Local_300[*iParam0 /*7*/], true);
}

void func_184(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x86F44313DFA8F00C(*uParam0, vParam1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
}

float func_185(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_186(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x437347B10A200C4B(iLocal_90, 0))
	{
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_93, 0))
	{
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")) };
	vVar4 = { unk_0x5293C88BD2F4DE13(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, (Var2.f_1 + 1.4f), vVar4.z) };
			break;
		
		case 1:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (vVar4.z - 0.1f)) };
			break;
		
		case 2:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, -3.7f, 0.7f, vVar4.z) };
			break;
		
		case 3:
			vVar0 = { func_187() };
			break;
	}
	return vVar0;
}

Vector3 func_187()
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")) };
	vVar1 = { unk_0x5293C88BD2F4DE13(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, -unk_0x755FF954DAE327E1(Var2.f_1), vVar1.z);
}

void func_188(int iParam0, bool bParam1)
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

void func_189(int iParam0)
{
	if (!unk_0x9F4FE516EAACCFC5(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x9CF8D5C7090408A2(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x91F5B0244AAE6222(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0x798A3F1296751F46())
	{
		func_192(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((unk_0xD245978525608929(2, 0) && !unk_0x798A3F1296751F46()) && !func_48(0, 1))
		{
			func_190(iParam0);
			unk_0xE3BB8E05FCEB3FBE(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_190(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_488(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_488(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_488(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_191()
{
	if ((func_488(iLocal_51, 16) && func_488(iLocal_51, 64)) && func_488(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0)
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0xA2E3EDD0E119882F(2);
	func_194(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	vVar1.z = (-(to_float(uVar0[2]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0x89DF0B812BA6383B())
	{
		vVar1.x = ((to_float(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(to_float(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * timestep());
	vVar3 = { vVar1 };
	if (unk_0x91E3F625EF57450D(0))
	{
		uParam0->f_4 = func_193((uParam0->f_4 + (vVar3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_193((uParam0->f_4.f_1 + (vVar3.y * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_193((uParam0->f_4.f_2 + (vVar3.z * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_193((((vVar3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_193((((vVar3.y - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_193((((vVar3.z - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0x5F3CBA6EB9341C90(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_193(float fParam0, float fParam1, float fParam2)
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

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = floor((unk_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = floor((unk_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = floor((unk_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = floor((unk_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = floor((unk_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = floor((unk_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = floor((unk_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_195()
{
	int iVar0;
	float fVar1;
	
	if (!func_200())
	{
		if (func_199(iLocal_90))
		{
			if (!func_488(iLocal_49, 256))
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
				unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 15, 1, 0);
					}
					unk_0x5E858A00EAFA5B24(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 10, 1, 0);
					}
					unk_0x5E858A00EAFA5B24(0, 4000, 210);
				}
				else
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 5, 1, 0);
					}
					unk_0x5E858A00EAFA5B24(0, 3000, 168);
				}
				func_480(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (unk_0xDDCA9A4E51DADA2B(iLocal_90, 876132797))
				{
					unk_0x5E858A00EAFA5B24(0, 200, 84);
					unk_0xDFC6BA855748EB10(iLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_197();
				}
				break;
			
			case 1:
			case 2:
				if (func_488(iLocal_49, 32768))
				{
					if (func_548())
					{
						iVar0 = unk_0xF958843510932FF6(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0x69DF961355195C3C(iVar0))
					{
						fVar1 = unk_0xA45992A6CE82FB43(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_521(512))
							{
								unk_0x5E858A00EAFA5B24(0, 200, 252);
								unk_0xDFC6BA855748EB10(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_525(512);
						}
					}
				}
				else if (unk_0xDDCA9A4E51DADA2B(iLocal_90, 876132797))
				{
					unk_0x5E858A00EAFA5B24(0, 200, 252);
					unk_0xDFC6BA855748EB10(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)
{
	if (!func_488(iLocal_52, iParam0))
	{
		func_480(&iLocal_52, iParam0);
	}
}

void func_197()
{
	int iVar0;
	
	iVar0 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
	}
	unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar0, 0);
	func_198();
}

void func_198()
{
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		iLocal_57 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
	}
}

bool func_199(int iParam0)
{
	return (((unk_0xB4ECF989E2C1DAC8(iParam0, func_54(), func_46(11), 3) || unk_0xB4ECF989E2C1DAC8(iParam0, func_54(), func_46(21), 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_52(), func_45(11), 3)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_52(), func_45(21), 3));
}

bool func_200()
{
	return unk_0xB4ECF989E2C1DAC8(iLocal_90, func_50(unk_0x16F2683693E537C9(), 0, 0), func_201(iLocal_90, func_49(), 1), 3);
}

char* func_201(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar1 = unk_0x6937EA2286828455(iParam0, 1);
		if (unk_0xDF1306B443CD3D15(iVar1, 0))
		{
			if (func_47(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
		}
	}
	return sVar0;
}

void func_202()
{
	if (!func_200())
	{
		return;
	}
	if (func_548())
	{
		func_206();
	}
	if (unk_0x7DECE00E09F41C95(iLocal_90) || unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0x09AC81E49EA267F7(0, 5000) > 2500)
	{
		func_203();
	}
}

void func_203()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90) && !unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_288 == 0)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_470(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0x79833B02DBD2A244(2f, 5f))
		{
			if (!func_488(iLocal_49, 65536))
			{
				func_480(&iLocal_49, 65536);
				unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_204(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_40(&iLocal_101);
			}
		}
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_205(unk_0xD803B885F5E47A62()))
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_205(unk_0xD803B885F5E47A62()))
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_205(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 1;
	}
	return Global_2425662[iParam0 /*421*/].f_230;
}

void func_206()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(4);
	}
	if (func_521(4))
	{
		if (!func_10(&iLocal_104))
		{
			func_470(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_521(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_59++;
			}
			else if (func_521(16))
			{
				if (!unk_0x7DECE00E09F41C95(iLocal_90))
				{
					func_525(4);
					func_525(16);
					func_40(&iLocal_104);
				}
			}
		}
	}
}

int func_207(float fParam0)
{
	float fVar0;
	
	if (func_208(unk_0xD803B885F5E47A62(), 1, 1))
	{
		fVar0 = unk_0x71FE9B11268C88D8(unk_0xD803B885F5E47A62());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
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

void func_209(bool bParam0, bool bParam1)
{
	if (!func_548())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_139(iParam1), 0);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_138(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_211(iParam0, iVar0, iParam1, 1);
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2548434[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_139(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_139(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_139(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_139(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_139(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_139(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_139(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_139(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_139(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_139(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_139(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_139(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_139(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_139(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_139(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_139(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_139(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_139(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_139(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_139(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_139(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_139(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_139(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_139(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_139(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_139(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_139(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_139(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_139(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_139(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_139(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_139(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_139(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_139(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_139(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_139(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_139(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_139(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_139(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_139(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_139(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_139(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_139(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_139(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_139(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_139(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_139(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_139(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_139(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_139(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_139(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0)
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

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_217(0))
		{
			func_214(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_216())
		{
			func_215(1, 1);
		}
		else
		{
			func_215(0, 0);
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
	if (!func_20())
	{
		Global_19486.f_1 = 3;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
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

bool func_216()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_217(int iParam0)
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

bool func_218()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_219(int iParam0)
{
	bool bVar0;
	
	if (func_548())
	{
		bVar0 = unk_0x69DF961355195C3C(unk_0xF958843510932FF6(iParam0));
	}
	else
	{
		bVar0 = unk_0x69DF961355195C3C(iParam0);
	}
	return bVar0;
}

void func_220()
{
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(1000);
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_222(), 1, false, 0, 1);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_221());
		func_539();
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		unk_0xEBA53F35D0085654(&iLocal_90);
	}
}

float func_221()
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()
{
	int iVar0;
	
	if (func_225(&iLocal_98, 3f) && !unk_0xFBB4F23D534EB790(iLocal_97))
	{
		iVar0 = floor(((func_224() - 2f) * 1000f));
		unk_0xE3BB8E05FCEB3FBE(iLocal_96, false);
		unk_0xF1E4C781086FABC1(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (func_225(&iLocal_98, func_224()))
	{
		unk_0x53491B90E4FD0E56(1000);
		iLocal_286 = 10;
	}
}

float func_224()
{
	switch (func_23())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_225(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x218F818E64020C17(1, iParam0, &uVar0, 13))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0xE2F1E99DD161A861(*uParam0))
		{
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0) == unk_0x96A5FE5834B81CE7(*uParam0))
					{
						func_123(0);
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						func_539();
						func_533(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			iVar0 = unk_0x7F6DC62EA9922664(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_123(0);
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_230(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			iVar0 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_123(0);
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if (vdist2(vLocal_56, vVar1) >= 4f)
				{
					func_123(0);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_488(iLocal_49, 16))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0);
		}
		func_480(&iLocal_49, 16);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_93))
			{
				unk_0xE32750CAC756824F(iLocal_93, true);
				unk_0x0882E3DC0C991680(iLocal_93, 4);
				unk_0x3CE99D79C10EEA67(iLocal_93, 1);
				unk_0x9A8BCD43DBDDCDCA(iLocal_93, false, 0);
			}
		}
		else
		{
			unk_0xE32750CAC756824F(iLocal_93, true);
			unk_0x0882E3DC0C991680(iLocal_93, 4);
			unk_0x3CE99D79C10EEA67(iLocal_93, 1);
		}
		if (!func_378() || !unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0))
		{
			func_471(0);
			return;
		}
	}
	else
	{
		func_471(0);
		return;
	}
	func_213(0);
	if ((!unk_0x8B38C0DAEEDB5F9C(iLocal_93) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_488(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		func_376(1, -1);
		unk_0xAE317D00A5A55DF6("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		func_489("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	unk_0x3584F71E5CA29322(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_548())
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
					{
						if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
						{
							if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) == unk_0x16F2683693E537C9())
							{
								if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
								{
									if (!unk_0xAF6690C489CC6203(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
									{
										unk_0x73270B3C9CC833FD(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false, 0);
									}
								}
								else
								{
									unk_0x0C8A454B494DAA0D(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0));
									return;
								}
							}
						}
						else
						{
							unk_0x8B1D3F9E1517FA09(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0));
							return;
						}
					}
				}
			}
			func_375();
			func_374();
			func_198();
			if (func_371())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_370();
				if (func_548())
				{
					func_196(2);
					if (func_548())
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
							{
								if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
								{
									unk_0xC4B4C89FC0D48108(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), true);
									unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 4);
									unk_0x443C9A6DC182DDD5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1);
								}
							}
						}
					}
				}
				unk_0x9FD50E5122D8E89D(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		
		case 2:
			if (func_369(iLocal_295))
			{
				func_368(&iLocal_295);
				func_5(&iLocal_73, 2);
			}
			func_366(iLocal_90, 0);
			if (func_366(unk_0x16F2683693E537C9(), 1))
			{
				if (func_364(&sVar1, 0))
				{
					iLocal_48 = unk_0xF3545351E9CBB11F();
					iVar2 = unk_0x6C3F127AAF415E69();
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							unk_0xA79E2388E9C0B0DB(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							unk_0xA79E2388E9C0B0DB(1);
						}
					}
					func_352();
					iLocal_292 = 3;
					func_489("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_351(&sVar1, -1);
					func_40(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		
		case 3:
			if (unk_0x798A3F1296751F46())
			{
				return;
			}
			unk_0x73591FF5CCBBB2EA(3);
			func_332();
			func_297(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_296(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			unk_0x38C3A68D7861DCFD(0, 48, 1);
			unk_0x558EC149EB2BC0A2(2, 187);
			unk_0x558EC149EB2BC0A2(2, 188);
			unk_0x558EC149EB2BC0A2(2, 201);
			iVar0 = 0;
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
					func_292(0, 0, 0, 1);
					func_291(0, -1, 1);
					if (func_290())
					{
						if (Global_4268497 != iLocal_68)
						{
							unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4268497;
							func_489("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((unk_0xBFC0798A6E3417F9(2, 187) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, 242))) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 33))) || (((unk_0x0EFF6B4415DAF4A1() && !unk_0x91E3F625EF57450D(2)) && iVar4 > 100) && (unk_0x1C0640BA9A7327B3() - iLocal_87) > 300))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_489("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = unk_0x1C0640BA9A7327B3();
			}
			else if (((unk_0xBFC0798A6E3417F9(2, 188) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, 241))) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 32))) || (((unk_0x0EFF6B4415DAF4A1() && !unk_0x91E3F625EF57450D(2)) && iVar4 < -100) && (unk_0x1C0640BA9A7327B3() - iLocal_87) > 300))
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_489("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0x1C0640BA9A7327B3();
			}
			else if (unk_0xB9132A06AE472728(2, 201) || iVar0 == 1)
			{
				unk_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				unk_0x3584F71E5CA29322(3);
				func_286();
				unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
				iLocal_292 = 4;
			}
			func_285(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar7 = unk_0x9D0C7D26D7C10470(iLocal_90);
			if (iLocal_288 == 3)
			{
				func_376(1, -1);
				func_284();
				func_283(0);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_489("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0);
					}
					return;
				}
				else
				{
					if (func_278() >= 20)
					{
						iVar7 += 20;
						func_234(20);
						unk_0x6D80F1AEBA734886(iLocal_90, iVar7);
					}
					func_471(1);
					return;
				}
			}
			if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0, 0)))
			{
			}
			else
			{
				func_376(1, -1);
				func_284();
				if (unk_0xBB1BB44CE96CC5E3())
				{
					func_480(&iLocal_49, 1024);
					iLocal_288 = 3;
					func_489("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_278() > func_233(iLocal_288))
					{
						func_234(func_233(iLocal_288));
						iVar7 = (iVar7 + func_233(iLocal_288));
					}
					func_41(&iLocal_101, (14f - 4f));
					func_489("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_286 = 11;
				}
				unk_0x6D80F1AEBA734886(iLocal_90, iVar7);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
			}
			break;
	}
}

int func_233(int iParam0)
{
	if (unk_0xBB1BB44CE96CC5E3())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_234(int iParam0)
{
	var uVar0;
	
	if (!func_548())
	{
		func_248(func_23(), 1, iParam0);
	}
	else if (!func_247())
	{
		unk_0xD189E5E11FBABB3C(iParam0, 0, 0);
	}
	else
	{
		func_235(-1359375127, iParam0, &uVar0, 0, 0, 0);
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
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
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_140()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_242(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_247())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
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
		func_239(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_239(var uParam0)
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
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
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

void func_240(var uParam0)
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

int func_241(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_247())
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
				func_244(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_244(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_246(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_245();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_245()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_246(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_247()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	if (func_277(iParam0) == 3)
	{
		return 0;
	}
	if (func_277(iParam0) == 4)
	{
		return 0;
	}
	return func_249(func_277(iParam0), 0, iParam1, iParam2, 0);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_276();
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
					func_275(99, 1);
					func_274(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_274(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_274(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_260(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
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
							func_274(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_274(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_274(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_256(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_274(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_274(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_274(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_274(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_274(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_274(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_274(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_274(joaat("sp2_money_spent_property"), iParam3);
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
									func_274(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_274(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_274(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_274(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_274(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_256(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_274(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_274(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_274(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_274(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_274(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_275(95, iParam3);
					break;
				
				case 1:
					func_275(97, iParam3);
					break;
				
				case 2:
					func_275(96, iParam3);
					break;
			}
			func_275(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_252(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_252(iVar1);
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
					func_274(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_274(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_274(joaat("sp2_total_cash_earned"), iParam3);
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
	func_251(iParam0);
	if (Global_41431 == 15)
	{
		func_250(0);
	}
	return 1;
}

void func_250(bool bParam0)
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

void func_251(int iParam0)
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

void func_252(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_155(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_155(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_155(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_155(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_138(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_138(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_138(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_138(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_138(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_138(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_254() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_254() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_253(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_253(int iParam0)
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

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_255(int iParam0)
{
	func_275(93, iParam0);
	func_275(29, iParam0);
	func_275(30, iParam0);
}

bool func_256(int iParam0)
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
		return func_257(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_257(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_257(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_257(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_141(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_141(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_141(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_141(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_141(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_141(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_254() /*10930*/].f_6174.f_10, iParam0);
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_140();
	}
	iVar1 = func_259(iParam0, iParam1);
	uVar2 = func_258(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_258(int iParam0)
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

int func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_140();
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

int func_260(bool bParam0)
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
		func_154(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_261(27, 1);
	return 1;
}

int func_261(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_262(iParam0, iParam1);
}

int func_262(int iParam0, int iParam1)
{
	if (func_549(14) && !func_273(iParam0))
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
	if (func_272(&Global_4270065))
	{
		if (func_270(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_263(&Global_4270065, iParam0))
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

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_549(14) && !func_273(iParam1))
	{
		return 0;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0);
	}
	func_266(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_264(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_549(14) && !func_273(iParam1))
	{
		return 0;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_265(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_265(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_267(uParam0, iVar0);
		iVar0++;
	}
	func_268(uParam0, (Global_4270064 - 0.5f));
}

void func_267(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_268(var uParam0, float fParam1)
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

float func_269(var uParam0)
{
	return uParam0->f_80;
}

bool func_270(var uParam0, int iParam1)
{
	return func_271(uParam0, iParam1) != -1;
}

int func_271(var uParam0, int iParam1)
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

bool func_272(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_273(int iParam0)
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

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_275(int iParam0, int iParam1)
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

void func_276()
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

int func_277(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_278()
{
	if (func_548())
	{
		return func_280(unk_0xD803B885F5E47A62());
	}
	return func_279(func_23());
}

int func_279(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_280(int iParam0)
{
	var uVar0;
	
	uVar0 = func_281(iParam0);
	return uVar0;
}

int func_281(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(-1);
		}
		else if (func_282(iParam0))
		{
			return Global_1590535[iParam0 /*876*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_282(int iParam0)
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

void func_283(int iParam0)
{
	if (unk_0xFC21F7E0F4D92523() != 255)
	{
		unk_0x149ACFF504D36C1E(iParam0);
		unk_0xD90B263D1A6D7404(iParam0);
	}
}

void func_284()
{
	Global_22211.f_5 = 0;
}

void func_285(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = iParam0;
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

void func_286()
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_287();
		if (iLocal_289 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			unk_0xAE317D00A5A55DF6("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_287()
{
	switch (iLocal_289)
	{
		case 0:
			func_289();
			break;
		
		case 1:
		case 2:
			func_288();
			break;
	}
}

void func_288()
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_289()
{
	iLocal_45++;
	iLocal_47 = 1;
}

int func_290()
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

int func_291(int iParam0, int iParam1, bool bParam2)
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

void func_292(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_295();
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
				func_294(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_294(0);
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
				func_293(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_293(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_294(bool bParam0)
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
		func_293(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_293(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_295()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = unk_0x4B7163B4D6E4A3C2(2, 239);
	Global_4268492 = unk_0x4B7163B4D6E4A3C2(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_296(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0x4F3973434662D795(2, 218) * 127f));
	*uParam1 = floor((unk_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = floor((unk_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = floor((unk_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*uParam1 = floor((unk_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = floor((unk_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_297(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_329(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_327(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_326())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_326())
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
			func_322(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_321(29), 64);
					StringCopy(&cVar64, func_318(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[29 /*16*/])) == -1487683087)
					{
						func_293(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_293(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_22350.f_1)) != 0)
				{
					func_317();
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
					func_317();
					func_315((((Global_22347 + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_317();
						func_315((((Global_22347 + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
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
				func_293(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_327(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
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
				func_293(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_314(fVar40);
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
					func_327(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_313(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_321(Global_22350.f_4768), func_318(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_327(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
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
				func_293(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_314(fVar40);
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
					func_327(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_313(Global_4268421.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_321(Global_4268421.f_67), func_318(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_306(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_327(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_303(bVar32);
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
												if (func_327(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_327(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_313(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[(iVar22 + iVar28)]), func_318(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[(iVar22 + iVar28)]), func_318(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_302() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_304(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_327(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_327(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_313(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[(iVar22 + iVar14)]), func_318(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[(iVar22 + iVar14)]), func_318(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[(iVar22 + iVar14)]), func_318(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_303(bVar32);
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
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_301((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
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
										func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_303(bVar32);
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
										if (func_327(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_304(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_300((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_327(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_313(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_321(26), func_318(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_313(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_321(27), func_318(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_327(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_313(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_321(Global_22350.f_4433[iVar22]), func_318(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_299(Global_22350.f_4433[iVar22])), (fVar37 * func_299(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_213(0);
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
		func_298(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_298(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

float func_299(int iParam0)
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

void func_300(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_301(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_302()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

void func_303(bool bParam0)
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

void func_304(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_305(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_305(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_329(bParam4, bParam8))
	{
		return;
	}
	if (func_311())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_309(unk_0xD803B885F5E47A62(), 0))
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
					func_308(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_308(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_307(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_308(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_307(&(Global_4268421.f_16));
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

void func_307(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_308(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_309(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_310(-1, 0) == 8;
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

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_140();
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

int func_311()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_312())
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

int func_312()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_313(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_314(float fParam0)
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

void func_315(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_316(char* sParam0, int iParam1, int iParam2)
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
	func_317();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_317()
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

var func_318(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_7029[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_320(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_319(&uVar1);
			}
		}
		else
		{
			return func_319(&(Global_22350.f_7029[iParam0 /*16*/]));
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

var func_319(var uParam0)
{
	return uParam0;
}

struct<13> func_320(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_321(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_320(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_319(&uVar0);
		}
		else
		{
			return func_319(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_322(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_325(Global_22350.f_5218, 1);
	}
	else
	{
		func_325(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_324(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_327(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_323(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
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

float func_323(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_324(char* sParam0)
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
	func_304(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_325(int iParam0, bool bParam1)
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

int func_326()
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

int func_327(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_321(iParam0), 64);
	StringCopy(&cVar1, func_318(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_326())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_326())
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
		vVar7.x = (vVar7.x * (func_328(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_328(iParam0) / fVar4));
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

float func_328(int iParam0)
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

int func_329(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_30(8, -1) && func_330() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_76882) || Global_22350.f_8416) || unk_0xE57E602827E07C9D()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	return Global_1312812;
}

int func_331(var uParam0, bool bParam1, int iParam2)
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

void func_332()
{
	if (!func_369(iLocal_295))
	{
		iLocal_295 = func_350();
		func_341(&iLocal_295, 0, 0, unk_0x09AC81E49EA267F7(1, 2), 0, 0, 0);
	}
	else if (!func_488(iLocal_73, 2))
	{
		if (func_333(iLocal_295))
		{
			iLocal_295 = func_350();
			func_341(&iLocal_295, 0, 0, unk_0x09AC81E49EA267F7(1, 2), 0, 0, 0);
			func_480(&iLocal_73, 2);
		}
	}
	else if (func_333(iLocal_295))
	{
		func_284();
		func_471(0);
	}
}

bool func_333(int iParam0)
{
	return func_334(func_350(), iParam0);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_369(iParam1) || !func_369(iParam0))
	{
		return 1;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_336(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_337(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_338(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_339(int iParam0)
{
	return iParam0 & 15;
}

var func_340(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_167(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_340(*iParam0);
	iVar1 = func_339(*iParam0);
	iVar2 = func_338(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_336(*iParam0);
	iVar5 = func_335(*iParam0);
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
	iVar6 = func_349(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_349(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_342(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, iParam1);
	func_347(uParam0, iParam2);
	func_346(uParam0, iParam3);
	func_345(uParam0, iParam5);
	func_344(uParam0, iParam4);
	func_343(uParam0, iParam6);
}

void func_343(var uParam0, int iParam1)
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

void func_344(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(*uParam0);
	iVar1 = func_340(*uParam0);
	if (iParam1 < 1 || iParam1 > func_349(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_349(int iParam0, int iParam1)
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

int func_350()
{
	var uVar0;
	
	func_348(&uVar0, unk_0x4460E481B9E33ADA());
	func_347(&uVar0, unk_0x8D199E381D262EEF());
	func_346(&uVar0, unk_0xD8A54335F18763BA());
	func_344(&uVar0, unk_0x972A296334C9D57B());
	func_345(&uVar0, unk_0x118229AD063C3C1D());
	func_343(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_351(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_352()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_363(1);
	func_283(1);
	unk_0xBFE31971E49FA500(false);
	func_362(0, 0);
	func_361(1, 1, 0, 0, 0);
	func_360(1, 2, 1, 1, 1);
	func_359("PROS_OPTS");
	func_358(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_233(0);
	iVar1 = func_233(1);
	iVar2 = func_233(2);
	if (func_278() >= iVar0)
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_278() >= iVar1 && func_354(iLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_278() >= iVar2 && func_354(iLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0);
		func_355(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	func_322(iLocal_69, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_68 = 0;
	func_285(iLocal_68, 1, 1);
	func_353();
	iLocal_87 = unk_0x1C0640BA9A7327B3();
	iLocal_292 = 3;
}

void func_353()
{
	Global_22211.f_5 = 1;
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == -1405937764)
		{
			return 0;
		}
	}
	return 1;
}

void func_355(int iParam0, bool bParam1)
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
	Global_22350.f_3918[Global_22350.f_5222] = iParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_357();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_327(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_356();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_356()
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
			if (func_327(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_357()
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
	func_304(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_327(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_358(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_359(char* sParam0)
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

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_362(bool bParam0, bool bParam1)
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

void func_363(bool bParam0)
{
	if (!bParam0)
	{
		Global_110280 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_110277 = bParam0;
}

int func_364(char* sParam0, int iParam1)
{
	if (func_278() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (unk_0x8CD06866876216F2() && func_365(unk_0xD803B885F5E47A62()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_366(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0, 0)))
	{
	}
	else if (!unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_110(bParam1), 3) && unk_0xD1960163A3042274(iParam0, -2017877118) != 1)
	{
		if (func_548())
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				if (!func_205(unk_0xD803B885F5E47A62()))
				{
					iVar0 = unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 6);
					if (!func_521(256))
					{
						func_196(256);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0xDADA8E1DD0D0D9D9(unk_0x16F2683693E537C9(), 6);
						unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 6, 1, 0, 0);
						func_196(1024);
					}
				}
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_367(bParam1), 3))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_367(bParam1)) >= 0.95f)
			{
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_367(bool bParam0)
{
	if (!func_488(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return func_45(0);
		}
		else
		{
			return func_45(1);
		}
	}
	if (bParam0)
	{
		return func_46(0);
	}
	return func_46(1);
}

void func_368(int iParam0)
{
	*iParam0 = -15;
}

int func_369(int iParam0)
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
	iVar0 = func_335(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_336(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_337(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_340(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_339(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_338(iParam0);
	if (iVar5 < 1 || iVar5 > func_349(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_370()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	unk_0x0FB22E2FED7BCC7E(iLocal_90);
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_371()
{
	if (func_372(0, -1, 0) && unk_0xAE317D00A5A55DF6("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_372(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_331(&iVar0, 1, iParam1))
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
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_373(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_373(var uParam0)
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

void func_374()
{
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		iLocal_58 = unk_0x7F6DC62EA9922664(iLocal_90);
	}
}

void func_375()
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vLocal_56 = { unk_0x68F4C0EC296D3901(iVar0, true) };
			}
		}
	}
}

void func_376(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_331(&iVar0, 0, iParam1))
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
		unk_0x11CCD0ACA866C6C5(9, false);
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
		func_377(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_377(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_378()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (!iLocal_93 == 0)
				{
					if ((unk_0xDF1306B443CD3D15(iLocal_93, 0) && !unk_0x4E861BC5B1EDA7BD(iLocal_93)) && !unk_0x377BE9A1BF38C7CE(iLocal_93))
					{
						if (func_91(&iLocal_93))
						{
							func_5(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_379()
{
	if (iLocal_70 == 0)
	{
		if (!func_488(iLocal_51, 1) && !func_488(iLocal_51, 16))
		{
			if (func_380(0))
			{
				func_480(&iLocal_51, 1);
			}
		}
		if (!func_488(iLocal_51, 4) && !func_488(iLocal_51, 64))
		{
			if (func_380(2))
			{
				func_480(&iLocal_51, 4);
			}
		}
		if (!func_488(iLocal_51, 8) && !func_488(iLocal_51, 128))
		{
			if (func_380(1))
			{
				func_480(&iLocal_51, 8);
			}
		}
	}
}

int func_380(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_186(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (unk_0x134B62B726CEC8E6(iLocal_93) == -376434238)
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.1f, 511, iLocal_93, 3);
		}
		else if ((unk_0x134B62B726CEC8E6(iLocal_93) == joaat("casco") || unk_0x134B62B726CEC8E6(iLocal_93) == joaat("feltzer3")) || unk_0x134B62B726CEC8E6(iLocal_93) == 1617472902)
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (unk_0x1EC301670B54C6DE(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_381(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_488(iLocal_51, 16))
			{
				func_480(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
		
		case 1:
			if (!func_488(iLocal_51, 128))
			{
				func_480(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
		
		case 2:
			if (!func_488(iLocal_51, 64))
			{
				func_480(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
		
		case 3:
			if (!func_488(iLocal_51, 32))
			{
				func_480(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}
}

void func_382()
{
	if (func_387() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		iLocal_286 = 9;
		func_385(iLocal_90);
		func_385(unk_0x16F2683693E537C9());
		func_383();
		func_40(&iLocal_98);
	}
}

void func_383()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0x9F4FE516EAACCFC5(iLocal_96))
	{
		iLocal_96 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!unk_0x9F4FE516EAACCFC5(iLocal_97))
	{
		iLocal_97 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_384(&Var0, &Var1);
	unk_0x608A456FDD8A83D8(iLocal_96, Var0);
	unk_0x5F3CBA6EB9341C90(iLocal_96, Var0.f_3, 2);
	unk_0x5818C8D5303DCCF8(iLocal_96, Var0.f_6);
	unk_0x608A456FDD8A83D8(iLocal_97, Var1);
	unk_0x5F3CBA6EB9341C90(iLocal_97, Var1.f_3, 2);
	unk_0x5818C8D5303DCCF8(iLocal_97, Var1.f_6);
	unk_0xE3BB8E05FCEB3FBE(iLocal_96, true);
	unk_0xE3BB8E05FCEB3FBE(iLocal_97, false);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
}

void func_384(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_385(int iParam0)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0xF82EA857DA10E0CD(&iVar0);
		unk_0xDD353D0E9C789D0E(&iVar0);
		if (unk_0x405E212DDE472467(iParam0, 0))
		{
			unk_0x75CDA8644CD3B5F5(0, 0, 16842752);
		}
		unk_0x96167B03C5A77156(0, func_386(), 1f, -1, 0.5f, 8192, 1193033728);
		unk_0x75ABDC5F81978924(iVar0);
		unk_0x78ADC381772E3D54(iParam0, iVar0);
		unk_0xF82EA857DA10E0CD(&iVar0);
	}
}

Vector3 func_386()
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_387()
{
	return vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), func_389()) < (func_388() * func_388());
}

float func_388()
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_389()
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_390()
{
	func_332();
	func_405();
	if (!func_10(&iLocal_101))
	{
		func_470(&iLocal_101);
	}
	if (func_404())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_470(&iLocal_110);
	}
	if (func_378() && unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0))
	{
		if (unk_0x8B38C0DAEEDB5F9C(iLocal_93) && unk_0xF79A7BCA9E38BBBC(iLocal_93))
		{
			if ((func_397() && !func_387()) && !func_396())
			{
				func_395();
				if (func_7(&iLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0x544B74C043CE9948(unk_0x68F4C0EC296D3901(iLocal_93, false), 40f, 40f, 40f, unk_0xD9522BA9E27E1349(iLocal_93), 0, 7);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 896);
					func_480(&iLocal_49, 2048);
					iLocal_94 = 0;
					unk_0xF63400DBE3303D26("ProstituteInPlay", &iLocal_298);
					unk_0x0E2400AB9174FA81(1, iLocal_298, 1862763509);
					unk_0x6DF7BF67E86AAE86(iLocal_90, iLocal_298);
					func_489("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_295 = -15;
					func_128();
					func_394();
					iLocal_81 = 3;
					if (func_48(0, 1))
					{
						unk_0xF3039DE1FDB4F6FD(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()) && func_7(&iLocal_101) > 15f) && func_393())
				{
					if (!func_488(iLocal_50, 4096))
					{
						func_351("PROS_SPOT", -1);
						func_480(&iLocal_50, 4096);
					}
					func_392();
					func_40(&iLocal_101);
				}
				func_40(&iLocal_110);
			}
		}
		else
		{
			func_40(&iLocal_110);
			func_391();
		}
	}
	else if (!func_387())
	{
		if (unk_0xC844350D5D58C99A(iLocal_90))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
			{
				unk_0xA3BF0AA5A2608191(iLocal_90);
			}
		}
		func_471(0);
	}
}

void func_391()
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_392()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_393()
{
	if (!func_488(iLocal_51, 256))
	{
		return 1;
	}
	return func_488(iLocal_51, 32);
}

void func_394()
{
	if (func_548())
	{
		unk_0x4E885A246A9D983A(iLocal_90, 229, true);
		unk_0x4E885A246A9D983A(iLocal_90, 26, true);
		unk_0x4E885A246A9D983A(iLocal_90, 115, true);
		unk_0x11AD11297DC58CC7(iLocal_90, true);
	}
}

void func_395()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_488(iLocal_49, 2097152))
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_93, true) };
				unk_0xE82754C349C7B581(vVar0, &fVar2, 0, 0);
				vVar0.z = (fVar2 + 0.15f);
				vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0x6D4C9F7CF124AE37(vVar0, vVar1, 2f, 511, iLocal_93, 7);
			}
			else if (unk_0xDE23DA909EBB673C(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						func_40(&iLocal_110);
					}
				}
				iLocal_82 = unk_0x1C0640BA9A7327B3() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_396()
{
	int iVar0;
	
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		if (!unk_0xBBA8A868118C90ED(iVar0, 0, 0))
		{
			if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()) || unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		}
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		if (unk_0xDB27A414FA5965A7(vVar1, func_65(0), 12f, 0) || unk_0xDB27A414FA5965A7(vVar1, func_65(1), 12f, 0))
		{
			return 0;
		}
		if (func_403())
		{
			return 0;
		}
		if (func_402(iLocal_93, &vVar2))
		{
			if (!func_401(vVar2))
			{
				if (!func_400(vVar1) || func_399(vVar1))
				{
					return 0;
				}
			}
		}
		if (func_90(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0, 0, false))
		{
			return 0;
		}
		unk_0x65020188A2A26D62(1);
		if (unk_0xE51E576EA6B739AC(vVar1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (!unk_0x437347B10A200C4B(iVar0, 0))
				{
					if (unk_0xF649DD3BF44195C7(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_489("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
		if (!iVar3 == 0)
		{
			func_489("IN AN INTERIOR");
			return 0;
		}
		if (func_398())
		{
			return 0;
		}
	}
	return 1;
}

int func_398()
{
	func_480(&iLocal_51, 256);
	if (!func_488(iLocal_51, 2))
	{
		if (func_380(3))
		{
			func_480(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_379();
	}
	return 0;
}

int func_399(vector3 vParam0)
{
	if (((((((((vdist(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || vdist(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || vdist(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || vdist(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || vdist(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || vdist(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || vdist(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || vdist(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || vdist(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || vdist(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_400(vector3 vParam0)
{
	if ((((((vdist(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || vdist(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || vdist(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || vdist(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || vdist(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || vdist(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || vdist(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_480(&iLocal_49, 2097152);
		return 1;
	}
	func_5(&iLocal_49, 2097152);
	return 0;
}

int func_401(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDEC4A70C9F250662(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 1, 1, 1077936128, 0);
	unk_0x8502D8EBA9E78216(iVar0, &vParam0);
	if (unk_0xD9DC3EBC8290FF92(iVar0))
	{
		if (!unk_0x5B33870CBB8B6AC1(iVar0))
		{
			if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam0) > 400f)
			{
				return 1;
			}
		}
		else if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!unk_0x5B33870CBB8B6AC1(iVar0))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0xDEC4A70C9F250662(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), 1, 8, 1077936128, 0);
		unk_0x8502D8EBA9E78216(iVar0, &vParam0);
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_402(int iParam0, var uParam1)
{
	vector3 vVar0[4];
	
	vVar0[0 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 2f, 0f, 0f) };
	vVar0[1 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, -2f, 0f, 0f) };
	vVar0[2 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 2f, 0f) };
	vVar0[3 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, -2f, 0f) };
	if (unk_0xA89A37CE7C5E4A5E(vVar0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return Global_73825;
}

int func_404()
{
	if (unk_0x8A22C4C08282BF26(joaat("carwash1")) > 0 || unk_0x8A22C4C08282BF26(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_405()
{
	if (!func_488(iLocal_49, 128))
	{
		func_406(39, 1);
		func_406(40, 1);
		func_406(41, 1);
		func_406(42, 1);
		func_406(43, 1);
		func_406(44, 1);
		func_480(&iLocal_49, 128);
	}
}

void func_406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_410(iParam0, 2, 1))
		{
			func_409(iParam0, 2, 1);
		}
	}
	else if (func_410(iParam0, 2, 1))
	{
		func_407(iParam0, 2, 1);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			iVar0 = func_141(func_408(iParam0), -1, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_138(func_408(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_408(int iParam0)
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

void func_409(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			iVar0 = func_141(func_408(iParam0), -1, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_138(func_408(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_410(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_141(func_408(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_411(var uParam0)
{
	if (func_488(iLocal_49, 2))
	{
		if (!func_63())
		{
			return;
		}
		func_100(1);
	}
	func_68();
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_412()
{
	if (!unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 5f, 5f, 5f, 0, 1, 0) || func_488(iLocal_49, 8192))
		{
			unk_0x38C3A68D7861DCFD(0, 101, 1);
			unk_0x38C3A68D7861DCFD(0, 74, 1);
			unk_0x558EC149EB2BC0A2(0, 51);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x405E212DDE472467(iLocal_90, 0))
			{
				unk_0x25BD67336EA4AECE(iLocal_90, 50);
				unk_0x8B66ED74C2DC2E98(iLocal_90, 5f);
				if (func_488(iLocal_49, 16))
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 1);
						func_5(&iLocal_49, 16);
					}
				}
				iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0xDF1306B443CD3D15(iLocal_93, 0))
				{
					if (unk_0x82CCEAB29E9451DD(iLocal_90, iLocal_93) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_93, 0))
					{
						func_489("***** prostitute IN VEHICLE****** ");
						if (func_488(iLocal_49, 8))
						{
							if (unk_0x59F02DA2266A744C(func_92()))
							{
								if (func_426(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_425(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_424(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_423(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_422(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_421(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_420(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_419(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_418(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_417(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_416(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_415(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_548())
						{
							unk_0x73270B3C9CC833FD(iLocal_90, false, 0);
						}
						else
						{
							unk_0x73270B3C9CC833FD(iLocal_90, true, 1);
						}
						func_182(iLocal_90, 0);
						func_392();
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_40(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						func_489("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_414(iLocal_90, unk_0x16F2683693E537C9(), 1) > 11f || func_413(20f)) || !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_93, 0))
				{
					func_115(&iLocal_107);
					if (!unk_0x405E212DDE472467(iLocal_90, 0))
					{
						unk_0xA3BF0AA5A2608191(iLocal_90);
						func_471(0);
						func_489("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (!unk_0xDF1306B443CD3D15(iLocal_93, 0))
					{
						iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
					}
					else if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0, 0, false))
					{
						if (!func_112())
						{
							if (!func_488(iLocal_73, 1))
							{
								func_40(&iLocal_113);
								func_480(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_126();
								func_489("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_488(iLocal_73, 1))
		{
			func_489("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xA3BF0AA5A2608191(iLocal_90);
			func_96(15);
		}
	}
}

bool func_413(float fParam0)
{
	if (!func_10(&iLocal_107))
	{
		func_40(&iLocal_107);
	}
	return func_121(&iLocal_107) > fParam0;
}

float func_414(int iParam0, int iParam1, bool bParam2)
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

int func_415(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
				return 1;
				break;
			}
	}
	return 0;
}

void func_427(var uParam0)
{
	int iVar0;
	
	if (!func_436(0))
	{
		return;
	}
	if (!func_488(iLocal_49, 16))
	{
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0);
		func_480(&iLocal_49, 16);
	}
	if (!func_10(&iLocal_107))
	{
		func_470(&iLocal_107);
	}
	if (func_121(&iLocal_107) >= 20f || !unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (func_488(iLocal_73, 524288))
		{
			func_115(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_435())
		{
			func_40(&iLocal_107);
			func_480(&iLocal_73, 524288);
		}
	}
	func_69(iLocal_90);
	if (((unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0, 1, 0) || func_488(iLocal_73, 1)) && !func_217(0)) && !func_403())
	{
		if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0, 0, false))
		{
			if (!func_112())
			{
				if (!func_488(iLocal_73, 1))
				{
					func_40(&iLocal_113);
					func_480(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_68();
					unk_0xA3BF0AA5A2608191(iLocal_90);
					func_489("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_428();
		}
	}
	else if (func_468("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 1048576);
		func_466();
		if (func_548())
		{
			iVar0 = unk_0xD1960163A3042274(iLocal_90, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_428()
{
	char* sVar0;
	
	if (iLocal_286 != 5 && func_364(&sVar0, 0))
	{
		func_431();
		if (func_429(iLocal_72, 1) || unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()))
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_480(&iLocal_49, 8192);
			func_40(&iLocal_107);
		}
		if (func_488(iLocal_49, 8192))
		{
			func_466();
			Global_30918 = 1;
			Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_408 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xD1960163A3042274(iLocal_90, -1794415470) != 1 && !unk_0xC42A92762C58E1B9(iLocal_90, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1))
				{
					unk_0x5B1D360B9C6F0A09(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = func_50(unk_0x16F2683693E537C9(), 1, 0);
			unk_0x3F423BF5B8125A50(sLocal_61);
			sLocal_61 = func_50(unk_0x16F2683693E537C9(), 0, 1);
			unk_0x3F423BF5B8125A50(sLocal_61);
			func_40(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_217(0))
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

int func_430(int iParam0)
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

void func_431()
{
	if (Global_30918)
	{
		if (unk_0x798A3F1296751F46())
		{
			return;
		}
		unk_0x38C3A68D7861DCFD(0, 101, 1);
		unk_0x38C3A68D7861DCFD(0, 74, 1);
		unk_0x558EC149EB2BC0A2(0, 51);
		if (!func_488(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_433(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_432(iLocal_72, 0))
	{
		func_466();
	}
}

bool func_432(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_430(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42151[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_42151[iVar0 /*32*/].f_12)
	{
		unk_0xCECE25C7ECD44603(&(Global_42151[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_42346);
		bVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_42151[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_42346);
		if (Global_42151[iVar0 /*32*/].f_30)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_42151[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_42151[iVar0 /*32*/].f_13));
		}
		bVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	return bVar1;
}

void func_433(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == -1)
		{
			func_434(iParam0);
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

void func_434(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_430(*iParam0);
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

int func_435()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC844350D5D58C99A(iLocal_90) || unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 1;
	}
	if (!func_548())
	{
		func_68();
		if (unk_0x405E212DDE472467(iLocal_90, 1))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
		}
		else if (func_488(iLocal_49, 4194304))
		{
			iVar0 = unk_0x09AC81E49EA267F7(8, 11);
			unk_0xDD353D0E9C789D0E(&iVar1);
			unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, func_67(iLocal_284), func_66(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iVar1);
			unk_0x78ADC381772E3D54(iLocal_90, iVar1);
			unk_0xF82EA857DA10E0CD(&iVar1);
		}
		return 1;
	}
	if (unk_0x405E212DDE472467(iLocal_90, 1))
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
			return 1;
		}
		else
		{
			unk_0x0C8A454B494DAA0D(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (func_488(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
		
		case 1:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_55 = 2;
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 2:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, -2017877118) == 7)
				{
					iVar0 = unk_0x09AC81E49EA267F7(8, 11);
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_55 = 3;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_436(bool bParam0)
{
	if (unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		return 0;
	}
	if (func_488(iLocal_49, 8192))
	{
	}
	if (func_414(iLocal_90, unk_0x16F2683693E537C9(), 1) > 11f)
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (func_548())
	{
		if (unk_0x2720E241B5CCF780(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(unk_0x68F4C0EC296D3901(iLocal_90, true), 1106247680))
	{
		if (!func_488(iLocal_50, 8192) && !unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
		{
			func_351("PROS_COPS", -1);
			func_480(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_378())
	{
		if (!func_548())
		{
			if ((!iLocal_86 && !Global_110685) && func_438(unk_0x16F2683693E537C9(), 0) == -1)
			{
				func_351("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_437();
		}
		else if (!func_521(4096))
		{
			func_351("PROS_CAR", -1);
			func_196(4096);
		}
		return 0;
	}
	return 1;
}

void func_437()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!func_488(iLocal_49, 1))
	{
		if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()) && !unk_0x7DECE00E09F41C95(iLocal_90))
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_480(&iLocal_49, 1);
		}
	}
}

int func_438(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_439()
{
	if (func_436(0))
	{
		func_428();
		if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 7 && !func_488(iLocal_49, 8192))
		{
			if (func_72(1))
			{
				func_115(&iLocal_107);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_489("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		func_96(15);
	}
}

void func_440(var uParam0)
{
	if (func_436(0))
	{
		func_428();
		if (unk_0xD1960163A3042274(iLocal_90, 242628503) == 7 || func_488(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_413(20f))
		{
			func_115(&iLocal_107);
			func_471(0);
		}
		else
		{
			func_441(uParam0);
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		func_96(15);
	}
}

void func_441(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0xC844350D5D58C99A(iLocal_93))
	{
		return;
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, -(vVar0.x + 0.2f), 0f, 0f) };
	vVar4 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, (vVar0.x + 0.2f), 0f, 0f) };
	vVar5 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
	if (vdist(vVar5, vVar4) < vdist(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0xD1960163A3042274(iLocal_90, -1794415470) != 1 || !func_488(iLocal_49, 8192)) && vdist2(vLocal_89, vVar3) > 0f)
	{
		if (func_548())
		{
			if (!unk_0xAF6690C489CC6203(iLocal_90))
			{
				unk_0x73270B3C9CC833FD(iLocal_90, false, 1);
			}
			func_451(&uLocal_281, func_67(iLocal_284));
			func_445(uParam0, 1);
			func_442(&uLocal_281, uParam0);
		}
		unk_0xDD353D0E9C789D0E(&iVar6);
		unk_0x96167B03C5A77156(0, vVar3.x, vVar3.y, vVar3.z, 1f, -1, 1f, 8192, 1193033728);
		unk_0x796BDF31572BB055(0, unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 31086, 0f, 0f, 0f), 0);
		unk_0x75ABDC5F81978924(iVar6);
		unk_0x78ADC381772E3D54(iLocal_90, iVar6);
		unk_0xF82EA857DA10E0CD(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			func_443(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_443(var uParam0, char* sParam1)
{
	func_444(uParam0, 1, -1, sParam1, 0);
}

void func_444(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_445(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_447(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_446(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_446(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_447(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			func_448(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_448(var uParam0)
{
	func_449(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_449(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_450(iParam0))
		{
			case 0:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 1:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 2:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 3:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 4:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 6:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 7:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 8:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 26));
				break;
			
			case 9:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_451(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			if (unk_0x7F8A39872A07D2CE((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_452(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_452(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_453(var uParam0)
{
	char* sVar0;
	
	if (func_436(1))
	{
		if (!func_10(&iLocal_107))
		{
			func_470(&iLocal_107);
		}
		func_480(&iLocal_49, 4);
		Global_30919 = 1;
		func_428();
		if (func_469(&iLocal_107, 2f) || func_488(iLocal_49, 8192))
		{
			func_480(&iLocal_49, 2);
			if (func_364(&sVar0, 0))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_90, -1, 2048, 4);
				func_441(uParam0);
				func_480(&iLocal_49, 4);
				Global_30918 = 1;
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_408 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (unk_0x7F8A39872A07D2CE(func_465(&sVar0), "PIM_HHIDCR"))
				{
					func_464(&sVar0, 30000);
					func_462(1);
				}
				else
				{
					func_351(&sVar0, -1);
				}
				if (!unk_0xEA6BC48857E0AC4C(&sVar0) && unk_0x7F8A39872A07D2CE(&sVar0, "PROS_NO_MONEY"))
				{
					func_454();
				}
				func_96(0);
				iLocal_287 = 0;
				func_480(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_30918 = 0;
				Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_408 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_30919 = 0;
	}
}

void func_454()
{
	if (!func_521(64))
	{
		func_455(0, 31, 5);
		func_196(64);
	}
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x4C2428CBA698034D())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() && func_459(unk_0xD803B885F5E47A62(), 1, 0))
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
	if (func_458())
	{
		return;
	}
	if (!func_456())
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

int func_456()
{
	if (func_457())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_457()
{
	return Global_2461181;
}

bool func_458()
{
	return Global_2461839;
}

int func_459(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_460(iParam0))
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

bool func_460(int iParam0)
{
	return func_461(iParam0);
}

bool func_461(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_462(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
	if (iParam0 && !func_463())
	{
		unk_0x4D7F4CC43D4D0DE3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_463()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

void func_464(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

char* func_465(char* sParam0)
{
	return sParam0;
}

void func_466()
{
	if (iLocal_72 != -1)
	{
		func_434(&iLocal_72);
	}
}

void func_467(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_468(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_469(int iParam0, float fParam1)
{
	if (func_225(iParam0, fParam1))
	{
		func_115(iParam0);
		return 1;
	}
	return 0;
}

void func_470(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_40(iParam0);
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_548())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_472()
{
	if ((((((func_479() || func_478()) || func_477()) || func_476()) || func_473()) || Global_2394733) || Global_2394733.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_473()
{
	if (func_475() || func_474())
	{
		return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_98 == 8;
	}
	return 0;
}

var func_474()
{
	return Global_2450632.f_635;
}

bool func_475()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

bool func_476()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 5);
}

bool func_477()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_478()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

var func_479()
{
	return Global_2450632.f_598;
}

void func_480(int iParam0, int iParam1)
{
	func_481(iParam0, iParam1);
}

void func_481(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_482()
{
	if (Global_30920)
	{
		return 0;
	}
	if (func_548())
	{
		return 0;
	}
	if (!func_485())
	{
		return 0;
	}
	if (func_483())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_483()
{
	int iVar0;
	
	iLocal_92 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(iLocal_90, true), 15f, 0, 6);
	if (unk_0xC844350D5D58C99A(iLocal_92) && !unk_0x437347B10A200C4B(iLocal_92, 0))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0))
		{
			if (func_91(&iLocal_92))
			{
				iLocal_91 = unk_0xA30B8362589C124A(iLocal_92, -1, 0);
				if (!iLocal_91 == 0)
				{
					if (func_484(&iLocal_91))
					{
						iVar0 = unk_0x134B62B726CEC8E6(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0xAF6690C489CC6203(iLocal_91))
							{
								unk_0x73270B3C9CC833FD(iLocal_91, true, 0);
							}
							if (!unk_0xAF6690C489CC6203(iLocal_92))
							{
								unk_0x73270B3C9CC833FD(iLocal_92, true, 0);
							}
							unk_0x11AD11297DC58CC7(iLocal_91, true);
							unk_0xE8832A9E16A57A1F(iLocal_91, false, 1);
							unk_0xE8832A9E16A57A1F(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_484(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(*iParam0))
	{
		if (unk_0xCED082ADD3739B9F(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_485()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) || unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		return 0;
	}
	return 1;
}

int func_486()
{
	if ((!func_485() || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) || func_488(iLocal_49, 4096))
	{
		return 0;
	}
	if (func_488(iLocal_49, 32))
	{
		iLocal_287 = 2;
		func_100(2);
		func_489("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_487()
{
	if (!unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		if (!unk_0xE9FDA1035CFEA94F(iLocal_90))
		{
			if (unk_0xD1960163A3042274(iLocal_90, 1805844857) != 1)
			{
				unk_0x11AD11297DC58CC7(iLocal_90, false);
				unk_0xBAFED2F6486F771A(iLocal_90, 196628, true);
				unk_0x2ECF845953E95D1B(iLocal_90);
				unk_0xF3268524E9BE6D6E(iLocal_90, unk_0x16F2683693E537C9(), 300f, -1, 1, 0);
				unk_0xFADC0A217229F6B5(iLocal_90, true);
				func_96(15);
			}
		}
	}
}

bool func_488(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_489(char* sParam0)
{
}

int func_490()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 0;
	}
	if (unk_0xD1960163A3042274(iLocal_90, 1435919172) == 1)
	{
		return 0;
	}
	if (unk_0xACCBB8E1BDF4D6BE(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_491()
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_548())
			{
				func_451(&uLocal_281, func_67(iLocal_284));
				func_442(&uLocal_281, &uLocal_337);
				func_489("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_548())
			{
				unk_0x0BEC04ECA8485A3A(1);
				unk_0x28E5F00F131890E3(1);
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		
		case 1:
			if (!func_548())
			{
				if (func_492(&uLocal_337))
				{
					func_480(&iLocal_49, 4194304);
					func_489("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_548())
			{
				func_480(&iLocal_49, 4194304);
				func_489("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			func_489("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
			{
				if (!func_548())
				{
					unk_0x11AD11297DC58CC7(iLocal_90, false);
					unk_0xC978532B427F303B(iLocal_90, 0);
					func_467(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
				else
				{
					unk_0x11AD11297DC58CC7(iLocal_90, false);
					func_467(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					unk_0xC978532B427F303B(iLocal_90, 0);
					unk_0xD35BB27936A678E2(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_492(var uParam0)
{
	return func_493(uParam0);
}

int func_493(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_494(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_494(var uParam0)
{
	return func_495(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_495(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_450(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_496()
{
	if (unk_0x991B1F0980C62628())
	{
		if (func_23() == 0)
		{
			if (func_497(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!unk_0x9C77D2D0559097F0(iLocal_90, 1))
				{
					if (func_548())
					{
						unk_0x73270B3C9CC833FD(iLocal_90, false, 0);
					}
					else
					{
						unk_0x73270B3C9CC833FD(iLocal_90, true, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_497(int iParam0, vector3 vParam1, bool bParam2)
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

int func_498()
{
	if (unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0)))
	{
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(1)))
	{
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_499()
{
	if (unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_500(unk_0x16F2683693E537C9());
	}
	else if (iLocal_285 == 3)
	{
		func_500(iLocal_91);
	}
}

void func_500(int iParam0)
{
	if (unk_0x437347B10A200C4B(iParam0, 0))
	{
		return;
	}
	if (func_548())
	{
		if (!unk_0xAFE0D3608EDA7039(iParam0))
		{
			unk_0x0C8A454B494DAA0D(iParam0);
			return;
		}
	}
	if (func_414(iParam0, iLocal_90, 1) < 30f)
	{
		if (!unk_0xC7E2E6167C09468B(iLocal_90, iParam0))
		{
			if (func_548())
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xBC43ED9FE28DB191(iLocal_90);
					unk_0x0C8C0C840C2D1AD2(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				unk_0xBC43ED9FE28DB191(iLocal_90);
				unk_0x0C8C0C840C2D1AD2(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (unk_0xC7E2E6167C09468B(iLocal_90, iParam0))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0xBC43ED9FE28DB191(iLocal_90);
			}
		}
		else
		{
			unk_0xBC43ED9FE28DB191(iLocal_90);
		}
	}
}

void func_501()
{
	if (Global_30918)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_93, 0))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0))
			{
				func_502();
			}
		}
		return;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iLocal_90, 0) || !unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (Global_30922 != unk_0x0D0A574C76D769AC() && func_488(iLocal_49, 32))
		{
			func_5(&iLocal_49, 32);
		}
		return;
	}
	if ((vdist2(unk_0x68F4C0EC296D3901(iLocal_90, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < Global_30921 || Global_30921 == 0f) && iLocal_287 != 4)
	{
		Global_30921 = vdist2(unk_0x68F4C0EC296D3901(iLocal_90, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
		Global_30922 = unk_0x0D0A574C76D769AC();
		func_480(&iLocal_49, 32);
	}
	else if (Global_30922 == unk_0x0D0A574C76D769AC())
	{
		Global_30921 = vdist2(unk_0x68F4C0EC296D3901(iLocal_90, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}
}

void func_502()
{
	if (func_548())
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x9DD8618CA5BF832D(iLocal_90, 323, true);
		}
	}
	else
	{
		unk_0x9DD8618CA5BF832D(iLocal_90, 323, true);
	}
}

void func_503(var uParam0)
{
	if (!iLocal_286 == 12)
	{
		if (!unk_0x437347B10A200C4B(iLocal_90, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (func_507())
			{
				if (func_548())
				{
					func_123(0);
					unk_0xBAFED2F6486F771A(iLocal_90, 196624, true);
					if (!unk_0xAF6690C489CC6203(iLocal_90))
					{
						unk_0x73270B3C9CC833FD(iLocal_90, true, 0);
					}
					unk_0xF3268524E9BE6D6E(iLocal_90, unk_0x16F2683693E537C9(), 300f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_90, true);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (unk_0xB87D13D0C064E9D1(iLocal_90, unk_0x16F2683693E537C9(), 1))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_489("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					func_489("prostitute BEEN HIT BY PLAYER");
					unk_0xE910A68AA670B4AA(iLocal_90);
				}
			}
			else if (func_505())
			{
				func_504();
				iLocal_286 = 12;
			}
		}
	}
}

void func_504()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	unk_0x0FB22E2FED7BCC7E(iLocal_90);
	unk_0xC8B576D6F470FFC6(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_505()
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (!func_506())
	{
		return 0;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
	{
		return unk_0xB9F5AD0599FD42F7(iVar0);
	}
	return 0;
}

int func_506()
{
	if (!func_548())
	{
		return 1;
	}
	else if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
	{
		if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
		{
			if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), -1, 0) == unk_0x16F2683693E537C9())
			{
				if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					if (!unk_0xAF6690C489CC6203(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
					{
						unk_0x73270B3C9CC833FD(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false, 0);
					}
					return 1;
				}
				else
				{
					unk_0x0C8A454B494DAA0D(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0));
				}
			}
		}
		else
		{
			unk_0x8B1D3F9E1517FA09(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0));
		}
	}
	return 0;
}

int func_507()
{
	vector3 vVar0;
	
	if (!func_488(iLocal_49, 4096))
	{
		if (func_414(iLocal_90, unk_0x16F2683693E537C9(), 1) < 30f)
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, true) };
			if ((((((unk_0x72DA46B7797D51EA(88, vVar0, 30f) || unk_0x72DA46B7797D51EA(91, vVar0, 30f)) || unk_0x72DA46B7797D51EA(90, vVar0, 30f)) || unk_0x72DA46B7797D51EA(104, vVar0, 30f)) || unk_0x72DA46B7797D51EA(116, vVar0, 30f)) || (unk_0x72DA46B7797D51EA(114, vVar0, 30f) && !func_548())) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				if (!func_548())
				{
					unk_0x11AD11297DC58CC7(iLocal_90, false);
				}
				func_480(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_508()
{
	if ((unk_0xC844350D5D58C99A(iLocal_90) && !unk_0x437347B10A200C4B(iLocal_90, 0)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (func_548())
		{
			if (func_550(unk_0xD803B885F5E47A62(), 0))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x405E212DDE472467(iLocal_90, 0))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
		{
			if (!unk_0x405E212DDE472467(iLocal_90, 0))
			{
				if (!func_510(9))
				{
					if (!unk_0x437347B10A200C4B(iLocal_90, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							func_489("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_509() || unk_0x991B1F0980C62628()))
				{
					func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				func_489("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_510(9) && !func_510(5))
			{
				return 1;
			}
			else if (!(func_509() || (unk_0x991B1F0980C62628() && !func_404())))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_489("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_90))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_509()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_511(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_511(int iParam0)
{
	return func_512(iParam0, Global_41431);
}

int func_512(int iParam0, int iParam1)
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

void func_513()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &Var2, 2);
			if (Var2 == -1835440739)
			{
				if (Var2.f_1 == unk_0xD803B885F5E47A62())
				{
					func_196(128);
				}
			}
		}
		iVar0++;
	}
}

void func_514()
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (!unk_0x2E9F2B9C010D34D9())
	{
		return;
	}
	if (unk_0x9BFC2168CB5FCF68(false, 0) != 1)
	{
		if (func_515(1, 0, 1))
		{
			if (unk_0xA108079788452A90(0) <= 1)
			{
				unk_0x0BEC04ECA8485A3A(1);
			}
		}
	}
}

bool func_515(int iParam0, bool bParam1, bool bParam2)
{
	return func_516(0, iParam0, 1, bParam1, bParam2);
}

int func_516(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_520(iParam0) - func_519(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_518(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_519(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_517(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_517(int iParam0)
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

int func_518(int iParam0)
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

int func_519(int iParam0, bool bParam1)
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

int func_520(int iParam0)
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

bool func_521(int iParam0)
{
	return func_488(iLocal_52, iParam0);
}

void func_522(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_272 + uParam0->f_273) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 29))
					{
						func_523(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_523(int iParam0)
{
	func_524(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_524(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_450(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

void func_525(int iParam0)
{
	if (func_488(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_526()
{
	func_2(0);
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (!unk_0x437347B10A200C4B(iLocal_90, 0))
		{
			func_2(1);
		}
		else
		{
			func_489("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_489("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		func_2(0);
		func_489("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_527(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0;
			}
		}
		if (!func_530())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_529())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0;
					}
				}
				if (func_528(157))
				{
					if (!bParam2)
					{
						func_531();
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
					func_531();
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
				func_531();
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
			func_531();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_528(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_529()
{
	return Global_2450632.f_593;
}

bool func_530()
{
	return Global_1312854;
}

void func_531()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_532()
{
	func_196(1);
}

void func_533(var uParam0)
{
	func_537();
	if (func_48(0, 1))
	{
		unk_0xF3039DE1FDB4F6FD(true);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0xAF6690C489CC6203(iLocal_90))
		{
			if ((func_548() && unk_0xD1960163A3042274(iLocal_90, 1805844857) != 1) && unk_0xD1960163A3042274(iLocal_90, -251125078) != 1)
			{
				unk_0x01E4BB5190DF7317(iLocal_90, 1193033728, 0);
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xFADC0A217229F6B5(iLocal_90, true);
				}
				if (unk_0xFEC78493E359E4B0(iLocal_90))
				{
					unk_0x6DAD7906B73F064D(&iLocal_90);
				}
				unk_0x0FB22E2FED7BCC7E(iLocal_90);
			}
			else
			{
				if (unk_0xFEC78493E359E4B0(iLocal_90))
				{
					unk_0x6DAD7906B73F064D(&iLocal_90);
				}
				unk_0x0FB22E2FED7BCC7E(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (func_488(iLocal_49, 64))
	{
		Global_30920 = 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		unk_0xA3BF0AA5A2608191(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (func_488(iLocal_49, 2048))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	if (!func_536())
	{
		func_535();
	}
	if (func_548())
	{
		if (unk_0x49083FDB78AC0509(iLocal_83))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_83);
		}
	}
	iLocal_92 = 0;
	func_537();
	func_534();
	Global_30921 = 0f;
	if (!Global_1681961.f_4551 && !Global_1681961.f_4555)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 1);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (func_521(256))
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 6, iLocal_84, iLocal_85, 0);
			func_196(1024);
		}
	}
	if (func_468("PROS_ACCEPT") && !Global_30918)
	{
		unk_0xA37A90C62806D848(1);
	}
	if (Global_30922 == unk_0x0D0A574C76D769AC())
	{
		Global_30918 = 0;
		Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_408 = 0;
	}
	func_445(uParam0, 0);
	if (func_548())
	{
		func_196(2048);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_534()
{
}

void func_535()
{
	Global_2439138.f_1156.f_10 = 0;
}

bool func_536()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687712, 3);
}

void func_537()
{
}

void func_538(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0x405E212DDE472467(iLocal_90, 0))
		{
			if (unk_0xD1960163A3042274(iLocal_90, -828834893) != 1)
			{
				unk_0x75CDA8644CD3B5F5(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_548())
			{
				if (unk_0xAF6690C489CC6203(iLocal_90))
				{
					if (unk_0xFEC78493E359E4B0(iLocal_90))
					{
						if (unk_0x83F012E6200426DB(unk_0x7D3E8C4CDBD80BDF(iLocal_90)))
						{
							unk_0xFADC0A217229F6B5(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				unk_0xFADC0A217229F6B5(iLocal_90, true);
			}
		}
	}
}

void func_539()
{
	if (!func_548())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_90, 0))
	{
		if (!unk_0xE9FDA1035CFEA94F(iLocal_90))
		{
			func_96(0);
			iLocal_285 = 1;
		}
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0x11AD11297DC58CC7(iLocal_90, false);
				unk_0x9FD50E5122D8E89D(iLocal_90);
			}
		}
		else
		{
			unk_0x9FD50E5122D8E89D(iLocal_90);
		}
		unk_0x06FF977AA95DCCE3(iLocal_90, 0);
	}
	if (unk_0xDF1306B443CD3D15(iLocal_93, 0) && !unk_0x437347B10A200C4B(iLocal_93, 0))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_93))
			{
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_28 <= 0 && !unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_274.f_26, 11))
				{
					unk_0xE32750CAC756824F(iLocal_93, false);
					unk_0x0882E3DC0C991680(iLocal_93, 3);
					unk_0x3CE99D79C10EEA67(iLocal_93, 0);
				}
				unk_0x9A8BCD43DBDDCDCA(iLocal_93, true, 0);
			}
		}
		else
		{
			unk_0xE32750CAC756824F(iLocal_93, false);
			unk_0x0882E3DC0C991680(iLocal_93, 3);
			unk_0x3CE99D79C10EEA67(iLocal_93, 0);
		}
	}
	func_547(iLocal_74);
	func_547(iLocal_75);
	func_547(iLocal_76);
	func_547(iLocal_77);
	func_547(iLocal_78);
	func_547(iLocal_79);
	func_547(iLocal_80);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
		if ((func_548() && iLocal_288 != 3) && func_488(iLocal_49, 2048))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 1);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 1);
	}
	if (func_488(iLocal_49, 2048))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
	func_5(&iLocal_49, 2048);
	unk_0xEAB026E686C0D991(2, 19, 1);
	unk_0xEAB026E686C0D991(2, 37, 1);
	if (!func_536())
	{
		func_535();
	}
	iLocal_287 = 0;
	if (func_488(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_30918 = 0;
		Global_30919 = 0;
		Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_408 = 0;
	}
	if (func_488(iLocal_49, 8))
	{
		if (unk_0x59F02DA2266A744C(func_92()))
		{
			unk_0x413168EF79E35C7B(func_92());
		}
	}
	func_546();
	func_466();
	if (((func_468("PROS_ACCEPT") || func_468("PROS_CAM_TOG")) || func_468("PROS_RESPONSE")) || func_468("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 1048576);
		unk_0xA37A90C62806D848(1);
	}
	func_363(0);
	unk_0xBFE31971E49FA500(true);
	if (func_488(iLocal_49, 8))
	{
		if (unk_0x59F02DA2266A744C(func_92()))
		{
			unk_0x413168EF79E35C7B(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	unk_0x8C26F31DFF77D124();
	func_123(0);
	unk_0xF3039DE1FDB4F6FD(true);
	func_540();
	if (func_548())
	{
		if (func_521(2))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
					{
						unk_0xC4B4C89FC0D48108(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), false);
						unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1);
					}
				}
			}
			else if (unk_0xECE0BE5313FD8BDA(iLocal_93))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_93))
				{
					unk_0x71EDC33E5A423750(iLocal_93, 1);
					unk_0xC4B4C89FC0D48108(iLocal_93, false);
					unk_0x443C9A6DC182DDD5(iLocal_93, 0);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_93);
					unk_0x71EDC33E5A423750(iLocal_93, 1);
					unk_0xC4B4C89FC0D48108(iLocal_93, false);
					unk_0x443C9A6DC182DDD5(iLocal_93, 0);
				}
			}
		}
	}
	func_188(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_540()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_545())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (func_544(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		unk_0x6106B2DBBCB1AA39(131, func_543(), 0f);
		unk_0x6106B2DBBCB1AA39(117, func_542(), 0f);
		unk_0x6106B2DBBCB1AA39(118, func_541(), 0f);
	}
}

int func_541()
{
	return iLocal_46;
}

int func_542()
{
	return iLocal_45;
}

int func_543()
{
	return 0;
}

int func_544(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_320(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_2458936.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0;
}

int func_545()
{
	if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xE6725CC0C55B6CA1())
	{
		return 1;
	}
	return 0;
}

void func_546()
{
	if (func_488(iLocal_49, 128))
	{
		func_406(39, 0);
		func_406(40, 0);
		func_406(41, 0);
		func_406(42, 0);
		func_406(43, 0);
		func_406(44, 0);
		func_5(&iLocal_49, 128);
	}
}

void func_547(int iParam0)
{
	if (func_548())
	{
		if (func_219(iParam0))
		{
			unk_0x45934E8E3471AAA9(iParam0);
		}
	}
}

bool func_548()
{
	return func_521(1);
}

bool func_549(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_208(iParam0, 1, 1))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0x405E212DDE472467(iVar0, iParam1))
		{
			iVar3 = unk_0x6937EA2286828455(iVar0, 0);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = unk_0x117658E336116132(iVar1);
				if (func_208(iVar2, 1, 1))
				{
					if (unk_0x9539D44F3E4492F6(iVar2) != iVar0)
					{
						if (unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iVar2), iVar3, iParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_551(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1590535[iParam0 /*876*/] == 2 || Global_1590535[iParam0 /*876*/] == 1) || Global_1590535[iParam0 /*876*/] == 0) || Global_1590535[iParam0 /*876*/] == 3) || Global_1590535[iParam0 /*876*/] == 8)
	{
		return 1;
	}
	return 0;
}

