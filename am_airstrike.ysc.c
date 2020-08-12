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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x8CD06866876216F2())
	{
		func_111(ScriptParam_241);
	}
	while (true)
	{
		func_110();
		if (func_99())
		{
			func_95();
		}
		if (unk_0x8CD06866876216F2())
		{
			func_94();
			switch (func_93(unk_0x57270EE11514DC67()))
			{
				case 0:
					if (func_92() > 0)
					{
						Local_240[unk_0x57270EE11514DC67() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_92() == 3)
					{
						Local_240[unk_0x57270EE11514DC67() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_95();
					break;
			}
			if (unk_0xBFF81ED3B99522C7())
			{
				switch (func_92())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_238.f_1)
	{
		case 0:
			func_26();
			break;
		
		case 1:
			func_25();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_18();
	if (Local_238.f_53 && Local_238.f_50 < 10)
	{
		func_13();
	}
	if (Local_238.f_50 >= 10)
	{
		if (!func_12(&uLocal_65))
		{
			func_11(&uLocal_65, 0, 0);
		}
		else if (func_10(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_9())
	{
		Local_238 = 3;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
	{
		if (Local_238.f_55 == 1)
		{
			if (!Local_238.f_56)
			{
				if (((!unk_0xFEBC1E4EC9E001F0() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
				{
					func_7("AIRSTRIKE_3", -1);
					Local_238.f_56 = 1;
				}
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(unk_0xD803B885F5E47A62(), 1, 0))
		{
			Local_238 = 3;
		}
	}
	else if (func_4(unk_0xD803B885F5E47A62(), 1, 0) || func_3())
	{
		Local_238 = 3;
	}
	if (unk_0x22A8E52414415B76())
	{
		Local_238 = 3;
	}
	if (Global_2513890.f_223 || func_2(unk_0xD803B885F5E47A62()))
	{
		Local_238 = 3;
	}
}

int func_2(int iParam0)
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

bool func_3()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 0);
}

int func_4(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0))
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

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

bool func_6(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_9()
{
	return Global_1312418;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
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

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	iVar0 = unk_0x16F2683693E537C9();
	iVar3 = 200;
	if (unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
	{
		iVar0 = 0;
		iVar3 = 300;
	}
	if (func_17(vLocal_61))
	{
		if (func_15(Local_238.f_2))
		{
			vLocal_61 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_50)
	{
		case 0:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x16F2683693E537C9(), 1, 0, -1f, iVar0, 1, 1, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					iLocal_57 = 1;
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 750, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					func_11(&(Local_238.f_51), 0, 0);
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			else if (func_10(&(Local_238.f_51), 500, 0))
			{
				func_14(&(Local_238.f_51));
				Local_238.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_238.f_51)))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_237, Local_238.f_50))
				{
					vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1.z = vLocal_61.z;
					vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar2 = { vVar2 + Vector(0f, 0.1f, 0.1f) };
					unk_0xE82754C349C7B581(vVar2 + Vector(10f, 0f, 0f), &(vVar2.f_2), 0, 0);
					vVar2.z = (vVar2.z - 25f);
					unk_0x4A21BDDF4D038ECF(vVar1, vVar2, iVar3, 1, joaat("weapon_airstrike_rocket"), unk_0x1B50683925F00106(Local_238.f_2.f_3), 1, 0, -1f, iVar0, 1, 0, 0, 0, 0, 0);
					Local_238.f_50++;
					iLocal_57 = 0;
					unk_0x5D96D8530B3D0904(&iLocal_237, Local_238.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return !func_16(unk_0xB177666FAB6F4417(uParam0));
	}
	return 0;
}

int func_16(int iParam0)
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

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_15(Local_238.f_2))
	{
		iVar0 = unk_0xB177666FAB6F4417(Local_238.f_2);
		vVar2 = { unk_0x68F4C0EC296D3901(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
		}
		else if (func_24(unk_0xD803B885F5E47A62(), 1, 1))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
		}
	}
	if (iLocal_58 && !unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
	{
		if (!iLocal_59)
		{
			if (func_15(Local_238.f_2))
			{
				if (!unk_0x5A91F08DF773C39D(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0x0EB28750412C3A5A(vVar2, vVar1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = floor(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_19(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_23(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_22(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = iParam3;
		Global_1378678.f_3944.f_172[iVar0] = iParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_21())
		{
			Global_1378678.f_1130 = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_20())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_20()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_21()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_23(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
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

void func_25()
{
}

void func_26()
{
	vector3 vVar0;
	bool bVar1;
	
	func_90();
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (!iLocal_56 && !unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
			{
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_89();
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_42599, 10) || unk_0x6922D6661FD58CF6(unk_0x16F2683693E537C9(), joaat("weapon_flare"), 100f, &(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2), 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
				{
					Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
				}
				else if (func_88(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 = { vVar0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					unk_0xA37A90C62806D848(1);
				}
				if (!iLocal_55)
				{
					if (!func_87(Local_238.f_2.f_3))
					{
						if (func_15(Local_238.f_2))
						{
							func_86();
							unk_0xA3BF0AA5A2608191(unk_0x1B50683925F00106(Local_238.f_2.f_3));
							unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_238.f_2.f_3), uLocal_49);
							unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_238.f_2), round(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54 && !unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					if (func_85(unk_0x16F2683693E537C9()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_56();
	func_27();
}

void func_27()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_55();
			break;
		
		case 1:
			func_55();
			break;
		
		case 2:
			if (func_15(Local_238.f_2))
			{
				iLocal_58 = 1;
				iVar0 = unk_0xB177666FAB6F4417(Local_238.f_2);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_47))
				{
					iLocal_47 = unk_0x5C3B41825F6AC5A0(iVar0);
					unk_0xBC8E0A7390523199(iLocal_47, 16);
					unk_0xDC5B2F9D0CCE3A10(iLocal_47, "AIRSTRIKE_5");
					unk_0xF2D30B8ACAF12A39(iLocal_47, 0);
				}
				else
				{
					unk_0x436F3596830D7DC3(iLocal_47, ceil(unk_0xD9522BA9E27E1349(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0x0EB28750412C3A5A(vVar3, unk_0x68F4C0EC296D3901(iVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x13E40E622FDA7ED4(unk_0xB177666FAB6F4417(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235 && !unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
				{
					if (!Local_238.f_54)
					{
						if (!func_87(Local_238.f_2.f_3))
						{
							if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
							{
								if (unk_0x0EB28750412C3A5A(func_54(unk_0xD803B885F5E47A62()), unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x0EB28750412C3A5A(vVar3, unk_0x68F4C0EC296D3901(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_31(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_50 < 10)
				{
					if (!Local_238.f_53)
					{
						if (!func_17(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2))
						{
							if (func_30() == 2)
							{
								if (!func_12(&uLocal_63))
								{
									func_11(&uLocal_63, 0, 0);
								}
								else if (func_10(&uLocal_63, 7500, 0))
								{
									Local_238.f_53 = 1;
								}
								vVar1 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0x5A91F08DF773C39D(iVar0, Local_240[unk_0x57270EE11514DC67() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xBBE430A566D01EF3(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_53 = 1;
								}
							}
							else if (func_30() == 1)
							{
								Local_238.f_53 = 1;
								Local_238.f_50 = 100;
							}
						}
						else if (unk_0x5A91F08DF773C39D(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_53 = 1;
							Local_238.f_50 = 100;
							Local_238.f_54 = 1;
							if (!iLocal_236 && !unk_0xEAE0D21A50E6C7F4(Global_42599, 10))
							{
								func_31(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_15(Local_238.f_2) || func_87(Local_238.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 3:
			func_55();
			break;
	}
}

void func_28()
{
	int iVar0;
	
	if (!func_87(Local_238.f_2.f_3))
	{
		if (func_29(Local_238.f_2.f_3))
		{
			if (unk_0x526BC32A660C89E6(Local_238.f_2.f_3))
			{
				iVar0 = unk_0x1B50683925F00106(Local_238.f_2.f_3);
				unk_0xD458AC1C1D29C3B4(iVar0, 0, 0);
			}
		}
	}
}

int func_29(var uParam0)
{
	if (unk_0x83F012E6200426DB(uParam0))
	{
		return 1;
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0x8D30F6387EE75385(uParam0);
	}
	return 0;
}

int func_30()
{
	if (Local_238.f_55 == 1)
	{
		return Local_238.f_55;
	}
	else if (Local_238.f_55 == 2)
	{
		return Local_238.f_55;
	}
	if (!unk_0xD1BF3090E1F8300E(Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_55 = 1;
		return Local_238.f_55;
	}
	Local_238.f_55 = 2;
	return Local_238.f_55;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_50();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_38();
		func_33();
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
		func_52();
	}
	return 0;
}

void func_33()
{
	if (!func_34())
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

int func_34()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_37())
	{
		return 0;
	}
	if (func_35(unk_0xD803B885F5E47A62()))
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

bool func_35(int iParam0)
{
	return func_36(iParam0, 20);
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_37()
{
	return -1;
}

void func_38()
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

void func_39()
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

int func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
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

void func_42()
{
	if (func_49(14))
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
		Global_19486 = func_43();
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

var func_43()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_46(unk_0x16F2683693E537C9());
			if (func_45(iVar0) && (!func_49(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_49(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_50()
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

bool func_51(int iParam0, int iParam1)
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

void func_52()
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

Vector3 func_54(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0);
}

void func_55()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_47))
	{
		unk_0x142CC44DB769B57E(&iLocal_47);
	}
}

void func_56()
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_84(1);
			break;
		
		case 1:
			if (func_57())
			{
				func_84(2);
			}
			break;
		
		case 2:
			if (!func_15(Local_238.f_2))
			{
				if (func_87(Local_238.f_2.f_3))
				{
					func_84(3);
				}
			}
			else if (func_87(Local_238.f_2.f_3))
			{
				func_84(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_57()
{
	if (!func_12(&uLocal_67))
	{
		func_11(&uLocal_67, 0, 0);
	}
	else if (func_83(Local_238.f_2.f_1) && func_83(Local_238.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_67, 3000, 0))
		{
			if (func_61() && func_58())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58()
{
	if ((!unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3) && func_83(Local_238.f_2.f_3.f_1)) && unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_15(Local_238.f_2))
		{
			if (func_60(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(Local_238.f_2.f_3), 1);
				unk_0x6DF7BF67E86AAE86(unk_0x1B50683925F00106(Local_238.f_2.f_3), Global_1575000);
				unk_0xC743BD39A24D0583(unk_0x1B50683925F00106(Local_238.f_2.f_3), 0);
				unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_238.f_2.f_3), 1);
				func_59();
				unk_0x78ADC381772E3D54(unk_0x1B50683925F00106(Local_238.f_2.f_3), uLocal_48);
				unk_0xBC7068A83B14A734(unk_0xB177666FAB6F4417(Local_238.f_2), round(50f));
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x71199B01895C6202(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_59()
{
	if (!iLocal_50)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_48);
			unk_0x0C4243AF9A434F34(0, unk_0xB177666FAB6F4417(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x0C4243AF9A434F34(0, unk_0xB177666FAB6F4417(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x75ABDC5F81978924(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_60(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_61()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_83(Local_238.f_2.f_1))
		{
			if (unk_0xE3934829A331AF92("AIRSTRIKE_FLYOVER", 0))
			{
				func_79(&vVar0, &fVar1);
				if (func_65(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_62(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_14 = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_238.f_2), 2);
						unk_0x1E9649458B15960F(unk_0xB177666FAB6F4417(Local_238.f_2), false);
						unk_0xEF190091B5B9F5EB(unk_0xB177666FAB6F4417(Local_238.f_2), 1);
						unk_0xAC0C6241732E36F6(unk_0xB177666FAB6F4417(Local_238.f_2));
						unk_0x1AEF7184B203A58D(unk_0xB177666FAB6F4417(Local_238.f_2), 60f);
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_238.f_2), 1, 1, 0);
						unk_0x76452FEE1FDE16DD(unk_0xB177666FAB6F4417(Local_238.f_2), 1000);
						unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_238.f_2), 0);
						unk_0xB58CA658A628ED02(unk_0xB177666FAB6F4417(Local_238.f_2), 3);
						unk_0x411CC4F26F6C1C2E(unk_0xB177666FAB6F4417(Local_238.f_2));
						unk_0x71199B01895C6202(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_63(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_63(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_64(unk_0xD803B885F5E47A62(), vParam0, iParam2) > -1)
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

int func_64(int iParam0, vector3 vParam1, int iParam2)
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

int func_65(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_73(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_66(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_66(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_24(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_71(unk_0xD803B885F5E47A62()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_24(iVar1, 1, 1))
		{
			if (!func_68(iVar1, 0) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_67(iVar1) || !bParam8) && !Global_2425662[iVar1 /*421*/].f_259)
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
								if (unk_0x0EB28750412C3A5A(func_71(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x0EB28750412C3A5A(func_71(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_67(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_2425662[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_69(-1, 0) == 8;
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

int func_69(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_70();
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

int func_70()
{
	return Global_1312745;
}

Vector3 func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_72() && Global_1590535[iVar0 /*876*/].f_847) && !func_17(Global_1590535[iVar0 /*876*/].f_848))
	{
		return Global_1590535[iVar0 /*876*/].f_848;
	}
	return func_54(iParam0);
}

var func_72()
{
	return Global_2450632.f_17;
}

int func_73(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0)
		{
			if (func_24(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_67(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == -1 && uParam7) && bParam4) && func_74(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_54(iVar1), vParam0, 1) < fParam1)
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

int func_74(int iParam0)
{
	if (func_78(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_77(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_2513218))
	{
		return 1;
	}
	if (func_75(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_37())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	if (iParam0 != func_37())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_37();
}

struct<13> func_77(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_77(iParam0) };
		Global_2513231 = { func_77(iParam1) };
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

void func_79(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_81(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x877D3FF6F9D1F987((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_80(*uParam0, vLocal_60);
}

float func_80(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_81(vector3 vParam0, float fParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_82(vVar0, unk_0x79833B02DBD2A244(fParam1, fParam2)) };
	vVar0.z = unk_0x79833B02DBD2A244(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_82(vector3 vParam0, float fParam1)
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

bool func_83(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_84(int iParam0)
{
	Local_238.f_2.f_2 = iParam0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0x398B22FA3FCBDFA9(iParam0))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0);
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (unk_0xA30B8362589C124A(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_86()
{
	if (!iLocal_51)
	{
		if (func_15(Local_238.f_2))
		{
			unk_0xDD353D0E9C789D0E(&uLocal_49);
			unk_0x0C4243AF9A434F34(0, unk_0xB177666FAB6F4417(Local_238.f_2), 0, 0, Local_240[unk_0x57270EE11514DC67() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x0C4243AF9A434F34(0, unk_0xB177666FAB6F4417(Local_238.f_2), 0, 0, Local_238.f_2.f_14, 4, 60f, 25f, -1f, ceil((50f + 5f)), 20, 1);
			unk_0x75ABDC5F81978924(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_87(var uParam0)
{
	if (unk_0xE9F78D191AD5EDBA(uParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(uParam0));
	}
	return 1;
}

bool func_88(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_89()
{
	return Global_98796.f_345 > 0;
}

void func_90()
{
	if (!iLocal_234)
	{
		if (!func_87(Local_238.f_2.f_3))
		{
			func_91(&uLocal_69, 3, unk_0x1B50683925F00106(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_92()
{
	return Local_238;
}

int func_93(int iParam0)
{
	return Local_240[iParam0 /*5*/];
}

void func_94()
{
}

void func_95()
{
	if (unk_0xE9F78D191AD5EDBA(Local_238.f_2.f_3) && unk_0xE9F78D191AD5EDBA(Local_238.f_2))
	{
		if (func_15(Local_238.f_2) && !func_87(Local_238.f_2.f_3))
		{
			unk_0x0C4243AF9A434F34(unk_0x1B50683925F00106(Local_238.f_2.f_3), unk_0xB177666FAB6F4417(Local_238.f_2), 0, unk_0x16F2683693E537C9(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_97(func_98(1, 1), 11, func_37());
	func_96();
}

void func_96()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_97(int iParam0, int iParam1, var uParam2)
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

int func_98(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_68(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_99()
{
	var uVar0;
	
	func_107(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_106())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104(159))
	{
		if (!func_103())
		{
			return 1;
		}
	}
	if (func_104(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_100() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_100()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_100()
{
	switch (func_102())
	{
		case 0:
			return func_101();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_101()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_102()
{
	return Global_30768;
}

bool func_103()
{
	return Global_2450632.f_598;
}

int func_104(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_2460680;
}

bool func_106()
{
	return Global_2450632.f_593;
}

void func_107(var uParam0)
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
					func_108(iVar0);
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

void func_108(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_24(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_109(iVar2, &bVar3))
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

int func_109(int iParam0, var uParam1)
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

void func_110()
{
	wait(0);
}

void func_111(struct<21> Param0)
{
	func_117(func_118(Param0), Param0);
	unk_0x0BEC04ECA8485A3A(1);
	unk_0x28E5F00F131890E3(1);
	func_115(0, -1, 0);
	unk_0x9752E7BAEABA939E(&Local_238, 58);
	unk_0x35B62793EAE9ADDF(&Local_240, 11);
	unk_0x256D93AFAE851A7A(0);
	if (!func_114())
	{
		func_95();
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		vLocal_60 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0) };
	}
	if (func_4(unk_0xD803B885F5E47A62(), 1, 0))
	{
		bLocal_52 = true;
	}
	func_112(64, 1);
	Local_240[unk_0x57270EE11514DC67() /*5*/] = 0;
}

void func_112(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_113() /*10930*/].f_6174.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_113() /*10930*/].f_6174.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_113() /*10930*/].f_6174.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_113() /*10930*/].f_6174.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_113() /*10930*/].f_6174.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_113() /*10930*/].f_6174.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_113() /*10930*/].f_6174.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_113() /*10930*/].f_6174.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_113() /*10930*/].f_6174.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_113() /*10930*/].f_6174.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_113() /*10930*/].f_6174.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_113() /*10930*/].f_6174.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_113() /*10930*/].f_6174.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_113() /*10930*/].f_6174.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_113() /*10930*/].f_6174.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_113() /*10930*/].f_6174.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_113() /*10930*/].f_6174.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_113() /*10930*/].f_6174.f_30 = iVar0;
			break;
	}
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_114()
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
		if (func_106())
		{
			return 0;
		}
		if (func_104(157))
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

int func_115(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_96();
			}
			else
			{
				return 0;
			}
		}
		if (!func_116())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_106())
				{
					if (!bParam2)
					{
						func_96();
					}
					else
					{
						return 0;
					}
				}
				if (func_104(157))
				{
					if (!bParam2)
					{
						func_96();
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
					func_96();
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
				func_96();
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
			func_96();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_116()
{
	return Global_1312854;
}

void func_117(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_96();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_118(int iParam0)
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

