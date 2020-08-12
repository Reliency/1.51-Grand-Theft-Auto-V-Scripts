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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	vector3 vLocal_626 = { 0f, 0f, 0f };
	struct<2> Local_627 = { 0, 5 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
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
	iLocal_18 = 3;
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
	vLocal_81 = { -131.052f, -1627f, 31.1755f };
	vLocal_82 = { 287.888f, -284.603f, 52.967f };
	vLocal_83 = { -319.66f, -832.28f, 31.61f };
	vLocal_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (unk_0x2EBF608FFE6CA406(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_298(25, iLocal_80);
			func_280();
		}
		else
		{
			func_280();
		}
	}
	vLocal_104 = { ScriptParam_627.f_1[0 /*3*/] };
	func_279(&uLocal_349, 3);
	func_278();
	if ((iLocal_80 == 1 && func_277(55)) && !func_276(55))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_235(vLocal_104, 25, iLocal_80, 0, 0))
	{
		func_232(-1);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	bVar0 = false;
	while (true)
	{
		wait(0);
		func_229(&uLocal_349);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		}
		func_228(iLocal_63, &uLocal_348);
		if (unk_0x338D6FF72D84D90F() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_214())
					{
						unk_0x060F249A9A3E3F4E(0);
						unk_0x28F5E4DA506AC0CA(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
				
				case 1:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = unk_0x7D0D8317DC09FF68(101, vLocal_104, 0f);
						}
						unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
						switch (iLocal_46)
						{
							case 1:
								func_205();
								break;
							
							case 2:
								unk_0x26F63FD28070F2CE("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										unk_0x26F63FD28070F2CE("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (unk_0xEB6A8945D1AC98A1(iLocal_61) || unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0))
										{
											bVar0 = unk_0xEB6A8945D1AC98A1(iLocal_60);
											if (!unk_0x762119754C50557A(iLocal_151))
											{
											}
											if (bVar0 == 0 && iLocal_80 == 1)
											{
												unk_0x64B1AD81046CB800(iLocal_60, 500, 1000, 0, 0, 0, 0);
												unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
												unk_0xFADC0A217229F6B5(iLocal_60, true);
												func_204(1);
												func_199();
											}
										}
										else
										{
											func_169();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									
									case 2:
										unk_0x26F63FD28070F2CE("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_168();
										if (iLocal_52 && !func_167())
										{
											iLocal_47 = 4;
										}
										break;
									
									case 4:
										unk_0x26F63FD28070F2CE("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_166())
										{
											func_165();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (unk_0xD1960163A3042274(iLocal_60, 242628503) == 7)
										{
											unk_0xDD353D0E9C789D0E(&iLocal_103);
											unk_0x0C8C0C840C2D1AD2(0, iLocal_61, 5000, 0, 2);
											unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 5000);
											unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0x75ABDC5F81978924(iLocal_103);
											unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
											unk_0xF82EA857DA10E0CD(&iLocal_103);
										}
										break;
									
									case 5:
										func_162();
										if (!unk_0x437347B10A200C4B(iLocal_60, 0))
										{
											if (unk_0xD1960163A3042274(iLocal_60, 242628503) == 7)
											{
												unk_0xDD353D0E9C789D0E(&iLocal_103);
												unk_0xF96A174EE26D7588(0, iLocal_61, 0);
												unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												unk_0x75ABDC5F81978924(iLocal_103);
												unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
												unk_0xF82EA857DA10E0CD(&iLocal_103);
											}
										}
										break;
								}
								if (func_161())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_160();
								if (iLocal_47 == 0)
								{
									if (func_158())
									{
										if (iLocal_119 == 4)
										{
											if (unk_0xE4EDC4B0E92C078B(iLocal_64))
											{
												unk_0x142CC44DB769B57E(&iLocal_64);
											}
											if (unk_0xE4EDC4B0E92C078B(iLocal_63))
											{
												unk_0x142CC44DB769B57E(&iLocal_63);
											}
											if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
											{
												iLocal_65 = func_156(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_155())
									{
										func_154();
									}
								}
								if (func_153())
								{
									func_152();
									func_151();
									if (unk_0x5A91F08DF773C39D(iLocal_60, vLocal_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!unk_0x4734A6196B611C3B(iLocal_61, 0))
									{
										func_149(iLocal_64, &uLocal_118);
									}
									else if (unk_0xE4EDC4B0E92C078B(iLocal_64))
									{
										if (unk_0x8FBD6436A27198B4(iLocal_64) == 1)
										{
										}
										else
										{
											unk_0x321E019A46034F39(iLocal_64, false);
											unk_0x61755AC17D8F538E(iLocal_64, 1);
										}
									}
								}
								if (func_148())
								{
									iLocal_46 = 10;
								}
								break;
							
							case 4:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (func_166())
								{
									func_165();
									func_162();
								}
								if (func_161())
								{
									iLocal_46 = 11;
								}
								func_139();
								break;
							
							case 5:
								unk_0x26F63FD28070F2CE("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(1);
								if (!bLocal_126)
								{
									func_138(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_137();
									func_136();
									func_135();
									if (func_134())
									{
										func_133();
										func_199();
									}
									if (func_126(func_127()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_61();
								break;
							
							case 10:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							
							case 3:
								func_59();
								break;
							
							case 11:
								func_58();
								break;
							
							case 6:
								if (func_161())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							
							case 8:
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									if (unk_0x12DE711B1C681E9E(iLocal_60, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_280();
									}
								}
								break;
							
							case 9:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (unk_0xC844350D5D58C99A(iLocal_61))
								{
									if (unk_0xEB6A8945D1AC98A1(iLocal_61))
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_64))
										{
											unk_0x142CC44DB769B57E(&iLocal_64);
										}
										if (!unk_0xC844350D5D58C99A(iLocal_60))
										{
											if (unk_0xC844350D5D58C99A(iLocal_62))
											{
												unk_0xF690C84DADBB3551(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_139();
										}
									}
								}
								break;
							
							case 12:
								if (unk_0xC844350D5D58C99A(iLocal_62))
								{
									unk_0xF690C84DADBB3551(&iLocal_62);
								}
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
								func_199();
								break;
							
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (unk_0x762119754C50557A(iLocal_151))
						{
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								if (vdist(vLocal_146, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) > 150f)
								{
									func_280();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(unk_0x16F2683693E537C9(), iLocal_61, 1) > 150f && (!unk_0x0A059E0DB9253280(iLocal_61) || unk_0x03068588A1FCED1A(iLocal_61)))
								{
									func_37(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0, 0);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 1))
							{
								if (unk_0xC844350D5D58C99A(iLocal_62))
								{
									if (unk_0x50B5F6F3C29E9380(iLocal_62, iLocal_60))
									{
										unk_0x15AFB6CBDE990FB6(iLocal_62, 1, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!unk_0x437347B10A200C4B(iLocal_61, 0) && !unk_0x437347B10A200C4B(iLocal_60, 0))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, true), unk_0x68F4C0EC296D3901(iLocal_60, true), true) > 100f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true) < 100f)
								{
									unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							if (iLocal_80 == 3)
							{
								if (unk_0xD1960163A3042274(iLocal_61, 1805844857) != 1)
								{
									unk_0x8FB4E06C94958F84(iLocal_61);
									unk_0xF3268524E9BE6D6E(iLocal_61, iLocal_60, 200f, -1, 0, 0);
									unk_0xBD453909DC26A85D(iLocal_61, -530524, true, 0, 0);
									iLocal_124 = 1;
								}
							}
							else if (unk_0xD1960163A3042274(iLocal_61, 1805844857) != 1)
							{
								unk_0x8FB4E06C94958F84(iLocal_61);
								unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
								unk_0xBD453909DC26A85D(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (unk_0xDDCA9A4E51DADA2B(iLocal_61, -2134635134))
							{
								unk_0xF3268524E9BE6D6E(iLocal_61, iLocal_60, 200f, -1, 0, 0);
								unk_0xBD453909DC26A85D(iLocal_61, -530524, true, 0, 0);
								iLocal_124 = 1;
							}
							if (iLocal_80 == 1 || iLocal_80 == 4)
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
										unk_0xBD453909DC26A85D(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
								if (unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, -1, 0, 0);
										unk_0xBD453909DC26A85D(iLocal_61, -530524, true, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_1()
{
	if (unk_0xC844350D5D58C99A(iLocal_60))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					func_280();
				}
			}
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			func_2(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			func_2(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		func_37(&uLocal_336, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
	{
		func_37(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 1);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_29(uParam0, bParam5, bParam7, 0))
			{
				func_25(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_36(sParam3))
				{
					unk_0xA37A90C62806D848(1);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_37(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
				{
					func_37(uParam0, iVar0, 1);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)
{
	if (func_34(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(true);
		unk_0x29D5132FBDCF2B1E(0);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_10(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(1, 1, 0))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (func_24(0))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(3) == 3 || unk_0xA4FD7964FEE91ED8(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(6) == 3 || unk_0xA4FD7964FEE91ED8(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(4) == 3 || unk_0xA4FD7964FEE91ED8(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(5) == 3 || unk_0xA4FD7964FEE91ED8(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(2) == 3 || unk_0xA4FD7964FEE91ED8(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 3 || unk_0xF3545351E9CBB11F() == 4)
			{
				return 0;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0;
			}
		}
	}
	if ((func_22() || func_21(Global_4456448.f_232883)) || func_20())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar1 = func_19(unk_0x16F2683693E537C9(), 0);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x134B62B726CEC8E6(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x134B62B726CEC8E6(iVar0) == -1693015116 && iVar1 == 0) && func_18(iVar0, 10)) && unk_0x0ECB5CA5140957AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_15(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 1, 1))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == unk_0xD803B885F5E47A62()) && func_16(iParam0, 1, 0))
		{
			return Global_2425662[iParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	return -1;
}

int func_18(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_19(int iParam0, int iParam1)
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

var func_20()
{
	return Global_2450632.f_17;
}

bool func_21(int iParam0)
{
	return iParam0 == 51;
}

var func_22()
{
	return Global_2450632.f_16;
}

bool func_23()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_24(int iParam0)
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

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319117 == 1)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
		func_37(uParam0, 0, 0);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_26())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, -1, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0, 0);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_26()
{
	return func_27(unk_0xD803B885F5E47A62());
}

int func_27(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_32(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1))
					{
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0, 80))
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0, 140, 1);
			unk_0x38C3A68D7861DCFD(0, 80, 1);
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x38C3A68D7861DCFD(0, 80, 1);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0, 80) && unk_0x1C0640BA9A7327B3() > Global_116)
			{
				unk_0xF3039DE1FDB4F6FD(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	unk_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_36(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_37(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x82A772610883F395("FocusOut", 0, 0);
			unk_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0xF3039DE1FDB4F6FD(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_36(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_36(sVar0))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)
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

void func_39()
{
	func_280();
}

void func_40()
{
	if (!unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			vLocal_146 = { unk_0xC6151A4F2BB0AC79(iLocal_61, 1067030938, 1069547520) };
		}
		else
		{
			vLocal_146 = { unk_0x550B1459B4642A86(unk_0x68F4C0EC296D3901(iLocal_61, true), 1.2f, 1.5f) };
		}
		iLocal_151 = unk_0xA6FF0828D17CF374(joaat("pickup_money_wallet"), vLocal_146, iLocal_120, iLocal_152, 1, iLocal_77);
		iLocal_65 = func_156(iLocal_151);
		func_37(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x01E4BB5190DF7317(0, 1193033728, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		unk_0xFADC0A217229F6B5(iLocal_60, true);
		wait(0);
		func_280();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_56();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_48();
		func_44();
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
		func_56();
	}
	return 0;
}

void func_44()
{
	if (!func_45())
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

int func_45()
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
	if (func_46(unk_0xD803B885F5E47A62()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 20);
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

void func_48()
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

void func_49()
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

int func_50()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
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

void func_52()
{
	if (func_53(14))
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
		Global_19486 = func_127();
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

bool func_53(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_54()
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

bool func_55(int iParam0, int iParam1)
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

void func_56()
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_58()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_60, true);
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xF690C84DADBB3551(&iLocal_62);
		}
		wait(0);
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_61) || unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		if (unk_0x762119754C50557A(iLocal_151))
		{
			if (unk_0x797C48AACDB248B0(iLocal_151))
			{
				iLocal_54 = 1;
				func_139();
			}
			else
			{
				func_147(0);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_59()
{
	bool bVar0;
	
	func_139();
	if (unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0x797C48AACDB248B0(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_61, true);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x96167B03C5A77156(0, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0, 16);
				unk_0xFADC0A217229F6B5(iLocal_61, true);
				unk_0xE8832A9E16A57A1F(iLocal_61, false, 1);
				unk_0x6DAD7906B73F064D(&iLocal_61);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						if (unk_0x5A91F08DF773C39D(iLocal_60, unk_0xE925E52ACABA4CE7(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_80 == 3)
							{
								if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									unk_0xA3BF0AA5A2608191(iLocal_60);
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								unk_0xA3BF0AA5A2608191(iLocal_60);
								unk_0xDD353D0E9C789D0E(&iLocal_103);
								unk_0x96167B03C5A77156(0, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 20000, 0.25f, 0, 1193033728);
								unk_0x75ABDC5F81978924(iLocal_103);
								unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
								unk_0xF82EA857DA10E0CD(&iLocal_103);
								iLocal_49 = 1;
							}
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
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_80 == 3)
					{
						if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
							unk_0xFADC0A217229F6B5(iLocal_60, true);
							if (unk_0xE4EDC4B0E92C078B(iLocal_63))
							{
								unk_0x142CC44DB769B57E(&iLocal_63);
							}
							unk_0x6DAD7906B73F064D(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_330, 3) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_326, 3)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_60, true);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
						unk_0x6DAD7906B73F064D(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_61, true);
				unk_0xE8832A9E16A57A1F(iLocal_61, false, 1);
				unk_0x6DAD7906B73F064D(&iLocal_61);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xA3BF0AA5A2608191(iLocal_60);
				unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
				unk_0xFADC0A217229F6B5(iLocal_60, true);
				unk_0x6DAD7906B73F064D(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (iLocal_49)
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (unk_0x8CA9406E01C7EE58(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (unk_0x762119754C50557A(iLocal_151))
								{
									if (unk_0x797C48AACDB248B0(iLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										unk_0x40B7230FD4C59AA2(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (unk_0xD1960163A3042274(iLocal_60, 242628503) == 7)
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xC6EB89C59F2AF6B8(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						unk_0x6D80F1AEBA734886(iLocal_60, iLocal_152);
						unk_0x6DAD7906B73F064D(&iLocal_60);
						func_204(3);
						func_199();
					}
					else
					{
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_60, true);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
						unk_0x6DAD7906B73F064D(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					unk_0x6D80F1AEBA734886(iLocal_60, iLocal_152);
					unk_0x6DAD7906B73F064D(&iLocal_60);
					func_204(3);
					func_199();
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_60, true);
					if (unk_0xE4EDC4B0E92C078B(iLocal_63))
					{
						unk_0x142CC44DB769B57E(&iLocal_63);
					}
					unk_0x6DAD7906B73F064D(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_60()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_60, true);
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
}

void func_61()
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				vVar7 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				iVar8 = 1;
				if (iLocal_80 == 1)
				{
					if (vVar7.z > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5f, 5f, 5f, 0, 1, 0) && iVar8 == 1)
				{
					if (func_124(2))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						if (func_123(1, 0, 1))
						{
							if (!func_122())
							{
								if (!unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
								{
									func_114(1, 1, 1, 0, 0, 0);
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
									{
										while (!func_112(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), fLocal_71, 1, 1056964608, 0, 1, 0) || func_167())
										{
											unk_0x3FC8DBCC154CA56B();
											wait(0);
										}
										if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
										{
											unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
										}
									}
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
									if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
									{
										unk_0x46CB381A452EF99D(iLocal_60, 0);
									}
									unk_0x3FC8DBCC154CA56B();
									unk_0x68F065432F4692FB(0);
									unk_0x850CF499433B183D(iLocal_117);
									if (unk_0x25037C66EB32B076())
									{
										func_110();
									}
									bLocal_126 = true;
									settimera(0);
								}
							}
						}
					}
				}
				else
				{
					func_108(unk_0x68F4C0EC296D3901(iLocal_60, true), &uLocal_70, &fLocal_71);
				}
			}
			else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 15f, 15f, 15f, 0, 1, 0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					unk_0xC6EB89C59F2AF6B8(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				unk_0xBD453909DC26A85D(iLocal_60, -668482597, false, 0, 0);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					unk_0x3FC8DBCC154CA56B();
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							func_105(iLocal_60, &vLocal_105, &vLocal_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 1)
							{
								if (vLocal_106.z > 225f && vLocal_106.z < 265f)
								{
									if (vLocal_106.z < 245f)
									{
										vLocal_106.z = 225f;
									}
									else
									{
										vLocal_106.z = 265f;
									}
								}
								else if (vLocal_106.z > 45f && vLocal_106.z < 85f)
								{
									if (vLocal_106.z < 65f)
									{
										vLocal_106.z = 45f;
									}
									else
									{
										vLocal_106.z = 85f;
									}
								}
							}
							vLocal_105.z = (vLocal_105.z + 2f);
							unk_0xE82754C349C7B581(vLocal_105, &(vLocal_105.f_2), 0, 0);
							vVar1 = { unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0f, 2) };
							vVar4 = { vVar1 - vLocal_105 };
							vVar4.z = 0f;
							fVar5 = vmag(vVar4);
							unk_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
							fVar6 = (vLocal_105.z - vVar1.z);
							vLocal_106.x = unk_0x5D8ABF6396A76564(fVar6, fVar5);
							if (vLocal_106.x > 30f || vLocal_106.x < -30f)
							{
								vLocal_106.x = 0f;
							}
						}
						if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0))
						{
							if (!unk_0xDF1306B443CD3D15(iVar0, 0))
							{
								iVar0 = unk_0x728870EB733D12A1();
								unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &uVar2, &Var3);
								if (unk_0x5A91F08DF773C39D(iVar0, vLocal_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, false, true, 0) || unk_0x5A91F08DF773C39D(iVar0, unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (iLocal_80 == 1)
									{
										if (vLocal_106.z > 40f && vLocal_106.z < 220f)
										{
											vLocal_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											vLocal_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (iLocal_80 == 3)
									{
										if (vLocal_106.z > 160f && vLocal_106.z < 340f)
										{
											vLocal_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											vLocal_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (iLocal_80 == 4)
									{
										if (vLocal_106.z > 240f || vLocal_106.z < 60f)
										{
											vLocal_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											vLocal_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = unk_0xD9522BA9E27E1349(iVar0);
										vLocal_74 = { func_103(vLocal_105, unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0, 2)) };
									}
									if (unk_0xDF1306B443CD3D15(iVar0, 0))
									{
										unk_0xA47B46945FF6DE74(iVar0, vLocal_74, 1, false, 0, 1);
										unk_0xD8F6A53F4799FAFE(iVar0, fLocal_73);
										unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
										unk_0x05CA0E7946B27A19(iVar0, 1);
									}
								}
							}
						}
						unk_0x75CFD6AD66ADFDD1(vLocal_105, 20f, 2);
						unk_0x679C321F8CAA2CFA(vLocal_105, 20f, 0);
						unk_0x536F1BE96C726C4B(vLocal_105, 2f, 1, 1, 0, false);
						unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), true);
						iLocal_62 = unk_0x7707E48765093646(iLocal_77, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true, true, false);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x9F528B1B53FBC5D9(iLocal_62, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						iLocal_107 = unk_0xE9744DB7B8CA6965(vLocal_105, vLocal_106, 2);
						unk_0xEFC3DF9D33E248D8(iLocal_107, false);
						iLocal_108 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", false);
						unk_0x93E9ED66DAB9FBE3(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x327AAEE25F323797(iLocal_60);
							unk_0x915804B434753CBD(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						unk_0xE3BB8E05FCEB3FBE(iLocal_108, true);
						unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						settimera(0);
						iLocal_125++;
					}
					unk_0x3FC8DBCC154CA56B();
					break;
				
				case 1:
					if ((unk_0x69DF961355195C3C(iLocal_107) && unk_0xA45992A6CE82FB43(iLocal_107) > 0.9f) || func_101(1000))
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xE3BB8E05FCEB3FBE(iLocal_108, false);
						unk_0x9A8DDC7C522F5BF5(iLocal_108, 0);
						func_100();
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x327AAEE25F323797(iLocal_60);
							unk_0x6D80F1AEBA734886(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							vVar1 = { unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
							unk_0xA47B46945FF6DE74(iLocal_60, vVar1, 1, false, 0, 1);
							unk_0x11AD11297DC58CC7(iLocal_60, false);
							vVar1 = { unk_0xEEB20D14BD38615E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 2) };
							unk_0xD8F6A53F4799FAFE(iLocal_60, vVar1.z);
							if (iLocal_80 == 4)
							{
								if (func_99(vVar1.z, 0f, 90f))
								{
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0x01E4BB5190DF7317(0, unk_0xD9522BA9E27E1349(iLocal_60), 1);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
								}
								else
								{
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									unk_0x01E4BB5190DF7317(0, unk_0xD9522BA9E27E1349(iLocal_60), 1);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
								}
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_103);
								unk_0x01E4BB5190DF7317(0, vVar1.z, 1);
								unk_0x75ABDC5F81978924(iLocal_103);
								unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
								unk_0xF82EA857DA10E0CD(&iLocal_103);
							}
							unk_0x79C43E2BAC7C696F(iLocal_60, cLocal_334, 1048576000);
							unk_0xBD453909DC26A85D(iLocal_60, -668482597, true, 0, 0);
							unk_0xFADC0A217229F6B5(iLocal_60, true);
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
						}
						if (unk_0xC844350D5D58C99A(iLocal_62))
						{
							unk_0xF690C84DADBB3551(&iLocal_62);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x6D80F1AEBA734886(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							unk_0x46CB381A452EF99D(iLocal_60, 1);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						wait(0);
						unk_0x04B065D07D2FB5B9(0, 0, 3, 0);
						func_64(func_127(), 1, iVar9);
						func_63(joaat("rc_wallets_returned"), 1);
						func_204(3);
						func_199();
					}
					else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), -3856156))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x50B5F6F3C29E9380(iLocal_62, unk_0x16F2683693E537C9()))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_62, 0, true);
								if (unk_0xCED082ADD3739B9F(iLocal_60))
								{
									unk_0x9F528B1B53FBC5D9(iLocal_62, iLocal_60, unk_0x4A089F2B762B8D33(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									unk_0x9F528B1B53FBC5D9(iLocal_62, iLocal_60, unk_0x4A089F2B762B8D33(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || func_62())
						{
							iLocal_59 = 1;
						}
					}
					unk_0x3FC8DBCC154CA56B();
					break;
				}
		}
	}
	else
	{
		func_280();
	}
}

int func_62()
{
	if (Global_20805 == 4)
	{
		if (unk_0x1EE04CEA36EF313B())
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

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	if (func_98(iParam0) == 3)
	{
		return 0;
	}
	if (func_98(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_98(iParam0), 0, iParam1, iParam2, 0);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
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
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
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
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
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
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
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
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_41431 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8274, 0, -1, 1, 0);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_2097152[func_70() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), iParam0);
		unk_0x0674E58A79778E99(&(Global_2097152[func_70() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_69(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)
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

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1312745;
}

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_73();
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

void func_75(int iParam0)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_76(int iParam0)
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
		return func_78(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_77(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_77(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_77(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_77(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_77(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_77(8274, -1, 0);
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
	return unk_0xEAE0D21A50E6C7F4(Global_2097152[func_70() /*10930*/].f_6174.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)
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
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_53(14) && !func_94(iParam0))
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
	if (func_93(&Global_4270065))
	{
		if (func_91(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4270065, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4270064 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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

int func_99(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	
	iVar0 = unk_0xAE06CCC36C49929C(26379945, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 65f, 1, 2);
	unk_0xE3BB8E05FCEB3FBE(iVar0, true);
}

int func_101(int iParam0)
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
			if (func_102())
			{
				Global_27 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

int func_102()
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

Vector3 func_103(vector3 vParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0x728870EB733D12A1();
	if (!unk_0xAF6690C489CC6203(iVar0))
	{
		unk_0x73270B3C9CC833FD(iVar0, true, 0);
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &vVar3, &vVar4);
	unk_0x4490D017C57827E9(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (vdist(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (vdist(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, true) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, true) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, true) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < vdist(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, true) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		wait(0);
	}
	return vVar1;
}

Vector3 func_104(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)
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

void func_105(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	uParam2->f_2 = func_107(iParam0, unk_0x16F2683693E537C9(), 1);
	fVar3 = func_107(iParam0, unk_0x16F2683693E537C9(), 1);
	fVar4 = func_107(iParam0, unk_0x16F2683693E537C9(), 1);
	vVar10 = { unk_0x68F4C0EC296D3901(iParam0, false) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false) };
	if (unk_0xB4AE0788C1587752(sParam3))
	{
		vVar9 = { unk_0x1BB04F10296A1C5E(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_106(unk_0x68F4C0EC296D3901(iParam0, false), *uParam1, 1);
					*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iParam0, false), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0x6D4C9F7CF124AE37(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0x1EC301670B54C6DE(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_106(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		wait(0);
	}
}

float func_106(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
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

float func_107(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	return func_106(vVar0, vVar1, iParam2);
}

void func_108(vector3 vParam0, var uParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - vParam0 };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_109(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		fVar0 = unk_0xD9522BA9E27E1349(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
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

int func_112(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_113(iParam0);
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

void func_113(int iParam0)
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

void func_114(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_121(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_50())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_120(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_121(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_120(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_118(unk_0xD803B885F5E47A62())) && !func_116(unk_0xD803B885F5E47A62(), 0)) && !func_115()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_118(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_115()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_73();
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

int func_118(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
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

bool func_119()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_120(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_121(int iParam0)
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

int func_122()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (func_167())
		{
			return 1;
		}
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
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

bool func_124(int iParam0)
{
	return func_36(func_125(iParam0));
}

char* func_125(int iParam0)
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

int func_126(int iParam0)
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

int func_127()
{
	func_128();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_128()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_131(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_130(unk_0x16F2683693E537C9());
			if (func_129(iVar0) && (!func_53(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_129(Global_111638.f_2358.f_539.f_4321))
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

bool func_129(int iParam0)
{
	return iParam0 < 3;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_131(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_131(int iParam0)
{
	if (func_129(iParam0))
	{
		return func_132(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_132(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_133()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_60, true);
		wait(0);
	}
}

int func_134()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		vVar0 = { vVar0 + unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0))
	{
		if (vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_60, true)) > (fLocal_139 + 50f))
		{
			func_199();
		}
		else if (func_126(func_127()) < iLocal_152)
		{
			func_199();
		}
	}
}

void func_136()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, Global_19, 0, 1, 0))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_60, 3000, 0, 2);
			unk_0x0C8C0C840C2D1AD2(iLocal_60, unk_0x16F2683693E537C9(), 3000, 0, 2);
		}
	}
}

void func_137()
{
	float fVar0;
	
	if (iLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_140, vLocal_141, fVar0, 0, true, 0))
		{
			if (!iLocal_131)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xF96A174EE26D7588(iLocal_60, unk_0x16F2683693E537C9(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_142, vLocal_143, fVar0, 0, true, 0))
		{
			if (!iLocal_132)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xF96A174EE26D7588(iLocal_60, unk_0x16F2683693E537C9(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_144, vLocal_145, fVar0, 0, true, 0))
		{
			if (!iLocal_133)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (unk_0x12DE711B1C681E9E(iLocal_60, unk_0x16F2683693E537C9(), 25f, 25f, 5f, 0, 1, 0) && unk_0xF649DD3BF44195C7(iLocal_60, unk_0x16F2683693E537C9(), 17))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || func_62())
				{
					if (!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
						if (iLocal_45 == 2)
						{
							unk_0xC6EB89C59F2AF6B8(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_138(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iParam0, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				settimera(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_139()
{
	if (unk_0xEB751B41BC4080D4(iLocal_151))
	{
		if (!unk_0x437347B10A200C4B(iLocal_60, 0))
		{
			fLocal_139 = vdist(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_60, true));
		}
		func_63(joaat("rc_wallets_recovered"), 1);
		unk_0x5E858A00EAFA5B24(0, 200, 250);
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xF690C84DADBB3551(&iLocal_62);
		}
		func_142();
		func_141(&uLocal_348);
		if (unk_0xC844350D5D58C99A(iLocal_60))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xF4CB0B98F8F79D8D(iLocal_60, 0);
			}
		}
		func_147(0);
		unk_0x40B7230FD4C59AA2(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			func_140(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
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
					func_12(func_125(iParam0), -1);
					Global_111638.f_24990.f_4++;
					unk_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_141(var uParam0)
{
	*uParam0 = -99;
}

void func_142()
{
	iLocal_65 = 0;
	if (!unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		if (!unk_0x437347B10A200C4B(iLocal_60, 0))
		{
			iLocal_63 = func_143(iLocal_60, 0, 0);
		}
	}
}

int func_143(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_144(iParam0, bParam1, 145);
}

int func_144(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_145(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && iLocal_80 == 4)
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
			if (bParam0)
			{
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0xA3BF0AA5A2608191(iLocal_60);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
}

int func_148()
{
	if (unk_0xC844350D5D58C99A(iLocal_62))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_62))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x50B5F6F3C29E9380(iLocal_62, iLocal_60))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 18f, 18f, 18f, 0, 1, 0))
					{
						if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
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

void func_149(int iParam0, var uParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0x1C0640BA9A7327B3() > *uParam1 + 500)
		{
			if (unk_0x8FBD6436A27198B4(iParam0) == 1)
			{
				unk_0x321E019A46034F39(iParam0, true);
			}
			else
			{
				unk_0x321E019A46034F39(iParam0, false);
				unk_0x61755AC17D8F538E(iParam0, 1);
			}
			*uParam1 = unk_0x1C0640BA9A7327B3();
		}
		if (!unk_0xFEBC1E4EC9E001F0() && func_150(0))
		{
			func_140(1);
		}
	}
}

bool func_150(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_111634, iParam0);
}

void func_151()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 8f, 8f, 18f, 0, 1, 0) || unk_0x0A059E0DB9253280(iLocal_60))
		{
			unk_0x790015DC92C918E2();
		}
	}
}

void func_152()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		unk_0x142CC44DB769B57E(&iLocal_64);
	}
	if (unk_0xC844350D5D58C99A(iLocal_62))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_62))
		{
			unk_0x15AFB6CBDE990FB6(iLocal_62, 1, true);
			unk_0xF690C84DADBB3551(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_45 == 2)
			{
				unk_0xBAFED2F6486F771A(iLocal_61, 128, true);
				unk_0xBAFED2F6486F771A(iLocal_61, 2, true);
				unk_0xBAFED2F6486F771A(iLocal_61, 1, false);
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
			}
			unk_0xFADC0A217229F6B5(iLocal_61, true);
		}
	}
}

int func_153()
{
	if (!unk_0x437347B10A200C4B(iLocal_61, 0))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 1))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_154()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
		unk_0xFADC0A217229F6B5(iLocal_60, true);
		wait(0);
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		unk_0xDD353D0E9C789D0E(&iLocal_103);
		unk_0xBC43ED9FE28DB191(0);
		unk_0x6C3AE6E278DB3D0E(0, unk_0x16F2683693E537C9(), 0, 16);
		unk_0x75ABDC5F81978924(iLocal_103);
		unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
		unk_0xF82EA857DA10E0CD(&iLocal_103);
		unk_0xFADC0A217229F6B5(iLocal_61, true);
		wait(0);
		unk_0xE8832A9E16A57A1F(iLocal_61, false, 1);
		unk_0x6DAD7906B73F064D(&iLocal_61);
	}
}

int func_155()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x869EFD0BC0868856(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	return func_157(iParam0);
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

int func_158()
{
	if (unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0x797C48AACDB248B0(iLocal_151))
		{
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0x437347B10A200C4B(iLocal_61, 0))
				{
					if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 18f, 18f, 18f, 0, 1, 0) || unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 1))
						{
							settimerb(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_159())
				{
					settimerb(0);
					iLocal_119 = 2;
					return 1;
				}
				if (unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 1))
					{
						if (unk_0xC844350D5D58C99A(iLocal_60))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
							{
								unk_0xA3BF0AA5A2608191(iLocal_60);
								unk_0xF4CB0B98F8F79D8D(iLocal_60, 0);
							}
						}
						settimerb(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 1))
				{
					settimerb(0);
					iLocal_119 = 2;
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xF4CB0B98F8F79D8D(iLocal_60, 0);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						unk_0xA3BF0AA5A2608191(iLocal_61);
						unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_61, true);
						unk_0xE8832A9E16A57A1F(iLocal_61, false, 1);
						unk_0x6DAD7906B73F064D(&iLocal_61);
					}
					return 1;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0x437347B10A200C4B(iLocal_60, 0))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
						{
							if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
							{
								settimerb(0);
								iLocal_119 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_159()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0xE115347EA59F7B86(iLocal_61, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_61) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
		{
			return 1;
		}
		if (unk_0x869EFD0BC0868856(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_160()
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (unk_0x03A10A5707B2BB1F(iLocal_61, 4))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || func_62()) || func_62())
					{
						iLocal_57 = 1;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || func_62()) || func_62())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_159())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || func_62()) || func_62())
		{
			if (unk_0x03A10A5707B2BB1F(iLocal_61, 4))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0, 16);
			}
			else
			{
				func_152();
			}
			iLocal_56 = 1;
		}
	}
}

int func_161()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x54648B774DB42A3A(iLocal_60, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (iLocal_45 == 2)
	{
	}
	if (!func_167())
	{
		if (timera() > 10000)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (!unk_0x7DECE00E09F41C95(iLocal_60))
				{
					func_163(iLocal_60, "GENERIC_CURSE_MED", 24);
					settimera(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(unk_0x16F2683693E537C9(), iLocal_61, 1) > 200f)
		{
			if (!unk_0x0A059E0DB9253280(iLocal_61) || unk_0x03068588A1FCED1A(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)
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

void func_165()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 7f, 7f, 7f, 0, 1, 0))
				{
					if (unk_0xD1960163A3042274(iLocal_60, 242628503) == 1)
					{
						if (unk_0x4F1B602325013CC2(iLocal_60) == iLocal_138)
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_60, unk_0x16F2683693E537C9(), 9000, 0, 2);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						unk_0x33CE5A9E32EA10B2(iLocal_60, true);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 7000, 0, 2);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 7000);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						settimera(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_166()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_168()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = unk_0x1C0640BA9A7327B3();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = unk_0x1C0640BA9A7327B3();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!func_167())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_45 == 2)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
								}
							}
							if (unk_0xE4EDC4B0E92C078B(iLocal_63))
							{
								unk_0x142CC44DB769B57E(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_169()
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 2)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (!func_196())
				{
					if (func_183())
					{
						func_280();
					}
				}
				if (func_182())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_66))
					{
						if (!unk_0x437347B10A200C4B(iLocal_61, 0))
						{
							iLocal_66 = func_143(iLocal_61, 1, 0);
						}
						func_174(1);
					}
				}
				if (func_173())
				{
					func_172();
					if (iLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0, iLocal_61, 16000, 0, 2);
							unk_0x96167B03C5A77156(0, vLocal_79, 1f, 20000, fVar0, 4, 1193033728);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							iLocal_55 = 1;
						}
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x0C8C0C840C2D1AD2(0, iLocal_60, -1, 0, 2);
						unk_0xC6EB89C59F2AF6B8(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						unk_0xE20F700AC2AFCA92(0, vLocal_79, iLocal_60, 1f, false, 1.5f, 4f, true, 0, 0, -957453492, 20000);
						unk_0x9BE7E7B6B488CC55(0, iLocal_60, -1, 1);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						settimera(0);
						bLocal_53 = true;
						unk_0x51B096AAC60548C1(0f);
					}
					else
					{
						if (iLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_171();
						bLocal_53 = true;
						bLocal_123 = true;
						settimera(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (timera() > 1000)
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!unk_0x437347B10A200C4B(iLocal_60, 0))
					{
						unk_0xF96A174EE26D7588(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || func_62())
				{
					unk_0xA3BF0AA5A2608191(iLocal_60);
					unk_0xDD353D0E9C789D0E(&iLocal_103);
					unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_103);
					unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
					unk_0xF82EA857DA10E0CD(&iLocal_103);
					func_172();
					iLocal_151 = unk_0xA6FF0828D17CF374(joaat("pickup_money_purse"), unk_0x550B1459B4642A86(unk_0x68E4ADDDDCD7BDDE(iLocal_60, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_120, iLocal_152, 1, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				func_170();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						vLocal_626 = { unk_0xE925E52ACABA4CE7(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (unk_0x797C48AACDB248B0(iLocal_151))
						{
							unk_0xA3BF0AA5A2608191(iLocal_61);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xE20F700AC2AFCA92(0, vLocal_626, iLocal_60, 2f, false, 0.1f, 4f, true, 0, 0, -957453492, 20000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							iLocal_624 = unk_0x1C0640BA9A7327B3();
						}
						iLocal_623 = 1;
						break;
					
					case 1:
						if (unk_0xD1960163A3042274(iLocal_61, 242628503) == 7)
						{
							vLocal_626 = { unk_0xE925E52ACABA4CE7(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, true), vLocal_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_61);
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0xC6EB89C59F2AF6B8(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((unk_0x1C0640BA9A7327B3() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					
					case 2:
						if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								unk_0x40B7230FD4C59AA2(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					
					case 3:
						if ((unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_320, "pickup_low", 3) && unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					
					case 4:
						unk_0xE8832A9E16A57A1F(iLocal_61, true, 1);
						unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 50f, -1, 0, 0);
						unk_0xF895E10BF4C72645(iLocal_61, 0, 0);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_170()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		unk_0x142CC44DB769B57E(&iLocal_63);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		if (unk_0x762119754C50557A(iLocal_151))
		{
			iLocal_65 = func_156(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_171()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0x7069CC4DE1EA3FAA(iLocal_61, unk_0x16F2683693E537C9(), 90f))
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			iLocal_335 = unk_0x544B74C043CE9948(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
	else
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_45 == 2)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			unk_0x796BDF31572BB055(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (iLocal_80 == 4)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
}

void func_172()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_66))
	{
		unk_0x142CC44DB769B57E(&iLocal_66);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		if (!unk_0x437347B10A200C4B(iLocal_61, 0))
		{
			iLocal_64 = func_143(iLocal_61, 1, 0);
		}
	}
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_61, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 4)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (func_176())
	{
		Global_111628 = 1;
		Global_111625 = unk_0x1C0640BA9A7327B3();
		if (func_175(Global_111627))
		{
			func_140(0);
		}
		unk_0x974531784BE14213(1, "RE_TITLE");
		if (iParam0 && func_175(Global_111627))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

int func_175(int iParam0)
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

int func_176()
{
	switch (func_177(&Global_30827, 0, 5, 0, unk_0x0D0A574C76D769AC()))
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

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_181(0))
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
		if (!func_179(iParam2))
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
			func_178(uParam0, iParam4);
		}
	}
	return 2;
}

void func_178(var uParam0, int iParam1)
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

bool func_179(int iParam0)
{
	return func_180(iParam0, Global_41431);
}

int func_180(int iParam0, int iParam1)
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

int func_181(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_179(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_80 == 1)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 2)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_80 == 3)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_183()
{
	if (!func_179(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, bool bParam1)
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
		if (func_129(func_127()))
		{
			iVar5 = func_190();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 2) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_185(iVar1, &Var0);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)
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

int func_190()
{
	func_128();
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

int func_191()
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

int func_192()
{
	if (func_195() && !func_191())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_111356 > 0;
}

int func_194()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
{
	if ((Global_111627 == func_197() && unk_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

int func_197()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_198(Var0);
	return uVar1;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_199()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 1, 0);
	}
	func_298(25, iLocal_80);
	func_203();
	func_200();
	func_280();
}

void func_200()
{
	func_201();
}

int func_201()
{
	if (func_202(0))
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

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_203()
{
	return 1;
}

void func_204(int iParam0)
{
	Global_111624 = iParam0;
}

void func_205()
{
	switch (iLocal_116)
	{
		case 0:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_116++;
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (func_182())
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_66))
						{
							if (!unk_0x437347B10A200C4B(iLocal_61, 0))
							{
								iLocal_66 = func_143(iLocal_61, 1, 0);
							}
							if (!func_196())
							{
								func_174(1);
							}
						}
					}
					if (func_173())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_172();
						iLocal_147 = unk_0x1C0640BA9A7327B3();
						unk_0x51B096AAC60548C1(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_121, 250f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_60, true);
					wait(0);
					func_211();
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_210())
				{
					iLocal_116 = 4;
				}
				if (func_159())
				{
					iLocal_116 = 9;
				}
				if (func_209())
				{
					iLocal_116 = 6;
				}
				if (func_208())
				{
					iLocal_116 = 4;
				}
			}
			if (!func_196())
			{
				if (func_183())
				{
					func_280();
				}
			}
			break;
		
		case 2:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 6f, 6f, 15f, 0, 1, 0))
					{
						if (unk_0xE115347EA59F7B86(iLocal_61, unk_0x16F2683693E537C9()) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 3f, 3f, 15f, 0, 1, 0))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_61, 65f))
							{
								iLocal_149 = unk_0x1C0640BA9A7327B3();
								unk_0x0C8C0C840C2D1AD2(iLocal_61, unk_0x16F2683693E537C9(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								settimerb(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = unk_0x1C0640BA9A7327B3();
								unk_0x0C8C0C840C2D1AD2(iLocal_61, unk_0x16F2683693E537C9(), 7000, 0, 2);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								settimerb(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_210() || func_208())
			{
				iLocal_116 = 4;
			}
			if (func_159())
			{
				iLocal_116 = 9;
			}
			if (func_209())
			{
				iLocal_116 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (unk_0xC844350D5D58C99A(iLocal_61))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0, 16);
							bLocal_113 = true;
							if (unk_0xC844350D5D58C99A(iLocal_60))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_121, 250f, -1, 0, 0);
									unk_0xFADC0A217229F6B5(iLocal_60, true);
									wait(0);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_63))
								{
									unk_0x142CC44DB769B57E(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_210())
				{
					iLocal_116 = 4;
				}
				if (func_159())
				{
					iLocal_116 = 9;
				}
				if (func_209())
				{
					iLocal_116 = 6;
				}
				if (func_207())
				{
					iLocal_116 = 9;
				}
				if (func_208())
				{
					iLocal_116 = 4;
				}
			}
			break;
		
		case 10:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_61) || func_38(unk_0x16F2683693E537C9(), iLocal_61, 1) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
		
		case 4:
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					if (!unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 1))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xEEB67C3D0A71A47B(0, unk_0x68F4C0EC296D3901(iLocal_61, false), 150f, -1, 0, 0);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_60, true);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					unk_0xA3BF0AA5A2608191(iLocal_61);
					unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
					unk_0xFADC0A217229F6B5(iLocal_61, true);
					if (unk_0xE4EDC4B0E92C078B(iLocal_64))
					{
						unk_0x142CC44DB769B57E(&iLocal_64);
					}
				}
			}
			if (unk_0x25037C66EB32B076())
			{
				func_110();
			}
			wait(0);
			if (!iLocal_122)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_280();
			}
			break;
		
		case 5:
			if (timerb() > 250)
			{
				if (unk_0xC844350D5D58C99A(iLocal_61))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						unk_0xAFF39FB306F8E232(iLocal_61, 17, true);
						unk_0x9DD8618CA5BF832D(iLocal_61, 156, true);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						unk_0xFADC0A217229F6B5(iLocal_61, true);
						wait(0);
						unk_0xE8832A9E16A57A1F(iLocal_61, false, 1);
						unk_0x6DAD7906B73F064D(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_60))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
					{
						if (!unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 1))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					wait(0);
					func_280();
				}
			}
			break;
		
		case 6:
			if (timera() > 500)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 10000, 0, 2);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, true);
							unk_0x6DAD7906B73F064D(&iLocal_60);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_61))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							unk_0xA3BF0AA5A2608191(iLocal_61);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 10000, 0, 2);
							unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 250f, -1, 0, 0);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_61, true);
						}
					}
				}
				wait(0);
				func_280();
			}
			break;
		
		case 7:
			settimera(0);
			iLocal_116++;
			break;
		
		case 8:
			if (timera() > 200)
			{
				func_211();
			}
			break;
		
		case 9:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					unk_0x9DD8618CA5BF832D(iLocal_61, 156, true);
					unk_0x7C8478BF70C1E072(iLocal_61, 50f, 0);
					if (unk_0x25037C66EB32B076())
					{
						func_110();
					}
					wait(0);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xA3BF0AA5A2608191(iLocal_60);
					unk_0x8BE3D040D15AEA1D(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = unk_0x1C0640BA9A7327B3();
	if (iLocal_150 && !bLocal_113)
	{
		if (unk_0xC844350D5D58C99A(iLocal_61) && unk_0xC844350D5D58C99A(iLocal_61))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 3f, 3f, 35f, 0, 1, 0)) && unk_0x0A059E0DB9253280(iLocal_61)) && !func_167())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || func_62()) || func_62())
					{
						unk_0x9DD8618CA5BF832D(iLocal_61, 156, true);
						unk_0x2D728BBC95A0267D(iLocal_61, unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f), 0);
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xD458AC1C1D29C3B4(iLocal_60, 99, 0);
						unk_0xEEB67C3D0A71A47B(iLocal_61, vLocal_121, 250f, -1, 0, 0);
						unk_0xFADC0A217229F6B5(iLocal_61, true);
						func_280();
					}
				}
			}
		}
	}
}

void func_206()
{
	Global_19671 = 0;
	func_56();
}

int func_207()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_61) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_60))
		{
			return 1;
		}
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_208()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 20f, 20f, 20f, 0, 1, 0))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
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
	if (!unk_0x437347B10A200C4B(iLocal_61, 0))
	{
		if (func_159())
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (unk_0xF649DD3BF44195C7(iLocal_60, unk_0x16F2683693E537C9(), 17))
			{
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6) && !unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						if (!unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_61))
						{
							if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
							{
								settimerb(0);
								return 1;
							}
						}
					}
					else if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
					{
						settimerb(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_210()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0))
	{
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_211()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!unk_0x869EFD0BC0868856(iLocal_60))
		{
			if (func_196())
			{
				if (unk_0xD1960163A3042274(iLocal_60, 242628503) == 7 || unk_0xD1960163A3042274(iLocal_60, 474215631) == 7)
				{
					if (unk_0x25037C66EB32B076())
					{
						func_110();
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_60))
						{
							unk_0xF3268524E9BE6D6E(iLocal_60, iLocal_61, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_60))
						{
							unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_104, 150f, -1, 0, 0);
						}
					}
					unk_0xFADC0A217229F6B5(iLocal_60, true);
					wait(0);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					wait(0);
					if (iLocal_152 > 0)
					{
						unk_0x6D80F1AEBA734886(unk_0x16F2683693E537C9(), (iLocal_152 / 100) * 90);
						func_64(func_127(), 1, iLocal_152);
						wait(0);
						func_212(func_127(), 1, (iLocal_152 / 10), 0, 1);
					}
					func_204(3);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_65(func_98(iParam0), 1, iParam1, iParam2, 0);
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

int func_213()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_184(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	func_225();
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_349, cLocal_333);
	func_224(&uLocal_349, cLocal_321);
	func_222(&uLocal_349, iLocal_75);
	func_222(&uLocal_349, iLocal_76);
	func_222(&uLocal_349, iLocal_77);
	func_224(&uLocal_349, cLocal_320);
	func_224(&uLocal_349, cLocal_319);
	func_224(&uLocal_349, cLocal_334);
	func_224(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_218(&uLocal_349))
	{
		func_215();
		return 1;
	}
	return 0;
}

void func_215()
{
	iLocal_60 = unk_0x36F2404464202779(26, iLocal_75, vLocal_67, fLocal_69, 1, true);
	unk_0x11AD11297DC58CC7(iLocal_60, true);
	unk_0x25C5402CC10F76CD(iLocal_60, false);
	unk_0xBAFED2F6486F771A(iLocal_60, 8, true);
	unk_0xBAFED2F6486F771A(iLocal_60, 128, true);
	unk_0xBAFED2F6486F771A(iLocal_60, 512, true);
	unk_0x33CE5A9E32EA10B2(iLocal_60, true);
	unk_0x400A62DD9C797E1E(iLocal_60);
	unk_0x6D80F1AEBA734886(iLocal_60, 0);
	unk_0x7980D72D61BEF4D5(iLocal_60, true);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 3, 0, 3, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 2, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 3, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 4, 1, 0, 0);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 8, 0, 0, 0);
	}
	unk_0xF63400DBE3303D26("theAssailant", &iLocal_78);
	iLocal_61 = unk_0x36F2404464202779(26, iLocal_76, vLocal_68, fLocal_72, 1, true);
	unk_0xE8832A9E16A57A1F(iLocal_61, true, 1);
	unk_0x11AD11297DC58CC7(iLocal_61, true);
	unk_0xE2F0767314863BD8(iLocal_61, 1, 0);
	unk_0x262EF6C6306BEA6C(iLocal_61, joaat("weapon_pistol"), -1, true, true);
	unk_0xAFF39FB306F8E232(iLocal_61, 13, false);
	unk_0xAFF39FB306F8E232(iLocal_61, 17, false);
	unk_0x1365063FA6365BE8(iLocal_61, true);
	unk_0x4E885A246A9D983A(iLocal_61, 42, true);
	unk_0x4E885A246A9D983A(iLocal_61, 137, true);
	unk_0xBAFED2F6486F771A(iLocal_61, 128, true);
	unk_0xBAFED2F6486F771A(iLocal_61, 2, false);
	unk_0x6DF7BF67E86AAE86(iLocal_61, iLocal_78);
	unk_0x33CE5A9E32EA10B2(iLocal_61, true);
	if (!unk_0x2EBF5002C6B6A06C(sLocal_102))
	{
		unk_0x4F39CC3882DD074E(iLocal_60, sLocal_102);
	}
	unk_0x4F39CC3882DD074E(iLocal_61, sLocal_101);
	unk_0x0E2400AB9174FA81(2, 45677184, iLocal_78);
	unk_0x0E2400AB9174FA81(2, 1191392768, iLocal_78);
	unk_0x0E2400AB9174FA81(2, iLocal_78, 45677184);
	unk_0x0E2400AB9174FA81(2, iLocal_78, 1191392768);
	unk_0x0E2400AB9174FA81(5, iLocal_78, 1862763509);
	switch (func_127())
	{
		case 0:
			func_217(&uLocal_154, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_217(&uLocal_154, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_217(&uLocal_154, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
			break;
	}
	func_217(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	func_217(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		unk_0xBAFED2F6486F771A(iLocal_61, 1, false);
	}
	if (iLocal_80 == 1 || iLocal_80 == 4)
	{
		func_216();
	}
	if (iLocal_80 == 3)
	{
		vLocal_105 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_106 = { 0f, 0f, 180f };
		iLocal_107 = unk_0xE9744DB7B8CA6965(vLocal_105, vLocal_106, 2);
		unk_0x915804B434753CBD(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_80 == 4)
	{
		unk_0x51EA29724CE5BF82(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_216()
{
	vector3 vVar0;
	
	unk_0x08841CDB215AE18F(iLocal_61, unk_0x1BB04F10296A1C5E(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0xEEB20D14BD38615E(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0xD8F6A53F4799FAFE(iLocal_61, vVar0.z);
	unk_0x08841CDB215AE18F(iLocal_60, unk_0x1BB04F10296A1C5E(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0, 2), 0, 0, 1);
	vVar0 = { unk_0xEEB20D14BD38615E(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0f, 2) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0xD8F6A53F4799FAFE(iLocal_60, vVar0.z);
	unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	unk_0xC6EB89C59F2AF6B8(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_218(var uParam0)
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
			if (!func_219(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_219(var uParam0)
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_220(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_221(iParam0))
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

int func_221(int iParam0)
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

void func_222(var uParam0, int iParam1)
{
	func_223(uParam0, 0, iParam1, "NULL", 0);
}

void func_223(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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

void func_224(var uParam0, char* sParam1)
{
	func_223(uParam0, 1, -1, sParam1, 0);
}

void func_225()
{
	func_278();
	unk_0x5D96D8530B3D0904(&iLocal_120, 3);
	unk_0x5D96D8530B3D0904(&iLocal_120, 4);
	unk_0x5D96D8530B3D0904(&iLocal_120, 1);
	if (iLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_227();
		iLocal_152 = 200;
		iLocal_46 = 2;
		vLocal_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		vLocal_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		vLocal_331 = { vLocal_67 };
		vLocal_332 = { 0f, 0f, fLocal_69 };
		vLocal_140 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_141 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_142 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_143 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_144 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		vLocal_74 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_127())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		vLocal_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		vLocal_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		vLocal_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_127())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_226();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (iLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			vLocal_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			vLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			vLocal_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			vLocal_74 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 4)
		{
			func_226();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			vLocal_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			vLocal_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			vLocal_331 = { vLocal_67 };
			vLocal_332 = { 0f, 0f, fLocal_69 };
			vLocal_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			vLocal_74 = { 42.5323f, -990.353f, 28.248f };
			vLocal_140 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_141 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_142 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_143 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_144 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_145 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_127())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_226()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x09AC81E49EA267F7(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_227()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x09AC81E49EA267F7(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_228(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x1C0640BA9A7327B3();
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = (unk_0x1C0640BA9A7327B3() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = ceil((to_float(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x4FA921CB56EDB0F8(iParam0) != 255)
				{
					unk_0x7F010F50CE03A8AF(iParam0, 255);
				}
			}
			else if (unk_0x4FA921CB56EDB0F8(iParam0) != 0)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x4FA921CB56EDB0F8(iParam0) != 255)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 255);
			}
		}
	}
}

void func_229(var uParam0)
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
						func_230(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_230(int iParam0)
{
	func_231(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_231(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_221(*iParam0))
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

void func_232(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_234(iParam0);
	unk_0x24D1A8A556F3252A(0);
	unk_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_233();
}

void func_233()
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

void func_234(int iParam0)
{
	Global_111627 = iParam0;
}

int func_235(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_197();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_275())
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
			if (vmag2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_202(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_274())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_184(100f, 1) != -1)
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
		if (!func_273(iParam1))
		{
			return 0;
		}
		if (func_129(func_127()))
		{
			if (func_272(func_127()) == 4 || func_272(func_127()) == 5)
			{
				return 0;
			}
		}
		if (func_129(func_127()))
		{
			if (!func_271(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_270(Global_111638.f_24990.f_43[iParam1]))
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
		if (func_269())
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
		if (!func_260(4))
		{
			return 0;
		}
		if (!func_179(5))
		{
			return 0;
		}
		if (func_259(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_259(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_273(30) && !func_259(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_129(func_127()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_258(iVar4))
				{
					if (func_236(iVar2))
					{
						if (!func_28(vVar3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vVar3) < (210f * 210f))
							{
								if (func_127() != iVar2)
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

bool func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_237(iVar0);
}

int func_237(int iParam0)
{
	return func_238(iParam0, 1);
}

int func_238(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_258(iParam0))
	{
		return 0;
	}
	func_239(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_240(func_251(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_250(iParam0, iParam1))
	{
		iVar0 = func_249(iParam1);
		iVar1 = func_247(iParam0);
		iVar2 = (func_247(iParam0) - func_247(iParam1));
		iVar3 = (func_249(iParam0) - func_249(iParam1));
		iVar4 = (func_246(iParam0) - func_246(iParam1));
		iVar5 = (func_245(iParam0) - func_245(iParam1));
		iVar6 = (func_244(iParam0) - func_244(iParam1));
		iVar7 = (func_243(iParam0) - func_243(iParam1));
	}
	else
	{
		iVar0 = func_249(iParam0);
		iVar1 = func_247(iParam1);
		iVar2 = (func_247(iParam1) - func_247(iParam0));
		iVar3 = (func_249(iParam1) - func_249(iParam0));
		iVar4 = (func_246(iParam1) - func_246(iParam0));
		iVar5 = (func_245(iParam1) - func_245(iParam0));
		iVar6 = (func_244(iParam1) - func_244(iParam0));
		iVar7 = (func_243(iParam1) - func_243(iParam0));
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
		iVar4 = (iVar4 + func_242(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_241(to_float(iVar0 + 1), 0f, 12f));
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

float func_241(float fParam0, float fParam1, float fParam2)
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

int func_242(int iParam0, int iParam1)
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

int func_243(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_244(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_245(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_246(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_247(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_248(unk_0xEAE0D21A50E6C7F4(iParam0, 31), -1, 1)) + 2011;
}

int func_248(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_249(int iParam0)
{
	return iParam0 & 15;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_258(iParam1) || !func_258(iParam0))
	{
		return 1;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	var uVar0;
	
	func_257(&uVar0, unk_0x4460E481B9E33ADA());
	func_256(&uVar0, unk_0x8D199E381D262EEF());
	func_255(&uVar0, unk_0xD8A54335F18763BA());
	func_254(&uVar0, unk_0x972A296334C9D57B());
	func_253(&uVar0, unk_0x118229AD063C3C1D());
	func_252(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_252(var uParam0, int iParam1)
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

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_254(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249(*uParam0);
	iVar1 = func_247(*uParam0);
	if (iParam1 < 1 || iParam1 > func_242(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_258(int iParam0)
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
	iVar0 = func_243(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_244(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_245(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_247(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_249(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_246(iParam0);
	if (iVar5 < 1 || iVar5 > func_242(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_127();
				if (!func_129(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_264()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_268()) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_266()) || func_265()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_268() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_55(8, -1)) || func_263()) || func_262()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_266()) || func_265()) || func_262()) || func_261())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_268()) || Global_30770) || func_267()) || func_55(8, -1)) || func_265()) || func_264()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_268()) || func_265()) || Global_110685) || Global_30770) || func_267()) || Global_42596) || func_55(8, -1)) || func_264()) || func_262()) || func_263()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_268()) || Global_110685) || Global_30770) || func_267()) || func_55(8, -1)) || func_264()) || func_262()) || func_266()) || func_265()) || func_263())
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

var func_261()
{
	return Global_98783.f_1;
}

int func_262()
{
	if (Global_95666 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_263()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_264()
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

bool func_265()
{
	return Global_98796.f_346 > 0;
}

bool func_266()
{
	return Global_98796.f_345 > 0;
}

var func_267()
{
	return Global_1312877;
}

int func_268()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_269()
{
	func_52();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_250(func_251(), iParam0);
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_127();
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

int func_272(int iParam0)
{
	if (!func_129(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_273(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_275())
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

int func_274()
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

int func_275()
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

bool func_276(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3);
}

bool func_277(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 0);
}

void func_278()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (vdist(vLocal_104, vLocal_81) < 20f)
		{
			iLocal_80 = 1;
			iLocal_45 = 2;
		}
		if (vdist(vLocal_104, vLocal_82) < 20f)
		{
			iLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (vdist(vLocal_104, vLocal_83) < 20f)
		{
			iLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (vdist(vLocal_104, vLocal_84) < 20f)
		{
			iLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_280()
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			unk_0x71199B01895C6202(iLocal_75);
			unk_0x71199B01895C6202(iLocal_76);
			unk_0x71199B01895C6202(iLocal_77);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 150f, -1, 0, 0);
			}
			unk_0xFADC0A217229F6B5(iLocal_61, true);
			if (!bLocal_58)
			{
				unk_0x6D80F1AEBA734886(iLocal_61, iLocal_152);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_60))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0x25C5402CC10F76CD(iLocal_60, true);
				if (unk_0xD1960163A3042274(iLocal_60, -1146898486) == 7 && unk_0xD1960163A3042274(iLocal_60, 242628503) == 7)
				{
					unk_0xDD353D0E9C789D0E(&iLocal_103);
					if (unk_0x82F88FD400E98881(iLocal_60))
					{
						unk_0xFC0863196A9340DE(0, 0);
					}
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 9000, 0, 2);
					unk_0xEEB67C3D0A71A47B(0, vLocal_104, 250f, -1, 0, 0);
					unk_0x75ABDC5F81978924(iLocal_103);
					unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
					unk_0xF82EA857DA10E0CD(&iLocal_103);
					unk_0xFADC0A217229F6B5(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (unk_0x25037C66EB32B076())
						{
							func_110();
						}
					}
				}
			}
		}
		wait(0);
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xEEEE2E5FA6F78DF0(&iLocal_62);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_65))
		{
			unk_0x142CC44DB769B57E(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (unk_0x49083FDB78AC0509(iLocal_335))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (func_196())
	{
		unk_0x060F249A9A3E3F4E(1);
		unk_0x51B096AAC60548C1(1f);
	}
	func_37(&uLocal_336, 0, 0);
	func_114(0, 1, 1, 0, 0, 0);
	func_286(-1);
	func_281(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		unk_0x850CF499433B183D(iLocal_117);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_281(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_282(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_282(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_283(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 30))
		{
			func_284(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_284(var uParam0)
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_285(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_221(iParam0))
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

void func_286(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_196())
	{
		func_291(iParam0);
		unk_0x974531784BE14213(0, 0);
		Global_111629 = unk_0x1C0640BA9A7327B3();
		func_290(30000);
		StringCopy(&cVar0, func_289(Global_111627, 1), 64);
		if (func_288(Global_111627) > 0)
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
	func_287(&Global_30827);
	Global_111628 = 0;
	func_234(-1);
}

void func_287(var uParam0)
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

int func_288(int iParam0)
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

char* func_289(int iParam0, bool bParam1)
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

void func_290(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_291(int iParam0)
{
	func_292(iParam0, 0, func_297(iParam0));
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_251();
	func_295(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_294(iParam0, &uVar0);
	Var1 = { func_293(&uVar0) };
}

struct<16> func_293(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_249(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_247(*uParam0), 64);
	return Var0;
}

void func_294(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_249(*uParam0);
	iVar2 = func_246(*uParam0);
	iVar3 = func_245(*uParam0);
	iVar4 = func_244(*uParam0);
	iVar5 = func_243(*uParam0);
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
	iVar6 = func_242(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_242(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_296(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_257(uParam0, iParam1);
	func_256(uParam0, iParam2);
	func_255(uParam0, iParam3);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_252(uParam0, iParam6);
}

int func_297(int iParam0)
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

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_288(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(51))
		{
			func_304("RE_REWARD", 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_303(51);
		}
		if (func_175(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_302(iParam0, iParam1) != 322)
		{
			func_299(func_302(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_204(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_204(7);
			}
			else
			{
				func_204(1);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)
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
		func_74((891 + iParam0), 1, -1, 1);
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
		func_300();
	}
}

void func_300()
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
		func_95(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_301() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_201();
				}
			}
		}
	}
}

int func_301()
{
	return Global_30768;
}

int func_302(int iParam0, int iParam1)
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

void func_303(int iParam0)
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

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_306();
	}
}

void func_306()
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

int func_307(int iParam0)
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

void func_308(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

