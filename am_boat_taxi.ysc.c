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
	struct<22> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	vector3 vLocal_64[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 12;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
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
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
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
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 1065353216;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	vector3 vLocal_774 = { 0f, 0f, 0f };
	float fLocal_775 = 0f;
	var uLocal_776 = 16;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	bool bLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	float fLocal_948 = 0f;
	float fLocal_949 = 0f;
	float fLocal_950 = 0f;
	struct<21> Local_951 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_944 = 15000;
	if (unk_0x8CD06866876216F2())
	{
		if (!func_153(ScriptParam_951))
		{
			func_148();
		}
	}
	while (true)
	{
		func_147();
		if (func_136())
		{
			func_148();
		}
		if (unk_0x09BE1E6DF7B80B43() != bLocal_941)
		{
			func_148();
		}
		switch (func_135(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_134() == 1)
				{
					func_133();
					func_132();
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 1;
				}
				else if (func_134() == 4)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_100();
				if (func_134() == 1)
				{
					func_74();
				}
				else if (func_134() == 4)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 3;
				}
				if (func_72(Local_63.f_2))
				{
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_71(&(Local_63.f_18));
				if (func_70(&(Local_63.f_18)))
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 4;
			
			case 4:
				func_148();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_134())
			{
				case 0:
					if (func_68(&(Local_63.f_16), 10000, 0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63, 12))
						{
							Local_63.f_4 = unk_0xD803B885F5E47A62();
							Local_63.f_5 = func_67();
							Local_63.f_10 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) + Vector(0f, 5f, 0f) };
							Local_63.f_7 = { func_65(Local_63.f_5) };
							unk_0x5D96D8530B3D0904(&Local_63, 12);
						}
						if (func_38())
						{
							func_133();
							Local_63.f_1 = 1;
						}
					}
					func_34();
					break;
				
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_63.f_1 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	var uVar0;
	var uVar1;
	
	if (func_29())
	{
		if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
		{
			func_6(func_23(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
		{
			if (!func_72(Local_63.f_2))
			{
				if (unk_0x39DDAA68EF6A6BF4(Local_63.f_2, &uVar0) == unk_0xD803B885F5E47A62())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
		{
			if (func_4(Local_63.f_3))
			{
				if (unk_0x39DDAA68EF6A6BF4(Local_63.f_3, &uVar1) == unk_0xD803B885F5E47A62())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0xD803B885F5E47A62(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (Global_2439138.f_3891[iParam0] < iParam1)
	{
		Global_2439138.f_3891[iParam0] = iParam1;
	}
	unk_0x5D96D8530B3D0904(&(Global_2439138.f_3890), iParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var1, func_21(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_20())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263954[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_20())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_14(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_14));
	func_12(&(uParam0->f_14.f_13));
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

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_20())
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
				func_16(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_18(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_17();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_17()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_18(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_19()
{
	return Global_1312745;
}

int func_20()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_28(iParam0) >= 0)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return 200;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return 400;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return 600;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return 800;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_25()
{
	return unk_0xEAE0D21A50E6C7F4(func_26(6424, -1, 0), 19);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_27(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7221;
			break;
		
		case 15:
			return Global_262145.f_6646;
			break;
		
		case 17:
			return Global_262145.f_6646;
			break;
		
		case 18:
			return Global_262145.f_6646;
			break;
		
		case 19:
			return Global_262145.f_6646;
			break;
		
		case 21:
			return Global_262145.f_6646;
			break;
		
		case 36:
			return Global_262145.f_7688;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12884;
			break;
		
		case 41:
			return Global_262145.f_12885;
			break;
		
		case 42:
			return Global_262145.f_12886;
			break;
		
		case 43:
			return Global_262145.f_15429;
			break;
		
		case 44:
			return Global_262145.f_15431;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_24998;
			break;
		
		case 62:
			return Global_262145.f_24999;
			break;
		
		case 63:
			return Global_262145.f_28457;
			break;
		
		case 64:
			return Global_262145.f_6646;
			break;
	}
	return 0;
}

bool func_29()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_30()
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	if (Local_63.f_20 != 7)
	{
		if (func_4(Local_63.f_3) || !func_72(Local_63.f_2))
		{
			Local_63.f_20 = 7;
		}
		else if (!unk_0xC42A92762C58E1B9(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), 0))
		{
			Local_63.f_20 = 7;
		}
	}
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (Local_63.f_20 != 1)
		{
			if (unk_0x7F6DC62EA9922664(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 600 || unk_0x7F6DC62EA9922664(unk_0x1B50683925F00106(Local_63.f_3)) <= 150)
			{
				Local_63.f_20 = 1;
			}
		}
		switch (Local_63.f_20)
		{
			case 2:
				if (Local_63.f_21 == 3)
				{
					Local_63.f_20 = 4;
				}
				else if (Local_63.f_21 == 5)
				{
					Local_63.f_20 = 7;
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_63, 7) && unk_0x12DE711B1C681E9E(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_63.f_20 = 3;
				}
				break;
			
			case 4:
				unk_0x5D96D8530B3D0904(&iLocal_65, 8);
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0)
				{
					Local_63.f_20 = 3;
					unk_0x0674E58A79778E99(&iLocal_65, 8);
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_63, 7) && unk_0x5A91F08DF773C39D(unk_0x1B50683925F00106(Local_63.f_3), Local_63.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_63.f_20 = 5;
				}
				break;
			
			case 5:
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_20 = 6;
				}
				break;
			
			case 3:
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) >= 1)
				{
					Local_63.f_20 = 4;
				}
				break;
			
			case 6:
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) == 1)
					{
						Local_63.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) == 1 && func_31(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_63.f_3), 1) >= 10f)
				{
					Local_63.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_31(int iParam0, int iParam1, int iParam2)
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

void func_32()
{
	switch (Local_63.f_21)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Local_63, 8) || unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0)
			{
				Local_63.f_21 = 1;
			}
			break;
		
		case 1:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0)
				{
					Local_63.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) > 0)
			{
				Local_63.f_21 = 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_63, 10))
			{
				Local_63.f_21 = 4;
			}
			break;
		
		case 3:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0)
				{
					Local_63.f_21 = 1;
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_63, 10))
				{
					Local_63.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if ((unk_0x2720E241B5CCF780(unk_0xB177666FAB6F4417(Local_63.f_2)) <= 0 && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	unk_0x0674E58A79778E99(&Local_63, 9);
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_72(Local_63.f_2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 8))
					{
						if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
						{
							unk_0x5D96D8530B3D0904(&Local_63, 8);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 7) || unk_0xEAE0D21A50E6C7F4(Local_63, 11))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_63, 10))
						{
							if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
							{
								unk_0x5D96D8530B3D0904(&Local_63, 10);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_63, 9))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_64[iVar0 /*3*/].f_1, 6))
						{
							unk_0x5D96D8530B3D0904(&Local_63, 9);
							unk_0x0674E58A79778E99(&(vLocal_64[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_63.f_20 != 3)
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_64[iVar0 /*3*/].f_1, 5))
						{
							Local_63.f_20 = 3;
							unk_0x0674E58A79778E99(&(vLocal_64[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	vector3 vVar0;
	var uVar1;
	
	if ((Local_63.f_21 <= 2 || Local_63.f_20 == 2) || Local_63.f_20 == 3)
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		if ((!unk_0xEB69695E080217B5(vVar0, &uVar1) || func_36()) || func_35())
		{
			Local_63.f_1 = 4;
		}
	}
}

int func_35()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), func_37(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_38()
{
	if (unk_0x2358623ECCDB11B3(1, 1, 0, 0))
	{
		if (func_64(joaat("dinghy2")) && func_64(joaat("s_m_y_blackops_01")))
		{
			if (func_41() && func_39())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_63.f_3) && func_64(joaat("s_m_y_blackops_01"))) && unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_72(Local_63.f_2))
		{
			if (func_40(&(Local_63.f_3), Local_63.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 0, 0, 1, 0);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 2, 1, 0, 0);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 3, 0, 1, 0);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 4, 0, 2, 0);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 8, 1, 0, 0);
				unk_0x64F9F278AB9DCA2C(unk_0x1B50683925F00106(Local_63.f_3), 9, 0, 0, 0);
				if (Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 0)
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_3), Global_1575000);
				}
				else
				{
					unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_63.f_3), Global_1574683[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_3), 1);
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_63.f_3), 1);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_63.f_3), round((200f * Global_262145.f_154)), 0);
				unk_0x5507FCD92D15E617(unk_0x1B50683925F00106(Local_63.f_3), 0);
				unk_0x4E885A246A9D983A(unk_0x1B50683925F00106(Local_63.f_3), 255, true);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_3))
	{
		return 0;
	}
	unk_0x71199B01895C6202(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xA3FA8B6D2780D661(1))
	{
		return 0;
	}
	if (!unk_0xE9F78D191AD5EDBA(uParam1))
	{
		return 0;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), iParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
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

int func_41()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		if (func_64(joaat("dinghy2")))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 10))
			{
				func_61(&vLocal_774, &fLocal_775);
				if (unk_0xA267CBB20C26B1B9(vLocal_774 + Vector(2f, 0f, 0f), vLocal_774 - Vector(10f, 0f, 0f), &vLocal_774))
				{
					if (func_45(vLocal_774, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						vVar2 = { vLocal_774 + Vector(12f, 0f, 0f) };
						iLocal_772 = unk_0xA50E81FC2F15181B(vVar2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_772 == 0)
						{
							return 0;
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iLocal_65, 10);
						}
					}
				}
			}
			else if (unk_0x1EC301670B54C6DE(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_772 = 0;
				if (iLocal_773 == 0)
				{
					if (func_42(&(Local_63.f_2), joaat("dinghy2"), vLocal_774, fLocal_775, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x79E38224B223335B(unk_0xB177666FAB6F4417(Local_63.f_2), 1);
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_63.f_2), 1, 1, 0);
						unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_63.f_2), 12f);
						unk_0xDC2C59BD0989562B(unk_0xB177666FAB6F4417(Local_63.f_2), 1);
						unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_63.f_2), 0);
					}
				}
				else
				{
					iLocal_773 = 0;
					unk_0x0674E58A79778E99(&iLocal_65, 10);
				}
			}
			else if (unk_0x1EC301670B54C6DE(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_772 = 0;
				unk_0x0674E58A79778E99(&iLocal_65, 10);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_63.f_2))
	{
		return 0;
	}
	unk_0x71199B01895C6202(joaat("dinghy2"));
	return 1;
}

int func_42(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_43(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_43(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_44(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
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

int func_44(int iParam0, vector3 vParam1, int iParam2)
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

int func_45(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405072.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam12 > 0f)
	{
		if (func_54(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_46(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_46(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_50(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_3(iVar1, 1, 1))
		{
			if (!func_48(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_47(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_50(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_50(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_47(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_49(-1, 0) == 8;
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

int func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

Vector3 func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1590535[iVar0 /*876*/].f_847) && !func_52(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_51(iParam0);
}

Vector3 func_51(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_52(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_53()
{
	return Global_2450632.f_17;
}

int func_54(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_47(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam7) && bParam4) && func_55(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_51(iVar1), vParam0, 1) < fParam1)
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

int func_55(int iParam0)
{
	if (func_60(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_59(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_56(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_59(iParam0) };
		Global_2513231 = { func_59(iParam1) };
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

void func_61(var uParam0, var uParam1)
{
	*uParam0 = { func_62(Local_63.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0xE7D606C557C86100((Local_63.f_10 - *uParam0), (Local_63.f_10.f_1 - uParam0->f_1));
}

Vector3 func_62(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_63(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_63(vector3 vParam0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, 8000f, 0f };
			return vVar2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { 5000f, Local_63.f_10.f_1, 0f };
			return vVar2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, -5000f, 0f };
			return vVar2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0x0EB28750412C3A5A(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			vVar2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { -5000f, Local_63.f_10.f_1, 0f };
			return vVar2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_67()
{
	vector3 vVar0;
	
	vVar0 = { func_51(unk_0xD803B885F5E47A62()) };
	if (vVar0.y >= 0f && vVar0.x >= 0f)
	{
		return 0;
	}
	else if (vVar0.y < 0f && vVar0.x >= 0f)
	{
		return 1;
	}
	else if (vVar0.y < 0f && vVar0.x < 0f)
	{
		return 2;
	}
	else if (vVar0.y >= 0f && vVar0.x < 0f)
	{
		return 3;
	}
	return -1;
}

int func_68(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_69(uParam0, bParam2, 0);
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

void func_69(var uParam0, bool bParam1, bool bParam2)
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

int func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_69(uParam0, 0, 0);
		}
	}
}

int func_72(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_73(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_73(int iParam0)
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

void func_74()
{
	if (func_3(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (Local_63.f_21 == 5)
		{
			vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 5;
		}
		switch (vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2)
		{
			case 0:
				func_97();
				if (Local_63.f_21 > 0)
				{
					vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_72(Local_63.f_2))
				{
					func_132();
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						func_96();
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 3;
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						unk_0x0674E58A79778E99(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 3;
						unk_0x0674E58A79778E99(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 5);
						unk_0x5D96D8530B3D0904(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 6);
						if (Local_63.f_21 >= 4)
						{
							vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
					}
					else
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0))
					{
						if (Local_63.f_21 >= 4)
						{
							vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 4;
						}
						func_95();
					}
					else
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_72(Local_63.f_2))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 3))
					{
						if (unk_0x9C66D99E63E8E24C(unk_0xB177666FAB6F4417(Local_63.f_2)) < 3f)
						{
							unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
							unk_0x5D96D8530B3D0904(&iLocal_65, 3);
						}
					}
					if ((!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0) && !unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2))) && func_31(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 1) >= 10f)
					{
						vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_148();
				break;
		}
		func_75();
	}
}

void func_75()
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0x83D8570832F172A7(uLocal_71))
	{
		if (func_90(1, 1))
		{
			if (((vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 1 || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 2) || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 3) || vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_89() };
				func_87(&uLocal_72);
				if (vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_2 == 1)
				{
					if (func_72(Local_63.f_2))
					{
						if ((unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !func_86(unk_0xB177666FAB6F4417(Local_63.f_2), 0))
						{
							func_85(unk_0xF59058FCB716F903(2, 23, true), "BTX_ENTER", &uLocal_72, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_95();
					func_84(1);
					func_76(&uLocal_71, &Var1, &uLocal_72, func_83(&uLocal_72));
				}
			}
		}
	}
	else
	{
		uLocal_71 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
	}
}

void func_76(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0xB8E3620B82AD47D7(2))
	{
		*uParam2 = 0;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_82(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_81(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_689, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_80(unk_0xF59058FCB716F903(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_80(unk_0xF59058FCB716F903(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_80(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, true));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_79(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_691, iVar0))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_80(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_80(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_686, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_687, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_688, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_79(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(false);
						unk_0x3CAEA85DA607305E(361);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_699);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_78(*uParam0, uParam1);
	}
	func_77();
}

void func_77()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_78(var uParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_79(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_80(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_81(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_82(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_83(var uParam0)
{
	return uParam0->f_692;
}

void func_84(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_85(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar1 = unk_0xD6DF381716822EFE(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0xBBA8A868118C90ED(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xA30B8362589C124A(iParam0, (iVar0 - 1), 0);
				if (unk_0xEB6A8945D1AC98A1(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_87(var uParam0)
{
	func_88(uParam0);
	uParam0->f_692 = 1;
}

void func_88(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_89()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_90(int iParam0, int iParam1)
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_94())
		{
			return 0;
		}
	}
	if (func_29())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_93(0))
		{
			return 0;
		}
	}
	if (func_92(8, -1))
	{
		return 0;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0;
	}
	if (func_91())
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (Global_1312791)
	{
		return 0;
	}
	if (Global_1574191)
	{
		return 0;
	}
	return 1;
}

bool func_91()
{
	return Global_1312877;
}

bool func_92(int iParam0, int iParam1)
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

int func_93(int iParam0)
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

bool func_94()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_95()
{
	Global_2548146.f_258 = 1;
}

void func_96()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_67))
	{
		unk_0x142CC44DB769B57E(&iLocal_67);
	}
}

void func_97()
{
	int iVar0;
	
	if (!unk_0xFEBC1E4EC9E001F0())
	{
		iVar0 = func_26(1190, -1, 0);
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 15))
		{
			func_99("BTX_HELP1", -1);
			unk_0x5D96D8530B3D0904(&iVar0, 15);
			func_98(1190, iVar0, -1, 1, 0);
		}
	}
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

void func_100()
{
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (unk_0x526BC32A660C89E6(Local_63.f_3) || (!unk_0x83F012E6200426DB(Local_63.f_3) && unk_0xBFF81ED3B99522C7()))
		{
			func_130();
			func_104();
			if (func_103(Local_63.f_3))
			{
				unk_0x9DD8618CA5BF832D(unk_0x1B50683925F00106(Local_63.f_3), 323, 1);
			}
			switch (Local_63.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						unk_0x5B54B463A4225B9F(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), 0, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_102(unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 0), Local_63.f_7);
					unk_0x10FEEAFF01E32639(fLocal_947, fLocal_949, fLocal_948, fLocal_950);
					if (unk_0xD1B4D22E0BA9B0C8(fLocal_947, fLocal_949, fLocal_948, fLocal_950))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) != 0)
						{
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), uLocal_70);
						}
					}
					break;
				
				case 5:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), -1273030092) != 0)
					{
						unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_63.f_3), unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_63.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1, 7))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), 0) || unk_0x64E716CF8C283BF5(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2)))
						{
							unk_0xFCCF7611216AE801(unk_0x1B50683925F00106(Local_63.f_3), 0);
							unk_0x35126F52AFE6E6CA(unk_0x1B50683925F00106(Local_63.f_3), 0);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_3), 2, false);
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), uLocal_68);
						}
						else
						{
							unk_0xFCCF7611216AE801(unk_0x1B50683925F00106(Local_63.f_3), 0);
							unk_0x35126F52AFE6E6CA(unk_0x1B50683925F00106(Local_63.f_3), 0);
							unk_0xBAFED2F6486F771A(unk_0x1B50683925F00106(Local_63.f_3), 2, true);
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), uLocal_69);
						}
						unk_0x5D96D8530B3D0904(&(vLocal_64[unk_0x57270EE11514DC67() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) != 1 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_63.f_3), 242628503) != 0)
					{
						unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), uLocal_69);
					}
					break;
				
				case 7:
					if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
					{
						func_101(&(Local_63.f_2));
					}
					if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
					{
						unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_63.f_3), 1);
						func_101(&(Local_63.f_3));
					}
					break;
				}
			}
	}
}

void func_101(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

void func_102(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	if (Param0 < Param2)
	{
		fLocal_947 = (Param0 - 25f);
		fLocal_948 = (Param2 + 25f);
	}
	else if (Param0 > Param2)
	{
		fLocal_947 = (Param2 - 25f);
		fLocal_948 = (Param0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_949 = (Param0.f_1 - 25f);
		fLocal_950 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_949 = (Param2.f_1 - 25f);
		fLocal_950 = (Param0.f_1 + 25f);
	}
}

int func_103(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		unk_0x8D30F6387EE75385(uParam0);
		return unk_0x526BC32A660C89E6(uParam0);
	}
	return 0;
}

void func_104()
{
	int iVar0;
	struct<2> Var1;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 4))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x1B50683925F00106(Local_63.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
				unk_0x5D96D8530B3D0904(&iLocal_65, 4);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 6))
	{
		if (Local_63.f_20 == 4)
		{
			func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
				unk_0x5D96D8530B3D0904(&iLocal_65, 6);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 5))
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_63.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
				unk_0x5D96D8530B3D0904(&iLocal_65, 5);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 7))
	{
		if (Local_63.f_20 == 5)
		{
			func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
				unk_0x5D96D8530B3D0904(&iLocal_65, 7);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_65, 8))
	{
		func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
			unk_0x5D96D8530B3D0904(&iLocal_65, 8);
		}
	}
	if (Local_63.f_20 == 3)
	{
		if (func_68(&uLocal_942, 30000, 0))
		{
			func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
				func_107(&uLocal_942, 0, 0);
			}
		}
	}
	if (Local_63.f_20 == 4)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0)
		{
			if (func_68(&uLocal_945, iLocal_944, 0))
			{
				iVar0 = unk_0x09AC81E49EA267F7(0, 17);
				StringCopy(&Var1, "", 16);
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_66, iVar0))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xEA6BC48857E0AC4C(&Var1))
					{
						func_129(&uLocal_776, 8, unk_0x1B50683925F00106(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_108(&uLocal_776, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_107(&uLocal_945, 0, 0);
							unk_0x5D96D8530B3D0904(&iLocal_66, iVar0);
							unk_0x0C8C0C840C2D1AD2(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 5000, 0, 2);
							iLocal_944 = (unk_0x09AC81E49EA267F7(20000, 30001) + iVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_63.f_3))
	{
		if (func_72(Local_63.f_2))
		{
			if (!unk_0x65636D4556D82155(unk_0x1B50683925F00106(Local_63.f_3)) && !unk_0x2A325BF7BC6DD316(unk_0x1B50683925F00106(Local_63.f_3)))
			{
				if (unk_0xB87D13D0C064E9D1(unk_0xB177666FAB6F4417(Local_63.f_2), unk_0x16F2683693E537C9(), 1) || unk_0xB87D13D0C064E9D1(unk_0x1B50683925F00106(Local_63.f_3), unk_0x16F2683693E537C9(), 1))
				{
					switch (unk_0x09AC81E49EA267F7(0, 6))
					{
						case 0:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_105(unk_0x1B50683925F00106(Local_63.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_63.f_2));
					unk_0xE910A68AA670B4AA(unk_0x1B50683925F00106(Local_63.f_3));
				}
			}
			else
			{
				unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_63.f_2));
				unk_0xE910A68AA670B4AA(unk_0x1B50683925F00106(Local_63.f_3));
			}
		}
	}
}

void func_105(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_106(iParam2), 1);
}

int func_106(int iParam0)
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

void func_107(var uParam0, bool bParam1, bool bParam2)
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

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_128(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_127();
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
		if (func_92(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_126();
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
				func_118();
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
				if (func_117())
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
			if (func_116())
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
			func_115();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_114();
		func_110();
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
		func_127();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
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

int func_111()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_57())
	{
		return 0;
	}
	if (func_112(unk_0xD803B885F5E47A62()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

bool func_113(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

void func_114()
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

void func_115()
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

int func_116()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_117()
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

void func_118()
{
	if (func_125(14))
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
		Global_19486 = func_119();
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

var func_119()
{
	func_120();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_120()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_123(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_122(unk_0x16F2683693E537C9());
			if (func_121(iVar0) && (!func_125(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_121(Global_111638.f_2358.f_539.f_4321))
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

bool func_121(int iParam0)
{
	return iParam0 < 3;
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_123(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_123(int iParam0)
{
	if (func_121(iParam0))
	{
		return func_124(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_124(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_125(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_126()
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

void func_127()
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

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_129(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_130()
{
	unk_0x7352ACF3368DF65F("MobileRadioInGame", 0);
	if (func_3(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2)) && !func_131(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_63.f_2), -1))
		{
			unk_0x7352ACF3368DF65F("MobileRadioInGame", 1);
		}
	}
}

int func_131(int iParam0, int iParam1, int iParam2)
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

void func_132()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_67))
	{
		if (func_72(Local_63.f_2))
		{
			iLocal_67 = unk_0x5C3B41825F6AC5A0(unk_0xB177666FAB6F4417(Local_63.f_2));
			unk_0xBC8E0A7390523199(iLocal_67, 356);
			unk_0xDC5B2F9D0CCE3A10(iLocal_67, "BTX_BLIP");
			unk_0xF412DD40DE84CE72(iLocal_67, 1);
			unk_0x5C75F8C0E612F520(iLocal_67, 6);
		}
	}
}

void func_133()
{
	if (func_72(Local_63.f_2))
	{
		unk_0xDD353D0E9C789D0E(&uLocal_70);
		unk_0x5B54B463A4225B9F(0, unk_0xB177666FAB6F4417(Local_63.f_2), 0, 0, Local_63.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x75ABDC5F81978924(uLocal_70);
		unk_0xDD353D0E9C789D0E(&uLocal_69);
		unk_0x132B85BCE016BCA0(0, unk_0xB177666FAB6F4417(Local_63.f_2), Local_63.f_13, 4, 12f, 786469, 0f, 0f, 1);
		unk_0xE072601B4380E9DF(0, unk_0xB177666FAB6F4417(Local_63.f_2), 12f, 786469);
		unk_0x75ABDC5F81978924(uLocal_69);
		unk_0xDD353D0E9C789D0E(&uLocal_68);
		unk_0x75CDA8644CD3B5F5(0, 0, 64);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x01E4BB5190DF7317(0, 1193033728, 0);
		}
		unk_0x75ABDC5F81978924(uLocal_68);
	}
}

int func_134()
{
	return Local_63.f_1;
}

int func_135(int iParam0)
{
	return vLocal_64[iParam0 /*3*/];
}

int func_136()
{
	var uVar0;
	
	func_144(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_141(159))
	{
		if (!func_140())
		{
			return 1;
		}
	}
	if (func_141(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_137() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_137()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	switch (func_139())
	{
		case 0:
			return func_138();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_138()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_139()
{
	return Global_30768;
}

bool func_140()
{
	return Global_2450632.f_598;
}

int func_141(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return Global_2460680;
}

bool func_143()
{
	return Global_2450632.f_593;
}

void func_144(var uParam0)
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
					func_145(iVar0);
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

void func_145(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_3(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_146(iVar2, &bVar3))
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

int func_146(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0, 1);
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

void func_147()
{
	wait(0);
}

void func_148()
{
	func_96();
	if (unk_0x8CD06866876216F2())
	{
		if (Local_63.f_20 == 7)
		{
			if (func_72(Local_63.f_2) && !func_4(Local_63.f_3))
			{
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_63.f_3), uLocal_69);
			}
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_2))
			{
				if (unk_0x526BC32A660C89E6(Local_63.f_2))
				{
					func_101(&(Local_63.f_2));
				}
			}
			if (unk_0xE9F78D191AD5EDBA(Local_63.f_3))
			{
				if (unk_0x526BC32A660C89E6(Local_63.f_3))
				{
					func_101(&(Local_63.f_3));
				}
			}
		}
	}
	func_151(func_152(1, 1), 9, func_57());
	func_150();
	unk_0xE17FDF9E3068281B(&uLocal_71);
	func_149();
}

void func_149()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_150()
{
	unk_0xF82EA857DA10E0CD(&uLocal_68);
	unk_0xF82EA857DA10E0CD(&uLocal_69);
	unk_0xF82EA857DA10E0CD(&uLocal_70);
}

void func_151(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -770184899;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 6, iParam0);
	}
}

int func_152(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_48(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_153(struct<21> Param0)
{
	func_157(32, Param0);
	unk_0x0BEC04ECA8485A3A(1);
	unk_0x28E5F00F131890E3(1);
	func_155(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_63, 22);
	unk_0x35B62793EAE9ADDF(&vLocal_64, 97);
	if (!func_154())
	{
		return 0;
	}
	unk_0x256D93AFAE851A7A(0);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_63.f_4 = unk_0xD803B885F5E47A62();
		Local_63.f_5 = func_67();
		Local_63.f_10 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) + Vector(0f, 5f, 0f) };
		Local_63.f_7 = { func_65(Local_63.f_5) };
	}
	unk_0x5D96D8530B3D0904(&iLocal_65, 8);
	bLocal_941 = unk_0x09BE1E6DF7B80B43();
	vLocal_64[unk_0x57270EE11514DC67() /*3*/] = 0;
	return 1;
}

int func_154()
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
		if (func_143())
		{
			return 0;
		}
		if (func_141(157))
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

int func_155(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0;
			}
		}
		if (!func_156())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_141(157))
				{
					if (!bParam2)
					{
						func_149();
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
					func_149();
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_156()
{
	return Global_1312854;
}

void func_157(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_149();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

