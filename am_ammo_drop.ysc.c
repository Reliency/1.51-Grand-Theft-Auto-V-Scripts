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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
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
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x8CD06866876216F2())
	{
		if (!func_149(ScriptParam_237))
		{
			func_143();
		}
	}
	while (true)
	{
		func_142();
		if (func_131())
		{
			func_143();
		}
		if (unk_0x09BE1E6DF7B80B43() != iLocal_67)
		{
			func_143();
		}
		if (unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()) != Local_60.f_17)
		{
			func_143();
		}
		unk_0x0F6D9B8ED0147392();
		switch (func_130(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_128())
				{
					if (func_127() == 1)
					{
						func_126();
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 1;
					}
					else if (func_127() == 4)
					{
						vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_127() == 1)
				{
					func_108();
				}
				else if (func_127() == 4)
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_107(&(Local_60.f_21));
				if (func_106(&(Local_60.f_21)))
				{
					vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 4;
			
			case 4:
				func_143();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_127())
			{
				case 0:
					if (func_78())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_38();
					if (func_1())
					{
						Local_60 = 4;
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
	if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 8))
	{
		if (!func_37(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 9))
			{
				unk_0x5D96D8530B3D0904(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_12 == 0 || Local_60.f_12 == 1)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_60.f_4))
		{
			if (!func_35(Local_60.f_2))
			{
				return 1;
			}
			if (func_34(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_12 > 0)
			{
				return 1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 8))
		{
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_18 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_18 == 1)
			{
				if ((((func_9(unk_0xD803B885F5E47A62()) && func_8() != 151) || func_6(unk_0xD803B885F5E47A62(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)
{
	var uVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&uVar0);
	}
}

var func_4()
{
	return Global_1312418;
}

var func_5()
{
	return Global_2537071.f_5121;
}

int func_6(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_8()
{
	return Global_1650640;
}

int func_9(int iParam0)
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_12(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

void func_13()
{
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
	{
		if (Global_262145.f_19816 > 0)
		{
			func_31(Global_262145.f_19816, 0);
			func_14(Global_262145.f_19816, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_30(iParam1), 16);
	StringCopy(&Var1, func_29(iParam2), 32);
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
	if (func_28())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263954[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4263954[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x70C6C7E43DEB92C4(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_28())
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_27()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_22(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_28())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_19(var uParam0)
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
	func_20(&(uParam0->f_14));
	func_20(&(uParam0->f_14.f_13));
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

void func_20(var uParam0)
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

int func_21(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_28())
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
				func_24(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_24(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_26(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_25();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_25()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_26(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

char* func_29(int iParam0)
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

char* func_30(int iParam0)
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

void func_31(int iParam0, int iParam1)
{
	func_33(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_32(iVar1, 0);
	}
}

int func_34(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

int func_35(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_36(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_36(int iParam0)
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

int func_37(int iParam0, bool bParam1, bool bParam2)
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

void func_38()
{
	switch (Local_60.f_12)
	{
		case 0:
			if (Local_60.f_18)
			{
				func_77();
			}
			else
			{
				func_72();
			}
			if (func_42())
			{
				func_41();
				Local_60.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
			{
				func_40(Local_60.f_4, 18);
				if (Local_60.f_15 == 3)
				{
					if (!unk_0xE9F78D191AD5EDBA(Local_60.f_5))
					{
						Local_60.f_15 = 2;
					}
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_2))
				{
					func_39(&(Local_60.f_2));
				}
				else if (Local_60.f_13 == 1)
				{
					Local_60.f_13 = 0;
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_3))
				{
					func_39(&(Local_60.f_3));
				}
				else if (Local_60.f_14 == 1)
				{
					Local_60.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&uVar0);
	}
}

void func_40(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar3, &uVar4, &uVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(unk_0x09AD4CE7DA179533(uParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0x922D0EFFF8F2403B(2, unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_41()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		iLocal_64 = unk_0x5C3B41825F6AC5A0(unk_0x09AD4CE7DA179533(Local_60.f_4));
		if (Local_60.f_18)
		{
			unk_0xBC8E0A7390523199(iLocal_64, 84);
			unk_0x516E63E474722206(iLocal_64, 1.2f);
			unk_0xDC5B2F9D0CCE3A10(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0xBC8E0A7390523199(iLocal_64, 351);
			unk_0xDC5B2F9D0CCE3A10(iLocal_64, "AMD_BLIPN");
			unk_0x516E63E474722206(iLocal_64, 0.7f);
		}
		unk_0x61755AC17D8F538E(iLocal_64, 2);
		unk_0x7F010F50CE03A8AF(iLocal_64, 120);
	}
}

int func_42()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 7))
	{
		if (func_35(Local_60.f_2))
		{
			if (unk_0x5A91F08DF773C39D(unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_128())
	{
		if (func_45())
		{
			if (func_43())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_43()
{
	unk_0x523BCC9DC80CD82F(Local_60.f_19.f_1);
	if (unk_0xB87F6CF6E5628C67(Local_60.f_19.f_1))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_60.f_19) && unk_0xE9F78D191AD5EDBA(Local_60.f_4))
		{
			if (unk_0x081C8BC5094A7B76(1))
			{
				if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
				{
					unk_0xF4F945BB00F6E31C(Local_60.f_19, 1);
					unk_0xD8F6A53F4799FAFE(unk_0x09AD4CE7DA179533(Local_60.f_19), unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_60.f_4)));
					unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_60.f_4), unk_0x09AD4CE7DA179533(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_19), 1);
					unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_19), 0);
					unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_60.f_19));
					unk_0x37806EBF326ECEE9(unk_0x09AD4CE7DA179533(Local_60.f_19), 0f, 0f, -0.2f);
					unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_19), 1);
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_19))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(joaat("p_cargo_chute_s"));
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(joaat("p_cargo_chute_s")))
	{
		if (!unk_0xE9F78D191AD5EDBA(Local_60.f_4) && !unk_0xE9F78D191AD5EDBA(Local_60.f_5))
		{
			if (func_35(Local_60.f_2) && unk_0x2358623ECCDB11B3(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0xE9F78D191AD5EDBA(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_18 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_18 == 0)
					{
						unk_0x5D96D8530B3D0904(&iVar2, 12);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x4193A2DE62BC07C0(unk_0xB8D1BBEFD1257857(iVar3, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_18 == 1)
					{
						func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
						unk_0x6C07AE3872D6DD5C(0);
					}
					unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_60.f_4), 1);
					unk_0xEDD4DD1B0A096072(unk_0x09AD4CE7DA179533(Local_60.f_4), 1);
					unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_4), 1);
					unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_4), 0);
					unk_0xAC0C6241732E36F6(unk_0x09AD4CE7DA179533(Local_60.f_4));
					func_70();
					iVar4 = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(iVar4, "Crate_Beeps", unk_0x09AD4CE7DA179533(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_16 = unk_0x1F387ED7A8273DD3(iVar4);
				}
				if (unk_0xE9F78D191AD5EDBA(Local_60.f_4) && !unk_0xE9F78D191AD5EDBA(Local_60.f_5))
				{
					if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						unk_0xF4F945BB00F6E31C(Local_60.f_5, 1);
						unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_60.f_5), unk_0x09AD4CE7DA179533(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x272295383B6513AB(unk_0x09AD4CE7DA179533(Local_60.f_5), 1);
						unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(Local_60.f_5), 0);
						unk_0xD65E6E13E145467B(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
						unk_0x295ACC5727E47CB7(unk_0x09AD4CE7DA179533(Local_60.f_5));
					}
				}
				func_68();
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 15))
				{
					if (!Local_60.f_18)
					{
						func_67(&uLocal_72, 3, unk_0x1B50683925F00106(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0x5D96D8530B3D0904(&iLocal_63, 15);
				}
			}
		}
	}
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4) && unk_0xE9F78D191AD5EDBA(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)
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
					func_65();
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
		if (func_64(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_63();
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
				func_55();
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
				if (func_54())
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
			if (func_53())
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
			func_52();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_51();
		func_48();
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
		func_65();
	}
	return 0;
}

void func_48()
{
	if (!func_49())
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

int func_49()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_50())
	{
		return 0;
	}
	if (func_10(unk_0xD803B885F5E47A62()))
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

int func_50()
{
	return -1;
}

void func_51()
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

void func_52()
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

int func_53()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_54()
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

void func_55()
{
	if (func_62(14))
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
		Global_19486 = func_56();
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

var func_56()
{
	func_57();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_60(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_59(unk_0x16F2683693E537C9());
			if (func_58(iVar0) && (!func_62(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_58(Global_111638.f_2358.f_539.f_4321))
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

bool func_58(int iParam0)
{
	return iParam0 < 3;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_60(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_60(int iParam0)
{
	if (func_58(iParam0))
	{
		return func_61(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_61(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_62(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_63()
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

bool func_64(int iParam0, int iParam1)
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

void func_65()
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_67(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_68()
{
	if (func_69())
	{
		if (!unk_0x83A8177D302E1A7E(iLocal_66))
		{
			iLocal_66 = unk_0x976A3DF95195758D("scr_crate_drop_beacon", unk_0x09AD4CE7DA179533(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0x02D205CBD211ED4F(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!unk_0x83A8177D302E1A7E(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_69()
{
	unk_0x9E5E60D8C63FD9D1();
	if (unk_0x25F7A4D42AF2AB93())
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	if (unk_0xCAC02A13A55C50BC(Local_60.f_16) != -1)
	{
		if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
		{
			if (!unk_0x8AA6DC470ABA63A2(unk_0xCAC02A13A55C50BC(Local_60.f_16)))
			{
				unk_0x55D0A2DB35045A35(unk_0xCAC02A13A55C50BC(Local_60.f_16));
			}
			unk_0x43A06902454A1172(unk_0xCAC02A13A55C50BC(Local_60.f_16));
		}
		else
		{
			if (!unk_0x8AA6DC470ABA63A2(unk_0xCAC02A13A55C50BC(Local_60.f_16)))
			{
				unk_0x55D0A2DB35045A35(unk_0xCAC02A13A55C50BC(Local_60.f_16));
			}
			unk_0x43A06902454A1172(unk_0xCAC02A13A55C50BC(Local_60.f_16));
		}
	}
}

void func_71(var uParam0)
{
	var uVar0;
	
	unk_0x5D96D8530B3D0904(&uVar0, unk_0x6E61BE9E61434AC1());
	unk_0xC76363E4A8AC7A82(uParam0, uVar0);
}

void func_72()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 11))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_76(1190, -1, 0);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 10))
			{
				func_75("AMD_HELP1", -1);
				unk_0x5D96D8530B3D0904(&iVar0, 10);
				func_73(1190, iVar0, -1, 1, 0);
				unk_0x5D96D8530B3D0904(&iLocal_63, 11);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 11))
			{
				func_75("AMD_HELP2", -1);
				unk_0x5D96D8530B3D0904(&iVar0, 11);
				func_73(1190, iVar0, -1, 1, 0);
				unk_0x5D96D8530B3D0904(&iLocal_63, 11);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_63, 11);
			}
		}
	}
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_74(var uParam0)
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

void func_75(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_77()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 17))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_76(1190, -1, 0);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 24))
			{
				func_75("BALD_HELP1", -1);
				unk_0x5D96D8530B3D0904(&iVar0, 24);
				func_73(1190, iVar0, -1, 1, 0);
				unk_0x5D96D8530B3D0904(&iLocal_63, 17);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 25))
			{
				func_75("BALD_HELP2", -1);
				unk_0x5D96D8530B3D0904(&iVar0, 25);
				func_73(1190, iVar0, -1, 1, 0);
				unk_0x5D96D8530B3D0904(&iLocal_63, 17);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_63, 17);
			}
		}
	}
}

int func_78()
{
	if (func_105(joaat("cuban800")) && func_105(joaat("s_m_m_pilot_02")))
	{
		if (func_103(&uLocal_70, 4000, 0))
		{
			if (func_81() && func_79())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_60.f_3) && func_105(joaat("s_m_m_pilot_02"))) && unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_35(Local_60.f_2))
		{
			if (func_80(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_60.f_3), 1);
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_60.f_3), Global_1575000);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_60.f_3), 0);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_60.f_3), 1);
				unk_0xD458AC1C1D29C3B4(unk_0x1B50683925F00106(Local_60.f_3), round((200f * Global_262145.f_154)), 0);
				func_126();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_60.f_3), uLocal_65);
				unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_60.f_2), round(50f));
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_3))
	{
		return 0;
	}
	unk_0x71199B01895C6202(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_80(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_81()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		if (func_105(joaat("cuban800")))
		{
			func_100(&vVar0, &fVar1);
			if (func_85(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_82(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_60.f_2), 2);
					unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_60.f_2), false);
					unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_60.f_2), 1);
					unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_60.f_2));
					unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_60.f_2), 60f);
					unk_0x873BCADC75FF6D20(unk_0xB177666FAB6F4417(Local_60.f_2));
					unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_60.f_2), 1, 1, 0);
					unk_0xB422445CBCD0AEFB(unk_0xB177666FAB6F4417(Local_60.f_2), 0);
					unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_60.f_2), 0);
					unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_60.f_2), 3);
					unk_0x411CC4F26F6C1C2E(unk_0xB177666FAB6F4417(Local_60.f_2));
					if (Local_60.f_18 == 1)
					{
						unk_0xAA6B3A4292417750(unk_0xB177666FAB6F4417(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_60.f_2))
	{
		return 0;
	}
	unk_0x71199B01895C6202(joaat("cuban800"));
	return 1;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_83(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
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

int func_84(int iParam0, vector3 vParam1, int iParam2)
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

int func_85(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_94(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_86(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_86(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_37(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_90(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_37(iVar1, 1, 1))
		{
			if (!func_88(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_87(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_90(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_90(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_87(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_88(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_89(-1, 0) == 8;
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

int func_89(int iParam0, bool bParam1)
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

Vector3 func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_93() && Global_1590535[iVar0 /*876*/].f_847) && !func_92(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_91(iParam0);
}

Vector3 func_91(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

int func_92(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_93()
{
	return Global_2450632.f_17;
}

int func_94(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_37(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_87(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam7) && bParam4) && func_95(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_91(iVar1), vParam0, 1) < fParam1)
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

int func_95(int iParam0)
{
	if (func_99(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_98(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_96(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (!iVar0 == func_50())
	{
		if (iVar0 == func_97(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != func_50())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_50();
}

struct<13> func_98(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_99(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_98(iParam0) };
		Global_2513231 = { func_98(iParam1) };
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

void func_100(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_101(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0xE7D606C557C86100((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x877D3FF6F9D1F987((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_101(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_102(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_102(vector3 vParam0, float fParam1)
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

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_104(uParam0, bParam2, 0);
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

void func_104(var uParam0, bool bParam1, bool bParam2)
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

bool func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_106(var uParam0)
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

void func_107(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_104(uParam0, 0, 0);
		}
	}
}

void func_108()
{
	func_117();
	switch (vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_12 > 0)
			{
				vLocal_62[unk_0x57270EE11514DC67() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_113();
			func_109();
			break;
		
		case 2:
			func_143();
			break;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE9F78D191AD5EDBA(Local_60.f_4))
	{
		if (func_37(unk_0xD803B885F5E47A62(), 1, 1))
		{
			iVar1 = func_112(unk_0x16F2683693E537C9());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312416;
			}
			unk_0x9AEFFB8166364079(unk_0x16F2683693E537C9(), iVar1, &iVar0);
			if ((func_111(iVar1) && func_110(iVar1)) && unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), iVar1) < iVar0)
			{
			}
			else if (unk_0xBFF81ED3B99522C7())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 12))
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (Local_60.f_18)
						{
							func_75("BALD_HELP3", -1);
						}
						else
						{
							func_75("AMD_HELP3", -1);
						}
						unk_0x5D96D8530B3D0904(&iLocal_63, 12);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 13))
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
						{
							if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), unk_0x09AD4CE7DA179533(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_103(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_18)
									{
										func_75("AMD_HELP3", -1);
									}
									unk_0x5D96D8530B3D0904(&iLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_110(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_112(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

void func_113()
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
	{
		if (unk_0x526BC32A660C89E6(Local_60.f_4) || (!unk_0x83F012E6200426DB(Local_60.f_4) && unk_0xBFF81ED3B99522C7()))
		{
			if (unk_0xE5DBF9B6126856CA(Local_60.f_5))
			{
				if (unk_0x526BC32A660C89E6(Local_60.f_5) || (!unk_0x83F012E6200426DB(Local_60.f_5) && unk_0xBFF81ED3B99522C7()))
				{
					if (func_116(Local_60.f_4) && func_116(Local_60.f_5))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 8))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 7))
							{
								if (!unk_0xB4ECF989E2C1DAC8(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x5D96D8530B3D0904(&iLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 7))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 6))
							{
								if (unk_0xB4ECF989E2C1DAC8(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x5D96D8530B3D0904(&iLocal_63, 7);
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 6))
						{
							unk_0x67B3582E66D35002(unk_0x09AD4CE7DA179533(Local_60.f_4), 2, 0.0245f);
							if (func_114())
							{
								unk_0xD65E6E13E145467B(unk_0x09AD4CE7DA179533(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0f, 0);
								unk_0x5D96D8530B3D0904(&iLocal_63, 6);
								if (unk_0xE4EDC4B0E92C078B(iLocal_64))
								{
									unk_0x7F010F50CE03A8AF(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 14))
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_19))
				{
					if (unk_0x526BC32A660C89E6(Local_60.f_19) || (!unk_0x83F012E6200426DB(Local_60.f_19) && unk_0xBFF81ED3B99522C7()))
					{
						if (func_116(Local_60.f_19))
						{
							unk_0x67B3582E66D35002(unk_0x09AD4CE7DA179533(Local_60.f_19), 2, 0.1f);
							if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_19), 0))
							{
								if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
								{
									unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_60.f_4), 1, 1);
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
								unk_0x5D96D8530B3D0904(&iLocal_63, 14);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_60.f_1, 8) && unk_0xEAE0D21A50E6C7F4(iLocal_63, 8))
						{
							if (func_116(Local_60.f_19))
							{
								if (!unk_0x4B111E6C3450F2E0(unk_0x09AD4CE7DA179533(Local_60.f_19)) && unk_0x41659B1143875599(unk_0x09AD4CE7DA179533(Local_60.f_19)))
								{
									if (unk_0x688A90832774AB83(unk_0x09AD4CE7DA179533(Local_60.f_19)))
									{
										bVar0 = true;
									}
									else if (!unk_0xE934758D273C899A(unk_0x09AD4CE7DA179533(Local_60.f_19)) && unk_0xC57D0A75AFA332A3(unk_0x09AD4CE7DA179533(Local_60.f_19)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_19), 0);
										unk_0x5D96D8530B3D0904(&(Local_60.f_1), 8);
									}
									if (Local_60.f_18 == 1)
									{
										func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_60.f_4)))
			{
				if (func_116(Local_60.f_4))
				{
					unk_0xA47B46945FF6DE74(unk_0x09AD4CE7DA179533(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_18 == 1)
					{
						func_71(unk_0x09AD4CE7DA179533(Local_60.f_4));
					}
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_19) && unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_60.f_4)))
				{
					iVar2 = unk_0x09AD4CE7DA179533(Local_60.f_19);
				}
				else
				{
					iVar2 = unk_0x09AD4CE7DA179533(Local_60.f_4);
				}
			}
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 16))
				{
					if (unk_0xFC0E4F7E386C43F8(iVar2) >= 0.9f)
					{
						if (unk_0xCAC02A13A55C50BC(Local_60.f_16) != -1)
						{
							unk_0x6F6BA3FE885E6C91(unk_0xCAC02A13A55C50BC(Local_60.f_16), "Crate_Underwater", 1f);
						}
						unk_0x5D96D8530B3D0904(&iLocal_63, 16);
					}
				}
				else if (unk_0xFC0E4F7E386C43F8(iVar2) < 0.9f)
				{
					if (unk_0xCAC02A13A55C50BC(Local_60.f_16) != -1)
					{
						unk_0x6F6BA3FE885E6C91(unk_0xCAC02A13A55C50BC(Local_60.f_16), "Crate_Underwater", 0f);
					}
					unk_0x0674E58A79778E99(&iLocal_63, 16);
				}
			}
		}
	}
}

int func_114()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_60.f_19))
	{
		if (!unk_0xE934758D273C899A(unk_0x09AD4CE7DA179533(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_19), 0))
		{
			iVar0 = 1;
		}
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_60.f_19)))
		{
			iVar0 = 1;
		}
		if (func_115())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_116(Local_60.f_19))
			{
				unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_19), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_116(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		unk_0x8D30F6387EE75385(uParam0);
		return unk_0x526BC32A660C89E6(uParam0);
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	iVar0 = unk_0x11225ACFD0C1477E(false, 0);
	if (Local_60.f_13 != iVar0)
	{
		if (Local_60.f_13 > 0 || !unk_0xE9F78D191AD5EDBA(Local_60.f_2))
		{
			if (Local_60.f_13 < iVar0 || func_125(Local_60.f_13, 0, 1))
			{
				unk_0x28E5F00F131890E3(Local_60.f_13);
			}
		}
	}
	iVar0 = unk_0x9BFC2168CB5FCF68(false, 0);
	if (Local_60.f_14 != iVar0)
	{
		if (Local_60.f_14 > 0 || !unk_0xE9F78D191AD5EDBA(Local_60.f_3))
		{
			if (Local_60.f_14 < iVar0 || func_124(Local_60.f_14, 0, 1))
			{
				unk_0x0BEC04ECA8485A3A(Local_60.f_14);
			}
		}
	}
	iVar0 = unk_0xBF3DE18643F54472(false, 0);
	if (Local_60.f_15 != iVar0)
	{
		if (Local_60.f_15 < iVar0 || func_118(Local_60.f_15, 0, 1))
		{
			unk_0x3A4967AE7C71F999(Local_60.f_15);
		}
	}
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(2, iParam0, 1, bParam1, bParam2);
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_123(iParam0) - func_122(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_121(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_122(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_123(iParam0) - func_122(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_120(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122(int iParam0, bool bParam1)
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

int func_123(int iParam0)
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

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(0, iParam0, 1, bParam1, bParam2);
}

int func_125(int iParam0, bool bParam1, bool bParam2)
{
	return func_119(1, iParam0, 1, bParam1, bParam2);
}

void func_126()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_63, 10))
	{
		if (func_35(Local_60.f_2))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_65);
			unk_0xE9362E4D600DD12A(0, unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0xE9362E4D600DD12A(0, unk_0xB177666FAB6F4417(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x75ABDC5F81978924(uLocal_65);
			unk_0x5D96D8530B3D0904(&iLocal_63, 10);
		}
	}
}

int func_127()
{
	return Local_60;
}

int func_128()
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_18 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(joaat("p_cargo_chute_s"));
	if ((unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(joaat("p_cargo_chute_s"))) && func_129())
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	unk_0x3F423BF5B8125A50("P_cargo_chute_S");
	if (unk_0xB4AE0788C1587752("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_131()
{
	var uVar0;
	
	func_139(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_138())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	if (func_136(159))
	{
		if (!func_135())
		{
			return 1;
		}
	}
	if (func_136(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_132() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_132()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	switch (func_134())
	{
		case 0:
			return func_133();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_133()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_134()
{
	return Global_30768;
}

bool func_135()
{
	return Global_2450632.f_598;
}

int func_136(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_2460680;
}

bool func_138()
{
	return Global_2450632.f_593;
}

void func_139(var uParam0)
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
					func_140(iVar0);
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

void func_140(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_141(iVar2, &bVar3))
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

int func_141(int iParam0, var uParam1)
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

void func_142()
{
	wait(0);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		unk_0x142CC44DB769B57E(&iLocal_64);
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_19))
				{
					if (unk_0x713261485D0F1B6C(unk_0x09AD4CE7DA179533(Local_60.f_19), 0))
					{
						if (func_116(Local_60.f_19))
						{
							unk_0x3DF0294317E11E33(unk_0x09AD4CE7DA179533(Local_60.f_19), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_4))
				{
					if (unk_0xD59B17D2DFF98E26(unk_0x09AD4CE7DA179533(Local_60.f_4)))
					{
						if (func_116(Local_60.f_4))
						{
							unk_0x15AFB6CBDE990FB6(unk_0x09AD4CE7DA179533(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0xE5DBF9B6126856CA(Local_60.f_5))
				{
					if (func_116(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				wait(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_147(func_148(1, 1), 8, func_50());
	}
	func_146();
	func_70();
	func_145();
	func_144();
}

void func_144()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_145()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_63, 10))
	{
		unk_0xF82EA857DA10E0CD(&uLocal_65);
	}
}

void func_146()
{
	if (iLocal_66 != 0)
	{
		if (unk_0x83A8177D302E1A7E(iLocal_66))
		{
			unk_0xF7E25143642732EA(iLocal_66, 0);
			iLocal_66 = 0;
		}
	}
}

void func_147(int iParam0, int iParam1, var uParam2)
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

int func_148(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_37(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_88(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_149(struct<21> Param0)
{
	int iVar0;
	
	func_153(func_154(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(1);
	unk_0x28E5F00F131890E3(1);
	unk_0x3A4967AE7C71F999(2);
	func_151(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_60, 23);
	unk_0x35B62793EAE9ADDF(&vLocal_62, 97);
	if (!func_150())
	{
		return 0;
	}
	unk_0x256D93AFAE851A7A(0);
	if (unk_0xBFF81ED3B99522C7())
	{
		Local_60.f_17 = unk_0xD803B885F5E47A62();
		Local_60.f_6 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_13 = 1;
		Local_60.f_14 = 1;
		Local_60.f_15 = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_20 == 3)
		{
			Local_60.f_18 = 1;
		}
		iVar0 = unk_0x09AC81E49EA267F7(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x09AC81E49EA267F7(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	iLocal_67 = unk_0x09BE1E6DF7B80B43();
	if (unk_0x8CD06866876216F2())
	{
		vLocal_62[unk_0x57270EE11514DC67() /*3*/] = 0;
	}
	return 1;
}

int func_150()
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
		if (func_138())
		{
			return 0;
		}
		if (func_136(157))
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

int func_151(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_144();
			}
			else
			{
				return 0;
			}
		}
		if (!func_152())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0;
					}
				}
				if (func_138())
				{
					if (!bParam2)
					{
						func_144();
					}
					else
					{
						return 0;
					}
				}
				if (func_136(157))
				{
					if (!bParam2)
					{
						func_144();
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
					func_144();
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
				func_144();
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
			func_144();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_152()
{
	return Global_1312854;
}

void func_153(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_144();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_154(int iParam0)
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

